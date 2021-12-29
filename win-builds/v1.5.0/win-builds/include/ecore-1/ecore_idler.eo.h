#ifndef _ECORE_IDLER_EO_H_
#define _ECORE_IDLER_EO_H_

#ifndef _ECORE_IDLER_EO_TYPES
#define _ECORE_IDLER_EO_TYPES


#endif
#define ECORE_IDLER_CLASS ecore_idler_class_get()

const Eo_Class *ecore_idler_class_get(void) EINA_CONST;

/**
 *
 * No description supplied.
 *
 * @param[in] func No description supplied.
 * @param[in] data No description supplied.
 *
 */
EOAPI void  ecore_idler_constructor(Ecore_Task_Cb func, const void *data);


#endif
