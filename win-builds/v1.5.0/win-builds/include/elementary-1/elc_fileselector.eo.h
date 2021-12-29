#ifndef _ELC_FILESELECTOR_EO_H_
#define _ELC_FILESELECTOR_EO_H_

#ifndef _ELC_FILESELECTOR_EO_TYPES
#define _ELC_FILESELECTOR_EO_TYPES


#endif
#define ELM_FILESELECTOR_CLASS elm_fileselector_class_get()

const Eo_Class *elm_fileselector_class_get(void) EINA_CONST;

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
 *
 */
EOAPI void  elm_obj_fileselector_buttons_ok_cancel_set(Eina_Bool visible);

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
 *
 */
EOAPI Eina_Bool  elm_obj_fileselector_buttons_ok_cancel_get(void);

EOAPI extern const Eo_Event_Description _ELM_FILESELECTOR_EVENT_FOCUSED;
EOAPI extern const Eo_Event_Description _ELM_FILESELECTOR_EVENT_UNFOCUSED;

/**
 * No description
 */
#define ELM_FILESELECTOR_EVENT_FOCUSED (&(_ELM_FILESELECTOR_EVENT_FOCUSED))

/**
 * No description
 */
#define ELM_FILESELECTOR_EVENT_UNFOCUSED (&(_ELM_FILESELECTOR_EVENT_UNFOCUSED))

#endif
