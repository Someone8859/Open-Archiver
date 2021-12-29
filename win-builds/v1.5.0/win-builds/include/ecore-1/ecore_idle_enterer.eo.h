#ifndef _ECORE_IDLE_ENTERER_EO_H_
#define _ECORE_IDLE_ENTERER_EO_H_

#ifndef _ECORE_IDLE_ENTERER_EO_TYPES
#define _ECORE_IDLE_ENTERER_EO_TYPES


#endif
#define ECORE_IDLE_ENTERER_CLASS ecore_idle_enterer_class_get()

const Eo_Class *ecore_idle_enterer_class_get(void) EINA_CONST;

/**
 *
 * No description supplied.
 *
 * @param[in] func No description supplied.
 * @param[in] data No description supplied.
 *
 */
EOAPI void  ecore_idle_enterer_before_constructor(Ecore_Task_Cb func, const void *data);

/**
 *
 * No description supplied.
 *
 * @param[in] func No description supplied.
 * @param[in] data No description supplied.
 *
 */
EOAPI void  ecore_idle_enterer_after_constructor(Ecore_Task_Cb func, const void *data);


#endif
