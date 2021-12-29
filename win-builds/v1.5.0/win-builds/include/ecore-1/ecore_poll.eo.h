#ifndef _ECORE_POLL_EO_H_
#define _ECORE_POLL_EO_H_

#ifndef _ECORE_POLL_EO_TYPES
#define _ECORE_POLL_EO_TYPES


#endif
#define ECORE_POLLER_CLASS ecore_poller_class_get()

const Eo_Class *ecore_poller_class_get(void) EINA_CONST;

/**
 *
 * No description supplied.
 *
 * @param[in] type No description supplied.
 * @param[in] interval No description supplied.
 * @param[in] func No description supplied.
 * @param[in] data No description supplied.
 *
 */
EOAPI void  ecore_poller_constructor(Ecore_Poller_Type type, int interval, Ecore_Task_Cb func, const void *data);

/**
 *
 * @brief Changes the polling interval rate of @p poller.
 * @return Returns true on success, false on failure.
 *
 * This allows the changing of a poller's polling interval. It is useful when
 * you want to alter a poll rate without deleting and re-creating a poller.
 *
 * @param[in] interval The tick interval to set; must be a power of 2 and <= 32768.
 *
 */
EOAPI Eina_Bool  ecore_poller_interval_set(int interval);

/**
 *
 * @brief Gets the polling interval rate of @p poller.
 * @return Returns the interval, in ticks, that @p poller polls at.
 *
 * This returns a poller's polling interval, or 0 on error.
 *
 *
 */
EOAPI int  ecore_poller_interval_get(void);


#endif
