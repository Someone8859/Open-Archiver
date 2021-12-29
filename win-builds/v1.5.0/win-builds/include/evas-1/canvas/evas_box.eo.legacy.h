#ifndef _EVAS_BOX_EO_LEGACY_H_
#define _EVAS_BOX_EO_LEGACY_H_


/**
 *
 * Set the alignment of the whole bounding box of contents, for a
 * given box object.
 *
 * This will influence how a box object is to align its bounding box
 * of contents within its own area. The values @b must be in the range
 * @c 0.0 - @c 1.0, or undefined behavior is expected. For horizontal
 * alignment, @c 0.0 means to the left, with @c 1.0 meaning to the
 * right. For vertical alignment, @c 0.0 means to the top, with @c 1.0
 * meaning to the bottom.
 *
 * @note The default values for both alignments is @c 0.5.
 *
 * @see evas_object_box_align_get()
 *
 * @param[in] horizontal The horizontal alignment, in pixels
 * @param[in] vertical the vertical alignment, in pixels
 */
EAPI void evas_object_box_align_set(Eo *obj, double horizontal, double vertical);

/**
 *
 * Get the alignment of the whole bounding box of contents, for a
 * given box object.
 *
 * @see evas_object_box_align_set() for more information
 *
 * @param[out] horizontal The horizontal alignment, in pixels
 * @param[out] vertical the vertical alignment, in pixels
 */
EAPI void evas_object_box_align_get(const Eo *obj, double *horizontal, double *vertical);

/**
 *
 * Set the (space) padding between cells set for a given box object.
 *
 * @note The default values for both padding components is @c 0.
 *
 * @see evas_object_box_padding_get()
 *
 * @param[in] horizontal The horizontal padding, in pixels
 * @param[in] vertical the vertical padding, in pixels
 */
EAPI void evas_object_box_padding_set(Eo *obj, Evas_Coord horizontal, Evas_Coord vertical);

/**
 *
 * Get the (space) padding between cells set for a given box object.
 *
 * @see evas_object_box_padding_set()
 *
 * @param[out] horizontal The horizontal padding, in pixels
 * @param[out] vertical the vertical padding, in pixels
 */
EAPI void evas_object_box_padding_get(const Eo *obj, Evas_Coord *horizontal, Evas_Coord *vertical);

/**
 *
 * Set a new layouting function to a given box object
 *
 * A box layout function affects how a box object displays child
 * elements within its area. The list of pre-defined box layouts
 * available in Evas is:
 * - evas_object_box_layout_horizontal()
 * - evas_object_box_layout_vertical()
 * - evas_object_box_layout_homogeneous_horizontal()
 * - evas_object_box_layout_homogeneous_vertical()
 * - evas_object_box_layout_homogeneous_max_size_horizontal()
 * - evas_object_box_layout_homogeneous_max_size_vertical()
 * - evas_object_box_layout_flow_horizontal()
 * - evas_object_box_layout_flow_vertical()
 * - evas_object_box_layout_stack()
 *
 * Refer to each of their documentation texts for details on them.
 *
 * @note A box layouting function will be triggered by the @c
 * 'calculate' smart callback of the box's smart class.
 *
 * @param[in] cb The new layout function to set on @p o.
 * @param[in] data Data pointer to be passed to @p cb.
 * @param[in] free_data Function to free @p data, if need be.
 */
EAPI void evas_object_box_layout_set(Eo *obj, Evas_Object_Box_Layout cb, const void *data, Eina_Free_Cb free_data) EINA_ARG_NONNULL(2);

