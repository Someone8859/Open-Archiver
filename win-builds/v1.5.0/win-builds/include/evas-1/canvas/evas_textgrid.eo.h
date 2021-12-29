#ifndef _EVAS_TEXTGRID_EO_H_
#define _EVAS_TEXTGRID_EO_H_

#ifndef _EVAS_TEXTGRID_EO_TYPES
#define _EVAS_TEXTGRID_EO_TYPES


#endif
#define EVAS_TEXTGRID_CLASS evas_textgrid_class_get()

const Eo_Class *evas_textgrid_class_get(void) EINA_CONST;

/**
 *
 * @brief Set the font (source) file to be used on a given textgrid object.
 *
 * This function allows the font file @p font_source to be explicitly
 * set for the textgrid object @p obj, overriding system lookup, which
 * will first occur in the given file's contents. If @p font_source is
 * @c NULL or is an empty string, or the same font_source has already
 * been set, or on error, this function does nothing.
 *
 * @see evas_object_textgrid_font_get()
 * @see evas_object_textgrid_font_set()
 * @see evas_object_textgrid_font_source_get()
 *
 * @since 1.7
 *
 * @param[in] font_source The font file's path.
 *
 */
EOAPI void  evas_obj_textgrid_font_source_set(const char *font_source);

/**
 *
 * @brief Get the font file's path which is being used on a given textgrid object.
 *
 * @return The font file's path.
 *
 * This function returns the font source path of the textgrid object
 * @p obj. If the font source path has not been set, or on error,
 * @c NULL is returned.
 *
 * @see evas_object_textgrid_font_get()
 * @see evas_object_textgrid_font_set()
 * @see evas_object_textgrid_font_source_set()
 *
 * @since 1.7
 *
 *
 */
EOAPI const char * evas_obj_textgrid_font_source_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] styles No description supplied.
 *
 */
EOAPI void  evas_obj_textgrid_supported_font_styles_set(Evas_Textgrid_Font_Style styles);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI Evas_Textgrid_Font_Style  evas_obj_textgrid_supported_font_styles_get(void);

/**
 *
 * @brief Set the font family and size on a given textgrid object.
 *
 * This function allows the font name @p font_name and size
 * @p font_size of the textgrid object @p obj to be set. The @p font_name
 * string has to follow fontconfig's convention on naming fonts, as
 * it's the underlying library used to query system fonts by Evas (see
 * the @c fc-list command's output, on your system, to get an
 * idea). It also has to be a monospace font. If @p font_name is
 * @c NULL, or if it is an empty string, or if @p font_size is less or
 * equal than 0, or on error, this function does nothing.
 *
 * @see evas_object_textgrid_font_get()
 * @see evas_object_textgrid_font_source_set()
 * @see evas_object_textgrid_font_source_get()
 *
 * @since 1.7
 *
 * @param[in] font_name The font (family) name.
 * @param[in] font_size The font size, in points.
 *
 */
EOAPI void  evas_obj_textgrid_font_set(const char *font_name, Evas_Font_Size font_size);

/**
 *
 * @brief Retrieve the font family and size in use on a given textgrid object.
 *
 * This function allows the font name and size of a textgrid object
 * @p obj to be queried and stored respectively in the buffers
 * @p font_name and @p font_size. Be aware that the font name string is
 * still owned by Evas and should @b not have free() called on it by
 * the caller of the function. On error, the font name is the empty
 * string and the font size is 0. @p font_name and @p font_source can
 * be @c NULL.
 *
 * @see evas_object_textgrid_font_set()
 * @see evas_object_textgrid_font_source_set()
 * @see evas_object_textgrid_font_source_get()
 *
 * @since 1.7
 *
 * @param[out] font_name The font (family) name.
 * @param[out] font_size The font size, in points.
 *
 */
EOAPI void  evas_obj_textgrid_font_get(const char **font_name, Evas_Font_Size *font_size);

/**
 *
 * @brief Set the size of the textgrid object.
 *
 * This function sets the number of lines @p h and the number
 * of columns @p w to the textgrid object @p obj. If
 * @p w or @p h are less or equal than 0, this
 * functiond does nothing.
 *
 * @since 1.7
 *
 * @param[in] w The number of columns (width in cells) of the grid.
 * @param[in] h The number of rows (height in cells) of the grid.
 *
 */
EOAPI void  evas_obj_textgrid_size_set(int w, int h);

/**
 *
 * @brief Get the size of the textgrid object.
 *
 * This function retrieves the number of lines in the buffer @p
 * h and the number of columns in the buffer @p w of
 * the textgrid object @p obj. @p w or @p h can be
 * @c NULL. On error, their value is 0.
 *
 * @since 1.7
 *
 * @param[out] w The number of columns (width in cells) of the grid.
 * @param[out] h The number of rows (height in cells) of the grid.
 *
 */
EOAPI void  evas_obj_textgrid_size_get(int *w, int *h);

/**
 *
 * @brief Retrieve the size of a cell of the given textgrid object in pixels.
 *
 * This functions retrieves the width and height, in pixels, of a cell
 * of the textgrid object @p obj and store them respectively in the
 * buffers @p width and @p height. Their value depends on the
 * monospace font used for the textgrid object, as well as the
 * style. @p width and @p height can be @c NULL. On error, they are
 * set to 0.
 *
 * @see evas_object_textgrid_font_set()
 * @see evas_object_textgrid_supported_font_styles_set()
 *
 * @since 1.7
 *
 * @param[out] width A pointer to the location to store the width in pixels of a cell.
 * @param[out] height A pointer to the location to store the height in
pixels of a cell.
 *
 */
