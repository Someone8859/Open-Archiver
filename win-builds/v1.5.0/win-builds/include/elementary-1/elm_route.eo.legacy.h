#ifndef _ELM_ROUTE_EO_LEGACY_H_
#define _ELM_ROUTE_EO_LEGACY_H_


/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] emap No description supplied.
 */
EAPI void elm_route_emap_set(Eo *obj, void *emap);

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
 */
EAPI void elm_route_longitude_min_max_get(const Eo *obj, double *min, double *max);

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
 */
EAPI void elm_route_latitude_min_max_get(const Eo *obj, double *min, double *max);

#endif
