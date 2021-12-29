#ifndef _EVAS_TEXTBLOCK_EO_LEGACY_H_
#define _EVAS_TEXTBLOCK_EO_LEGACY_H_


/**
 *
 * Sets the tetxblock's text to the markup text.
 *
 * @note assumes text does not include the unicode object replacement char (0xFFFC)
 *
 * @return Return no value.
 *
 * @param[in] text the markup text to use.
 */
EAPI void evas_object_textblock_text_markup_set(Eo *obj, const char *text);

/**
 *
 * Return the markup of the object.
 *
 * @return the markup text of the object.
 *
 */
EAPI const char *evas_object_textblock_text_markup_get(const Eo *obj);

/**
 *
 * @brief Sets the vertical alignment of text within the textblock object
 * as a whole.
 *
 * Normally alignment is 0.0 (top of object). Values given should be
 * between 0.0 and 1.0 (1.0 bottom of object, 0.5 being vertically centered
 * etc.).
 *
 * @since 1.1
 *
 * @param[in] align A value between @c 0.0 and @c 1.0.
 */
EAPI void evas_object_textblock_valign_set(Eo *obj, double align);

/**
 *
 * @brief Gets the vertical alignment of a textblock
 *
 * @return The alignment set for the object.
 * @since 1.1
 *
 */
EAPI double evas_object_textblock_valign_get(const Eo *obj);

/**
 *
 * @brief Sets the BiDi delimiters used in the textblock.
 *
 * BiDi delimiters are use for in-paragraph separation of bidi segments. This
 * is useful for example in recipients fields of e-mail clients where bidi
 * oddities can occur when mixing RTL and LTR.
 *
 * @since 1.1
 *
 * @param[in] delim A null terminated string of delimiters, e.g ",|".
 */
EAPI void evas_object_textblock_bidi_delimiters_set(Eo *obj, const char *delim);

/**
 *
 * @brief Gets the BiDi delimiters used in the textblock.
 *
 * BiDi delimiters are use for in-paragraph separation of bidi segments. This
 * is useful for example in recipients fields of e-mail clients where bidi
 * oddities can occur when mixing RTL and LTR.
 *
 * @return A null terminated string of delimiters, e.g ",|". If empty, returns
 * @c NULL.
 * @since 1.1
 *
 */
EAPI const char *evas_object_textblock_bidi_delimiters_get(const Eo *obj);

/**
 *
 * @brief Set the "replacement character" to use for the given textblock object.
 *
 * @param[in] ch The charset name.
 */
EAPI void evas_object_textblock_replace_char_set(Eo *obj, const char *ch);

/**
 *
 * @brief Sets newline mode. When true, newline character will behave
 * as a paragraph separator.
 *
 * @since 1.1
 *
 * @param[in] mode @c EINA_TRUE for legacy mode, @c EINA_FALSE otherwise.
 */
EAPI void evas_object_textblock_legacy_newline_set(Eo *obj, Eina_Bool mode);

/**
 *
 * @brief Gets newline mode. When true, newline character behaves
 * as a paragraph separator.
 *
 * @return @c EINA_TRUE if in legacy mode, @c EINA_FALSE otherwise.
 * @since 1.1
 *
 */
EAPI Eina_Bool evas_object_textblock_legacy_newline_get(const Eo *obj);

/**
 *
 * Set the objects style to ts.
 * @return Returns no value.
 *
 * @param[in] ts the style to set.
 */
EAPI void evas_object_textblock_style_set(Eo *obj, const Evas_Textblock_Style *ts);

/**
 *
 * Return the style of an object.
 * @return the style of the object.
 *
 */
EAPI const Evas_Textblock_Style *evas_object_textblock_style_get(const Eo *obj);

/**
 *
 * Returns the first format node.
 *
 */
EAPI const Evas_Object_Textblock_Node_Format *evas_textblock_node_format_first_get(const Eo *obj);

/**
 *
 * Get the formatted width and height. This calculates the actual size after restricting
 * the textblock to the current size of the object.
 * The main difference between this and @ref evas_object_textblock_size_native_get
 * is that the "native" function does not wrapping into account
 * it just calculates the real width of the object if it was placed on an
 * infinite canvas, while this function gives the size after wrapping
 * according to the size restrictions of the object.
 *
 * For example for a textblock containing the text: "You shall not pass!"
 * with no margins or padding and assuming a monospace font and a size of
 * 7x10 char widths (for simplicity) has a native size of 19x1
 * and a formatted size of 5x4.
 *
 *
 * @return Returns no value.
 * @see evas_object_textblock_size_native_get
 *
 * @param[out] w the width of the object.
 * @param[out] h the height of the object
 */
