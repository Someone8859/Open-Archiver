#ifndef _ELM_ACTIONSLIDER_EO_H_
#define _ELM_ACTIONSLIDER_EO_H_

#ifndef _ELM_ACTIONSLIDER_EO_TYPES
#define _ELM_ACTIONSLIDER_EO_TYPES


#endif
#define ELM_ACTIONSLIDER_CLASS elm_actionslider_class_get()

const Eo_Class *elm_actionslider_class_get(void) EINA_CONST;

/**
 *
 * Set actionslider indicator position.
 *
 * @ingroup Actionslider
 *
 * @param[in] pos The position of the indicator.
 *
 */
EOAPI void  elm_obj_actionslider_indicator_pos_set(Elm_Actionslider_Pos pos);

/**
 *
 * Get actionslider indicator position.
 *
 * @return The position of the indicator.
 *
 * @ingroup Actionslider
 *
 *
 */
EOAPI Elm_Actionslider_Pos  elm_obj_actionslider_indicator_pos_get(void);

/**
 *
 * Set actionslider magnet position. To make multiple positions magnets @c or
 * them together(e.g.: ELM_ACTIONSLIDER_LEFT | ELM_ACTIONSLIDER_RIGHT)
 *
 * @ingroup Actionslider
 *
 * @param[in] pos Bit mask indicating the magnet positions.
 *
 */
EOAPI void  elm_obj_actionslider_magnet_pos_set(Elm_Actionslider_Pos pos);

/**
 *
 * Get actionslider magnet position.
 *
 * @return The positions with magnet property.
 *
 * @ingroup Actionslider
 *
 *
 */
EOAPI Elm_Actionslider_Pos  elm_obj_actionslider_magnet_pos_get(void);

/**
 *
 * Set actionslider enabled position. To set multiple positions as enabled @c or
 * them together(e.g.: ELM_ACTIONSLIDER_LEFT | ELM_ACTIONSLIDER_RIGHT).
 *
 * @note All the positions are enabled by default.
 *
 * @ingroup Actionslider
 *
 * @param[in] pos Bit mask indicating the enabled positions.
 *
 */
EOAPI void  elm_obj_actionslider_enabled_pos_set(Elm_Actionslider_Pos pos);

/**
 *
 * Get actionslider enabled position.
 *
 * @return The enabled positions.
 *
 * @ingroup Actionslider
 *
 *
 */
EOAPI Elm_Actionslider_Pos  elm_obj_actionslider_enabled_pos_get(void);

/**
 *
 * Get actionslider selected label.
 *
 * @return The selected label
 *
 * @ingroup Actionslider
 *
 *
 */
EOAPI const char * elm_obj_actionslider_selected_label_get(void);

EOAPI extern const Eo_Event_Description _ELM_ACTIONSLIDER_EVENT_LANGUAGE_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_ACTIONSLIDER_EVENT_ACCESS_CHANGED;

/**
 * No description
 */
#define ELM_ACTIONSLIDER_EVENT_LANGUAGE_CHANGED (&(_ELM_ACTIONSLIDER_EVENT_LANGUAGE_CHANGED))

/**
 * No description
 */
#define ELM_ACTIONSLIDER_EVENT_ACCESS_CHANGED (&(_ELM_ACTIONSLIDER_EVENT_ACCESS_CHANGED))

#endif
