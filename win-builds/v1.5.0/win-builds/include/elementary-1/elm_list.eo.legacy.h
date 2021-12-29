#ifndef _ELM_LIST_EO_LEGACY_H_
#define _ELM_LIST_EO_LEGACY_H_


/**
 *
 * Enable or disable horizontal mode on the list object.
 *
 * @note Vertical mode is set by default.
 *
 * On horizontal mode items are displayed on list from left to right,
 * instead of from top to bottom. Also, the list will scroll horizontally.
 * Each item will presents left icon on top and right icon, or end, at
 * the bottom.
 *
 * @see elm_list_horizontal_get()
 *
 * @ingroup List
 *
 * @param[in] horizontal @c EINA_TRUE to enable horizontal or @c EINA_FALSE to
disable it, i.e., to enable vertical mode.
 */
EAPI void elm_list_horizontal_set(Eo *obj, Eina_Bool horizontal);

/**
 *
 * Get a value whether horizontal mode is enabled or not.
 *
 * @return @c EINA_TRUE means horizontal mode selection is enabled.
 * @c EINA_FALSE indicates it's disabled. If @p obj is @c NULL,
 * @c EINA_FALSE is returned.
 *
 * @see elm_list_horizontal_set() for details.
 *
 * @ingroup List
 *
 */
EAPI Eina_Bool elm_list_horizontal_get(const Eo *obj);

/**
 *
 * Set the list select mode.
 *
 * elm_list_select_mode_set() changes item select mode in the list widget.
 * - ELM_OBJECT_SELECT_MODE_DEFAULT : Items will only call their selection func and
 * callback when first becoming selected. Any further clicks will
 * do nothing, unless you set always select mode.
 * - ELM_OBJECT_SELECT_MODE_ALWAYS : This means that, even if selected,
 * every click will make the selected callbacks be called.
 * - ELM_OBJECT_SELECT_MODE_NONE : This will turn off the ability to select items
 * entirely and they will neither appear selected nor call selected
 * callback functions.
 *
 * @see elm_list_select_mode_get()
 *
 * @ingroup List
 *
 * @param[in] mode The select mode
 */
EAPI void elm_list_select_mode_set(Eo *obj, Elm_Object_Select_Mode mode);

/**
 *
 * Get the list select mode.
 *
 * @return The select mode
 * (If getting mode is failed, it returns ELM_OBJECT_SELECT_MODE_MAX)
 *
 * @see elm_list_select_mode_set()
 *
 * @ingroup List
 *
 */
EAPI Elm_Object_Select_Mode elm_list_select_mode_get(const Eo *obj);

/**
 *
 * Set focus upon items selection mode
 *
 * When enabled, every selection of an item inside the genlist will automatically set focus to
 * its first focusable widget from the left. This is true of course if the selection was made by
 * clicking an unfocusable area in an item or selecting it with a key movement. Clicking on a
 * focusable widget inside an item will couse this particular item to get focus as usual.
 *
 * @ingroup List
 *
 * @param[in] enabled The tree effect status
(EINA_TRUE = enabled, EINA_FALSE = disabled)
 */
EAPI void elm_list_focus_on_selection_set(Eo *obj, Eina_Bool enabled);

/**
 *
 * Get whether focus upon item's selection mode is enabled.
 *
 * @return The tree effect status
 * (EINA_TRUE = enabled, EINA_FALSE = disabled)
 *
 * @ingroup List
 *
 */
EAPI Eina_Bool elm_list_focus_on_selection_get(const Eo *obj);

/**
 *
 * Enable or disable multiple items selection on the list object.
 *
 * Disabled by default. If disabled, the user can select a single item of
 * the list each time. Selected items are highlighted on list.
 * If enabled, many items can be selected.
 *
 * If a selected item is selected again, it will be unselected.
 *
 * @see elm_list_multi_select_get()
 *
 * @ingroup List
 *
 * @param[in] multi @c EINA_TRUE to enable multi selection or @c EINA_FALSE to
disable it.
 */
