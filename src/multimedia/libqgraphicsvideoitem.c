#include "../libqcoreevent.hpp"
#include "../libqevent.hpp"
#include "../libqgraphicsitem.hpp"
#include "../libqgraphicssceneevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpainter.hpp"
#include "../libqpainterpath.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include "../libqstyleoption.hpp"
#include "../libqvariant.hpp"
#include "libqvideosink.hpp"
#include "../libqwidget.hpp"
#include "libqgraphicsvideoitem.hpp"
#include "libqgraphicsvideoitem.h"

QGraphicsVideoItem* q_graphicsvideoitem_new() {
    return QGraphicsVideoItem_new();
}

QGraphicsVideoItem* q_graphicsvideoitem_new2(void* parent) {
    return QGraphicsVideoItem_new2((QGraphicsItem*)parent);
}

const QMetaObject* q_graphicsvideoitem_meta_object(void* self) {
    return QGraphicsVideoItem_MetaObject((QGraphicsVideoItem*)self);
}

void* q_graphicsvideoitem_metacast(void* self, const char* param1) {
    return QGraphicsVideoItem_Metacast((QGraphicsVideoItem*)self, param1);
}

int32_t q_graphicsvideoitem_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGraphicsVideoItem_Metacall((QGraphicsVideoItem*)self, param1, param2, param3);
}

void q_graphicsvideoitem_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QGraphicsVideoItem_OnMetacall((QGraphicsVideoItem*)self, (intptr_t)callback);
}

int32_t q_graphicsvideoitem_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGraphicsVideoItem_QBaseMetacall((QGraphicsVideoItem*)self, param1, param2, param3);
}

const char* q_graphicsvideoitem_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QVideoSink* q_graphicsvideoitem_video_sink(void* self) {
    return QGraphicsVideoItem_VideoSink((QGraphicsVideoItem*)self);
}

int32_t q_graphicsvideoitem_aspect_ratio_mode(void* self) {
    return QGraphicsVideoItem_AspectRatioMode((QGraphicsVideoItem*)self);
}

void q_graphicsvideoitem_set_aspect_ratio_mode(void* self, int32_t mode) {
    QGraphicsVideoItem_SetAspectRatioMode((QGraphicsVideoItem*)self, mode);
}

QPointF* q_graphicsvideoitem_offset(void* self) {
    return QGraphicsVideoItem_Offset((QGraphicsVideoItem*)self);
}

void q_graphicsvideoitem_set_offset(void* self, void* offset) {
    QGraphicsVideoItem_SetOffset((QGraphicsVideoItem*)self, (QPointF*)offset);
}

QSizeF* q_graphicsvideoitem_size(void* self) {
    return QGraphicsVideoItem_Size((QGraphicsVideoItem*)self);
}

void q_graphicsvideoitem_set_size(void* self, void* size) {
    QGraphicsVideoItem_SetSize((QGraphicsVideoItem*)self, (QSizeF*)size);
}

QSizeF* q_graphicsvideoitem_native_size(void* self) {
    return QGraphicsVideoItem_NativeSize((QGraphicsVideoItem*)self);
}

QRectF* q_graphicsvideoitem_bounding_rect(void* self) {
    return QGraphicsVideoItem_BoundingRect((QGraphicsVideoItem*)self);
}

void q_graphicsvideoitem_on_bounding_rect(void* self, QRectF* (*callback)()) {
    QGraphicsVideoItem_OnBoundingRect((QGraphicsVideoItem*)self, (intptr_t)callback);
}

QRectF* q_graphicsvideoitem_qbase_bounding_rect(void* self) {
    return QGraphicsVideoItem_QBaseBoundingRect((QGraphicsVideoItem*)self);
}

