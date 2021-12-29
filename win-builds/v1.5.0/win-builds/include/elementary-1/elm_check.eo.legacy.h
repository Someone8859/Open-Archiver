#ifndef _ELM_CHECK_EO_LEGACY_H_
#define _ELM_CHECK_EO_LEGACY_H_


/**
 *
 * @brief Set the on/off state of the check object
 *
 * This sets the state of the check. If set with elm_check_state_pointer_set()
 * the state of that variable is also changed. Calling this @b doesn't cause
 * the "changed" signal to be emitted.
 *
 * @ingroup Check
 *
 * @param[in] state The state to use (1 == on, 0 == off)
 */
EAPI void elm_check_state_set(Eo *obj, Eina_Bool state);

/**
 *
 * @brief Get the state of the check object
 *
 * @return The boolean state
 *
 * @ingroup Check
 *
 */
EAPI Eina_Bool elm_check_state_get(const Eo *obj);

/**
 *
 * @brief Set a convenience pointer to a boolean to change
 *
 * This sets a pointer to a boolean, that, in addition to the check objects
 * state will also be modified directly. To stop setting the object pointed
 * to simply use NULL as the @p statep parameter. If @p statep is not NULL,
 * then when this is called, the check objects state will also be modified to
 * reflect the value of the boolean @p statep points to, just like calling
 * elm_check_state_set().
 *
 * @ingroup Check
 *
 * @param[in] statep Pointer to the boolean to modify
 */
EAPI void elm_check_state_pointer_set(Eo *obj, Eina_Bool *statep);

#endif
