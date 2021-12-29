#ifndef _ELM_SEGMENT_CONTROL_EO_LEGACY_H_
#define _ELM_SEGMENT_CONTROL_EO_LEGACY_H_


/**
 *
 * Get the Segment items count from segment control.
 *
 * @return Segment items count.
 *
 * It will just return the number of items added to segment control @p obj.
 *
 * @ingroup SegmentControl
 *
 */
EAPI int elm_segment_control_item_count_get(const Eo *obj);

/**
 *
 * Get the selected item.
 *
 * @return The selected item or @c NULL if none of segment items is
 * selected.
 *
 * The selected item can be unselected with function
 * elm_segment_control_item_selected_set().
 *
 * The selected item always will be highlighted on segment control.
 *
 * @ingroup SegmentControl
 *
 */
EAPI Elm_Object_Item *elm_segment_control_item_selected_get(const Eo *obj);

/**
 *
 * Get the label of item.
 *
 * @return The label of the item at @p index.
 *
 * The return value is a pointer to the label associated to the item when
 * it was created, with function elm_segment_control_item_add(), or later
 * with function elm_object_item_text_set. If no label
 * was passed as argument, it will return @c NULL.
 *
 * @see elm_object_item_text_set() for more details.
 * @see elm_segment_control_item_add()
 *
 * @ingroup SegmentControl
 *
 * @param[in] idx The index of the segment item.
 */
EAPI const char *elm_segment_control_item_label_get(const Eo *obj, int idx);

/**
 *
 * Insert a new item to the segment control object at specified position.
 *
 * @return The created item or @c NULL upon failure.
 *
 * Index values must be between @c 0, when item will be prepended to
 * segment control, and items count, that can be get with
 * elm_segment_control_item_count_get(), case when item will be appended
 * to segment control, just like elm_segment_control_item_add().
 *
 * Items created with this function can be deleted with function
 * elm_object_item_del() or elm_segment_control_item_del_at().
 *
 * @note @p label set to @c NULL is different from empty string "".
 * If an item
 * only has icon, it will be displayed bigger and centered. If it has
 * icon and label, even that an empty string, icon will be smaller and
 * positioned at left.
 *
 * @see elm_segment_control_item_add()
 * @see elm_segment_control_item_count_get()
 * @see elm_object_item_del()
 *
 * @ingroup SegmentControl
 *
 * @param[in] icon The icon object to use for the left side of the item. An
icon can be any Evas object, but usually it is an icon created
with elm_icon_add().
 * @param[in] label The label of the item.
 * @param[in] idx Item position. Value should be between 0 and items count.
 */
EAPI Elm_Object_Item *elm_segment_control_item_insert_at(Eo *obj, Evas_Object *icon, const char *label, int idx);

/**
 *
 * Get the item placed at specified index.
 *
 * @return The segment control item or @c NULL on failure.
 *
 * Index is the position of an item in segment control widget. Its
 * range is from @c 0 to <tt> count - 1 </tt>.
 * Count is the number of items, that can be get with
 * elm_segment_control_item_count_get().
 *
 * @ingroup SegmentControl
 *
 * @param[in] idx The index of the segment item.
 */
EAPI Elm_Object_Item *elm_segment_control_item_get(const Eo *obj, int idx);

/**
 *
 * Remove a segment control item at given index from its parent,
 * deleting it.
 *
 * Items can be added with elm_segment_control_item_add() or
 * elm_segment_control_item_insert_at().
 *
 * @ingroup SegmentControl
 *
 * @param[in] idx The position of the segment control item to be deleted.
 */
EAPI void elm_segment_control_item_del_at(Eo *obj, int idx);

/**
 *
 * Append a new item to the segment control object.
 *
 * @return The created item or @c NULL upon failure.
 *
 * A new item will be created and appended to the segment control, i.e., will
 * be set as @b last item.
 *
 * If it should be inserted at another position,
 * elm_segment_control_item_insert_at() should be used instead.
 *
 * Items created with this function can be deleted with function
 * elm_object_item_del() or elm_object_item_del_at().
 *
 * @note @p label set to @c NULL is different from empty string "".
 * If an item
 * only has icon, it will be displayed bigger and centered. If it has
 * icon and label, even that an empty string, icon will be smaller and
 * positioned at left.
 *
 * Simple example:
 * @code
 * sc = elm_segment_control_add(win);
 * ic = elm_icon_add(win);
 * elm_image_file_set(ic, "path/to/image", NULL);
 * elm_icon_resizable_set(ic, EINA_TRUE, EINA_TRUE);
 * elm_segment_control_item_add(sc, ic, "label");
 * evas_object_show(sc);
 * @endcode
 *
 * @see elm_segment_control_item_insert_at()
 * @see elm_object_item_del()
 *
 * @ingroup SegmentControl
 *
 * @param[in] icon The icon object to use for the left side of the item. An
icon can be any Evas object, but usually it is an icon created
with elm_icon_add().
 * @param[in] label The label of the item.
Note that, NULL is different from empty string "".
 */
EAPI Elm_Object_Item *elm_segment_control_item_add(Eo *obj, Evas_Object *icon, const char *label);

/**
 *
 * Get the icon associated to the item.
 *
 * @return The left side icon associated to the item at @p index.
 *
 * The return value is a pointer to the icon associated to the item when
 * it was created, with function elm_segment_control_item_add(), or later
 * with function elm_object_item_part_content_set(). If no icon
 * was passed as argument, it will return @c NULL.
 *
 * @see elm_segment_control_item_add()
 * @see elm_object_item_part_content_set()
 *
 * @ingroup SegmentControl
 *
 * @param[in] idx The index of the segment item.
 */
EAPI Evas_Object *elm_segment_control_item_icon_get(const Eo *obj, int idx);

#endif
