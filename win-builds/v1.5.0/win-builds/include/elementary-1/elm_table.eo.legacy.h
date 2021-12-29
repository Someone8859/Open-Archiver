#ifndef _ELM_TABLE_EO_LEGACY_H_
#define _ELM_TABLE_EO_LEGACY_H_


/**
 *
 * @brief Set the homogeneous layout in the table
 *
 * @ingroup Table
 *
 * @param[in] homogeneous A boolean to set if the layout is homogeneous in the
table (EINA_TRUE = homogeneous, EINA_FALSE = no homogeneous)
 */
EAPI void elm_table_homogeneous_set(Eo *obj, Eina_Bool homogeneous);

/**
 *
 * @brief Get the current table homogeneous mode.
 *
 * @return A boolean to indicating if the layout is homogeneous in the table
 * (EINA_TRUE = homogeneous, EINA_FALSE = no homogeneous)
 *
 * @ingroup Table
 *
 */
EAPI Eina_Bool elm_table_homogeneous_get(const Eo *obj);

/**
 *
 * @brief Set padding between cells.
 *
 * Default value is 0.
 *
 * @ingroup Table
 *
 * @param[in] horizontal set the horizontal padding.
 * @param[in] vertical set the vertical padding.
 */
EAPI void elm_table_padding_set(Eo *obj, Evas_Coord horizontal, Evas_Coord vertical);

/**
 *
 * @brief Get padding between cells.
 *
 * @ingroup Table
 *
 * @param[out] horizontal set the horizontal padding.
 * @param[out] vertical set the vertical padding.
 */
EAPI void elm_table_padding_get(const Eo *obj, Evas_Coord *horizontal, Evas_Coord *vertical);

/**
 *
 * @brief Faster way to remove all child objects from a table object.
 *
 * @ingroup Table
 *
 * @param[in] clear If true, will delete children, else just remove from table.
 */
EAPI void elm_table_clear(Eo *obj, Eina_Bool clear);

/**
 *
 * @brief Get child object of table at given coordinates.
 *
 * @return Child of object if find if not return NULL.
 *
 * @param[in] col Column number of child object
 * @param[in] row Row number of child object
 */
EAPI Evas_Object *elm_table_child_get(const Eo *obj, int col, int row);

/**
 *
 * @brief Remove child from table.
 *
 * @ingroup Table
 *
 * @param[in] subobj The subobject
 */
EAPI void elm_table_unpack(Eo *obj, Evas_Object *subobj);

/**
 *
 * @brief Add a subobject on the table with the coordinates passed
 *
 * @note All positioning inside the table is relative to rows and columns, so
 * a value of 0 for x and y, means the top left cell of the table, and a
 * value of 1 for w and h means @p subobj only takes that 1 cell.
 *
 * Note that columns and rows only guarantee 16bit unsigned values at best.
 * That means that col + colspan AND row + rowspan must fit inside 16bit
 * unsigned values cleanly. You will be warned once values exceed 15bit
 * storage, and attempting to use values not able to fit in 16bits will
 * result in failure.
 *
 * @ingroup Table
 *
 * @param[in] subobj The subobject to be added to the table
 * @param[in] column Column number
 * @param[in] row Row number
 * @param[in] colspan colspan
 * @param[in] rowspan rowspan
 */
EAPI void elm_table_pack(Eo *obj, Evas_Object *subobj, int column, int row, int colspan, int rowspan);

#endif