EOAPI void  evas_obj_textgrid_cell_size_get(int *width, int *height);

/**
 *
 * @brief Indicate for evas that part of a textgrid region (cells) has been updated.
 *
 * This function declares to evas that a region of cells was updated by
 * code and needs refreshing. An application should modify cells like this
 * as an example:
 *
 * @code
 * Evas_Textgrid_Cell *cells;
 * int i;
 *
 * cells = evas_object_textgrid_cellrow_get(obj, row);
 * for (i = 0; i < width; i++) cells[i].codepoint = 'E';
 * evas_object_textgrid_cellrow_set(obj, row, cells);
 * evas_object_textgrid_update_add(obj, 0, row, width, 1);
 * @endcode
 *
 * @see evas_object_textgrid_cellrow_set()
 * @see evas_object_textgrid_cellrow_get()
 * @see evas_object_textgrid_size_set()
 *
 * @since 1.7
 *
 * @param[in] x The rect region of cells top-left x (column)
 * @param[in] y The rect region of cells top-left y (row)
 * @param[in] w The rect region size in number of cells (columns)
 * @param[in] h The rect region size in number of cells (rows)
 *
 */
EOAPI void  evas_obj_textgrid_update_add(int x, int y, int w, int h);

/**
 *
 * @brief Set the string at the given row of the given textgrid object.
 *
 * This function returns cells to the textgrid taken by
 * evas_object_textgrid_cellrow_get(). The row pointer @p row should be the
 * same row pointer returned by evas_object_textgrid_cellrow_get() for the
 * same row @p y.
 *
 * @see evas_object_textgrid_cellrow_get()
 * @see evas_object_textgrid_size_set()
 * @see evas_object_textgrid_update_add()
 *
 * @since 1.7
 *
 * @param[in] y The row index of the grid.
 * @param[in] row The string as a sequence of #Evas_Textgrid_Cell.
 *
 */
EOAPI void  evas_obj_textgrid_cellrow_set(int y, const Evas_Textgrid_Cell *row);

/**
 *
 * @brief Get the string at the given row of the given textgrid object.
 *
 * @return A pointer to the first cell of the given row.
 *
 * This function returns a pointer to the first cell of the line @p y
 * of the textgrid object @p obj. If @p y is not between 0 and the
 * number of lines of the grid - 1, or on error, this function return @c NULL.
 *
 * @see evas_object_textgrid_cellrow_set()
 * @see evas_object_textgrid_size_set()
 * @see evas_object_textgrid_update_add()
 *
 * @since 1.7
 *
 * @param[in] y The row index of the grid.
 *
 */
EOAPI Evas_Textgrid_Cell * evas_obj_textgrid_cellrow_get(int y);

/**
 *
 * @brief The set color to the given palette at the given index of the given textgrid object.
 *
 * This function sets the color for the palette of type @p pal at the
 * index @p idx of the textgrid object @p obj. The ARGB components are
 * given by @p r, @p g, @p b and @p a. This color can be used when
 * setting the #Evas_Textgrid_Cell structure. The components must set
 * a pre-multiplied color. If pal is #EVAS_TEXTGRID_PALETTE_NONE or
 * #EVAS_TEXTGRID_PALETTE_LAST, or if @p idx is not between 0 and 255,
 * or on error, this function does nothing. The color components are
 * clamped between 0 and 255. If @p idx is greater than the latest set
 * color, the colors between this last index and @p idx - 1 are set to
 * black (0, 0, 0, 0).
 *
 * @see evas_object_textgrid_palette_get()
 *
 * @since 1.7
 *
 * @param[in] pal The type of the palette to set the color.
 * @param[in] idx The index of the paletter to which the color is stored.
 * @param[in] r The red component of the color.
 * @param[in] g The green component of the color.
 * @param[in] b The blue component of the color.
 * @param[in] a The alpha component of the color.
 *
 */
EOAPI void  evas_obj_textgrid_palette_set(Evas_Textgrid_Palette pal, int idx, int r, int g, int b, int a);

/**
 *
 * @brief The retrieve color to the given palette at the given index of the given textgrid object.
 *
 * This function retrieves the color for the palette of type @p pal at the
 * index @p idx of the textgrid object @p obj. The ARGB components are
 * stored in the buffers @p r, @p g, @p b and @p a. If @p idx is not
 * between 0 and the index of the latest set color, or if @p pal is
 * #EVAS_TEXTGRID_PALETTE_NONE or #EVAS_TEXTGRID_PALETTE_LAST, the
 * values of the components are 0. @p r, @p g, @p b and @p a can be
 * @c NULL.
 *
 * @see evas_object_textgrid_palette_set()
 *
 * @since 1.7
 *
 * @param[in] pal The type of the palette to set the color.
 * @param[in] idx The index of the palette to which the color is stored.
 * @param[out] r A pointer to the red component of the color.
 * @param[out] g A pointer to the green component of the color.
 * @param[out] b A pointer to the blue component of the color.
 * @param[out] a A pointer to the alpha component of the color.
 *
 */
EOAPI void  evas_obj_textgrid_palette_get(Evas_Textgrid_Palette pal, int idx, int *r, int *g, int *b, int *a);


#endif
