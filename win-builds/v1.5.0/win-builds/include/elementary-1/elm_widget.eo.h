#ifndef _ELM_WIDGET_EO_H_
#define _ELM_WIDGET_EO_H_

#ifndef _ELM_WIDGET_EO_TYPES
#define _ELM_WIDGET_EO_TYPES


#endif
#define ELM_WIDGET_CLASS elm_widget_class_get()

const Eo_Class *elm_widget_class_get(void) EINA_CONST;

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] focus No description supplied.
 *
 */
EOAPI void  elm_obj_widget_focus_set(Eina_Bool focus);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI Eina_Bool  elm_obj_widget_focus_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] lock No description supplied.
 *
 */
EOAPI void  elm_obj_widget_drag_lock_y_set(Eina_Bool lock);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI Eina_Bool  elm_obj_widget_drag_lock_y_get(void);

/**
 *
 * This function set the widget focus highlight style.
 *
 * @param[in] style No description supplied.
 *
 */
EOAPI Eina_Bool  elm_obj_widget_focus_highlight_style_set(const char *style);

/**
 *
 * This function returns the widget focus highlight style.
 *
 *
 */
EOAPI const char * elm_obj_widget_focus_highlight_style_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] tree_unfocusable No description supplied.
 *
 */
EOAPI void  elm_obj_widget_tree_unfocusable_set(Eina_Bool tree_unfocusable);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI Eina_Bool  elm_obj_widget_tree_unfocusable_get(void);

/**
 *
 * Sets the widget's mirrored mode.
 *
 * @param[in] mirrored No description supplied.
 *
 */
EOAPI void  elm_obj_widget_mirrored_set(Eina_Bool mirrored);

/**
 *
 * Returns the widget's mirrored mode.
 *
 *
 */
EOAPI Eina_Bool  elm_obj_widget_mirrored_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] th No description supplied.
 *
 */
EOAPI void  elm_obj_widget_theme_set(Elm_Theme *th);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI Elm_Theme * elm_obj_widget_theme_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] disabled No description supplied.
 *
 */
EOAPI void  elm_obj_widget_disabled_set(Eina_Bool disabled);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI Eina_Bool  elm_obj_widget_disabled_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] ignore No description supplied.
 *
 */
EOAPI void  elm_obj_widget_highlight_ignore_set(Eina_Bool ignore);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI Eina_Bool  elm_obj_widget_highlight_ignore_get(void);

/**
 *
 * Sets the widget's mirrored mode setting.
 *
 * @param[in] automatic No description supplied.
 *
 */
EOAPI void  elm_obj_widget_mirrored_automatic_set(Eina_Bool automatic);

/**
 *
 * Returns the widget's mirrored mode setting.
 *
 *
 */
EOAPI Eina_Bool  elm_obj_widget_mirrored_automatic_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] disabled No description supplied.
 *
 */
EOAPI void  elm_obj_widget_orientation_mode_disabled_set(Eina_Bool disabled);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI Eina_Bool  elm_obj_widget_orientation_mode_disabled_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] style No description supplied.
 *
 */
EOAPI Eina_Bool  elm_obj_widget_style_set(const char *style);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI const char * elm_obj_widget_style_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] scale No description supplied.
 *
 */
EOAPI void  elm_obj_widget_scale_set(double scale);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI double  elm_obj_widget_scale_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] objs No description supplied.
 *
 */
EOAPI void  elm_obj_widget_focus_custom_chain_set(Eina_List *objs);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI const Eina_List * elm_obj_widget_focus_custom_chain_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] can_focus No description supplied.
 *
 */
EOAPI void  elm_obj_widget_can_focus_set(Eina_Bool can_focus);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI Eina_Bool  elm_obj_widget_can_focus_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] highlight No description supplied.
 *
 */
EOAPI void  elm_obj_widget_highlight_in_theme_set(Eina_Bool highlight);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI Eina_Bool  elm_obj_widget_highlight_in_theme_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] parent No description supplied.
 *
 */
