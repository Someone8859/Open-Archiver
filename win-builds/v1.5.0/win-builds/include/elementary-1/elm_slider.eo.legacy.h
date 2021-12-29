#ifndef _ELM_SLIDER_EO_LEGACY_H_
#define _ELM_SLIDER_EO_LEGACY_H_


/**
 *
 * Set the orientation of a given slider widget.
 *
 * Use this function to change how your slider is to be
 * disposed: vertically or horizontally.
 *
 * By default it's displayed horizontally.
 *
 * @see elm_slider_horizontal_get()
 *
 * @ingroup Slider
 *
 * @param[in] horizontal Use @c EINA_TRUE to make @p obj to be
@b horizontal, @c EINA_FALSE to make it @b vertical.
 */
EAPI void elm_slider_horizontal_set(Eo *obj, Eina_Bool horizontal);

/**
 *
 * Retrieve the orientation of a given slider widget
 *
 * @return @c EINA_TRUE, if @p obj is set to be @b horizontal,
 * @c EINA_FALSE if it's @b vertical (and on errors).
 *
 * @see elm_slider_horizontal_set() for more details.
 *
 * @ingroup Slider
 *
 */
EAPI Eina_Bool elm_slider_horizontal_get(const Eo *obj);

/**
 *
 * Set the value the slider displays.
 *
 * Value will be presented on the unit label following format specified with
 * elm_slider_unit_format_set() and on indicator with
 * elm_slider_indicator_format_set().
 *
 * @warning The value must to be between min and max values. This values
 * are set by elm_slider_min_max_set().
 *
 * @see elm_slider_value_get()
 * @see elm_slider_unit_format_set()
 * @see elm_slider_indicator_format_set()
 * @see elm_slider_min_max_set()
 *
 * @ingroup Slider
 *
 * @param[in] val The value to be displayed.
 */
EAPI void elm_slider_value_set(Eo *obj, double val);

/**
 *
 * Get the value displayed by the slider.
 *
 * @return The value displayed.
 *
 * @see elm_slider_value_set() for details.
 *
 * @ingroup Slider
 *
 */
EAPI double elm_slider_value_get(const Eo *obj);

/**
 *
 * Set the format string for the indicator label.
 *
 * The slider may display its value somewhere else then unit label,
 * for example, above the slider knob that is dragged around. This function
 * sets the format string used for this.
 *
 * If @c NULL, indicator label won't be visible. If not it sets the format
 * string for the label text. To the label text is provided a floating point
 * value, so the label text can display up to 1 floating point value.
 * Note that this is optional.
 *
 * Use a format string such as "%1.2f meters" for example, and it will
 * display values like: "3.14 meters" for a value equal to 3.14159.
 *
 * Default is indicator label disabled.
 *
 * @see elm_slider_indicator_format_get()
 *
 * @ingroup Slider
 *
 * @param[in] indicator The format string for the indicator display.
 */
EAPI void elm_slider_indicator_format_set(Eo *obj, const char *indicator);

/**
 *
 * Get the indicator label format of the slider.
 *
 * @return The indicator label format string in UTF-8.
 *
 * The slider may display its value somewhere else then unit label,
 * for example, above the slider knob that is dragged around. This function
 * gets the format string used for this.
 *
 * @see elm_slider_indicator_format_set() for more
 * information on how this works.
 *
 * @ingroup Slider
 *
 */
EAPI const char *elm_slider_indicator_format_get(const Eo *obj);

/**
 *
 * Invert a given slider widget's displaying values order
 *
 * A slider may be @b inverted, in which state it gets its
 * values inverted, with high vales being on the left or top and
 * low values on the right or bottom, as opposed to normally have
 * the low values on the former and high values on the latter,
 * respectively, for horizontal and vertical modes.
 *
 * @see elm_slider_inverted_get()
 *
 * @ingroup Slider
 *
 * @param[in] inverted Use @c EINA_TRUE to make @p obj inverted,
@c EINA_FALSE to bring it back to default, non-inverted values.
 */
EAPI void elm_slider_inverted_set(Eo *obj, Eina_Bool inverted);

/**
 *
 * Get whether a given slider widget's displaying values are
 * inverted or not.
 *
 * @return @c EINA_TRUE, if @p obj has inverted values,
 * @c EINA_FALSE otherwise (and on errors).
 *
 * @see elm_slider_inverted_set() for more details.
 *
 * @ingroup Slider
 *
 */
EAPI Eina_Bool elm_slider_inverted_get(const Eo *obj);

/**
 *
 * Set whether to enlarge slider indicator (augmented knob) or not.
 *
 * By default, indicator will be bigger while dragged by the user.
 *
 * @warning It won't display values set with
 * elm_slider_indicator_format_set() if you disable indicator.
 *
 * @ingroup Slider
 *
 * @param[in] show @c EINA_TRUE will make it enlarge, @c EINA_FALSE will
let the knob always at default size.
 */
EAPI void elm_slider_indicator_show_set(Eo *obj, Eina_Bool show);

/**
 *
 * Get whether a given slider widget's enlarging indicator or not.
 *
 * @return @c EINA_TRUE, if @p obj is enlarging indicator, or
 * @c EINA_FALSE otherwise (and on errors).
 *
 * @see elm_slider_indicator_show_set() for details.
 *
 * @ingroup Slider
 *
 */
EAPI Eina_Bool elm_slider_indicator_show_get(const Eo *obj);