/**
 *
 * Layout function which sets the box @a o to a (basic) horizontal box
 *
 * In this layout, the box object's overall behavior is controlled by
 * its padding/alignment properties, which are set by the
 * <c>evas_object_box_{h,v}_{align,padding}_set()</c> family of
 * functions. The size hints of the elements in the box -- set by the
 * <c>evas_object_size_hint_{align,padding,weight}_set()</c> functions
 * -- also control the way this function works.
 *
 * \par Box's properties:
 * @c align_h controls the horizontal alignment of the child objects
 * relative to the containing box. When set to @c 0.0, children are
 * aligned to the left. A value of @c 1.0 makes them aligned to the
 * right border. Values in between align them proportionally. Note
 * that if the size required by the children, which is given by their
 * widths and the @c padding_h property of the box, is bigger than the
 * their container's width, the children will be displayed out of the
 * box's bounds. A negative value of @c align_h makes the box to
 * @b justify its children. The padding between them, in this case, is
 * corrected so that the leftmost one touches the left border and the
 * rightmost one touches the right border (even if they must
 * overlap). The @c align_v and @c padding_v properties of the box
 * @b don't contribute to its behaviour when this layout is chosen.
 *
 * \par Child element's properties:
 * @c align_x does @b not influence the box's behavior. @c padding_l
 * and @c padding_r sum up to the container's horizontal padding
 * between elements. The child's @c padding_t, @c padding_b and
 * @c align_y properties apply for padding/alignment relative to the
 * overall height of the box. Finally, there is the @c weight_x
 * property, which, if set to a non-zero value, tells the container
 * that the child width is @b not pre-defined. If the container can't
 * accommodate all its children, it sets the widths of the ones
 * <b>with weights</b> to sizes as small as they can all fit into
 * it. If the size required by the children is less than the
 * available, the box increases its childrens' (which have weights)
 * widths as to fit the remaining space. The @c weight_x property,
 * besides telling the element is resizable, gives a @b weight for the
 * resizing process.  The parent box will try to distribute (or take
 * off) widths accordingly to the @b normalized list of weights: most
 * weighted children remain/get larger in this process than the least
 * ones. @c weight_y does not influence the layout.
 *
 * If one desires that, besides having weights, child elements must be
 * resized bounded to a minimum or maximum size, those size hints must
 * be set, by the <c>evas_object_size_hint_{min,max}_set()</c>
 * functions.
 *
 * @param[in] priv No description supplied.
 * @param[in] data No description supplied.
 */
EAPI void evas_object_box_layout_horizontal(Eo *obj, Evas_Object_Box_Data *priv, void *data);

/**
 *
 * Layout function which sets the box @a o to a (basic) vertical box
 *
 * This function behaves analogously to
 * evas_object_box_layout_horizontal(). The description of its
 * behaviour can be derived from that function's documentation.
 *
 * @param[in] priv No description supplied.
 * @param[in] data No description supplied.
 */
EAPI void evas_object_box_layout_vertical(Eo *obj, Evas_Object_Box_Data *priv, void *data);

/**
 *
 * Layout function which sets the box @a o to a <b>maximum size,
 * homogeneous</b> horizontal box
 *
 * In a maximum size, homogeneous horizontal box, besides having cells
 * of <b>equal size</b> reserved for the child objects, this size will
 * be defined by the size of the @b largest child in the box (in
 * width). The box's overall behavior is controlled by its properties,
 * which are set by the
 * <c>evas_object_box_{h,v}_{align,padding}_set()</c> family of
 * functions.  The size hints of the elements in the box -- set by the
 * <c>evas_object_size_hint_{align,padding,weight}_set()</c> functions
 * -- also control the way this function works.
 *
 * \par Box's properties:
 * @c padding_h tells the box to draw empty spaces of that size, in
 * pixels, between the child objects' cells. @c align_h controls the
 * horizontal alignment of the child objects, relative to the
 * containing box. When set to @c 0.0, children are aligned to the
 * left. A value of @c 1.0 lets them aligned to the right
 * border. Values in between align them proportionally. A negative
 * value of @c align_h makes the box to @b justify its children
 * cells. The padding between them, in this case, is corrected so that
 * the leftmost one touches the left border and the rightmost one
 * touches the right border (even if they must overlap). The
 * @c align_v and @c padding_v properties of the box don't contribute to
 * its behaviour when this layout is chosen.
 *
 * \par Child element's properties:
 * @c padding_l and @c padding_r sum up to the required width of the
 * child element. The @c align_x property tells the relative position
 * of this overall child width in its allocated cell (@c 0.0 to
 * extreme left, @c 1.0 to extreme right). A value of @c -1.0 to
 * @c align_x makes the box try to resize this child element to the exact
 * width of its cell (respecting the minimum and maximum size hints on
 * the child's width and accounting for its horizontal padding
 * hints). The child's @c padding_t, @c padding_b and @c align_y
 * properties apply for padding/alignment relative to the overall
 * height of the box. A value of @c -1.0 to @c align_y makes the box
 * try to resize this child element to the exact height of its parent
 * (respecting the max hint on the child's height).
 *
 * @param[in] priv No description supplied.
 * @param[in] data No description supplied.
 */
