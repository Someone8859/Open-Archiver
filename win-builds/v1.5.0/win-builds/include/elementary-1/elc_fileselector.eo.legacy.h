#ifndef _ELC_FILESELECTOR_EO_LEGACY_H_
#define _ELC_FILESELECTOR_EO_LEGACY_H_


/**
 *
 * Enable/disable the "ok" and "cancel" buttons on a given file
 * selector widget
 *
 * @note A file selector without those buttons will never emit the
 * @c "done" smart event, and is only usable if one is just hooking
 * to the other two events.
 *
 * @see elm_fileselector_buttons_ok_cancel_get()
 *
 * @ingroup Fileselector
 *
 * @param[in] visible @c EINA_TRUE to show buttons, @c EINA_FALSE to hide.
 */
EAPI void elm_fileselector_buttons_ok_cancel_set(Eo *obj, Eina_Bool visible);

/**
 *
 * Get whether the "ok" and "cancel" buttons on a given file
 * selector widget are being shown.
 *
 * @return @c EINA_TRUE if they are being shown, @c EINA_FALSE
 * otherwise (and on errors)
 *
 * @see elm_fileselector_buttons_ok_cancel_set() for more details
 *
 * @ingroup Fileselector
 *
 */
EAPI Eina_Bool elm_fileselector_buttons_ok_cancel_get(const Eo *obj);

#endif
