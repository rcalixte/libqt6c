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
#include "libqsvgrenderer.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libqgraphicssvgitem.hpp"
#include "libqgraphicssvgitem.h"

QGraphicsSvgItem* q_graphicssvgitem_new() {
    return QGraphicsSvgItem_New();
}

QGraphicsSvgItem* q_graphicssvgitem_new2(const char* fileName) {
    return QGraphicsSvgItem_New2(qstring(fileName));
}

QGraphicsSvgItem* q_graphicssvgitem_new3(void* parentItem) {
    return QGraphicsSvgItem_New3((QGraphicsItem*)parentItem);
}

QGraphicsSvgItem* q_graphicssvgitem_new4(const char* fileName, void* parentItem) {
    return QGraphicsSvgItem_New4(qstring(fileName), (QGraphicsItem*)parentItem);
}

const QMetaObject* q_graphicssvgitem_meta_object(void* self) {
    return QGraphicsSvgItem_MetaObject((QGraphicsSvgItem*)self);
}

void q_graphicssvgitem_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QGraphicsSvgItem_OnMetaObject((QGraphicsSvgItem*)self, (intptr_t)callback);
}

const QMetaObject* q_graphicssvgitem_super_meta_object(void* self) {
    return QGraphicsSvgItem_SuperMetaObject((QGraphicsSvgItem*)self);
}

void* q_graphicssvgitem_metacast(void* self, const char* param1) {
    return QGraphicsSvgItem_Metacast((QGraphicsSvgItem*)self, param1);
}

void q_graphicssvgitem_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QGraphicsSvgItem_OnMetacast((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void* q_graphicssvgitem_super_metacast(void* self, const char* param1) {
    return QGraphicsSvgItem_SuperMetacast((QGraphicsSvgItem*)self, param1);
}

int32_t q_graphicssvgitem_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGraphicsSvgItem_Metacall((QGraphicsSvgItem*)self, param1, param2, param3);
}

void q_graphicssvgitem_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QGraphicsSvgItem_OnMetacall((QGraphicsSvgItem*)self, (intptr_t)callback);
}

int32_t q_graphicssvgitem_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGraphicsSvgItem_SuperMetacall((QGraphicsSvgItem*)self, param1, param2, param3);
}

const char* q_graphicssvgitem_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicssvgitem_set_shared_renderer(void* self, void* renderer) {
    QGraphicsSvgItem_SetSharedRenderer((QGraphicsSvgItem*)self, (QSvgRenderer*)renderer);
}

QSvgRenderer* q_graphicssvgitem_renderer(void* self) {
    return QGraphicsSvgItem_Renderer((QGraphicsSvgItem*)self);
}

void q_graphicssvgitem_set_element_id(void* self, const char* id) {
    QGraphicsSvgItem_SetElementId((QGraphicsSvgItem*)self, qstring(id));
}

