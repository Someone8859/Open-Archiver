#ifndef _EVAS_3D_TEXTURE_EO_H_
#define _EVAS_3D_TEXTURE_EO_H_

#ifndef _EVAS_3D_TEXTURE_EO_TYPES
#define _EVAS_3D_TEXTURE_EO_TYPES


#endif
#define EVAS_3D_TEXTURE_CLASS evas_3d_texture_class_get()

const Eo_Class *evas_3d_texture_class_get(void) EINA_CONST;

/**
 *
 * No description supplied.
 *
 * @param[in] visible @c EINA_TRUE for visible, @c EINA_FALSE for invisible.
 *
 */
EOAPI void  evas_3d_texture_source_visible_set(Eina_Bool visible);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI Eina_Bool  evas_3d_texture_source_visible_get(void);

/**
 *
 * No description supplied.
 *
 * @param[in] color_format Color format of the texture.
 * @param[in] pixel_format Pixel format of the data.
 * @param[in] w Width of the data.
 * @param[in] h Height of the data.
 * @param[in] data Pointer to the data.
 *
 */
EOAPI void  evas_3d_texture_data_set(Evas_3D_Color_Format color_format, Evas_3D_Pixel_Format pixel_format, int w, int h, const void *data);

/**
 *
 * No description supplied.
 *
 * @param[in] file Path to the image file.
 * @param[in] key Key in the image file.
 *
 */
EOAPI void  evas_3d_texture_file_set(const char *file, const char *key);

/**
 *
 * No description supplied.
 *
 * @param[in] source Source evas object to be used as the texture data.
 *
 */
EOAPI void  evas_3d_texture_source_set(Evas_Object *source);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI Evas_3D_Color_Format  evas_3d_texture_color_format_get(void);

/**
 *
 * No description supplied.
 *
 * @param[out] w Pointer to receive the width of the texture size.
 * @param[out] h Pointer to receive the height of the texture size.
 *
 */
EOAPI void  evas_3d_texture_size_get(int *w, int *h);

/**
 *
 * No description supplied.
 *
 * @param[in] s Wrap mode for S-axis.
 * @param[in] t Wrap mode for T-axis.
 *
 */
EOAPI void  evas_3d_texture_wrap_set(Evas_3D_Wrap_Mode s, Evas_3D_Wrap_Mode t);

/**
 *
 * No description supplied.
 *
 * @param[out] s Pointer to receive S-axis wrap mode.
 * @param[out] t Pointer to receive T-axis wrap mode.
 *
 */
EOAPI void  evas_3d_texture_wrap_get(Evas_3D_Wrap_Mode *s, Evas_3D_Wrap_Mode *t);

/**
 *
 * No description supplied.
 *
 * @param[in] min Minification filter used when down-scaling.
 * @param[in] mag Magnification filter used when up-scaling.
 *
 */
EOAPI void  evas_3d_texture_filter_set(Evas_3D_Texture_Filter min, Evas_3D_Texture_Filter mag);

/**
 *
 * No description supplied.
 *
 * @param[out] min Pointer to receive the minification filter.
 * @param[out] mag Pointer to receive the magnification filter.
 *
 */
EOAPI void  evas_3d_texture_filter_get(Evas_3D_Texture_Filter *min, Evas_3D_Texture_Filter *mag);


#endif
