#ifndef _EVAS_3D_MATERIAL_EO_H_
#define _EVAS_3D_MATERIAL_EO_H_

#ifndef _EVAS_3D_MATERIAL_EO_TYPES
#define _EVAS_3D_MATERIAL_EO_TYPES


#endif
#define EVAS_3D_MATERIAL_CLASS evas_3d_material_class_get()

const Eo_Class *evas_3d_material_class_get(void) EINA_CONST;

/**
 *
 * No description supplied.
 *
 * @param[in] attrib Material attribute ID.
 * @param[in] enable Whether to enable the attribute (@c EINA_TRUE), or not (@c EINA_FALSE).
 *
 */
EOAPI void  evas_3d_material_enable_set(Evas_3D_Material_Attrib attrib, Eina_Bool enable);

/**
 *
 * No description supplied.
 *
 * @param[in] attrib Material attribute ID.
 *
 */
EOAPI Eina_Bool  evas_3d_material_enable_get(Evas_3D_Material_Attrib attrib);

/**
 *
 * No description supplied.
 *
 * @param[in] shininess Shininess value.
 *
 */
EOAPI void  evas_3d_material_shininess_set(Evas_Real shininess);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI Evas_Real  evas_3d_material_shininess_get(void);

/**
 *
 * Set the texture of the given material.
 *
 * You have to enable the desired attribute first.
 *
 * @see evas_3d_material_enable_set()
 *
 * @ingroup Evas_3D_Material
 *
 * @param[in] attrib Material attribute ID.
 * @param[in] texture No description supplied.
 *
 */
EOAPI void  evas_3d_material_texture_set(Evas_3D_Material_Attrib attrib, Evas_3D_Texture *texture);

/**
 *
 * No description supplied.
 *
 * @param[in] attrib Material attribute ID.
 *
 */
EOAPI Evas_3D_Texture * evas_3d_material_texture_get(Evas_3D_Material_Attrib attrib);

/**
 *
 * No description supplied.
 *
 * @param[in] attrib Material attribute ID.
 * @param[in] r Red component of the color.
 * @param[in] g Green component of the color.
 * @param[in] b Blue component of the color.
 * @param[in] a Alpha component of the color.
 *
 */
EOAPI void  evas_3d_material_color_set(Evas_3D_Material_Attrib attrib, Evas_Real r, Evas_Real g, Evas_Real b, Evas_Real a);

/**
 *
 * No description supplied.
 *
 * @param[in] attrib Material attribute ID.
 * @param[out] r Pointer to receive red component of the color.
 * @param[out] g Pointer to receive green component of the color.
 * @param[out] b Pointer to receive blue component of the color.
 * @param[out] a Pointer to receive alpha component of the color.
 *
 */
EOAPI void  evas_3d_material_color_get(Evas_3D_Material_Attrib attrib, Evas_Real *r, Evas_Real *g, Evas_Real *b, Evas_Real *a);


#endif