EAPI void evas_object_box_layout_homogeneous_max_size_horizontal(Eo *obj, Evas_Object_Box_Data *priv, void *data);

/**
 *
 * Layout function which sets the box @a o to a @b flow vertical box.
 *
 * This function behaves analogously to
 * evas_object_box_layout_flow_horizontal(). The description of its
 * behaviour can be derived from that function's documentation.
 *
 * @param[in] priv No description supplied.
 * @param[in] data No description supplied.
 */
EAPI void evas_object_box_layout_flow_vertical(Eo *obj, Evas_Object_Box_Data *priv, void *data);

/**
 *
 * Insert a new @a child object <b>after another existing one</b>, in
 * a given box object @a o.
 *
 * @return A box option bound to the recently added box item or @c
 * NULL, on errors
 *
 * On success, the @c "child,added" smart event will take place.
 *
 * @note This function will fail if @p reference is not a member of @p
 * o.
 *
 * @note The actual placing of the item relative to @p o's area will
 * depend on the layout set to it.
 *
 * @note This call will trigger the box's
 * _Evas_Object_Box_Api.insert_after smart function.
 *
 * @param[in] child A child Evas object to be made a member of @p o
 * @param[in] reference The child object to place this new one after
 */
EAPI Evas_Object_Box_Option *evas_object_box_insert_after(Eo *obj, Evas_Object *child, const Evas_Object *reference) EINA_ARG_NONNULL(2, 3);

/**
 *
 * Remove @b all child objects from a box object, unparenting them
 * again.
 *
 * @return @c EINA_TRUE, on success, @c EINA_FALSE otherwise
 *
 * This has the same effect of calling evas_object_box_remove() on
 * each of @p o's child objects, in sequence. If, and only if, all
 * those calls succeed, so does this one.
 *
 * @param[in] clear if true, it will delete just removed children.
 */
EAPI Eina_Bool evas_object_box_remove_all(Eo *obj, Eina_Bool clear);

/**
 *
 * Get an iterator to walk the list of children of a given box object.
 *
 * @return An iterator on @p o's child objects, on success, or @c NULL,
 * on errors
 *
 * @note Do @b not remove or delete objects while walking the list.
 *
 */
EAPI Eina_Iterator *evas_object_box_iterator_new(const Eo *obj) EINA_WARN_UNUSED_RESULT;

/**
 *
 * Add a new box as a @b child of a given smart object.
 *
 * @return @c NULL on error, a pointer to a new box object on
 * success.
 *
 * This is a helper function that has the same effect of putting a new
 * box object into @p parent by use of evas_object_smart_member_add().
 *
 * @see evas_object_box_add()
 *
 */
EAPI Evas_Object *evas_object_box_add_to(Eo *obj) EINA_WARN_UNUSED_RESULT;

/**
 *
 * Append a new @a child object to the given box object @a o.
 *
 * @return A box option bound to the recently added box item or @c
 * NULL, on errors
 *
 * On success, the @c "child,added" smart event will take place.
 *
 * @note The actual placing of the item relative to @p o's area will
 * depend on the layout set to it. For example, on horizontal layouts
 * an item in the end of the box's list of children will appear on its
 * right.
 *
 * @note This call will trigger the box's _Evas_Object_Box_Api.append
 * smart function.
 *
 * @param[in] child A child Evas object to be made a member of @p o
 */
