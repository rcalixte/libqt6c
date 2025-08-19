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
    libqt_string _str = QLegend_Tr(s);
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

void q_legend_set_alignment(void* self, int64_t alignment) {
    QLegend_SetAlignment((QLegend*)self, alignment);
}

int64_t q_legend_alignment(void* self) {
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
    libqt_string _str = QLegend_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_legend_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QLegend_Tr3(s, c, n);
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

int64_t q_legend_window_flags(void* self) {
    return QGraphicsWidget_WindowFlags((QGraphicsWidget*)self);
}

int64_t q_legend_window_type(void* self) {
    return QGraphicsWidget_WindowType((QGraphicsWidget*)self);
}

void q_legend_set_window_flags(void* self, int64_t wFlags) {
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

void q_legend_add_actions(void* self, libqt_list actions) {
    QGraphicsWidget_AddActions((QGraphicsWidget*)self, actions);
}

void q_legend_insert_actions(void* self, void* before, libqt_list actions) {
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

void q_legend_grab_gesture(void* self, int64_t typeVal) {
    QGraphicsObject_GrabGesture((QGraphicsObject*)self, typeVal);
}

void q_legend_ungrab_gesture(void* self, int64_t typeVal) {
    QGraphicsObject_UngrabGesture((QGraphicsObject*)self, typeVal);
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

void q_legend_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QGraphicsObject_GrabGesture2((QGraphicsObject*)self, typeVal, flags);
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

void q_legend_set_object_name(void* self, char* name) {
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

QMetaObject__Connection* q_legend_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_legend_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_legend_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_legend_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
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
        fprintf(stderr, "Memory allocation failed in q_legend_dynamic_property_names");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
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

bool q_legend_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_legend_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_legend_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_legend_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_legend_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_legend_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QGraphicsScene* q_legend_scene(void* self) {
    return QGraphicsItem_Scene((QGraphicsItem*)self);
}

QGraphicsItem* q_legend_parent_item(void* self) {
    return QGraphicsItem_ParentItem((QGraphicsItem*)self);
}

QGraphicsItem* q_legend_top_level_item(void* self) {
    return QGraphicsItem_TopLevelItem((QGraphicsItem*)self);
}

QGraphicsObject* q_legend_parent_object(void* self) {
    return QGraphicsItem_ParentObject((QGraphicsItem*)self);
}

QGraphicsWidget* q_legend_parent_widget(void* self) {
    return QGraphicsItem_ParentWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_legend_top_level_widget(void* self) {
    return QGraphicsItem_TopLevelWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_legend_window(void* self) {
    return QGraphicsItem_Window((QGraphicsItem*)self);
}

QGraphicsItem* q_legend_panel(void* self) {
    return QGraphicsItem_Panel((QGraphicsItem*)self);
}

void q_legend_set_parent_item(void* self, void* parent) {
    QGraphicsItem_SetParentItem((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

libqt_list /* of QGraphicsItem* */ q_legend_child_items(void* self) {
    libqt_list _arr = QGraphicsItem_ChildItems((QGraphicsItem*)self);
    return _arr;
}

bool q_legend_is_widget(void* self) {
    return QGraphicsItem_IsWidget((QGraphicsItem*)self);
}

bool q_legend_is_window(void* self) {
    return QGraphicsItem_IsWindow((QGraphicsItem*)self);
}

bool q_legend_is_panel(void* self) {
    return QGraphicsItem_IsPanel((QGraphicsItem*)self);
}

QGraphicsObject* q_legend_to_graphics_object(void* self) {
    return QGraphicsItem_ToGraphicsObject((QGraphicsItem*)self);
}

const QGraphicsObject* q_legend_to_graphics_object2(void* self) {
    return QGraphicsItem_ToGraphicsObject2((QGraphicsItem*)self);
}

QGraphicsItemGroup* q_legend_group(void* self) {
    return QGraphicsItem_Group((QGraphicsItem*)self);
}

void q_legend_set_group(void* self, void* group) {
    QGraphicsItem_SetGroup((QGraphicsItem*)self, (QGraphicsItemGroup*)group);
}

int64_t q_legend_flags(void* self) {
    return QGraphicsItem_Flags((QGraphicsItem*)self);
}

void q_legend_set_flag(void* self, int32_t flag) {
    QGraphicsItem_SetFlag((QGraphicsItem*)self, flag);
}

void q_legend_set_flags(void* self, int64_t flags) {
    QGraphicsItem_SetFlags((QGraphicsItem*)self, flags);
}

int32_t q_legend_cache_mode(void* self) {
    return QGraphicsItem_CacheMode((QGraphicsItem*)self);
}

void q_legend_set_cache_mode(void* self, int32_t mode) {
    QGraphicsItem_SetCacheMode((QGraphicsItem*)self, mode);
}

int32_t q_legend_panel_modality(void* self) {
    return QGraphicsItem_PanelModality((QGraphicsItem*)self);
}

void q_legend_set_panel_modality(void* self, int32_t panelModality) {
    QGraphicsItem_SetPanelModality((QGraphicsItem*)self, panelModality);
}

bool q_legend_is_blocked_by_modal_panel(void* self) {
    return QGraphicsItem_IsBlockedByModalPanel((QGraphicsItem*)self);
}

const char* q_legend_tool_tip(void* self) {
    libqt_string _str = QGraphicsItem_ToolTip((QGraphicsItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_legend_set_tool_tip(void* self, const char* toolTip) {
    QGraphicsItem_SetToolTip((QGraphicsItem*)self, qstring(toolTip));
}

QCursor* q_legend_cursor(void* self) {
    return QGraphicsItem_Cursor((QGraphicsItem*)self);
}

void q_legend_set_cursor(void* self, void* cursor) {
    QGraphicsItem_SetCursor((QGraphicsItem*)self, (QCursor*)cursor);
}

bool q_legend_has_cursor(void* self) {
    return QGraphicsItem_HasCursor((QGraphicsItem*)self);
}

void q_legend_unset_cursor(void* self) {
    QGraphicsItem_UnsetCursor((QGraphicsItem*)self);
}

bool q_legend_is_visible(void* self) {
    return QGraphicsItem_IsVisible((QGraphicsItem*)self);
}

bool q_legend_is_visible_to(void* self, void* parent) {
    return QGraphicsItem_IsVisibleTo((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

void q_legend_set_visible(void* self, bool visible) {
    QGraphicsItem_SetVisible((QGraphicsItem*)self, visible);
}

void q_legend_hide(void* self) {
    QGraphicsItem_Hide((QGraphicsItem*)self);
}

void q_legend_show(void* self) {
    QGraphicsItem_Show((QGraphicsItem*)self);
}

bool q_legend_is_enabled(void* self) {
    return QGraphicsItem_IsEnabled((QGraphicsItem*)self);
}

void q_legend_set_enabled(void* self, bool enabled) {
    QGraphicsItem_SetEnabled((QGraphicsItem*)self, enabled);
}

bool q_legend_is_selected(void* self) {
    return QGraphicsItem_IsSelected((QGraphicsItem*)self);
}

void q_legend_set_selected(void* self, bool selected) {
    QGraphicsItem_SetSelected((QGraphicsItem*)self, selected);
}

bool q_legend_accept_drops(void* self) {
    return QGraphicsItem_AcceptDrops((QGraphicsItem*)self);
}

void q_legend_set_accept_drops(void* self, bool on) {
    QGraphicsItem_SetAcceptDrops((QGraphicsItem*)self, on);
}

double q_legend_opacity(void* self) {
    return QGraphicsItem_Opacity((QGraphicsItem*)self);
}

double q_legend_effective_opacity(void* self) {
    return QGraphicsItem_EffectiveOpacity((QGraphicsItem*)self);
}

void q_legend_set_opacity(void* self, double opacity) {
    QGraphicsItem_SetOpacity((QGraphicsItem*)self, opacity);
}

QGraphicsEffect* q_legend_graphics_effect(void* self) {
    return QGraphicsItem_GraphicsEffect((QGraphicsItem*)self);
}

void q_legend_set_graphics_effect(void* self, void* effect) {
    QGraphicsItem_SetGraphicsEffect((QGraphicsItem*)self, (QGraphicsEffect*)effect);
}

int64_t q_legend_accepted_mouse_buttons(void* self) {
    return QGraphicsItem_AcceptedMouseButtons((QGraphicsItem*)self);
}

void q_legend_set_accepted_mouse_buttons(void* self, int64_t buttons) {
    QGraphicsItem_SetAcceptedMouseButtons((QGraphicsItem*)self, buttons);
}

bool q_legend_accept_hover_events(void* self) {
    return QGraphicsItem_AcceptHoverEvents((QGraphicsItem*)self);
}

void q_legend_set_accept_hover_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptHoverEvents((QGraphicsItem*)self, enabled);
}

bool q_legend_accept_touch_events(void* self) {
    return QGraphicsItem_AcceptTouchEvents((QGraphicsItem*)self);
}

void q_legend_set_accept_touch_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptTouchEvents((QGraphicsItem*)self, enabled);
}

bool q_legend_filters_child_events(void* self) {
    return QGraphicsItem_FiltersChildEvents((QGraphicsItem*)self);
}

void q_legend_set_filters_child_events(void* self, bool enabled) {
    QGraphicsItem_SetFiltersChildEvents((QGraphicsItem*)self, enabled);
}

bool q_legend_handles_child_events(void* self) {
    return QGraphicsItem_HandlesChildEvents((QGraphicsItem*)self);
}

void q_legend_set_handles_child_events(void* self, bool enabled) {
    QGraphicsItem_SetHandlesChildEvents((QGraphicsItem*)self, enabled);
}

bool q_legend_is_active(void* self) {
    return QGraphicsItem_IsActive((QGraphicsItem*)self);
}

void q_legend_set_active(void* self, bool active) {
    QGraphicsItem_SetActive((QGraphicsItem*)self, active);
}

bool q_legend_has_focus(void* self) {
    return QGraphicsItem_HasFocus((QGraphicsItem*)self);
}

void q_legend_set_focus(void* self) {
    QGraphicsItem_SetFocus((QGraphicsItem*)self);
}

void q_legend_clear_focus(void* self) {
    QGraphicsItem_ClearFocus((QGraphicsItem*)self);
}

QGraphicsItem* q_legend_focus_proxy(void* self) {
    return QGraphicsItem_FocusProxy((QGraphicsItem*)self);
}

void q_legend_set_focus_proxy(void* self, void* item) {
    QGraphicsItem_SetFocusProxy((QGraphicsItem*)self, (QGraphicsItem*)item);
}

QGraphicsItem* q_legend_focus_item(void* self) {
    return QGraphicsItem_FocusItem((QGraphicsItem*)self);
}

QGraphicsItem* q_legend_focus_scope_item(void* self) {
    return QGraphicsItem_FocusScopeItem((QGraphicsItem*)self);
}

void q_legend_grab_mouse(void* self) {
    QGraphicsItem_GrabMouse((QGraphicsItem*)self);
}

void q_legend_ungrab_mouse(void* self) {
    QGraphicsItem_UngrabMouse((QGraphicsItem*)self);
}

void q_legend_grab_keyboard(void* self) {
    QGraphicsItem_GrabKeyboard((QGraphicsItem*)self);
}

void q_legend_ungrab_keyboard(void* self) {
    QGraphicsItem_UngrabKeyboard((QGraphicsItem*)self);
}

QPointF* q_legend_pos(void* self) {
    return QGraphicsItem_Pos((QGraphicsItem*)self);
}

double q_legend_x(void* self) {
    return QGraphicsItem_X((QGraphicsItem*)self);
}

void q_legend_set_x(void* self, double x) {
    QGraphicsItem_SetX((QGraphicsItem*)self, x);
}

double q_legend_y(void* self) {
    return QGraphicsItem_Y((QGraphicsItem*)self);
}

void q_legend_set_y(void* self, double y) {
    QGraphicsItem_SetY((QGraphicsItem*)self, y);
}

QPointF* q_legend_scene_pos(void* self) {
    return QGraphicsItem_ScenePos((QGraphicsItem*)self);
}

void q_legend_set_pos(void* self, void* pos) {
    QGraphicsItem_SetPos((QGraphicsItem*)self, (QPointF*)pos);
}

void q_legend_set_pos2(void* self, double x, double y) {
    QGraphicsItem_SetPos2((QGraphicsItem*)self, x, y);
}

void q_legend_move_by(void* self, double dx, double dy) {
    QGraphicsItem_MoveBy((QGraphicsItem*)self, dx, dy);
}

void q_legend_ensure_visible(void* self) {
    QGraphicsItem_EnsureVisible((QGraphicsItem*)self);
}

void q_legend_ensure_visible2(void* self, double x, double y, double w, double h) {
    QGraphicsItem_EnsureVisible2((QGraphicsItem*)self, x, y, w, h);
}

QTransform* q_legend_transform(void* self) {
    return QGraphicsItem_Transform((QGraphicsItem*)self);
}

QTransform* q_legend_scene_transform(void* self) {
    return QGraphicsItem_SceneTransform((QGraphicsItem*)self);
}

QTransform* q_legend_device_transform(void* self, void* viewportTransform) {
    return QGraphicsItem_DeviceTransform((QGraphicsItem*)self, (QTransform*)viewportTransform);
}

QTransform* q_legend_item_transform(void* self, void* other) {
    return QGraphicsItem_ItemTransform((QGraphicsItem*)self, (QGraphicsItem*)other);
}

void q_legend_set_transform(void* self, void* matrix) {
    QGraphicsItem_SetTransform((QGraphicsItem*)self, (QTransform*)matrix);
}

void q_legend_reset_transform(void* self) {
    QGraphicsItem_ResetTransform((QGraphicsItem*)self);
}

void q_legend_set_rotation(void* self, double angle) {
    QGraphicsItem_SetRotation((QGraphicsItem*)self, angle);
}

double q_legend_rotation(void* self) {
    return QGraphicsItem_Rotation((QGraphicsItem*)self);
}

void q_legend_set_scale(void* self, double scale) {
    QGraphicsItem_SetScale((QGraphicsItem*)self, scale);
}

double q_legend_scale(void* self) {
    return QGraphicsItem_Scale((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsTransform* */ q_legend_transformations(void* self) {
    libqt_list _arr = QGraphicsItem_Transformations((QGraphicsItem*)self);
    return _arr;
}

void q_legend_set_transformations(void* self, libqt_list transformations) {
    QGraphicsItem_SetTransformations((QGraphicsItem*)self, transformations);
}

QPointF* q_legend_transform_origin_point(void* self) {
    return QGraphicsItem_TransformOriginPoint((QGraphicsItem*)self);
}

void q_legend_set_transform_origin_point(void* self, void* origin) {
    QGraphicsItem_SetTransformOriginPoint((QGraphicsItem*)self, (QPointF*)origin);
}

void q_legend_set_transform_origin_point2(void* self, double ax, double ay) {
    QGraphicsItem_SetTransformOriginPoint2((QGraphicsItem*)self, ax, ay);
}

void q_legend_advance(void* self, int phase) {
    QGraphicsItem_Advance((QGraphicsItem*)self, phase);
}

double q_legend_z_value(void* self) {
    return QGraphicsItem_ZValue((QGraphicsItem*)self);
}

void q_legend_set_z_value(void* self, double z) {
    QGraphicsItem_SetZValue((QGraphicsItem*)self, z);
}

void q_legend_stack_before(void* self, void* sibling) {
    QGraphicsItem_StackBefore((QGraphicsItem*)self, (QGraphicsItem*)sibling);
}

QRectF* q_legend_children_bounding_rect(void* self) {
    return QGraphicsItem_ChildrenBoundingRect((QGraphicsItem*)self);
}

QRectF* q_legend_scene_bounding_rect(void* self) {
    return QGraphicsItem_SceneBoundingRect((QGraphicsItem*)self);
}

bool q_legend_is_clipped(void* self) {
    return QGraphicsItem_IsClipped((QGraphicsItem*)self);
}

QPainterPath* q_legend_clip_path(void* self) {
    return QGraphicsItem_ClipPath((QGraphicsItem*)self);
}

bool q_legend_contains(void* self, void* point) {
    return QGraphicsItem_Contains((QGraphicsItem*)self, (QPointF*)point);
}

bool q_legend_collides_with_item(void* self, void* other, int32_t mode) {
    return QGraphicsItem_CollidesWithItem((QGraphicsItem*)self, (QGraphicsItem*)other, mode);
}

bool q_legend_collides_with_path(void* self, void* path, int32_t mode) {
    return QGraphicsItem_CollidesWithPath((QGraphicsItem*)self, (QPainterPath*)path, mode);
}

libqt_list /* of QGraphicsItem* */ q_legend_colliding_items(void* self) {
    libqt_list _arr = QGraphicsItem_CollidingItems((QGraphicsItem*)self);
    return _arr;
}

bool q_legend_is_obscured(void* self) {
    return QGraphicsItem_IsObscured((QGraphicsItem*)self);
}

bool q_legend_is_obscured2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_IsObscured2((QGraphicsItem*)self, x, y, w, h);
}

bool q_legend_is_obscured_by(void* self, void* item) {
    return QGraphicsItem_IsObscuredBy((QGraphicsItem*)self, (QGraphicsItem*)item);
}

QPainterPath* q_legend_opaque_area(void* self) {
    return QGraphicsItem_OpaqueArea((QGraphicsItem*)self);
}

QRegion* q_legend_bounding_region(void* self, void* itemToDeviceTransform) {
    return QGraphicsItem_BoundingRegion((QGraphicsItem*)self, (QTransform*)itemToDeviceTransform);
}

double q_legend_bounding_region_granularity(void* self) {
    return QGraphicsItem_BoundingRegionGranularity((QGraphicsItem*)self);
}

void q_legend_set_bounding_region_granularity(void* self, double granularity) {
    QGraphicsItem_SetBoundingRegionGranularity((QGraphicsItem*)self, granularity);
}

void q_legend_update(void* self) {
    QGraphicsItem_Update((QGraphicsItem*)self);
}

void q_legend_update2(void* self, double x, double y, double width, double height) {
    QGraphicsItem_Update2((QGraphicsItem*)self, x, y, width, height);
}

void q_legend_scroll(void* self, double dx, double dy) {
    QGraphicsItem_Scroll((QGraphicsItem*)self, dx, dy);
}

QPointF* q_legend_map_to_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_legend_map_to_parent(void* self, void* point) {
    return QGraphicsItem_MapToParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_legend_map_to_scene(void* self, void* point) {
    return QGraphicsItem_MapToScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_legend_map_rect_to_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_legend_map_rect_to_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectToParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_legend_map_rect_to_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectToScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_legend_map_to_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapToItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_legend_map_to_parent4(void* self, void* path) {
    return QGraphicsItem_MapToParent4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_legend_map_to_scene4(void* self, void* path) {
    return QGraphicsItem_MapToScene4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_legend_map_from_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_legend_map_from_parent(void* self, void* point) {
    return QGraphicsItem_MapFromParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_legend_map_from_scene(void* self, void* point) {
    return QGraphicsItem_MapFromScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_legend_map_rect_from_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_legend_map_rect_from_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectFromParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_legend_map_rect_from_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectFromScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_legend_map_from_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapFromItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_legend_map_from_parent4(void* self, void* path) {
    return QGraphicsItem_MapFromParent4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_legend_map_from_scene4(void* self, void* path) {
    return QGraphicsItem_MapFromScene4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_legend_map_to_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapToItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_legend_map_to_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapToParent5((QGraphicsItem*)self, x, y);
}

QPointF* q_legend_map_to_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapToScene5((QGraphicsItem*)self, x, y);
}

QRectF* q_legend_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_legend_map_rect_to_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_legend_map_rect_to_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToScene2((QGraphicsItem*)self, x, y, w, h);
}

QPointF* q_legend_map_from_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapFromItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_legend_map_from_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapFromParent5((QGraphicsItem*)self, x, y);
}

QPointF* q_legend_map_from_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapFromScene5((QGraphicsItem*)self, x, y);
}

QRectF* q_legend_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_legend_map_rect_from_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_legend_map_rect_from_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromScene2((QGraphicsItem*)self, x, y, w, h);
}

bool q_legend_is_ancestor_of(void* self, void* child) {
    return QGraphicsItem_IsAncestorOf((QGraphicsItem*)self, (QGraphicsItem*)child);
}

QGraphicsItem* q_legend_common_ancestor_item(void* self, void* other) {
    return QGraphicsItem_CommonAncestorItem((QGraphicsItem*)self, (QGraphicsItem*)other);
}

bool q_legend_is_under_mouse(void* self) {
    return QGraphicsItem_IsUnderMouse((QGraphicsItem*)self);
}

QVariant* q_legend_data(void* self, int key) {
    return QGraphicsItem_Data((QGraphicsItem*)self, key);
}

void q_legend_set_data(void* self, int key, void* value) {
    QGraphicsItem_SetData((QGraphicsItem*)self, key, (QVariant*)value);
}

int64_t q_legend_input_method_hints(void* self) {
    return QGraphicsItem_InputMethodHints((QGraphicsItem*)self);
}

void q_legend_set_input_method_hints(void* self, int64_t hints) {
    QGraphicsItem_SetInputMethodHints((QGraphicsItem*)self, hints);
}

void q_legend_install_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_InstallSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_legend_remove_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_RemoveSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_legend_set_flag2(void* self, int32_t flag, bool enabled) {
    QGraphicsItem_SetFlag2((QGraphicsItem*)self, flag, enabled);
}

void q_legend_set_cache_mode2(void* self, int32_t mode, void* cacheSize) {
    QGraphicsItem_SetCacheMode2((QGraphicsItem*)self, mode, (QSize*)cacheSize);
}

void q_legend_set_focus1(void* self, int32_t focusReason) {
    QGraphicsItem_SetFocus1((QGraphicsItem*)self, focusReason);
}

void q_legend_ensure_visible1(void* self, void* rect) {
    QGraphicsItem_EnsureVisible1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_legend_ensure_visible22(void* self, void* rect, int xmargin) {
    QGraphicsItem_EnsureVisible22((QGraphicsItem*)self, (QRectF*)rect, xmargin);
}

void q_legend_ensure_visible3(void* self, void* rect, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible3((QGraphicsItem*)self, (QRectF*)rect, xmargin, ymargin);
}

void q_legend_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin) {
    QGraphicsItem_EnsureVisible5((QGraphicsItem*)self, x, y, w, h, xmargin);
}

void q_legend_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible6((QGraphicsItem*)self, x, y, w, h, xmargin, ymargin);
}

QTransform* q_legend_item_transform2(void* self, void* other, bool* ok) {
    return QGraphicsItem_ItemTransform2((QGraphicsItem*)self, (QGraphicsItem*)other, (bool*)ok);
}

void q_legend_set_transform2(void* self, void* matrix, bool combine) {
    QGraphicsItem_SetTransform2((QGraphicsItem*)self, (QTransform*)matrix, combine);
}

libqt_list /* of QGraphicsItem* */ q_legend_colliding_items1(void* self, int32_t mode) {
    libqt_list _arr = QGraphicsItem_CollidingItems1((QGraphicsItem*)self, mode);
    return _arr;
}

bool q_legend_is_obscured1(void* self, void* rect) {
    return QGraphicsItem_IsObscured1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_legend_update1(void* self, void* rect) {
    QGraphicsItem_Update1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_legend_scroll3(void* self, double dx, double dy, void* rect) {
    QGraphicsItem_Scroll3((QGraphicsItem*)self, dx, dy, (QRectF*)rect);
}

void q_legend_set_size_policy(void* self, void* policy) {
    QGraphicsLayoutItem_SetSizePolicy((QGraphicsLayoutItem*)self, (QSizePolicy*)policy);
}

void q_legend_set_size_policy2(void* self, int32_t hPolicy, int32_t vPolicy) {
    QGraphicsLayoutItem_SetSizePolicy2((QGraphicsLayoutItem*)self, hPolicy, vPolicy);
}

QSizePolicy* q_legend_size_policy(void* self) {
    return QGraphicsLayoutItem_SizePolicy((QGraphicsLayoutItem*)self);
}

void q_legend_set_minimum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMinimumSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

void q_legend_set_minimum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMinimumSize2((QGraphicsLayoutItem*)self, w, h);
}

QSizeF* q_legend_minimum_size(void* self) {
    return QGraphicsLayoutItem_MinimumSize((QGraphicsLayoutItem*)self);
}

void q_legend_set_minimum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMinimumWidth((QGraphicsLayoutItem*)self, width);
}

double q_legend_minimum_width(void* self) {
    return QGraphicsLayoutItem_MinimumWidth((QGraphicsLayoutItem*)self);
}

void q_legend_set_minimum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMinimumHeight((QGraphicsLayoutItem*)self, height);
}

double q_legend_minimum_height(void* self) {
    return QGraphicsLayoutItem_MinimumHeight((QGraphicsLayoutItem*)self);
}

void q_legend_set_preferred_size(void* self, void* size) {
    QGraphicsLayoutItem_SetPreferredSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

void q_legend_set_preferred_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetPreferredSize2((QGraphicsLayoutItem*)self, w, h);
}

QSizeF* q_legend_preferred_size(void* self) {
    return QGraphicsLayoutItem_PreferredSize((QGraphicsLayoutItem*)self);
}

void q_legend_set_preferred_width(void* self, double width) {
    QGraphicsLayoutItem_SetPreferredWidth((QGraphicsLayoutItem*)self, width);
}

double q_legend_preferred_width(void* self) {
    return QGraphicsLayoutItem_PreferredWidth((QGraphicsLayoutItem*)self);
}

void q_legend_set_preferred_height(void* self, double height) {
    QGraphicsLayoutItem_SetPreferredHeight((QGraphicsLayoutItem*)self, height);
}

double q_legend_preferred_height(void* self) {
    return QGraphicsLayoutItem_PreferredHeight((QGraphicsLayoutItem*)self);
}

void q_legend_set_maximum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMaximumSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

void q_legend_set_maximum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMaximumSize2((QGraphicsLayoutItem*)self, w, h);
}

QSizeF* q_legend_maximum_size(void* self) {
    return QGraphicsLayoutItem_MaximumSize((QGraphicsLayoutItem*)self);
}

void q_legend_set_maximum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMaximumWidth((QGraphicsLayoutItem*)self, width);
}

double q_legend_maximum_width(void* self) {
    return QGraphicsLayoutItem_MaximumWidth((QGraphicsLayoutItem*)self);
}

void q_legend_set_maximum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMaximumHeight((QGraphicsLayoutItem*)self, height);
}

double q_legend_maximum_height(void* self) {
    return QGraphicsLayoutItem_MaximumHeight((QGraphicsLayoutItem*)self);
}

QRectF* q_legend_geometry(void* self) {
    return QGraphicsLayoutItem_Geometry((QGraphicsLayoutItem*)self);
}

QRectF* q_legend_contents_rect(void* self) {
    return QGraphicsLayoutItem_ContentsRect((QGraphicsLayoutItem*)self);
}

QSizeF* q_legend_effective_size_hint(void* self, int32_t which) {
    return QGraphicsLayoutItem_EffectiveSizeHint((QGraphicsLayoutItem*)self, which);
}

bool q_legend_is_empty(void* self) {
    return QGraphicsLayoutItem_IsEmpty((QGraphicsLayoutItem*)self);
}

QGraphicsLayoutItem* q_legend_parent_layout_item(void* self) {
    return QGraphicsLayoutItem_ParentLayoutItem((QGraphicsLayoutItem*)self);
}

void q_legend_set_parent_layout_item(void* self, void* parent) {
    QGraphicsLayoutItem_SetParentLayoutItem((QGraphicsLayoutItem*)self, (QGraphicsLayoutItem*)parent);
}

bool q_legend_is_layout(void* self) {
    return QGraphicsLayoutItem_IsLayout((QGraphicsLayoutItem*)self);
}

QGraphicsItem* q_legend_graphics_item(void* self) {
    return QGraphicsLayoutItem_GraphicsItem((QGraphicsLayoutItem*)self);
}

bool q_legend_owned_by_layout(void* self) {
    return QGraphicsLayoutItem_OwnedByLayout((QGraphicsLayoutItem*)self);
}

void q_legend_set_size_policy3(void* self, int32_t hPolicy, int32_t vPolicy, int32_t controlType) {
    QGraphicsLayoutItem_SetSizePolicy3((QGraphicsLayoutItem*)self, hPolicy, vPolicy, controlType);
}

QSizeF* q_legend_effective_size_hint2(void* self, int32_t which, void* constraint) {
    return QGraphicsLayoutItem_EffectiveSizeHint2((QGraphicsLayoutItem*)self, which, (QSizeF*)constraint);
}

void q_legend_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_legend_delete(void* self) {
    QLegend_Delete((QLegend*)(self));
}
