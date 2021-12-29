#ifndef _ELM_INTERFACE_ATSPI_ACTION_EO_H_
#define _ELM_INTERFACE_ATSPI_ACTION_EO_H_

#ifndef _ELM_INTERFACE_ATSPI_ACTION_EO_TYPES
#define _ELM_INTERFACE_ATSPI_ACTION_EO_TYPES


#endif
#define ELM_INTERFACE_ATSPI_ACTION_MIXIN elm_interface_atspi_action_mixin_get()

const Eo_Class *elm_interface_atspi_action_mixin_get(void) EINA_CONST;

#ifdef ELM_INTERFACE_ATSPI_ACTION_PROTECTED
/**
 *
 * Gets action name for given id
 *
 * @param[in] id No description supplied.
 *
 */
EOAPI const char * elm_interface_atspi_action_name_get(int id);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACTION_PROTECTED
/**
 *
 * Gets localized action name for given id
 *
 * @param[in] id No description supplied.
 *
 */
EOAPI const char * elm_interface_atspi_action_localized_name_get(int id);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACTION_PROTECTED
/**
 *
 * Sets action description for given id
 *
 * @param[in] id No description supplied.
 * @param[in] description No description supplied.
 *
 */
EOAPI Eina_Bool  elm_interface_atspi_action_description_set(int id, const char *description);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACTION_PROTECTED
/**
 *
 * Gets action description for given id
 *
 * @param[in] id No description supplied.
 *
 */
EOAPI const char * elm_interface_atspi_action_description_get(int id);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACTION_PROTECTED
/**
 *
 * Get list of available widget actions
 *
 *
 */
EOAPI Eina_List * elm_interface_atspi_action_actions_get(void);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACTION_PROTECTED
/**
 *
 * Performs action on given widget.
 *
 * @param[in] id No description supplied.
 *
 */
EOAPI Eina_Bool  elm_interface_atspi_action_do(int id);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACTION_PROTECTED
/**
 *
 * Gets configured keybinding for specific action and widget.
 * returned pointer should be free by a user.
 *
 * @param[in] id No description supplied.
 *
 */
EOAPI char * elm_interface_atspi_action_keybinding_get(int id);
#endif


#endif
