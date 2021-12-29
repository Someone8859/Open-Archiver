#ifndef _EVAS_TABLE_EO_LEGACY_H_
#define _EVAS_TABLE_EO_LEGACY_H_


/**
 *
 * @brief Set how this table should layout children.
 *
 * @todo consider aspect hint and respect it.
 *
 * @par EVAS_OBJECT_TABLE_HOMOGENEOUS_NONE
 * If table does not use homogeneous mode then columns and rows will
 * be calculated based on hints of individual cells. This operation
 * mode is more flexible, but more complex and heavy to calculate as
 * well. @b Weight properties are handled as a boolean expand. Negative
 * alignment will be considered as 0.5. This is the default.
 *
 * @todo @c EVAS_OBJECT_TABLE_HOMOGENEOUS_NONE should balance weight.
 *
 * @par EVAS_OBJECT_TABLE_HOMOGENEOUS_TABLE
 * When homogeneous is relative to table the own table size is divided
 * equally among children, filling the whole table area. That is, if
 * table has @c WIDTH and @c COLUMNS, each cell will get <tt>WIDTH /
 * COLUMNS</tt> pixels. If children have minimum size that is larger
 * than this amount (including padding), then it will overflow and be
 * aligned respecting the alignment hint, possible overlapping sibling
 * cells. @b Weight hint is used as a boolean, if greater than zero it
 * will make the child expand in that axis, taking as much space as
 * possible (bounded to maximum size hint). Negative alignment will be
 * considered as 0.5.
 *
 * @par EVAS_OBJECT_TABLE_HOMOGENEOUS_ITEM
 * When homogeneous is relative to item it means the greatest minimum
 * cell size will be used. That is, if no element is set to expand,
 * the table will have its contents to a minimum size, the bounding
 * box of all these children will be aligned relatively to the table
 * object using evas_object_table_align_get(). If the table area is
 * too small to hold this minimum bounding box, then the objects will
 * keep their size and the bounding box will overflow the box area,
 * still respecting the alignment. @b Weight hint is used as a
 * boolean, if greater than zero it will make that cell expand in that
 * axis, toggling the <b>expand mode</b>, which makes the table behave
 * much like @b EVAS_OBJECT_TABLE_HOMOGENEOUS_TABLE, except that the
 * bounding box will overflow and items will not overlap siblings. If
 * no minimum size is provided at all then the table will fallback to
 * expand mode as well.
 *
 * @param[in] homogeneous No description supplied.
 */
EAPI void evas_object_table_homogeneous_set(Eo *obj, Evas_Object_Table_Homogeneous_Mode homogeneous);

/**
 *
 * Get the current layout homogeneous mode.
 *
 * @see evas_object_table_homogeneous_set()
 *
 */
EAPI Evas_Object_Table_Homogeneous_Mode evas_object_table_homogeneous_get(const Eo *obj);

/**
 *
 * Set the alignment of the whole bounding box of contents.
 *
 * @param[in] horizontal No description supplied.
 * @param[in] vertical No description supplied.
 */
EAPI void evas_object_table_align_set(Eo *obj, double horizontal, double vertical);

/**
 *
 * Get alignment of the whole bounding box of contents.
 *
 * @param[out] horizontal No description supplied.
 * @param[out] vertical No description supplied.
 */
EAPI void evas_object_table_align_get(const Eo *obj, double *horizontal, double *vertical);

/**
 *
 * Set padding between cells.
 *
 * @param[in] horizontal No description supplied.
 * @param[in] vertical No description supplied.
 */
EAPI void evas_object_table_padding_set(Eo *obj, Evas_Coord horizontal, Evas_Coord vertical);

/**
 *
 * Get padding between cells.
 *
 * @param[out] horizontal No description supplied.
 * @param[out] vertical No description supplied.
 */
EAPI void evas_object_table_padding_get(const Eo *obj, Evas_Coord *horizontal, Evas_Coord *vertical);

/**
 *
 * Sets the mirrored mode of the table. In mirrored mode the table items go
 * from right to left instead of left to right. That is, 1,1 is top right, not
 * top left.
 *
 * @since 1.1
 *
 * @param[in] mirrored the mirrored mode to set
 */
EAPI void evas_object_table_mirrored_set(Eo *obj, Eina_Bool mirrored);

/**
 *
 * Gets the mirrored mode of the table.
 *
 * @return @c EINA_TRUE if it's a mirrored table, @c EINA_FALSE otherwise.
 * @since 1.1
 * @see evas_object_table_mirrored_set()
 *
 */