void q_graphicsvideoitem_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsVideoItem_Paint((QGraphicsVideoItem*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_graphicsvideoitem_on_paint(void* self, void (*callback)(void*, void*, void*, void*)) {
    QGraphicsVideoItem_OnPaint((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_qbase_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsVideoItem_QBasePaint((QGraphicsVideoItem*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

int32_t q_graphicsvideoitem_type(void* self) {
    return QGraphicsVideoItem_Type((QGraphicsVideoItem*)self);
}

void q_graphicsvideoitem_on_type(void* self, int32_t (*callback)()) {
    QGraphicsVideoItem_OnType((QGraphicsVideoItem*)self, (intptr_t)callback);
}

int32_t q_graphicsvideoitem_qbase_type(void* self) {
    return QGraphicsVideoItem_QBaseType((QGraphicsVideoItem*)self);
}

void q_graphicsvideoitem_native_size_changed(void* self, void* size) {
    QGraphicsVideoItem_NativeSizeChanged((QGraphicsVideoItem*)self, (QSizeF*)size);
}

void q_graphicsvideoitem_on_native_size_changed(void* self, void (*callback)(void*, void*)) {
    QGraphicsVideoItem_Connect_NativeSizeChanged((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_timer_event(void* self, void* event) {
    QGraphicsVideoItem_TimerEvent((QGraphicsVideoItem*)self, (QTimerEvent*)event);
}

void q_graphicsvideoitem_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsVideoItem_OnTimerEvent((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_qbase_timer_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseTimerEvent((QGraphicsVideoItem*)self, (QTimerEvent*)event);
}

QVariant* q_graphicsvideoitem_item_change(void* self, int32_t change, void* value) {
    return QGraphicsVideoItem_ItemChange((QGraphicsVideoItem*)self, change, (QVariant*)value);
}

void q_graphicsvideoitem_on_item_change(void* self, QVariant* (*callback)(void*, int32_t, void*)) {
    QGraphicsVideoItem_OnItemChange((QGraphicsVideoItem*)self, (intptr_t)callback);
}

QVariant* q_graphicsvideoitem_qbase_item_change(void* self, int32_t change, void* value) {
    return QGraphicsVideoItem_QBaseItemChange((QGraphicsVideoItem*)self, change, (QVariant*)value);
}

const char* q_graphicsvideoitem_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_graphicsvideoitem_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsvideoitem_grab_gesture(void* self, int32_t type) {
    QGraphicsObject_GrabGesture((QGraphicsObject*)self, type);
}

void q_graphicsvideoitem_ungrab_gesture(void* self, int32_t type) {
    QGraphicsObject_UngrabGesture((QGraphicsObject*)self, type);
}

void q_graphicsvideoitem_parent_changed(void* self) {
    QGraphicsObject_ParentChanged((QGraphicsObject*)self);
}

void q_graphicsvideoitem_on_parent_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ParentChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_opacity_changed(void* self) {
    QGraphicsObject_OpacityChanged((QGraphicsObject*)self);
}

void q_graphicsvideoitem_on_opacity_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_OpacityChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_visible_changed(void* self) {
    QGraphicsObject_VisibleChanged((QGraphicsObject*)self);
}

void q_graphicsvideoitem_on_visible_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_VisibleChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_enabled_changed(void* self) {
    QGraphicsObject_EnabledChanged((QGraphicsObject*)self);
}

void q_graphicsvideoitem_on_enabled_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_EnabledChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_x_changed(void* self) {
    QGraphicsObject_XChanged((QGraphicsObject*)self);
}

void q_graphicsvideoitem_on_x_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_XChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_y_changed(void* self) {
    QGraphicsObject_YChanged((QGraphicsObject*)self);
}

void q_graphicsvideoitem_on_y_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_YChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_z_changed(void* self) {
    QGraphicsObject_ZChanged((QGraphicsObject*)self);
}

void q_graphicsvideoitem_on_z_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ZChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_rotation_changed(void* self) {
    QGraphicsObject_RotationChanged((QGraphicsObject*)self);
}

void q_graphicsvideoitem_on_rotation_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_RotationChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_scale_changed(void* self) {
    QGraphicsObject_ScaleChanged((QGraphicsObject*)self);
}

void q_graphicsvideoitem_on_scale_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ScaleChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_children_changed(void* self) {
    QGraphicsObject_ChildrenChanged((QGraphicsObject*)self);
}

void q_graphicsvideoitem_on_children_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ChildrenChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_width_changed(void* self) {
    QGraphicsObject_WidthChanged((QGraphicsObject*)self);
}

void q_graphicsvideoitem_on_width_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_WidthChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_height_changed(void* self) {
    QGraphicsObject_HeightChanged((QGraphicsObject*)self);
}

void q_graphicsvideoitem_on_height_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_HeightChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QGraphicsObject_GrabGesture2((QGraphicsObject*)self, type, flags);
}

const char* q_graphicsvideoitem_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsvideoitem_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_graphicsvideoitem_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_graphicsvideoitem_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_graphicsvideoitem_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_graphicsvideoitem_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_graphicsvideoitem_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_graphicsvideoitem_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_graphicsvideoitem_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_graphicsvideoitem_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_graphicsvideoitem_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_graphicsvideoitem_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_graphicsvideoitem_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_graphicsvideoitem_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_graphicsvideoitem_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_graphicsvideoitem_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_graphicsvideoitem_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_graphicsvideoitem_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_graphicsvideoitem_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_graphicsvideoitem_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_graphicsvideoitem_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_graphicsvideoitem_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_graphicsvideoitem_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_graphicsvideoitem_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_graphicsvideoitem_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_graphicsvideoitem_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_graphicsvideoitem_dynamic_property_names\n");
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

QBindingStorage* q_graphicsvideoitem_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_graphicsvideoitem_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_graphicsvideoitem_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_graphicsvideoitem_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_graphicsvideoitem_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_graphicsvideoitem_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_graphicsvideoitem_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_graphicsvideoitem_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_graphicsvideoitem_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_graphicsvideoitem_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_graphicsvideoitem_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_graphicsvideoitem_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_graphicsvideoitem_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_graphicsvideoitem_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QGraphicsScene* q_graphicsvideoitem_scene(void* self) {
    return QGraphicsItem_Scene((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsvideoitem_parent_item(void* self) {
    return QGraphicsItem_ParentItem((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsvideoitem_top_level_item(void* self) {
    return QGraphicsItem_TopLevelItem((QGraphicsItem*)self);
}

QGraphicsObject* q_graphicsvideoitem_parent_object(void* self) {
    return QGraphicsItem_ParentObject((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicsvideoitem_parent_widget(void* self) {
    return QGraphicsItem_ParentWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicsvideoitem_top_level_widget(void* self) {
    return QGraphicsItem_TopLevelWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicsvideoitem_window(void* self) {
    return QGraphicsItem_Window((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsvideoitem_panel(void* self) {
    return QGraphicsItem_Panel((QGraphicsItem*)self);
}

void q_graphicsvideoitem_set_parent_item(void* self, void* parent) {
    QGraphicsItem_SetParentItem((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

libqt_list /* of QGraphicsItem* */ q_graphicsvideoitem_child_items(void* self) {
    libqt_list _arr = QGraphicsItem_ChildItems((QGraphicsItem*)self);
    return _arr;
}

bool q_graphicsvideoitem_is_widget(void* self) {
    return QGraphicsItem_IsWidget((QGraphicsItem*)self);
}

bool q_graphicsvideoitem_is_window(void* self) {
    return QGraphicsItem_IsWindow((QGraphicsItem*)self);
}

bool q_graphicsvideoitem_is_panel(void* self) {
    return QGraphicsItem_IsPanel((QGraphicsItem*)self);
}

QGraphicsObject* q_graphicsvideoitem_to_graphics_object(void* self) {
    return QGraphicsItem_ToGraphicsObject((QGraphicsItem*)self);
}

const QGraphicsObject* q_graphicsvideoitem_to_graphics_object2(void* self) {
    return QGraphicsItem_ToGraphicsObject2((QGraphicsItem*)self);
}

QGraphicsItemGroup* q_graphicsvideoitem_group(void* self) {
    return QGraphicsItem_Group((QGraphicsItem*)self);
}

void q_graphicsvideoitem_set_group(void* self, void* group) {
    QGraphicsItem_SetGroup((QGraphicsItem*)self, (QGraphicsItemGroup*)group);
}

int32_t q_graphicsvideoitem_flags(void* self) {
    return QGraphicsItem_Flags((QGraphicsItem*)self);
}

void q_graphicsvideoitem_set_flag(void* self, int32_t flag) {
    QGraphicsItem_SetFlag((QGraphicsItem*)self, flag);
}

void q_graphicsvideoitem_set_flags(void* self, int32_t flags) {
    QGraphicsItem_SetFlags((QGraphicsItem*)self, flags);
}

int32_t q_graphicsvideoitem_cache_mode(void* self) {
    return QGraphicsItem_CacheMode((QGraphicsItem*)self);
}

void q_graphicsvideoitem_set_cache_mode(void* self, int32_t mode) {
    QGraphicsItem_SetCacheMode((QGraphicsItem*)self, mode);
}

int32_t q_graphicsvideoitem_panel_modality(void* self) {
    return QGraphicsItem_PanelModality((QGraphicsItem*)self);
}

void q_graphicsvideoitem_set_panel_modality(void* self, int32_t panelModality) {
    QGraphicsItem_SetPanelModality((QGraphicsItem*)self, panelModality);
}

bool q_graphicsvideoitem_is_blocked_by_modal_panel(void* self) {
    return QGraphicsItem_IsBlockedByModalPanel((QGraphicsItem*)self);
}

const char* q_graphicsvideoitem_tool_tip(void* self) {
    libqt_string _str = QGraphicsItem_ToolTip((QGraphicsItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsvideoitem_set_tool_tip(void* self, const char* toolTip) {
    QGraphicsItem_SetToolTip((QGraphicsItem*)self, qstring(toolTip));
}

QCursor* q_graphicsvideoitem_cursor(void* self) {
    return QGraphicsItem_Cursor((QGraphicsItem*)self);
}

void q_graphicsvideoitem_set_cursor(void* self, void* cursor) {
    QGraphicsItem_SetCursor((QGraphicsItem*)self, (QCursor*)cursor);
}

bool q_graphicsvideoitem_has_cursor(void* self) {
    return QGraphicsItem_HasCursor((QGraphicsItem*)self);
}

void q_graphicsvideoitem_unset_cursor(void* self) {
    QGraphicsItem_UnsetCursor((QGraphicsItem*)self);
}

bool q_graphicsvideoitem_is_visible(void* self) {
    return QGraphicsItem_IsVisible((QGraphicsItem*)self);
}

bool q_graphicsvideoitem_is_visible_to(void* self, void* parent) {
    return QGraphicsItem_IsVisibleTo((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

void q_graphicsvideoitem_set_visible(void* self, bool visible) {
    QGraphicsItem_SetVisible((QGraphicsItem*)self, visible);
}

void q_graphicsvideoitem_hide(void* self) {
    QGraphicsItem_Hide((QGraphicsItem*)self);
}

void q_graphicsvideoitem_show(void* self) {
    QGraphicsItem_Show((QGraphicsItem*)self);
}

bool q_graphicsvideoitem_is_enabled(void* self) {
    return QGraphicsItem_IsEnabled((QGraphicsItem*)self);
}

void q_graphicsvideoitem_set_enabled(void* self, bool enabled) {
    QGraphicsItem_SetEnabled((QGraphicsItem*)self, enabled);
}

bool q_graphicsvideoitem_is_selected(void* self) {
    return QGraphicsItem_IsSelected((QGraphicsItem*)self);
}

void q_graphicsvideoitem_set_selected(void* self, bool selected) {
    QGraphicsItem_SetSelected((QGraphicsItem*)self, selected);
}

bool q_graphicsvideoitem_accept_drops(void* self) {
    return QGraphicsItem_AcceptDrops((QGraphicsItem*)self);
}

void q_graphicsvideoitem_set_accept_drops(void* self, bool on) {
    QGraphicsItem_SetAcceptDrops((QGraphicsItem*)self, on);
}

double q_graphicsvideoitem_opacity(void* self) {
    return QGraphicsItem_Opacity((QGraphicsItem*)self);
}

double q_graphicsvideoitem_effective_opacity(void* self) {
    return QGraphicsItem_EffectiveOpacity((QGraphicsItem*)self);
}

void q_graphicsvideoitem_set_opacity(void* self, double opacity) {
    QGraphicsItem_SetOpacity((QGraphicsItem*)self, opacity);
}

QGraphicsEffect* q_graphicsvideoitem_graphics_effect(void* self) {
    return QGraphicsItem_GraphicsEffect((QGraphicsItem*)self);
}

void q_graphicsvideoitem_set_graphics_effect(void* self, void* effect) {
    QGraphicsItem_SetGraphicsEffect((QGraphicsItem*)self, (QGraphicsEffect*)effect);
}

int32_t q_graphicsvideoitem_accepted_mouse_buttons(void* self) {
    return QGraphicsItem_AcceptedMouseButtons((QGraphicsItem*)self);
}

void q_graphicsvideoitem_set_accepted_mouse_buttons(void* self, int32_t buttons) {
    QGraphicsItem_SetAcceptedMouseButtons((QGraphicsItem*)self, buttons);
}

bool q_graphicsvideoitem_accept_hover_events(void* self) {
    return QGraphicsItem_AcceptHoverEvents((QGraphicsItem*)self);
}

void q_graphicsvideoitem_set_accept_hover_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptHoverEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicsvideoitem_accept_touch_events(void* self) {
    return QGraphicsItem_AcceptTouchEvents((QGraphicsItem*)self);
}

void q_graphicsvideoitem_set_accept_touch_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptTouchEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicsvideoitem_filters_child_events(void* self) {
    return QGraphicsItem_FiltersChildEvents((QGraphicsItem*)self);
}

void q_graphicsvideoitem_set_filters_child_events(void* self, bool enabled) {
    QGraphicsItem_SetFiltersChildEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicsvideoitem_handles_child_events(void* self) {
    return QGraphicsItem_HandlesChildEvents((QGraphicsItem*)self);
}

void q_graphicsvideoitem_set_handles_child_events(void* self, bool enabled) {
    QGraphicsItem_SetHandlesChildEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicsvideoitem_is_active(void* self) {
    return QGraphicsItem_IsActive((QGraphicsItem*)self);
}

void q_graphicsvideoitem_set_active(void* self, bool active) {
    QGraphicsItem_SetActive((QGraphicsItem*)self, active);
}

bool q_graphicsvideoitem_has_focus(void* self) {
    return QGraphicsItem_HasFocus((QGraphicsItem*)self);
}

void q_graphicsvideoitem_set_focus(void* self) {
    QGraphicsItem_SetFocus((QGraphicsItem*)self);
}

void q_graphicsvideoitem_clear_focus(void* self) {
    QGraphicsItem_ClearFocus((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsvideoitem_focus_proxy(void* self) {
    return QGraphicsItem_FocusProxy((QGraphicsItem*)self);
}

void q_graphicsvideoitem_set_focus_proxy(void* self, void* item) {
    QGraphicsItem_SetFocusProxy((QGraphicsItem*)self, (QGraphicsItem*)item);
}

QGraphicsItem* q_graphicsvideoitem_focus_item(void* self) {
    return QGraphicsItem_FocusItem((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsvideoitem_focus_scope_item(void* self) {
    return QGraphicsItem_FocusScopeItem((QGraphicsItem*)self);
}

void q_graphicsvideoitem_grab_mouse(void* self) {
    QGraphicsItem_GrabMouse((QGraphicsItem*)self);
}

void q_graphicsvideoitem_ungrab_mouse(void* self) {
    QGraphicsItem_UngrabMouse((QGraphicsItem*)self);
}

void q_graphicsvideoitem_grab_keyboard(void* self) {
    QGraphicsItem_GrabKeyboard((QGraphicsItem*)self);
}

void q_graphicsvideoitem_ungrab_keyboard(void* self) {
    QGraphicsItem_UngrabKeyboard((QGraphicsItem*)self);
}

QPointF* q_graphicsvideoitem_pos(void* self) {
    return QGraphicsItem_Pos((QGraphicsItem*)self);
}

double q_graphicsvideoitem_x(void* self) {
    return QGraphicsItem_X((QGraphicsItem*)self);
}

void q_graphicsvideoitem_set_x(void* self, double x) {
    QGraphicsItem_SetX((QGraphicsItem*)self, x);
}

double q_graphicsvideoitem_y(void* self) {
    return QGraphicsItem_Y((QGraphicsItem*)self);
}

void q_graphicsvideoitem_set_y(void* self, double y) {
    QGraphicsItem_SetY((QGraphicsItem*)self, y);
}

QPointF* q_graphicsvideoitem_scene_pos(void* self) {
    return QGraphicsItem_ScenePos((QGraphicsItem*)self);
}

void q_graphicsvideoitem_set_pos(void* self, void* pos) {
    QGraphicsItem_SetPos((QGraphicsItem*)self, (QPointF*)pos);
}

void q_graphicsvideoitem_set_pos2(void* self, double x, double y) {
    QGraphicsItem_SetPos2((QGraphicsItem*)self, x, y);
}

void q_graphicsvideoitem_move_by(void* self, double dx, double dy) {
    QGraphicsItem_MoveBy((QGraphicsItem*)self, dx, dy);
}

void q_graphicsvideoitem_ensure_visible(void* self) {
    QGraphicsItem_EnsureVisible((QGraphicsItem*)self);
}

void q_graphicsvideoitem_ensure_visible2(void* self, double x, double y, double w, double h) {
    QGraphicsItem_EnsureVisible2((QGraphicsItem*)self, x, y, w, h);
}

QTransform* q_graphicsvideoitem_transform(void* self) {
    return QGraphicsItem_Transform((QGraphicsItem*)self);
}

QTransform* q_graphicsvideoitem_scene_transform(void* self) {
    return QGraphicsItem_SceneTransform((QGraphicsItem*)self);
}

QTransform* q_graphicsvideoitem_device_transform(void* self, void* viewportTransform) {
    return QGraphicsItem_DeviceTransform((QGraphicsItem*)self, (QTransform*)viewportTransform);
}

QTransform* q_graphicsvideoitem_item_transform(void* self, void* other) {
    return QGraphicsItem_ItemTransform((QGraphicsItem*)self, (QGraphicsItem*)other);
}

void q_graphicsvideoitem_set_transform(void* self, void* matrix) {
    QGraphicsItem_SetTransform((QGraphicsItem*)self, (QTransform*)matrix);
}

void q_graphicsvideoitem_reset_transform(void* self) {
    QGraphicsItem_ResetTransform((QGraphicsItem*)self);
}

void q_graphicsvideoitem_set_rotation(void* self, double angle) {
    QGraphicsItem_SetRotation((QGraphicsItem*)self, angle);
}

double q_graphicsvideoitem_rotation(void* self) {
    return QGraphicsItem_Rotation((QGraphicsItem*)self);
}

void q_graphicsvideoitem_set_scale(void* self, double scale) {
    QGraphicsItem_SetScale((QGraphicsItem*)self, scale);
}

double q_graphicsvideoitem_scale(void* self) {
    return QGraphicsItem_Scale((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsTransform* */ q_graphicsvideoitem_transformations(void* self) {
    libqt_list _arr = QGraphicsItem_Transformations((QGraphicsItem*)self);
    return _arr;
}

void q_graphicsvideoitem_set_transformations(void* self, libqt_list /* of QGraphicsTransform* */ transformations) {
    QGraphicsItem_SetTransformations((QGraphicsItem*)self, transformations);
}

QPointF* q_graphicsvideoitem_transform_origin_point(void* self) {
    return QGraphicsItem_TransformOriginPoint((QGraphicsItem*)self);
}

void q_graphicsvideoitem_set_transform_origin_point(void* self, void* origin) {
    QGraphicsItem_SetTransformOriginPoint((QGraphicsItem*)self, (QPointF*)origin);
}

void q_graphicsvideoitem_set_transform_origin_point2(void* self, double ax, double ay) {
    QGraphicsItem_SetTransformOriginPoint2((QGraphicsItem*)self, ax, ay);
}

double q_graphicsvideoitem_z_value(void* self) {
    return QGraphicsItem_ZValue((QGraphicsItem*)self);
}

void q_graphicsvideoitem_set_z_value(void* self, double z) {
    QGraphicsItem_SetZValue((QGraphicsItem*)self, z);
}

void q_graphicsvideoitem_stack_before(void* self, void* sibling) {
    QGraphicsItem_StackBefore((QGraphicsItem*)self, (QGraphicsItem*)sibling);
}

QRectF* q_graphicsvideoitem_children_bounding_rect(void* self) {
    return QGraphicsItem_ChildrenBoundingRect((QGraphicsItem*)self);
}

QRectF* q_graphicsvideoitem_scene_bounding_rect(void* self) {
    return QGraphicsItem_SceneBoundingRect((QGraphicsItem*)self);
}

bool q_graphicsvideoitem_is_clipped(void* self) {
    return QGraphicsItem_IsClipped((QGraphicsItem*)self);
}

QPainterPath* q_graphicsvideoitem_clip_path(void* self) {
    return QGraphicsItem_ClipPath((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsItem* */ q_graphicsvideoitem_colliding_items(void* self) {
    libqt_list _arr = QGraphicsItem_CollidingItems((QGraphicsItem*)self);
    return _arr;
}

bool q_graphicsvideoitem_is_obscured(void* self) {
    return QGraphicsItem_IsObscured((QGraphicsItem*)self);
}

bool q_graphicsvideoitem_is_obscured2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_IsObscured2((QGraphicsItem*)self, x, y, w, h);
}

QRegion* q_graphicsvideoitem_bounding_region(void* self, void* itemToDeviceTransform) {
    return QGraphicsItem_BoundingRegion((QGraphicsItem*)self, (QTransform*)itemToDeviceTransform);
}

double q_graphicsvideoitem_bounding_region_granularity(void* self) {
    return QGraphicsItem_BoundingRegionGranularity((QGraphicsItem*)self);
}

void q_graphicsvideoitem_set_bounding_region_granularity(void* self, double granularity) {
    QGraphicsItem_SetBoundingRegionGranularity((QGraphicsItem*)self, granularity);
}

void q_graphicsvideoitem_update(void* self) {
    QGraphicsItem_Update((QGraphicsItem*)self);
}

void q_graphicsvideoitem_update2(void* self, double x, double y, double width, double height) {
    QGraphicsItem_Update2((QGraphicsItem*)self, x, y, width, height);
}

void q_graphicsvideoitem_scroll(void* self, double dx, double dy) {
    QGraphicsItem_Scroll((QGraphicsItem*)self, dx, dy);
}

QPointF* q_graphicsvideoitem_map_to_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicsvideoitem_map_to_parent(void* self, void* point) {
    return QGraphicsItem_MapToParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_graphicsvideoitem_map_to_scene(void* self, void* point) {
    return QGraphicsItem_MapToScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_graphicsvideoitem_map_rect_to_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicsvideoitem_map_rect_to_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectToParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_graphicsvideoitem_map_rect_to_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectToScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_graphicsvideoitem_map_to_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapToItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicsvideoitem_map_to_parent4(void* self, void* path) {
    return QGraphicsItem_MapToParent4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_graphicsvideoitem_map_to_scene4(void* self, void* path) {
    return QGraphicsItem_MapToScene4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_graphicsvideoitem_map_from_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicsvideoitem_map_from_parent(void* self, void* point) {
    return QGraphicsItem_MapFromParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_graphicsvideoitem_map_from_scene(void* self, void* point) {
    return QGraphicsItem_MapFromScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_graphicsvideoitem_map_rect_from_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicsvideoitem_map_rect_from_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectFromParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_graphicsvideoitem_map_rect_from_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectFromScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_graphicsvideoitem_map_from_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapFromItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicsvideoitem_map_from_parent4(void* self, void* path) {
    return QGraphicsItem_MapFromParent4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_graphicsvideoitem_map_from_scene4(void* self, void* path) {
    return QGraphicsItem_MapFromScene4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_graphicsvideoitem_map_to_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapToItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicsvideoitem_map_to_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapToParent5((QGraphicsItem*)self, x, y);
}

QPointF* q_graphicsvideoitem_map_to_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapToScene5((QGraphicsItem*)self, x, y);
}

QRectF* q_graphicsvideoitem_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicsvideoitem_map_rect_to_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_graphicsvideoitem_map_rect_to_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToScene2((QGraphicsItem*)self, x, y, w, h);
}

QPointF* q_graphicsvideoitem_map_from_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapFromItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicsvideoitem_map_from_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapFromParent5((QGraphicsItem*)self, x, y);
}

QPointF* q_graphicsvideoitem_map_from_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapFromScene5((QGraphicsItem*)self, x, y);
}

QRectF* q_graphicsvideoitem_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicsvideoitem_map_rect_from_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_graphicsvideoitem_map_rect_from_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromScene2((QGraphicsItem*)self, x, y, w, h);
}

bool q_graphicsvideoitem_is_ancestor_of(void* self, void* child) {
    return QGraphicsItem_IsAncestorOf((QGraphicsItem*)self, (QGraphicsItem*)child);
}

QGraphicsItem* q_graphicsvideoitem_common_ancestor_item(void* self, void* other) {
    return QGraphicsItem_CommonAncestorItem((QGraphicsItem*)self, (QGraphicsItem*)other);
}

bool q_graphicsvideoitem_is_under_mouse(void* self) {
    return QGraphicsItem_IsUnderMouse((QGraphicsItem*)self);
}

QVariant* q_graphicsvideoitem_data(void* self, int key) {
    return QGraphicsItem_Data((QGraphicsItem*)self, key);
}

void q_graphicsvideoitem_set_data(void* self, int key, void* value) {
    QGraphicsItem_SetData((QGraphicsItem*)self, key, (QVariant*)value);
}

int32_t q_graphicsvideoitem_input_method_hints(void* self) {
    return QGraphicsItem_InputMethodHints((QGraphicsItem*)self);
}

void q_graphicsvideoitem_set_input_method_hints(void* self, int32_t hints) {
    QGraphicsItem_SetInputMethodHints((QGraphicsItem*)self, hints);
}

void q_graphicsvideoitem_install_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_InstallSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_graphicsvideoitem_remove_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_RemoveSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_graphicsvideoitem_set_flag2(void* self, int32_t flag, bool enabled) {
    QGraphicsItem_SetFlag2((QGraphicsItem*)self, flag, enabled);
}

void q_graphicsvideoitem_set_cache_mode2(void* self, int32_t mode, void* cacheSize) {
    QGraphicsItem_SetCacheMode2((QGraphicsItem*)self, mode, (QSize*)cacheSize);
}

void q_graphicsvideoitem_set_focus1(void* self, int32_t focusReason) {
    QGraphicsItem_SetFocus1((QGraphicsItem*)self, focusReason);
}

void q_graphicsvideoitem_ensure_visible1(void* self, void* rect) {
    QGraphicsItem_EnsureVisible1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicsvideoitem_ensure_visible22(void* self, void* rect, int xmargin) {
    QGraphicsItem_EnsureVisible22((QGraphicsItem*)self, (QRectF*)rect, xmargin);
}

void q_graphicsvideoitem_ensure_visible3(void* self, void* rect, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible3((QGraphicsItem*)self, (QRectF*)rect, xmargin, ymargin);
}

void q_graphicsvideoitem_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin) {
    QGraphicsItem_EnsureVisible5((QGraphicsItem*)self, x, y, w, h, xmargin);
}

void q_graphicsvideoitem_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible6((QGraphicsItem*)self, x, y, w, h, xmargin, ymargin);
}

QTransform* q_graphicsvideoitem_item_transform2(void* self, void* other, bool* ok) {
    return QGraphicsItem_ItemTransform2((QGraphicsItem*)self, (QGraphicsItem*)other, (bool*)ok);
}

void q_graphicsvideoitem_set_transform2(void* self, void* matrix, bool combine) {
    QGraphicsItem_SetTransform2((QGraphicsItem*)self, (QTransform*)matrix, combine);
}

libqt_list /* of QGraphicsItem* */ q_graphicsvideoitem_colliding_items1(void* self, int32_t mode) {
    libqt_list _arr = QGraphicsItem_CollidingItems1((QGraphicsItem*)self, mode);
    return _arr;
}

bool q_graphicsvideoitem_is_obscured1(void* self, void* rect) {
    return QGraphicsItem_IsObscured1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicsvideoitem_update1(void* self, void* rect) {
    QGraphicsItem_Update1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicsvideoitem_scroll3(void* self, double dx, double dy, void* rect) {
    QGraphicsItem_Scroll3((QGraphicsItem*)self, dx, dy, (QRectF*)rect);
}

bool q_graphicsvideoitem_event(void* self, void* ev) {
    return QGraphicsVideoItem_Event((QGraphicsVideoItem*)self, (QEvent*)ev);
}

bool q_graphicsvideoitem_qbase_event(void* self, void* ev) {
    return QGraphicsVideoItem_QBaseEvent((QGraphicsVideoItem*)self, (QEvent*)ev);
}

void q_graphicsvideoitem_on_event(void* self, bool (*callback)(void*, void*)) {
    QGraphicsVideoItem_OnEvent((QGraphicsVideoItem*)self, (intptr_t)callback);
}

bool q_graphicsvideoitem_event_filter(void* self, void* watched, void* event) {
    return QGraphicsVideoItem_EventFilter((QGraphicsVideoItem*)self, (QObject*)watched, (QEvent*)event);
}

bool q_graphicsvideoitem_qbase_event_filter(void* self, void* watched, void* event) {
    return QGraphicsVideoItem_QBaseEventFilter((QGraphicsVideoItem*)self, (QObject*)watched, (QEvent*)event);
}

void q_graphicsvideoitem_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGraphicsVideoItem_OnEventFilter((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_child_event(void* self, void* event) {
    QGraphicsVideoItem_ChildEvent((QGraphicsVideoItem*)self, (QChildEvent*)event);
}

void q_graphicsvideoitem_qbase_child_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseChildEvent((QGraphicsVideoItem*)self, (QChildEvent*)event);
}

void q_graphicsvideoitem_on_child_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsVideoItem_OnChildEvent((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_custom_event(void* self, void* event) {
    QGraphicsVideoItem_CustomEvent((QGraphicsVideoItem*)self, (QEvent*)event);
}

void q_graphicsvideoitem_qbase_custom_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseCustomEvent((QGraphicsVideoItem*)self, (QEvent*)event);
}

void q_graphicsvideoitem_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsVideoItem_OnCustomEvent((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_connect_notify(void* self, void* signal) {
    QGraphicsVideoItem_ConnectNotify((QGraphicsVideoItem*)self, (QMetaMethod*)signal);
}

void q_graphicsvideoitem_qbase_connect_notify(void* self, void* signal) {
    QGraphicsVideoItem_QBaseConnectNotify((QGraphicsVideoItem*)self, (QMetaMethod*)signal);
}

void q_graphicsvideoitem_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QGraphicsVideoItem_OnConnectNotify((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_disconnect_notify(void* self, void* signal) {
    QGraphicsVideoItem_DisconnectNotify((QGraphicsVideoItem*)self, (QMetaMethod*)signal);
}

void q_graphicsvideoitem_qbase_disconnect_notify(void* self, void* signal) {
    QGraphicsVideoItem_QBaseDisconnectNotify((QGraphicsVideoItem*)self, (QMetaMethod*)signal);
}

void q_graphicsvideoitem_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QGraphicsVideoItem_OnDisconnectNotify((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_advance(void* self, int phase) {
    QGraphicsVideoItem_Advance((QGraphicsVideoItem*)self, phase);
}

void q_graphicsvideoitem_qbase_advance(void* self, int phase) {
    QGraphicsVideoItem_QBaseAdvance((QGraphicsVideoItem*)self, phase);
}

void q_graphicsvideoitem_on_advance(void* self, void (*callback)(void*, int)) {
    QGraphicsVideoItem_OnAdvance((QGraphicsVideoItem*)self, (intptr_t)callback);
}

QPainterPath* q_graphicsvideoitem_shape(void* self) {
    return QGraphicsVideoItem_Shape((QGraphicsVideoItem*)self);
}

QPainterPath* q_graphicsvideoitem_qbase_shape(void* self) {
    return QGraphicsVideoItem_QBaseShape((QGraphicsVideoItem*)self);
}

void q_graphicsvideoitem_on_shape(void* self, QPainterPath* (*callback)()) {
    QGraphicsVideoItem_OnShape((QGraphicsVideoItem*)self, (intptr_t)callback);
}

bool q_graphicsvideoitem_contains(void* self, void* point) {
    return QGraphicsVideoItem_Contains((QGraphicsVideoItem*)self, (QPointF*)point);
}

bool q_graphicsvideoitem_qbase_contains(void* self, void* point) {
    return QGraphicsVideoItem_QBaseContains((QGraphicsVideoItem*)self, (QPointF*)point);
}

void q_graphicsvideoitem_on_contains(void* self, bool (*callback)(void*, void*)) {
    QGraphicsVideoItem_OnContains((QGraphicsVideoItem*)self, (intptr_t)callback);
}

bool q_graphicsvideoitem_collides_with_item(void* self, void* other, int32_t mode) {
    return QGraphicsVideoItem_CollidesWithItem((QGraphicsVideoItem*)self, (QGraphicsItem*)other, mode);
}

bool q_graphicsvideoitem_qbase_collides_with_item(void* self, void* other, int32_t mode) {
    return QGraphicsVideoItem_QBaseCollidesWithItem((QGraphicsVideoItem*)self, (QGraphicsItem*)other, mode);
}

void q_graphicsvideoitem_on_collides_with_item(void* self, bool (*callback)(void*, void*, int32_t)) {
    QGraphicsVideoItem_OnCollidesWithItem((QGraphicsVideoItem*)self, (intptr_t)callback);
}

bool q_graphicsvideoitem_collides_with_path(void* self, void* path, int32_t mode) {
    return QGraphicsVideoItem_CollidesWithPath((QGraphicsVideoItem*)self, (QPainterPath*)path, mode);
}

bool q_graphicsvideoitem_qbase_collides_with_path(void* self, void* path, int32_t mode) {
    return QGraphicsVideoItem_QBaseCollidesWithPath((QGraphicsVideoItem*)self, (QPainterPath*)path, mode);
}

void q_graphicsvideoitem_on_collides_with_path(void* self, bool (*callback)(void*, void*, int32_t)) {
    QGraphicsVideoItem_OnCollidesWithPath((QGraphicsVideoItem*)self, (intptr_t)callback);
}

bool q_graphicsvideoitem_is_obscured_by(void* self, void* item) {
    return QGraphicsVideoItem_IsObscuredBy((QGraphicsVideoItem*)self, (QGraphicsItem*)item);
}

bool q_graphicsvideoitem_qbase_is_obscured_by(void* self, void* item) {
    return QGraphicsVideoItem_QBaseIsObscuredBy((QGraphicsVideoItem*)self, (QGraphicsItem*)item);
}

void q_graphicsvideoitem_on_is_obscured_by(void* self, bool (*callback)(void*, void*)) {
    QGraphicsVideoItem_OnIsObscuredBy((QGraphicsVideoItem*)self, (intptr_t)callback);
}

QPainterPath* q_graphicsvideoitem_opaque_area(void* self) {
    return QGraphicsVideoItem_OpaqueArea((QGraphicsVideoItem*)self);
}

QPainterPath* q_graphicsvideoitem_qbase_opaque_area(void* self) {
    return QGraphicsVideoItem_QBaseOpaqueArea((QGraphicsVideoItem*)self);
}

void q_graphicsvideoitem_on_opaque_area(void* self, QPainterPath* (*callback)()) {
    QGraphicsVideoItem_OnOpaqueArea((QGraphicsVideoItem*)self, (intptr_t)callback);
}

bool q_graphicsvideoitem_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsVideoItem_SceneEventFilter((QGraphicsVideoItem*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

bool q_graphicsvideoitem_qbase_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsVideoItem_QBaseSceneEventFilter((QGraphicsVideoItem*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

void q_graphicsvideoitem_on_scene_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGraphicsVideoItem_OnSceneEventFilter((QGraphicsVideoItem*)self, (intptr_t)callback);
}

bool q_graphicsvideoitem_scene_event(void* self, void* event) {
    return QGraphicsVideoItem_SceneEvent((QGraphicsVideoItem*)self, (QEvent*)event);
}

bool q_graphicsvideoitem_qbase_scene_event(void* self, void* event) {
    return QGraphicsVideoItem_QBaseSceneEvent((QGraphicsVideoItem*)self, (QEvent*)event);
}

void q_graphicsvideoitem_on_scene_event(void* self, bool (*callback)(void*, void*)) {
    QGraphicsVideoItem_OnSceneEvent((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_context_menu_event(void* self, void* event) {
    QGraphicsVideoItem_ContextMenuEvent((QGraphicsVideoItem*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicsvideoitem_qbase_context_menu_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseContextMenuEvent((QGraphicsVideoItem*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicsvideoitem_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsVideoItem_OnContextMenuEvent((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_drag_enter_event(void* self, void* event) {
    QGraphicsVideoItem_DragEnterEvent((QGraphicsVideoItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsvideoitem_qbase_drag_enter_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseDragEnterEvent((QGraphicsVideoItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsvideoitem_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsVideoItem_OnDragEnterEvent((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_drag_leave_event(void* self, void* event) {
    QGraphicsVideoItem_DragLeaveEvent((QGraphicsVideoItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsvideoitem_qbase_drag_leave_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseDragLeaveEvent((QGraphicsVideoItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsvideoitem_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsVideoItem_OnDragLeaveEvent((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_drag_move_event(void* self, void* event) {
    QGraphicsVideoItem_DragMoveEvent((QGraphicsVideoItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsvideoitem_qbase_drag_move_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseDragMoveEvent((QGraphicsVideoItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsvideoitem_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsVideoItem_OnDragMoveEvent((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_drop_event(void* self, void* event) {
    QGraphicsVideoItem_DropEvent((QGraphicsVideoItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsvideoitem_qbase_drop_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseDropEvent((QGraphicsVideoItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsvideoitem_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsVideoItem_OnDropEvent((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_focus_in_event(void* self, void* event) {
    QGraphicsVideoItem_FocusInEvent((QGraphicsVideoItem*)self, (QFocusEvent*)event);
}

void q_graphicsvideoitem_qbase_focus_in_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseFocusInEvent((QGraphicsVideoItem*)self, (QFocusEvent*)event);
}

void q_graphicsvideoitem_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsVideoItem_OnFocusInEvent((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_focus_out_event(void* self, void* event) {
    QGraphicsVideoItem_FocusOutEvent((QGraphicsVideoItem*)self, (QFocusEvent*)event);
}

void q_graphicsvideoitem_qbase_focus_out_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseFocusOutEvent((QGraphicsVideoItem*)self, (QFocusEvent*)event);
}

void q_graphicsvideoitem_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsVideoItem_OnFocusOutEvent((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_hover_enter_event(void* self, void* event) {
    QGraphicsVideoItem_HoverEnterEvent((QGraphicsVideoItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsvideoitem_qbase_hover_enter_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseHoverEnterEvent((QGraphicsVideoItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsvideoitem_on_hover_enter_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsVideoItem_OnHoverEnterEvent((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_hover_move_event(void* self, void* event) {
    QGraphicsVideoItem_HoverMoveEvent((QGraphicsVideoItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsvideoitem_qbase_hover_move_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseHoverMoveEvent((QGraphicsVideoItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsvideoitem_on_hover_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsVideoItem_OnHoverMoveEvent((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_hover_leave_event(void* self, void* event) {
    QGraphicsVideoItem_HoverLeaveEvent((QGraphicsVideoItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsvideoitem_qbase_hover_leave_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseHoverLeaveEvent((QGraphicsVideoItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsvideoitem_on_hover_leave_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsVideoItem_OnHoverLeaveEvent((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_key_press_event(void* self, void* event) {
    QGraphicsVideoItem_KeyPressEvent((QGraphicsVideoItem*)self, (QKeyEvent*)event);
}

void q_graphicsvideoitem_qbase_key_press_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseKeyPressEvent((QGraphicsVideoItem*)self, (QKeyEvent*)event);
}

void q_graphicsvideoitem_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsVideoItem_OnKeyPressEvent((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_key_release_event(void* self, void* event) {
    QGraphicsVideoItem_KeyReleaseEvent((QGraphicsVideoItem*)self, (QKeyEvent*)event);
}

void q_graphicsvideoitem_qbase_key_release_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseKeyReleaseEvent((QGraphicsVideoItem*)self, (QKeyEvent*)event);
}

void q_graphicsvideoitem_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsVideoItem_OnKeyReleaseEvent((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_mouse_press_event(void* self, void* event) {
    QGraphicsVideoItem_MousePressEvent((QGraphicsVideoItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsvideoitem_qbase_mouse_press_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseMousePressEvent((QGraphicsVideoItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsvideoitem_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsVideoItem_OnMousePressEvent((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_mouse_move_event(void* self, void* event) {
    QGraphicsVideoItem_MouseMoveEvent((QGraphicsVideoItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsvideoitem_qbase_mouse_move_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseMouseMoveEvent((QGraphicsVideoItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsvideoitem_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsVideoItem_OnMouseMoveEvent((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_mouse_release_event(void* self, void* event) {
    QGraphicsVideoItem_MouseReleaseEvent((QGraphicsVideoItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsvideoitem_qbase_mouse_release_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseMouseReleaseEvent((QGraphicsVideoItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsvideoitem_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsVideoItem_OnMouseReleaseEvent((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_mouse_double_click_event(void* self, void* event) {
    QGraphicsVideoItem_MouseDoubleClickEvent((QGraphicsVideoItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsvideoitem_qbase_mouse_double_click_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseMouseDoubleClickEvent((QGraphicsVideoItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsvideoitem_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsVideoItem_OnMouseDoubleClickEvent((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_wheel_event(void* self, void* event) {
    QGraphicsVideoItem_WheelEvent((QGraphicsVideoItem*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicsvideoitem_qbase_wheel_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseWheelEvent((QGraphicsVideoItem*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicsvideoitem_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsVideoItem_OnWheelEvent((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_input_method_event(void* self, void* event) {
    QGraphicsVideoItem_InputMethodEvent((QGraphicsVideoItem*)self, (QInputMethodEvent*)event);
}

void q_graphicsvideoitem_qbase_input_method_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseInputMethodEvent((QGraphicsVideoItem*)self, (QInputMethodEvent*)event);
}

void q_graphicsvideoitem_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsVideoItem_OnInputMethodEvent((QGraphicsVideoItem*)self, (intptr_t)callback);
}

QVariant* q_graphicsvideoitem_input_method_query(void* self, int32_t query) {
    return QGraphicsVideoItem_InputMethodQuery((QGraphicsVideoItem*)self, query);
}

QVariant* q_graphicsvideoitem_qbase_input_method_query(void* self, int32_t query) {
    return QGraphicsVideoItem_QBaseInputMethodQuery((QGraphicsVideoItem*)self, query);
}

void q_graphicsvideoitem_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QGraphicsVideoItem_OnInputMethodQuery((QGraphicsVideoItem*)self, (intptr_t)callback);
}

bool q_graphicsvideoitem_supports_extension(void* self, int32_t extension) {
    return QGraphicsVideoItem_SupportsExtension((QGraphicsVideoItem*)self, extension);
}

bool q_graphicsvideoitem_qbase_supports_extension(void* self, int32_t extension) {
    return QGraphicsVideoItem_QBaseSupportsExtension((QGraphicsVideoItem*)self, extension);
}

void q_graphicsvideoitem_on_supports_extension(void* self, bool (*callback)(void*, int32_t)) {
    QGraphicsVideoItem_OnSupportsExtension((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_set_extension(void* self, int32_t extension, void* variant) {
    QGraphicsVideoItem_SetExtension((QGraphicsVideoItem*)self, extension, (QVariant*)variant);
}

void q_graphicsvideoitem_qbase_set_extension(void* self, int32_t extension, void* variant) {
    QGraphicsVideoItem_QBaseSetExtension((QGraphicsVideoItem*)self, extension, (QVariant*)variant);
}

void q_graphicsvideoitem_on_set_extension(void* self, void (*callback)(void*, int32_t, void*)) {
    QGraphicsVideoItem_OnSetExtension((QGraphicsVideoItem*)self, (intptr_t)callback);
}

QVariant* q_graphicsvideoitem_extension(void* self, void* variant) {
    return QGraphicsVideoItem_Extension((QGraphicsVideoItem*)self, (QVariant*)variant);
}

QVariant* q_graphicsvideoitem_qbase_extension(void* self, void* variant) {
    return QGraphicsVideoItem_QBaseExtension((QGraphicsVideoItem*)self, (QVariant*)variant);
}

void q_graphicsvideoitem_on_extension(void* self, QVariant* (*callback)(void*, void*)) {
    QGraphicsVideoItem_OnExtension((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_update_micro_focus(void* self) {
    QGraphicsVideoItem_UpdateMicroFocus((QGraphicsVideoItem*)self);
}

void q_graphicsvideoitem_qbase_update_micro_focus(void* self) {
    QGraphicsVideoItem_QBaseUpdateMicroFocus((QGraphicsVideoItem*)self);
}

void q_graphicsvideoitem_on_update_micro_focus(void* self, void (*callback)()) {
    QGraphicsVideoItem_OnUpdateMicroFocus((QGraphicsVideoItem*)self, (intptr_t)callback);
}

QObject* q_graphicsvideoitem_sender(void* self) {
    return QGraphicsVideoItem_Sender((QGraphicsVideoItem*)self);
}

QObject* q_graphicsvideoitem_qbase_sender(void* self) {
    return QGraphicsVideoItem_QBaseSender((QGraphicsVideoItem*)self);
}

void q_graphicsvideoitem_on_sender(void* self, QObject* (*callback)()) {
    QGraphicsVideoItem_OnSender((QGraphicsVideoItem*)self, (intptr_t)callback);
}

int32_t q_graphicsvideoitem_sender_signal_index(void* self) {
    return QGraphicsVideoItem_SenderSignalIndex((QGraphicsVideoItem*)self);
}

int32_t q_graphicsvideoitem_qbase_sender_signal_index(void* self) {
    return QGraphicsVideoItem_QBaseSenderSignalIndex((QGraphicsVideoItem*)self);
}

void q_graphicsvideoitem_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QGraphicsVideoItem_OnSenderSignalIndex((QGraphicsVideoItem*)self, (intptr_t)callback);
}

int32_t q_graphicsvideoitem_receivers(void* self, const char* signal) {
    return QGraphicsVideoItem_Receivers((QGraphicsVideoItem*)self, signal);
}

int32_t q_graphicsvideoitem_qbase_receivers(void* self, const char* signal) {
    return QGraphicsVideoItem_QBaseReceivers((QGraphicsVideoItem*)self, signal);
}

void q_graphicsvideoitem_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QGraphicsVideoItem_OnReceivers((QGraphicsVideoItem*)self, (intptr_t)callback);
}

bool q_graphicsvideoitem_is_signal_connected(void* self, void* signal) {
    return QGraphicsVideoItem_IsSignalConnected((QGraphicsVideoItem*)self, (QMetaMethod*)signal);
}

bool q_graphicsvideoitem_qbase_is_signal_connected(void* self, void* signal) {
    return QGraphicsVideoItem_QBaseIsSignalConnected((QGraphicsVideoItem*)self, (QMetaMethod*)signal);
}

void q_graphicsvideoitem_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QGraphicsVideoItem_OnIsSignalConnected((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_add_to_index(void* self) {
    QGraphicsVideoItem_AddToIndex((QGraphicsVideoItem*)self);
}

void q_graphicsvideoitem_qbase_add_to_index(void* self) {
    QGraphicsVideoItem_QBaseAddToIndex((QGraphicsVideoItem*)self);
}

void q_graphicsvideoitem_on_add_to_index(void* self, void (*callback)()) {
    QGraphicsVideoItem_OnAddToIndex((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_remove_from_index(void* self) {
    QGraphicsVideoItem_RemoveFromIndex((QGraphicsVideoItem*)self);
}

void q_graphicsvideoitem_qbase_remove_from_index(void* self) {
    QGraphicsVideoItem_QBaseRemoveFromIndex((QGraphicsVideoItem*)self);
}

void q_graphicsvideoitem_on_remove_from_index(void* self, void (*callback)()) {
    QGraphicsVideoItem_OnRemoveFromIndex((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_prepare_geometry_change(void* self) {
    QGraphicsVideoItem_PrepareGeometryChange((QGraphicsVideoItem*)self);
}

void q_graphicsvideoitem_qbase_prepare_geometry_change(void* self) {
    QGraphicsVideoItem_QBasePrepareGeometryChange((QGraphicsVideoItem*)self);
}

void q_graphicsvideoitem_on_prepare_geometry_change(void* self, void (*callback)()) {
    QGraphicsVideoItem_OnPrepareGeometryChange((QGraphicsVideoItem*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_graphicsvideoitem_delete(void* self) {
    QGraphicsVideoItem_Delete((QGraphicsVideoItem*)(self));
}