EAPI Evas_Object_Box_Option *evas_object_box_append(Eo *obj, Evas_Object *child) EINA_ARG_NONNULL(2);

/**
 *
 * Get the numerical identifier of the property of the child elements
 * of the box @a o which have @a name as name string
 *
 * @return The numerical ID of the given property or @c -1, on
 * errors.
 *
 * @note This call won't do anything for a canonical Evas box. Only
 * users which have @b subclassed it, setting custom box items options
 * (see #Evas_Object_Box_Option) on it, would benefit from this
 * function. They'd have to implement it and set it to be the
 * _Evas_Object_Box_Api.property_id_get smart class function of the
 * box, which is originally set to @c NULL.
 *
 * @param[in] name The name string of the option being searched, for
its ID
 */
EAPI int evas_object_box_option_property_id_get(const Eo *obj, const char *name) EINA_WARN_UNUSED_RESULT EINA_ARG_NONNULL(2);

/**
 *
 * Prepend a new @a child object to the given box object @a o.
 *
 * @return A box option bound to the recently added box item or @c
 * NULL, on errors
 *
 * On success, the @c "child,added" smart event will take place.
 *
 * @note The actual placing of the item relative to @p o's area will
 * depend on the layout set to it. For example, on horizontal layouts
 * an item in the beginning of the box's list of children will appear
 * on its left.
 *
 * @note This call will trigger the box's
 * _Evas_Object_Box_Api.prepend smart function.
 *
 * @param[in] child A child Evas object to be made a member of @p o
 */
EAPI Evas_Object_Box_Option *evas_object_box_prepend(Eo *obj, Evas_Object *child) EINA_ARG_NONNULL(2);

/**
 *
 * Get an accessor (a structure providing random items access) to the
 * list of children of a given box object.
 *
 * @return An accessor on @p o's child objects, on success, or @c NULL,
 * on errors
 *
 * @note Do not remove or delete objects while walking the list.
 *
 */
EAPI Eina_Accessor *evas_object_box_accessor_new(const Eo *obj) EINA_WARN_UNUSED_RESULT;

/**
 *
 * Remove an object, <b>bound to a given position</b> in a box object,
 * unparenting it again.
 *
 * @return @c EINA_TRUE, on success, @c EINA_FALSE otherwise
 *
 * On removal, you'll get an unparented object again, just as it was
 * before you inserted it in the box. The @c option_free() box smart
 * callback will be called automatically for you and, also, the
 * @c "child,removed" smart event will take place.
 *
 * @note This function will fail if the given position is invalid,
 * given @p o's internal list of elements.
 *
 * @note This call will trigger the box's
 * _Evas_Object_Box_Api.remove_at smart function.
 *
 * @param[in] pos The numeric position (starting from @c 0) of the child
object to be removed
 */
EAPI Eina_Bool evas_object_box_remove_at(Eo *obj, unsigned int pos);

/**
 *
 * Insert a new @a child object <b>before another existing one</b>, in
 * a given box object @a o.
 *
 * @return A box option bound to the recently added box item or @c
 * NULL, on errors
 *
 * On success, the @c "child,added" smart event will take place.
 *
 * @note This function will fail if @p reference is not a member of @p
 * o.
 *
 * @note The actual placing of the item relative to @p o's area will
 * depend on the layout set to it.
 *
 * @note This call will trigger the box's
 * _Evas_Object_Box_Api.insert_before smart function.
 *
 * @param[in] child A child Evas object to be made a member of @p o
 * @param[in] reference The child object to place this new one before
 */
EAPI Evas_Object_Box_Option *evas_object_box_insert_before(Eo *obj, Evas_Object *child, const Evas_Object *reference) EINA_ARG_NONNULL(2, 3);

