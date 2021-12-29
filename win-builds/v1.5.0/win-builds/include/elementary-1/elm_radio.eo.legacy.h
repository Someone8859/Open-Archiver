#ifndef _ELM_RADIO_EO_LEGACY_H_
#define _ELM_RADIO_EO_LEGACY_H_


/**
 *
 * @brief Set the integer value that this radio object represents
 *
 * This sets the value of the radio.
 *
 * @ingroup Radio
 *
 * @param[in] value The value to use if this radio object is selected
 */
EAPI void elm_radio_state_value_set(Eo *obj, int value);

/**
 *
 * @brief Get the integer value that this radio object represents
 *
 * @return The value used if this radio object is selected
 *
 * This gets the value of the radio.
 * @see elm_radio_value_set()
 *
 * @ingroup Radio
 *
 */
EAPI int elm_radio_state_value_get(const Eo *obj);

/**
 *
 * @brief Set the value of the radio group.
 *
 * This sets the value of the radio group and will also set the value if
 * pointed to, to the value supplied, but will not call any callbacks.
 *
 * @ingroup Radio
 *
 * @param[in] value The value to use for the group
 */
EAPI void elm_radio_value_set(Eo *obj, int value);

/**
 *
 * @brief Get the value of the radio group
 *
 * @return The integer state
 *
 * @ingroup Radio
 *
 */
EAPI int elm_radio_value_get(const Eo *obj);

/**
 *
 * @brief Set a convenience pointer to a integer to change when radio group
 * value changes.
 *
 * This sets a pointer to a integer, that, in addition to the radio objects
 * state will also be modified directly. To stop setting the object pointed
 * to simply use NULL as the @p valuep argument. If valuep is not NULL, then
 * when this is called, the radio objects state will also be modified to
 * reflect the value of the integer valuep points to, just like calling
 * elm_radio_value_set().
 *
 * @ingroup Radio
 *
 * @param[in] valuep Pointer to the integer to modify
 */
EAPI void elm_radio_value_pointer_set(Eo *obj, int *valuep);

/**
 *
 * @brief Get the selected radio object.
 *
 * @return The selected radio object
 *
 * @ingroup Radio
 *
 */
EAPI Evas_Object *elm_radio_selected_object_get(const Eo *obj);

/**
 *
 * @brief Add this radio to a group of other radio objects
 *
 * Radio objects work in groups. Each member should have a different integer
 * value assigned. In order to have them work as a group, they need to know
 * about each other. This adds the given radio object to the group of which
 * the group object indicated is a member.
 *
 * @ingroup Radio
 *
 * @param[in] group Any object whose group the @p obj is to join.
 */
EAPI void elm_radio_group_add(Eo *obj, Evas_Object *group);

#endif
