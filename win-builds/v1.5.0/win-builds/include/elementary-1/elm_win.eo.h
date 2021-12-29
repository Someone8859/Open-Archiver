#ifndef _ELM_WIN_EO_H_
#define _ELM_WIN_EO_H_

#ifndef _ELM_WIN_EO_TYPES
#define _ELM_WIN_EO_TYPES


#endif
#define ELM_WIN_CLASS elm_win_class_get()

const Eo_Class *elm_win_class_get(void) EINA_CONST;

/**
 *
 * No description supplied.
 *
 * @param[in] name No description supplied.
 * @param[in] type No description supplied.
 *
 */
EOAPI void  elm_obj_win_constructor(const char *name, Elm_Win_Type type);

/**
 *
 * Sets whether the window is a keyboard.
 *
 * @ingroup Win
 *
 * @param[in] is_keyboard If true, the window is a virtual keyboard
 *
 */
EOAPI void  elm_obj_win_keyboard_win_set(Eina_Bool is_keyboard);

/**
 *
 * Get whether the window is a keyboard.
 *
 * @return If the window is a virtual keyboard
 *
 * @ingroup Win
 *
 *
 */
EOAPI Eina_Bool  elm_obj_win_keyboard_win_get(void);

/**
 *
 * Set the window's autodel state.
 *
 * When closing the window in any way outside of the program control, like
 * pressing the X button in the titlebar or using a command from the
 * Window Manager, a "delete,request" signal is emitted to indicate that
 * this event occurred and the developer can take any action, which may
 * include, or not, destroying the window object.
 *
 * When the @p autodel parameter is set, the window will be automatically
 * destroyed when this event occurs, after the signal is emitted.
 * If @p autodel is @c EINA_FALSE, then the window will not be destroyed
 * and is up to the program to do so when it's required.
 *
 * @ingroup Win
 *
 * @param[in] autodel If true, the window will automatically delete itself when
closed
 *
 */
EOAPI void  elm_obj_win_autodel_set(Eina_Bool autodel);

/**
 *
 * Get the window's autodel state.
 *
 * @return If the window will automatically delete itself when closed
 *
 * @see elm_win_autodel_set()
 *
 * @ingroup Win
 *
 *
 */
EOAPI Eina_Bool  elm_obj_win_autodel_get(void);

/**
 *
 * Set the override state of a window.
 *
 * A window with @p override set to EINA_TRUE will not be managed by the
 * Window Manager. This means that no decorations of any kind will be shown
 * for it, moving and resizing must be handled by the application, as well
 * as the window visibility.
 *
 * This should not be used for normal windows, and even for not so normal
 * ones, it should only be used when there's a good reason and with a lot
 * of care. Mishandling override windows may result situations that
 * disrupt the normal workflow of the end user.
 *
 * @ingroup Win
 *
 * @param[in] override If true, the window is overridden
 *
 */
EOAPI void  elm_obj_win_override_set(Eina_Bool override);

/**
 *
 * Get the override state of a window.
 *
 * @return If true, the window is overridden
 *
 * @see elm_win_override_set()
 *
 * @ingroup Win
 *
 *
 */
EOAPI Eina_Bool  elm_obj_win_override_get(void);

/**
 *
 * Set the iconified state of a window.
 *
 * @ingroup Win
 *
 * @param[in] iconified If true, the window is iconified
 *
 */
EOAPI void  elm_obj_win_iconified_set(Eina_Bool iconified);

/**
 *
 * Get the iconified state of a window.
 *
 * @return If true, the window is iconified
 *
 * @ingroup Win
 *
 *
 */
EOAPI Eina_Bool  elm_obj_win_iconified_get(void);

/**
 *
 * Set the array of available window rotations.
 *
 * This function is used to set the available rotations to give the hints to WM.
 * WM will refer this hints and set the orientation window properly.
 *
 * @see elm_win_wm_rotation_available_rotations_get()
 *
 * ingroup Win
 * @since 1.9
 *
 * @param[in] rotations The array of rotation value.
 * @param[in] count The number of array of rotations
 *
 */
EOAPI void  elm_obj_win_wm_available_rotations_set(const int *rotations, unsigned int count);

/**
 *
 * Get the array of available window rotations.
 *
 * This function is used to get the available rotations.
 *
 * @see elm_win_wm_rotation_available_rotations_set()
 *
 * ingroup Win
 * @since 1.9
 *
 * @param[out] rotations The array of rotation value.
 * @param[out] count The number of array of rotations
 *
 */
EOAPI Eina_Bool  elm_obj_win_wm_available_rotations_get(int **rotations, unsigned int *count);

/**
 *
 * Set which zone this quickpanel should appear in
 *
 * @ingroup Win
 *
 * @param[in] zone The requested zone for this quickpanel
 *
 */
EOAPI void  elm_obj_win_quickpanel_zone_set(int zone);

/**
 *
 * Get which zone this quickpanel should appear in
 *
 * @return The requested zone for this quickpanel
 *
 * @ingroup Win
 *
 *
 */
EOAPI int  elm_obj_win_quickpanel_zone_get(void);

/**
 *
 * Set the maximized state of a window.
 *
 * @ingroup Win
 *
 * @param[in] maximized If true, the window is maximized
 *
 */
EOAPI void  elm_obj_win_maximized_set(Eina_Bool maximized);

/**
 *
 * Get the maximized state of a window.
 *
 * @return If true, the window is maximized
 *
 * @ingroup Win
 *
 *
 */
