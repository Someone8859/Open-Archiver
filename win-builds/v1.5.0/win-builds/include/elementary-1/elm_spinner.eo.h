#ifndef _ELM_SPINNER_EO_H_
#define _ELM_SPINNER_EO_H_

#ifndef _ELM_SPINNER_EO_TYPES
#define _ELM_SPINNER_EO_TYPES


#endif
#define ELM_SPINNER_CLASS elm_spinner_class_get()

const Eo_Class *elm_spinner_class_get(void) EINA_CONST;

/**
 *
 * Set the minimum and maximum values for the spinner.
 *
 * Define the allowed range of values to be selected by the user.
 *
 * If actual value is less than @p min, it will be updated to @p min. If it
 * is bigger then @p max, will be updated to @p max. Actual value can be
 * get with elm_spinner_value_get().
 *
 * By default, min is equal to 0, and max is equal to 100.
 *
 * @warning Maximum must be greater than minimum.
 *
 * @see elm_spinner_min_max_get()
 *
 * @ingroup Spinner
 *
 * @param[in] min The minimum value.
 * @param[in] max The maximum value.
 *
 */
EOAPI void  elm_obj_spinner_min_max_set(double min, double max);

/**
 *
 * Get the minimum and maximum values of the spinner.
 *
 * @note If only one value is needed, the other pointer can be passed
 * as @c NULL.
 *
 * @see elm_spinner_min_max_set() for details.
 *
 * @ingroup Spinner
 *
 * @param[out] min The minimum value.
 * @param[out] max The maximum value.
 *
 */
EOAPI void  elm_obj_spinner_min_max_get(double *min, double *max);

/**
 *
 * Set the step used to increment or decrement the spinner value.
 *
 * This value will be incremented or decremented to the displayed value.
 * It will be incremented while the user keep right or top arrow pressed,
 * and will be decremented while the user keep left or bottom arrow pressed.
 *
 * The interval to increment / decrement can be set with
 * elm_spinner_interval_set().
 *
 * By default step value is equal to 1.
 *
 * @see elm_spinner_step_get()
 *
 * @ingroup Spinner
 *
 * @param[in] step The step value.
 *
 */
EOAPI void  elm_obj_spinner_step_set(double step);

/**
 *
 * Get the step used to increment or decrement the spinner value.
 *
 * @return The step value.
 *
 * @see elm_spinner_step_get() for more details.
 *
 * @ingroup Spinner
 *
 *
 */
EOAPI double  elm_obj_spinner_step_get(void);

/**
 *
 * Set whether the spinner should wrap when it reaches its
 * minimum or maximum value.
 *
 * Disabled by default. If disabled, when the user tries to increment the
 * value,
 * but displayed value plus step value is bigger than maximum value,
 * the new value will be the maximum value.
 * The same happens when the user tries to decrement it,
 * but the value less step is less than minimum value. In this case,
 * the new displayed value will be the minimum value.
 *
 * When wrap is enabled, when the user tries to increment the value,
 * but displayed value plus step value is bigger than maximum value,
 * the new value will be the minimum value. When the the user tries to
 * decrement it, but the value less step is less than minimum value,
 * the new displayed value will be the maximum value.
 *
 * E.g.:
 * @li min value = 10
 * @li max value = 50
 * @li step value = 20
 * @li displayed value = 20
 *
 * When the user decrement value (using left or bottom arrow), it will
 * displays @c 50.
 *
 * @see elm_spinner_wrap_get().
 *
 * @ingroup Spinner
 *
 * @param[in] wrap @c EINA_TRUE to enable wrap or @c EINA_FALSE to
disable it.
 *
 */
EOAPI void  elm_obj_spinner_wrap_set(Eina_Bool wrap);

/**
 *
 * Get whether the spinner should wrap when it reaches its
 * minimum or maximum value.
 *
 * @return @c EINA_TRUE means wrap is enabled. @c EINA_FALSE indicates
 * it's disabled. If @p obj is @c NULL, @c EINA_FALSE is returned.
 *
 * @see elm_spinner_wrap_set() for details.
 *
 * @ingroup Spinner
 *
 *
 */
EOAPI Eina_Bool  elm_obj_spinner_wrap_get(void);