const char* q_graphicssvgitem_element_id(void* self) {
    libqt_string _str = QGraphicsSvgItem_ElementId((QGraphicsSvgItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicssvgitem_set_caching_enabled(void* self, bool cachingEnabled) {
    QGraphicsSvgItem_SetCachingEnabled((QGraphicsSvgItem*)self, cachingEnabled);
}

bool q_graphicssvgitem_is_caching_enabled(void* self) {
    return QGraphicsSvgItem_IsCachingEnabled((QGraphicsSvgItem*)self);
}

void q_graphicssvgitem_set_maximum_cache_size(void* self, void* size) {
    QGraphicsSvgItem_SetMaximumCacheSize((QGraphicsSvgItem*)self, (QSize*)size);
}

QSize* q_graphicssvgitem_maximum_cache_size(void* self) {
    return QGraphicsSvgItem_MaximumCacheSize((QGraphicsSvgItem*)self);
}

QRectF* q_graphicssvgitem_bounding_rect(void* self) {
    return QGraphicsSvgItem_BoundingRect((QGraphicsSvgItem*)self);
}

void q_graphicssvgitem_on_bounding_rect(void* self, QRectF* (*callback)()) {
    QGraphicsSvgItem_OnBoundingRect((QGraphicsSvgItem*)self, (intptr_t)callback);
}

QRectF* q_graphicssvgitem_super_bounding_rect(void* self) {
    return QGraphicsSvgItem_SuperBoundingRect((QGraphicsSvgItem*)self);
}

void q_graphicssvgitem_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsSvgItem_Paint((QGraphicsSvgItem*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_graphicssvgitem_on_paint(void* self, void (*callback)(void*, void*, void*, void*)) {
    QGraphicsSvgItem_OnPaint((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void q_graphicssvgitem_super_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsSvgItem_SuperPaint((QGraphicsSvgItem*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

int32_t q_graphicssvgitem_type(void* self) {
    return QGraphicsSvgItem_Type((QGraphicsSvgItem*)self);
}

void q_graphicssvgitem_on_type(void* self, int32_t (*callback)()) {
    QGraphicsSvgItem_OnType((QGraphicsSvgItem*)self, (intptr_t)callback);
}

int32_t q_graphicssvgitem_super_type(void* self) {
    return QGraphicsSvgItem_SuperType((QGraphicsSvgItem*)self);
}

const char* q_graphicssvgitem_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_graphicssvgitem_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QGraphicsItem* q_graphicssvgitem_as_q_graphics_item(void* self) {
    return QGraphicsObject_AsQGraphicsItem((QGraphicsObject*)self);
}

QGraphicsSvgItem* q_graphicssvgitem_from_q_graphics_item(void* _qgraphicsitem) {
    return (QGraphicsSvgItem*)QGraphicsObject_FromQGraphicsItem((QGraphicsItem*)_qgraphicsitem);
}

void q_graphicssvgitem_grab_gesture(void* self, int32_t type) {
    QGraphicsObject_GrabGesture((QGraphicsObject*)self, type);
}

void q_graphicssvgitem_ungrab_gesture(void* self, int32_t type) {
    QGraphicsObject_UngrabGesture((QGraphicsObject*)self, type);
}

void q_graphicssvgitem_parent_changed(void* self) {
    QGraphicsObject_ParentChanged((QGraphicsObject*)self);
}

void q_graphicssvgitem_on_parent_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ParentChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicssvgitem_opacity_changed(void* self) {
    QGraphicsObject_OpacityChanged((QGraphicsObject*)self);
}

void q_graphicssvgitem_on_opacity_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_OpacityChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicssvgitem_visible_changed(void* self) {
    QGraphicsObject_VisibleChanged((QGraphicsObject*)self);
}

void q_graphicssvgitem_on_visible_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_VisibleChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicssvgitem_enabled_changed(void* self) {
    QGraphicsObject_EnabledChanged((QGraphicsObject*)self);
}

void q_graphicssvgitem_on_enabled_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_EnabledChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicssvgitem_x_changed(void* self) {
    QGraphicsObject_XChanged((QGraphicsObject*)self);
}

void q_graphicssvgitem_on_x_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_XChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicssvgitem_y_changed(void* self) {
    QGraphicsObject_YChanged((QGraphicsObject*)self);
}

void q_graphicssvgitem_on_y_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_YChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicssvgitem_z_changed(void* self) {
    QGraphicsObject_ZChanged((QGraphicsObject*)self);
}

void q_graphicssvgitem_on_z_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ZChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicssvgitem_rotation_changed(void* self) {
    QGraphicsObject_RotationChanged((QGraphicsObject*)self);
}

void q_graphicssvgitem_on_rotation_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_RotationChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicssvgitem_scale_changed(void* self) {
    QGraphicsObject_ScaleChanged((QGraphicsObject*)self);
}

void q_graphicssvgitem_on_scale_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ScaleChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicssvgitem_children_changed(void* self) {
    QGraphicsObject_ChildrenChanged((QGraphicsObject*)self);
}

void q_graphicssvgitem_on_children_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ChildrenChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicssvgitem_width_changed(void* self) {
    QGraphicsObject_WidthChanged((QGraphicsObject*)self);
}

void q_graphicssvgitem_on_width_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_WidthChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicssvgitem_height_changed(void* self) {
    QGraphicsObject_HeightChanged((QGraphicsObject*)self);
}

void q_graphicssvgitem_on_height_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_HeightChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicssvgitem_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QGraphicsObject_GrabGesture2((QGraphicsObject*)self, type, flags);
}

const char* q_graphicssvgitem_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicssvgitem_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_graphicssvgitem_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_graphicssvgitem_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_graphicssvgitem_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_graphicssvgitem_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_graphicssvgitem_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_graphicssvgitem_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_graphicssvgitem_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_graphicssvgitem_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_graphicssvgitem_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_graphicssvgitem_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_graphicssvgitem_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_graphicssvgitem_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_graphicssvgitem_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_graphicssvgitem_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_graphicssvgitem_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_graphicssvgitem_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_graphicssvgitem_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_graphicssvgitem_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_graphicssvgitem_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_graphicssvgitem_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_graphicssvgitem_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_graphicssvgitem_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_graphicssvgitem_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_graphicssvgitem_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_graphicssvgitem_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_graphicssvgitem_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_graphicssvgitem_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_graphicssvgitem_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_graphicssvgitem_dynamic_property_names\n");
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

QBindingStorage* q_graphicssvgitem_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_graphicssvgitem_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_graphicssvgitem_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_graphicssvgitem_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_graphicssvgitem_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_graphicssvgitem_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_graphicssvgitem_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_graphicssvgitem_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_graphicssvgitem_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_graphicssvgitem_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_graphicssvgitem_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_graphicssvgitem_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_graphicssvgitem_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_graphicssvgitem_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_graphicssvgitem_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_graphicssvgitem_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_graphicssvgitem_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_graphicssvgitem_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QGraphicsScene* q_graphicssvgitem_scene(void* self) {
    return QGraphicsItem_Scene(q_graphicssvgitem_as_q_graphics_item(self));
}

QGraphicsItem* q_graphicssvgitem_parent_item(void* self) {
    return QGraphicsItem_ParentItem(q_graphicssvgitem_as_q_graphics_item(self));
}

QGraphicsItem* q_graphicssvgitem_top_level_item(void* self) {
    return QGraphicsItem_TopLevelItem(q_graphicssvgitem_as_q_graphics_item(self));
}

QGraphicsObject* q_graphicssvgitem_parent_object(void* self) {
    return QGraphicsItem_ParentObject(q_graphicssvgitem_as_q_graphics_item(self));
}

QGraphicsWidget* q_graphicssvgitem_parent_widget(void* self) {
    return QGraphicsItem_ParentWidget(q_graphicssvgitem_as_q_graphics_item(self));
}

QGraphicsWidget* q_graphicssvgitem_top_level_widget(void* self) {
    return QGraphicsItem_TopLevelWidget(q_graphicssvgitem_as_q_graphics_item(self));
}

QGraphicsWidget* q_graphicssvgitem_window(void* self) {
    return QGraphicsItem_Window(q_graphicssvgitem_as_q_graphics_item(self));
}

QGraphicsItem* q_graphicssvgitem_panel(void* self) {
    return QGraphicsItem_Panel(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_set_parent_item(void* self, void* parent) {
    QGraphicsItem_SetParentItem(q_graphicssvgitem_as_q_graphics_item(self), (QGraphicsItem*)parent);
}

libqt_list /* of QGraphicsItem* */ q_graphicssvgitem_child_items(void* self) {
    libqt_list _arr = QGraphicsItem_ChildItems(q_graphicssvgitem_as_q_graphics_item(self));
    return _arr;
}

bool q_graphicssvgitem_is_widget(void* self) {
    return QGraphicsItem_IsWidget(q_graphicssvgitem_as_q_graphics_item(self));
}

bool q_graphicssvgitem_is_window(void* self) {
    return QGraphicsItem_IsWindow(q_graphicssvgitem_as_q_graphics_item(self));
}

bool q_graphicssvgitem_is_panel(void* self) {
    return QGraphicsItem_IsPanel(q_graphicssvgitem_as_q_graphics_item(self));
}

QGraphicsObject* q_graphicssvgitem_to_graphics_object(void* self) {
    return QGraphicsItem_ToGraphicsObject(q_graphicssvgitem_as_q_graphics_item(self));
}

const QGraphicsObject* q_graphicssvgitem_to_graphics_object2(void* self) {
    return QGraphicsItem_ToGraphicsObject2(q_graphicssvgitem_as_q_graphics_item(self));
}

QGraphicsItemGroup* q_graphicssvgitem_group(void* self) {
    return QGraphicsItem_Group(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_set_group(void* self, void* group) {
    QGraphicsItem_SetGroup(q_graphicssvgitem_as_q_graphics_item(self), (QGraphicsItemGroup*)group);
}

int32_t q_graphicssvgitem_flags(void* self) {
    return QGraphicsItem_Flags(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_set_flag(void* self, int32_t flag) {
    QGraphicsItem_SetFlag(q_graphicssvgitem_as_q_graphics_item(self), flag);
}

void q_graphicssvgitem_set_flags(void* self, int32_t flags) {
    QGraphicsItem_SetFlags(q_graphicssvgitem_as_q_graphics_item(self), flags);
}

int32_t q_graphicssvgitem_cache_mode(void* self) {
    return QGraphicsItem_CacheMode(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_set_cache_mode(void* self, int32_t mode) {
    QGraphicsItem_SetCacheMode(q_graphicssvgitem_as_q_graphics_item(self), mode);
}

int32_t q_graphicssvgitem_panel_modality(void* self) {
    return QGraphicsItem_PanelModality(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_set_panel_modality(void* self, int32_t panelModality) {
    QGraphicsItem_SetPanelModality(q_graphicssvgitem_as_q_graphics_item(self), panelModality);
}

bool q_graphicssvgitem_is_blocked_by_modal_panel(void* self) {
    return QGraphicsItem_IsBlockedByModalPanel(q_graphicssvgitem_as_q_graphics_item(self));
}

const char* q_graphicssvgitem_tool_tip(void* self) {
    libqt_string _str = QGraphicsItem_ToolTip(q_graphicssvgitem_as_q_graphics_item(self));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicssvgitem_set_tool_tip(void* self, const char* toolTip) {
    QGraphicsItem_SetToolTip(q_graphicssvgitem_as_q_graphics_item(self), qstring(toolTip));
}

QCursor* q_graphicssvgitem_cursor(void* self) {
    return QGraphicsItem_Cursor(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_set_cursor(void* self, void* cursor) {
    QGraphicsItem_SetCursor(q_graphicssvgitem_as_q_graphics_item(self), (QCursor*)cursor);
}

bool q_graphicssvgitem_has_cursor(void* self) {
    return QGraphicsItem_HasCursor(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_unset_cursor(void* self) {
    QGraphicsItem_UnsetCursor(q_graphicssvgitem_as_q_graphics_item(self));
}

bool q_graphicssvgitem_is_visible(void* self) {
    return QGraphicsItem_IsVisible(q_graphicssvgitem_as_q_graphics_item(self));
}

bool q_graphicssvgitem_is_visible_to(void* self, void* parent) {
    return QGraphicsItem_IsVisibleTo(q_graphicssvgitem_as_q_graphics_item(self), (QGraphicsItem*)parent);
}

void q_graphicssvgitem_set_visible(void* self, bool visible) {
    QGraphicsItem_SetVisible(q_graphicssvgitem_as_q_graphics_item(self), visible);
}

void q_graphicssvgitem_hide(void* self) {
    QGraphicsItem_Hide(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_show(void* self) {
    QGraphicsItem_Show(q_graphicssvgitem_as_q_graphics_item(self));
}

bool q_graphicssvgitem_is_enabled(void* self) {
    return QGraphicsItem_IsEnabled(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_set_enabled(void* self, bool enabled) {
    QGraphicsItem_SetEnabled(q_graphicssvgitem_as_q_graphics_item(self), enabled);
}

bool q_graphicssvgitem_is_selected(void* self) {
    return QGraphicsItem_IsSelected(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_set_selected(void* self, bool selected) {
    QGraphicsItem_SetSelected(q_graphicssvgitem_as_q_graphics_item(self), selected);
}

bool q_graphicssvgitem_accept_drops(void* self) {
    return QGraphicsItem_AcceptDrops(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_set_accept_drops(void* self, bool on) {
    QGraphicsItem_SetAcceptDrops(q_graphicssvgitem_as_q_graphics_item(self), on);
}

double q_graphicssvgitem_opacity(void* self) {
    return QGraphicsItem_Opacity(q_graphicssvgitem_as_q_graphics_item(self));
}

double q_graphicssvgitem_effective_opacity(void* self) {
    return QGraphicsItem_EffectiveOpacity(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_set_opacity(void* self, double opacity) {
    QGraphicsItem_SetOpacity(q_graphicssvgitem_as_q_graphics_item(self), opacity);
}

QGraphicsEffect* q_graphicssvgitem_graphics_effect(void* self) {
    return QGraphicsItem_GraphicsEffect(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_set_graphics_effect(void* self, void* effect) {
    QGraphicsItem_SetGraphicsEffect(q_graphicssvgitem_as_q_graphics_item(self), (QGraphicsEffect*)effect);
}

int32_t q_graphicssvgitem_accepted_mouse_buttons(void* self) {
    return QGraphicsItem_AcceptedMouseButtons(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_set_accepted_mouse_buttons(void* self, int32_t buttons) {
    QGraphicsItem_SetAcceptedMouseButtons(q_graphicssvgitem_as_q_graphics_item(self), buttons);
}

bool q_graphicssvgitem_accept_hover_events(void* self) {
    return QGraphicsItem_AcceptHoverEvents(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_set_accept_hover_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptHoverEvents(q_graphicssvgitem_as_q_graphics_item(self), enabled);
}

bool q_graphicssvgitem_accept_touch_events(void* self) {
    return QGraphicsItem_AcceptTouchEvents(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_set_accept_touch_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptTouchEvents(q_graphicssvgitem_as_q_graphics_item(self), enabled);
}

bool q_graphicssvgitem_filters_child_events(void* self) {
    return QGraphicsItem_FiltersChildEvents(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_set_filters_child_events(void* self, bool enabled) {
    QGraphicsItem_SetFiltersChildEvents(q_graphicssvgitem_as_q_graphics_item(self), enabled);
}

bool q_graphicssvgitem_handles_child_events(void* self) {
    return QGraphicsItem_HandlesChildEvents(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_set_handles_child_events(void* self, bool enabled) {
    QGraphicsItem_SetHandlesChildEvents(q_graphicssvgitem_as_q_graphics_item(self), enabled);
}

bool q_graphicssvgitem_is_active(void* self) {
    return QGraphicsItem_IsActive(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_set_active(void* self, bool active) {
    QGraphicsItem_SetActive(q_graphicssvgitem_as_q_graphics_item(self), active);
}

bool q_graphicssvgitem_has_focus(void* self) {
    return QGraphicsItem_HasFocus(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_set_focus(void* self) {
    QGraphicsItem_SetFocus(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_clear_focus(void* self) {
    QGraphicsItem_ClearFocus(q_graphicssvgitem_as_q_graphics_item(self));
}

QGraphicsItem* q_graphicssvgitem_focus_proxy(void* self) {
    return QGraphicsItem_FocusProxy(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_set_focus_proxy(void* self, void* item) {
    QGraphicsItem_SetFocusProxy(q_graphicssvgitem_as_q_graphics_item(self), (QGraphicsItem*)item);
}

QGraphicsItem* q_graphicssvgitem_focus_item(void* self) {
    return QGraphicsItem_FocusItem(q_graphicssvgitem_as_q_graphics_item(self));
}

QGraphicsItem* q_graphicssvgitem_focus_scope_item(void* self) {
    return QGraphicsItem_FocusScopeItem(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_grab_mouse(void* self) {
    QGraphicsItem_GrabMouse(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_ungrab_mouse(void* self) {
    QGraphicsItem_UngrabMouse(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_grab_keyboard(void* self) {
    QGraphicsItem_GrabKeyboard(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_ungrab_keyboard(void* self) {
    QGraphicsItem_UngrabKeyboard(q_graphicssvgitem_as_q_graphics_item(self));
}

QPointF* q_graphicssvgitem_pos(void* self) {
    return QGraphicsItem_Pos(q_graphicssvgitem_as_q_graphics_item(self));
}

double q_graphicssvgitem_x(void* self) {
    return QGraphicsItem_X(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_set_x(void* self, double x) {
    QGraphicsItem_SetX(q_graphicssvgitem_as_q_graphics_item(self), x);
}

double q_graphicssvgitem_y(void* self) {
    return QGraphicsItem_Y(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_set_y(void* self, double y) {
    QGraphicsItem_SetY(q_graphicssvgitem_as_q_graphics_item(self), y);
}

QPointF* q_graphicssvgitem_scene_pos(void* self) {
    return QGraphicsItem_ScenePos(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_set_pos(void* self, void* pos) {
    QGraphicsItem_SetPos(q_graphicssvgitem_as_q_graphics_item(self), (QPointF*)pos);
}

void q_graphicssvgitem_set_pos2(void* self, double x, double y) {
    QGraphicsItem_SetPos2(q_graphicssvgitem_as_q_graphics_item(self), x, y);
}

void q_graphicssvgitem_move_by(void* self, double dx, double dy) {
    QGraphicsItem_MoveBy(q_graphicssvgitem_as_q_graphics_item(self), dx, dy);
}

void q_graphicssvgitem_ensure_visible(void* self) {
    QGraphicsItem_EnsureVisible(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_ensure_visible2(void* self, double x, double y, double w, double h) {
    QGraphicsItem_EnsureVisible2(q_graphicssvgitem_as_q_graphics_item(self), x, y, w, h);
}

QTransform* q_graphicssvgitem_transform(void* self) {
    return QGraphicsItem_Transform(q_graphicssvgitem_as_q_graphics_item(self));
}

QTransform* q_graphicssvgitem_scene_transform(void* self) {
    return QGraphicsItem_SceneTransform(q_graphicssvgitem_as_q_graphics_item(self));
}

QTransform* q_graphicssvgitem_device_transform(void* self, void* viewportTransform) {
    return QGraphicsItem_DeviceTransform(q_graphicssvgitem_as_q_graphics_item(self), (QTransform*)viewportTransform);
}

QTransform* q_graphicssvgitem_item_transform(void* self, void* other) {
    return QGraphicsItem_ItemTransform(q_graphicssvgitem_as_q_graphics_item(self), (QGraphicsItem*)other);
}

void q_graphicssvgitem_set_transform(void* self, void* matrix) {
    QGraphicsItem_SetTransform(q_graphicssvgitem_as_q_graphics_item(self), (QTransform*)matrix);
}

void q_graphicssvgitem_reset_transform(void* self) {
    QGraphicsItem_ResetTransform(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_set_rotation(void* self, double angle) {
    QGraphicsItem_SetRotation(q_graphicssvgitem_as_q_graphics_item(self), angle);
}

double q_graphicssvgitem_rotation(void* self) {
    return QGraphicsItem_Rotation(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_set_scale(void* self, double scale) {
    QGraphicsItem_SetScale(q_graphicssvgitem_as_q_graphics_item(self), scale);
}

double q_graphicssvgitem_scale(void* self) {
    return QGraphicsItem_Scale(q_graphicssvgitem_as_q_graphics_item(self));
}

libqt_list /* of QGraphicsTransform* */ q_graphicssvgitem_transformations(void* self) {
    libqt_list _arr = QGraphicsItem_Transformations(q_graphicssvgitem_as_q_graphics_item(self));
    return _arr;
}

void q_graphicssvgitem_set_transformations(void* self, libqt_list /* of QGraphicsTransform* */ transformations) {
    QGraphicsItem_SetTransformations(q_graphicssvgitem_as_q_graphics_item(self), transformations);
}

QPointF* q_graphicssvgitem_transform_origin_point(void* self) {
    return QGraphicsItem_TransformOriginPoint(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_set_transform_origin_point(void* self, void* origin) {
    QGraphicsItem_SetTransformOriginPoint(q_graphicssvgitem_as_q_graphics_item(self), (QPointF*)origin);
}

void q_graphicssvgitem_set_transform_origin_point2(void* self, double ax, double ay) {
    QGraphicsItem_SetTransformOriginPoint2(q_graphicssvgitem_as_q_graphics_item(self), ax, ay);
}

double q_graphicssvgitem_z_value(void* self) {
    return QGraphicsItem_ZValue(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_set_z_value(void* self, double z) {
    QGraphicsItem_SetZValue(q_graphicssvgitem_as_q_graphics_item(self), z);
}

void q_graphicssvgitem_stack_before(void* self, void* sibling) {
    QGraphicsItem_StackBefore(q_graphicssvgitem_as_q_graphics_item(self), (QGraphicsItem*)sibling);
}

QRectF* q_graphicssvgitem_children_bounding_rect(void* self) {
    return QGraphicsItem_ChildrenBoundingRect(q_graphicssvgitem_as_q_graphics_item(self));
}

QRectF* q_graphicssvgitem_scene_bounding_rect(void* self) {
    return QGraphicsItem_SceneBoundingRect(q_graphicssvgitem_as_q_graphics_item(self));
}

bool q_graphicssvgitem_is_clipped(void* self) {
    return QGraphicsItem_IsClipped(q_graphicssvgitem_as_q_graphics_item(self));
}

QPainterPath* q_graphicssvgitem_clip_path(void* self) {
    return QGraphicsItem_ClipPath(q_graphicssvgitem_as_q_graphics_item(self));
}

libqt_list /* of QGraphicsItem* */ q_graphicssvgitem_colliding_items(void* self) {
    libqt_list _arr = QGraphicsItem_CollidingItems(q_graphicssvgitem_as_q_graphics_item(self));
    return _arr;
}

bool q_graphicssvgitem_is_obscured(void* self) {
    return QGraphicsItem_IsObscured(q_graphicssvgitem_as_q_graphics_item(self));
}

bool q_graphicssvgitem_is_obscured2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_IsObscured2(q_graphicssvgitem_as_q_graphics_item(self), x, y, w, h);
}

QRegion* q_graphicssvgitem_bounding_region(void* self, void* itemToDeviceTransform) {
    return QGraphicsItem_BoundingRegion(q_graphicssvgitem_as_q_graphics_item(self), (QTransform*)itemToDeviceTransform);
}

double q_graphicssvgitem_bounding_region_granularity(void* self) {
    return QGraphicsItem_BoundingRegionGranularity(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_set_bounding_region_granularity(void* self, double granularity) {
    QGraphicsItem_SetBoundingRegionGranularity(q_graphicssvgitem_as_q_graphics_item(self), granularity);
}

void q_graphicssvgitem_update(void* self) {
    QGraphicsItem_Update(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_update2(void* self, double x, double y, double width, double height) {
    QGraphicsItem_Update2(q_graphicssvgitem_as_q_graphics_item(self), x, y, width, height);
}

void q_graphicssvgitem_scroll(void* self, double dx, double dy) {
    QGraphicsItem_Scroll(q_graphicssvgitem_as_q_graphics_item(self), dx, dy);
}

QPointF* q_graphicssvgitem_map_to_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapToItem(q_graphicssvgitem_as_q_graphics_item(self), (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicssvgitem_map_to_parent(void* self, void* point) {
    return QGraphicsItem_MapToParent(q_graphicssvgitem_as_q_graphics_item(self), (QPointF*)point);
}

QPointF* q_graphicssvgitem_map_to_scene(void* self, void* point) {
    return QGraphicsItem_MapToScene(q_graphicssvgitem_as_q_graphics_item(self), (QPointF*)point);
}

QRectF* q_graphicssvgitem_map_rect_to_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectToItem(q_graphicssvgitem_as_q_graphics_item(self), (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicssvgitem_map_rect_to_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectToParent(q_graphicssvgitem_as_q_graphics_item(self), (QRectF*)rect);
}

QRectF* q_graphicssvgitem_map_rect_to_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectToScene(q_graphicssvgitem_as_q_graphics_item(self), (QRectF*)rect);
}

QPainterPath* q_graphicssvgitem_map_to_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapToItem4(q_graphicssvgitem_as_q_graphics_item(self), (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicssvgitem_map_to_parent4(void* self, void* path) {
    return QGraphicsItem_MapToParent4(q_graphicssvgitem_as_q_graphics_item(self), (QPainterPath*)path);
}

QPainterPath* q_graphicssvgitem_map_to_scene4(void* self, void* path) {
    return QGraphicsItem_MapToScene4(q_graphicssvgitem_as_q_graphics_item(self), (QPainterPath*)path);
}

QPointF* q_graphicssvgitem_map_from_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapFromItem(q_graphicssvgitem_as_q_graphics_item(self), (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicssvgitem_map_from_parent(void* self, void* point) {
    return QGraphicsItem_MapFromParent(q_graphicssvgitem_as_q_graphics_item(self), (QPointF*)point);
}

QPointF* q_graphicssvgitem_map_from_scene(void* self, void* point) {
    return QGraphicsItem_MapFromScene(q_graphicssvgitem_as_q_graphics_item(self), (QPointF*)point);
}

QRectF* q_graphicssvgitem_map_rect_from_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectFromItem(q_graphicssvgitem_as_q_graphics_item(self), (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicssvgitem_map_rect_from_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectFromParent(q_graphicssvgitem_as_q_graphics_item(self), (QRectF*)rect);
}

QRectF* q_graphicssvgitem_map_rect_from_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectFromScene(q_graphicssvgitem_as_q_graphics_item(self), (QRectF*)rect);
}

QPainterPath* q_graphicssvgitem_map_from_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapFromItem4(q_graphicssvgitem_as_q_graphics_item(self), (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicssvgitem_map_from_parent4(void* self, void* path) {
    return QGraphicsItem_MapFromParent4(q_graphicssvgitem_as_q_graphics_item(self), (QPainterPath*)path);
}

QPainterPath* q_graphicssvgitem_map_from_scene4(void* self, void* path) {
    return QGraphicsItem_MapFromScene4(q_graphicssvgitem_as_q_graphics_item(self), (QPainterPath*)path);
}

QPointF* q_graphicssvgitem_map_to_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapToItem5(q_graphicssvgitem_as_q_graphics_item(self), (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicssvgitem_map_to_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapToParent5(q_graphicssvgitem_as_q_graphics_item(self), x, y);
}

QPointF* q_graphicssvgitem_map_to_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapToScene5(q_graphicssvgitem_as_q_graphics_item(self), x, y);
}

QRectF* q_graphicssvgitem_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToItem2(q_graphicssvgitem_as_q_graphics_item(self), (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicssvgitem_map_rect_to_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToParent2(q_graphicssvgitem_as_q_graphics_item(self), x, y, w, h);
}

QRectF* q_graphicssvgitem_map_rect_to_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToScene2(q_graphicssvgitem_as_q_graphics_item(self), x, y, w, h);
}

QPointF* q_graphicssvgitem_map_from_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapFromItem5(q_graphicssvgitem_as_q_graphics_item(self), (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicssvgitem_map_from_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapFromParent5(q_graphicssvgitem_as_q_graphics_item(self), x, y);
}

QPointF* q_graphicssvgitem_map_from_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapFromScene5(q_graphicssvgitem_as_q_graphics_item(self), x, y);
}

QRectF* q_graphicssvgitem_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromItem2(q_graphicssvgitem_as_q_graphics_item(self), (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicssvgitem_map_rect_from_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromParent2(q_graphicssvgitem_as_q_graphics_item(self), x, y, w, h);
}

QRectF* q_graphicssvgitem_map_rect_from_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromScene2(q_graphicssvgitem_as_q_graphics_item(self), x, y, w, h);
}

bool q_graphicssvgitem_is_ancestor_of(void* self, void* child) {
    return QGraphicsItem_IsAncestorOf(q_graphicssvgitem_as_q_graphics_item(self), (QGraphicsItem*)child);
}

QGraphicsItem* q_graphicssvgitem_common_ancestor_item(void* self, void* other) {
    return QGraphicsItem_CommonAncestorItem(q_graphicssvgitem_as_q_graphics_item(self), (QGraphicsItem*)other);
}

bool q_graphicssvgitem_is_under_mouse(void* self) {
    return QGraphicsItem_IsUnderMouse(q_graphicssvgitem_as_q_graphics_item(self));
}

QVariant* q_graphicssvgitem_data(void* self, int key) {
    return QGraphicsItem_Data(q_graphicssvgitem_as_q_graphics_item(self), key);
}

void q_graphicssvgitem_set_data(void* self, int key, void* value) {
    QGraphicsItem_SetData(q_graphicssvgitem_as_q_graphics_item(self), key, (QVariant*)value);
}

int32_t q_graphicssvgitem_input_method_hints(void* self) {
    return QGraphicsItem_InputMethodHints(q_graphicssvgitem_as_q_graphics_item(self));
}

void q_graphicssvgitem_set_input_method_hints(void* self, int32_t hints) {
    QGraphicsItem_SetInputMethodHints(q_graphicssvgitem_as_q_graphics_item(self), hints);
}

void q_graphicssvgitem_install_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_InstallSceneEventFilter(q_graphicssvgitem_as_q_graphics_item(self), (QGraphicsItem*)filterItem);
}

void q_graphicssvgitem_remove_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_RemoveSceneEventFilter(q_graphicssvgitem_as_q_graphics_item(self), (QGraphicsItem*)filterItem);
}

void q_graphicssvgitem_set_flag2(void* self, int32_t flag, bool enabled) {
    QGraphicsItem_SetFlag2(q_graphicssvgitem_as_q_graphics_item(self), flag, enabled);
}

void q_graphicssvgitem_set_cache_mode2(void* self, int32_t mode, void* cacheSize) {
    QGraphicsItem_SetCacheMode2(q_graphicssvgitem_as_q_graphics_item(self), mode, (QSize*)cacheSize);
}

bool q_graphicssvgitem_is_blocked_by_modal_panel1(void* self, void** blockingPanel) {
    return QGraphicsItem_IsBlockedByModalPanel1(q_graphicssvgitem_as_q_graphics_item(self), (QGraphicsItem**)blockingPanel);
}

void q_graphicssvgitem_set_focus1(void* self, int32_t focusReason) {
    QGraphicsItem_SetFocus1(q_graphicssvgitem_as_q_graphics_item(self), focusReason);
}

void q_graphicssvgitem_ensure_visible1(void* self, void* rect) {
    QGraphicsItem_EnsureVisible1(q_graphicssvgitem_as_q_graphics_item(self), (QRectF*)rect);
}

void q_graphicssvgitem_ensure_visible22(void* self, void* rect, int xmargin) {
    QGraphicsItem_EnsureVisible22(q_graphicssvgitem_as_q_graphics_item(self), (QRectF*)rect, xmargin);
}

void q_graphicssvgitem_ensure_visible3(void* self, void* rect, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible3(q_graphicssvgitem_as_q_graphics_item(self), (QRectF*)rect, xmargin, ymargin);
}

void q_graphicssvgitem_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin) {
    QGraphicsItem_EnsureVisible5(q_graphicssvgitem_as_q_graphics_item(self), x, y, w, h, xmargin);
}

void q_graphicssvgitem_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible6(q_graphicssvgitem_as_q_graphics_item(self), x, y, w, h, xmargin, ymargin);
}

QTransform* q_graphicssvgitem_item_transform2(void* self, void* other, bool* ok) {
    return QGraphicsItem_ItemTransform2(q_graphicssvgitem_as_q_graphics_item(self), (QGraphicsItem*)other, (bool*)ok);
}

void q_graphicssvgitem_set_transform2(void* self, void* matrix, bool combine) {
    QGraphicsItem_SetTransform2(q_graphicssvgitem_as_q_graphics_item(self), (QTransform*)matrix, combine);
}

libqt_list /* of QGraphicsItem* */ q_graphicssvgitem_colliding_items1(void* self, int32_t mode) {
    libqt_list _arr = QGraphicsItem_CollidingItems1(q_graphicssvgitem_as_q_graphics_item(self), mode);
    return _arr;
}

bool q_graphicssvgitem_is_obscured1(void* self, void* rect) {
    return QGraphicsItem_IsObscured1(q_graphicssvgitem_as_q_graphics_item(self), (QRectF*)rect);
}

void q_graphicssvgitem_update1(void* self, void* rect) {
    QGraphicsItem_Update1(q_graphicssvgitem_as_q_graphics_item(self), (QRectF*)rect);
}

void q_graphicssvgitem_scroll3(void* self, double dx, double dy, void* rect) {
    QGraphicsItem_Scroll3(q_graphicssvgitem_as_q_graphics_item(self), dx, dy, (QRectF*)rect);
}

bool q_graphicssvgitem_event(void* self, void* ev) {
    return QGraphicsSvgItem_Event((QGraphicsSvgItem*)self, (QEvent*)ev);
}

bool q_graphicssvgitem_super_event(void* self, void* ev) {
    return QGraphicsSvgItem_SuperEvent((QGraphicsSvgItem*)self, (QEvent*)ev);
}

void q_graphicssvgitem_on_event(void* self, bool (*callback)(void*, void*)) {
    QGraphicsSvgItem_OnEvent((QGraphicsSvgItem*)self, (intptr_t)callback);
}

bool q_graphicssvgitem_event_filter(void* self, void* watched, void* event) {
    return QGraphicsSvgItem_EventFilter((QGraphicsSvgItem*)self, (QObject*)watched, (QEvent*)event);
}

bool q_graphicssvgitem_super_event_filter(void* self, void* watched, void* event) {
    return QGraphicsSvgItem_SuperEventFilter((QGraphicsSvgItem*)self, (QObject*)watched, (QEvent*)event);
}

void q_graphicssvgitem_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGraphicsSvgItem_OnEventFilter((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void q_graphicssvgitem_timer_event(void* self, void* event) {
    QGraphicsSvgItem_TimerEvent((QGraphicsSvgItem*)self, (QTimerEvent*)event);
}

void q_graphicssvgitem_super_timer_event(void* self, void* event) {
    QGraphicsSvgItem_SuperTimerEvent((QGraphicsSvgItem*)self, (QTimerEvent*)event);
}

void q_graphicssvgitem_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSvgItem_OnTimerEvent((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void q_graphicssvgitem_child_event(void* self, void* event) {
    QGraphicsSvgItem_ChildEvent((QGraphicsSvgItem*)self, (QChildEvent*)event);
}

void q_graphicssvgitem_super_child_event(void* self, void* event) {
    QGraphicsSvgItem_SuperChildEvent((QGraphicsSvgItem*)self, (QChildEvent*)event);
}

void q_graphicssvgitem_on_child_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSvgItem_OnChildEvent((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void q_graphicssvgitem_custom_event(void* self, void* event) {
    QGraphicsSvgItem_CustomEvent((QGraphicsSvgItem*)self, (QEvent*)event);
}

void q_graphicssvgitem_super_custom_event(void* self, void* event) {
    QGraphicsSvgItem_SuperCustomEvent((QGraphicsSvgItem*)self, (QEvent*)event);
}

void q_graphicssvgitem_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSvgItem_OnCustomEvent((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void q_graphicssvgitem_connect_notify(void* self, void* signal) {
    QGraphicsSvgItem_ConnectNotify((QGraphicsSvgItem*)self, (QMetaMethod*)signal);
}

void q_graphicssvgitem_super_connect_notify(void* self, void* signal) {
    QGraphicsSvgItem_SuperConnectNotify((QGraphicsSvgItem*)self, (QMetaMethod*)signal);
}

void q_graphicssvgitem_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QGraphicsSvgItem_OnConnectNotify((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void q_graphicssvgitem_disconnect_notify(void* self, void* signal) {
    QGraphicsSvgItem_DisconnectNotify((QGraphicsSvgItem*)self, (QMetaMethod*)signal);
}

void q_graphicssvgitem_super_disconnect_notify(void* self, void* signal) {
    QGraphicsSvgItem_SuperDisconnectNotify((QGraphicsSvgItem*)self, (QMetaMethod*)signal);
}

void q_graphicssvgitem_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QGraphicsSvgItem_OnDisconnectNotify((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void q_graphicssvgitem_advance(void* self, int phase) {
    QGraphicsSvgItem_Advance((QGraphicsSvgItem*)self, phase);
}

void q_graphicssvgitem_super_advance(void* self, int phase) {
    QGraphicsSvgItem_SuperAdvance((QGraphicsSvgItem*)self, phase);
}

void q_graphicssvgitem_on_advance(void* self, void (*callback)(void*, int)) {
    QGraphicsSvgItem_OnAdvance((QGraphicsSvgItem*)self, (intptr_t)callback);
}

QPainterPath* q_graphicssvgitem_shape(void* self) {
    return QGraphicsSvgItem_Shape((QGraphicsSvgItem*)self);
}

QPainterPath* q_graphicssvgitem_super_shape(void* self) {
    return QGraphicsSvgItem_SuperShape((QGraphicsSvgItem*)self);
}

void q_graphicssvgitem_on_shape(void* self, QPainterPath* (*callback)()) {
    QGraphicsSvgItem_OnShape((QGraphicsSvgItem*)self, (intptr_t)callback);
}

bool q_graphicssvgitem_contains(void* self, void* point) {
    return QGraphicsSvgItem_Contains((QGraphicsSvgItem*)self, (QPointF*)point);
}

bool q_graphicssvgitem_super_contains(void* self, void* point) {
    return QGraphicsSvgItem_SuperContains((QGraphicsSvgItem*)self, (QPointF*)point);
}

void q_graphicssvgitem_on_contains(void* self, bool (*callback)(void*, void*)) {
    QGraphicsSvgItem_OnContains((QGraphicsSvgItem*)self, (intptr_t)callback);
}

bool q_graphicssvgitem_collides_with_item(void* self, void* other, int32_t mode) {
    return QGraphicsSvgItem_CollidesWithItem((QGraphicsSvgItem*)self, (QGraphicsItem*)other, mode);
}

bool q_graphicssvgitem_super_collides_with_item(void* self, void* other, int32_t mode) {
    return QGraphicsSvgItem_SuperCollidesWithItem((QGraphicsSvgItem*)self, (QGraphicsItem*)other, mode);
}

void q_graphicssvgitem_on_collides_with_item(void* self, bool (*callback)(void*, void*, int32_t)) {
    QGraphicsSvgItem_OnCollidesWithItem((QGraphicsSvgItem*)self, (intptr_t)callback);
}

bool q_graphicssvgitem_collides_with_path(void* self, void* path, int32_t mode) {
    return QGraphicsSvgItem_CollidesWithPath((QGraphicsSvgItem*)self, (QPainterPath*)path, mode);
}

bool q_graphicssvgitem_super_collides_with_path(void* self, void* path, int32_t mode) {
    return QGraphicsSvgItem_SuperCollidesWithPath((QGraphicsSvgItem*)self, (QPainterPath*)path, mode);
}

void q_graphicssvgitem_on_collides_with_path(void* self, bool (*callback)(void*, void*, int32_t)) {
    QGraphicsSvgItem_OnCollidesWithPath((QGraphicsSvgItem*)self, (intptr_t)callback);
}

bool q_graphicssvgitem_is_obscured_by(void* self, void* item) {
    return QGraphicsSvgItem_IsObscuredBy((QGraphicsSvgItem*)self, (QGraphicsItem*)item);
}

bool q_graphicssvgitem_super_is_obscured_by(void* self, void* item) {
    return QGraphicsSvgItem_SuperIsObscuredBy((QGraphicsSvgItem*)self, (QGraphicsItem*)item);
}

void q_graphicssvgitem_on_is_obscured_by(void* self, bool (*callback)(void*, void*)) {
    QGraphicsSvgItem_OnIsObscuredBy((QGraphicsSvgItem*)self, (intptr_t)callback);
}

QPainterPath* q_graphicssvgitem_opaque_area(void* self) {
    return QGraphicsSvgItem_OpaqueArea((QGraphicsSvgItem*)self);
}

QPainterPath* q_graphicssvgitem_super_opaque_area(void* self) {
    return QGraphicsSvgItem_SuperOpaqueArea((QGraphicsSvgItem*)self);
}

void q_graphicssvgitem_on_opaque_area(void* self, QPainterPath* (*callback)()) {
    QGraphicsSvgItem_OnOpaqueArea((QGraphicsSvgItem*)self, (intptr_t)callback);
}

bool q_graphicssvgitem_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsSvgItem_SceneEventFilter((QGraphicsSvgItem*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

bool q_graphicssvgitem_super_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsSvgItem_SuperSceneEventFilter((QGraphicsSvgItem*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

void q_graphicssvgitem_on_scene_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGraphicsSvgItem_OnSceneEventFilter((QGraphicsSvgItem*)self, (intptr_t)callback);
}

bool q_graphicssvgitem_scene_event(void* self, void* event) {
    return QGraphicsSvgItem_SceneEvent((QGraphicsSvgItem*)self, (QEvent*)event);
}

bool q_graphicssvgitem_super_scene_event(void* self, void* event) {
    return QGraphicsSvgItem_SuperSceneEvent((QGraphicsSvgItem*)self, (QEvent*)event);
}

void q_graphicssvgitem_on_scene_event(void* self, bool (*callback)(void*, void*)) {
    QGraphicsSvgItem_OnSceneEvent((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void q_graphicssvgitem_context_menu_event(void* self, void* event) {
    QGraphicsSvgItem_ContextMenuEvent((QGraphicsSvgItem*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicssvgitem_super_context_menu_event(void* self, void* event) {
    QGraphicsSvgItem_SuperContextMenuEvent((QGraphicsSvgItem*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicssvgitem_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSvgItem_OnContextMenuEvent((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void q_graphicssvgitem_drag_enter_event(void* self, void* event) {
    QGraphicsSvgItem_DragEnterEvent((QGraphicsSvgItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicssvgitem_super_drag_enter_event(void* self, void* event) {
    QGraphicsSvgItem_SuperDragEnterEvent((QGraphicsSvgItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicssvgitem_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSvgItem_OnDragEnterEvent((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void q_graphicssvgitem_drag_leave_event(void* self, void* event) {
    QGraphicsSvgItem_DragLeaveEvent((QGraphicsSvgItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicssvgitem_super_drag_leave_event(void* self, void* event) {
    QGraphicsSvgItem_SuperDragLeaveEvent((QGraphicsSvgItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicssvgitem_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSvgItem_OnDragLeaveEvent((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void q_graphicssvgitem_drag_move_event(void* self, void* event) {
    QGraphicsSvgItem_DragMoveEvent((QGraphicsSvgItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicssvgitem_super_drag_move_event(void* self, void* event) {
    QGraphicsSvgItem_SuperDragMoveEvent((QGraphicsSvgItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicssvgitem_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSvgItem_OnDragMoveEvent((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void q_graphicssvgitem_drop_event(void* self, void* event) {
    QGraphicsSvgItem_DropEvent((QGraphicsSvgItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicssvgitem_super_drop_event(void* self, void* event) {
    QGraphicsSvgItem_SuperDropEvent((QGraphicsSvgItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicssvgitem_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSvgItem_OnDropEvent((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void q_graphicssvgitem_focus_in_event(void* self, void* event) {
    QGraphicsSvgItem_FocusInEvent((QGraphicsSvgItem*)self, (QFocusEvent*)event);
}

void q_graphicssvgitem_super_focus_in_event(void* self, void* event) {
    QGraphicsSvgItem_SuperFocusInEvent((QGraphicsSvgItem*)self, (QFocusEvent*)event);
}

void q_graphicssvgitem_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSvgItem_OnFocusInEvent((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void q_graphicssvgitem_focus_out_event(void* self, void* event) {
    QGraphicsSvgItem_FocusOutEvent((QGraphicsSvgItem*)self, (QFocusEvent*)event);
}

void q_graphicssvgitem_super_focus_out_event(void* self, void* event) {
    QGraphicsSvgItem_SuperFocusOutEvent((QGraphicsSvgItem*)self, (QFocusEvent*)event);
}

void q_graphicssvgitem_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSvgItem_OnFocusOutEvent((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void q_graphicssvgitem_hover_enter_event(void* self, void* event) {
    QGraphicsSvgItem_HoverEnterEvent((QGraphicsSvgItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicssvgitem_super_hover_enter_event(void* self, void* event) {
    QGraphicsSvgItem_SuperHoverEnterEvent((QGraphicsSvgItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicssvgitem_on_hover_enter_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSvgItem_OnHoverEnterEvent((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void q_graphicssvgitem_hover_move_event(void* self, void* event) {
    QGraphicsSvgItem_HoverMoveEvent((QGraphicsSvgItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicssvgitem_super_hover_move_event(void* self, void* event) {
    QGraphicsSvgItem_SuperHoverMoveEvent((QGraphicsSvgItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicssvgitem_on_hover_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSvgItem_OnHoverMoveEvent((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void q_graphicssvgitem_hover_leave_event(void* self, void* event) {
    QGraphicsSvgItem_HoverLeaveEvent((QGraphicsSvgItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicssvgitem_super_hover_leave_event(void* self, void* event) {
    QGraphicsSvgItem_SuperHoverLeaveEvent((QGraphicsSvgItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicssvgitem_on_hover_leave_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSvgItem_OnHoverLeaveEvent((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void q_graphicssvgitem_key_press_event(void* self, void* event) {
    QGraphicsSvgItem_KeyPressEvent((QGraphicsSvgItem*)self, (QKeyEvent*)event);
}

void q_graphicssvgitem_super_key_press_event(void* self, void* event) {
    QGraphicsSvgItem_SuperKeyPressEvent((QGraphicsSvgItem*)self, (QKeyEvent*)event);
}

void q_graphicssvgitem_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSvgItem_OnKeyPressEvent((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void q_graphicssvgitem_key_release_event(void* self, void* event) {
    QGraphicsSvgItem_KeyReleaseEvent((QGraphicsSvgItem*)self, (QKeyEvent*)event);
}

void q_graphicssvgitem_super_key_release_event(void* self, void* event) {
    QGraphicsSvgItem_SuperKeyReleaseEvent((QGraphicsSvgItem*)self, (QKeyEvent*)event);
}

void q_graphicssvgitem_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSvgItem_OnKeyReleaseEvent((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void q_graphicssvgitem_mouse_press_event(void* self, void* event) {
    QGraphicsSvgItem_MousePressEvent((QGraphicsSvgItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicssvgitem_super_mouse_press_event(void* self, void* event) {
    QGraphicsSvgItem_SuperMousePressEvent((QGraphicsSvgItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicssvgitem_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSvgItem_OnMousePressEvent((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void q_graphicssvgitem_mouse_move_event(void* self, void* event) {
    QGraphicsSvgItem_MouseMoveEvent((QGraphicsSvgItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicssvgitem_super_mouse_move_event(void* self, void* event) {
    QGraphicsSvgItem_SuperMouseMoveEvent((QGraphicsSvgItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicssvgitem_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSvgItem_OnMouseMoveEvent((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void q_graphicssvgitem_mouse_release_event(void* self, void* event) {
    QGraphicsSvgItem_MouseReleaseEvent((QGraphicsSvgItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicssvgitem_super_mouse_release_event(void* self, void* event) {
    QGraphicsSvgItem_SuperMouseReleaseEvent((QGraphicsSvgItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicssvgitem_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSvgItem_OnMouseReleaseEvent((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void q_graphicssvgitem_mouse_double_click_event(void* self, void* event) {
    QGraphicsSvgItem_MouseDoubleClickEvent((QGraphicsSvgItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicssvgitem_super_mouse_double_click_event(void* self, void* event) {
    QGraphicsSvgItem_SuperMouseDoubleClickEvent((QGraphicsSvgItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicssvgitem_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSvgItem_OnMouseDoubleClickEvent((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void q_graphicssvgitem_wheel_event(void* self, void* event) {
    QGraphicsSvgItem_WheelEvent((QGraphicsSvgItem*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicssvgitem_super_wheel_event(void* self, void* event) {
    QGraphicsSvgItem_SuperWheelEvent((QGraphicsSvgItem*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicssvgitem_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSvgItem_OnWheelEvent((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void q_graphicssvgitem_input_method_event(void* self, void* event) {
    QGraphicsSvgItem_InputMethodEvent((QGraphicsSvgItem*)self, (QInputMethodEvent*)event);
}

void q_graphicssvgitem_super_input_method_event(void* self, void* event) {
    QGraphicsSvgItem_SuperInputMethodEvent((QGraphicsSvgItem*)self, (QInputMethodEvent*)event);
}

void q_graphicssvgitem_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSvgItem_OnInputMethodEvent((QGraphicsSvgItem*)self, (intptr_t)callback);
}

QVariant* q_graphicssvgitem_input_method_query(void* self, int32_t query) {
    return QGraphicsSvgItem_InputMethodQuery((QGraphicsSvgItem*)self, query);
}

QVariant* q_graphicssvgitem_super_input_method_query(void* self, int32_t query) {
    return QGraphicsSvgItem_SuperInputMethodQuery((QGraphicsSvgItem*)self, query);
}

void q_graphicssvgitem_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QGraphicsSvgItem_OnInputMethodQuery((QGraphicsSvgItem*)self, (intptr_t)callback);
}

QVariant* q_graphicssvgitem_item_change(void* self, int32_t change, void* value) {
    return QGraphicsSvgItem_ItemChange((QGraphicsSvgItem*)self, change, (QVariant*)value);
}

QVariant* q_graphicssvgitem_super_item_change(void* self, int32_t change, void* value) {
    return QGraphicsSvgItem_SuperItemChange((QGraphicsSvgItem*)self, change, (QVariant*)value);
}

void q_graphicssvgitem_on_item_change(void* self, QVariant* (*callback)(void*, int32_t, void*)) {
    QGraphicsSvgItem_OnItemChange((QGraphicsSvgItem*)self, (intptr_t)callback);
}

bool q_graphicssvgitem_supports_extension(void* self, int32_t extension) {
    return QGraphicsSvgItem_SupportsExtension((QGraphicsSvgItem*)self, extension);
}

bool q_graphicssvgitem_super_supports_extension(void* self, int32_t extension) {
    return QGraphicsSvgItem_SuperSupportsExtension((QGraphicsSvgItem*)self, extension);
}

void q_graphicssvgitem_on_supports_extension(void* self, bool (*callback)(void*, int32_t)) {
    QGraphicsSvgItem_OnSupportsExtension((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void q_graphicssvgitem_set_extension(void* self, int32_t extension, void* variant) {
    QGraphicsSvgItem_SetExtension((QGraphicsSvgItem*)self, extension, (QVariant*)variant);
}

void q_graphicssvgitem_super_set_extension(void* self, int32_t extension, void* variant) {
    QGraphicsSvgItem_SuperSetExtension((QGraphicsSvgItem*)self, extension, (QVariant*)variant);
}

void q_graphicssvgitem_on_set_extension(void* self, void (*callback)(void*, int32_t, void*)) {
    QGraphicsSvgItem_OnSetExtension((QGraphicsSvgItem*)self, (intptr_t)callback);
}

QVariant* q_graphicssvgitem_extension(void* self, void* variant) {
    return QGraphicsSvgItem_Extension((QGraphicsSvgItem*)self, (QVariant*)variant);
}

QVariant* q_graphicssvgitem_super_extension(void* self, void* variant) {
    return QGraphicsSvgItem_SuperExtension((QGraphicsSvgItem*)self, (QVariant*)variant);
}

void q_graphicssvgitem_on_extension(void* self, QVariant* (*callback)(void*, void*)) {
    QGraphicsSvgItem_OnExtension((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void q_graphicssvgitem_update_micro_focus(void* self) {
    QGraphicsSvgItem_UpdateMicroFocus((QGraphicsSvgItem*)self);
}

void q_graphicssvgitem_super_update_micro_focus(void* self) {
    QGraphicsSvgItem_SuperUpdateMicroFocus((QGraphicsSvgItem*)self);
}

void q_graphicssvgitem_on_update_micro_focus(void* self, void (*callback)()) {
    QGraphicsSvgItem_OnUpdateMicroFocus((QGraphicsSvgItem*)self, (intptr_t)callback);
}

QObject* q_graphicssvgitem_sender(void* self) {
    return QGraphicsSvgItem_Sender((QGraphicsSvgItem*)self);
}

QObject* q_graphicssvgitem_super_sender(void* self) {
    return QGraphicsSvgItem_SuperSender((QGraphicsSvgItem*)self);
}

void q_graphicssvgitem_on_sender(void* self, QObject* (*callback)()) {
    QGraphicsSvgItem_OnSender((QGraphicsSvgItem*)self, (intptr_t)callback);
}

int32_t q_graphicssvgitem_sender_signal_index(void* self) {
    return QGraphicsSvgItem_SenderSignalIndex((QGraphicsSvgItem*)self);
}

int32_t q_graphicssvgitem_super_sender_signal_index(void* self) {
    return QGraphicsSvgItem_SuperSenderSignalIndex((QGraphicsSvgItem*)self);
}

void q_graphicssvgitem_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QGraphicsSvgItem_OnSenderSignalIndex((QGraphicsSvgItem*)self, (intptr_t)callback);
}

int32_t q_graphicssvgitem_receivers(void* self, const char* signal) {
    return QGraphicsSvgItem_Receivers((QGraphicsSvgItem*)self, signal);
}

int32_t q_graphicssvgitem_super_receivers(void* self, const char* signal) {
    return QGraphicsSvgItem_SuperReceivers((QGraphicsSvgItem*)self, signal);
}

void q_graphicssvgitem_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QGraphicsSvgItem_OnReceivers((QGraphicsSvgItem*)self, (intptr_t)callback);
}

bool q_graphicssvgitem_is_signal_connected(void* self, void* signal) {
    return QGraphicsSvgItem_IsSignalConnected((QGraphicsSvgItem*)self, (QMetaMethod*)signal);
}

bool q_graphicssvgitem_super_is_signal_connected(void* self, void* signal) {
    return QGraphicsSvgItem_SuperIsSignalConnected((QGraphicsSvgItem*)self, (QMetaMethod*)signal);
}

void q_graphicssvgitem_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QGraphicsSvgItem_OnIsSignalConnected((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void q_graphicssvgitem_add_to_index(void* self) {
    QGraphicsSvgItem_AddToIndex((QGraphicsSvgItem*)self);
}

void q_graphicssvgitem_super_add_to_index(void* self) {
    QGraphicsSvgItem_SuperAddToIndex((QGraphicsSvgItem*)self);
}

void q_graphicssvgitem_on_add_to_index(void* self, void (*callback)()) {
    QGraphicsSvgItem_OnAddToIndex((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void q_graphicssvgitem_remove_from_index(void* self) {
    QGraphicsSvgItem_RemoveFromIndex((QGraphicsSvgItem*)self);
}

void q_graphicssvgitem_super_remove_from_index(void* self) {
    QGraphicsSvgItem_SuperRemoveFromIndex((QGraphicsSvgItem*)self);
}

void q_graphicssvgitem_on_remove_from_index(void* self, void (*callback)()) {
    QGraphicsSvgItem_OnRemoveFromIndex((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void q_graphicssvgitem_prepare_geometry_change(void* self) {
    QGraphicsSvgItem_PrepareGeometryChange((QGraphicsSvgItem*)self);
}

void q_graphicssvgitem_super_prepare_geometry_change(void* self) {
    QGraphicsSvgItem_SuperPrepareGeometryChange((QGraphicsSvgItem*)self);
}

void q_graphicssvgitem_on_prepare_geometry_change(void* self, void (*callback)()) {
    QGraphicsSvgItem_OnPrepareGeometryChange((QGraphicsSvgItem*)self, (intptr_t)callback);
}

void q_graphicssvgitem_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_graphicssvgitem_delete(void* self) {
    QGraphicsSvgItem_Delete((QGraphicsSvgItem*)(self));
}