EOAPI Eina_Bool  elm_obj_win_maximized_get(void);

/**
 *
 * Set the modal state of a window.
 *
 * @ingroup Win
 *
 * @param[in] modal If true, the window is modal
 *
 */
EOAPI void  elm_obj_win_modal_set(Eina_Bool modal);

/**
 *
 * Get the modal state of a window.
 *
 * @return If true, the window is modal
 *
 * @ingroup Win
 *
 *
 */
EOAPI Eina_Bool  elm_obj_win_modal_get(void);

/**
 *
 * Set the icon name of the window
 *
 * @ingroup Win
 *
 * @param[in] icon_name The icon name to set
 *
 */
EOAPI void  elm_obj_win_icon_name_set(const char *icon_name);

/**
 *
 * Get the icon name of the window
 *
 * The returned string is an internal one and should not be freed or
 * modified. It will also be invalid if a new icon name is set or if
 * the window is destroyed.
 *
 * @return The icon name
 *
 * @ingroup Win
 *
 *
 */
EOAPI const char * elm_obj_win_icon_name_get(void);

/**
 *
 * Set the withdrawn state of a window.
 *
 * @ingroup Win
 *
 * @param[in] withdrawn If true, the window is withdrawn
 *
 */
EOAPI void  elm_obj_win_withdrawn_set(Eina_Bool withdrawn);

/**
 *
 * Get the withdrawn state of a window.
 *
 * @return If true, the window is withdrawn
 *
 * @ingroup Win
 *
 *
 */
EOAPI Eina_Bool  elm_obj_win_withdrawn_get(void);

/**
 *
 * Set the role of the window
 *
 * @ingroup Win
 *
 * @param[in] role The role to set
 *
 */
EOAPI void  elm_obj_win_role_set(const char *role);

/**
 *
 * Get the role of the window
 *
 * The returned string is an internal one and should not be freed or
 * modified. It will also be invalid if a new role is set or if
 * the window is destroyed.
 *
 * @return The role
 *
 * @ingroup Win
 *
 *
 */
EOAPI const char * elm_obj_win_role_get(void);

/**
 *
 * Set the window stepping used with sizing calculation
 *
 * Base size + stepping is what is calculated for window sizing restrictions.
 *
 * @ingroup Win
 * @see elm_win_size_step_get
 * @see elm_win_size_base_set
 * @since 1.7
 *
 * @param[in] w The stepping width (0 disables)
 * @param[in] h The stepping height (0 disables)
 *
 */
EOAPI void  elm_obj_win_size_step_set(int w, int h);

/**
 *
 * Get the stepping of a window.
 *
 * @ingroup Win
 * @see elm_win_size_base_set
 * @see elm_win_size_step_set
 * @since 1.7
 *
 * @param[out] w The stepping width (0 disables)
 * @param[out] h The stepping height (0 disables)
 *
 */
EOAPI void  elm_obj_win_size_step_get(int *w, int *h);

/**
 *
 * Set the style for the focus highlight on this window
 *
 * Sets the style to use for theming the highlight of focused objects on
 * the given window. If @p style is NULL, the default will be used.
 *
 * @ingroup Win
 *
 * @param[in] style The style to set
 *
 */
EOAPI void  elm_obj_win_focus_highlight_style_set(const char *style);

/**
 *
 * Get the style set for the focus highlight object
 *
 * Get the style set for this windows highlight object, or NULL if none
 * is set.
 *
 * @return The style set or NULL if none was. Default is used in that case.
 *
 * @ingroup Win
 *
 *
 */
EOAPI const char * elm_obj_win_focus_highlight_style_get(void);

/**
 *
 * Set the borderless state of a window.
 *
 * This function requests the Window Manager to not draw any decoration
 * around the window.
 *
 * @ingroup Win
 *
 * @param[in] borderless If true, the window is borderless
 *
 */
EOAPI void  elm_obj_win_borderless_set(Eina_Bool borderless);

/**
 *
 * Get the borderless state of a window.
 *
 * @return If true, the window is borderless
 *
 * @ingroup Win
 *
 *
 */
EOAPI Eina_Bool  elm_obj_win_borderless_get(void);

/**
 *
 * Constrain the maximum width and height of a window to the width and height of its screen
 *
 * When @p constrain is true, @p obj will never resize larger than the screen.
 * @ingroup Win
 *
 * @param[in] constrain EINA_TRUE to restrict the window's maximum size, EINA_FALSE to disable restriction
 *
 */
EOAPI void  elm_obj_win_screen_constrain_set(Eina_Bool constrain);

/**
 *
 * Retrieve the constraints on the maximum width and height of a window relative to the width and height of its screen
 *
 * When this function returns true, @p obj will never resize larger than the screen.
 * @return EINA_TRUE to restrict the window's maximum size, EINA_FALSE to disable restriction
 *
 * @ingroup Win
 *
 *
 */
EOAPI Eina_Bool  elm_obj_win_screen_constrain_get(void);

/**
 *
 * Set the array of available profiles to a window.
 *
 * @ingroup Win
 * @since 1.8
 *
 * @param[in] profiles The string array of available profiles
 * @param[in] count The number of members in profiles
 *
 */
EOAPI void  elm_obj_win_available_profiles_set(const char **profiles, unsigned int count);

/**
 *
 * Get the array of available profiles of a window.
 *
 * @return EINA_TRUE if available profiles exist, EINA_FALSE otherwise
 *
 * @ingroup Win
 * @since 1.8
 *
 * @param[out] profiles The string array of available profiles
 * @param[out] count The number of members in profiles
 *
 */
