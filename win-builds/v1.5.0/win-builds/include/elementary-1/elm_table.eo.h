#ifndef _ELM_TABLE_EO_H_
#define _ELM_TABLE_EO_H_

#ifndef _ELM_TABLE_EO_TYPES
#define _ELM_TABLE_EO_TYPES


#endif
#define ELM_TABLE_CLASS elm_table_class_get()

const Eo_Class *elm_table_class_get(void) EINA_CONST;

/**
 *
 * @brief Set the homogeneous layout in the table
 *
 * @ingroup Table
 *
 * @param[in] homogeneous A boolean to set if the layout is homogeneous in the
table (EINA_TRUE = homogeneous, EINA_FALSE = no homogeneous)
 *
 */
EOAPI void  elm_obj_table_homogeneous_set(Eina_Bool homogeneous);

/**
 *
 * @brief Get the current table homogeneous mode.
 *
 * @return A boolean to indicating if the layout is homogeneous in the table
 * (EINA_TRUE = homogeneous, EINA_FALSE = no homogeneous)
 *
 * @ingroup Table
 *
 *
 */
EOAPI Eina_Bool  elm_obj_table_homogeneous_get(void);

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
 *
 */
EOAPI void  elm_obj_table_padding_set(Evas_Coord horizontal, Evas_Coord vertical);

/**
 *
 * @brief Get padding between cells.
 *
 * @ingroup Table
 *
 * @param[out] horizontal set the horizontal padding.
 * @param[out] vertical set the vertical padding.
 *
 */
EOAPI void  elm_obj_table_padding_get(Evas_Coord *horizontal, Evas_Coord *vertical);

/**
 *
 * @brief Faster way to remove all child objects from a table object.
 *
 * @ingroup Table
 *
 * @param[in] clear If true, will delete children, else just remove from table.
 *
 */
EOAPI void  elm_obj_table_clear(Eina_Bool clear);

/**
 *
 * @brief Get child object of table at given coordinates.
 *
 * @return Child of object if find if not return NULL.
 *
 * @param[in] col Column number of child object
 * @param[in] row Row number of child object
 *
 */
EOAPI Evas_Object * elm_obj_table_child_get(int col, int row);

/**
 *
 * @brief Set the packing location of an existing child of the table
 *
 * Modifies the position of an object already in the table.
 *
 * @note All positioning inside the table is relative to rows and columns, so
 * a value of 0 for col and row, means the top left cell of the table, and a
 * value of 1 for colspan and rowspan means @p subobj only takes that 1 cell.
 *
 * @ingroup Table
 *
 * @param[in] subobj The subobject to be modified in the table
 * @param[in] column Column number
 * @param[in] row Row number
 * @param[in] colspan colspan
 * @param[in] rowspan rowspan
 *
 */
EOAPI void  elm_obj_table_pack_set(Evas_Object *subobj, int column, int row, int colspan, int rowspan);

/**
 *
 * @brief Get the packing location of an existing child of the table
 *
 * @see elm_table_pack_set()
 *
 * @ingroup Table
 *
 * @param[in] subobj The subobject to be modified in the table
 * @param[out] column Column number
 * @param[out] row Row number
 * @param[out] colspan colspan
 * @param[out] rowspan rowspan
 *
 */
EOAPI void  elm_obj_table_pack_get(Evas_Object *subobj, int *column, int *row, int *colspan, int *rowspan);

/**
 *
 * @brief Remove child from table.
 *
 * @ingroup Table
 *
 * @param[in] subobj The subobject
 *
 */
EOAPI void  elm_obj_table_unpack(Evas_Object *subobj);

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
 *
 */
EOAPI void  elm_obj_table_pack(Evas_Object *subobj, int column, int row, int colspan, int rowspan);


#endif