EOAPI void  elm_obj_widget_parent_set(Evas_Object *parent);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI Evas_Object * elm_obj_widget_parent_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] txt No description supplied.
 *
 */
EOAPI void  elm_obj_widget_access_info_set(const char *txt);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI const char * elm_obj_widget_access_info_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] lock No description supplied.
 *
 */
EOAPI void  elm_obj_widget_drag_lock_x_set(Eina_Bool lock);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI Eina_Bool  elm_obj_widget_drag_lock_x_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] highlight highlight
 *
 */
EOAPI void  elm_obj_widget_access_highlight_in_theme_set(Eina_Bool highlight);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI Eina_Bool  elm_obj_widget_access_highlight_in_theme_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] highlighted No description supplied.
 *
 */
EOAPI void  elm_obj_widget_parent_highlight_set(Eina_Bool highlighted);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] edj No description supplied.
 * @param[in] wname No description supplied.
 * @param[in] welement No description supplied.
 * @param[in] wstyle No description supplied.
 *
 */
EOAPI Eina_Bool  elm_obj_widget_theme_object_set(Evas_Object *edj, const char *wname, const char *welement, const char *wstyle);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] sobj No description supplied.
 *
 */
EOAPI void  elm_obj_widget_hover_object_set(Evas_Object *sobj);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] dispmode No description supplied.
 *
 */
EOAPI void  elm_obj_widget_display_mode_set(Evas_Display_Mode dispmode);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] func No description supplied.
 * @param[in] data No description supplied.
 *
 */
EOAPI void  elm_obj_widget_on_show_region_hook_set(region_hook_func_type func, void *data);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] part No description supplied.
 * @param[in] domain No description supplied.
 * @param[in] translatable No description supplied.
 *
 */
EOAPI void  elm_obj_widget_domain_part_text_translatable_set(const char *part, const char *domain, Eina_Bool translatable);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] rotation No description supplied.
 *
 */
EOAPI void  elm_obj_widget_orientation_set(int rotation);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] sobj No description supplied.
 * @param[in] sub_obj No description supplied.
 *
 */
EOAPI void  elm_obj_widget_resize_object_set(Evas_Object *sobj, Eina_Bool sub_obj);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] part No description supplied.
 * @param[in] domain No description supplied.
 * @param[in] label No description supplied.
 *
 */
EOAPI void  elm_obj_widget_domain_translatable_part_text_set(const char *part, const char *domain, const char *label);

/**
 *
 * Function to operate on a given widget's scrollabe children when necessary.
 * @warning free the returned list with eina_list_free().
 *
 *
 */
EOAPI Eina_List * elm_obj_widget_scrollable_children_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI int  elm_obj_widget_scroll_hold_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI int  elm_obj_widget_drag_child_locked_y_get(void);

/**
 *
 * Set enable or disable item loop feature.
 *
 * @param[in] enable No description supplied.
 *
 */
EOAPI void  elm_obj_widget_item_loop_enabled_set(Eina_Bool enable);

/**
 *
 * Get the value whether item loop feature is enabled or not.
 *
 *
 */
EOAPI Eina_Bool  elm_obj_widget_item_loop_enabled_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI Eina_Bool  elm_obj_widget_child_can_focus_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI int  elm_obj_widget_scroll_freeze_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[out] x No description supplied.
 * @param[out] y No description supplied.
 * @param[out] w No description supplied.
 * @param[out] h No description supplied.
 *
 */
EOAPI Eina_Bool  elm_obj_widget_focus_region_get(Evas_Coord *x, Evas_Coord *y, Evas_Coord *w, Evas_Coord *h);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI Evas_Object * elm_obj_widget_top_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI unsigned int  elm_obj_widget_focus_order_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI int  elm_obj_widget_drag_child_locked_x_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI Eina_List * elm_obj_widget_can_focus_child_list_get(void);

