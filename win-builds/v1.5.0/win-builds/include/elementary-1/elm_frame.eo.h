#ifndef _ELM_FRAME_EO_H_
#define _ELM_FRAME_EO_H_

#ifndef _ELM_FRAME_EO_TYPES
#define _ELM_FRAME_EO_TYPES


#endif
#define ELM_FRAME_CLASS elm_frame_class_get()

const Eo_Class *elm_frame_class_get(void) EINA_CONST;

/**
 *
 * @brief Manually collapse a frame without animations
 * Use this to toggle the collapsed state of a frame, bypassing animations.
 *
 * @ingroup Frame
 *
 * @param[in] collapse true to collapse, false to expand
 *
 */
EOAPI void  elm_obj_frame_collapse_set(Eina_Bool collapse);

/**
 *
 * @brief Determine the collapse state of a frame
 * @return true if collapsed, false otherwise
 *
 * Use this to determine the collapse state of a frame.
 *
 * @ingroup Frame
 *
 *
 */
EOAPI Eina_Bool  elm_obj_frame_collapse_get(void);

/**
 *
 * @brief Toggle autocollapsing of a frame
 * When @p enable is EINA_TRUE, clicking a frame's label will collapse the frame
 * vertically, shrinking it to the height of the label.
 * By default, this is DISABLED.
 *
 * @ingroup Frame
 *
 * @param[in] autocollapse Whether to enable autocollapse
 *
 */
EOAPI void  elm_obj_frame_autocollapse_set(Eina_Bool autocollapse);

/**
 *
 * @brief Determine autocollapsing of a frame
 * @return Whether autocollapse is enabled
 *
 * When this returns EINA_TRUE, clicking a frame's label will collapse the frame
 * vertically, shrinking it to the height of the label.
 * By default, this is DISABLED.
 *
 * @ingroup Frame
 *
 *
 */
EOAPI Eina_Bool  elm_obj_frame_autocollapse_get(void);

/**
 *
 * @brief Manually collapse a frame with animations
 * Use this to toggle the collapsed state of a frame, triggering animations.
 *
 * @ingroup Frame
 *
 * @param[in] collapse true to collapse, false to expand
 *
 */
EOAPI void  elm_obj_frame_collapse_go(Eina_Bool collapse);

EOAPI extern const Eo_Event_Description _ELM_FRAME_EVENT_CLICKED;
EOAPI extern const Eo_Event_Description _ELM_FRAME_EVENT_LANGUAGE_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_FRAME_EVENT_ACCESS_CHANGED;

/**
 * No description
 */
#define ELM_FRAME_EVENT_CLICKED (&(_ELM_FRAME_EVENT_CLICKED))

/**
 * No description
 */
#define ELM_FRAME_EVENT_LANGUAGE_CHANGED (&(_ELM_FRAME_EVENT_LANGUAGE_CHANGED))

/**
 * No description
 */
#define ELM_FRAME_EVENT_ACCESS_CHANGED (&(_ELM_FRAME_EVENT_ACCESS_CHANGED))

#endif
