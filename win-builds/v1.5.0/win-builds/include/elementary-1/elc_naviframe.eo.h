#ifndef _ELC_NAVIFRAME_EO_H_
#define _ELC_NAVIFRAME_EO_H_

#ifndef _ELC_NAVIFRAME_EO_TYPES
#define _ELC_NAVIFRAME_EO_TYPES


#endif
#define ELM_NAVIFRAME_CLASS elm_naviframe_class_get()

const Eo_Class *elm_naviframe_class_get(void) EINA_CONST;

/**
 *
 * @brief Set the event enabled when pushing/popping items
 *
 * If @p enabled is @c EINA_TRUE, the contents of the naviframe item will
 * receives events from mouse and keyboard during view changing such as
 * item push/pop.
 *
 * @warning Events will be blocked by calling evas_object_freeze_events_set()
 * internally. So don't call the API whiling pushing/popping items.
 *
 * @see elm_naviframe_event_enabled_get()
 * @see evas_object_freeze_events_set()
 *
 * @ingroup Naviframe
 *
 * @param[in] enabled Events are received when enabled is @c EINA_TRUE, and
ignored otherwise.
 *
 */
EOAPI void  elm_obj_naviframe_event_enabled_set(Eina_Bool enabled);

/**
 *
 * @brief Get the value of event enabled status.
 *
 * @return @c EINA_TRUE, when event is enabled
 *
 * @see elm_naviframe_event_enabled_set()
 *
 * @ingroup Naviframe
 *
 *
 */
EOAPI Eina_Bool  elm_obj_naviframe_event_enabled_get(void);

/**
 *
 * @brief preserve the content objects when items are popped.
 *
 * @see also elm_naviframe_content_preserve_on_pop_get()
 *
 * @ingroup Naviframe
 *
 * @param[in] preserve Enable the preserve mode if @c EINA_TRUE, disable otherwise
 *
 */
EOAPI void  elm_obj_naviframe_content_preserve_on_pop_set(Eina_Bool preserve);

/**
 *
 * @brief Get a value whether preserve mode is enabled or not.
 *
 * @return If @c EINA_TRUE, preserve mode is enabled
 *
 * @see also elm_naviframe_content_preserve_on_pop_set()
 *
 * @ingroup Naviframe
 *
 *
 */
EOAPI Eina_Bool  elm_obj_naviframe_content_preserve_on_pop_get(void);

/**
 *
 * @brief Set creating prev button automatically or not
 *
 * @see also elm_naviframe_item_push()
 *
 * @ingroup Naviframe
 *
 * @param[in] auto_pushed If @c EINA_TRUE, the previous button(back button) will
be created internally when you pass the @c NULL to the prev_btn
parameter in elm_naviframe_item_push
 *
 */
EOAPI void  elm_obj_naviframe_prev_btn_auto_pushed_set(Eina_Bool auto_pushed);

/**
 *
 * @brief Get a value whether prev button(back button) will be auto pushed or
 * not.
 *
 * @return If @c EINA_TRUE, prev button will be auto pushed.
 *
 * @see also elm_naviframe_item_push()
 * elm_naviframe_prev_btn_auto_pushed_set()
 *
 * @ingroup Naviframe
 *
 *
 */
EOAPI Eina_Bool  elm_obj_naviframe_prev_btn_auto_pushed_get(void);

/**
 *
 * @brief Get a list of all the naviframe items.
 *
 * @return An Eina_List of naviframe items, #Elm_Object_Item,
 * or @c NULL on failure.
 * @note The returned list MUST be freed.
 *
 * @ingroup Naviframe
 *
 *
 */
EOAPI Eina_List * elm_obj_naviframe_items_get(void);

/**
 *
 * @brief Get a top item on the naviframe stack
 *
 * @return The top item on the naviframe stack or @c NULL, if the stack is
 * empty
 *
 * @ingroup Naviframe
 *
 *
 */
EOAPI Elm_Object_Item * elm_obj_naviframe_top_item_get(void);

/**
 *
 * @brief Get a bottom item on the naviframe stack
 *
 * @return The bottom item on the naviframe stack or @c NULL, if the stack is
 * empty
 *
 * @ingroup Naviframe
 *
 *
 */
EOAPI Elm_Object_Item * elm_obj_naviframe_bottom_item_get(void);

/**
 *
 * @brief Pop an item that is on top of the stack
 *
 * @return @c NULL or the content object(if the
 * elm_naviframe_content_preserve_on_pop_get is true).
 *
 * This pops an item that is on the top(visible) of the naviframe, makes it
 * disappear, then deletes the item. The item that was underneath it on the
 * stack will become visible.
 *
 * @see also elm_naviframe_content_preserve_on_pop_get()
 * @see also elm_naviframe_item_pop_cb_set()
 *
 * @ingroup Naviframe
 *
 *
 */
EOAPI Evas_Object * elm_obj_naviframe_item_pop(void);

/**
 *
 * @brief Insert a new item into the naviframe before item @p before.
 *
 * @return The created item or @c NULL upon failure.
 *
 * The item is inserted into the naviframe straight away without any
 * transition operations. This item will be deleted when it is popped.
 *
 * @see also elm_naviframe_item_style_set()
 * @see also elm_naviframe_item_push()
 * @see also elm_naviframe_item_insert_after()
 *
 * The following styles are available for this item:
 * @li @c "default"
 *
 * @ingroup Naviframe
 *
 * @param[in] before The naviframe item to insert before.
 * @param[in] title_label The label in the title area. The name of the title
label part is "elm.text.title"
 * @param[in] prev_btn The button to go to the previous item. If it is NULL,
then naviframe will create a back button automatically. The name of
the prev_btn part is "elm.swallow.prev_btn"
 * @param[in] next_btn The button to go to the next item. Or It could be just an
extra function button. The name of the next_btn part is
"elm.swallow.next_btn"
 * @param[in] content The main content object. The name of content part is
"elm.swallow.content"
 * @param[in] item_style The current item style name. @c NULL would be default.
 *
 */
