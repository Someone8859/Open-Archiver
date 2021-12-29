#ifndef _ELM_GENGRID_EO_LEGACY_H_
#define _ELM_GENGRID_EO_LEGACY_H_


/**
 *
 * Set the items grid's alignment within a given gengrid widget
 *
 * This sets the alignment of the whole grid of items of a gengrid
 * within its given viewport. By default, those values are both
 * 0.5, meaning that the gengrid will have its items grid placed
 * exactly in the middle of its viewport.
 *
 * @note If given alignment values are out of the cited ranges,
 * they'll be changed to the nearest boundary values on the valid
 * ranges.
 *
 * @see elm_gengrid_align_get()
 *
 * @ingroup Gengrid
 *
 * @param[in] align_x Alignment in the horizontal axis (0 <= align_x <= 1).
 * @param[in] align_y Alignment in the vertical axis (0 <= align_y <= 1).
 */
EAPI void elm_gengrid_align_set(Eo *obj, double align_x, double align_y);

/**
 *
 * Get the items grid's alignment values within a given gengrid
 * widget
 *
 * @note Use @c NULL pointers on the alignment values you're not
 * interested in: they'll be ignored by the function.
 *
 * @see elm_gengrid_align_set() for more details
 *
 * @ingroup Gengrid
 *
 * @param[out] align_x Alignment in the horizontal axis (0 <= align_x <= 1).
 * @param[out] align_y Alignment in the vertical axis (0 <= align_y <= 1).
 */
EAPI void elm_gengrid_align_get(const Eo *obj, double *align_x, double *align_y);

/**
 *
 * Set how the items grid's filled within a given gengrid widget
 *
 * This sets the fill state of the whole grid of items of a gengrid
 * within its given viewport. By default, this value is false, meaning
 * that if the first line of items grid's isn't filled, the items are
 * centered with the alignment
 *
 * @see elm_gengrid_filled_get()
 *
 * @ingroup Gengrid
 *
 * @param[in] fill Filled if True
 */
EAPI void elm_gengrid_filled_set(Eo *obj, Eina_Bool fill);

/**
 *
 * Get how the items grid's filled within a given gengrid widget
 *
 * @return @c EINA_TRUE, if filled is on, @c EINA_FALSE if it's
 * off
 *
 * @note Use @c NULL pointers on the alignment values you're not
 * interested in: they'll be ignored by the function.
 *
 * @see elm_gengrid_align_set() for more details
 *
 * @ingroup Gengrid
 *
 */
EAPI Eina_Bool elm_gengrid_filled_get(const Eo *obj);

/**
 *
 * Set a given gengrid widget's scrolling page size, relative to its viewport size.
 *
 * @param[in] h_pagerel No description supplied.
 * @param[in] v_pagerel No description supplied.
 */
EAPI void elm_gengrid_page_relative_set(Eo *obj, double h_pagerel, double v_pagerel);

/**
 *
 * Get a given gengrid widget's scrolling page size, relative to its viewport size.
 *
 * @param[out] h_pagerel No description supplied.
 * @param[out] v_pagerel No description supplied.
 */
EAPI void elm_gengrid_page_relative_get(const Eo *obj, double *h_pagerel, double *v_pagerel);

/**
 *
 * Enable or disable multi-selection in a given gengrid widget
 *
 * Multi-selection is the ability to have @b more than one
 * item selected, on a given gengrid, simultaneously. When it is
 * enabled, a sequence of clicks on different items will make them
 * all selected, progressively. A click on an already selected item
 * will unselect it. If interacting via the keyboard,
 * multi-selection is enabled while holding the "Shift" key.
 *
 * @note By default, multi-selection is @b disabled on gengrids
 *
 * @see elm_gengrid_multi_select_get()
 *
 * @ingroup Gengrid
 *
 * @param[in] multi @c EINA_TRUE, to enable multi-selection,
@c EINA_FALSE to disable it.
 */
EAPI void elm_gengrid_multi_select_set(Eo *obj, Eina_Bool multi);

