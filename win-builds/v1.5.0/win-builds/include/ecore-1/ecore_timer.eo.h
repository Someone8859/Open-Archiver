#ifndef _ECORE_TIMER_EO_H_
#define _ECORE_TIMER_EO_H_

#ifndef _ECORE_TIMER_EO_TYPES
#define _ECORE_TIMER_EO_TYPES


#endif
/**
 * Timers are objects that will call a given callback at some point
 * *  in the future. They may also optionall repeat themselves if the
 * *  timer callback returns true. If it does not they will be
 * *  automatically deleted and never called again. Timers require the
 * *  ecore mainloop to be running and functioning properly. They do not
 * *  guarantee exact timing, but try to work on a "best effort basis.
 */
#define ECORE_TIMER_CLASS ecore_timer_class_get()

const Eo_Class *ecore_timer_class_get(void) EINA_CONST;

/**
 *
 * No description supplied.
 *
 * @param[in] in The time, in seconds, from now when to go off
 * @param[in] func The callback function to call when the timer goes off
 * @param[in] data A pointer to pass to the callback function as its data pointer
 *
 */
EOAPI void  ecore_obj_timer_loop_constructor(double in, Ecore_Task_Cb func, const void *data);

/**
 *
 * No description supplied.
 *
 * @param[in] in The time, in seconds, from when the main loop woke up, to go off
 * @param[in] func The callback function to call when the timer goes off
 * @param[in] data A pointer to pass to the callback function as its data pointer
 *
 */
EOAPI void  ecore_obj_timer_constructor(double in, Ecore_Task_Cb func, const void *data);

/**
 *
 * Change the interval the timer ticks off. If set during
 * * a timer call, this will affect the next interval.
 *
 * @param[in] in The new interval in seconds
 *
 */
EOAPI void  ecore_obj_timer_interval_set(double in);

/**
 *
 * Get the interval the timer ticks on.
 *
 *
 */
EOAPI double  ecore_obj_timer_interval_get(void);

/**
 *
 * Get the pending time regarding a timer.
 *
 *
 */
EOAPI double  ecore_obj_timer_pending_get(void);

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
 *
 */
EOAPI void  ecore_obj_timer_reset(void);

/**
 *
 * Add some delay for the next occurrence of a timer.
 * * This doesn't affect the interval of a timer.
 *
 * @param[in] add The amount of time to delay the timer by in seconds
 *
 */
EOAPI void  ecore_obj_timer_delay(double add);


#endif