EOAPI Elm_Object_Item * elm_obj_naviframe_item_insert_before(Elm_Object_Item *before, const char *title_label, Evas_Object *prev_btn, Evas_Object *next_btn, Evas_Object *content, const char *item_style);

/**
 *
 * @brief Push a new item to the top of the naviframe stack (and show it).
 *
 * @return The created item or @c NULL upon failure.
 *
 * The item pushed becomes one page of the naviframe, this item will be
 * deleted when it is popped.
 *
 * @see also elm_naviframe_item_style_set()
 * @see also elm_naviframe_item_insert_before()
 * @see also elm_naviframe_item_insert_after()
 *
 * The following styles are available for this item:
 * @li @c "default"
 *
 * @ingroup Naviframe
 *
 * @param[in] title_label The label in the title area. The name of the title
label part is "elm.text.title"
 * @param[in] prev_btn The button to go to the previous item. If it is NULL,
then naviframe will create a back button automatically. The name of
the prev_btn part is "elm.swallow.prev_btn"
 * @param[in] next_btn The button to go to the next item. Or It could be just an
extra function button. The name of the next_btn part is
"elm.swallow.next_btn"
 * @param[in] content The main content object. The name of content part is
"elm.swallow.content"
 * @param[in] item_style The current item style name. @c NULL would be default.
 *
 */
EOAPI Elm_Object_Item * elm_obj_naviframe_item_push(const char *title_label, Evas_Object *prev_btn, Evas_Object *next_btn, Evas_Object *content, const char *item_style);

/**
 *
 * @brief Simple version of item_promote.
 *
 * @see elm_naviframe_item_promote
 *
 * @param[in] content No description supplied.
 *
 */
EOAPI void  elm_obj_naviframe_item_simple_promote(Evas_Object *content);

/**
 *
 * @brief Insert a new item into the naviframe after item @p after.
 *
 * @return The created item or @c NULL upon failure.
 *
 * The item is inserted into the naviframe straight away without any
 * transition operations. This item will be deleted when it is popped.
 *
 * @see also elm_naviframe_item_style_set()
 * @see also elm_naviframe_item_push()
 * @see also elm_naviframe_item_insert_before()
 *
 * The following styles are available for this item:
 * @li @c "default"
 *
 * @ingroup Naviframe
 *
 * @param[in] after The naviframe item to insert after.
 * @param[in] title_label The label in the title area. The name of the title
label part is "elm.text.title"
 * @param[in] prev_btn The button to go to the previous item. If it is NULL,
then naviframe will create a back button automatically. The name of
the prev_btn part is "elm.swallow.prev_btn"
 * @param[in] next_btn The button to go to the next item. Or It could be just an
extra function button. The name of the next_btn part is
"elm.swallow.next_btn"
 * @param[in] content The main content object. The name of content part is
"elm.swallow.content"
 * @param[in] item_style The current item style name. @c NULL would be default.
 *
 */
EOAPI Elm_Object_Item * elm_obj_naviframe_item_insert_after(Elm_Object_Item *after, const char *title_label, Evas_Object *prev_btn, Evas_Object *next_btn, Evas_Object *content, const char *item_style);

EOAPI extern const Eo_Event_Description _ELM_NAVIFRAME_EVENT_TRANSITION_FINISHED;
EOAPI extern const Eo_Event_Description _ELM_NAVIFRAME_EVENT_TITLE_TRANSITION_FINISHED;
EOAPI extern const Eo_Event_Description _ELM_NAVIFRAME_EVENT_TITLE_CLICKED;
EOAPI extern const Eo_Event_Description _ELM_NAVIFRAME_EVENT_LANGUAGE_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_NAVIFRAME_EVENT_ACCESS_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_NAVIFRAME_EVENT_FOCUSED;
EOAPI extern const Eo_Event_Description _ELM_NAVIFRAME_EVENT_UNFOCUSED;

/**
 * No description
 */
#define ELM_NAVIFRAME_EVENT_TRANSITION_FINISHED (&(_ELM_NAVIFRAME_EVENT_TRANSITION_FINISHED))

/**
 * No description
 */
#define ELM_NAVIFRAME_EVENT_TITLE_TRANSITION_FINISHED (&(_ELM_NAVIFRAME_EVENT_TITLE_TRANSITION_FINISHED))

/**
 * No description
 */
#define ELM_NAVIFRAME_EVENT_TITLE_CLICKED (&(_ELM_NAVIFRAME_EVENT_TITLE_CLICKED))

/**
 * No description
 */
#define ELM_NAVIFRAME_EVENT_LANGUAGE_CHANGED (&(_ELM_NAVIFRAME_EVENT_LANGUAGE_CHANGED))

/**
 * No description
 */
#define ELM_NAVIFRAME_EVENT_ACCESS_CHANGED (&(_ELM_NAVIFRAME_EVENT_ACCESS_CHANGED))

/**
 * No description
 */
#define ELM_NAVIFRAME_EVENT_FOCUSED (&(_ELM_NAVIFRAME_EVENT_FOCUSED))

/**
 * No description
 */
#define ELM_NAVIFRAME_EVENT_UNFOCUSED (&(_ELM_NAVIFRAME_EVENT_UNFOCUSED))

#endif
