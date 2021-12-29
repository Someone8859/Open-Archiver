#ifndef _EVAS_3D_LIGHT_EO_H_
#define _EVAS_3D_LIGHT_EO_H_

#ifndef _EVAS_3D_LIGHT_EO_TYPES
#define _EVAS_3D_LIGHT_EO_TYPES


#endif
#define EVAS_3D_LIGHT_CLASS evas_3d_light_class_get()

const Eo_Class *evas_3d_light_class_get(void) EINA_CONST;

/**
 *
 * Set the directional flag of the given light.
 *
 * Directional light is a type of light which is infinitely far away with no
 * attenuation. The light direction is determined by the containing node's
 * forward vector (negative Z-axis).
 *
 * By default, directional is not enabled.
 *
 * @see evas_3d_node_look_at_set()
 *
 * @ingroup Evas_3D_Light
 *
 * @param[in] directional Whether the light is directional (@c EINA_TRUE), or not (@c EINA_FALSE).
 *
 */
EOAPI void  evas_3d_light_directional_set(Eina_Bool directional);

/**
 *
 * Get the directional flag of the given light.
 *
 * @see evas_3d_light_directional_set()
 *
 * @ingroup Evas_3D_Light
 *
 *
 */
EOAPI Eina_Bool  evas_3d_light_directional_get(void);

/**
 *
 * Set the spot exponent of the given light.
 *
 * Higher spot exponent means intensity at the center of the cone is relatively
 * stronger. Zero exponent means the light intensity is evenly distibuted. The
 * spot exponent has no effect when the light is not spot light (spot cutoff
 * angle is less than 180 degree).
 *
 * Default spot exponent is 0.
 *
 * @see evas_3d_light_spot_cutoff_set()
 *
 * @ingroup Evas_3D_Light
 *
 * @param[in] exponent Spot exponent value..
 *
 */
EOAPI void  evas_3d_light_spot_exponent_set(Evas_Real exponent);

/**
 *
 * Get the spot exponent of the given light.
 *
 * @see evas_3d_light_spot_exponent_set()
 *
 * @ingroup Evas_3D_Light
 *
 *
 */
EOAPI Evas_Real  evas_3d_light_spot_exponent_get(void);

/**
 *
 * Set the spot cutoff angle of the given light.
 *
 * Only angle less than 180 degree will make it spot light, so that other spot
 * light attribute will take effect.
 *
 * Default spot cutoff angle is 180.
 *
 * @ingroup Evas_3D_Light
 *
 * @param[in] cutoff Cutoff angle in degree..
 *
 */
EOAPI void  evas_3d_light_spot_cutoff_set(Evas_Real cutoff);

/**
 *
 * Get the spot cutoff angle of the given light.
 *
 * @see evas_3d_light_spot_cutoff_set()
 *
 * @ingroup Evas_3D_Light
 *
 *
 */
EOAPI Evas_Real  evas_3d_light_spot_cutoff_get(void);

/**
 *
 * Set the attenuation enable flag of the given light.
 *
 * By default, light attenuation is not enabled.
 *
 * @see evas_3d_light_attenuation_set()
 *
 * @ingroup Evas_3D_Light
 *
 * @param[in] enable Whether to enable attenuation (@c EINA_TRUE), or not (@c EINA_FALSE)..
 *
 */
EOAPI void  evas_3d_light_attenuation_enable_set(Eina_Bool enable);

/**
 *
 * Get the attenuation enable flag of the given light.
 *
 * @see evas_3d_light_attenuation_enable_set()
 *
 * @ingroup Evas_3D_Light
 *
 *
 */
EOAPI Eina_Bool  evas_3d_light_attenuation_enable_get(void);

/**
 *
 * Set the ambient color of the given light.
 *
 * Default ambient color is (0.0, 0.0, 0.0, 1.0).
 *
 * @ingroup Evas_3D_Light
 *
 * @param[in] r Red component of the ambient color between [0.0, 1.0].
 * @param[in] g Green component of the ambient color between [0.0, 1.0].
 * @param[in] b Blue component of the ambient color between [0.0, 1.0].
 * @param[in] a Alpha component of the ambient color between [0.0, 1.0].
 *
 */
EOAPI void  evas_3d_light_ambient_set(Evas_Real r, Evas_Real g, Evas_Real b, Evas_Real a);