EAPI void elm_list_multi_select_set(Eo *obj, Eina_Bool multi);

/**
 *
 * Get a value whether multiple items selection is enabled or not.
 *
 * @see elm_list_multi_select_set() for details.
 *
 * @return @c EINA_TRUE means multiple items selection is enabled.
 * @c EINA_FALSE indicates it's disabled. If @p obj is @c NULL,
 * @c EINA_FALSE is returned.
 *
 * @ingroup List
 *
 */
EAPI Eina_Bool elm_list_multi_select_get(const Eo *obj);

/**
 *
 * Set the list multi select mode.
 *
 * - ELM_OBJECT_MULTI_SELECT_MODE_DEFAULT : select/unselect items whenever each
 * item is clicked.
 * - ELM_OBJECT_MULTI_SELECT_MODE_WITH_CONTROL : Only one item will be selected
 * although multi-selection is enabled, if clicked without pressing control
 * key. This mode is only available with multi-selection.
 *
 * @see elm_list_multi_select_set()
 * @see elm_list_multi_select_mode_get()
 *
 * @ingroup List
 * @since 1.8
 *
 * @param[in] mode The multi select mode
 */
EAPI void elm_list_multi_select_mode_set(Eo *obj, Elm_Object_Multi_Select_Mode mode);

/**
 *
 * Get the list multi select mode.
 *
 * @return The multi select mode
 * (If getting mode is failed, it returns ELM_OBJECT_MULTI_SELECT_MODE_MAX)
 *
 * @see elm_list_multi_select_set()
 * @see elm_list_multi_select_mode_set()
 *
 * @ingroup List
 * @since 1.8
 *
 */
EAPI Elm_Object_Multi_Select_Mode elm_list_multi_select_mode_get(const Eo *obj);

/**
 *
 * Set which mode to use for the list object.
 *
 * Set list's resize behavior, transverse axis scroll and
 * items cropping. See each mode's description for more details.
 *
 * @note Default value is #ELM_LIST_SCROLL.
 *
 * Only one mode at a time can be set. If a previous one was set, it
 * will be changed by the new mode after this call. Bitmasks won't
 * work here as well.
 *
 * @warning This function's behavior will clash with those of
 * elm_scroller_content_min_limit(), so use either one of them, but
 * not both.
 *
 * @see elm_list_mode_get()
 *
 * @ingroup List
 *
 * @param[in] mode One of #Elm_List_Mode: #ELM_LIST_COMPRESS,
#ELM_LIST_SCROLL, #ELM_LIST_LIMIT or #ELM_LIST_EXPAND.
 */
EAPI void elm_list_mode_set(Eo *obj, Elm_List_Mode mode);

/**
 *
 * Get the mode the list is at.
 *
 * @return One of #Elm_List_Mode: #ELM_LIST_COMPRESS, #ELM_LIST_SCROLL, #ELM_LIST_LIMIT, #ELM_LIST_EXPAND or #ELM_LIST_LAST on errors.
 *
 * @note see elm_list_mode_set() for more information.
 *
 * @ingroup List
 *
 */
EAPI Elm_List_Mode elm_list_mode_get(const Eo *obj);

/**
 *
 * Get the selected item.
 *
 * @return The selected list item.
 *
 * The selected item can be unselected with function
 * elm_list_item_selected_set().
 *
 * The selected item always will be highlighted on list.
 *
 * @see elm_list_selected_items_get()
 *
 * @ingroup List
 *
 */
EAPI Elm_Object_Item *elm_list_selected_item_get(const Eo *obj);

/**
 *
 * Get a list of all the list items.
 *
 * @return An @c Eina_List of list items, #Elm_Object_Item,
 * or @c NULL on failure.
 *
 * @see elm_list_item_append()
 * @see elm_object_item_del()
 * @see elm_list_clear()
 *
 * @ingroup List
 *
 */
EAPI const Eina_List *elm_list_items_get(const Eo *obj);

/**
 *
 * Get the first item in the list
 *
 * This returns the first item in the list.
 *
 * @return The first item, or NULL if none
 *
 * @ingroup List
 *
 */