/**
 *
 * Get the name of the property of the child elements of the box @a o
 * which have @a id as identifier
 *
 * @return The name of the given property or @c NULL, on errors.
 *
 * @note This call won't do anything for a canonical Evas box. Only
 * users which have @b subclassed it, setting custom box items options
 * (see #Evas_Object_Box_Option) on it, would benefit from this
 * function. They'd have to implement it and set it to be the
 * _Evas_Object_Box_Api.property_name_get smart class function of the
 * box, which is originally set to @c NULL.
 *
 * @param[in] property The numerical identifier of the option being searched,
for its name
 */
EAPI const char *evas_object_box_option_property_name_get(const Eo *obj, int property) EINA_WARN_UNUSED_RESULT;

/**
 *
 * Layout function which sets the box @a o to a @b homogeneous
 * horizontal box
 *
 * In a homogeneous horizontal box, its width is divided @b equally
 * between the contained objects. The box's overall behavior is
 * controlled by its padding/alignment properties, which are set by
 * the <c>evas_object_box_{h,v}_{align,padding}_set()</c> family of
 * functions.  The size hints the elements in the box -- set by the
 * <c>evas_object_size_hint_{align,padding,weight}_set()</c> functions
 * -- also control the way this function works.
 *
 * \par Box's properties:
 * @c align_h has no influence on the box for this layout.
 * @c padding_h tells the box to draw empty spaces of that size, in
 * pixels, between the (equal) child objects' cells. The @c align_v
 * and @c padding_v properties of the box don't contribute to its
 * behaviour when this layout is chosen.
 *
 * \par Child element's properties:
 * @c padding_l and @c padding_r sum up to the required width of the
 * child element. The @c align_x property tells the relative position
 * of this overall child width in its allocated cell (@c 0.0 to
 * extreme left, @c 1.0 to extreme right). A value of @c -1.0 to
 * @c align_x makes the box try to resize this child element to the exact
 * width of its cell (respecting the minimum and maximum size hints on
 * the child's width and accounting for its horizontal padding
 * hints). The child's @c padding_t, @c padding_b and @c align_y
 * properties apply for padding/alignment relative to the overall
 * height of the box. A value of @c -1.0 to @c align_y makes the box
 * try to resize this child element to the exact height of its parent
 * (respecting the maximum size hint on the child's height).
 *
 * @param[in] priv No description supplied.
 * @param[in] data No description supplied.
 */
EAPI void evas_object_box_layout_homogeneous_horizontal(Eo *obj, Evas_Object_Box_Data *priv, void *data);

/**
 *
 * Layout function which sets the box @a o to a <b>maximum size,
 * homogeneous</b> vertical box
 *
 * This function behaves analogously to
 * evas_object_box_layout_homogeneous_max_size_horizontal(). The
 * description of its behaviour can be derived from that function's
 * documentation.
 *
 * @param[in] priv No description supplied.
 * @param[in] data No description supplied.
 */
EAPI void evas_object_box_layout_homogeneous_max_size_vertical(Eo *obj, Evas_Object_Box_Data *priv, void *data);

/**
 *
 * Insert a new @a child object <b>at a given position</b>, in a given
 * box object @a o.
 *
 * @return A box option bound to the recently added box item or @c
 * NULL, on errors
 *
 * On success, the @c "child,added" smart event will take place.
 *
 * @note This function will fail if the given position is invalid,
 * given @p o's internal list of elements.
 *
 * @note The actual placing of the item relative to @p o's area will
 * depend on the layout set to it.
 *
 * @note This call will trigger the box's
 * _Evas_Object_Box_Api.insert_at smart function.
 *
 * @param[in] child A child Evas object to be made a member of @p o
 * @param[in] pos The numeric position (starting from @c 0) to place the
new child object at
 */
EAPI Evas_Object_Box_Option *evas_object_box_insert_at(Eo *obj, Evas_Object *child, unsigned int pos) EINA_ARG_NONNULL(2);