/**
 *
 * Get the ambient color of the given light.
 *
 * @see evas_3d_light_ambient_set()
 *
 * @ingroup Evas_3D_Light
 *
 * @param[out] r Red component of the ambient color between [0.0, 1.0].
 * @param[out] g Green component of the ambient color between [0.0, 1.0].
 * @param[out] b Blue component of the ambient color between [0.0, 1.0].
 * @param[out] a Alpha component of the ambient color between [0.0, 1.0].
 *
 */
EOAPI void  evas_3d_light_ambient_get(Evas_Real *r, Evas_Real *g, Evas_Real *b, Evas_Real *a);

/**
 *
 * Set the diffuse color of the given light.
 *
 * Default diffuse color is (1.0, 1.0, 1.0, 1.0).
 *
 * @ingroup Evas_3D_Light
 *
 * @param[in] r Red component of the diffuse color between [0.0, 1.0].
 * @param[in] g Green component of the diffuse color between [0.0, 1.0].
 * @param[in] b Blue component of the diffuse color between [0.0, 1.0].
 * @param[in] a Alpha component of the diffuse color between [0.0, 1.0].
 *
 */
EOAPI void  evas_3d_light_diffuse_set(Evas_Real r, Evas_Real g, Evas_Real b, Evas_Real a);

/**
 *
 * Get the diffuse color of the given light.
 *
 * @see evas_3d_light_diffuse_set()
 *
 * @ingroup Evas_3D_Light
 *
 * @param[out] r Red component of the diffuse color between [0.0, 1.0].
 * @param[out] g Green component of the diffuse color between [0.0, 1.0].
 * @param[out] b Blue component of the diffuse color between [0.0, 1.0].
 * @param[out] a Alpha component of the diffuse color between [0.0, 1.0].
 *
 */
EOAPI void  evas_3d_light_diffuse_get(Evas_Real *r, Evas_Real *g, Evas_Real *b, Evas_Real *a);

/**
 *
 * Set the specular color of the given light.
 *
 * Default specular color is (1.0, 1.0, 1.0, 1.0).
 *
 * @ingroup Evas_3D_Light
 *
 * @param[in] r Red component of the specular color between [0.0, 1.0].
 * @param[in] g Green component of the specular color between [0.0, 1.0].
 * @param[in] b Blue component of the specular color between [0.0, 1.0].
 * @param[in] a Alpha component of the specular color between [0.0, 1.0].
 *
 */
EOAPI void  evas_3d_light_specular_set(Evas_Real r, Evas_Real g, Evas_Real b, Evas_Real a);

/**
 *
 * Get the specular color of the given light.
 *
 * @see evas_3d_light_specular_set()
 *
 * @ingroup Evas_3D_Light
 *
 * @param[out] r Red component of the specular color between [0.0, 1.0].
 * @param[out] g Green component of the specular color between [0.0, 1.0].
 * @param[out] b Blue component of the specular color between [0.0, 1.0].
 * @param[out] a Alpha component of the specular color between [0.0, 1.0].
 *
 */
EOAPI void  evas_3d_light_specular_get(Evas_Real *r, Evas_Real *g, Evas_Real *b, Evas_Real *a);

/**
 *
 * Set the attenuation of the given light.
 *
 * Light attenuation has no effect with directional light. And the attenuation
 * should be enabled first to take effect. The attenuation factor is calculated
 * as follows.
 *
 * atten = 1.0 / constant + linear * distance + quadratic * distance * distance
 *
 * Default attenuation is constant = 1.0, linear = 0.0, quadratic = 0.0.
 *
 * @see evas_3d_light_attenuation_enable_set()
 *
 * @ingroup Evas_3D_Light
 *
 * @param[in] constant Constant attenuation term..
 * @param[in] linear Linear attenuation term..
 * @param[in] quadratic Quadratic attenuation term..
 *
 */
EOAPI void  evas_3d_light_attenuation_set(Evas_Real constant, Evas_Real linear, Evas_Real quadratic);

/**
 *
 * Get the attenuation of the given light.
 *
 * @see evas_3d_light_attenuation_set()
 *
 * @ingroup Evas_3D_Light
 *
 * @param[out] constant Constant attenuation term..
 * @param[out] linear Linear attenuation term..
 * @param[out] quadratic Quadratic attenuation term..
 *
 */
EOAPI void  evas_3d_light_attenuation_get(Evas_Real *constant, Evas_Real *linear, Evas_Real *quadratic);


#endif
