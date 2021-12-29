#ifndef _ELM_CONTAINER_EO_H_
#define _ELM_CONTAINER_EO_H_

#ifndef _ELM_CONTAINER_EO_TYPES
#define _ELM_CONTAINER_EO_TYPES


#endif
#define ELM_CONTAINER_CLASS elm_container_class_get()

const Eo_Class *elm_container_class_get(void) EINA_CONST;

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI Eina_List * elm_obj_container_content_swallow_list_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] name No description supplied.
 * @param[in] content No description supplied.
 *
 */
EOAPI Eina_Bool  elm_obj_container_content_set(const char *name, Evas_Object *content);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] name No description supplied.
 *
 */
EOAPI Evas_Object * elm_obj_container_content_get(const char *name);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] name No description supplied.
 *
 */
EOAPI Evas_Object * elm_obj_container_content_unset(const char *name);


#endif