/**
 *
 * Remove a given object from a box object, unparenting it again.
 *
 * @return @c EINA_TRUE, on success, @c EINA_FALSE otherwise
 *
 * On removal, you'll get an unparented object again, just as it was
 * before you inserted it in the box. The
 * _Evas_Object_Box_Api.option_free box smart callback will be called
 * automatically for you and, also, the @c "child,removed" smart event
 * will take place.
 *
 * @note This call will trigger the box's _Evas_Object_Box_Api.remove
 * smart function.
 *
 * @param[in] child The handle to the child object to be removed
 */
EAPI Eina_Bool evas_object_box_remove(Eo *obj, Evas_Object *child) EINA_ARG_NONNULL(2);

/**
 *
 * Layout function which sets the box @a o to a @b stacking box
 *
 * In a stacking box, all children will be given the same size -- the
 * box's own size -- and they will be stacked one above the other, so
 * that the first object in @p o's internal list of child elements
 * will be the bottommost in the stack.
 *
 * \par Box's properties:
 * No box properties are used.
 *
 * \par Child element's properties:
 * @c padding_l and @c padding_r sum up to the required width of the
 * child element. The @c align_x property tells the relative position
 * of this overall child width in its allocated cell (@c 0.0 to
 * extreme left, @c 1.0 to extreme right). A value of @c -1.0 to @c
 * align_x makes the box try to resize this child element to the exact
 * width of its cell (respecting the min and max hints on the child's
 * width and accounting for its horizontal padding properties). The
 * same applies to the vertical axis.
 *
 * @param[in] priv No description supplied.
 * @param[in] data No description supplied.
 */
EAPI void evas_object_box_layout_stack(Eo *obj, Evas_Object_Box_Data *priv, void *data);

/**
 *
 * Layout function which sets the box @a o to a @b homogeneous
 * vertical box
 *
 * This function behaves analogously to
 * evas_object_box_layout_homogeneous_horizontal().  The description
 * of its behaviour can be derived from that function's documentation.
 *
 * @param[in] priv No description supplied.
 * @param[in] data No description supplied.
 */
EAPI void evas_object_box_layout_homogeneous_vertical(Eo *obj, Evas_Object_Box_Data *priv, void *data);

/**
 *
 * Layout function which sets the box @a o to a @b flow horizontal
 * box.
 *
 * In a flow horizontal box, the box's child elements are placed in
 * @b rows (think of text as an analogy). A row has as much elements as
 * can fit into the box's width. The box's overall behavior is
 * controlled by its properties, which are set by the
 * <c>evas_object_box_{h,v}_{align,padding}_set()</c> family of
 * functions.  The size hints of the elements in the box -- set by the
 * <c>evas_object_size_hint_{align,padding,weight}_set()</c> functions
 * -- also control the way this function works.
 *
 * \par Box's properties:
 * @c padding_h tells the box to draw empty spaces of that size, in
 * pixels, between the child objects' cells. @c align_h dictates the
 * horizontal alignment of the rows (@c 0.0 to left align them, @c 1.0
 * to right align). A value of @c -1.0 to @c align_h lets the rows
 * @b justified horizontally. @c align_v controls the vertical alignment
 * of the entire set of rows (@c 0.0 to top, @c 1.0 to bottom). A
 * value of @c -1.0 to @c align_v makes the box to @b justify the rows
 * vertically. The padding between them, in this case, is corrected so
 * that the first row touches the top border and the last one touches
 * the bottom border (even if they must overlap). @c padding_v has no
 * influence on the layout.
 *
 * \par Child element's properties:
 * @c padding_l and @c padding_r sum up to the required width of the
 * child element. The @c align_x property has no influence on the
 * layout. The child's @c padding_t and @c padding_b sum up to the
 * required height of the child element and is the only means (besides
 * row justifying) of setting space between rows. Note, however, that
 * @c align_y dictates positioning relative to the <b>largest
 * height</b> required by a child object in the actual row.
 *
 * @param[in] priv No description supplied.
 * @param[in] data No description supplied.
 */
EAPI void evas_object_box_layout_flow_horizontal(Eo *obj, Evas_Object_Box_Data *priv, void *data);

#endif
