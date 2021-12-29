#ifndef _ELM_INTERFACE_SCROLLABLE_EO_H_
#define _ELM_INTERFACE_SCROLLABLE_EO_H_

#ifndef _ELM_INTERFACE_SCROLLABLE_EO_TYPES
#define _ELM_INTERFACE_SCROLLABLE_EO_TYPES


#endif
#define ELM_INTERFACE_SCROLLABLE_MIXIN elm_interface_scrollable_mixin_get()

const Eo_Class *elm_interface_scrollable_mixin_get(void) EINA_CONST;

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_gravity_set(double x, double y);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[out] x No description supplied.
 * @param[out] y No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_gravity_get(double *x, double *y);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] horiz No description supplied.
 * @param[in] vert No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_bounce_allow_set(Eina_Bool horiz, Eina_Bool vert);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[out] horiz No description supplied.
 * @param[out] vert No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_bounce_allow_get(Eina_Bool *horiz, Eina_Bool *vert);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] disabled No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_wheel_disabled_set(Eina_Bool disabled);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI Eina_Bool  elm_interface_scrollable_wheel_disabled_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] block No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_movement_block_set(Elm_Scroller_Movement_Block block);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI Elm_Scroller_Movement_Block  elm_interface_scrollable_movement_block_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] disabled No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_momentum_animator_disabled_set(Eina_Bool disabled);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI Eina_Bool  elm_interface_scrollable_momentum_animator_disabled_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] hbar No description supplied.
 * @param[in] vbar No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_policy_set(Elm_Scroller_Policy hbar, Elm_Scroller_Policy vbar);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[out] hbar No description supplied.
 * @param[out] vbar No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_policy_get(Elm_Scroller_Policy *hbar, Elm_Scroller_Policy *vbar);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 * @param[in] w No description supplied.
 * @param[in] h No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_content_region_set(Evas_Coord x, Evas_Coord y, Evas_Coord w, Evas_Coord h);

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
EOAPI void  elm_interface_scrollable_content_region_get(Evas_Coord *x, Evas_Coord *y, Evas_Coord *w, Evas_Coord *h);

/**
 *
 * It decides whether the scrollable object propagates the events to content object or not.
 *
 * @param[in] repeat_events No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_repeat_events_set(Eina_Bool repeat_events);

/**
 *
 * It gets whether the scrollable object propagates the events to content object or not.
 *
 *
 */
EOAPI Eina_Bool  elm_interface_scrollable_repeat_events_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_page_size_set(Evas_Coord x, Evas_Coord y);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[out] x No description supplied.
 * @param[out] y No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_page_size_get(Evas_Coord *x, Evas_Coord *y);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] disabled No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_bounce_animator_disabled_set(Eina_Bool disabled);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI Eina_Bool  elm_interface_scrollable_bounce_animator_disabled_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] page_limit_h No description supplied.
 * @param[in] page_limit_v No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_page_scroll_limit_set(int page_limit_h, int page_limit_v);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[out] page_limit_h No description supplied.
 * @param[out] page_limit_v No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_page_scroll_limit_get(int *page_limit_h, int *page_limit_v);

