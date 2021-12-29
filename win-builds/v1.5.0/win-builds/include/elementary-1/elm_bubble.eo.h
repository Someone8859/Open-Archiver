#ifndef _ELM_BUBBLE_EO_H_
#define _ELM_BUBBLE_EO_H_

#ifndef _ELM_BUBBLE_EO_TYPES
#define _ELM_BUBBLE_EO_TYPES


#endif
#define ELM_BUBBLE_CLASS elm_bubble_class_get()

const Eo_Class *elm_bubble_class_get(void) EINA_CONST;

/**
 *
 * Set the corner of the bubble
 *
 * This function sets the corner of the bubble. The corner will be used to
 * determine where the arrow in the frame points to and where label, icon and
 * info are shown.
 *
 *
 * @ingroup Bubble
 *
 * @param[in] pos The given corner for the bubble.
 *
 */
EOAPI void  elm_obj_bubble_pos_set(Elm_Bubble_Pos pos);

/**
 *
 * Get the corner of the bubble
 *
 * @return The given corner for the bubble.
 *
 * This function gets the selected corner of the bubble.
 *
 * @ingroup Bubble
 *
 *
 */
EOAPI Elm_Bubble_Pos  elm_obj_bubble_pos_get(void);

EOAPI extern const Eo_Event_Description _ELM_BUBBLE_EVENT_CLICKED;
EOAPI extern const Eo_Event_Description _ELM_BUBBLE_EVENT_FOCUSED;
EOAPI extern const Eo_Event_Description _ELM_BUBBLE_EVENT_UNFOCUSED;

/**
 * No description
 */
#define ELM_BUBBLE_EVENT_CLICKED (&(_ELM_BUBBLE_EVENT_CLICKED))

/**
 * No description
 */
#define ELM_BUBBLE_EVENT_FOCUSED (&(_ELM_BUBBLE_EVENT_FOCUSED))

/**
 * No description
 */
#define ELM_BUBBLE_EVENT_UNFOCUSED (&(_ELM_BUBBLE_EVENT_UNFOCUSED))

#endif