/**
 *
 * Set the minimum and maximum values for the slider.
 *
 * Define the allowed range of values to be selected by the user.
 *
 * If actual value is less than @p min, it will be updated to @p min. If it
 * is bigger then @p max, will be updated to @p max. Actual value can be
 * get with elm_slider_value_get().
 *
 * By default, min is equal to 0.0, and max is equal to 1.0.
 *
 * @warning Maximum must be greater than minimum, otherwise behavior
 * is undefined.
 *
 * @see elm_slider_min_max_get()
 *
 * @ingroup Slider
 *
 * @param[in] min The minimum value.
 * @param[in] max The maximum value.
 */
EAPI void elm_slider_min_max_set(Eo *obj, double min, double max);

/**
 *
 * Get the minimum and maximum values of the slider.
 *
 * @note If only one value is needed, the other pointer can be passed
 * as @c NULL.
 *
 * @see elm_slider_min_max_set() for details.
 *
 * @ingroup Slider
 *
 * @param[out] min The minimum value.
 * @param[out] max The maximum value.
 */
EAPI void elm_slider_min_max_get(const Eo *obj, double *min, double *max);

/**
 *
 * Set the format string for the unit label.
 *
 * Unit label is displayed all the time, if set, after slider's bar.
 * In horizontal mode, at right and in vertical mode, at bottom.
 *
 * If @c NULL, unit label won't be visible. If not it sets the format
 * string for the label text. To the label text is provided a floating point
 * value, so the label text can display up to 1 floating point value.
 * Note that this is optional.
 *
 * Use a format string such as "%1.2f meters" for example, and it will
 * display values like: "3.14 meters" for a value equal to 3.14159.
 *
 * Default is unit label disabled.
 *
 * @see elm_slider_indicator_format_get()
 *
 * @ingroup Slider
 *
 * @param[in] units The format string for the unit display.
 */
EAPI void elm_slider_unit_format_set(Eo *obj, const char *units);

/**
 *
 * Get the unit label format of the slider.
 *
 * @return The unit label format string in UTF-8.
 *
 * Unit label is displayed all the time, if set, after slider's bar.
 * In horizontal mode, at right and in vertical mode, at bottom.
 *
 * @see elm_slider_unit_format_set() for more
 * information on how this works.
 *
 * @ingroup Slider
 *
 */
EAPI const char *elm_slider_unit_format_get(const Eo *obj);

/**
 *
 * Show the indicator of slider on focus
 *
 * @ingroup Slider
 *
 * @param[in] flag @ EINA_TRUE sets the indicator visible
 */
EAPI void elm_slider_indicator_show_on_focus_set(Eo *obj, Eina_Bool flag);

/**
 *
 * Get whether the indicator of the slider is set or not
 *
 * @return @c EINA_TRUE, if indicator is set
 * @c EINA_FALSE otherwise.
 *
 * @ingroup Slider
 *
 */
EAPI Eina_Bool elm_slider_indicator_show_on_focus_get(const Eo *obj);

/**
 *
 * Set the (exact) length of the bar region of a given slider widget.
 *
 * This sets the minimum width (when in horizontal mode) or height
 * (when in vertical mode) of the actual bar area of the slider
 * @p obj. This in turn affects the object's minimum size. Use
 * this when you're not setting other size hints expanding on the
 * given direction (like weight and alignment hints) and you would
 * like it to have a specific size.
 *
 * @note Icon, end, label, indicator and unit text around @p obj
 * will require their
 * own space, which will make @p obj to require more the @p size,
 * actually.
 *
 * @see elm_slider_span_size_get()
 *
 * @ingroup Slider
 *
 * @param[in] size The length of the slider's bar region.
 */
EAPI void elm_slider_span_size_set(Eo *obj, Evas_Coord size);

/**
 *
 * Get the length set for the bar region of a given slider widget
 *
 * @return The length of the slider's bar region.
 *
 * If that size was not set previously, with
 * elm_slider_span_size_set(), this call will return @c 0.
 *
 * @ingroup Slider
 *
 */
EAPI Evas_Coord elm_slider_span_size_get(const Eo *obj);

/**
 *
 * @since 1.8
 * Set the step by which slider indicator will move.
 *
 * This value is used when draggable object is moved automatically i.e., in case
 * of key event when up/down/left/right key is pressed or in case when
 * accessibility is set and flick event is used to inc/dec slider values.
 * By default step value is equal to 0.05.
 *
 * @see elm_slider_step_get() for more details.
 *
 * @ingroup Slider
 *
 * @param[in] step The step value.
 */
EAPI void elm_slider_step_set(Eo *obj, double step);

/**
 *
 * @since 1.8
 * Get the step by which slider indicator moves.
 *
 * @return The step value.
 *
 * @see elm_slider_step_set() for more details.
 *
 * @ingroup Slider
 *
 */
EAPI double elm_slider_step_get(const Eo *obj);

/**
 *
 * Set the format function pointer for the indicator label
 *
 * Set the callback function to format the indicator string.
 *
 * @see elm_slider_indicator_format_set() for more info on how this works.
 *
 * @ingroup Slider
 *
 * @param[in] func The indicator format function.
 * @param[in] free_func The freeing function for the format string.
 */
EAPI void elm_slider_indicator_format_function_set(Eo *obj, slider_func_type func, slider_freefunc_type free_func);

/**
 *
 * Set the format function pointer for the units label
 *
 * Set the callback function to format the units string.
 *
 * @see elm_slider_unit_format_set() for more info on how this works.
 *
 * @ingroup Slider
 *
 * @param[in] func The units format function.
 * @param[in] free_func The freeing function for the format string.
 */
EAPI void elm_slider_units_format_function_set(Eo *obj, slider_func_type func, slider_freefunc_type free_func);

#endif
