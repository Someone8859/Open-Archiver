#ifndef _ELM_INTERFACE_ATSPI_ACCESSIBLE_EO_H_
#define _ELM_INTERFACE_ATSPI_ACCESSIBLE_EO_H_

#ifndef _ELM_INTERFACE_ATSPI_ACCESSIBLE_EO_TYPES
#define _ELM_INTERFACE_ATSPI_ACCESSIBLE_EO_TYPES


#endif
#define ELM_INTERFACE_ATSPI_ACCESSIBLE_MIXIN elm_interface_atspi_accessible_mixin_get()

const Eo_Class *elm_interface_atspi_accessible_mixin_get(void) EINA_CONST;

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/**
 *
 * Gets an localized string describing ATSPI widget role name.
 *
 *
 */
EOAPI const char * elm_interface_atspi_accessible_localized_role_name_get(void);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/**
 *
 * No description supplied.
 *
 * @param[in] name obj name
 *
 */
EOAPI void  elm_interface_atspi_accessible_name_set(const char *name);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/**
 *
 * Gets an string describing ATSPI widget role name.
 *
 *
 */
EOAPI const char * elm_interface_atspi_accessible_name_get(void);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/**
 *
 * Gets an string describing ATSPI widget role name. Lists and
 * elements Should be free by a user.
 *
 *
 */
EOAPI Eina_List * elm_interface_atspi_accessible_relation_set_get(void);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/**
 *
 * No description supplied.
 *
 * @param[in] role No description supplied.
 *
 */
EOAPI void  elm_interface_atspi_accessible_role_set(Elm_Atspi_Role role);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/**
 *
 * Gets the role of the widget in ATSPI Accessibility domain.
 *
 *
 */
EOAPI Elm_Atspi_Role  elm_interface_atspi_accessible_role_get(void);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/**
 *
 * Gets widget's accessible children.
 *
 *
 */
EOAPI Eina_List * elm_interface_atspi_accessible_children_get(void);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/**
 *
 * Gets human-readable string indentifying widget accessibility
 * role.
 *
 *
 */
EOAPI const char * elm_interface_atspi_accessible_role_name_get(void);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/**
 *
 * Gets key-value pairs indentifying widget extra 
 * attributes. Must be free by a user.
 *
 *
 */
EOAPI Eina_List * elm_interface_atspi_accessible_attributes_get(void);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/**
 *
 * Gets index of the child in parent's children list.
 *
 *
 */
EOAPI int  elm_interface_atspi_accessible_index_in_parent_get(void);
#endif

/**
 *
 * Sets contextual information about widget.
 *
 * @param[in] description No description supplied.
 *
 */
EOAPI void  elm_interface_atspi_accessible_description_set(const char *description);

/**
 *
 * Gets widget contextual information.
 *
 *
 */
EOAPI const char * elm_interface_atspi_accessible_description_get(void);

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/**
 *
 * Sets widget accessible parent.
 *
 * @param[in] parent No description supplied.
 *
 */
EOAPI void  elm_interface_atspi_accessible_parent_set(Eo *parent);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/**
 *
 * Gets widget accessible parent.
 *
 *
 */
EOAPI Eo * elm_interface_atspi_accessible_parent_get(void);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/**
 *
 * Gets set describing widget accessible states.
 *
 *
 */
EOAPI Elm_Atspi_State_Set  elm_interface_atspi_accessible_state_set_get(void);
#endif

EOAPI extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_PROPERTY_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_CHILDREN_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_STATE_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_VISIBLE_DATA_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_ACTIVE_DESCENDANTS_CHANGED;

/**
 * No description
 */
#define ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_PROPERTY_CHANGED (&(_ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_PROPERTY_CHANGED))

/**
 * No description
 */
#define ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_CHILDREN_CHANGED (&(_ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_CHILDREN_CHANGED))

/**
 * No description
 */
#define ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_STATE_CHANGED (&(_ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_STATE_CHANGED))

/**
 * No description
 */
#define ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_VISIBLE_DATA_CHANGED (&(_ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_VISIBLE_DATA_CHANGED))

/**
 * No description
 */
#define ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_ACTIVE_DESCENDANTS_CHANGED (&(_ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_ACTIVE_DESCENDANTS_CHANGED))

#endif
