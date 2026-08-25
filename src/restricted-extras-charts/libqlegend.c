#include "libqabstractseries.hpp"
#include "../libqbrush.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqgraphicsitem.hpp"
#include "../libqgraphicslayoutitem.hpp"
#include "../libqgraphicswidget.hpp"
#include "../libqevent.hpp"
#include "libqlegendmarker.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpainter.hpp"
#include "../libqpen.hpp"
#include "../libqstyleoption.hpp"
#include "../libqwidget.hpp"
#include "libqlegend.hpp"
#include "libqlegend.h"

const QMetaObject* q_legend_meta_object(void* self) {
    return QLegend_MetaObject((QLegend*)self);
}

void* q_legend_metacast(void* self, const char* param1) {
    return QLegend_Metacast((QLegend*)self, param1);
}

int32_t q_legend_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QLegend_Metacall((QLegend*)self, param1, param2, param3);
}

const char* q_legend_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_legend_paint(void* self, void* painter, void* option, void* widget) {
    QLegend_Paint((QLegend*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_legend_set_brush(void* self, void* brush) {
    QLegend_SetBrush((QLegend*)self, (QBrush*)brush);
}

QBrush* q_legend_brush(void* self) {
    return QLegend_Brush((QLegend*)self);
}

void q_legend_set_color(void* self, void* color) {
    QLegend_SetColor((QLegend*)self, (QColor*)color);
}

QColor* q_legend_color(void* self) {
    return QLegend_Color((QLegend*)self);
}

void q_legend_set_pen(void* self, void* pen) {
    QLegend_SetPen((QLegend*)self, (QPen*)pen);
}

QPen* q_legend_pen(void* self) {
    return QLegend_Pen((QLegend*)self);
}

void q_legend_set_border_color(void* self, void* color) {
    QLegend_SetBorderColor((QLegend*)self, (QColor*)color);
}

QColor* q_legend_border_color(void* self) {
    return QLegend_BorderColor((QLegend*)self);
}

void q_legend_set_font(void* self, void* font) {
    QLegend_SetFont((QLegend*)self, (QFont*)font);
}

QFont* q_legend_font(void* self) {
    return QLegend_Font((QLegend*)self);
}

void q_legend_set_label_brush(void* self, void* brush) {
    QLegend_SetLabelBrush((QLegend*)self, (QBrush*)brush);
}

QBrush* q_legend_label_brush(void* self) {
    return QLegend_LabelBrush((QLegend*)self);
}

void q_legend_set_label_color(void* self, void* color) {
    QLegend_SetLabelColor((QLegend*)self, (QColor*)color);
}

QColor* q_legend_label_color(void* self) {
    return QLegend_LabelColor((QLegend*)self);
}

void q_legend_set_alignment(void* self, int32_t alignment) {
    QLegend_SetAlignment((QLegend*)self, alignment);
}

int32_t q_legend_alignment(void* self) {
    return QLegend_Alignment((QLegend*)self);
}

void q_legend_detach_from_chart(void* self) {
    QLegend_DetachFromChart((QLegend*)self);
}

void q_legend_attach_to_chart(void* self) {
    QLegend_AttachToChart((QLegend*)self);
}

bool q_legend_is_attached_to_chart(void* self) {
    return QLegend_IsAttachedToChart((QLegend*)self);
}

void q_legend_set_background_visible(void* self) {
    QLegend_SetBackgroundVisible((QLegend*)self);
}

bool q_legend_is_background_visible(void* self) {
    return QLegend_IsBackgroundVisible((QLegend*)self);
}

libqt_list /* of QLegendMarker* */ q_legend_markers(void* self) {
    libqt_list _arr = QLegend_Markers((QLegend*)self);
    return _arr;
}

bool q_legend_reverse_markers(void* self) {
    return QLegend_ReverseMarkers((QLegend*)self);
}

void q_legend_set_reverse_markers(void* self) {
    QLegend_SetReverseMarkers((QLegend*)self);
}

bool q_legend_show_tool_tips(void* self) {
    return QLegend_ShowToolTips((QLegend*)self);
}

void q_legend_set_show_tool_tips(void* self, bool show) {
    QLegend_SetShowToolTips((QLegend*)self, show);
}

bool q_legend_is_interactive(void* self) {
    return QLegend_IsInteractive((QLegend*)self);
}

void q_legend_set_interactive(void* self, bool interactive) {
    QLegend_SetInteractive((QLegend*)self, interactive);
}

int32_t q_legend_marker_shape(void* self) {
    return QLegend_MarkerShape((QLegend*)self);
}

void q_legend_set_marker_shape(void* self, int32_t shape) {
    QLegend_SetMarkerShape((QLegend*)self, shape);
}

void q_legend_background_visible_changed(void* self, bool visible) {
    QLegend_BackgroundVisibleChanged((QLegend*)self, visible);
}

void q_legend_on_background_visible_changed(void* self, void (*callback)(void*, bool)) {
    QLegend_Connect_BackgroundVisibleChanged((QLegend*)self, (intptr_t)callback);
}

void q_legend_color_changed(void* self, void* color) {
    QLegend_ColorChanged((QLegend*)self, (QColor*)color);
}

void q_legend_on_color_changed(void* self, void (*callback)(void*, void*)) {
    QLegend_Connect_ColorChanged((QLegend*)self, (intptr_t)callback);
}

void q_legend_border_color_changed(void* self, void* color) {
    QLegend_BorderColorChanged((QLegend*)self, (QColor*)color);
}

void q_legend_on_border_color_changed(void* self, void (*callback)(void*, void*)) {
    QLegend_Connect_BorderColorChanged((QLegend*)self, (intptr_t)callback);
}

void q_legend_font_changed(void* self, void* font) {
    QLegend_FontChanged((QLegend*)self, (QFont*)font);
}

void q_legend_on_font_changed(void* self, void (*callback)(void*, void*)) {
    QLegend_Connect_FontChanged((QLegend*)self, (intptr_t)callback);
}

void q_legend_label_color_changed(void* self, void* color) {
    QLegend_LabelColorChanged((QLegend*)self, (QColor*)color);
}

void q_legend_on_label_color_changed(void* self, void (*callback)(void*, void*)) {
    QLegend_Connect_LabelColorChanged((QLegend*)self, (intptr_t)callback);
}

void q_legend_reverse_markers_changed(void* self, bool reverseMarkers) {
    QLegend_ReverseMarkersChanged((QLegend*)self, reverseMarkers);
}

void q_legend_on_reverse_markers_changed(void* self, void (*callback)(void*, bool)) {
    QLegend_Connect_ReverseMarkersChanged((QLegend*)self, (intptr_t)callback);
}

void q_legend_show_tool_tips_changed(void* self, bool showToolTips) {
    QLegend_ShowToolTipsChanged((QLegend*)self, showToolTips);
}

void q_legend_on_show_tool_tips_changed(void* self, void (*callback)(void*, bool)) {
    QLegend_Connect_ShowToolTipsChanged((QLegend*)self, (intptr_t)callback);
}

void q_legend_marker_shape_changed(void* self, int32_t shape) {
    QLegend_MarkerShapeChanged((QLegend*)self, shape);
}

void q_legend_on_marker_shape_changed(void* self, void (*callback)(void*, int32_t)) {
    QLegend_Connect_MarkerShapeChanged((QLegend*)self, (intptr_t)callback);
}

void q_legend_attached_to_chart_changed(void* self, bool attachedToChart) {
    QLegend_AttachedToChartChanged((QLegend*)self, attachedToChart);
}

void q_legend_on_attached_to_chart_changed(void* self, void (*callback)(void*, bool)) {
    QLegend_Connect_AttachedToChartChanged((QLegend*)self, (intptr_t)callback);
}

void q_legend_interactive_changed(void* self, bool interactive) {
    QLegend_InteractiveChanged((QLegend*)self, interactive);
}

void q_legend_on_interactive_changed(void* self, void (*callback)(void*, bool)) {
    QLegend_Connect_InteractiveChanged((QLegend*)self, (intptr_t)callback);
}

const char* q_legend_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_legend_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_legend_set_background_visible1(void* self, bool visible) {
    QLegend_SetBackgroundVisible1((QLegend*)self, visible);
}

libqt_list /* of QLegendMarker* */ q_legend_markers1(void* self, void* series) {
    libqt_list _arr = QLegend_Markers1((QLegend*)self, (QAbstractSeries*)series);
    return _arr;
}

void q_legend_set_reverse_markers1(void* self, bool reverseMarkers) {
    QLegend_SetReverseMarkers1((QLegend*)self, reverseMarkers);
}

QGraphicsLayoutItem* q_legend_as_q_graphics_layout_item(void* self) {
    return QGraphicsWidget_AsQGraphicsLayoutItem((QGraphicsWidget*)self);
}

QLegend* q_legend_from_q_graphics_layout_item(void* _qgraphicslayoutitem) {
    return (QLegend*)QGraphicsWidget_FromQGraphicsLayoutItem((QGraphicsLayoutItem*)_qgraphicslayoutitem);
}

QGraphicsLayout* q_legend_layout(void* self) {
    return QGraphicsWidget_Layout((QGraphicsWidget*)self);
}

void q_legend_set_layout(void* self, void* layout) {
    QGraphicsWidget_SetLayout((QGraphicsWidget*)self, (QGraphicsLayout*)layout);
}

void q_legend_adjust_size(void* self) {
    QGraphicsWidget_AdjustSize((QGraphicsWidget*)self);
}

int32_t q_legend_layout_direction(void* self) {
    return QGraphicsWidget_LayoutDirection((QGraphicsWidget*)self);
}

void q_legend_set_layout_direction(void* self, int32_t direction) {
    QGraphicsWidget_SetLayoutDirection((QGraphicsWidget*)self, direction);
}

void q_legend_unset_layout_direction(void* self) {
    QGraphicsWidget_UnsetLayoutDirection((QGraphicsWidget*)self);
}

QStyle* q_legend_style(void* self) {
    return QGraphicsWidget_Style((QGraphicsWidget*)self);
}

void q_legend_set_style(void* self, void* style) {
    QGraphicsWidget_SetStyle((QGraphicsWidget*)self, (QStyle*)style);
}

QPalette* q_legend_palette(void* self) {
    return QGraphicsWidget_Palette((QGraphicsWidget*)self);
}

void q_legend_set_palette(void* self, void* palette) {
    QGraphicsWidget_SetPalette((QGraphicsWidget*)self, (QPalette*)palette);
}

bool q_legend_auto_fill_background(void* self) {
    return QGraphicsWidget_AutoFillBackground((QGraphicsWidget*)self);
}

void q_legend_set_auto_fill_background(void* self, bool enabled) {
    QGraphicsWidget_SetAutoFillBackground((QGraphicsWidget*)self, enabled);
}

void q_legend_resize(void* self, void* size) {
    QGraphicsWidget_Resize((QGraphicsWidget*)self, (QSizeF*)size);
}

void q_legend_resize2(void* self, double w, double h) {
    QGraphicsWidget_Resize2((QGraphicsWidget*)self, w, h);
}

QSizeF* q_legend_size(void* self) {
    return QGraphicsWidget_Size((QGraphicsWidget*)self);
}

void q_legend_set_geometry(void* self, void* rect) {
    QGraphicsWidget_SetGeometry((QGraphicsWidget*)self, (QRectF*)rect);
}

void q_legend_set_geometry2(void* self, double x, double y, double w, double h) {
    QGraphicsWidget_SetGeometry2((QGraphicsWidget*)self, x, y, w, h);
}

QRectF* q_legend_rect(void* self) {
    return QGraphicsWidget_Rect((QGraphicsWidget*)self);
}

void q_legend_set_contents_margins(void* self, double left, double top, double right, double bottom) {
    QGraphicsWidget_SetContentsMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

void q_legend_set_contents_margins2(void* self, void* margins) {
    QGraphicsWidget_SetContentsMargins2((QGraphicsWidget*)self, (QMarginsF*)margins);
}

void q_legend_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsWidget_GetContentsMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

void q_legend_set_window_frame_margins(void* self, double left, double top, double right, double bottom) {
    QGraphicsWidget_SetWindowFrameMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

void q_legend_set_window_frame_margins2(void* self, void* margins) {
    QGraphicsWidget_SetWindowFrameMargins2((QGraphicsWidget*)self, (QMarginsF*)margins);
}

void q_legend_get_window_frame_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsWidget_GetWindowFrameMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

void q_legend_unset_window_frame_margins(void* self) {
    QGraphicsWidget_UnsetWindowFrameMargins((QGraphicsWidget*)self);
}

QRectF* q_legend_window_frame_geometry(void* self) {
    return QGraphicsWidget_WindowFrameGeometry((QGraphicsWidget*)self);
}

QRectF* q_legend_window_frame_rect(void* self) {
    return QGraphicsWidget_WindowFrameRect((QGraphicsWidget*)self);
}

int32_t q_legend_window_flags(void* self) {
    return QGraphicsWidget_WindowFlags((QGraphicsWidget*)self);
}

int32_t q_legend_window_type(void* self) {
    return QGraphicsWidget_WindowType((QGraphicsWidget*)self);
}

void q_legend_set_window_flags(void* self, int32_t wFlags) {
    QGraphicsWidget_SetWindowFlags((QGraphicsWidget*)self, wFlags);
}

bool q_legend_is_active_window(void* self) {
    return QGraphicsWidget_IsActiveWindow((QGraphicsWidget*)self);
}

void q_legend_set_window_title(void* self, const char* title) {
    QGraphicsWidget_SetWindowTitle((QGraphicsWidget*)self, qstring(title));
}

const char* q_legend_window_title(void* self) {
    libqt_string _str = QGraphicsWidget_WindowTitle((QGraphicsWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_legend_focus_policy(void* self) {
    return QGraphicsWidget_FocusPolicy((QGraphicsWidget*)self);
}

void q_legend_set_focus_policy(void* self, int32_t policy) {
    QGraphicsWidget_SetFocusPolicy((QGraphicsWidget*)self, policy);
}

void q_legend_set_tab_order(void* first, void* second) {
    QGraphicsWidget_SetTabOrder((QGraphicsWidget*)first, (QGraphicsWidget*)second);
}

QGraphicsWidget* q_legend_focus_widget(void* self) {
    return QGraphicsWidget_FocusWidget((QGraphicsWidget*)self);
}

int32_t q_legend_grab_shortcut(void* self, void* sequence) {
    return QGraphicsWidget_GrabShortcut((QGraphicsWidget*)self, (QKeySequence*)sequence);
}

void q_legend_release_shortcut(void* self, int id) {
    QGraphicsWidget_ReleaseShortcut((QGraphicsWidget*)self, id);
}

void q_legend_set_shortcut_enabled(void* self, int id) {
    QGraphicsWidget_SetShortcutEnabled((QGraphicsWidget*)self, id);
}

void q_legend_set_shortcut_auto_repeat(void* self, int id) {
    QGraphicsWidget_SetShortcutAutoRepeat((QGraphicsWidget*)self, id);
}

void q_legend_add_action(void* self, void* action) {
    QGraphicsWidget_AddAction((QGraphicsWidget*)self, (QAction*)action);
}

void q_legend_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QGraphicsWidget_AddActions((QGraphicsWidget*)self, actions);
}

void q_legend_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QGraphicsWidget_InsertActions((QGraphicsWidget*)self, (QAction*)before, actions);
}

void q_legend_insert_action(void* self, void* before, void* action) {
    QGraphicsWidget_InsertAction((QGraphicsWidget*)self, (QAction*)before, (QAction*)action);
}

void q_legend_remove_action(void* self, void* action) {
    QGraphicsWidget_RemoveAction((QGraphicsWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_legend_actions(void* self) {
    libqt_list _arr = QGraphicsWidget_Actions((QGraphicsWidget*)self);
    return _arr;
}

void q_legend_set_attribute(void* self, int32_t attribute) {
    QGraphicsWidget_SetAttribute((QGraphicsWidget*)self, attribute);
}

bool q_legend_test_attribute(void* self, int32_t attribute) {
    return QGraphicsWidget_TestAttribute((QGraphicsWidget*)self, attribute);
}

int32_t q_legend_type(void* self) {
    return QGraphicsWidget_Type((QGraphicsWidget*)self);
}

void q_legend_paint_window_frame(void* self, void* painter, void* option, void* widget) {
    QGraphicsWidget_PaintWindowFrame((QGraphicsWidget*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

QRectF* q_legend_bounding_rect(void* self) {
    return QGraphicsWidget_BoundingRect((QGraphicsWidget*)self);
}

QPainterPath* q_legend_shape(void* self) {
    return QGraphicsWidget_Shape((QGraphicsWidget*)self);
}

void q_legend_geometry_changed(void* self) {
    QGraphicsWidget_GeometryChanged((QGraphicsWidget*)self);
}

void q_legend_on_geometry_changed(void* self, void (*callback)(void*)) {
    QGraphicsWidget_Connect_GeometryChanged((QGraphicsWidget*)self, (intptr_t)callback);
}

void q_legend_layout_changed(void* self) {
    QGraphicsWidget_LayoutChanged((QGraphicsWidget*)self);
}

void q_legend_on_layout_changed(void* self, void (*callback)(void*)) {
    QGraphicsWidget_Connect_LayoutChanged((QGraphicsWidget*)self, (intptr_t)callback);
}

bool q_legend_close(void* self) {
    return QGraphicsWidget_Close((QGraphicsWidget*)self);
}

int32_t q_legend_grab_shortcut2(void* self, void* sequence, int32_t context) {
    return QGraphicsWidget_GrabShortcut2((QGraphicsWidget*)self, (QKeySequence*)sequence, context);
}

void q_legend_set_shortcut_enabled2(void* self, int id, bool enabled) {
    QGraphicsWidget_SetShortcutEnabled2((QGraphicsWidget*)self, id, enabled);
}

void q_legend_set_shortcut_auto_repeat2(void* self, int id, bool enabled) {
    QGraphicsWidget_SetShortcutAutoRepeat2((QGraphicsWidget*)self, id, enabled);
}

void q_legend_set_attribute2(void* self, int32_t attribute, bool on) {
    QGraphicsWidget_SetAttribute2((QGraphicsWidget*)self, attribute, on);
}

QGraphicsItem* q_legend_as_q_graphics_item(void* self) {
    return QGraphicsObject_AsQGraphicsItem((QGraphicsObject*)self);
}

QLegend* q_legend_from_q_graphics_item(void* _qgraphicsitem) {
    return (QLegend*)QGraphicsObject_FromQGraphicsItem((QGraphicsItem*)_qgraphicsitem);
}

void q_legend_grab_gesture(void* self, int32_t type) {
    QGraphicsObject_GrabGesture((QGraphicsObject*)self, type);
}

void q_legend_ungrab_gesture(void* self, int32_t type) {
    QGraphicsObject_UngrabGesture((QGraphicsObject*)self, type);
}

void q_legend_parent_changed(void* self) {
    QGraphicsObject_ParentChanged((QGraphicsObject*)self);
}

void q_legend_on_parent_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ParentChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_legend_opacity_changed(void* self) {
    QGraphicsObject_OpacityChanged((QGraphicsObject*)self);
}

void q_legend_on_opacity_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_OpacityChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_legend_visible_changed(void* self) {
    QGraphicsObject_VisibleChanged((QGraphicsObject*)self);
}

void q_legend_on_visible_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_VisibleChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_legend_enabled_changed(void* self) {
    QGraphicsObject_EnabledChanged((QGraphicsObject*)self);
}

void q_legend_on_enabled_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_EnabledChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_legend_x_changed(void* self) {
    QGraphicsObject_XChanged((QGraphicsObject*)self);
}

void q_legend_on_x_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_XChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_legend_y_changed(void* self) {
    QGraphicsObject_YChanged((QGraphicsObject*)self);
}

void q_legend_on_y_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_YChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_legend_z_changed(void* self) {
    QGraphicsObject_ZChanged((QGraphicsObject*)self);
}

void q_legend_on_z_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ZChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_legend_rotation_changed(void* self) {
    QGraphicsObject_RotationChanged((QGraphicsObject*)self);
}

void q_legend_on_rotation_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_RotationChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_legend_scale_changed(void* self) {
    QGraphicsObject_ScaleChanged((QGraphicsObject*)self);
}

void q_legend_on_scale_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ScaleChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_legend_children_changed(void* self) {
    QGraphicsObject_ChildrenChanged((QGraphicsObject*)self);
}

void q_legend_on_children_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ChildrenChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_legend_width_changed(void* self) {
    QGraphicsObject_WidthChanged((QGraphicsObject*)self);
}

void q_legend_on_width_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_WidthChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_legend_height_changed(void* self) {
    QGraphicsObject_HeightChanged((QGraphicsObject*)self);
}

void q_legend_on_height_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_HeightChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_legend_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QGraphicsObject_GrabGesture2((QGraphicsObject*)self, type, flags);
}

bool q_legend_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_legend_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_legend_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_legend_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_legend_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_legend_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_legend_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_legend_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_legend_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_legend_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_legend_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_legend_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_legend_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_legend_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_legend_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_legend_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_legend_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_legend_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_legend_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_legend_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_legend_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_legend_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_legend_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_legend_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_legend_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_legend_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_legend_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_legend_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_legend_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_legend_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_legend_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_legend_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_legend_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_legend_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_legend_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_legend_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_legend_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_legend_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_legend_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_legend_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_legend_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_legend_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_legend_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_legend_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_legend_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_legend_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_legend_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_legend_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_legend_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_legend_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QGraphicsScene* q_legend_scene(void* self) {
    return QGraphicsItem_Scene(q_legend_as_q_graphics_item(self));
}

QGraphicsItem* q_legend_parent_item(void* self) {
    return QGraphicsItem_ParentItem(q_legend_as_q_graphics_item(self));
}

QGraphicsItem* q_legend_top_level_item(void* self) {
    return QGraphicsItem_TopLevelItem(q_legend_as_q_graphics_item(self));
}

QGraphicsObject* q_legend_parent_object(void* self) {
    return QGraphicsItem_ParentObject(q_legend_as_q_graphics_item(self));
}

QGraphicsWidget* q_legend_parent_widget(void* self) {
    return QGraphicsItem_ParentWidget(q_legend_as_q_graphics_item(self));
}

QGraphicsWidget* q_legend_top_level_widget(void* self) {
    return QGraphicsItem_TopLevelWidget(q_legend_as_q_graphics_item(self));
}

QGraphicsWidget* q_legend_window(void* self) {
    return QGraphicsItem_Window(q_legend_as_q_graphics_item(self));
}

QGraphicsItem* q_legend_panel(void* self) {
    return QGraphicsItem_Panel(q_legend_as_q_graphics_item(self));
}

void q_legend_set_parent_item(void* self, void* parent) {
    QGraphicsItem_SetParentItem(q_legend_as_q_graphics_item(self), (QGraphicsItem*)parent);
}

libqt_list /* of QGraphicsItem* */ q_legend_child_items(void* self) {
    libqt_list _arr = QGraphicsItem_ChildItems(q_legend_as_q_graphics_item(self));
    return _arr;
}

bool q_legend_is_widget(void* self) {
    return QGraphicsItem_IsWidget(q_legend_as_q_graphics_item(self));
}

bool q_legend_is_window(void* self) {
    return QGraphicsItem_IsWindow(q_legend_as_q_graphics_item(self));
}

bool q_legend_is_panel(void* self) {
    return QGraphicsItem_IsPanel(q_legend_as_q_graphics_item(self));
}

QGraphicsObject* q_legend_to_graphics_object(void* self) {
    return QGraphicsItem_ToGraphicsObject(q_legend_as_q_graphics_item(self));
}

const QGraphicsObject* q_legend_to_graphics_object2(void* self) {
    return QGraphicsItem_ToGraphicsObject2(q_legend_as_q_graphics_item(self));
}

QGraphicsItemGroup* q_legend_group(void* self) {
    return QGraphicsItem_Group(q_legend_as_q_graphics_item(self));
}

void q_legend_set_group(void* self, void* group) {
    QGraphicsItem_SetGroup(q_legend_as_q_graphics_item(self), (QGraphicsItemGroup*)group);
}

int32_t q_legend_flags(void* self) {
    return QGraphicsItem_Flags(q_legend_as_q_graphics_item(self));
}

void q_legend_set_flag(void* self, int32_t flag) {
    QGraphicsItem_SetFlag(q_legend_as_q_graphics_item(self), flag);
}

void q_legend_set_flags(void* self, int32_t flags) {
    QGraphicsItem_SetFlags(q_legend_as_q_graphics_item(self), flags);
}

int32_t q_legend_cache_mode(void* self) {
    return QGraphicsItem_CacheMode(q_legend_as_q_graphics_item(self));
}

void q_legend_set_cache_mode(void* self, int32_t mode) {
    QGraphicsItem_SetCacheMode(q_legend_as_q_graphics_item(self), mode);
}

int32_t q_legend_panel_modality(void* self) {
    return QGraphicsItem_PanelModality(q_legend_as_q_graphics_item(self));
}

void q_legend_set_panel_modality(void* self, int32_t panelModality) {
    QGraphicsItem_SetPanelModality(q_legend_as_q_graphics_item(self), panelModality);
}

bool q_legend_is_blocked_by_modal_panel(void* self) {
    return QGraphicsItem_IsBlockedByModalPanel(q_legend_as_q_graphics_item(self));
}

const char* q_legend_tool_tip(void* self) {
    libqt_string _str = QGraphicsItem_ToolTip(q_legend_as_q_graphics_item(self));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_legend_set_tool_tip(void* self, const char* toolTip) {
    QGraphicsItem_SetToolTip(q_legend_as_q_graphics_item(self), qstring(toolTip));
}

QCursor* q_legend_cursor(void* self) {
    return QGraphicsItem_Cursor(q_legend_as_q_graphics_item(self));
}

void q_legend_set_cursor(void* self, void* cursor) {
    QGraphicsItem_SetCursor(q_legend_as_q_graphics_item(self), (QCursor*)cursor);
}

bool q_legend_has_cursor(void* self) {
    return QGraphicsItem_HasCursor(q_legend_as_q_graphics_item(self));
}

void q_legend_unset_cursor(void* self) {
    QGraphicsItem_UnsetCursor(q_legend_as_q_graphics_item(self));
}

bool q_legend_is_visible(void* self) {
    return QGraphicsItem_IsVisible(q_legend_as_q_graphics_item(self));
}

bool q_legend_is_visible_to(void* self, void* parent) {
    return QGraphicsItem_IsVisibleTo(q_legend_as_q_graphics_item(self), (QGraphicsItem*)parent);
}

void q_legend_set_visible(void* self, bool visible) {
    QGraphicsItem_SetVisible(q_legend_as_q_graphics_item(self), visible);
}

void q_legend_hide(void* self) {
    QGraphicsItem_Hide(q_legend_as_q_graphics_item(self));
}

void q_legend_show(void* self) {
    QGraphicsItem_Show(q_legend_as_q_graphics_item(self));
}

bool q_legend_is_enabled(void* self) {
    return QGraphicsItem_IsEnabled(q_legend_as_q_graphics_item(self));
}

void q_legend_set_enabled(void* self, bool enabled) {
    QGraphicsItem_SetEnabled(q_legend_as_q_graphics_item(self), enabled);
}

bool q_legend_is_selected(void* self) {
    return QGraphicsItem_IsSelected(q_legend_as_q_graphics_item(self));
}

void q_legend_set_selected(void* self, bool selected) {
    QGraphicsItem_SetSelected(q_legend_as_q_graphics_item(self), selected);
}

bool q_legend_accept_drops(void* self) {
    return QGraphicsItem_AcceptDrops(q_legend_as_q_graphics_item(self));
}

void q_legend_set_accept_drops(void* self, bool on) {
    QGraphicsItem_SetAcceptDrops(q_legend_as_q_graphics_item(self), on);
}

double q_legend_opacity(void* self) {
    return QGraphicsItem_Opacity(q_legend_as_q_graphics_item(self));
}

double q_legend_effective_opacity(void* self) {
    return QGraphicsItem_EffectiveOpacity(q_legend_as_q_graphics_item(self));
}

void q_legend_set_opacity(void* self, double opacity) {
    QGraphicsItem_SetOpacity(q_legend_as_q_graphics_item(self), opacity);
}

QGraphicsEffect* q_legend_graphics_effect(void* self) {
    return QGraphicsItem_GraphicsEffect(q_legend_as_q_graphics_item(self));
}

void q_legend_set_graphics_effect(void* self, void* effect) {
    QGraphicsItem_SetGraphicsEffect(q_legend_as_q_graphics_item(self), (QGraphicsEffect*)effect);
}

int32_t q_legend_accepted_mouse_buttons(void* self) {
    return QGraphicsItem_AcceptedMouseButtons(q_legend_as_q_graphics_item(self));
}

void q_legend_set_accepted_mouse_buttons(void* self, int32_t buttons) {
    QGraphicsItem_SetAcceptedMouseButtons(q_legend_as_q_graphics_item(self), buttons);
}

bool q_legend_accept_hover_events(void* self) {
    return QGraphicsItem_AcceptHoverEvents(q_legend_as_q_graphics_item(self));
}

void q_legend_set_accept_hover_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptHoverEvents(q_legend_as_q_graphics_item(self), enabled);
}

bool q_legend_accept_touch_events(void* self) {
    return QGraphicsItem_AcceptTouchEvents(q_legend_as_q_graphics_item(self));
}

void q_legend_set_accept_touch_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptTouchEvents(q_legend_as_q_graphics_item(self), enabled);
}

bool q_legend_filters_child_events(void* self) {
    return QGraphicsItem_FiltersChildEvents(q_legend_as_q_graphics_item(self));
}

void q_legend_set_filters_child_events(void* self, bool enabled) {
    QGraphicsItem_SetFiltersChildEvents(q_legend_as_q_graphics_item(self), enabled);
}

bool q_legend_handles_child_events(void* self) {
    return QGraphicsItem_HandlesChildEvents(q_legend_as_q_graphics_item(self));
}

void q_legend_set_handles_child_events(void* self, bool enabled) {
    QGraphicsItem_SetHandlesChildEvents(q_legend_as_q_graphics_item(self), enabled);
}

bool q_legend_is_active(void* self) {
    return QGraphicsItem_IsActive(q_legend_as_q_graphics_item(self));
}

void q_legend_set_active(void* self, bool active) {
    QGraphicsItem_SetActive(q_legend_as_q_graphics_item(self), active);
}

bool q_legend_has_focus(void* self) {
    return QGraphicsItem_HasFocus(q_legend_as_q_graphics_item(self));
}

void q_legend_set_focus(void* self) {
    QGraphicsItem_SetFocus(q_legend_as_q_graphics_item(self));
}

void q_legend_clear_focus(void* self) {
    QGraphicsItem_ClearFocus(q_legend_as_q_graphics_item(self));
}

QGraphicsItem* q_legend_focus_proxy(void* self) {
    return QGraphicsItem_FocusProxy(q_legend_as_q_graphics_item(self));
}

void q_legend_set_focus_proxy(void* self, void* item) {
    QGraphicsItem_SetFocusProxy(q_legend_as_q_graphics_item(self), (QGraphicsItem*)item);
}

QGraphicsItem* q_legend_focus_item(void* self) {
    return QGraphicsItem_FocusItem(q_legend_as_q_graphics_item(self));
}

QGraphicsItem* q_legend_focus_scope_item(void* self) {
    return QGraphicsItem_FocusScopeItem(q_legend_as_q_graphics_item(self));
}

void q_legend_grab_mouse(void* self) {
    QGraphicsItem_GrabMouse(q_legend_as_q_graphics_item(self));
}

void q_legend_ungrab_mouse(void* self) {
    QGraphicsItem_UngrabMouse(q_legend_as_q_graphics_item(self));
}

void q_legend_grab_keyboard(void* self) {
    QGraphicsItem_GrabKeyboard(q_legend_as_q_graphics_item(self));
}

void q_legend_ungrab_keyboard(void* self) {
    QGraphicsItem_UngrabKeyboard(q_legend_as_q_graphics_item(self));
}

QPointF* q_legend_pos(void* self) {
    return QGraphicsItem_Pos(q_legend_as_q_graphics_item(self));
}

double q_legend_x(void* self) {
    return QGraphicsItem_X(q_legend_as_q_graphics_item(self));
}

void q_legend_set_x(void* self, double x) {
    QGraphicsItem_SetX(q_legend_as_q_graphics_item(self), x);
}

double q_legend_y(void* self) {
    return QGraphicsItem_Y(q_legend_as_q_graphics_item(self));
}

void q_legend_set_y(void* self, double y) {
    QGraphicsItem_SetY(q_legend_as_q_graphics_item(self), y);
}

QPointF* q_legend_scene_pos(void* self) {
    return QGraphicsItem_ScenePos(q_legend_as_q_graphics_item(self));
}

void q_legend_set_pos(void* self, void* pos) {
    QGraphicsItem_SetPos(q_legend_as_q_graphics_item(self), (QPointF*)pos);
}

void q_legend_set_pos2(void* self, double x, double y) {
    QGraphicsItem_SetPos2(q_legend_as_q_graphics_item(self), x, y);
}

void q_legend_move_by(void* self, double dx, double dy) {
    QGraphicsItem_MoveBy(q_legend_as_q_graphics_item(self), dx, dy);
}

void q_legend_ensure_visible(void* self) {
    QGraphicsItem_EnsureVisible(q_legend_as_q_graphics_item(self));
}

void q_legend_ensure_visible2(void* self, double x, double y, double w, double h) {
    QGraphicsItem_EnsureVisible2(q_legend_as_q_graphics_item(self), x, y, w, h);
}

QTransform* q_legend_transform(void* self) {
    return QGraphicsItem_Transform(q_legend_as_q_graphics_item(self));
}

QTransform* q_legend_scene_transform(void* self) {
    return QGraphicsItem_SceneTransform(q_legend_as_q_graphics_item(self));
}

QTransform* q_legend_device_transform(void* self, void* viewportTransform) {
    return QGraphicsItem_DeviceTransform(q_legend_as_q_graphics_item(self), (QTransform*)viewportTransform);
}

QTransform* q_legend_item_transform(void* self, void* other) {
    return QGraphicsItem_ItemTransform(q_legend_as_q_graphics_item(self), (QGraphicsItem*)other);
}

void q_legend_set_transform(void* self, void* matrix) {
    QGraphicsItem_SetTransform(q_legend_as_q_graphics_item(self), (QTransform*)matrix);
}

void q_legend_reset_transform(void* self) {
    QGraphicsItem_ResetTransform(q_legend_as_q_graphics_item(self));
}

void q_legend_set_rotation(void* self, double angle) {
    QGraphicsItem_SetRotation(q_legend_as_q_graphics_item(self), angle);
}

double q_legend_rotation(void* self) {
    return QGraphicsItem_Rotation(q_legend_as_q_graphics_item(self));
}

void q_legend_set_scale(void* self, double scale) {
    QGraphicsItem_SetScale(q_legend_as_q_graphics_item(self), scale);
}

double q_legend_scale(void* self) {
    return QGraphicsItem_Scale(q_legend_as_q_graphics_item(self));
}

libqt_list /* of QGraphicsTransform* */ q_legend_transformations(void* self) {
    libqt_list _arr = QGraphicsItem_Transformations(q_legend_as_q_graphics_item(self));
    return _arr;
}

void q_legend_set_transformations(void* self, libqt_list /* of QGraphicsTransform* */ transformations) {
    QGraphicsItem_SetTransformations(q_legend_as_q_graphics_item(self), transformations);
}

QPointF* q_legend_transform_origin_point(void* self) {
    return QGraphicsItem_TransformOriginPoint(q_legend_as_q_graphics_item(self));
}

void q_legend_set_transform_origin_point(void* self, void* origin) {
    QGraphicsItem_SetTransformOriginPoint(q_legend_as_q_graphics_item(self), (QPointF*)origin);
}

void q_legend_set_transform_origin_point2(void* self, double ax, double ay) {
    QGraphicsItem_SetTransformOriginPoint2(q_legend_as_q_graphics_item(self), ax, ay);
}

void q_legend_advance(void* self, int phase) {
    QGraphicsItem_Advance(q_legend_as_q_graphics_item(self), phase);
}

double q_legend_z_value(void* self) {
    return QGraphicsItem_ZValue(q_legend_as_q_graphics_item(self));
}

void q_legend_set_z_value(void* self, double z) {
    QGraphicsItem_SetZValue(q_legend_as_q_graphics_item(self), z);
}

void q_legend_stack_before(void* self, void* sibling) {
    QGraphicsItem_StackBefore(q_legend_as_q_graphics_item(self), (QGraphicsItem*)sibling);
}

QRectF* q_legend_children_bounding_rect(void* self) {
    return QGraphicsItem_ChildrenBoundingRect(q_legend_as_q_graphics_item(self));
}

QRectF* q_legend_scene_bounding_rect(void* self) {
    return QGraphicsItem_SceneBoundingRect(q_legend_as_q_graphics_item(self));
}

bool q_legend_is_clipped(void* self) {
    return QGraphicsItem_IsClipped(q_legend_as_q_graphics_item(self));
}

QPainterPath* q_legend_clip_path(void* self) {
    return QGraphicsItem_ClipPath(q_legend_as_q_graphics_item(self));
}

bool q_legend_contains(void* self, void* point) {
    return QGraphicsItem_Contains(q_legend_as_q_graphics_item(self), (QPointF*)point);
}

bool q_legend_collides_with_item(void* self, void* other, int32_t mode) {
    return QGraphicsItem_CollidesWithItem(q_legend_as_q_graphics_item(self), (QGraphicsItem*)other, mode);
}

bool q_legend_collides_with_path(void* self, void* path, int32_t mode) {
    return QGraphicsItem_CollidesWithPath(q_legend_as_q_graphics_item(self), (QPainterPath*)path, mode);
}

libqt_list /* of QGraphicsItem* */ q_legend_colliding_items(void* self) {
    libqt_list _arr = QGraphicsItem_CollidingItems(q_legend_as_q_graphics_item(self));
    return _arr;
}

bool q_legend_is_obscured(void* self) {
    return QGraphicsItem_IsObscured(q_legend_as_q_graphics_item(self));
}

bool q_legend_is_obscured2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_IsObscured2(q_legend_as_q_graphics_item(self), x, y, w, h);
}

bool q_legend_is_obscured_by(void* self, void* item) {
    return QGraphicsItem_IsObscuredBy(q_legend_as_q_graphics_item(self), (QGraphicsItem*)item);
}

QPainterPath* q_legend_opaque_area(void* self) {
    return QGraphicsItem_OpaqueArea(q_legend_as_q_graphics_item(self));
}

QRegion* q_legend_bounding_region(void* self, void* itemToDeviceTransform) {
    return QGraphicsItem_BoundingRegion(q_legend_as_q_graphics_item(self), (QTransform*)itemToDeviceTransform);
}

double q_legend_bounding_region_granularity(void* self) {
    return QGraphicsItem_BoundingRegionGranularity(q_legend_as_q_graphics_item(self));
}

void q_legend_set_bounding_region_granularity(void* self, double granularity) {
    QGraphicsItem_SetBoundingRegionGranularity(q_legend_as_q_graphics_item(self), granularity);
}

void q_legend_update(void* self) {
    QGraphicsItem_Update(q_legend_as_q_graphics_item(self));
}

void q_legend_update2(void* self, double x, double y, double width, double height) {
    QGraphicsItem_Update2(q_legend_as_q_graphics_item(self), x, y, width, height);
}

void q_legend_scroll(void* self, double dx, double dy) {
    QGraphicsItem_Scroll(q_legend_as_q_graphics_item(self), dx, dy);
}

QPointF* q_legend_map_to_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapToItem(q_legend_as_q_graphics_item(self), (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_legend_map_to_parent(void* self, void* point) {
    return QGraphicsItem_MapToParent(q_legend_as_q_graphics_item(self), (QPointF*)point);
}

QPointF* q_legend_map_to_scene(void* self, void* point) {
    return QGraphicsItem_MapToScene(q_legend_as_q_graphics_item(self), (QPointF*)point);
}

QRectF* q_legend_map_rect_to_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectToItem(q_legend_as_q_graphics_item(self), (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_legend_map_rect_to_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectToParent(q_legend_as_q_graphics_item(self), (QRectF*)rect);
}

QRectF* q_legend_map_rect_to_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectToScene(q_legend_as_q_graphics_item(self), (QRectF*)rect);
}

QPainterPath* q_legend_map_to_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapToItem4(q_legend_as_q_graphics_item(self), (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_legend_map_to_parent4(void* self, void* path) {
    return QGraphicsItem_MapToParent4(q_legend_as_q_graphics_item(self), (QPainterPath*)path);
}

QPainterPath* q_legend_map_to_scene4(void* self, void* path) {
    return QGraphicsItem_MapToScene4(q_legend_as_q_graphics_item(self), (QPainterPath*)path);
}

QPointF* q_legend_map_from_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapFromItem(q_legend_as_q_graphics_item(self), (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_legend_map_from_parent(void* self, void* point) {
    return QGraphicsItem_MapFromParent(q_legend_as_q_graphics_item(self), (QPointF*)point);
}

QPointF* q_legend_map_from_scene(void* self, void* point) {
    return QGraphicsItem_MapFromScene(q_legend_as_q_graphics_item(self), (QPointF*)point);
}

QRectF* q_legend_map_rect_from_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectFromItem(q_legend_as_q_graphics_item(self), (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_legend_map_rect_from_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectFromParent(q_legend_as_q_graphics_item(self), (QRectF*)rect);
}

QRectF* q_legend_map_rect_from_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectFromScene(q_legend_as_q_graphics_item(self), (QRectF*)rect);
}

QPainterPath* q_legend_map_from_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapFromItem4(q_legend_as_q_graphics_item(self), (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_legend_map_from_parent4(void* self, void* path) {
    return QGraphicsItem_MapFromParent4(q_legend_as_q_graphics_item(self), (QPainterPath*)path);
}

QPainterPath* q_legend_map_from_scene4(void* self, void* path) {
    return QGraphicsItem_MapFromScene4(q_legend_as_q_graphics_item(self), (QPainterPath*)path);
}

QPointF* q_legend_map_to_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapToItem5(q_legend_as_q_graphics_item(self), (QGraphicsItem*)item, x, y);
}

QPointF* q_legend_map_to_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapToParent5(q_legend_as_q_graphics_item(self), x, y);
}

QPointF* q_legend_map_to_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapToScene5(q_legend_as_q_graphics_item(self), x, y);
}

QRectF* q_legend_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToItem2(q_legend_as_q_graphics_item(self), (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_legend_map_rect_to_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToParent2(q_legend_as_q_graphics_item(self), x, y, w, h);
}

QRectF* q_legend_map_rect_to_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToScene2(q_legend_as_q_graphics_item(self), x, y, w, h);
}

QPointF* q_legend_map_from_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapFromItem5(q_legend_as_q_graphics_item(self), (QGraphicsItem*)item, x, y);
}

QPointF* q_legend_map_from_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapFromParent5(q_legend_as_q_graphics_item(self), x, y);
}

QPointF* q_legend_map_from_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapFromScene5(q_legend_as_q_graphics_item(self), x, y);
}

QRectF* q_legend_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromItem2(q_legend_as_q_graphics_item(self), (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_legend_map_rect_from_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromParent2(q_legend_as_q_graphics_item(self), x, y, w, h);
}

QRectF* q_legend_map_rect_from_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromScene2(q_legend_as_q_graphics_item(self), x, y, w, h);
}

bool q_legend_is_ancestor_of(void* self, void* child) {
    return QGraphicsItem_IsAncestorOf(q_legend_as_q_graphics_item(self), (QGraphicsItem*)child);
}

QGraphicsItem* q_legend_common_ancestor_item(void* self, void* other) {
    return QGraphicsItem_CommonAncestorItem(q_legend_as_q_graphics_item(self), (QGraphicsItem*)other);
}

bool q_legend_is_under_mouse(void* self) {
    return QGraphicsItem_IsUnderMouse(q_legend_as_q_graphics_item(self));
}

QVariant* q_legend_data(void* self, int key) {
    return QGraphicsItem_Data(q_legend_as_q_graphics_item(self), key);
}

void q_legend_set_data(void* self, int key, void* value) {
    QGraphicsItem_SetData(q_legend_as_q_graphics_item(self), key, (QVariant*)value);
}

int32_t q_legend_input_method_hints(void* self) {
    return QGraphicsItem_InputMethodHints(q_legend_as_q_graphics_item(self));
}

void q_legend_set_input_method_hints(void* self, int32_t hints) {
    QGraphicsItem_SetInputMethodHints(q_legend_as_q_graphics_item(self), hints);
}

void q_legend_install_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_InstallSceneEventFilter(q_legend_as_q_graphics_item(self), (QGraphicsItem*)filterItem);
}

void q_legend_remove_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_RemoveSceneEventFilter(q_legend_as_q_graphics_item(self), (QGraphicsItem*)filterItem);
}

void q_legend_set_flag2(void* self, int32_t flag, bool enabled) {
    QGraphicsItem_SetFlag2(q_legend_as_q_graphics_item(self), flag, enabled);
}

void q_legend_set_cache_mode2(void* self, int32_t mode, void* cacheSize) {
    QGraphicsItem_SetCacheMode2(q_legend_as_q_graphics_item(self), mode, (QSize*)cacheSize);
}

bool q_legend_is_blocked_by_modal_panel1(void* self, void** blockingPanel) {
    return QGraphicsItem_IsBlockedByModalPanel1(q_legend_as_q_graphics_item(self), (QGraphicsItem**)blockingPanel);
}

void q_legend_set_focus1(void* self, int32_t focusReason) {
    QGraphicsItem_SetFocus1(q_legend_as_q_graphics_item(self), focusReason);
}

void q_legend_ensure_visible1(void* self, void* rect) {
    QGraphicsItem_EnsureVisible1(q_legend_as_q_graphics_item(self), (QRectF*)rect);
}

void q_legend_ensure_visible22(void* self, void* rect, int xmargin) {
    QGraphicsItem_EnsureVisible22(q_legend_as_q_graphics_item(self), (QRectF*)rect, xmargin);
}

void q_legend_ensure_visible3(void* self, void* rect, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible3(q_legend_as_q_graphics_item(self), (QRectF*)rect, xmargin, ymargin);
}

void q_legend_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin) {
    QGraphicsItem_EnsureVisible5(q_legend_as_q_graphics_item(self), x, y, w, h, xmargin);
}

void q_legend_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible6(q_legend_as_q_graphics_item(self), x, y, w, h, xmargin, ymargin);
}

QTransform* q_legend_item_transform2(void* self, void* other, bool* ok) {
    return QGraphicsItem_ItemTransform2(q_legend_as_q_graphics_item(self), (QGraphicsItem*)other, (bool*)ok);
}

void q_legend_set_transform2(void* self, void* matrix, bool combine) {
    QGraphicsItem_SetTransform2(q_legend_as_q_graphics_item(self), (QTransform*)matrix, combine);
}

libqt_list /* of QGraphicsItem* */ q_legend_colliding_items1(void* self, int32_t mode) {
    libqt_list _arr = QGraphicsItem_CollidingItems1(q_legend_as_q_graphics_item(self), mode);
    return _arr;
}

bool q_legend_is_obscured1(void* self, void* rect) {
    return QGraphicsItem_IsObscured1(q_legend_as_q_graphics_item(self), (QRectF*)rect);
}

void q_legend_update1(void* self, void* rect) {
    QGraphicsItem_Update1(q_legend_as_q_graphics_item(self), (QRectF*)rect);
}

void q_legend_scroll3(void* self, double dx, double dy, void* rect) {
    QGraphicsItem_Scroll3(q_legend_as_q_graphics_item(self), dx, dy, (QRectF*)rect);
}

void q_legend_set_size_policy(void* self, void* policy) {
    QGraphicsLayoutItem_SetSizePolicy(q_legend_as_q_graphics_layout_item(self), (QSizePolicy*)policy);
}

void q_legend_set_size_policy2(void* self, int32_t hPolicy, int32_t vPolicy) {
    QGraphicsLayoutItem_SetSizePolicy2(q_legend_as_q_graphics_layout_item(self), hPolicy, vPolicy);
}

QSizePolicy* q_legend_size_policy(void* self) {
    return QGraphicsLayoutItem_SizePolicy(q_legend_as_q_graphics_layout_item(self));
}

void q_legend_set_minimum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMinimumSize(q_legend_as_q_graphics_layout_item(self), (QSizeF*)size);
}

void q_legend_set_minimum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMinimumSize2(q_legend_as_q_graphics_layout_item(self), w, h);
}

QSizeF* q_legend_minimum_size(void* self) {
    return QGraphicsLayoutItem_MinimumSize(q_legend_as_q_graphics_layout_item(self));
}

void q_legend_set_minimum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMinimumWidth(q_legend_as_q_graphics_layout_item(self), width);
}

double q_legend_minimum_width(void* self) {
    return QGraphicsLayoutItem_MinimumWidth(q_legend_as_q_graphics_layout_item(self));
}

void q_legend_set_minimum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMinimumHeight(q_legend_as_q_graphics_layout_item(self), height);
}

double q_legend_minimum_height(void* self) {
    return QGraphicsLayoutItem_MinimumHeight(q_legend_as_q_graphics_layout_item(self));
}

void q_legend_set_preferred_size(void* self, void* size) {
    QGraphicsLayoutItem_SetPreferredSize(q_legend_as_q_graphics_layout_item(self), (QSizeF*)size);
}

void q_legend_set_preferred_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetPreferredSize2(q_legend_as_q_graphics_layout_item(self), w, h);
}

QSizeF* q_legend_preferred_size(void* self) {
    return QGraphicsLayoutItem_PreferredSize(q_legend_as_q_graphics_layout_item(self));
}

void q_legend_set_preferred_width(void* self, double width) {
    QGraphicsLayoutItem_SetPreferredWidth(q_legend_as_q_graphics_layout_item(self), width);
}

double q_legend_preferred_width(void* self) {
    return QGraphicsLayoutItem_PreferredWidth(q_legend_as_q_graphics_layout_item(self));
}

void q_legend_set_preferred_height(void* self, double height) {
    QGraphicsLayoutItem_SetPreferredHeight(q_legend_as_q_graphics_layout_item(self), height);
}

double q_legend_preferred_height(void* self) {
    return QGraphicsLayoutItem_PreferredHeight(q_legend_as_q_graphics_layout_item(self));
}

void q_legend_set_maximum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMaximumSize(q_legend_as_q_graphics_layout_item(self), (QSizeF*)size);
}

void q_legend_set_maximum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMaximumSize2(q_legend_as_q_graphics_layout_item(self), w, h);
}

