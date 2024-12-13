/*
 * Copyright 2024 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once
#include "applib/platform.h"
#include "layer.h"
#include "click.h"

//! @file action_bar_layer.h
//! @addtogroup UI
//! @{
//!   @addtogroup Layer Layers
//!   @{
//!     @addtogroup ActionBarLayer
//! \brief Vertical, bar-shaped control widget on the right edge of the window
//!
//! ![](action_bar_layer.png)
//! ActionBarLayer is a Layer that displays a bar on the right edge of the
//! window. The bar can contain up to 3 icons, each corresponding with one of
//! the buttons on the right side of the watch. The purpose of each icon is
//! to provide a hint (feed-forward) to what action a click on the respective
//! button will cause.
//!
//! The action bar is useful when there are a few (up to 3) main actions that
//! are desirable to be able to take quickly, literally with one press of a
//! button.
//!
//! <h3>More actions</h3>
//! If there are more than 3 actions the user might want to take:
//! * Try assigning the top and bottom icons of the action bar to the two most
//! immediate actions and use the middle icon to push a Window with a MenuLayer
//! with less immediate actions.
//! * Secondary actions that are not vital, can be "hidden" under a long click.
//! Try to group similar actions to one button. For example, in a Music app,
//! a single click on the top button is tied to the action to jump to the
//! previous track. Holding that same button means seek backwards.
//!
//! <h3>Directionality mapping</h3>
//! When the top and bottom buttons are used to control navigating through
//! a (potentially virtual, non-visible) list of items, follow this guideline:
//! * Tie the top button to the action that goes to the _previous_ item in the
//! list, for example "jump to previous track" in a Music app.
//! * Tie the bottom button to the action that goes to the _next_ item in the
//! list, for example "jump to next track" in a Music app.
//!
//! <h3>Geometry</h3>
//! * The action bar is 30 pixels wide. Use the \ref ACTION_BAR_WIDTH define.
//! * Icons should not be wider than 28 pixels, or taller than 18 pixels.
//! It is recommended to use a size of around 15 x 15 pixels for the "visual core" of the icon,
//! and extending or contracting where needed.
//! <h3>Example Code</h3>
//! The code example below shows how to do the initial setup of the action bar
//! in a window's `.load` handler.
//! Configuring the button actions is similar to the process when using
//! \ref window_set_click_config_provider(). See \ref Clicks for more
//! information.
//!
//! \code{.c}
//! ActionBarLayer *action_bar;
//!
//! // The implementation of my_next_click_handler and my_previous_click_handler
//! // is omitted for the sake of brevity. See the Clicks reference docs.
//!
//! void click_config_provider(void *context) {
//!   window_single_click_subscribe(BUTTON_ID_DOWN, (ClickHandler) my_next_click_handler);
//!   window_single_click_subscribe(BUTTON_ID_UP, (ClickHandler) my_previous_click_handler);
//! }
//!
//! void window_load(Window *window) {
//!   ...
//!   // Initialize the action bar:
//!   action_bar = action_bar_layer_create();
//!   // Associate the action bar with the window:
//!   action_bar_layer_add_to_window(action_bar, window);
//!   // Set the click config provider:
//!   action_bar_layer_set_click_config_provider(action_bar,
//!                                              click_config_provider);
//!
//!   // Set the icons:
//!   // The loading of the icons is omitted for brevity... See gbitmap_create_with_resource()
//!   action_bar_layer_set_icon_animated(action_bar, BUTTON_ID_UP, my_icon_previous, true);
//!   action_bar_layer_set_icon_animated(action_bar, BUTTON_ID_DOWN, my_icon_next, true);
//! }
//! \endcode
//!     @{

//! The width of the action bar in pixels, for all platforms.
#define _ACTION_BAR_WIDTH(plat) PBL_PLATFORM_SWITCH(plat, \
  /*aplite*/ 30, \
  /*basalt*/ 30, \
  /*chalk*/ 40, \
  /*diorite*/ 30, \
  /*emery*/ 34)

//! The width of the action bar in pixels.
#define ACTION_BAR_WIDTH _ACTION_BAR_WIDTH(PBL_PLATFORM_TYPE_CURRENT)

//! The maximum number of action bar items.
#define NUM_ACTION_BAR_ITEMS 3

struct Window;
struct GBitmap;
struct AppTimer;