/**
 *
 * Get the focused widget item.
 *
 *
 */
EOAPI Elm_Object_Item * elm_obj_widget_focused_item_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[out] horiz No description supplied.
 * @param[out] vert No description supplied.
 *
 */
EOAPI void  elm_obj_widget_parents_bounce_get(Eina_Bool *horiz, Eina_Bool *vert);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI Evas_Object * elm_obj_widget_parent_widget_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI Eina_Bool  elm_obj_widget_highlight_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI Evas_Object * elm_obj_widget_focused_object_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] parent No description supplied.
 *
 */
EOAPI void  elm_obj_widget_parent2_set(Evas_Object *parent);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI Evas_Object * elm_obj_widget_parent2_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] part No description supplied.
 * @param[in] label No description supplied.
 *
 */
EOAPI void  elm_obj_widget_part_text_set(const char * part, const char *label);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] part No description supplied.
 *
 */
EOAPI const char * elm_obj_widget_part_text_get(const char * part);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[out] newest_focus_order No description supplied.
 * @param[in] can_focus_only No description supplied.
 *
 */
EOAPI Evas_Object * elm_obj_widget_newest_focus_order_get(unsigned int *newest_focus_order, Eina_Bool can_focus_only);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI void  elm_obj_widget_scroll_hold_push(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] cur No description supplied.
 *
 */
EOAPI void  elm_obj_widget_cursor_add(Elm_Cursor *cur);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] next No description supplied.
 * @param[in] dir No description supplied.
 *
 */
EOAPI void  elm_obj_widget_focus_next_object_set(Evas_Object *next, Elm_Focus_Direction dir);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] dir No description supplied.
 *
 */
EOAPI Evas_Object * elm_obj_widget_focus_next_object_get(Elm_Focus_Direction dir);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI void  elm_obj_widget_focus_tree_unfocusable_handle(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] child No description supplied.
 * @param[in] relative_child No description supplied.
 *
 */
EOAPI void  elm_obj_widget_focus_custom_chain_prepend(Evas_Object *child, Evas_Object *relative_child);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] part No description supplied.
 * @param[in] text No description supplied.
 *
 */
EOAPI const char * elm_obj_widget_part_text_translate(const char *part, const char *text);

/**
 *
 * Get the focus highlight geometry of widget.
 *
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 * @param[in] w No description supplied.
 * @param[in] h No description supplied.
 *
 */
EOAPI void  elm_obj_widget_focus_highlight_geometry_get(Evas_Coord *x, Evas_Coord *y, Evas_Coord *w, Evas_Coord *h);

/**
 *
 * 'Virtual' function to activate widget.
 *
 * @param[in] act No description supplied.
 *
 */
EOAPI Eina_Bool  elm_obj_widget_activate(Elm_Activate act);

/**
 *
 * 'Virtual' function handling sub objects being added.
 *
 * @param[in] sobj No description supplied.
 *
 */
EOAPI Eina_Bool  elm_obj_widget_sub_object_add(Evas_Object *sobj);

/**
 *
 * 'Virtual' function which checks if handling of passing focus to sub-objects in given direction is supported by widget.
 *
 *
 */
EOAPI Eina_Bool  elm_obj_widget_focus_direction_manager_is(void);

/**
 *
 * 'Virtual' function handling input events on the widget.
 *
 * @param[in] source No description supplied.
 * @param[in] type No description supplied.
 * @param[in] event_info No description supplied.
 *
 */
EOAPI Eina_Bool  elm_obj_widget_event(Evas_Object *source, Evas_Callback_Type type, void *event_info);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] func No description supplied.
 * @param[in] data No description supplied.
 *
 */
EOAPI void  elm_obj_widget_event_callback_add(Elm_Event_Cb func, const void *data);

/**
 *
 * 'Virtual' function on the widget being set access.
 *
 * @param[in] acs No description supplied.
 *
 */