/**
 *
 * Get whether multi-selection is enabled or disabled for a given
 * gengrid widget
 *
 * @return @c EINA_TRUE, if multi-selection is enabled, @c
 * EINA_FALSE otherwise
 *
 * @see elm_gengrid_multi_select_set() for more details
 *
 * @ingroup Gengrid
 *
 */
EAPI Eina_Bool elm_gengrid_multi_select_get(const Eo *obj);

/**
 *
 * Set the size for the group items of a given gengrid widget
 *
 * A gengrid, after creation, has still no information on the size
 * to give to each of its cells. So, you most probably will end up
 * with squares one @ref Fingers "finger" wide, the default
 * size. Use this function to force a custom size for you group items,
 * making them as big as you wish.
 *
 * @see elm_gengrid_group_item_size_get()
 *
 * @ingroup Gengrid
 *
 * @param[in] w The group items' width.
 * @param[in] h The group items' height.
 */
EAPI void elm_gengrid_group_item_size_set(Eo *obj, Evas_Coord w, Evas_Coord h);

/**
 *
 * Get the size set for the group items of a given gengrid widget
 *
 * @note Use @c NULL pointers on the size values you're not
 * interested in: they'll be ignored by the function.
 *
 * @see elm_gengrid_group_item_size_get() for more details
 *
 * @ingroup Gengrid
 *
 * @param[out] w The group items' width.
 * @param[out] h The group items' height.
 */
EAPI void elm_gengrid_group_item_size_get(const Eo *obj, Evas_Coord *w, Evas_Coord *h);

/**
 *
 * Set the gengrid select mode.
 *
 * elm_gengrid_select_mode_set() changes item select mode in the gengrid widget.
 * - ELM_OBJECT_SELECT_MODE_DEFAULT : Items will only call their selection func and
 * callback when first becoming selected. Any further clicks will
 * do nothing, unless you set always select mode.
 * - ELM_OBJECT_SELECT_MODE_ALWAYS : This means that, even if selected,
 * every click will make the selected callbacks be called.
 * - ELM_OBJECT_SELECT_MODE_NONE : This will turn off the ability to select items
 * entirely and they will neither appear selected nor call selected
 * callback functions.
 *
 * @see elm_gengrid_select_mode_get()
 *
 * @ingroup Gengrid
 *
 * @param[in] mode The select mode
 */
EAPI void elm_gengrid_select_mode_set(Eo *obj, Elm_Object_Select_Mode mode);

/**
 *
 * Get the gengrid select mode.
 *
 * @return The select mode
 * (If getting mode is failed, it returns ELM_OBJECT_SELECT_MODE_MAX)
 *
 * @see elm_gengrid_select_mode_set()
 *
 * @ingroup Gengrid
 *
 */
EAPI Elm_Object_Select_Mode elm_gengrid_select_mode_get(const Eo *obj);

/**
 *
 * Set whether a given gengrid widget is or not able have items
 * @b reordered
 *
 * If a gengrid is set to allow reordering, a click held for more
 * than 0.5 over a given item will highlight it specially,
 * signaling the gengrid has entered the reordering state. From
 * that time on, the user will be able to, while still holding the
 * mouse button down, move the item freely in the gengrid's
 * viewport, replacing to said item to the locations it goes to.
 * The replacements will be animated and, whenever the user
 * releases the mouse button, the item being replaced gets a new
 * definitive place in the grid.
 *
 * @see elm_gengrid_reorder_mode_get()
 *
 * @ingroup Gengrid
 *
 * @param[in] reorder_mode Use @c EINA_TRUE to turn reordering on,
@c EINA_FALSE to turn it off
 */
EAPI void elm_gengrid_reorder_mode_set(Eo *obj, Eina_Bool reorder_mode);

/**
 *
 * Get whether a given gengrid widget is or not able have items
 * @b reordered
 *
 * @return @c EINA_TRUE, if reordering is on, @c EINA_FALSE if it's
 * off
 *
 * @see elm_gengrid_reorder_mode_set() for more details
 *
 * @ingroup Gengrid
 *
 */
