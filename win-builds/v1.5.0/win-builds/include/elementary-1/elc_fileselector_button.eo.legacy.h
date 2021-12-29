#ifndef _ELC_FILESELECTOR_BUTTON_EO_LEGACY_H_
#define _ELC_FILESELECTOR_BUTTON_EO_LEGACY_H_


/**
 *
 * Set whether a given file selector button widget's internal file
 * selector will raise an Elementary "inner window", instead of a
 * dedicated Elementary window. By default, it depends on the current
 * profile.
 *
 * @see elm_win_inwin_add() for more information on inner windows
 * @see elm_fileselector_button_inwin_mode_get()
 *
 * @ingroup File_Selector_Button
 *
 * @param[in] value @c EINA_TRUE to make it use an inner window, @c
EINA_FALSE to make it use a dedicated window
 */
EAPI void elm_fileselector_button_inwin_mode_set(Eo *obj, Eina_Bool value);

/**
 *
 * Get whether a given file selector button widget's internal file
 * selector will raise an Elementary "inner window", instead of a
 * dedicated Elementary window.
 *
 * @return @c EINA_TRUE if will use an inner window, @c EINA_TRUE
 * if it will use a dedicated window
 *
 * @see elm_fileselector_button_inwin_mode_set() for more details
 *
 * @ingroup File_Selector_Button
 *
 */
EAPI Eina_Bool elm_fileselector_button_inwin_mode_get(const Eo *obj);

/**
 *
 * Set the size of a given file selector button widget's window,
 * holding the file selector itself.
 *
 * @note it will only take any effect if the file selector button
 * widget is @b not under "inwin mode". The default size for the
 * window (when applicable) is 400x400 pixels.
 *
 * @see elm_fileselector_button_window_size_get()
 *
 * @ingroup File_Selector_Button
 *
 * @param[in] width The window's width
 * @param[in] height The window's height
 */
EAPI void elm_fileselector_button_window_size_set(Eo *obj, Evas_Coord width, Evas_Coord height);

/**
 *
 * Get the size of a given file selector button widget's window,
 * holding the file selector itself.
 *
 * @note Use @c NULL pointers on the size values you're not
 * interested in: they'll be ignored by the function.
 *
 * @see elm_fileselector_button_window_size_set(), for more details
 *
 * @ingroup File_Selector_Button
 *
 * @param[out] width The window's width
 * @param[out] height The window's height
 */
EAPI void elm_fileselector_button_window_size_get(const Eo *obj, Evas_Coord *width, Evas_Coord *height);

/**
 *
 * Set the title for a given file selector button widget's window
 *
 * This will change the popup window's title, when the file selector pops
 * out after a click on the button. Those windows have the default
 * (unlocalized) value of @c "Select a file" as titles.
 *
 * @note It will only take effect if the file selector
 * button widget is @b not under "inwin mode".
 *
 * @see elm_fileselector_button_window_title_get()
 *
 * @ingroup File_Selector_Button
 *
 * @param[in] title The title string
 */
EAPI void elm_fileselector_button_window_title_set(Eo *obj, const char *title);

/**
 *
 * Get the title for a given file selector button widget's
 * window
 *
 * @return Title of the file selector button's window
 *
 * @see elm_fileselector_button_window_title_get() for more details
 *
 * @ingroup File_Selector_Button
 *
 */
EAPI const char *elm_fileselector_button_window_title_get(const Eo *obj);

#endif
