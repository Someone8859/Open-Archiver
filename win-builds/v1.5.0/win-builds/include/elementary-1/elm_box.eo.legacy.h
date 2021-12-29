#ifndef _ELM_BOX_EO_LEGACY_H_
#define _ELM_BOX_EO_LEGACY_H_


/**
 *
 * Set the box to arrange its children homogeneously
 *
 * If enabled, homogeneous layout makes all items the same size, according
 * to the size of the largest of its children.
 *
 * @note This flag is ignored if a custom layout function is set.
 *
 * @ingroup Box
 *
 * @param[in] homogeneous The homogeneous flag
 */
EAPI void elm_box_homogeneous_set(Eo *obj, Eina_Bool homogeneous);

/**
 *
 * Get whether the box is using homogeneous mode or not
 *
 * @return @c EINA_TRUE if it's homogeneous, @c EINA_FALSE otherwise
 *
 * @ingroup Box
 *
 */
EAPI Eina_Bool elm_box_homogeneous_get(const Eo *obj);

/**
 *
 * Set the alignment of the whole bounding box of contents.
 *
 * Sets how the bounding box containing all the elements of the box, after
 * their sizes and position has been calculated, will be aligned within
 * the space given for the whole box widget.
 *
 * @ingroup Box
 *
 * @param[in] horizontal The horizontal alignment of elements
 * @param[in] vertical The vertical alignment of elements
 */
EAPI void elm_box_align_set(Eo *obj, double horizontal, double vertical);

/**
 *
 * Get the alignment of the whole bounding box of contents.
 *
 * @see elm_box_align_set()
 *
 * @ingroup Box
 *
 * @param[out] horizontal The horizontal alignment of elements
 * @param[out] vertical The vertical alignment of elements
 */
EAPI void elm_box_align_get(const Eo *obj, double *horizontal, double *vertical);

/**
 *
 * Set the horizontal orientation
 *
 * By default, box object arranges their contents vertically from top to
 * bottom.
 * By calling this function with @p horizontal as @c EINA_TRUE, the box will
 * become horizontal, arranging contents from left to right.
 *
 * @note This flag is ignored if a custom layout function is set.
 *
 * @ingroup Box
 *
 * @param[in] horizontal The horizontal flag (@c EINA_TRUE = horizontal,
@c EINA_FALSE = vertical)
 */
EAPI void elm_box_horizontal_set(Eo *obj, Eina_Bool horizontal);

/**
 *
 * Get the horizontal orientation
 *
 * @return @c EINA_TRUE if the box is set to horizontal mode, @c EINA_FALSE otherwise
 *
 */
EAPI Eina_Bool elm_box_horizontal_get(const Eo *obj);

/**
 *
 * Set the space (padding) between the box's elements.
 *
 * Extra space in pixels that will be added between a box child and its
 * neighbors after its containing cell has been calculated. This padding
 * is set for all elements in the box, besides any possible padding that
 * individual elements may have through their size hints.
 *
 * @ingroup Box
 *
 * @param[in] horizontal The horizontal space between elements
 * @param[in] vertical The vertical space between elements
 */
EAPI void elm_box_padding_set(Eo *obj, Evas_Coord horizontal, Evas_Coord vertical);

/**
 *
 * Get the space (padding) between the box's elements.
 *
 * @see elm_box_padding_set()
 *
 * @ingroup Box
 *
 * @param[out] horizontal The horizontal space between elements
 * @param[out] vertical The vertical space between elements
 */
EAPI void elm_box_padding_get(const Eo *obj, Evas_Coord *horizontal, Evas_Coord *vertical);

/**
 *
 * Set the layout defining function to be used by the box
 *
 * Whenever anything changes that requires the box in @p obj to recalculate
 * the size and position of its elements, the function @p cb will be called
 * to determine what the layout of the children will be.
 *
 * Once a custom function is set, everything about the children layout
 * is defined by it. The flags set by elm_box_horizontal_set() and
 * elm_box_homogeneous_set() no longer have any meaning, and the values
 * given by elm_box_padding_set() and elm_box_align_set() are up to this
 * layout function to decide if they are used and how. These last two
 * will be found in the @c priv parameter, of type @c Evas_Object_Box_Data,
 * passed to @p cb. The @c Evas_Object the function receives is not the
 * Elementary widget, but the internal Evas Box it uses, so none of the
 * functions described here can be used on it.
 *
 * Any of the layout functions in @c Evas can be used here, as well as the
 * special elm_box_layout_transition().
 *
 * The final @p data argument received by @p cb is the same @p data passed
 * here, and the @p free_data function will be called to free it
 * whenever the box is destroyed or another layout function is set.
 *
 * Setting @p cb to NULL will revert back to the default layout function.
 *
 * @see elm_box_layout_transition()
 *
 * @ingroup Box
 *
 * @param[in] cb The callback function used for layout
 * @param[in] data Data that will be passed to layout function
 * @param[in] free_data Function called to free @p data
 */
