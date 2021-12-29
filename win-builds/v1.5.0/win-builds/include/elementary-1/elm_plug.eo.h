#ifndef _ELM_PLUG_EO_H_
#define _ELM_PLUG_EO_H_

#ifndef _ELM_PLUG_EO_TYPES
#define _ELM_PLUG_EO_TYPES


#endif
#define ELM_PLUG_CLASS elm_plug_class_get()

const Eo_Class *elm_plug_class_get(void) EINA_CONST;

/**
 *
 * Get the basic Evas_Image object from this object (widget).
 *
 * @return The inlined image object, or NULL if none exists
 *
 * This function allows one to get the underlying @c Evas_Object of type
 * Image from this elementary widget. It can be useful to do things like get
 * the pixel data, save the image to a file, etc.
 *
 * @note Be careful to not manipulate it, as it is under control of
 * elementary.
 *
 * @ingroup Plug
 *
 *
 */
EOAPI Evas_Object * elm_obj_plug_image_object_get(void);

/**
 *
 * Connect a plug widget to service provided by socket image.
 *
 * @return (@c EINA_TRUE = success, @c EINA_FALSE = error)
 *
 * @ingroup Plug
 *
 * @param[in] svcname The service name to connect to set up by the socket.
 * @param[in] svcnum The service number to connect to (set up by socket).
 * @param[in] svcsys Boolean to set if the service is a system one or not (set up by socket).
 *
 */
EOAPI Eina_Bool  elm_obj_plug_connect(const char *svcname, int svcnum, Eina_Bool svcsys);

EOAPI extern const Eo_Event_Description _ELM_PLUG_EVENT_CLICKED;
EOAPI extern const Eo_Event_Description _ELM_PLUG_EVENT_IMAGE_DELETED;
EOAPI extern const Eo_Event_Description _ELM_PLUG_EVENT_IMAGE_RESIZED;

/**
 * No description
 */
#define ELM_PLUG_EVENT_CLICKED (&(_ELM_PLUG_EVENT_CLICKED))

/**
 * No description
 */
#define ELM_PLUG_EVENT_IMAGE_DELETED (&(_ELM_PLUG_EVENT_IMAGE_DELETED))

/**
 * ii
 */
#define ELM_PLUG_EVENT_IMAGE_RESIZED (&(_ELM_PLUG_EVENT_IMAGE_RESIZED))

#endif
