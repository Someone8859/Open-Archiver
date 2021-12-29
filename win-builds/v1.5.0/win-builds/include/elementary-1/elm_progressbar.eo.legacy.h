#ifndef _ELM_PROGRESSBAR_EO_LEGACY_H_
#define _ELM_PROGRESSBAR_EO_LEGACY_H_


/**
 *
 * Set the (exact) length of the bar region of a given progress bar
 * widget
 *
 * This sets the minimum width (when in horizontal mode) or height
 * (when in vertical mode) of the actual bar area of the progress
 * bar @p obj. This in turn affects the object's minimum size. Use
 * this when you're not setting other size hints expanding on the
 * given direction (like weight and alignment hints) and you would
 * like it to have a specific size.
 *
 * @note Icon, label and unit text around @p obj will require their
 * own space, which will make @p obj to require more the @p size,
 * actually.
 *
 * @see elm_progressbar_span_size_get()
 *
 * @ingroup Progressbar
 *
 * @param[in] size The length of the progress bar's bar region
 */
EAPI void elm_progressbar_span_size_set(Eo *obj, Evas_Coord size);

/**
 *
 * Get the length set for the bar region of a given progress bar
 * widget
 *
 * @return The length of the progress bar's bar region
 *
 * If that size was not set previously, with
 * elm_progressbar_span_size_set(), this call will return @c 0.
 *
 * @ingroup Progressbar
 *
 */
EAPI Evas_Coord elm_progressbar_span_size_get(const Eo *obj);

/**
 *
 * Set whether a given progress bar widget is at "pulsing mode" or
 * not.
 *
 * By default, progress bars will display values from the low to
 * high value boundaries. There are, though, contexts in which the
 * progress of a given task is @b unknown. For such cases,
 * one can set a progress bar widget to a "pulsing state", to give
 * the user an idea that some computation is being held, but
 * without exact progress values. In the default theme, it will
 * animate its bar with the contents filling in constantly and back
 * to non-filled, in a loop. To start and stop this pulsing
 * animation, one has to explicitly call elm_progressbar_pulse().
 *
 * @see elm_progressbar_pulse_get()
 * @see elm_progressbar_pulse()
 *
 * @ingroup Progressbar
 *
 * @param[in] pulse @c EINA_TRUE to put @p obj in pulsing mode,
@c EINA_FALSE to put it back to its default one
 */
EAPI void elm_progressbar_pulse_set(Eo *obj, Eina_Bool pulse);

/**
 *
 * Get whether a given progress bar widget is at "pulsing mode" or
 * not.
 *
 * @return @c EINA_TRUE, if @p obj is in pulsing mode, @c EINA_FALSE
 * if it's in the default one (and on errors)
 *
 * @ingroup Progressbar
 *
 */
EAPI Eina_Bool elm_progressbar_pulse_get(const Eo *obj);

/**
 *
 * Set the progress value (in percentage) on a given progress bar
 * widget
 *
 * Use this call to set progress bar levels.
 *
 * @note If you passes a value out of the specified range for @p
 * val, it will be interpreted as the @b closest of the @b boundary
 * values in the range.
 *
 * @ingroup Progressbar
 *
 * @param[in] val The progress value (@b must be between @c 0.0 and @c
1.0)
 */
EAPI void elm_progressbar_value_set(Eo *obj, double val);

/**
 *
 * Get the progress value (in percentage) on a given progress bar
 * widget
 *
 * @return The value of the progressbar
 *
 * @see elm_progressbar_value_set() for more details
 *
 * @ingroup Progressbar
 *
 */
EAPI double elm_progressbar_value_get(const Eo *obj);

/**
 *
 * Invert a given progress bar widget's displaying values order
 *
 * A progress bar may be @b inverted, in which state it gets its
 * values inverted, with high values being on the left or top and
 * low values on the right or bottom, as opposed to normally have
 * the low values on the former and high values on the latter,
 * respectively, for horizontal and vertical modes.
 *
 * @see elm_progressbar_inverted_get()
 *
 * @ingroup Progressbar
 *
 * @param[in] inverted Use @c EINA_TRUE to make @p obj inverted,
@c EINA_FALSE to bring it back to default, non-inverted values.
 */
EAPI void elm_progressbar_inverted_set(Eo *obj, Eina_Bool inverted);