EAPI Eina_Bool elm_gengrid_reorder_mode_get(const Eo *obj);

/**
 *
 * Set whether the gengrid items' should be highlighted when item selected.
 *
 * @param[in] highlight No description supplied.
 */
EAPI void elm_gengrid_highlight_mode_set(Eo *obj, Eina_Bool highlight);

/**
 *
 * Get whether the gengrid items' should be highlighted when item selected.
 *
 */
EAPI Eina_Bool elm_gengrid_highlight_mode_get(const Eo *obj);

/**
 *
 * Set the size for the items of a given gengrid widget
 *
 * A gengrid, after creation, has still no information on the size
 * to give to each of its cells. So, you most probably will end up
 * with squares one @ref Fingers "finger" wide, the default
 * size. Use this function to force a custom size for you items,
 * making them as big as you wish.
 *
 * @see elm_gengrid_item_size_get()
 *
 * @ingroup Gengrid
 *
 * @param[in] w The items' width.
 * @param[in] h The items' height.
 */
EAPI void elm_gengrid_item_size_set(Eo *obj, Evas_Coord w, Evas_Coord h);

/**
 *
 * Get the size set for the items of a given gengrid widget
 *
 * @note Use @c NULL pointers on the size values you're not
 * interested in: they'll be ignored by the function.
 *
 * @see elm_gengrid_item_size_get() for more details
 *
 * @ingroup Gengrid
 *
 * @param[out] w The items' width.
 * @param[out] h The items' height.
 */
EAPI void elm_gengrid_item_size_get(const Eo *obj, Evas_Coord *w, Evas_Coord *h);

/**
 *
 * Set the gengrid multi select mode.
 *
 * - ELM_OBJECT_MULTI_SELECT_MODE_DEFAULT : select/unselect items whenever each
 * item is clicked.
 * - ELM_OBJECT_MULTI_SELECT_MODE_WITH_CONTROL : Only one item will be selected
 * although multi-selection is enabled, if clicked without pressing control
 * key. This mode is only available with multi-selection.
 *
 * @see elm_gengrid_multi_select_set()
 * @see elm_gengrid_multi_select_mode_get()
 *
 * @ingroup Gengrid
 * @since 1.8
 *
 * @param[in] mode The multi select mode
 */
EAPI void elm_gengrid_multi_select_mode_set(Eo *obj, Elm_Object_Multi_Select_Mode mode);

/**
 *
 * Get the gengrid multi select mode.
 *
 * @return The multi select mode
 * (If getting mode is failed, it returns ELM_OBJECT_MULTI_SELECT_MODE_MAX)
 *
 * @see elm_gengrid_multi_select_set()
 * @see elm_gengrid_multi_select_mode_set()
 *
 * @ingroup Gengrid
 * @since 1.8
 *
 */
EAPI Elm_Object_Multi_Select_Mode elm_gengrid_multi_select_mode_get(const Eo *obj);

/**
 *
 * Set the direction in which a given gengrid widget will expand while
 * placing its items.
 *
 * When in "horizontal mode" (@c EINA_TRUE), items will be placed in @b columns,
 * from top to bottom and, when the space for a column is filled, another one is
 * started on the right, thus expanding the grid horizontally. When in
 * "vertical mode" (@c EINA_FALSE), though, items will be placed in @b rows,
 * from left to right and, when the space for a row is filled, another one is
 * started below, thus expanding the grid vertically.
 *
 * @note By default, gengrid is in vertical mode, @c EINA_FALSE.
 *
 * @see elm_gengrid_horizontal_get()
 *
 * @ingroup Gengrid
 *
 * @param[in] horizontal @c EINA_TRUE to make the gengrid expand horizontally,
@c EINA_FALSE to expand vertically.
 */
EAPI void elm_gengrid_horizontal_set(Eo *obj, Eina_Bool horizontal);

/**
 *
 * Get for what direction a given gengrid widget will expand while
 * placing its items.
 *
 * @return @c EINA_TRUE, if @p obj is set to expand horizontally,
 * @c EINA_FALSE if it's set to expand vertically.
 *
 * @see elm_gengrid_horizontal_set() for more details
 *
 * @ingroup Gengrid
 *
 */