EOAPI Eina_Bool  elm_obj_win_available_profiles_get(char ***profiles, unsigned int *count);

/**
 *
 * Set the enabled status for the focus highlight in a window
 *
 * This function will enable or disable the focus highlight only for the
 * given window, regardless of the global setting for it
 *
 * @ingroup Win
 *
 * @param[in] enabled The enabled value for the highlight
 *
 */
EOAPI void  elm_obj_win_focus_highlight_enabled_set(Eina_Bool enabled);

/**
 *
 * Get the enabled value of the focus highlight for this window
 *
 * @return EINA_TRUE if enabled, EINA_FALSE otherwise
 *
 * @ingroup Win
 *
 *
 */
EOAPI Eina_Bool  elm_obj_win_focus_highlight_enabled_get(void);

/**
 *
 * Set the title of the window
 *
 * @ingroup Win
 *
 * @param[in] title The title to set
 *
 */
EOAPI void  elm_obj_win_title_set(const char *title);

/**
 *
 * Get the title of the window
 *
 * The returned string is an internal one and should not be freed or
 * modified. It will also be invalid if a new title is set or if
 * the window is destroyed.
 *
 * @return The title
 *
 * @ingroup Win
 *
 *
 */
EOAPI const char * elm_obj_win_title_get(void);

/**
 *
 * Set the alpha channel state of a window.
 *
 * If @p alpha is EINA_TRUE, the alpha channel of the canvas will be enabled
 * possibly making parts of the window completely or partially transparent.
 * This is also subject to the underlying system supporting it, like for
 * example, running under a compositing manager. If no compositing is
 * available, enabling this option will instead fallback to using shaped
 * windows, with elm_win_shaped_set().
 *
 * @see elm_win_alpha_set()
 *
 * @ingroup Win
 *
 * @param[in] alpha EINA_TRUE if the window alpha channel is enabled, EINA_FALSE otherwise
 *
 */
EOAPI void  elm_obj_win_alpha_set(Eina_Bool alpha);

/**
 *
 * Get the alpha channel state of a window.
 *
 * @return EINA_TRUE if the window alpha channel is enabled, EINA_FALSE
 * otherwise
 *
 * @ingroup Win
 *
 *
 */
EOAPI Eina_Bool  elm_obj_win_alpha_get(void);

/**
 *
 * Set the urgent state of a window.
 *
 * @ingroup Win
 *
 * @param[in] urgent If true, the window is urgent
 *
 */
EOAPI void  elm_obj_win_urgent_set(Eina_Bool urgent);

/**
 *
 * Get the urgent state of a window.
 *
 * @return If true, the window is urgent
 *
 * @ingroup Win
 *
 *
 */
EOAPI Eina_Bool  elm_obj_win_urgent_get(void);

/**
 *
 * Set the rotation of the window.
 *
 * Most engines only work with multiples of 90.
 *
 * This function is used to set the orientation of the window @p obj to
 * match that of the screen. The window itself will be resized to adjust
 * to the new geometry of its contents. If you want to keep the window size,
 * see elm_win_rotation_with_resize_set().
 *
 * @ingroup Win
 *
 * @param[in] rotation The rotation of the window, in degrees (0-360),
counter-clockwise.
 *
 */
EOAPI void  elm_obj_win_rotation_set(int rotation);

/**
 *
 * Get the rotation of the window.
 *
 * @return The rotation of the window in degrees (0-360)
 *
 * @see elm_win_rotation_set()
 * @see elm_win_rotation_with_resize_set()
 *
 * @ingroup Win
 *
 *
 */
EOAPI int  elm_obj_win_rotation_get(void);

/**
 *
 * Set a window object's icon
 *
 * This sets an image to be used as the icon for the given window, in
 * the window manager decoration part. The exact pixel dimensions of
 * the object (not object size) will be used, and the image pixels
 * will be used as-is when this function is called. If the image
 * object has been updated, then call this function again to source
 * the image pixels and put them on the window's icon. Note that
 * <b>only Evas image objects are allowed</b>, for
 *
 * Example of usage:
 * @code
 * icon = evas_object_image_add(evas_object_evas_get(elm_window));
 * evas_object_image_file_set(icon, "/path/to/the/icon", NULL);
 * elm_win_icon_object_set(elm_window, icon);
 * evas_object_show(icon);
 * @endcode
 *
 * @ingroup Win
 *
 * @param[in] icon The Evas image object to use for an icon
 *
 */
EOAPI void  elm_obj_win_icon_object_set(Evas_Object *icon);

/**
 *
 * Get the icon object used for the window
 *
 * The object returns is the one marked by elm_win_icon_object_set() as the
 * object to use for the window icon.
 *
 * @return The icon object set
 *
 * @ingroup Win
 *
 *
 */
EOAPI const Evas_Object * elm_obj_win_icon_object_get(void);

/**
 *
 * Set the minor priority of a quickpanel window
 *
 * @ingroup Win
 *
 * @param[in] priority The minor priority for this quickpanel
 *
 */
EOAPI void  elm_obj_win_quickpanel_priority_minor_set(int priority);

/**
 *
 * Get the minor priority of a quickpanel window
 *
 * @return The minor priority of this quickpanel
 *
 * @ingroup Win
 *
 *
 */
EOAPI int  elm_obj_win_quickpanel_priority_minor_get(void);

