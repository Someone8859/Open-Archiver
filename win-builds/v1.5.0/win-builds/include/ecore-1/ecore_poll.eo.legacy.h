#ifndef _ECORE_POLL_EO_LEGACY_H_
#define _ECORE_POLL_EO_LEGACY_H_


/**
 *
 * @brief Changes the polling interval rate of @p poller.
 * @return Returns true on success, false on failure.
 *
 * This allows the changing of a poller's polling interval. It is useful when
 * you want to alter a poll rate without deleting and re-creating a poller.
 *
 * @param[in] interval The tick interval to set; must be a power of 2 and <= 32768.
 */
EAPI Eina_Bool ecore_poller_poller_interval_set(Eo *obj, int interval);

/**
 *
 * @brief Gets the polling interval rate of @p poller.
 * @return Returns the interval, in ticks, that @p poller polls at.
 *
 * This returns a poller's polling interval, or 0 on error.
 *
 */
EAPI int ecore_poller_poller_interval_get(const Eo *obj);

#endif