EOAPI void  elm_obj_widget_access(Eina_Bool acs);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] cur No description supplied.
 *
 */
EOAPI void  elm_obj_widget_cursor_del(Elm_Cursor *cur);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] func No description supplied.
 * @param[in] data No description supplied.
 *
 */
EOAPI void * elm_obj_widget_event_callback_del(Elm_Event_Cb func, const void *data);

/**
 *
 * 'Virtual' function handling focus in/out events on the widget.
 * return EINA_TRUE if this widget can handle focus, EINA_FALSE otherwise
 *
 *
 */
EOAPI Eina_Bool  elm_obj_widget_on_focus(void);

/**
 *
 * 'Virtual' function returning an inner area of a widget that should be brought into the visible area of a broader viewport, may this context arise.
 *
 * @param[out] x No description supplied.
 * @param[out] y No description supplied.
 * @param[out] w No description supplied.
 * @param[out] h No description supplied.
 *
 */
EOAPI Eina_Bool  elm_obj_widget_on_focus_region(Evas_Coord *x, Evas_Coord *y, Evas_Coord *w, Evas_Coord *h);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] dir No description supplied.
 *
 */
EOAPI void  elm_obj_widget_focus_cycle(Elm_Focus_Direction dir);

/**
 *
 * 'Virtual' function handling passing focus to sub-objects given a direction, in degrees.
 *
 * @param[in] base No description supplied.
 * @param[in] degree No description supplied.
 * @param[out] direction No description supplied.
 * @param[out] weight No description supplied.
 *
 */
EOAPI Eina_Bool  elm_obj_widget_focus_direction(const Evas_Object *base, double degree, Evas_Object **direction, double *weight);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] type No description supplied.
 * @param[in] event_info No description supplied.
 * @param[in] event_flags No description supplied.
 *
 */
EOAPI Eina_Bool  elm_obj_widget_event_propagate(Evas_Callback_Type type, void *event_info, Evas_Event_Flags *event_flags);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] emission No description supplied.
 * @param[in] source No description supplied.
 * @param[in] func No description supplied.
 * @param[in] data No description supplied.
 *
 */
EOAPI void  elm_obj_widget_signal_callback_add(const char *emission, const char *source, Edje_Signal_Cb func, void *data);

/**
 *
 * 'Virtual' function which checks if handling of passing focus to sub-objects is supported by widget.
 *
 *
 */
EOAPI Eina_Bool  elm_obj_widget_focus_next_manager_is(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] name No description supplied.
 * @param[in] recurse No description supplied.
 *
 */
EOAPI Evas_Object * elm_obj_widget_name_find(const char *name, int recurse);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] base No description supplied.
 * @param[in] items No description supplied.
 * @param[in] list_data_get No description supplied.
 * @param[in] degree No description supplied.
 * @param[out] direction No description supplied.
 * @param[out] weight No description supplied.
 *
 */
EOAPI Eina_Bool  elm_obj_widget_focus_list_direction_get(const Evas_Object *base, const Eina_List *items, list_data_get_func_type list_data_get, double degree, Evas_Object **direction, double *weight);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI void  elm_obj_widget_focused_object_clear(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] degree No description supplied.
 *
 */
EOAPI Eina_Bool  elm_obj_widget_focus_direction_go(double degree);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 * @param[in] w No description supplied.
 * @param[in] h No description supplied.
 * @param[in] forceshow No description supplied.
 *
 */
EOAPI void  elm_obj_widget_show_region_set(Evas_Coord x, Evas_Coord y, Evas_Coord w, Evas_Coord h, Eina_Bool forceshow);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[out] x No description supplied.
 * @param[out] y No description supplied.
 * @param[out] w No description supplied.
 * @param[out] h No description supplied.
 *
 */
