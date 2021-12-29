#ifndef _ELM_INTERFACE_ATSPI_WINDOW_EO_H_
#define _ELM_INTERFACE_ATSPI_WINDOW_EO_H_

#ifndef _ELM_INTERFACE_ATSPI_WINDOW_EO_TYPES
#define _ELM_INTERFACE_ATSPI_WINDOW_EO_TYPES


#endif
#define ELM_INTERFACE_ATSPI_WINDOW_INTERFACE elm_interface_atspi_window_interface_get()

const Eo_Class *elm_interface_atspi_window_interface_get(void) EINA_CONST;

EOAPI extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_WINDOW_EVENT_WINDOW_CREATED;
EOAPI extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_WINDOW_EVENT_WINDOW_ACTIVATED;
EOAPI extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_WINDOW_EVENT_WINDOW_DEACTIVATED;

/**
 * Called when new window has been created.
 */
#define ELM_INTERFACE_ATSPI_WINDOW_EVENT_WINDOW_CREATED (&(_ELM_INTERFACE_ATSPI_WINDOW_EVENT_WINDOW_CREATED))

/**
 * Called when new window has been activated. (unfocused)
 */
#define ELM_INTERFACE_ATSPI_WINDOW_EVENT_WINDOW_ACTIVATED (&(_ELM_INTERFACE_ATSPI_WINDOW_EVENT_WINDOW_ACTIVATED))

/**
 * Called when new window has been deactivated (unfocused).
 */
#define ELM_INTERFACE_ATSPI_WINDOW_EVENT_WINDOW_DEACTIVATED (&(_ELM_INTERFACE_ATSPI_WINDOW_EVENT_WINDOW_DEACTIVATED))

#endif