EAPI void elm_box_layout_set(Eo *obj, Evas_Object_Box_Layout cb, const void *data, Ecore_Cb free_data);

/**
 *
 * Retrieve a list of the objects packed into the box
 *
 * Returns a new @c Eina_List with a pointer to @c Evas_Object in its nodes.
 * The order of the list corresponds to the packing order the box uses.
 *
 * You must free this list with eina_list_free() once you are done with it.
 *
 * @ingroup Box
 *
 */
EAPI Eina_List *elm_box_children_get(const Eo *obj);

/**
 *
 * Add an object at the end of the pack list
 *
 * Pack @p subobj into the box @p obj, placing it last in the list of
 * children objects. The actual position the object will get on screen
 * depends on the layout used. If no custom layout is set, it will be at
 * the bottom or right, depending if the box is vertical or horizontal,
 * respectively.
 *
 * @see elm_box_pack_start()
 * @see elm_box_pack_before()
 * @see elm_box_pack_after()
 * @see elm_box_unpack()
 * @see elm_box_unpack_all()
 * @see elm_box_clear()
 *
 * @ingroup Box
 *
 * @param[in] subobj The object to add to the box
 */
EAPI void elm_box_pack_end(Eo *obj, Evas_Object *subobj);

/**
 *
 * Remove all items from the box, without deleting them
 *
 * Clear the box from all children, but don't delete the respective objects.
 * If no other references of the box children exist, the objects will never
 * be deleted, and thus the application will leak the memory. Make sure
 * when using this function that you hold a reference to all the objects
 * in the box @p obj.
 *
 * @see elm_box_clear()
 * @see elm_box_unpack()
 *
 * @ingroup Box
 *
 */
EAPI void elm_box_unpack_all(Eo *obj);

/**
 *
 * Unpack a box item
 *
 * Remove the object given by @p subobj from the box @p obj without
 * deleting it.
 *
 * @see elm_box_unpack_all()
 * @see elm_box_clear()
 *
 * @ingroup Box
 *
 * @param[in] subobj The object to unpack
 */
EAPI void elm_box_unpack(Eo *obj, Evas_Object *subobj);

/**
 *
 * Adds an object to the box after the indicated object
 *
 * This will add the @p subobj to the box indicated after the object
 * indicated with @p after. If @p after is not already in the box, results
 * are undefined. After means either to the right of the indicated object or
 * below it depending on orientation.
 *
 * @see elm_box_pack_start()
 * @see elm_box_pack_end()
 * @see elm_box_pack_before()
 * @see elm_box_unpack()
 * @see elm_box_unpack_all()
 * @see elm_box_clear()
 *
 * @ingroup Box
 *
 * @param[in] subobj The object to add to the box
 * @param[in] after The object after which to add it
 */
EAPI void elm_box_pack_after(Eo *obj, Evas_Object *subobj, Evas_Object *after);

/**
 *
 * Add an object to the beginning of the pack list
 *
 * Pack @p subobj into the box @p obj, placing it first in the list of
 * children objects. The actual position the object will get on screen
 * depends on the layout used. If no custom layout is set, it will be at
 * the top or left, depending if the box is vertical or horizontal,
 * respectively.
 *
 * @see elm_box_pack_end()
 * @see elm_box_pack_before()
 * @see elm_box_pack_after()
 * @see elm_box_unpack()
 * @see elm_box_unpack_all()
 * @see elm_box_clear()
 *
 * @ingroup Box
 *
 * @param[in] subobj The object to add to the box
 */
EAPI void elm_box_pack_start(Eo *obj, Evas_Object *subobj);

/**
 *
 * Force the box to recalculate its children packing.
 *
 * If any children was added or removed, box will not calculate the
 * values immediately rather leaving it to the next main loop
 * iteration. While this is great as it would save lots of
 * recalculation, whenever you need to get the position of a just
 * added item you must force recalculate before doing so.
 *
 * @ingroup Box
 *
 */
EAPI void elm_box_recalculate(Eo *obj);

/**
 *
 * Adds an object to the box before the indicated object
 *
 * This will add the @p subobj to the box indicated before the object
 * indicated with @p before. If @p before is not already in the box, results
 * are undefined. Before means either to the left of the indicated object or
 * above it depending on orientation.
 *
 * @see elm_box_pack_start()
 * @see elm_box_pack_end()
 * @see elm_box_pack_after()
 * @see elm_box_unpack()
 * @see elm_box_unpack_all()
 * @see elm_box_clear()
 *
 * @ingroup Box
 *
 * @param[in] subobj The object to add to the box
 * @param[in] before The object before which to add it
 */
EAPI void elm_box_pack_before(Eo *obj, Evas_Object *subobj, Evas_Object *before);

/**
 *
 * Clear the box of all children
 *
 * Remove all the elements contained by the box, deleting the respective
 * objects.
 *
 * @see elm_box_unpack()
 * @see elm_box_unpack_all()
 *
 * @ingroup Box
 *
 */
EAPI void elm_box_clear(Eo *obj);

#endif