/**
 *
 * Set the sticky state of the window.
 *
 * Hints the Window Manager that the window in @p obj should be left fixed
 * at its position even when the virtual desktop it's on moves or changes.
 *
 * @ingroup Win
 *
 * @param[in] sticky If true, the window's sticky state is enabled
 *
 */
EOAPI void  elm_obj_win_sticky_set(Eina_Bool sticky);

/**
 *
 * Get the sticky state of the window.
 *
 * @return If true, the window's sticky state is enabled
 *
 * @see elm_win_sticky_set()
 *
 * @ingroup Win
 *
 *
 */
EOAPI Eina_Bool  elm_obj_win_sticky_get(void);

/**
 *
 * Sets the keyboard mode of the window.
 *
 * @ingroup Win
 *
 * @param[in] mode The mode to set, one of #Elm_Win_Keyboard_Mode
 *
 */
EOAPI void  elm_obj_win_keyboard_mode_set(Elm_Win_Keyboard_Mode mode);

/**
 *
 * Get the keyboard mode of the window.
 *
 * @return The mode, one of #Elm_Win_Keyboard_Mode
 *
 * @ingroup Win
 *
 *
 */
EOAPI Elm_Win_Keyboard_Mode  elm_obj_win_keyboard_mode_get(void);

/**
 *
 * Set the animate status for the focus highlight for this window.
 *
 * This function will enable or disable the animation of focus highlight only
 * for the given window, regardless of the global setting for it
 *
 * @ingroup Win
 *
 * @param[in] animate The enabled value for the highlight animation
 *
 */
EOAPI void  elm_obj_win_focus_highlight_animate_set(Eina_Bool animate);

/**
 *
 * Get the animate value of the focus highlight for this window
 *
 * @return EINA_TRUE if animation is enabled, EINA_FALSE otherwise
 *
 * @ingroup Win
 *
 *
 */
EOAPI Eina_Bool  elm_obj_win_focus_highlight_animate_get(void);

/**
 *
 * Set the aspect ratio of a window.
 *
 * @ingroup Win
 *
 * @param[in] aspect If 0, the window has no aspect limits, otherwise it is
width divided by height
 *
 */
EOAPI void  elm_obj_win_aspect_set(double aspect);

/**
 *
 * Get the aspect ratio of a window.
 *
 * @return The aspect ratio set (0 by default)
 *
 * @ingroup Win
 *
 *
 */
EOAPI double  elm_obj_win_aspect_get(void);

/**
 *
 * Set the major priority of a quickpanel window
 *
 * @ingroup Win
 *
 * @param[in] priority The major priority for this quickpanel
 *
 */
EOAPI void  elm_obj_win_quickpanel_priority_major_set(int priority);

/**
 *
 * Get the major priority of a quickpanel window
 *
 * @return The major priority of this quickpanel
 *
 * @ingroup Win
 *
 *
 */
EOAPI int  elm_obj_win_quickpanel_priority_major_get(void);

/**
 *
 * Sets the indicator opacity mode of the window.
 *
 * @ingroup Win
 *
 * @param[in] mode The mode to set, one of #Elm_Win_Indicator_Opacity_Mode
 *
 */
EOAPI void  elm_obj_win_indicator_opacity_set(Elm_Win_Indicator_Opacity_Mode mode);

/**
 *
 * Get the indicator opacity mode of the window.
 *
 * @return The mode, one of #Elm_Win_Indicator_Opacity_Mode
 *
 * @ingroup Win
 *
 *
 */
EOAPI Elm_Win_Indicator_Opacity_Mode  elm_obj_win_indicator_opacity_get(void);

/**
 *
 * Set the demand_attention state of a window.
 *
 * @ingroup Win
 *
 * @param[in] demand_attention If true, the window is demand_attention
 *
 */
EOAPI void  elm_obj_win_demand_attention_set(Eina_Bool demand_attention);

/**
 *
 * Get the demand_attention state of a window.
 *
 * @return If true, the window is demand_attention
 *
 * @ingroup Win
 *
 *
 */
EOAPI Eina_Bool  elm_obj_win_demand_attention_get(void);

/**
 *
 * Set the preferred rotation value.
 *
 * This function is used to set the orientation of window @p obj to spicific angle fixed.
 *
 * @see elm_win_wm_rotation_preferred_rotation_get()
 *
 * ingroup Win
 * @since 1.9
 *
 * @param[in] rotation The preferred rotation of the window in degrees (0-360),
counter-clockwise.
 *
 */
EOAPI void  elm_obj_win_wm_preferred_rotation_set(int rotation);

/**
 *
 * Get the preferred rotation value.
 *
 * This function is used to get the preferred rotoation value.
 *
 * @return The preferred rotation of the window in degrees (0-360),
 * counter-clockwise.
 *
 * @see elm_win_wm_rotation_preferred_rotation_set()
 *
 * ingroup Win
 * @since 1.9
 *
 *
 */
EOAPI int  elm_obj_win_wm_preferred_rotation_get(void);

/**
 *
 * Set the layer of the window.
 *
 * What this means exactly will depend on the underlying engine used.
 *
 * In the case of X11 backed engines, the value in @p layer has the
 * following meanings:
 * @li < 3: The window will be placed below all others.
 * @li > 5: The window will be placed above all others.
 * @li other: The window will be placed in the default layer.
 *
 * @ingroup Win
 *
 * @param[in] layer The layer of the window
 *
 */
EOAPI void  elm_obj_win_layer_set(int layer);

/**
 *
 * Get the layer of the window.
 *
 * @return The layer of the window
 *
 * @see elm_win_layer_set()
 *
 * @ingroup Win
 *
 *
 */