EAPI Eina_Bool evas_object_table_mirrored_get(const Eo *obj);

/**
 *
 * Get the number of columns and rows this table takes.
 *
 * @note columns and rows are virtual entities, one can specify a table
 * with a single object that takes 4 columns and 5 rows. The only
 * difference for a single cell table is that paddings will be
 * accounted proportionally.
 *
 * @param[out] cols No description supplied.
 * @param[out] rows No description supplied.
 */
EAPI void evas_object_table_col_row_size_get(const Eo *obj, int *cols, int *rows);

/**
 *
 * Get the list of children for the table.
 *
 * @note This is a duplicate of the list kept by the table internally.
 * It's up to the user to destroy it when it no longer needs it.
 * It's possible to remove objects from the table when walking this
 * list, but these removals won't be reflected on it.
 *
 */
EAPI Eina_List *evas_object_table_children_get(const Eo *obj) EINA_WARN_UNUSED_RESULT;

/**
 *
 * Get the child of the table at the given coordinates
 *
 * @note This does not take into account col/row spanning
 *
 * @param[in] col No description supplied.
 * @param[in] row No description supplied.
 */
EAPI Evas_Object *evas_object_table_child_get(const Eo *obj, unsigned short col, unsigned short row);

/**
 *
 * Faster way to remove all child objects from a table object.
 *
 * @param[in] clear if true, it will delete just removed children.
 */
EAPI void evas_object_table_clear(Eo *obj, Eina_Bool clear);

/**
 *
 * Get an accessor to get random access to the list of children for the table.
 *
 * @note Do not remove or delete objects while walking the list.
 *
 */
EAPI Eina_Accessor *evas_object_table_accessor_new(const Eo *obj) EINA_WARN_UNUSED_RESULT;

/**
 *
 * Get an iterator to walk the list of children for the table.
 *
 * @note Do not remove or delete objects while walking the list.
 *
 */
EAPI Eina_Iterator *evas_object_table_iterator_new(const Eo *obj) EINA_WARN_UNUSED_RESULT;

/**
 *
 * @brief Create a table that is child of a given element @a parent.
 *
 * @see evas_object_table_add()
 *
 */
EAPI Evas_Object *evas_object_table_add_to(Eo *obj) EINA_WARN_UNUSED_RESULT;

/**
 *
 * Get packing location of a child of table
 *
 * @return 1 on success, 0 on failure.
 * @since 1.1
 *
 * @param[in] child The child object to add.
 * @param[out] col pointer to store relative-horizontal position to place child.
 * @param[out] row pointer to store relative-vertical position to place child.
 * @param[out] colspan pointer to store how many relative-horizontal position to use for this child.
 * @param[out] rowspan pointer to store how many relative-vertical position to use for this child.
 */
EAPI Eina_Bool evas_object_table_pack_get(const Eo *obj, Evas_Object *child, unsigned short *col, unsigned short *row, unsigned short *colspan, unsigned short *rowspan);

/**
 *
 * Add a new child to a table object or set its current packing.
 *
 * Note that columns and rows only guarantee 16bit unsigned values at best.
 * That means that col + colspan AND row + rowspan must fit inside 16bit
 * unsigned values cleanly. You will be warned once values exceed 15bit
 * storage, and attempting to use values not able to fit in 16bits will
 * result in failure.
 *
 * @return 1 on success, 0 on failure.
 *
 * @param[in] child The child object to add.
 * @param[in] col relative-horizontal position to place child.
 * @param[in] row relative-vertical position to place child.
 * @param[in] colspan how many relative-horizontal position to use for this child.
 * @param[in] rowspan how many relative-vertical position to use for this child.
 */
EAPI Eina_Bool evas_object_table_pack(Eo *obj, Evas_Object *child, unsigned short col, unsigned short row, unsigned short colspan, unsigned short rowspan) EINA_ARG_NONNULL(2);

/**
 *
 * Remove child from table.
 *
 * @note removing a child will immediately call a walk over children in order
 * to recalculate numbers of columns and rows. If you plan to remove
 * all children, use evas_object_table_clear() instead.
 *
 * @return 1 on success, 0 on failure.
 *
 * @param[in] child No description supplied.
 */
EAPI Eina_Bool evas_object_table_unpack(Eo *obj, Evas_Object *child) EINA_ARG_NONNULL(2);

#endif