/**
 *
 * Get whether a given progress bar widget's displaying values are
 * inverted or not
 *
 * @return @c EINA_TRUE, if @p obj has inverted values,
 * @c EINA_FALSE otherwise (and on errors)
 *
 * @see elm_progressbar_inverted_set() for more details
 *
 * @ingroup Progressbar
 *
 */
EAPI Eina_Bool elm_progressbar_inverted_get(const Eo *obj);

/**
 *
 * Set the orientation of a given progress bar widget
 *
 * Use this function to change how your progress bar is to be
 * disposed: vertically or horizontally.
 *
 * @see elm_progressbar_horizontal_get()
 *
 * @ingroup Progressbar
 *
 * @param[in] horizontal Use @c EINA_TRUE to make @p obj to be
@b horizontal, @c EINA_FALSE to make it @b vertical
 */
EAPI void elm_progressbar_horizontal_set(Eo *obj, Eina_Bool horizontal);

/**
 *
 * Retrieve the orientation of a given progress bar widget
 *
 * @return @c EINA_TRUE, if @p obj is set to be @b horizontal,
 * @c EINA_FALSE if it's @b vertical (and on errors)
 *
 * @see elm_progressbar_horizontal_set() for more details
 *
 * @ingroup Progressbar
 *
 */
EAPI Eina_Bool elm_progressbar_horizontal_get(const Eo *obj);

/**
 *
 * Set the format string for a given progress bar widget's units
 * label
 *
 * If @c NULL is passed on @p format, it will make @p obj's units
 * area to be hidden completely. If not, it'll set the <b>format
 * string</b> for the units label's @b text. The units label is
 * provided a floating point value, so the units text is up display
 * at most one floating point value. Note that the units label is
 * optional. Use a format string such as "%1.2f meters" for
 * example.
 *
 * @note The default format string for a progress bar is an integer
 * percentage, as in @c "%.0f %%".
 *
 * @see elm_progressbar_unit_format_get()
 *
 * @ingroup Progressbar
 *
 * @param[in] units The format string for @p obj's units label
 */
EAPI void elm_progressbar_unit_format_set(Eo *obj, const char *units);

/**
 *
 * Retrieve the format string set for a given progress bar widget's
 * units label
 *
 * @return The format set string for @p obj's units label or
 * @c NULL, if none was set (and on errors)
 *
 * @see elm_progressbar_unit_format_set() for more details
 *
 * @ingroup Progressbar
 *
 */
EAPI const char *elm_progressbar_unit_format_get(const Eo *obj);

/**
 *
 * Set the format function pointer for the units label
 *
 * Set the callback function to format the unit string.
 *
 * @see elm_progressbar_unit_format_set() for more info on how this works.
 *
 * @since 1.7
 *
 * @ingroup Progressbar
 *
 * @param[in] func The unit format function
 * @param[in] free_func The freeing function for the format string.
 */
EAPI void elm_progressbar_unit_format_function_set(Eo *obj, progressbar_func_type func, progressbar_freefunc_type free_func);

/**
 *
 * Set the progress value (in percentage) on a given progress bar
 * widget for the given part name
 *
 * @since 1.8
 *
 * Use this call to set progress bar status for more than one progress status .
 *
 * @ingroup Progressbar
 *
 * @param[in] part The partname to which val have to set
 * @param[in] val The progress value (@b must be between @c 0.0 and @c
1.0)
 */
EAPI void elm_progressbar_part_value_set(Eo *obj, const char *part, double val);

/**
 *
 * Get the progress value (in percentage) on a given progress bar
 * widget for a particular part
 *
 * @since 1.8
 *
 * @return The value of the progressbar
 *
 * @see elm_progressbar_value_set() for more details
 *
 * @ingroup Progressbar
 *
 * @param[in] part The part name of the progress bar
 */
EAPI double elm_progressbar_part_value_get(const Eo *obj, const char *part);

/**
 *
 * Start/stop a given progress bar "pulsing" animation, if its
 * under that mode
 *
 * @note This call won't do anything if @p obj is not under "pulsing mode".
 *
 * @see elm_progressbar_pulse_set() for more details.
 *
 * @ingroup Progressbar
 *
 * @param[in] state @c EINA_TRUE, to @b start the pulsing animation,
@c EINA_FALSE to @b stop it
 */
EAPI void elm_progressbar_pulse(Eo *obj, Eina_Bool state);

#endif