/**
 *
 * Set the interval on time updates for an user mouse button hold
 * on spinner widgets' arrows.
 *
 * This interval value is @b decreased while the user holds the
 * mouse pointer either incrementing or decrementing spinner's value.
 *
 * This helps the user to get to a given value distant from the
 * current one easier/faster, as it will start to change quicker and
 * quicker on mouse button holds.
 *
 * The calculation for the next change interval value, starting from
 * the one set with this call, is the previous interval divided by
 * @c 1.05, so it decreases a little bit.
 *
 * The default starting interval value for automatic changes is
 * @c 0.85 seconds.
 *
 * @see elm_spinner_interval_get()
 *
 * @ingroup Spinner
 *
 * @param[in] interval The (first) interval value in seconds.
 *
 */
EOAPI void  elm_obj_spinner_interval_set(double interval);

/**
 *
 * Get the interval on time updates for an user mouse button hold
 * on spinner widgets' arrows.
 *
 * @return The (first) interval value, in seconds, set on it.
 *
 * @see elm_spinner_interval_set() for more details.
 *
 * @ingroup Spinner
 *
 *
 */
EOAPI double  elm_obj_spinner_interval_get(void);

/**
 *
 * Set the round value for rounding
 *
 * Sets the rounding value used for value rounding in the spinner.
 *
 * @see elm_spinner_round_get()
 * @see elm_spinner_base_set()
 *
 * @ingroup Spinner
 *
 * @param[in] rnd The rounding value
 *
 */
EOAPI void  elm_obj_spinner_round_set(int rnd);

/**
 *
 * Get the round value for rounding
 *
 * @return The rounding value
 *
 * This returns the round value for rounding.
 *
 * @see elm_spinner_round_set() too.
 * @see elm_spinner_base_set() too.
 *
 * @ingroup Spinner
 *
 *
 */
EOAPI int  elm_obj_spinner_round_get(void);

/**
 *
 * Set whether the spinner can be directly edited by the user or not.
 *
 * Spinner objects can have edition @b disabled, in which state they will
 * be changed only by arrows.
 * Useful for contexts
 * where you don't want your users to interact with it writing the value.
 * Specially
 * when using special values, the user can see real value instead
 * of special label on edition.
 *
 * It's enabled by default.
 *
 * @see elm_spinner_editable_get()
 *
 * @ingroup Spinner
 *
 * @param[in] editable @c EINA_TRUE to allow users to edit it or @c EINA_FALSE to
don't allow users to edit it directly.
 *
 */
EOAPI void  elm_obj_spinner_editable_set(Eina_Bool editable);

/**
 *
 * Get whether the spinner can be directly edited by the user or not.
 *
 * @return @c EINA_TRUE means edition is enabled. @c EINA_FALSE indicates
 * it's disabled. If @p obj is @c NULL, @c EINA_FALSE is returned.
 *
 * @see elm_spinner_editable_set() for details.
 *
 * @ingroup Spinner
 *
 *
 */
EOAPI Eina_Bool  elm_obj_spinner_editable_get(void);

/**
 *
 * Set the base for rounding
 *
 * Rounding works as follows:
 *
 * rounded_val = base + (double)(((value - base) / round) * round)
 *
 * Where rounded_val, value and base are doubles, and round is an integer.
 *
 * This means that things will be rounded to increments (or decrements) of
 * "round" starting from value @p base. The default base for rounding is 0.
 *
 * Example: round = 3, base = 2
 * Values: ..., -2, 0, 2, 5, 8, 11, 14, ...
 *
 * Example: round = 2, base = 5.5
 * Values: ..., -0.5, 1.5, 3.5, 5.5, 7.5, 9.5, 11.5, ...
 *
 * @see elm_spinner_round_get()
 * @see elm_spinner_base_get() too.
 *
 * @ingroup Spinner
 *
 * @param[in] base The base value
 *
 */
EOAPI void  elm_obj_spinner_base_set(double base);

/**
 *
 * Get the base for rounding
 *
 * @return The base rounding value
 *
 * This returns the base for rounding.
 *
 * @see elm_spinner_round_set() too.
 * @see elm_spinner_base_set() too.
 *
 * @ingroup Spinner
 *
 *
 */
EOAPI double  elm_obj_spinner_base_get(void);

/**
 *
 * Set the value the spinner displays.
 *
 * Value will be presented on the label following format specified with
 * elm_spinner_format_set().
 *
 * @warning The value must to be between min and max values. This values
 * are set by elm_spinner_min_max_set().
 *
 * @see elm_spinner_value_get().
 * @see elm_spinner_format_set().
 * @see elm_spinner_min_max_set().
 *
 * @ingroup Spinner
 *
 * @param[in] val The value to be displayed.
 *
 */