EOAPI int  elm_obj_win_layer_get(void);

/**
 *
 * Set the profile of a window.
 *
 * @ingroup Win
 * @since 1.8
 *
 * @param[in] profile The string value of a window profile
 *
 */
EOAPI void  elm_obj_win_profile_set(const char *profile);

/**
 *
 * Get the profile of a window.
 *
 * @return The string value of a window profile, or NULL if none exists
 *
 * @ingroup Win
 * @since 1.8
 *
 *
 */
EOAPI const char * elm_obj_win_profile_get(void);

/**
 *
 * Set the shaped state of a window.
 *
 * Shaped windows, when supported, will render the parts of the window that
 * has no content, transparent.
 *
 * If @p shaped is EINA_FALSE, then it is strongly advised to have some
 * background object or cover the entire window in any other way, or the
 * parts of the canvas that have no data will show framebuffer artifacts.
 *
 * @see elm_win_alpha_set()
 *
 * @ingroup Win
 *
 * @param[in] shaped If true, the window is shaped
 *
 */
EOAPI void  elm_obj_win_shaped_set(Eina_Bool shaped);

/**
 *
 * Get the shaped state of a window.
 *
 * @return If true, the window is shaped
 *
 * @see elm_win_shaped_set()
 *
 * @ingroup Win
 *
 *
 */
EOAPI Eina_Bool  elm_obj_win_shaped_get(void);

/**
 *
 * Set the fullscreen state of a window.
 *
 * @ingroup Win
 *
 * @param[in] fullscreen If true, the window is fullscreen
 *
 */
EOAPI void  elm_obj_win_fullscreen_set(Eina_Bool fullscreen);

/**
 *
 * Get the fullscreen state of a window.
 *
 * @return If true, the window is fullscreen
 *
 * @ingroup Win
 *
 *
 */
EOAPI Eina_Bool  elm_obj_win_fullscreen_get(void);

/**
 *
 * Set the manual rotation done mode.
 *
 * This function is used to set or reset the manual rotation done mode.
 * the message of rotation done is sent to WM after rendering its canvas in Ecore_Evas.
 * but if set the manual rotation done mode,
 * it's disabled and user should call the "elm_win_wm_rotation_manual_done" explicitly to sends the message.
 *
 * @see elm_win_wm_rotation_manual_rotation_done_get()
 * @see elm_win_wm_rotation_manual_rotation_done()
 *
 * ingroup Win
 * @since 1.9
 *
 * @param[in] set EINA_TRUE means to set manual rotation done mode EINA_FALSE otherwise.
 *
 */
EOAPI void  elm_obj_win_wm_manual_rotation_done_set(Eina_Bool set);

/**
 *
 * Get the state of manual rotation done mode.
 *
 * This function is used to get the state of manual rotation done mode.
 *
 * @return @c EINA_TRUE manual rotationn done mode, @c EINA_FALSE otherwise.
 *
 * @see elm_win_wm_rotation_manual_rotation_done_set()
 * @see elm_win_wm_rotation_manual_rotation_done()
 *
 * ingroup Win
 * @since 1.9
 *
 *
 */
EOAPI Eina_Bool  elm_obj_win_wm_manual_rotation_done_get(void);

/**
 *
 * Sets the indicator mode of the window.
 *
 * @ingroup Win
 *
 * @param[in] mode The mode to set, one of #Elm_Win_Indicator_Mode
 *
 */
EOAPI void  elm_obj_win_indicator_mode_set(Elm_Win_Indicator_Mode mode);

/**
 *
 * Get the indicator mode of the window.
 *
 * @return The mode, one of #Elm_Win_Indicator_Mode
 *
 * @ingroup Win
 *
 *
 */
EOAPI Elm_Win_Indicator_Mode  elm_obj_win_indicator_mode_get(void);

/**
 *
 * Set if this window is an illume conformant window
 *
 * @ingroup Win
 *
 * @param[in] conformant The conformant flag (1 = conformant, 0 = non-conformant)
 *
 */
EOAPI void  elm_obj_win_conformant_set(Eina_Bool conformant);

/**
 *
 * Get if this window is an illume conformant window
 *
 * @return A boolean if this window is illume conformant or not
 *
 * @ingroup Win
 *
 *
 */
EOAPI Eina_Bool  elm_obj_win_conformant_get(void);

/**
 *
 * Set the base window size used with stepping calculation
 *
 * Base size + stepping is what is calculated for window sizing restrictions.
 *
 * @ingroup Win
 * @see elm_win_size_step_set
 * @see elm_win_size_base_get
 * @since 1.7
 *
 * @param[in] w The base width
 * @param[in] h The base height
 *
 */
EOAPI void  elm_obj_win_size_base_set(int w, int h);

/**
 *
 * Get the base size of a window.
 *
 * @ingroup Win
 * @see elm_win_size_base_set
 * @see elm_win_size_step_set
 * @since 1.7
 *
 * @param[out] w The base width
 * @param[out] h The base height
 *
 */
EOAPI void  elm_obj_win_size_base_get(int *w, int *h);

/**
 *
 * Set a window to be an illume quickpanel window
 *
 * By default window objects are not quickpanel windows.
 *
 * @ingroup Win
 *
 * @param[in] quickpanel The quickpanel flag (1 = quickpanel, 0 = normal window)
 *
 */
EOAPI void  elm_obj_win_quickpanel_set(Eina_Bool quickpanel);