/**
 *
 * Enable/disable page bouncing, for paged scrollers, on each axis.
 *
 * @param[in] horiz No description supplied.
 * @param[in] vert No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_page_snap_allow_set(Eina_Bool horiz, Eina_Bool vert);

/**
 *
 * Get wether page bouncing is enabled, for paged scrollers, on each axis.
 *
 * @param[out] horiz No description supplied.
 * @param[out] vert No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_page_snap_allow_get(Eina_Bool *horiz, Eina_Bool *vert);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] pagerel_h No description supplied.
 * @param[in] pagerel_v No description supplied.
 * @param[in] pagesize_h No description supplied.
 * @param[in] pagesize_v No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_paging_set(double pagerel_h, double pagerel_v, Evas_Coord pagesize_h, Evas_Coord pagesize_v);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[out] pagerel_h No description supplied.
 * @param[out] pagerel_v No description supplied.
 * @param[out] pagesize_h No description supplied.
 * @param[out] pagesize_v No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_paging_get(double *pagerel_h, double *pagerel_v, Evas_Coord *pagesize_h, Evas_Coord *pagesize_v);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] single_dir No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_single_direction_set(Elm_Scroller_Single_Direction single_dir);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI Elm_Scroller_Single_Direction  elm_interface_scrollable_single_direction_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_step_size_set(Evas_Coord x, Evas_Coord y);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[out] x No description supplied.
 * @param[out] y No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_step_size_get(Evas_Coord *x, Evas_Coord *y);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] scroll_up_cb No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_scroll_up_cb_set(Elm_Interface_Scrollable_Cb scroll_up_cb);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] hbar_drag_cb No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_hbar_drag_cb_set(Elm_Interface_Scrollable_Cb hbar_drag_cb);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] drag_start_cb No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_drag_start_cb_set(Elm_Interface_Scrollable_Cb drag_start_cb);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] freeze No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_freeze_set(Eina_Bool freeze);

/**
 *
 * When the viewport is resized, the callback is called.
 *
 * @param[in] viewport_resize_cb No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_content_viewport_resize_cb_set(Elm_Interface_Scrollable_Resize_Cb viewport_resize_cb);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] scroll_left_cb No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_scroll_left_cb_set(Elm_Interface_Scrollable_Cb scroll_left_cb);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] vbar_press_cb No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_vbar_press_cb_set(Elm_Interface_Scrollable_Cb vbar_press_cb);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] hbar_press_cb No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_hbar_press_cb_set(Elm_Interface_Scrollable_Cb hbar_press_cb);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] hbar_unpress_cb No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_hbar_unpress_cb_set(Elm_Interface_Scrollable_Cb hbar_unpress_cb);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] drag_stop_cb No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_drag_stop_cb_set(Elm_Interface_Scrollable_Cb drag_stop_cb);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] pan No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_extern_pan_set(Evas_Object *pan);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] page_change_cb No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_page_change_cb_set(Elm_Interface_Scrollable_Cb page_change_cb);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] hold No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_hold_set(Eina_Bool hold);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] animate_start_cb No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_animate_start_cb_set(Elm_Interface_Scrollable_Cb animate_start_cb);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] scroll_down_cb No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_scroll_down_cb_set(Elm_Interface_Scrollable_Cb scroll_down_cb);

/**
 *
 * Set scroll page size relative to viewport size.
 *
 * @param[in] h_pagerel No description supplied.
 * @param[in] v_pagerel No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_page_relative_set(double h_pagerel, double v_pagerel);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] scroll_cb No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_scroll_cb_set(Elm_Interface_Scrollable_Cb scroll_cb);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] animate_stop_cb No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_animate_stop_cb_set(Elm_Interface_Scrollable_Cb animate_stop_cb);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] mirrored No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_mirrored_set(Eina_Bool mirrored);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] min_limit_cb No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_content_min_limit_cb_set(Elm_Interface_Scrollable_Min_Limit_Cb min_limit_cb);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] scroll_right_cb No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_scroll_right_cb_set(Elm_Interface_Scrollable_Cb scroll_right_cb);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] content No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_content_set(Evas_Object *content);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] edge_left_cb No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_edge_left_cb_set(Elm_Interface_Scrollable_Cb edge_left_cb);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] vbar_drag_cb No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_vbar_drag_cb_set(Elm_Interface_Scrollable_Cb vbar_drag_cb);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] vbar_unpress_cb No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_vbar_unpress_cb_set(Elm_Interface_Scrollable_Cb vbar_unpress_cb);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] edge_bottom_cb No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_edge_bottom_cb_set(Elm_Interface_Scrollable_Cb edge_bottom_cb);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] edge_right_cb No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_edge_right_cb_set(Elm_Interface_Scrollable_Cb edge_right_cb);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] edge_top_cb No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_edge_top_cb_set(Elm_Interface_Scrollable_Cb edge_top_cb);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] edje_object No description supplied.
 * @param[in] hit_rectangle No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_objects_set(Evas_Object *edje_object, Evas_Object *hit_rectangle);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[out] pagenumber_h No description supplied.
 * @param[out] pagenumber_v No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_last_page_get(int *pagenumber_h, int *pagenumber_v);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[out] pagenumber_h No description supplied.
 * @param[out] pagenumber_v No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_current_page_get(int *pagenumber_h, int *pagenumber_v);

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
EOAPI void  elm_interface_scrollable_content_viewport_geometry_get(Evas_Coord *x, Evas_Coord *y, Evas_Coord *w, Evas_Coord *h);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[out] w No description supplied.
 * @param[out] h No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_content_size_get(Evas_Coord *w, Evas_Coord *h);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 * @param[in] sig No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_content_pos_set(Evas_Coord x, Evas_Coord y, Eina_Bool sig);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[out] x No description supplied.
 * @param[out] y No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_content_pos_get(Evas_Coord *x, Evas_Coord *y);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] pagenumber_h No description supplied.
 * @param[in] pagenumber_v No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_page_show(int pagenumber_h, int pagenumber_v);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 * @param[in] w No description supplied.
 * @param[in] h No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_region_bring_in(Evas_Coord x, Evas_Coord y, Evas_Coord w, Evas_Coord h);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] pagenumber_h No description supplied.
 * @param[in] pagenumber_v No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_page_bring_in(int pagenumber_h, int pagenumber_v);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 * @param[in] w No description supplied.
 * @param[in] h No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_content_region_show(Evas_Coord x, Evas_Coord y, Evas_Coord w, Evas_Coord h);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] w No description supplied.
 * @param[in] h No description supplied.
 *
 */
EOAPI void  elm_interface_scrollable_content_min_limit(Eina_Bool w, Eina_Bool h);

EOAPI extern const Eo_Event_Description _ELM_INTERFACE_SCROLLABLE_EVENT_CHANGED;

/**
 * No description
 */
#define ELM_INTERFACE_SCROLLABLE_EVENT_CHANGED (&(_ELM_INTERFACE_SCROLLABLE_EVENT_CHANGED))

#endif