EOAPI void  elm_obj_spinner_value_set(double val);

/**
 *
 * Get the value displayed by the spinner.
 *
 * @return The value displayed.
 *
 * @see elm_spinner_value_set() for details.
 *
 * @ingroup Spinner
 *
 *
 */
EOAPI double  elm_obj_spinner_value_get(void);

/**
 *
 * Set the format string of the displayed label.
 *
 * If @c NULL, this sets the format to "%.0f". If not it sets the format
 * string for the label text. The label text is provided a floating point
 * value, so the label text can display up to 1 floating point value.
 * Note that this is optional.
 *
 * Use a format string such as "%1.2f meters" for example, and it will
 * display values like: "3.14 meters" for a value equal to 3.14159.
 *
 * Default is "%0.f".
 *
 * @see elm_spinner_label_format_get()
 *
 * @ingroup Spinner
 *
 * @param[in] fmt The format string for the label display.
 *
 */
EOAPI void  elm_obj_spinner_label_format_set(const char *fmt);

/**
 *
 * Get the label format of the spinner.
 *
 * @return The text label format string in UTF-8.
 *
 * @see elm_spinner_label_format_set() for details.
 *
 * @ingroup Spinner
 *
 *
 */
EOAPI const char * elm_obj_spinner_label_format_get(void);

/**
 *
 * Set a special string to display in the place of the numerical value.
 *
 * It's useful for cases when a user should select an item that is
 * better indicated by a label than a value. For example, weekdays or months.
 *
 * E.g.:
 * @code
 * sp = elm_spinner_add(win);
 * elm_spinner_min_max_set(sp, 1, 3);
 * elm_spinner_special_value_add(sp, 1, "January");
 * elm_spinner_special_value_add(sp, 2, "February");
 * elm_spinner_special_value_add(sp, 3, "March");
 * evas_object_show(sp);
 * @endcode
 *
 * @note If another label was previously set to @p value, it will be replaced
 * by the new label.
 *
 * @see elm_spinner_special_value_get().
 * @see elm_spinner_special_value_del().
 *
 * @ingroup Spinner
 *
 * @param[in] value The value to be replaced.
 * @param[in] label The label to be used.
 *
 */
EOAPI void  elm_obj_spinner_special_value_add(double value, const char *label);

EOAPI extern const Eo_Event_Description _ELM_SPINNER_EVENT_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_SPINNER_EVENT_DELAY_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_SPINNER_EVENT_SPINNER_DRAG_START;
EOAPI extern const Eo_Event_Description _ELM_SPINNER_EVENT_SPINNER_DRAG_STOP;
EOAPI extern const Eo_Event_Description _ELM_SPINNER_EVENT_LANGUAGE_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_SPINNER_EVENT_ACCESS_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_SPINNER_EVENT_FOCUSED;
EOAPI extern const Eo_Event_Description _ELM_SPINNER_EVENT_UNFOCUSED;

/**
 * No description
 */
#define ELM_SPINNER_EVENT_CHANGED (&(_ELM_SPINNER_EVENT_CHANGED))

/**
 * No description
 */
#define ELM_SPINNER_EVENT_DELAY_CHANGED (&(_ELM_SPINNER_EVENT_DELAY_CHANGED))

/**
 * No description
 */
#define ELM_SPINNER_EVENT_SPINNER_DRAG_START (&(_ELM_SPINNER_EVENT_SPINNER_DRAG_START))

/**
 * No description
 */
#define ELM_SPINNER_EVENT_SPINNER_DRAG_STOP (&(_ELM_SPINNER_EVENT_SPINNER_DRAG_STOP))

/**
 * No description
 */
#define ELM_SPINNER_EVENT_LANGUAGE_CHANGED (&(_ELM_SPINNER_EVENT_LANGUAGE_CHANGED))

/**
 * No description
 */
#define ELM_SPINNER_EVENT_ACCESS_CHANGED (&(_ELM_SPINNER_EVENT_ACCESS_CHANGED))

/**
 * No description
 */
#define ELM_SPINNER_EVENT_FOCUSED (&(_ELM_SPINNER_EVENT_FOCUSED))

/**
 * No description
 */
#define ELM_SPINNER_EVENT_UNFOCUSED (&(_ELM_SPINNER_EVENT_UNFOCUSED))

#endif