/**
 *
 * Get if this window is a quickpanel or not
 *
 * @return A boolean if this window is a quickpanel or not
 *
 * @ingroup Win
 *
 *
 */
EOAPI Eina_Bool  elm_obj_win_quickpanel_get(void);

/**
 *
 * Rotates the window and resizes it.
 *
 * Like elm_win_rotation_set(), but it also resizes the window's contents so
 * that they fit inside the current window geometry.
 *
 * @ingroup Win
 *
 * @param[in] rotation The rotation of the window in degrees (0-360),
counter-clockwise.
 *
 */
EOAPI void  elm_obj_win_rotation_with_resize_set(int rotation);

/**
 *
 * Set the window to be skipped by keyboard focus
 *
 * This sets the window to be skipped by normal keyboard input. This means
 * a window manager will be asked to not focus this window as well as omit
 * it from things like the taskbar, pager, "alt-tab" list etc. etc.
 *
 * Call this and enable it on a window BEFORE you show it for the first time,
 * otherwise it may have no effect.
 *
 * Use this for windows that have only output information or might only be
 * interacted with by the mouse or fingers, and never for typing input.
 * Be careful that this may have side-effects like making the window
 * non-accessible in some cases unless the window is specially handled. Use
 * this with care.
 *
 * @ingroup Win
 *
 * @param[in] skip The skip flag state (EINA_TRUE if it is to be skipped)
 *
 */
EOAPI void  elm_obj_win_prop_focus_skip_set(Eina_Bool skip);

/**
 *
 * Get the screen position of a window.
 *
 * @ingroup Win
 *
 * @param[out] x The int to store the x coordinate to
 * @param[out] y The int to store the y coordinate to
 *
 */
EOAPI void  elm_obj_win_screen_position_get(int *x, int *y);

/**
 *
 * Query whether window manager supports window rotation or not.
 *
 * The window manager rotation allows the WM to controls the rotation of application windows.
 * It is designed to support synchronized rotation for the multiple application windows at same time.
 *
 * @return @c EINA_TRUE if the window manager rotation is supported, @c EINA_FALSE otherwise.
 *
 * @see elm_win_wm_rotation_supported_get()
 * @see elm_win_wm_rotation_preferred_rotation_set()
 * @see elm_win_wm_rotation_preferred_rotation_get()
 * @see elm_win_wm_rotation_available_rotations_set()
 * @see elm_win_wm_rotation_available_rotations_get()
 * @see elm_win_wm_rotation_manual_rotation_done_set()
 * @see elm_win_wm_rotation_manual_rotation_done_get()
 * @see elm_win_wm_rotation_manual_rotation_done()
 *
 * @ingroup Win
 * @since 1.9
 *
 *
 */
EOAPI Eina_Bool  elm_obj_win_wm_rotation_supported_get(void);

/**
 *
 * Get the Ecore_X_Window of an Evas_Object
 *
 * @return The Ecore_X_Window of @p obj
 *
 * @ingroup Win
 *
 *
 */
EOAPI Ecore_X_Window  elm_obj_win_xwindow_get(void);

/**
 *
 * Determine whether a window has focus
 * @return EINA_TRUE if the window exists and has focus, else EINA_FALSE
 *
 * @ingroup Win
 *
 *
 */
EOAPI Eina_Bool  elm_obj_win_focus_get(void);

/**
 *
 * Get screen geometry details for the screen that a window is on
 * @ingroup Win
 *
 * @param[out] x where to return the horizontal offset value. May be NULL.
 * @param[out] y where to return the vertical offset value. May be NULL.
 * @param[out] w where to return the width value. May be NULL.
 * @param[out] h where to return the height value. May be NULL.
 *
 */
EOAPI void  elm_obj_win_screen_size_get(int *x, int *y, int *w, int *h);

/**
 *
 * Get the Main Menu of a window.
 *
 * @return The Main Menu of the window (NULL if error).
 *
 * @ingroup Win
 *
 *
 */
EOAPI Evas_Object * elm_obj_win_main_menu_get(void);

/**
 *
 * Get the Ecore_Wl_Window of an Evas_Object
 *
 * @return The Ecore_Wl_Window of @p obj
 *
 * @ingroup Win
 *
 *
 */
EOAPI Ecore_Wl_Window * elm_obj_win_wl_window_get(void);

/**
 *
 * Get the Ecore_Window of an Evas_Object
 *
 * When Elementary is using a Wayland engine, this function will return the surface id of the elm window's surface.
 *
 * @return The Ecore_Window of an Evas_Object
 *
 * @ingroup Win
 * @since 1.8
 *
 *
 */
EOAPI Ecore_Window  elm_obj_win_window_id_get(void);

/**
 *
 * Get screen dpi for the screen that a window is on
 * @ingroup Win
 * @since 1.7
 *
 * @param[out] xdpi Pointer to value to store return horizontal dpi. May be NULL.
 * @param[out] ydpi Pointer to value to store return vertical dpi. May be NULL.
 *
 */
EOAPI void  elm_obj_win_screen_dpi_get(int *xdpi, int *ydpi);

/**
 *
 * Get the inlined image object handle
 *
 * When you create a window with elm_win_add() of type ELM_WIN_INLINED_IMAGE,
 * then the window is in fact an evas image object inlined in the parent
 * canvas. You can get this object (be careful to not manipulate it as it
 * is under control of elementary), and use it to do things like get pixel
 * data, save the image to a file, etc.
 *
 * @return The inlined image object, or NULL if none exists
 *
 * @ingroup Win
 *
 *
 */
