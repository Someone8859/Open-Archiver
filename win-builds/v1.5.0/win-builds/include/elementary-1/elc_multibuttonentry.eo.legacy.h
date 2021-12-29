#ifndef _ELC_MULTIBUTTONENTRY_EO_LEGACY_H_
#define _ELC_MULTIBUTTONENTRY_EO_LEGACY_H_


/**
 *
 * Sets if the multibuttonentry is to be editable or not.
 *
 * @ingroup Multibuttonentry
 *
 * @since 1.7
 *
 * @param[in] editable If @c EINA_TRUE, user can add/delete item in multibuttonentry, if not, the multibuttonentry is non-editable.
 */
EAPI void elm_multibuttonentry_editable_set(Eo *obj, Eina_Bool editable);

/**
 *
 * Get whether the multibuttonentry is editable or not.
 *
 * @return @c EINA_TRUE if the multibuttonentry is editable by the user. @c EINA_FALSE if not.
 *
 * @ingroup Multibuttonentry
 *
 * @since 1.7
 *
 */
EAPI Eina_Bool elm_multibuttonentry_editable_get(const Eo *obj);

/**
 *
 * Set/Unset the multibuttonentry to expanded state.
 * In expanded state, the complete entry will be displayed.
 * Otherwise, only single line of the entry will be displayed.
 *
 * @ingroup Multibuttonentry
 *
 * @param[in] expanded the value of expanded state.
Set this to @c EINA_TRUE for expanded state.
Set this to EINA_FALSE for single line state.
 */
EAPI void elm_multibuttonentry_expanded_set(Eo *obj, Eina_Bool expanded);

/**
 *
 * Get the value of expanded state.
 * In expanded state, the complete entry will be displayed.
 * Otherwise, only single line of the entry will be displayed.
 *
 * @return @c EINA_TRUE if the widget is in expanded state. @c EINA_FALSE if not.
 *
 * @ingroup Multibuttonentry
 *
 */
EAPI Eina_Bool elm_multibuttonentry_expanded_get(const Eo *obj);

/**
 *
 * Set a function to format the string that will be used to display
 * the hidden items counter.
 *
 * If @a format_function is @c NULL, the default format will be used,
 * which is @c "... + %d".
 *
 * @see elm_multibuttonentry_format_function_set
 * @since 1.9
 *
 * @ingroup Multibuttonentry
 *
 * @param[in] format_function format_function The actual format function
 * @param[in] data data User data to passed to @a format_function
 */
EAPI void elm_multibuttonentry_format_function_set(Eo *obj, Elm_Multibuttonentry_Format_Cb format_function, const void *data);

/**
 *
 * Get a list of items in the multibuttonentry
 *
 * @return The list of items, or NULL if none
 *
 * @ingroup Multibuttonentry
 *
 */
EAPI const Eina_List *elm_multibuttonentry_items_get(const Eo *obj);

/**
 *
 * Get the first item in the multibuttonentry
 *
 * @return The first item, or NULL if none
 *
 * @ingroup Multibuttonentry
 *
 */
EAPI Elm_Object_Item *elm_multibuttonentry_first_item_get(const Eo *obj);

/**
 *
 * Get the last item in the multibuttonentry
 *
 * @return The last item, or NULL if none
 *
 * @ingroup Multibuttonentry
 *
 */
EAPI Elm_Object_Item *elm_multibuttonentry_last_item_get(const Eo *obj);

/**
 *
 * Get the entry of the multibuttonentry object
 *
 * @return The entry object, or NULL if none
 *
 * @ingroup Multibuttonentry
 *
 */
EAPI Evas_Object *elm_multibuttonentry_entry_get(const Eo *obj);

/**
 *
 * Get the selected item in the multibuttonentry
 *
 * @return The selected item, or NULL if none
 *
 * @ingroup Multibuttonentry
 *
 */
EAPI Elm_Object_Item *elm_multibuttonentry_selected_item_get(const Eo *obj);

