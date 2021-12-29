#ifndef _ELM_PLUG_EO_LEGACY_H_
#define _ELM_PLUG_EO_LEGACY_H_


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
 */
EAPI Evas_Object *elm_plug_image_object_get(const Eo *obj);

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
 */
EAPI Eina_Bool elm_plug_connect(Eo *obj, const char *svcname, int svcnum, Eina_Bool svcsys);

#endif
