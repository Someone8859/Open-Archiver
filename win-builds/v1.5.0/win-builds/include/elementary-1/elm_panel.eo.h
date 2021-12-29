#ifndef _ELM_PANEL_EO_H_
#define _ELM_PANEL_EO_H_

#ifndef _ELM_PANEL_EO_TYPES
#define _ELM_PANEL_EO_TYPES


#endif
#define ELM_PANEL_CLASS elm_panel_class_get()

const Eo_Class *elm_panel_class_get(void) EINA_CONST;

/**
 *
 * @brief Sets the orientation of the panel
 *
 * Sets from where the panel will (dis)appear.
 *
 * @ingroup Panel
 *
 * @param[in] orient The panel orientation. Can be one of the following:
@li ELM_PANEL_ORIENT_TOP
@li ELM_PANEL_ORIENT_LEFT
@li ELM_PANEL_ORIENT_RIGHT
 *
 */
EOAPI void  elm_obj_panel_orient_set(Elm_Panel_Orient orient);

/**
 *
 * @brief Get the orientation of the panel.
 *
 * @return The Elm_Panel_Orient, or ELM_PANEL_ORIENT_LEFT on failure.
 *
 * @ingroup Panel
 *
 *
 */
EOAPI Elm_Panel_Orient  elm_obj_panel_orient_get(void);

/**
 *
 * @brief Set the state of the panel.
 *
 * @ingroup Panel
 *
 * @param[in] hidden If true, the panel will run the animation to disappear.
 *
 */
EOAPI void  elm_obj_panel_hidden_set(Eina_Bool hidden);

/**
 *
 * @brief Get the state of the panel.
 *
 * @return EINA_TRUE if it is hidden state
 *
 * @ingroup Panel
 *
 *
 */
EOAPI Eina_Bool  elm_obj_panel_hidden_get(void);

/**
 *
 * @brief Set the scrollability of the panel.
 *
 * @ingroup Panel
 *
 * @param[in] scrollable No description supplied.
 *
 */
EOAPI void  elm_obj_panel_scrollable_set(Eina_Bool scrollable);

/**
 *
 * @brief Set the size of the scrollable panel.
 *
 * @ingroup Panel
 *
 * @param[in] ratio No description supplied.
 *
 */
EOAPI void  elm_obj_panel_scrollable_content_size_set(double ratio);

/**
 *
 * @brief Toggle the hidden state of the panel from code
 *
 * @ingroup Panel
 *
 *
 */
EOAPI void  elm_obj_panel_toggle(void);

EOAPI extern const Eo_Event_Description _ELM_PANEL_EVENT_FOCUSED;
EOAPI extern const Eo_Event_Description _ELM_PANEL_EVENT_UNFOCUSED;

/**
 * No description
 */
#define ELM_PANEL_EVENT_FOCUSED (&(_ELM_PANEL_EVENT_FOCUSED))

/**
 * No description
 */
#define ELM_PANEL_EVENT_UNFOCUSED (&(_ELM_PANEL_EVENT_UNFOCUSED))

#endif