EAPI Elm_Object_Item *elm_list_first_item_get(const Eo *obj);

/**
 *
 * Return a list of the currently selected list items.
 *
 * @return An @c Eina_List of list items, #Elm_Object_Item,
 * or @c NULL on failure.
 *
 * Multiple items can be selected if multi select is enabled. It can be
 * done with elm_list_multi_select_set().
 *
 * @see elm_list_selected_item_get()
 * @see elm_list_multi_select_set()
 *
 * @ingroup List
 *
 */
EAPI const Eina_List *elm_list_selected_items_get(const Eo *obj);

/**
 *
 * Get the last item in the list
 *
 * This returns the last item in the list.
 *
 * @return The last item, or NULL if none
 *
 * @ingroup List
 *
 */
EAPI Elm_Object_Item *elm_list_last_item_get(const Eo *obj);

/**
 *
 * Insert a new item into the list object before item @p before.
 *
 * @return The created item or @c NULL upon failure.
 *
 * A new item will be created and added to the list. Its position in
 * this list will be just before item @p before.
 *
 * Items created with this method can be deleted with elm_object_item_del().
 *
 * Associated @p data can be properly freed when item is deleted if a
 * callback function is set with elm_object_item_del_cb_set().
 *
 * If a function is passed as argument, it will be called every time this item
 * is selected, i.e., the user clicks over an unselected item.
 * If always select is enabled it will call this function every time
 * user clicks over an item (already selected or not).
 * If such function isn't needed, just passing
 * @c NULL as @p func is enough. The same should be done for @p data.
 *
 * @note Remember that the label parameter is copied inside the list. So if an
 * application dynamically allocated the label, the application should free the
 * label after this call.
 *
 * @see elm_list_item_append() for a simple code example.
 * @see elm_list_select_mode_set()
 * @see elm_object_item_del()
 * @see elm_object_item_del_cb_set()
 * @see elm_list_clear()
 * @see elm_icon_add()
 *
 * @ingroup List
 *
 * @param[in] before The list item to insert before.
 * @param[in] label The label of the list item.
 * @param[in] icon The icon object to use for the left side of the item. An
icon can be any Evas object, but usually it is an icon created
with elm_icon_add().
 * @param[in] end The icon object to use for the right side of the item. An
icon can be any Evas object.
 * @param[in] func The function to call when the item is clicked.
 * @param[in] data The data to associate with the item for related callbacks.
 */
EAPI Elm_Object_Item *elm_list_item_insert_before(Eo *obj, Elm_Object_Item *before, const char *label, Evas_Object *icon, Evas_Object *end, Evas_Smart_Cb func, const void *data);

/**
 *
 * Starts the list.
 *
 * @note Call before running show() on the list object.
 * @warning If not called, it won't display the list properly.
 *
 * @code
 * li = elm_list_add(win);
 * elm_list_item_append(li, "First", NULL, NULL, NULL, NULL);
 * elm_list_item_append(li, "Second", NULL, NULL, NULL, NULL);
 * elm_list_go(li);
 * evas_object_show(li);
 * @endcode
 *
 * @ingroup List
 *
 */
EAPI void elm_list_go(Eo *obj);

/**
 *
 * Insert a new item into the list object after item @p after.
 *
 * @return The created item or @c NULL upon failure.
 *
 * A new item will be created and added to the list. Its position in
 * this list will be just after item @p after.
 *
 * Items created with this method can be deleted with elm_object_item_del().
 *
 * Associated @p data can be properly freed when item is deleted if a
 * callback function is set with elm_object_item_del_cb_set().
 *
 * If a function is passed as argument, it will be called every time this item
 * is selected, i.e., the user clicks over an unselected item.
 * If always select is enabled it will call this function every time
 * user clicks over an item (already selected or not).
 * If such function isn't needed, just passing
 * @c NULL as @p func is enough. The same should be done for @p data.
 *
 * @note Remember that the label parameter is copied inside the list. So if an
 * application dynamically allocated the label, the application should free the
 * label after this call.
 *
 * @see elm_list_item_append() for a simple code example.
 * @see elm_list_select_mode_set()
 * @see elm_object_item_del()
 * @see elm_object_item_del_cb_set()
 * @see elm_list_clear()
 * @see elm_icon_add()
 *
 * @ingroup List
 *
 * @param[in] after The list item to insert after.
 * @param[in] label The label of the list item.
 * @param[in] icon The icon object to use for the left side of the item. An
icon can be any Evas object, but usually it is an icon created
with elm_icon_add().
 * @param[in] end The icon object to use for the right side of the item. An
icon can be any Evas object.
 * @param[in] func The function to call when the item is clicked.
 * @param[in] data The data to associate with the item for related callbacks.
 */