typedef enum {
  ActionBarLayerIconPressAnimationNone = 0,
  ActionBarLayerIconPressAnimationMoveLeft,
  ActionBarLayerIconPressAnimationMoveUp,
  ActionBarLayerIconPressAnimationMoveRight,
  ActionBarLayerIconPressAnimationMoveDown,
} ActionBarLayerIconPressAnimation;

//! Data structure of an action bar.
//! @note an `ActionBarLayer *` can safely be casted to a `Layer *` and can
//! thus be used with all other functions that take a `Layer *` as an argument.
//! <br/>For example, the following is legal:
//! \code{.c}
//! ActionBarLayer action_bar;
//! ...
//! layer_set_hidden((Layer *)&action_bar, true);
//! \endcode
typedef struct {
  Layer layer;
  const struct GBitmap *icons[NUM_ACTION_BAR_ITEMS];
  struct Window *window;
  void *context;
  ClickConfigProvider click_config_provider;
  unsigned is_highlighted:NUM_ACTION_BAR_ITEMS;
  struct AppTimer *redraw_timer;
  GColor8 background_color;
  ActionBarLayerIconPressAnimation animation[NUM_ACTION_BAR_ITEMS];
  int64_t state_change_times[NUM_ACTION_BAR_ITEMS];
  int64_t icon_change_times[NUM_ACTION_BAR_ITEMS];
} ActionBarLayer;

//! Initializes the action bar and reverts any state back to the default state:
//! * Background color: \ref GColorBlack
//! * No click configuration provider (`NULL`)
//! * No icons
//! * Not added to / associated with any window, thus not catching any button input yet.
//! @note Do not call this function on an action bar that is still or already added to a window.
//! @param action_bar The action bar to initialize
void action_bar_layer_init(ActionBarLayer *action_bar);

//! Creates a new ActionBarLayer on the heap and initalizes it with the default values.
//! * Background color: \ref GColorBlack
//! * No click configuration provider (`NULL`)
//! * No icons
//! * Not added to / associated with any window, thus not catching any button input yet.
//! @return A pointer to the ActionBarLayer. `NULL` if the ActionBarLayer could not
//! be created
ActionBarLayer* action_bar_layer_create(void);

void action_bar_layer_deinit(ActionBarLayer *action_bar_layer);

//! Destroys a ActionBarLayer previously created by action_bar_layer_create
void action_bar_layer_destroy(ActionBarLayer *action_bar_layer);

//! Gets the "root" Layer of the action bar layer, which is the parent for the sub-
//! layers used for its implementation.
//! @param action_bar_layer Pointer to the ActionBarLayer for which to get the "root" Layer
//! @return The "root" Layer of the action bar layer.
//! @internal
//! @note The result is always equal to `(Layer *) action_bar_layer`.
Layer* action_bar_layer_get_layer(ActionBarLayer *action_bar_layer);

//! Sets the context parameter, which will be passed in to \ref ClickHandler
//! callbacks and the \ref ClickConfigProvider callback of the action bar.
//! @note By default, a pointer to the action bar itself is passed in, if the
//! context has not been set or if it has been set to `NULL`.
//! @param action_bar The action bar for which to assign the new context
//! @param context The new context
//! @see action_bar_layer_set_click_config_provider()
//! @see \ref Clicks
void action_bar_layer_set_context(ActionBarLayer *action_bar, void *context);

//! Sets the click configuration provider callback of the action bar.
//! In this callback your application can associate handlers to the different
//! types of click events for each of the buttons, see \ref Clicks.
//! @note If the action bar had already been added to a window and the window
//! is currently on-screen, the click configuration provider will be called
//! before this function returns. Otherwise, it will be called by the system
//! when the window becomes on-screen.
//! @note The `.raw` handlers cannot be used without breaking the automatic
//! highlighting of the segment of the action bar that for which a button is
//! @see action_bar_layer_set_icon()
//! @param action_bar The action bar for which to assign a new click
//! configuration provider
//! @param click_config_provider The new click configuration provider
void action_bar_layer_set_click_config_provider(ActionBarLayer *action_bar, ClickConfigProvider click_config_provider);