EAPI Eina_Bool elm_gengrid_horizontal_get(const Eo *obj);

/**
 *
 * Set a given gengrid widget's scrolling page size
 *
 * @param[in] h_pagesize No description supplied.
 * @param[in] v_pagesize No description supplied.
 */
EAPI void elm_gengrid_page_size_set(Eo *obj, Evas_Coord h_pagesize, Evas_Coord v_pagesize);

/**
 *
 * Get the selected item in a given gengrid widget
 *
 * @return The selected item's handle or @c NULL, if none is
 * selected at the moment (and on errors)
 *
 * This returns the selected item in @p obj. If multi selection is
 * enabled on @p obj (@see elm_gengrid_multi_select_set()), only
 * the first item in the list is selected, which might not be very
 * useful. For that case, see elm_gengrid_selected_items_get().
 *
 * @ingroup Gengrid
 *
 */
EAPI Elm_Object_Item *elm_gengrid_selected_item_get(const Eo *obj);

/**
 *
 * Get a list of realized items in gengrid
 *
 * @return The list of realized items, nor NULL if none are realized.
 *
 * This returns a list of the realized items in the gengrid. The list
 * contains gengrid item pointers. The list must be freed by the
 * caller when done with eina_list_free(). The item pointers in the
 * list are only valid so long as those items are not deleted or the
 * gengrid is not deleted.
 *
 * @see elm_gengrid_realized_items_update()
 *
 * @ingroup Gengrid
 *
 */
EAPI Eina_List *elm_gengrid_realized_items_get(const Eo *obj);

/**
 *
 * Get the first item in a given gengrid widget
 *
 * @return The first item's handle or @c NULL, if there are no
 * items in @p obj (and on errors)
 *
 * This returns the first item in the @p obj's internal list of
 * items.
 *
 * @see elm_gengrid_last_item_get()
 *
 * @ingroup Gengrid
 *
 */
EAPI Elm_Object_Item *elm_gengrid_first_item_get(const Eo *obj);

/**
 *
 * Get <b>a list</b> of selected items in a given gengrid
 *
 * @return The list of selected items or @c NULL, if none is
 * selected at the moment (and on errors)
 *
 * This returns a list of the selected items, in the order that
 * they appear in the grid. This list is only valid as long as no
 * more items are selected or unselected (or unselected implicitly
 * by deletion). The list contains Gengrid item pointers as
 * data, naturally.
 *
 * @see elm_gengrid_selected_item_get()
 *
 * @ingroup Gengrid
 *
 */
EAPI const Eina_List *elm_gengrid_selected_items_get(const Eo *obj);

/**
 *
 * Get the last item in a given gengrid widget
 *
 * @return The last item's handle or @c NULL, if there are no
 * items in @p obj (and on errors)
 *
 * This returns the last item in the @p obj's internal list of
 * items.
 *
 * @see elm_gengrid_first_item_get()
 *
 * @ingroup Gengrid
 *
 */
EAPI Elm_Object_Item *elm_gengrid_last_item_get(const Eo *obj);

/**
 *
 * Enable or disable mouse wheel to be used to scroll the gengrid.
 *
 * Mouse wheel can be used for the user to scroll up and down the gengrid.
 *
 * It's enabled by default.
 *
 * @see elm_gengrid_wheel_disabled_get()
 *
 * @ingroup Gengrid
 *
 * @param[in] disabled Use @c EINA_TRUE to disable mouse wheel or @c EINA_FALSE
to enable it.
 */
EAPI void elm_gengrid_wheel_disabled_set(Eo *obj, Eina_Bool disabled);

/**
 *
 * Get a value whether mouse wheel is enabled or not.
 *
 * @return @c EINA_TRUE means gengrid wheel is disabled. @c EINA_FALSE indicates
 * it is enabled.
 *
 * Mouse wheel can be used for the user to scroll up and down the gengrid.
 *
 * @see elm_gengrid_wheel_disabled_set()
 *
 * @ingroup Gengrid
 *
 */