EAPI Elm_Object_Item *elm_list_item_insert_after(Eo *obj, Elm_Object_Item *after, const char *label, Evas_Object *icon, Evas_Object *end, Evas_Smart_Cb func, const void *data);

/**
 *
 * Get the item that is at the x, y canvas coords.
 *
 * @return The item at the coordinates or NULL if none
 *
 * This returns the item at the given coordinates (which are canvas
 * relative, not object-relative). If an item is at that coordinate,
 * that item handle is returned, and if @p posret is not NULL, the
 * integer pointed to is set to a value of -1, 0 or 1, depending if
 * the coordinate is on the upper portion of that item (-1), on the
 * middle section (0) or on the lower part (1). If NULL is returned as
 * an item (no item found there), then posret may indicate -1 or 1
 * based if the coordinate is above or below all items respectively in
 * the list.
 *
 *
 * @ingroup List
 *
 * @param[in] x The input x coordinate
 * @param[in] y The input y coordinate
 * @param[out] posret The position relative to the item returned here
 */
EAPI Elm_Object_Item *elm_list_at_xy_item_get(const Eo *obj, Evas_Coord x, Evas_Coord y, int *posret);

/**
 *
 * Append a new item to the list object.
 *
 * @return The created item or @c NULL upon failure.
 *
 * A new item will be created and appended to the list, i.e., will
 * be set as @b last item.
 *
 * Items created with this method can be deleted with elm_object_item_del().
 *
 * Associated @p data can be properly freed when item is deleted if a
 * callback function is set with elm_object_item_del_cb_set().
 *
 * If a function is passed as argument, it will be called every time this item
 * is selected, i.e., the user clicks over an unselected item.
 * If always select is enabled it will call this function every time
 * user clicks over an item (already selected or not).
 * If such function isn't needed, just passing
 * @c NULL as @p func is enough. The same should be done for @p data.
 *
 * @note Remember that the label parameter is copied inside the list. So if an
 * application dynamically allocated the label, the application should free the
 * label after this call.
 *
 * Simple example (with no function callback or data associated):
 * @code
 * li = elm_list_add(win);
 * ic = elm_icon_add(win);
 * elm_image_file_set(ic, "path/to/image", NULL);
 * elm_icon_resizable_set(ic, EINA_TRUE, EINA_TRUE);
 * elm_list_item_append(li, "label", ic, NULL, NULL, NULL);
 * elm_list_go(li);
 * evas_object_show(li);
 * @endcode
 *
 * @see elm_list_select_mode_set()
 * @see elm_object_item_del()
 * @see elm_object_item_del_cb_set()
 * @see elm_list_clear()
 * @see elm_icon_add()
 *
 * @ingroup List
 *
 * @param[in] label The label of the list item.
 * @param[in] icon The icon object to use for the left side of the item. An
icon can be any Evas object, but usually it is an icon created
with elm_icon_add().
 * @param[in] end The icon object to use for the right side of the item. An
icon can be any Evas object.
 * @param[in] func The function to call when the item is clicked.
 * @param[in] data The data to associate with the item for related callbacks.
 */
EAPI Elm_Object_Item *elm_list_item_append(Eo *obj, const char *label, Evas_Object *icon, Evas_Object *end, Evas_Smart_Cb func, const void *data);

