#ifndef _ELM_INTERFACE_ATSPI_TEXT_EO_H_
#define _ELM_INTERFACE_ATSPI_TEXT_EO_H_

#ifndef _ELM_INTERFACE_ATSPI_TEXT_EO_TYPES
#define _ELM_INTERFACE_ATSPI_TEXT_EO_TYPES


#endif
#define ELM_INTERFACE_ATSPI_TEXT_INTERFACE elm_interface_atspi_text_interface_get()

const Eo_Class *elm_interface_atspi_text_interface_get(void) EINA_CONST;

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 *
 * Gets single character present in accessible widget's text
 * at given offset.
 *
 * @param[in] offset Position in text.
 *
 */
EOAPI Eina_Unicode  elm_interface_atspi_text_character_get(int offset);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 *
 * Gets string, start and end offset in text according to
 * given initial offset and granulatity.
 *
 * @param[in] granularity No description supplied.
 * @param[in] start_offset Offset indicating start of string
according to given granularity.
-1 in case of error.
 * @param[in] end_offset Offset indicating end of string according
to given granularity. -1 in case of error.
 *
 */
EOAPI char * elm_interface_atspi_text_string_get(Elm_Atspi_Text_Granularity granularity, int * start_offset, int * end_offset);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 *
 * Gets text of accessible widget.
 *
 * @param[in] start_offset Position in text.
 * @param[in] end_offset End offset of text.
 *
 */
EOAPI char * elm_interface_atspi_text_get(int start_offset, int end_offset);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 *
 * No description supplied.
 *
 * @param[in] offset No description supplied.
 *
 */
EOAPI Eina_Bool  elm_interface_atspi_text_caret_offset_set(int offset);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 *
 * Gets offset position of caret (cursor)
 *
 *
 */
EOAPI int  elm_interface_atspi_text_caret_offset_get(void);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 *
 * Indicate if a text attribute with a given name is set
 *
 * @param[in] name text attribute name
 * @param[in] start_offset Position in text from which
given attribute is set.
 * @param[in] end_offset Position in text to which given attribute
is set.
 * @param[out] value No description supplied.
 *
 */
EOAPI Eina_Bool  elm_interface_atspi_text_attribute_get(const char * name, int * start_offset, int * end_offset, char **value);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 *
 * No description supplied.
 *
 * @param[in] start_offset No description supplied.
 * @param[in] end_offset No description supplied.
 *
 */
EOAPI Eina_List * elm_interface_atspi_text_attributes_get(int * start_offset, int * end_offset);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 *
 * No description supplied.
 *
 *
 */
EOAPI Eina_List * elm_interface_atspi_text_default_attributes_get(void);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 *
 * No description supplied.
 *
 * @param[in] offset No description supplied.
 * @param[in] screen_coords No description supplied.
 * @param[out] rect No description supplied.
 *
 */
EOAPI Eina_Bool  elm_interface_atspi_text_character_extents_get(int offset, Eina_Bool screen_coords, Eina_Rectangle *rect);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 *
 * No description supplied.
 *
 *
 */
EOAPI int  elm_interface_atspi_text_character_count_get(void);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 *
 * No description supplied.
 *
 * @param[in] screen_coords No description supplied.
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 *
 */
EOAPI int  elm_interface_atspi_text_offset_at_point_get(Eina_Bool screen_coords, int x, int y);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 *
 * No description supplied.
 *
 * @param[in] screen_coords No description supplied.
 * @param[in] rect No description supplied.
 * @param[in] xclip No description supplied.
 * @param[in] yclip No description supplied.
 *
 */
EOAPI Eina_List * elm_interface_atspi_text_bounded_ranges_get(Eina_Bool screen_coords, Eina_Rectangle rect, Elm_Atspi_Text_Clip_Type xclip, Elm_Atspi_Text_Clip_Type yclip);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 *
 * No description supplied.
 *
 * @param[in] screen_coords If true x and y values will be relative
to screen origin, otherwise relative to
canvas
 * @param[in] start_offset No description supplied.
 * @param[in] end_offset No description supplied.
 * @param[out] rect No description supplied.
 *
 */
EOAPI Eina_Bool  elm_interface_atspi_text_range_extents_get(Eina_Bool screen_coords, int start_offset, int end_offset, Eina_Rectangle *rect);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 *
 * No description supplied.
 *
 *
 */
EOAPI int  elm_interface_atspi_text_selections_count_get(void);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 *
 * No description supplied.
 *
 * @param[in] selection_number No description supplied.
 * @param[in] start_offset No description supplied.
 * @param[in] end_offset No description supplied.
 *
 */
EOAPI Eina_Bool  elm_interface_atspi_text_selection_set(int selection_number, int start_offset, int end_offset);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 *
 * No description supplied.
 *
 * @param[in] selection_number No description supplied.
 * @param[out] start_offset No description supplied.
 * @param[out] end_offset No description supplied.
 *
 */
EOAPI void  elm_interface_atspi_text_selection_get(int selection_number, int *start_offset, int *end_offset);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 *
 * No description supplied.
 *
 * @param[in] start_offset No description supplied.
 * @param[in] end_offset No description supplied.
 *
 */
EOAPI Eina_Bool  elm_interface_atspi_text_selection_add(int start_offset, int end_offset);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 *
 * No description supplied.
 *
 * @param[in] selection_number No description supplied.
 *
 */
EOAPI Eina_Bool  elm_interface_atspi_text_selection_remove(int selection_number);
#endif

EOAPI extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_BOUNDS_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_ATTRIBUTES_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_CARET_MOVED;
EOAPI extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_INSERTED;
EOAPI extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_REMOVED;
EOAPI extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_SELECTION_CHANGED;

/**
 * No description
 */
#define ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_BOUNDS_CHANGED (&(_ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_BOUNDS_CHANGED))

/**
 * No description
 */
#define ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_ATTRIBUTES_CHANGED (&(_ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_ATTRIBUTES_CHANGED))

/**
 * No description
 */
#define ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_CARET_MOVED (&(_ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_CARET_MOVED))

/**
 * No description
 */
#define ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_INSERTED (&(_ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_INSERTED))

/**
 * No description
 */
#define ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_REMOVED (&(_ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_REMOVED))

/**
 * No description
 */
#define ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_SELECTION_CHANGED (&(_ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_SELECTION_CHANGED))

#endif
