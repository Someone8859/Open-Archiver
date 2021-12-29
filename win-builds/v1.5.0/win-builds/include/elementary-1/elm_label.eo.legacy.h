#ifndef _ELM_LABEL_EO_LEGACY_H_
#define _ELM_LABEL_EO_LEGACY_H_


/**
 *
 * @brief Set wrap width of the label
 *
 * This function sets the maximum width size hint of the label.
 *
 * @warning This is only relevant if the label is inside a container.
 *
 * @ingroup Label
 *
 * @param[in] w The wrap width in pixels at a minimum where words need to wrap
 */
EAPI void elm_label_wrap_width_set(Eo *obj, Evas_Coord w);

/**
 *
 * @brief Get wrap width of the label
 *
 * @return The wrap width in pixels at a minimum where words need to wrap
 *
 * @see elm_label_wrap_width_set()
 *
 * @ingroup Label
 *
 */
EAPI Evas_Coord elm_label_wrap_width_get(const Eo *obj);

/**
 *
 * @brief Set the slide speed of the label
 *
 * @see elm_label_slide_duration_set()
 *
 * @ingroup Label
 *
 * @param[in] speed The speed of the slide animation in px per seconds
 */
EAPI void elm_label_slide_speed_set(Eo *obj, double speed);

/**
 *
 * @brief Get the slide speed of the label
 *
 * @return The slide animation speed in px per seconds
 *
 * @note If you set the duration of the slide using elm_label_slide_duration_set()
 * you cannot get the correct speed using this function until the label
 * is actually rendered and resized.
 *
 * @see elm_label_slide_speed_set()
 *
 * @ingroup Label
 *
 */
EAPI double elm_label_slide_speed_get(const Eo *obj);

/**
 *
 * @brief Set the slide mode of the label widget.
 *
 * elm_label_slide_mode_set() changes label slide mode.
 * By default, slide mode is none. Possible values for @p mode are:
 * @li ELM_LABEL_SLIDE_MODE_NONE - no slide effect
 * @li ELM_LABEL_SLIDE_MODE_AUTO - slide only if the label area is bigger than
 * the text width length
 * @li ELM_LABEL_SLIDE_MODE_ALWAYS -slide always
 *
 * @warning ELM_LABEL_SLIDE_MODE_AUTO, ELM_LABEL_SLIDE_MODE_ALWAYS only work
 * with the themes "slide_short", "slide_long" and "slide_bounce".
 * @warning ELM_LABEL_SLIDE_MODE_AUTO, ELM_LABEL_SLIDE_MODE_ALWAYS don't work
 * if the line wrap(elm_label_line_wrap_set()) or
 * ellipsis(elm_label_ellipsis_set()) is set.
 *
 * @see elm_label_slide_mode_get().
 * @since 1.8
 *
 * @ingroup Label
 *
 * @param[in] mode The slide mode
 */
EAPI void elm_label_slide_mode_set(Eo *obj, Elm_Label_Slide_Mode mode);

/**
 *
 * @brief Get the slide mode of the label widget.
 *
 * @return The slide mode
 *
 * @see elm_label_slide_mode_set()
 * @since 1.8
 *
 * @ingroup Label
 *
 */
EAPI Elm_Label_Slide_Mode elm_label_slide_mode_get(const Eo *obj);

/**
 *
 * @brief Set the slide duration of the label
 *
 * @see elm_label_slide_speed_set()
 *
 * @ingroup Label
 *
 * @param[in] duration The duration in seconds in moving text from slide begin position
to slide end position
 */
EAPI void elm_label_slide_duration_set(Eo *obj, double duration);

/**
 *
 * @brief Get the slide duration of the label
 *
 * @return The duration time in moving text from slide begin position to slide end position
 *
 * @note If you set the speed of the slide using elm_label_slide_speed_set()
 * you cannot get the correct duration using this function until the label
 * is actually rendered and resized.
 *
 * @see elm_label_slide_duration_set()
 *
 * @ingroup Label
 *
 */
EAPI double elm_label_slide_duration_get(const Eo *obj);

/**
 *
 * @brief Set the wrapping behavior of the label
 *
 * By default no wrapping is done. Possible values for @p wrap are:
 * @li ELM_WRAP_NONE - No wrapping
 * @li ELM_WRAP_CHAR - wrap between characters
 * @li ELM_WRAP_WORD - wrap between words
 * @li ELM_WRAP_MIXED - Word wrap, and if that fails, char wrap
 *
 * @ingroup Label
 *
 * @param[in] wrap To wrap text or not
 */
EAPI void elm_label_line_wrap_set(Eo *obj, Elm_Wrap_Type wrap);

/**
 *
 * @brief Get the wrapping behavior of the label
 *
 * @return Wrap type
 *
 * @see elm_label_line_wrap_set()
 *
 * @ingroup Label
 *
 */
EAPI Elm_Wrap_Type elm_label_line_wrap_get(const Eo *obj);

/**
 *
 * @brief Set the ellipsis behavior of the label
 *
 * If set to true and the text doesn't fit in the label an ellipsis("...")
 * will be shown at the end of the widget.
 *
 * @warning This doesn't work with slide(elm_label_slide_set()) or if the
 * chosen wrap method was #ELM_WRAP_WORD.
 *
 * @ingroup Label
 *
 * @param[in] ellipsis To ellipsis text or not
 */
EAPI void elm_label_ellipsis_set(Eo *obj, Eina_Bool ellipsis);

/**
 *
 * @brief Get the ellipsis behavior of the label
 *
 * @return If true, an ellipsis will be shown at the end of the label area.
 *
 * @see elm_label_ellipsis_set()
 *
 * @ingroup Label
 *
 */
EAPI Eina_Bool elm_label_ellipsis_get(const Eo *obj);

/**
 *
 * @brief Start slide effect.
 *
 * @see elm_label_slide_mode_set()
 * @since 1.8
 *
 * @ingroup Label
 *
 */
EAPI void elm_label_slide_go(Eo *obj);

#endif
