#ifndef _ELM_ROUTE_EO_H_
#define _ELM_ROUTE_EO_H_

#ifndef _ELM_ROUTE_EO_TYPES
#define _ELM_ROUTE_EO_TYPES


#endif
#define ELM_ROUTE_CLASS elm_route_class_get()

const Eo_Class *elm_route_class_get(void) EINA_CONST;

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] emap No description supplied.
 *
 */
EOAPI void  elm_obj_route_emap_set(void *emap);

/**
 *
 * Get the minimum and maximum values along the longitude.
 *
 * @note If only one value is needed, the other pointer can be passed
 * as @c NULL.
 *
 * @ingroup Route
 *
 * @param[out] min Pointer to store the minimum value.
 * @param[out] max Pointer to store the maximum value.
 *
 */
EOAPI void  elm_obj_route_longitude_min_max_get(double *min, double *max);

/**
 *
 * Get the minimum and maximum values along the latitude.
 *
 * @note If only one value is needed, the other pointer can be passed
 * as @c NULL.
 *
 * @ingroup Route
 *
 * @param[out] min Pointer to store the minimum value.
 * @param[out] max Pointer to store the maximum value.
 *
 */
EOAPI void  elm_obj_route_latitude_min_max_get(double *min, double *max);


#endif