EAPI Eina_Bool elm_gengrid_wheel_disabled_get(const Eo *obj);

/**
 *
 * Insert an item before another in a gengrid widget
 *
 * @return A handle to the item added or @c NULL, on errors.
 *
 * This inserts an item before another in the gengrid.
 *
 * @see elm_gengrid_item_append()
 * @see elm_gengrid_item_prepend()
 * @see elm_gengrid_item_insert_after()
 * @see elm_object_item_del()
 *
 * @ingroup Gengrid
 *
 * @param[in] itc The item class for the item.
 * @param[in] data The item data.
 * @param[in] relative The item to place this new one before.
 * @param[in] func Convenience function called when the item is
selected.
 * @param[in] func_data Data to be passed to @p func.
 */
EAPI Elm_Object_Item *elm_gengrid_item_insert_before(Eo *obj, const Elm_Gengrid_Item_Class *itc, const void *data, Elm_Object_Item *relative, Evas_Smart_Cb func, const void *func_data);

/**
 *
 * Update the contents of all realized items.
 *
 * This updates all realized items by calling all the item class functions again
 * to get the contents, texts and states. Use this when the original
 * item data has changed and the changes are desired to be reflected.
 *
 * To update just one item, use elm_gengrid_item_update().
 *
 * @see elm_gengrid_realized_items_get()
 * @see elm_gengrid_item_update()
 *
 * @ingroup Gengrid
 *
 */
EAPI void elm_gengrid_realized_items_update(Eo *obj);

/**
 *
 * Insert an item after another in a gengrid widget
 *
 * @return A handle to the item added or @c NULL, on errors.
 *
 * This inserts an item after another in the gengrid.
 *
 * @see elm_gengrid_item_append()
 * @see elm_gengrid_item_prepend()
 * @see elm_gengrid_item_insert_after()
 * @see elm_object_item_del()
 *
 * @ingroup Gengrid
 *
 * @param[in] itc The item class for the item.
 * @param[in] data The item data.
 * @param[in] relative The item to place this new one after.
 * @param[in] func Convenience function called when the item is
selected.
 * @param[in] func_data Data to be passed to @p func.
 */
EAPI Elm_Object_Item *elm_gengrid_item_insert_after(Eo *obj, const Elm_Gengrid_Item_Class *itc, const void *data, Elm_Object_Item *relative, Evas_Smart_Cb func, const void *func_data);

/**
 *
 * Return how many items are currently in a list
 *
 * @return The total number of list items in the list
 *
 * This behavior is O(1) and includes items which may or may not be realized.
 *
 * @ingroup Gengrid
 *
 */
EAPI unsigned int elm_gengrid_items_count(const Eo *obj);

/**
 *
 * Get the item that is at the x, y canvas coords.
 *
 * @return The item at the coordinates or NULL if none
 *
 * This returns the item at the given coordinates (which are canvas
 * relative, not object-relative). If an item is at that coordinate,
 * that item handle is returned, and if @p xposret is not NULL, the
 * integer pointed to is set to a value of -1, 0 or 1, depending if
 * the coordinate is on the left portion of that item (-1), on the
 * middle section (0) or on the right part (1).
 * if @p yposret is not NULL, the
 * integer pointed to is set to a value of -1, 0 or 1, depending if
 * the coordinate is on the upper portion of that item (-1), on the
 * middle section (0) or on the lower part (1). If NULL is returned as
 * an item (no item found there), then posret may indicate -1 or 1
 * based if the coordinate is above or below all items respectively in
 * the gengrid.
 *
 * @ingroup Gengrid
 *
 * @param[in] x The input x coordinate
 * @param[in] y The input y coordinate
 * @param[out] xposret The position relative to the item returned here
 * @param[out] yposret The position relative to the item returned here
 */
EAPI Elm_Object_Item *elm_gengrid_at_xy_item_get(const Eo *obj, Evas_Coord x, Evas_Coord y, int *xposret, int *yposret);

