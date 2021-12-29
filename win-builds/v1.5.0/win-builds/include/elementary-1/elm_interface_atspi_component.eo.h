#ifndef _ELM_INTERFACE_ATSPI_COMPONENT_EO_H_
#define _ELM_INTERFACE_ATSPI_COMPONENT_EO_H_

#ifndef _ELM_INTERFACE_ATSPI_COMPONENT_EO_TYPES
#define _ELM_INTERFACE_ATSPI_COMPONENT_EO_TYPES


#endif
#define ELM_INTERFACE_ATSPI_COMPONENT_MIXIN elm_interface_atspi_component_mixin_get()

const Eo_Class *elm_interface_atspi_component_mixin_get(void) EINA_CONST;

#ifdef ELM_INTERFACE_ATSPI_COMPONENT_PROTECTED
/**
 *
 * Sets size of accessible widget.
 *
 * @param[in] w No description supplied.
 * @param[in] h No description supplied.
 *
 */
EOAPI Eina_Bool  elm_interface_atspi_component_size_set(int w, int h);
#endif

#ifdef ELM_INTERFACE_ATSPI_COMPONENT_PROTECTED
/**
 *
 * Gets size of accessible widget.
 *
 * @param[out] w No description supplied.
 * @param[out] h No description supplied.
 *
 */
EOAPI void  elm_interface_atspi_component_size_get(int *w, int *h);
#endif

#ifdef ELM_INTERFACE_ATSPI_COMPONENT_PROTECTED
/**
 *
 * Sets evas layer of accessible widget.
 *
 *
 */
EOAPI int  elm_interface_atspi_component_layer_get(void);
#endif

#ifdef ELM_INTERFACE_ATSPI_COMPONENT_PROTECTED
/**
 *
 * Gets alpha of accessible widget.
 *
 *
 */
EOAPI double  elm_interface_atspi_component_alpha_get(void);
#endif

#ifdef ELM_INTERFACE_ATSPI_COMPONENT_PROTECTED
/**
 *
 * Gets the depth at which the component is shown in relation to
 * other components in the same container.
 *
 *
 */
EOAPI int  elm_interface_atspi_component_z_order_get(void);
#endif

#ifdef ELM_INTERFACE_ATSPI_COMPONENT_PROTECTED
/**
 *
 * Sets geometry of accessible widget.
 *
 * @param[in] screen_coords If true x and y values will be relative
to screen origin, otherwise relative to
canvas
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 * @param[in] w No description supplied.
 * @param[in] h No description supplied.
 *
 */
EOAPI Eina_Bool  elm_interface_atspi_component_extents_set(Eina_Bool screen_coords, int x, int y, int w, int h);
#endif

#ifdef ELM_INTERFACE_ATSPI_COMPONENT_PROTECTED
/**
 *
 * Gets geometry of accessible widget.
 *
 * @param[in] screen_coords If true x and y values will be relative
to screen origin, otherwise relative to
canvas
 * @param[out] x No description supplied.
 * @param[out] y No description supplied.
 * @param[out] w No description supplied.
 * @param[out] h No description supplied.
 *
 */
EOAPI void  elm_interface_atspi_component_extents_get(Eina_Bool screen_coords, int *x, int *y, int *w, int *h);
#endif

#ifdef ELM_INTERFACE_ATSPI_COMPONENT_PROTECTED
/**
 *
 * Sets position of accessible widget.
 *
 * @param[in] screen_coords If true x and y values will be relative
to screen origin, otherwise relative to
canvas
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 *
 */
EOAPI Eina_Bool  elm_interface_atspi_component_position_set(Eina_Bool screen_coords, int x, int y);
#endif

#ifdef ELM_INTERFACE_ATSPI_COMPONENT_PROTECTED
/**
 *
 * Gets position of accessible widget.
 *
 * @param[in] screen_coords If true x and y values will be relative
to screen origin, otherwise relative to
canvas
 * @param[out] x No description supplied.
 * @param[out] y No description supplied.
 *
 */
EOAPI void  elm_interface_atspi_component_position_get(Eina_Bool screen_coords, int *x, int *y);
#endif

#ifdef ELM_INTERFACE_ATSPI_COMPONENT_PROTECTED
/**
 *
 * No description supplied.
 *
 * @param[in] screen_coords If true x and y values will be relative
to screen origin, otherwise relative to
canvas
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 *
 */
EOAPI Eina_Bool  elm_interface_atspi_component_contains(Eina_Bool screen_coords, int x, int y);
#endif

/**
 *
 * Focuses accessible widget.
 *
 * @return true if focus grab focus has successed, false otherwise.
 *
 *
 */
EOAPI Eina_Bool  elm_interface_atspi_component_focus_grab(void);

#ifdef ELM_INTERFACE_ATSPI_COMPONENT_PROTECTED
/**
 *
 * Gets top component object occupying space at given coordinates.
 *
 * @param[in] screen_coords If true x and y values will be relative
to screen origin, otherwise relative to
canvas
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 *
 */
EOAPI Evas_Object * elm_interface_atspi_component_accessible_at_point_get(Eina_Bool screen_coords, int x, int y);
#endif


#endif
