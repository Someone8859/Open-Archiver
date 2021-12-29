#ifndef _ELM_SCROLLER_EO_H_
#define _ELM_SCROLLER_EO_H_

#ifndef _ELM_SCROLLER_EO_TYPES
#define _ELM_SCROLLER_EO_TYPES


#endif
#define ELM_SCROLLER_CLASS elm_scroller_class_get()

const Eo_Class *elm_scroller_class_get(void) EINA_CONST;

/**
 *
 * @brief Set event propagation on a scroller
 *
 * This enables or disables event propagation from the scroller
 * content to the scroller and its parent. By default event
 * propagation is @b enabled.
 *
 * @ingroup Scroller
 *
 * @param[in] propagation If propagation is enabled or not
 *
 */
EOAPI void  elm_obj_scroller_propagate_events_set(Eina_Bool propagation);

/**
 *
 * @brief Get event propagation for a scroller
 *
 * @return The propagation state
 *
 * This gets the event propagation for a scroller.
 *
 * @see elm_scroller_propagate_events_set()
 *
 * @ingroup Scroller
 *
 *
 */
EOAPI Eina_Bool  elm_obj_scroller_propagate_events_get(void);

/**
 *
 * Set custom theme elements for the scroller
 *
 * @param[in] klass No description supplied.
 * @param[in] group No description supplied.
 *
 */
EOAPI void  elm_obj_scroller_custom_widget_base_theme_set(const char *klass, const char *group);

/**
 *
 * @brief Set the maximum of the movable page at a flicking.
 *
 * The value of maximum movable page should be more than 1.
 *
 * @see elm_scroller_page_scroll_limit_get()
 *
 * @since 1.8
 *
 * @ingroup Scroller
 *
 * @param[in] page_limit_h The maximum of the movable horizontal page
 * @param[in] page_limit_v The maximum of the movable vertical page
 *
 */
EOAPI void  elm_obj_scroller_page_scroll_limit_set(int page_limit_h, int page_limit_v);

/**
 *
 * @brief Get the maximum of the movable page at a flicking.
 *
 * @see elm_scroller_page_scroll_limit_set()
 *
 * @since 1.8
 *
 * @ingroup Scroller
 *
 * @param[in] page_limit_h The maximum of the movable horizontal page
 * @param[in] page_limit_v The maximum of the movable vertical page
 *
 */
EOAPI void  elm_obj_scroller_page_scroll_limit_get(int *page_limit_h, int *page_limit_v);

EOAPI extern const Eo_Event_Description _ELM_SCROLLER_EVENT_FOCUSED;
EOAPI extern const Eo_Event_Description _ELM_SCROLLER_EVENT_UNFOCUSED;

/**
 * No description
 */
#define ELM_SCROLLER_EVENT_FOCUSED (&(_ELM_SCROLLER_EVENT_FOCUSED))

/**
 * No description
 */
#define ELM_SCROLLER_EVENT_UNFOCUSED (&(_ELM_SCROLLER_EVENT_UNFOCUSED))

#endif
