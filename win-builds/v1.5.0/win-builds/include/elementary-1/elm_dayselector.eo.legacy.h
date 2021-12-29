#ifndef _ELM_DAYSELECTOR_EO_LEGACY_H_
#define _ELM_DAYSELECTOR_EO_LEGACY_H_


/**
 *
 * Set the starting day of Dayselector.
 *
 * @see Elm_Dayselector_Day
 * @see elm_dayselector_week_start_get()
 *
 * @ingroup Dayselector
 *
 * @param[in] day Dayselector_Day the first day that the user wants to display.
 */
EAPI void elm_dayselector_week_start_set(Eo *obj, Elm_Dayselector_Day day);

/**
 *
 * Get the starting day of Dayselector.
 *
 * @return Day from where Dayselector displays all the weekdays in order.
 *
 * @see Elm_Dayselector_Day
 * @see elm_dayselector_week_start_set()
 *
 * @ingroup Dayselector
 *
 */
EAPI Elm_Dayselector_Day elm_dayselector_week_start_get(const Eo *obj);

/**
 *
 * Set the weekend length of Dayselector.
 *
 * @see elm_dayselector_weekend_length_get()
 *
 * @ingroup Dayselector
 *
 * @param[in] length Weekend length, number of days as an integer.
 */
EAPI void elm_dayselector_weekend_length_set(Eo *obj, unsigned int length);

/**
 *
 * Get the weekend length of Dayselector.
 *
 * @return Number of days marked as a weekend.
 *
 * @see Elm_Dayselector_Day
 * @see elm_dayselector_weekend_length_set()
 *
 * @ingroup Dayselector
 *
 */
EAPI unsigned int elm_dayselector_weekend_length_get(const Eo *obj);

/**
 *
 * Set the weekend starting day of Dayselector.
 *
 * @see Elm_Dayselector_Day
 * @see elm_dayselector_weekend_start_get()
 *
 * @ingroup Dayselector
 *
 * @param[in] day Dayselector_Day the first day from where weekend starts.
 */
EAPI void elm_dayselector_weekend_start_set(Eo *obj, Elm_Dayselector_Day day);

/**
 *
 * Get the weekend starting day of Dayselector.
 *
 * @return Elm_Dayselector_Day Day from where weekend starts.
 *
 * @see Elm_Dayselector_Day
 * @see elm_dayselector_weekend_start_set()
 *
 * @ingroup Dayselector
 *
 */
EAPI Elm_Dayselector_Day elm_dayselector_weekend_start_get(const Eo *obj);

/**
 *
 * Set weekdays names to be displayed by the Dayselector.
 *
 * By default or if @a weekdays is @c NULL, weekdays abbreviations get from system are displayed:
 * E.g. for an en_US locale: "Sun, Mon, Tue, Wed, Thu, Fri, Sat"
 *
 * The first string should be related to Sunday, the second to Monday...
 *
 * The usage should be like this:
 * @code
 * const char *weekdays[] =
 * {
 * "Sunday", "Monday", "Tuesday", "Wednesday",
 * "Thursday", "Friday", "Saturday"
 * };
 * elm_dayselector_wekdays_names_set(calendar, weekdays);
 * @endcode
 *
 * @see elm_dayselector_weekdays_name_get()
 * @see elm_dayselector_weekend_start_set()
 *
 * @since 1.8
 *
 * @ingroup Dayselector
 *
 * @param[in] weekdays Array of seven strings to be used as weekday names.
@warning It must have 7 elements, or it will access invalid memory.
@warning The strings must be NULL terminated ('@\0').
 */
EAPI void elm_dayselector_weekdays_names_set(Eo *obj, const char **weekdays);

/**
 *
 * Get weekdays names displayed by the calendar.
 *
 * @return A list of seven strings to be used as weekday names.
 *
 * By default, weekdays abbreviations get from system are displayed:
 * E.g. for an en_US locale: "Sun, Mon, Tue, Wed, Thu, Fri, Sat"
 * The first string is related to Sunday, the second to Monday...
 *
 * @see elm_dayselector_weekdays_name_set()
 *
 * @since 1.8
 *
 * @ingroup Dayselector
 *
 */
EAPI Eina_List *elm_dayselector_weekdays_names_get(const Eo *obj);

/**
 *
 * Set the state of given Dayselector_Day.
 *
 * @see Elm_Dayselector_Day
 * @see elm_dayselector_day_selected_get()
 *
 * @ingroup Dayselector
 *
 * @param[in] day Dayselector_Day that the user want to set state.
 * @param[in] selected state of the day. @c EINA_TRUE is selected.
 */
EAPI void elm_dayselector_day_selected_set(Eo *obj, Elm_Dayselector_Day day, Eina_Bool selected);

/**
 *
 * Get the state of given Dayselector_Day.
 *
 * @return @c EINA_TRUE, if the Day is selected
 *
 * @see Elm_Dayselector_Day
 * @see elm_dayselector_day_selected_set()
 *
 * @ingroup Dayselector
 *
 * @param[in] day Dayselector_Day that the user want to know state.
 */
EAPI Eina_Bool elm_dayselector_day_selected_get(const Eo *obj, Elm_Dayselector_Day day);

#endif