/**
 *
 * Append a new item in a given gengrid widget.
 *
 * @return A handle to the item added or @c NULL, on errors.
 *
 * This adds an item to the beginning of the gengrid.
 *
 * @see elm_gengrid_item_prepend()
 * @see elm_gengrid_item_insert_before()
 * @see elm_gengrid_item_insert_after()
 * @see elm_object_item_del()
 *
 * @ingroup Gengrid
 *
 * @param[in] itc The item class for the item.
 * @param[in] data The item data.
 * @param[in] func Convenience function called when the item is
selected.
 * @param[in] func_data Data to be passed to @p func.
 */
EAPI Elm_Object_Item *elm_gengrid_item_append(Eo *obj, const Elm_Gengrid_Item_Class *itc, const void *data, Evas_Smart_Cb func, const void *func_data);

/**
 *
 * Prepend a new item in a given gengrid widget.
 *
 * @return A handle to the item added or @c NULL, on errors.
 *
 * This adds an item to the end of the gengrid.
 *
 * @see elm_gengrid_item_append()
 * @see elm_gengrid_item_insert_before()
 * @see elm_gengrid_item_insert_after()
 * @see elm_object_item_del()
 *
 * @ingroup Gengrid
 *
 * @param[in] itc The item class for the item.
 * @param[in] data The item data.
 * @param[in] func Convenience function called when the item is
selected.
 * @param[in] func_data Data to be passed to @p func.
 */
EAPI Elm_Object_Item *elm_gengrid_item_prepend(Eo *obj, const Elm_Gengrid_Item_Class *itc, const void *data, Evas_Smart_Cb func, const void *func_data);

/**
 *
 * Remove all items from a given gengrid widget
 *
 * This removes (and deletes) all items in @p obj, leaving it
 * empty.
 *
 * @see elm_object_item_del(), to remove just one item.
 *
 * @ingroup Gengrid
 *
 */
EAPI void elm_gengrid_clear(Eo *obj);

/**
 *
 * Insert an item in a gengrid widget using a user-defined sort function.
 *
 * @return A handle to the item added or @c NULL, on errors.
 *
 * This inserts an item in the gengrid based on user defined comparison
 * function. The two arguments passed to the function @p func are gengrid
 * item handles to compare.
 *
 * @see elm_gengrid_item_append()
 * @see elm_gengrid_item_prepend()
 * @see elm_gengrid_item_insert_after()
 * @see elm_object_item_data_get()
 * @see elm_object_item_del()
 *
 * @ingroup Gengrid
 *
 * @param[in] itc The item class for the item.
 * @param[in] data The item data.
 * @param[in] comp User defined comparison function that defines the sort order
based on gengrid item and its data.
 * @param[in] func Convenience function called when the item is selected.
 * @param[in] func_data Data to be passed to @p func.
 */
EAPI Elm_Object_Item *elm_gengrid_item_sorted_insert(Eo *obj, const Elm_Gengrid_Item_Class *itc, const void *data, Eina_Compare_Cb comp, Evas_Smart_Cb func, const void *func_data);

/**
 *
 * Get gengrid item by given string.
 *
 * @return Pointer to the gengrid item which matches search_string in case of success, otherwise returns NULL.
 *
 * It takes pointer to the gengrid item that will be used to start
 * search from it.
 *
 * This function uses globs (like "*.jpg") for searching and takes
 * search flags as last parameter That is a bitfield with values
 * to be ored together or 0 for no flags.
 *
 * @ingroup Gengrid
 * @since 1.11
 *
 * @param[in] item_to_search_from Pointer to item to start search from. If NULL search will be started from the first item of the gengrid.
 * @param[in] part_name Name of the TEXT part of gengrid item to search string in.
 * @param[in] pattern The search pattern.
 * @param[in] flags Search flags
 */
EAPI Elm_Object_Item *elm_gengrid_search_by_text_item_get(Eo *obj, Elm_Object_Item *item_to_search_from, const char *part_name, const char *pattern, Elm_Glob_Match_Flags flags);

#endif
