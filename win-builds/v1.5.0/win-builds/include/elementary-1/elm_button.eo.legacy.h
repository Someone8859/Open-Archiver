#ifndef _ELM_BUTTON_EO_LEGACY_H_
#define _ELM_BUTTON_EO_LEGACY_H_


/**
 *
 * Set the initial timeout before the autorepeat event is generated
 *
 * Sets the timeout, in seconds, since the button is pressed until the
 * first @c repeated signal is emitted. If @p t is 0.0 or less, there
 * won't be any delay and the event will be fired the moment the button is
 * pressed.
 *
 * @see elm_button_autorepeat_set()
 * @see elm_button_autorepeat_gap_timeout_set()
 *
 * @ingroup Button
 *
 * @param[in] t Timeout in seconds
 */
EAPI void elm_button_autorepeat_initial_timeout_set(Eo *obj, double t);

/**
 *
 * Get the initial timeout before the autorepeat event is generated
 *
 * @return Timeout in seconds
 *
 * @see elm_button_autorepeat_initial_timeout_set()
 *
 * @ingroup Button
 *
 */
EAPI double elm_button_autorepeat_initial_timeout_get(const Eo *obj);

/**
 *
 * Set the interval between each generated autorepeat event
 *
 * After the first @c repeated event is fired, all subsequent ones will
 * follow after a delay of @p t seconds for each.
 *
 * @see elm_button_autorepeat_initial_timeout_set()
 *
 * @ingroup Button
 *
 * @param[in] t Interval in seconds
 */
EAPI void elm_button_autorepeat_gap_timeout_set(Eo *obj, double t);

/**
 *
 * Get the interval between each generated autorepeat event
 *
 * @return Interval in seconds
 *
 * @ingroup Button
 *
 */
EAPI double elm_button_autorepeat_gap_timeout_get(const Eo *obj);

/**
 *
 * Turn on/off the autorepeat event generated when the button is kept pressed
 *
 * When off, no autorepeat is performed and buttons emit a normal @c clicked
 * signal when they are clicked.
 *
 * When on, keeping a button pressed will continuously emit a @c repeated
 * signal until the button is released. The time it takes until it starts
 * emitting the signal is given by
 * elm_button_autorepeat_initial_timeout_set(), and the time between each
 * new emission by elm_button_autorepeat_gap_timeout_set().
 *
 * @ingroup Button
 *
 * @param[in] on A bool to turn on/off the event
 */
EAPI void elm_button_autorepeat_set(Eo *obj, Eina_Bool on);

/**
 *
 * Get whether the autorepeat feature is enabled
 *
 * @return @c EINA_TRUE if autorepeat is on, @c EINA_FALSE otherwise
 *
 * @see elm_button_autorepeat_set()
 *
 * @ingroup Button
 *
 */
EAPI Eina_Bool elm_button_autorepeat_get(const Eo *obj);

#endif