QSizeF* q_legend_maximum_size(void* self) {
    return QGraphicsLayoutItem_MaximumSize(q_legend_as_q_graphics_layout_item(self));
}

void q_legend_set_maximum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMaximumWidth(q_legend_as_q_graphics_layout_item(self), width);
}

double q_legend_maximum_width(void* self) {
    return QGraphicsLayoutItem_MaximumWidth(q_legend_as_q_graphics_layout_item(self));
}

void q_legend_set_maximum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMaximumHeight(q_legend_as_q_graphics_layout_item(self), height);
}

double q_legend_maximum_height(void* self) {
    return QGraphicsLayoutItem_MaximumHeight(q_legend_as_q_graphics_layout_item(self));
}

QRectF* q_legend_geometry(void* self) {
    return QGraphicsLayoutItem_Geometry(q_legend_as_q_graphics_layout_item(self));
}

QRectF* q_legend_contents_rect(void* self) {
    return QGraphicsLayoutItem_ContentsRect(q_legend_as_q_graphics_layout_item(self));
}

QSizeF* q_legend_effective_size_hint(void* self, int32_t which) {
    return QGraphicsLayoutItem_EffectiveSizeHint(q_legend_as_q_graphics_layout_item(self), which);
}

bool q_legend_is_empty(void* self) {
    return QGraphicsLayoutItem_IsEmpty(q_legend_as_q_graphics_layout_item(self));
}