EAPI void evas_object_textblock_size_formatted_get(const Eo *obj, Evas_Coord *w, Evas_Coord *h);

/**
 *
 * Returns the last format node.
 *
 */
EAPI const Evas_Object_Textblock_Node_Format *evas_textblock_node_format_last_get(const Eo *obj);

/**
 *
 * Return the object's main cursor.
 *
 * @return The @p obj's main cursor.
 *
 */
EAPI Evas_Textblock_Cursor *evas_object_textblock_cursor_get(const Eo *obj);

/**
 *
 * Get the native width and height. This calculates the actual size without taking account
 * the current size of the object.
 * The main difference between this and @ref evas_object_textblock_size_formatted_get
 * is that the "native" function does not take wrapping into account
 * it just calculates the real width of the object if it was placed on an
 * infinite canvas, while the "formatted" function gives the size after
 * wrapping text according to the size restrictions of the object.
 *
 * For example for a textblock containing the text: "You shall not pass!"
 * with no margins or padding and assuming a monospace font and a size of
 * 7x10 char widths (for simplicity) has a native size of 19x1
 * and a formatted size of 5x4.
 *
 * @return Returns no value.
 *
 * @param[out] w the width returned
 * @param[out] h the height returned
 */
EAPI void evas_object_textblock_size_native_get(const Eo *obj, Evas_Coord *w, Evas_Coord *h);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[out] l No description supplied.
 * @param[out] r No description supplied.
 * @param[out] t No description supplied.
 * @param[out] b No description supplied.
 */
EAPI void evas_object_textblock_style_insets_get(const Eo *obj, Evas_Coord *l, Evas_Coord *r, Evas_Coord *t, Evas_Coord *b);

/**
 *
 * Get the geometry of a line number.
 *
 * @return @c EINA_TRUE on success, @c EINA_FALSE otherwise.
 *
 * @param[in] line the line number.
 * @param[out] cx x coord of the line.
 * @param[out] cy y coord of the line.
 * @param[out] cw w coord of the line.
 * @param[out] ch h coord of the line.
 */
EAPI Eina_Bool evas_object_textblock_line_number_geometry_get(const Eo *obj, int line, Evas_Coord *cx, Evas_Coord *cy, Evas_Coord *cw, Evas_Coord *ch);

/**
 *
 * @brief Get the "replacement character" for given textblock object. Returns
 * @c NULL if no replacement character is in use.
 *
 * @return Replacement character or @c NULL.
 *
 */
EAPI const char *evas_object_textblock_replace_char_get(Eo *obj);

/**
 *
 * Del the from the top of the user style stack.
 *
 * @see evas_object_textblock_style_get
 * @since 1.2
 *
 */
EAPI void evas_object_textblock_style_user_pop(Eo *obj);

/**
 *
 * Create a new cursor, associate it to the obj and init it to point
 * to the start of the textblock. Association to the object means the cursor
 * will be updated when the object will change.
 *
 * @note if you need speed and you know what you are doing, it's slightly faster to just allocate the cursor yourself and not associate it. (only people developing the actual object, and not users of the object).
 *
 * @return the new cursor.
 *
 */
EAPI Evas_Textblock_Cursor *evas_object_textblock_cursor_new(const Eo *obj);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] anchor No description supplied.
 */
EAPI const Eina_List *evas_textblock_node_format_list_get(const Eo *obj, const char *anchor);

/**
 *
 * Get (don't remove) the style at the top of the user style stack.
 *
 * @return the style of the object.
 * @see evas_object_textblock_style_get
 * @since 1.2
 *
 */
EAPI const Evas_Textblock_Style *evas_object_textblock_style_user_peek(const Eo *obj);

/**
 *
 * Remove a format node and its match.
 *
 * @param[in] n No description supplied.
 */
EAPI void evas_textblock_node_format_remove_pair(Eo *obj, Evas_Object_Textblock_Node_Format *n);

/**
 *
 * Push ts to the top of the user style stack.
 *
 * FIXME: API is solid but currently only supports 1 style in the stack.
 *
 * The user style overrides the corresponding elements of the regular style.
 * This is the proper way to do theme overrides in code.
 * @return Returns no value.
 * @see evas_object_textblock_style_set
 * @since 1.2
 *
 * @param[in] ts the style to set.
 */
EAPI void evas_object_textblock_style_user_push(Eo *obj, Evas_Textblock_Style *ts);

#endif
