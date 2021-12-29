#ifndef _ECORE_TIMER_EO_LEGACY_H_
#define _ECORE_TIMER_EO_LEGACY_H_

/**
 * Timers are objects that will call a given callback at some point
 * *  in the future. They may also optionall repeat themselves if the
 * *  timer callback returns true. If it does not they will be
 * *  automatically deleted and never called again. Timers require the
 * *  ecore mainloop to be running and functioning properly. They do not
 * *  guarantee exact timing, but try to work on a "best effort basis.
 */

/**
 *
 * Change the interval the timer ticks off. If set during
 * * a timer call, this will affect the next interval.
 *
 * @param[in] in The new interval in seconds
 */
EAPI void ecore_timer_interval_set(Eo *obj, double in);

/**
 *
 * Get the interval the timer ticks on.
 *
 */
EAPI double ecore_timer_interval_get(const Eo *obj);

/**
 *
 * Get the pending time regarding a timer.
 *
 */
EAPI double ecore_timer_pending_get(const Eo *obj);

/**
 *
 * Reset a timer to its full interval. This effectively makes
 * *  the timer start ticking off from zero now.
 * *  @note This is equivalent to (but faster than)
 * * @code
 * * ecore_timer_delay(timer, ecore_timer_interval_get(timer) - ecore_timer_pending_get(timer));
 * * @endcode
 * * @since 1.2
 *
 */
EAPI void ecore_timer_reset(Eo *obj);

/**
 *
 * Add some delay for the next occurrence of a timer.
 * * This doesn't affect the interval of a timer.
 *
 * @param[in] add The amount of time to delay the timer by in seconds
 */
EAPI void ecore_timer_delay(Eo *obj, double add);

#endif