EOAPI void  elm_obj_widget_show_region_get(Evas_Coord *x, Evas_Coord *y, Evas_Coord *w, Evas_Coord *h);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI void  elm_obj_widget_scroll_freeze_pop(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] tt No description supplied.
 *
 */
EOAPI void  elm_obj_widget_tooltip_del(Elm_Tooltip *tt);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] dir No description supplied.
 * @param[out] next No description supplied.
 *
 */
EOAPI Eina_Bool  elm_obj_widget_focus_next_get(Elm_Focus_Direction dir, Evas_Object **next);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] part No description supplied.
 *
 */
EOAPI const char * elm_obj_widget_translatable_part_text_get(const char *part);

/**
 *
 * @internal
 *
 * Restore the focus state of the sub-tree.
 *
 * This API will restore the focus state of the sub-tree to the latest
 * state. If a sub-tree is unfocused and wants to get back to the latest
 * focus state, this API will be helpful.
 *
 * @ingroup Widget
 *
 *
 */
EOAPI void  elm_obj_widget_focus_restore(void);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI void  elm_obj_widget_scroll_hold_pop(void);

/**
 *
 * 'Virtual' function handling language changes on Elementary.
 *
 *
 */
EOAPI Eina_Bool  elm_obj_widget_translate(void);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI void  elm_obj_widget_scroll_freeze_push(void);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI void  elm_obj_widget_focus_custom_chain_unset(void);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI void  elm_obj_widget_focus_steal(void);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI void  elm_obj_widget_focus_hide_handle(void);

/**
 *
 * 'Virtual' function handling passing focus to sub-objects.
 *
 * @param[in] dir No description supplied.
 * @param[out] next No description supplied.
 *
 */
EOAPI Eina_Bool  elm_obj_widget_focus_next(Elm_Focus_Direction dir, Evas_Object **next);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] items No description supplied.
 * @param[in] list_data_get No description supplied.
 * @param[in] dir No description supplied.
 * @param[out] next No description supplied.
 *
 */
EOAPI Eina_Bool  elm_obj_widget_focus_list_next_get(const Eina_List *items, list_data_get_func_type list_data_get, Elm_Focus_Direction dir, Evas_Object **next);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI void  elm_obj_widget_focus_mouse_up_handle(void);

/**
 *
 * 'Virtual' function on the widget being re-themed.
 *
 *
 */
EOAPI Eina_Bool  elm_obj_widget_theme_apply(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] base No description supplied.
 * @param[in] degree No description supplied.
 * @param[out] direction No description supplied.
 * @param[out] weight No description supplied.
 *
 */
EOAPI Eina_Bool  elm_obj_widget_focus_direction_get(const Evas_Object *base, double degree, Evas_Object **direction, double *weight);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] emission No description supplied.
 * @param[in] source No description supplied.
 * @param[in] func No description supplied.
 *
 */
EOAPI void * elm_obj_widget_signal_callback_del(const char *emission, const char *source, Edje_Signal_Cb func);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] emission No description supplied.
 * @param[in] source No description supplied.
 *
 */
EOAPI void  elm_obj_widget_signal_emit(const char *emission, const char *source);

/**
 *
 * 'Virtual' function on the widget being disabled.
 *
 *
 */
EOAPI Eina_Bool  elm_obj_widget_disable(void);

/**
 *
 * 'Virtual' function handling sub objects being removed.
 *
 * @param[in] sobj No description supplied.
 *
 */
EOAPI Eina_Bool  elm_obj_widget_sub_object_del(Evas_Object *sobj);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] tt No description supplied.
 *
 */
EOAPI void  elm_obj_widget_tooltip_add(Elm_Tooltip *tt);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI void  elm_obj_widget_focus_region_show(void);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI void  elm_obj_widget_focus_disabled_handle(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] child No description supplied.
 * @param[in] relative_child No description supplied.
 *
 */
EOAPI void  elm_obj_widget_focus_custom_chain_append(Evas_Object *child, Evas_Object *relative_child);


#endif