/**
 *
 * Prepend a new item to the multibuttonentry
 *
 * @return A handle to the item added or NULL if not possible
 *
 * @see Use elm_object_item_del() to delete the item.
 *
 * @ingroup Multibuttonentry
 *
 * @param[in] label The label of new item
 * @param[in] func The callback function to be invoked when this item is pressed.
 * @param[in] data The pointer to the data to be attached
 */
EAPI Elm_Object_Item *elm_multibuttonentry_item_prepend(Eo *obj, const char *label, Evas_Smart_Cb func, void *data);

/**
 *
 * Remove all items in the multibuttonentry.
 *
 * @ingroup Multibuttonentry
 *
 */
EAPI void elm_multibuttonentry_clear(Eo *obj);

/**
 *
 * Remove a filter from the list
 *
 * Removes the given callback from the filter list. See elm_multibuttonentry_item_filter_append()
 * for more information.
 *
 * @ingroup Multibuttonentry
 *
 * @param[in] func The filter function to remove
 * @param[in] data The user data passed when adding the function
 */
EAPI void elm_multibuttonentry_item_filter_remove(Eo *obj, Elm_Multibuttonentry_Item_Filter_Cb func, void *data);

/**
 *
 * Add a new item to the multibuttonentry before the indicated object
 *
 * reference.
 * @return A handle to the item added or NULL if not possible
 *
 * @see Use elm_object_item_del() to delete the item.
 *
 * @ingroup Multibuttonentry
 *
 * @param[in] before The item before which to add it
 * @param[in] label The label of new item
 * @param[in] func The callback function to be invoked when this item is pressed.
 * @param[in] data The pointer to the data to be attached
 */
EAPI Elm_Object_Item *elm_multibuttonentry_item_insert_before(Eo *obj, Elm_Object_Item *before, const char *label, Evas_Smart_Cb func, void *data);

/**
 *
 * Append a new item to the multibuttonentry
 *
 * @return A handle to the item added or NULL if not possible
 *
 * @see Use elm_object_item_del() to delete the item.
 *
 * @ingroup Multibuttonentry
 *
 * @param[in] label The label of new item
 * @param[in] func The callback function to be invoked when this item is pressed.
 * @param[in] data The pointer to the data to be attached
 */
EAPI Elm_Object_Item *elm_multibuttonentry_item_append(Eo *obj, const char *label, Evas_Smart_Cb func, void *data);

/**
 *
 * Prepend a filter function for text inserted in the Multibuttonentry
 *
 * Prepend the given callback to the list. See elm_multibuttonentry_item_filter_append()
 * for more information
 *
 * @ingroup Multibuttonentry
 *
 * @param[in] func The function to use as text filter
 * @param[in] data User data to pass to @p func
 */
EAPI void elm_multibuttonentry_item_filter_prepend(Eo *obj, Elm_Multibuttonentry_Item_Filter_Cb func, void *data);

/**
 *
 * Append an item filter function for text inserted in the Multibuttonentry
 *
 * Append the given callback to the list. This functions will be called
 * whenever any text is inserted into the Multibuttonentry, with the text to be inserted
 * as a parameter. The callback function is free to alter the text in any way
 * it wants, but it must remember to free the given pointer and update it.
 * If the new text is to be discarded, the function can free it and set it text
 * parameter to NULL. This will also prevent any following filters from being
 * called.
 *
 * @ingroup Multibuttonentry
 *
 * @param[in] func The function to use as item filter
 * @param[in] data User data to pass to @p func
 */
EAPI void elm_multibuttonentry_item_filter_append(Eo *obj, Elm_Multibuttonentry_Item_Filter_Cb func, void *data);

/**
 *
 * Add a new item to the multibuttonentry after the indicated object
 *
 * @return A handle to the item added or NULL if not possible
 *
 * @see Use elm_object_item_del() to delete the item.
 *
 * @ingroup Multibuttonentry
 *
 * @param[in] after The item after which to add it
 * @param[in] label The label of new item
 * @param[in] func The callback function to be invoked when this item is pressed.
 * @param[in] data The pointer to the data to be attached
 */
EAPI Elm_Object_Item *elm_multibuttonentry_item_insert_after(Eo *obj, Elm_Object_Item *after, const char *label, Evas_Smart_Cb func, void *data);

#endif