EOAPI Evas_Object * elm_obj_win_inlined_image_object_get(void);

/**
 *
 * Get the type of a window.
 *
 * @return The type of a window object. If the object is not window object, return ELM_WIN_UNKNOWN.
 *
 * @ingroup Win
 *
 *
 */
EOAPI Elm_Win_Type  elm_obj_win_type_get(void);

/**
 *
 * Set the noblank property of a window.
 *
 * The "noblank" property is a way to request the display on which
 * the windowis shown does not blank, screensave or otherwise hide
 * or obscure the window. It is intended for uses such as media
 * playback on a television where a user may not want to be
 * interrupted by an idle screen. The noblank property may have no
 * effect if the window is iconified/minimized or hidden.
 *
 * @since 1.11
 *
 * @ingroup Win
 *
 * @param[in] noblank If true, the window is set to noblank
 *
 */
EOAPI void  elm_obj_win_noblank_set(Eina_Bool noblank);

/**
 *
 * Get the noblank property of a window.
 *
 * @return If true, the window has "noblank" set.
 *
 * @since 1.11
 *
 * @ingroup Win
 *
 *
 */
EOAPI Eina_Bool  elm_obj_win_noblank_get(void);

/**
 *
 * To notify the rotation done to WM manually.
 *
 * This function is used to notify the rotation done to WM manually.
 *
 * @see elm_win_wm_rotation_manual_rotation_done_set()
 * @see elm_win_wm_rotation_manual_rotation_done_get()
 *
 * ingroup Win
 * @since 1.9
 *
 *
 */
EOAPI void  elm_obj_win_wm_manual_rotation_done(void);

/**
 *
 * Create a socket to provide the service for Plug widget
 *
 * @return If socket creation is successful
 *
 * @ingroup Win
 *
 * @param[in] svcname The name of the service to be advertised. ensure that it is unique (when combined with @p svcnum) otherwise creation may fail.
 * @param[in] svcnum A number (any value, 0 being the common default) to differentiate multiple instances of services with the same name.
 * @param[in] svcsys A boolean that if true, specifies to create a system-wide service all users can connect to, otherwise the service is private to the user id that created the service.
 *
 */
EOAPI Eina_Bool  elm_obj_win_socket_listen(const char *svcname, int svcnum, Eina_Bool svcsys);

/**
 *
 * Send a command to the windowing environment
 *
 * This is intended to work in touchscreen or small screen device
 * environments where there is a more simplistic window management policy in
 * place. This uses the window object indicated to select which part of the
 * environment to control (the part that this window lives in), and provides
 * a command and an optional parameter structure (use NULL for this if not
 * needed).
 *
 * @ingroup Win
 *
 * @param[in] command The command to send
 * @param[in] params Optional parameters for the command
 *
 */
EOAPI void  elm_obj_win_illume_command_send(Elm_Illume_Command command, void *params);

/**
 *
 * Activate a window object.
 *
 * This function sends a request to the Window Manager to activate the
 * window pointed by @p obj. If honored by the WM, the window will receive
 * the keyboard focus.
 *
 * @note This is just a request that a Window Manager may ignore, so calling
 * this function does not ensure in any way that the window will be the
 * active one after it.
 *
 * @ingroup Win
 *
 *
 */
EOAPI void  elm_obj_win_activate(void);

/**
 *
 * Add @p subobj as a resize object of window @p obj.
 *
 *
 * Setting an object as a resize object of the window means that the
 * @p subobj child's size and position will be controlled by the window
 * directly. That is, the object will be resized to match the window size
 * and should never be moved or resized manually by the developer.
 *
 * In addition, resize objects of the window control what the minimum size
 * of it will be, as well as whether it can or not be resized by the user.
 *
 * For the end user to be able to resize a window by dragging the handles
 * or borders provided by the Window Manager, or using any other similar
 * mechanism, all of the resize objects in the window should have their
 * evas_object_size_hint_weight_set() set to EVAS_HINT_EXPAND.
 *
 * Also notice that the window can get resized to the current size of the
 * object if the EVAS_HINT_EXPAND is set @b after the call to
 * elm_win_resize_object_add(). So if the object should get resized to the
 * size of the window, set this hint @b before adding it as a resize object
 * (this happens because the size of the window and the object are evaluated
 * as soon as the object is added to the window).
 *
 * @ingroup Win
 *
 * @param[in] subobj The resize object to add
 *
 */
EOAPI void  elm_obj_win_resize_object_add(Evas_Object *subobj);

/**
 *
 * Raise a window object.
 *
 * Places the window pointed by @p obj at the top of the stack, so that it's
 * not covered by any other window.
 *
 * If elm_win_override_set() is not set, the Window Manager may ignore this
 * request.
 *
 * @ingroup Win
 *
 *
 */
EOAPI void  elm_obj_win_raise(void);

/**
 *
 * Lower a window object.
 *
 * Places the window pointed by @p obj at the bottom of the stack, so that
 * no other window is covered by it.
 *
 * If elm_win_override_set() is not set, the Window Manager may ignore this
 * request.
 *
 * @ingroup Win
 *
 *
 */
EOAPI void  elm_obj_win_lower(void);

/**
 *
 * Delete @p subobj as a resize object of window @p obj.
 *
 * This function removes the object @p subobj from the resize objects of
 * the window @p obj. It will not delete the object itself, which will be
 * left unmanaged and should be deleted by the developer, manually handled
 * or set as child of some other container.
 *
 * @ingroup Win
 *
 * @param[in] subobj The resize object to add
 *
 */