/**
 *
 * Prepend a new item to the list object.
 *
 * @return The created item or @c NULL upon failure.
 *
 * A new item will be created and prepended to the list, i.e., will
 * be set as @b first item.
 *
 * Items created with this method can be deleted with elm_object_item_del().
 *
 * Associated @p data can be properly freed when item is deleted if a
 * callback function is set with elm_object_item_del_cb_set().
 *
 * If a function is passed as argument, it will be called every time this item
 * is selected, i.e., the user clicks over an unselected item.
 * If always select is enabled it will call this function every time
 * user clicks over an item (already selected or not).
 * If such function isn't needed, just passing
 * @c NULL as @p func is enough. The same should be done for @p data.
 *
 * @note Remember that the label parameter is copied inside the list. So if an
 * application dynamically allocated the label, the application should free the
 * label after this call.
 *
 * @see elm_list_item_append() for a simple code example.
 * @see elm_list_select_mode_set()
 * @see elm_object_item_del()
 * @see elm_object_item_del_cb_set()
 * @see elm_list_clear()
 * @see elm_icon_add()
 *
 * @ingroup List
 *
 * @param[in] label The label of the list item.
 * @param[in] icon The icon object to use for the left side of the item. An
icon can be any Evas object, but usually it is an icon created
with elm_icon_add().
 * @param[in] end The icon object to use for the right side of the item. An
icon can be any Evas object.
 * @param[in] func The function to call when the item is clicked.
 * @param[in] data The data to associate with the item for related callbacks.
 */
EAPI Elm_Object_Item *elm_list_item_prepend(Eo *obj, const char *label, Evas_Object *icon, Evas_Object *end, Evas_Smart_Cb func, const void *data);

/**
 *
 * Remove all list's items.
 *
 * @see elm_object_item_del()
 * @see elm_list_item_append()
 *
 * @ingroup List
 *
 */
EAPI void elm_list_clear(Eo *obj);

/**
 *
 * Insert a new item into the sorted list object.
 *
 * @return The created item or @c NULL upon failure.
 *
 * @note This function inserts values into a list object assuming it was
 * sorted and the result will be sorted.
 *
 * A new item will be created and added to the list. Its position in
 * this list will be found comparing the new item with previously inserted
 * items using function @p cmp_func.
 *
 * Items created with this method can be deleted with elm_object_item_del().
 *
 * Associated @p data can be properly freed when item is deleted if a
 * callback function is set with elm_object_item_del_cb_set().
 *
 * If a function is passed as argument, it will be called every time this item
 * is selected, i.e., the user clicks over an unselected item.
 * If always select is enabled it will call this function every time
 * user clicks over an item (already selected or not).
 * If such function isn't needed, just passing
 * @c NULL as @p func is enough. The same should be done for @p data.
 *
 * @note Remember that the label parameter is copied inside the list. So if an
 * application dynamically allocated the label, the application should free the
 * label after this call.
 *
 * @see elm_list_item_append() for a simple code example.
 * @see elm_list_select_mode_set()
 * @see elm_object_item_del()
 * @see elm_object_item_del_cb_set()
 * @see elm_list_clear()
 * @see elm_icon_add()
 *
 * @ingroup List
 *
 * @param[in] label The label of the list item.
 * @param[in] icon The icon object to use for the left side of the item. An
icon can be any Evas object, but usually it is an icon created
with elm_icon_add().
 * @param[in] end The icon object to use for the right side of the item. An
icon can be any Evas object.
 * @param[in] func The function to call when the item is clicked.
 * @param[in] data The data to associate with the item for related callbacks.
 * @param[in] cmp_func The comparing function to be used to sort list
items <b>by #Elm_Object_Item item handles</b>. This function will
receive two items and compare them, returning a non-negative integer
if the second item should be place after the first, or negative value
if should be placed before.
 */
EAPI Elm_Object_Item *elm_list_item_sorted_insert(Eo *obj, const char *label, Evas_Object *icon, Evas_Object *end, Evas_Smart_Cb func, const void *data, Eina_Compare_Cb cmp_func);

#endif