//! Sets an action bar icon onto one of the 3 slots as identified by `button_id`.
//! Only \ref BUTTON_ID_UP, \ref BUTTON_ID_SELECT and \ref BUTTON_ID_DOWN can be
//! used. The transition will not be animated.
//! Whenever an icon is set, the click configuration provider will be
//! called, to give the application the opportunity to reconfigure the button
//! interaction.
//! @param action_bar The action bar for which to set the new icon
//! @param button_id The identifier of the button for which to set the icon
//! @param icon Pointer to the \ref GBitmap icon
//! @see action_bar_layer_set_icon_animated()
//! @see action_bar_layer_set_icon_press_animation()
//! @see action_bar_layer_set_click_config_provider()
void action_bar_layer_set_icon(ActionBarLayer *action_bar, ButtonId button_id, const GBitmap *icon);

//! Sets an action bar icon onto one of the 3 slots as identified by `button_id`.
//! Only \ref BUTTON_ID_UP, \ref BUTTON_ID_SELECT and \ref BUTTON_ID_DOWN can be
//! used. Optionally, if `animated` is `true`, the transition will be animated.
//! Whenever an icon is set, the click configuration provider will be called,
//! to give the application the opportunity to reconfigure the button interaction.
//! @param action_bar The action bar for which to set the new icon
//! @param button_id The identifier of the button for which to set the icon
//! @param icon Pointer to the \ref GBitmap icon
//! @param animated True = animate the transition, False = do not animate the transition
//! @see action_bar_layer_set_icon()
//! @see action_bar_layer_set_icon_press_animation()
//! @see action_bar_layer_set_click_config_provider()
void action_bar_layer_set_icon_animated(ActionBarLayer *action_bar, ButtonId button_id,
                                        const GBitmap *icon, bool animated);

//! Sets the animation to use while a button is pressed on an ActionBarLayer.
//! By default we use ActionBarLayerIconPressAnimationMoveLeft
//! @param action_bar The action bar for which to set the press animation
//! @param button_id The button for which to set the press animation
//! @param animation The animation to use.
//! @see action_bar_layer_set_icon_animated()
//! @see action_bar_layer_set_click_config_provider()
void action_bar_layer_set_icon_press_animation(ActionBarLayer *action_bar, ButtonId button_id,
                                               ActionBarLayerIconPressAnimation animation);

//! Convenience function to clear out an existing icon.
//! All it does is call `action_bar_layer_set_icon(action_bar, button_id, NULL)`
//! @param action_bar The action bar for which to clear an icon
//! @param button_id The identifier of the button for which to clear the icon
//! @see action_bar_layer_set_icon()
void action_bar_layer_clear_icon(ActionBarLayer *action_bar, ButtonId button_id);

//! Adds the action bar's layer on top of the window's root layer. It also
//! adjusts the layout of the action bar to match the geometry of the window it
//! gets added to.
//! Lastly, it calls \ref window_set_click_config_provider_with_context() on
//! the window to set it up to work with the internal callback and raw click
//! handlers of the action bar, to enable the highlighting of the section of the
//! action bar when the user presses a button.
//! @note After this call, do not use
//! \ref window_set_click_config_provider_with_context() with the window that
//! the action bar has been added to (this would de-associate the action bar's
//! click config provider and context). Instead use
//! \ref action_bar_layer_set_click_config_provider() and
//! \ref action_bar_layer_set_context() to register the click configuration
//! provider to configure the buttons actions.
//! @note It is advised to call this is in the window's `.load` or `.appear`
//! handler. Make sure to call \ref action_bar_layer_remove_from_window() in the
//! window's `.unload` or `.disappear` handler.
//! @note Adding additional layers to the window's root layer after this calll
//! can occlude the action bar.
//! @param action_bar The action bar to associate with the window
//! @param window The window with which the action bar is to be associated
void action_bar_layer_add_to_window(ActionBarLayer *action_bar, struct Window *window);

//! Removes the action bar from the window and unconfigures the window's
//! click configuration provider. `NULL` is set as the window's new click config
//! provider and also as its callback context. If it has not been added to a
//! window before, this function is a no-op.
//! @param action_bar The action bar to de-associate from its current window
void action_bar_layer_remove_from_window(ActionBarLayer *action_bar);

//! Sets the background color of the action bar. Defaults to \ref GColorBlack.
//! The action bar's layer is automatically marked dirty.
//! @param action_bar The action bar of which to set the background color
//! @param background_color The new background color
void action_bar_layer_set_background_color(ActionBarLayer *action_bar, GColor background_color);

//!     @} // end addtogroup ActionBarLayer
//!   @} // end addtogroup Layer
//! @} // end addtogroup UI