QGraphicsLayoutItem* q_legend_parent_layout_item(void* self) {
    return QGraphicsLayoutItem_ParentLayoutItem(q_legend_as_q_graphics_layout_item(self));
}

void q_legend_set_parent_layout_item(void* self, void* parent) {
    QGraphicsLayoutItem_SetParentLayoutItem(q_legend_as_q_graphics_layout_item(self), (QGraphicsLayoutItem*)parent);
}

bool q_legend_is_layout(void* self) {
    return QGraphicsLayoutItem_IsLayout(q_legend_as_q_graphics_layout_item(self));
}

QGraphicsItem* q_legend_graphics_item(void* self) {
    return QGraphicsLayoutItem_GraphicsItem(q_legend_as_q_graphics_layout_item(self));
}

bool q_legend_owned_by_layout(void* self) {
    return QGraphicsLayoutItem_OwnedByLayout(q_legend_as_q_graphics_layout_item(self));
}

void q_legend_set_size_policy3(void* self, int32_t hPolicy, int32_t vPolicy, int32_t controlType) {
    QGraphicsLayoutItem_SetSizePolicy3(q_legend_as_q_graphics_layout_item(self), hPolicy, vPolicy, controlType);
}

QSizeF* q_legend_effective_size_hint2(void* self, int32_t which, void* constraint) {
    return QGraphicsLayoutItem_EffectiveSizeHint2(q_legend_as_q_graphics_layout_item(self), which, (QSizeF*)constraint);
}

void q_legend_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_legend_delete(void* self) {
    QLegend_Delete((QLegend*)(self));
}