EOAPI void  elm_obj_win_resize_object_del(Evas_Object *subobj);

/**
 *
 * Center a window on its screen
 *
 * This function centers window @p obj horizontally and/or vertically based on the values
 * of @p h and @p v.
 * @ingroup Win
 *
 * @param[in] h If true, center horizontally. If false, do not change horizontal location.
 * @param[in] v If true, center vertically. If false, do not change vertical location.
 *
 */
EOAPI void  elm_obj_win_center(Eina_Bool h, Eina_Bool v);

EOAPI extern const Eo_Event_Description _ELM_WIN_EVENT_DELETE_REQUEST;
EOAPI extern const Eo_Event_Description _ELM_WIN_EVENT_FOCUS_OUT;
EOAPI extern const Eo_Event_Description _ELM_WIN_EVENT_FOCUS_IN;
EOAPI extern const Eo_Event_Description _ELM_WIN_EVENT_MOVED;
EOAPI extern const Eo_Event_Description _ELM_WIN_EVENT_WITHDRAWN;
EOAPI extern const Eo_Event_Description _ELM_WIN_EVENT_ICONIFIED;
EOAPI extern const Eo_Event_Description _ELM_WIN_EVENT_NORMAL;
EOAPI extern const Eo_Event_Description _ELM_WIN_EVENT_STICK;
EOAPI extern const Eo_Event_Description _ELM_WIN_EVENT_UNSTICK;
EOAPI extern const Eo_Event_Description _ELM_WIN_EVENT_FULLSCREEN;
EOAPI extern const Eo_Event_Description _ELM_WIN_EVENT_UNFULLSCREEN;
EOAPI extern const Eo_Event_Description _ELM_WIN_EVENT_MAXIMIZED;
EOAPI extern const Eo_Event_Description _ELM_WIN_EVENT_UNMAXIMIZED;
EOAPI extern const Eo_Event_Description _ELM_WIN_EVENT_IOERR;
EOAPI extern const Eo_Event_Description _ELM_WIN_EVENT_INDICATOR_PROP_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_WIN_EVENT_ROTATION_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_WIN_EVENT_PROFILE_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_WIN_EVENT_FOCUSED;
EOAPI extern const Eo_Event_Description _ELM_WIN_EVENT_UNFOCUSED;
EOAPI extern const Eo_Event_Description _ELM_WIN_EVENT_WM_ROTATION_CHANGED;

/**
 * No description
 */
#define ELM_WIN_EVENT_DELETE_REQUEST (&(_ELM_WIN_EVENT_DELETE_REQUEST))

/**
 * No description
 */
#define ELM_WIN_EVENT_FOCUS_OUT (&(_ELM_WIN_EVENT_FOCUS_OUT))

/**
 * No description
 */
#define ELM_WIN_EVENT_FOCUS_IN (&(_ELM_WIN_EVENT_FOCUS_IN))

/**
 * No description
 */
#define ELM_WIN_EVENT_MOVED (&(_ELM_WIN_EVENT_MOVED))

/**
 * No description
 */
#define ELM_WIN_EVENT_WITHDRAWN (&(_ELM_WIN_EVENT_WITHDRAWN))

/**
 * No description
 */
#define ELM_WIN_EVENT_ICONIFIED (&(_ELM_WIN_EVENT_ICONIFIED))

/**
 * No description
 */
#define ELM_WIN_EVENT_NORMAL (&(_ELM_WIN_EVENT_NORMAL))

/**
 * No description
 */
#define ELM_WIN_EVENT_STICK (&(_ELM_WIN_EVENT_STICK))

/**
 * No description
 */
#define ELM_WIN_EVENT_UNSTICK (&(_ELM_WIN_EVENT_UNSTICK))

/**
 * No description
 */
#define ELM_WIN_EVENT_FULLSCREEN (&(_ELM_WIN_EVENT_FULLSCREEN))

/**
 * No description
 */
#define ELM_WIN_EVENT_UNFULLSCREEN (&(_ELM_WIN_EVENT_UNFULLSCREEN))

/**
 * No description
 */
#define ELM_WIN_EVENT_MAXIMIZED (&(_ELM_WIN_EVENT_MAXIMIZED))

/**
 * No description
 */
#define ELM_WIN_EVENT_UNMAXIMIZED (&(_ELM_WIN_EVENT_UNMAXIMIZED))

/**
 * No description
 */
#define ELM_WIN_EVENT_IOERR (&(_ELM_WIN_EVENT_IOERR))

/**
 * No description
 */
#define ELM_WIN_EVENT_INDICATOR_PROP_CHANGED (&(_ELM_WIN_EVENT_INDICATOR_PROP_CHANGED))

/**
 * No description
 */
#define ELM_WIN_EVENT_ROTATION_CHANGED (&(_ELM_WIN_EVENT_ROTATION_CHANGED))

/**
 * No description
 */
#define ELM_WIN_EVENT_PROFILE_CHANGED (&(_ELM_WIN_EVENT_PROFILE_CHANGED))

/**
 * No description
 */
#define ELM_WIN_EVENT_FOCUSED (&(_ELM_WIN_EVENT_FOCUSED))

/**
 * No description
 */
#define ELM_WIN_EVENT_UNFOCUSED (&(_ELM_WIN_EVENT_UNFOCUSED))

/**
 * No description
 */
#define ELM_WIN_EVENT_WM_ROTATION_CHANGED (&(_ELM_WIN_EVENT_WM_ROTATION_CHANGED))

#endif
