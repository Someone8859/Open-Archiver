#ifndef _ELM_ICON_EO_H_
#define _ELM_ICON_EO_H_

#ifndef _ELM_ICON_EO_TYPES
#define _ELM_ICON_EO_TYPES


#endif
#define ELM_ICON_CLASS elm_icon_class_get()

const Eo_Class *elm_icon_class_get(void) EINA_CONST;

/**
 *
 * Sets the icon lookup order used by elm_icon_standard_set().
 *
 * @see elm_icon_order_lookup_get()
 * @see Elm_Icon_Lookup_Order
 *
 * @ingroup Icon
 *
 * @param[in] order The icon lookup order (can be one of
ELM_ICON_LOOKUP_FDO_THEME, ELM_ICON_LOOKUP_THEME_FDO, ELM_ICON_LOOKUP_FDO
or ELM_ICON_LOOKUP_THEME)
 *
 */
EOAPI void  elm_obj_icon_order_lookup_set(Elm_Icon_Lookup_Order order);

/**
 *
 * Get the icon lookup order.
 *
 * @return The icon lookup order
 *
 * @see elm_icon_order_lookup_set()
 * @see Elm_Icon_Lookup_Order
 *
 * @ingroup Icon
 *
 *
 */
EOAPI Elm_Icon_Lookup_Order  elm_obj_icon_order_lookup_get(void);

/**
 *
 * Set the icon by icon standards names.
 *
 * @return (@c EINA_TRUE = success, @c EINA_FALSE = error)
 *
 * For example, freedesktop.org defines standard icon names such as "home",
 * "network", etc. There can be different icon sets to match those icon
 * keys. The @p name given as parameter is one of these "keys", and will be
 * used to look in the freedesktop.org paths and elementary theme. One can
 * change the lookup order with elm_icon_order_lookup_set().
 *
 * If name is not found in any of the expected locations and it is the
 * absolute path of an image file, this image will be used.
 *
 * @note The icon image set by this function can be changed by
 * elm_image_file_set().
 *
 * @note This function does not accept relative icon path.
 *
 * @see elm_icon_standard_get()
 * @see elm_image_file_set()
 *
 * @ingroup Icon
 *
 * @param[in] name The icon name
 *
 */
EOAPI Eina_Bool  elm_obj_icon_standard_set(const char *name);

/**
 *
 * Get the icon name set by icon standard names.
 *
 * @return The icon name
 *
 * If the icon image was set using elm_image_file_set() instead of
 * elm_icon_standard_set(), then this function will return @c NULL.
 *
 * @see elm_icon_standard_set()
 *
 * @ingroup Icon
 *
 *
 */
EOAPI const char * elm_obj_icon_standard_get(void);

/**
 *
 * Set the file that will be used, but use a generated thumbnail.
 *
 * This functions like elm_image_file_set() but requires the Ethumb library
 * support to be enabled successfully with elm_need_ethumb(). When set
 * the file indicated has a thumbnail generated and cached on disk for
 * future use or will directly use an existing cached thumbnail if it
 * is valid.
 *
 * @see elm_image_file_set()
 *
 * @ingroup Icon
 *
 * @param[in] file The path to file that will be used as icon image
 * @param[in] group The group that the icon belongs to an edje file
 *
 */
EOAPI void  elm_obj_icon_thumb_set(const char *file, const char *group);

EOAPI extern const Eo_Event_Description _ELM_ICON_EVENT_THUMB_DONE;
EOAPI extern const Eo_Event_Description _ELM_ICON_EVENT_THUMB_ERROR;

/**
 * No description
 */
#define ELM_ICON_EVENT_THUMB_DONE (&(_ELM_ICON_EVENT_THUMB_DONE))

/**
 * No description
 */
#define ELM_ICON_EVENT_THUMB_ERROR (&(_ELM_ICON_EVENT_THUMB_ERROR))

#endif
