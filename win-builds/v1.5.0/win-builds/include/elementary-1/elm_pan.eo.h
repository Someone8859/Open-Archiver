#ifndef _ELM_PAN_EO_H_
#define _ELM_PAN_EO_H_

#ifndef _ELM_PAN_EO_TYPES
#define _ELM_PAN_EO_TYPES


#endif
#define ELM_PAN_CLASS elm_pan_class_get()

const Eo_Class *elm_pan_class_get(void) EINA_CONST;

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 *
 */
EOAPI void  elm_obj_pan_gravity_set(double x, double y);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[out] x No description supplied.
 * @param[out] y No description supplied.
 *
 */
EOAPI void  elm_obj_pan_gravity_get(double *x, double *y);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 *
 */
EOAPI void  elm_obj_pan_pos_set(Evas_Coord x, Evas_Coord y);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[out] x No description supplied.
 * @param[out] y No description supplied.
 *
 */
EOAPI void  elm_obj_pan_pos_get(Evas_Coord *x, Evas_Coord *y);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[out] w No description supplied.
 * @param[out] h No description supplied.
 *
 */
EOAPI void  elm_obj_pan_content_size_get(Evas_Coord *w, Evas_Coord *h);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[out] x No description supplied.
 * @param[out] y No description supplied.
 *
 */
EOAPI void  elm_obj_pan_pos_min_get(Evas_Coord *x, Evas_Coord *y);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[out] x No description supplied.
 * @param[out] y No description supplied.
 *
 */
EOAPI void  elm_obj_pan_pos_max_get(Evas_Coord *x, Evas_Coord *y);

EOAPI extern const Eo_Event_Description _ELM_PAN_EVENT_CHANGED;

/**
 * No description
 */
#define ELM_PAN_EVENT_CHANGED (&(_ELM_PAN_EVENT_CHANGED))

#endif
