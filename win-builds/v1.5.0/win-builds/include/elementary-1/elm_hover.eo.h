#ifndef _ELM_HOVER_EO_H_
#define _ELM_HOVER_EO_H_

#ifndef _ELM_HOVER_EO_TYPES
#define _ELM_HOVER_EO_TYPES


#endif
#define ELM_HOVER_CLASS elm_hover_class_get()

const Eo_Class *elm_hover_class_get(void) EINA_CONST;

/**
 *
 * @brief Sets the target object for the hover.
 *
 * This function will cause the hover to be centered on the target object.
 *
 * @ingroup Hover
 *
 * @param[in] target The object to center the hover onto.
 *
 */
EOAPI void  elm_obj_hover_target_set(Evas_Object *target);

/**
 *
 * @brief Get the target object for the hover.
 *
 * @return The target object for the hover.
 *
 * @see elm_hover_target_set()
 *
 * @ingroup Hover
 *
 *
 */
EOAPI Evas_Object * elm_obj_hover_target_get(void);

/**
 *
 * @brief Returns the best swallow location for content in the hover.
 *
 * @return The edje location to place content into the hover or @c
 * NULL, on errors.
 *
 * Best is defined here as the location at which there is the most available
 * space.
 *
 * @p pref_axis may be one of
 * - @c ELM_HOVER_AXIS_NONE -- no preferred orientation
 * - @c ELM_HOVER_AXIS_HORIZONTAL -- horizontal
 * - @c ELM_HOVER_AXIS_VERTICAL -- vertical
 * - @c ELM_HOVER_AXIS_BOTH -- both
 *
 * If ELM_HOVER_AXIS_HORIZONTAL is chosen the returned position will
 * necessarily be along the horizontal axis("left" or "right"). If
 * ELM_HOVER_AXIS_VERTICAL is chosen the returned position will necessarily
 * be along the vertical axis("top" or "bottom"). Choosing
 * ELM_HOVER_AXIS_BOTH or ELM_HOVER_AXIS_NONE has the same effect and the
 * returned position may be in either axis.
 *
 * @see elm_object_part_content_set()
 *
 * @ingroup Hover
 *
 * @param[in] pref_axis The preferred orientation axis for the hover object to use
 *
 */
EOAPI const char * elm_obj_hover_best_content_location_get(Elm_Hover_Axis pref_axis);

/**
 *
 * @brief Dismiss a hover object
 *
 * @ingroup Hover
 *
 *
 */
EOAPI void  elm_obj_hover_dismiss(void);

EOAPI extern const Eo_Event_Description _ELM_HOVER_EVENT_FOCUSED;
EOAPI extern const Eo_Event_Description _ELM_HOVER_EVENT_UNFOCUSED;

/**
 * No description
 */
#define ELM_HOVER_EVENT_FOCUSED (&(_ELM_HOVER_EVENT_FOCUSED))

/**
 * No description
 */
#define ELM_HOVER_EVENT_UNFOCUSED (&(_ELM_HOVER_EVENT_UNFOCUSED))

#endif
