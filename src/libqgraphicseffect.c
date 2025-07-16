#include "libqbrush.hpp"
#include "libqevent.hpp"
#include "libqcolor.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpainter.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include <string.h>
#include "libqcoreevent.hpp"
#include "libqgraphicseffect.hpp"
#include "libqgraphicseffect.h"

QGraphicsEffect* q_graphicseffect_new() {
    return QGraphicsEffect_new();
}

QGraphicsEffect* q_graphicseffect_new2(void* parent) {
    return QGraphicsEffect_new2((QObject*)parent);
}

const QMetaObject* q_graphicseffect_meta_object(void* self) {
    return QGraphicsEffect_MetaObject((QGraphicsEffect*)self);
}

void* q_graphicseffect_metacast(void* self, const char* param1) {
    return QGraphicsEffect_Metacast((QGraphicsEffect*)self, param1);
}

int32_t q_graphicseffect_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsEffect_Metacall((QGraphicsEffect*)self, param1, param2, param3);
}

void q_graphicseffect_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QGraphicsEffect_OnMetacall((QGraphicsEffect*)self, (intptr_t)slot);
}

int32_t q_graphicseffect_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsEffect_QBaseMetacall((QGraphicsEffect*)self, param1, param2, param3);
}

const char* q_graphicseffect_tr(const char* s) {
    libqt_string _str = QGraphicsEffect_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QRectF* q_graphicseffect_bounding_rect_for(void* self, void* sourceRect) {
    return QGraphicsEffect_BoundingRectFor((QGraphicsEffect*)self, (QRectF*)sourceRect);
}

void q_graphicseffect_on_bounding_rect_for(void* self, QRectF* (*slot)(void*, void*)) {
    QGraphicsEffect_OnBoundingRectFor((QGraphicsEffect*)self, (intptr_t)slot);
}

QRectF* q_graphicseffect_qbase_bounding_rect_for(void* self, void* sourceRect) {
    return QGraphicsEffect_QBaseBoundingRectFor((QGraphicsEffect*)self, (QRectF*)sourceRect);
}

QRectF* q_graphicseffect_bounding_rect(void* self) {
    return QGraphicsEffect_BoundingRect((QGraphicsEffect*)self);
}

bool q_graphicseffect_is_enabled(void* self) {
    return QGraphicsEffect_IsEnabled((QGraphicsEffect*)self);
}

void q_graphicseffect_set_enabled(void* self, bool enable) {
    QGraphicsEffect_SetEnabled((QGraphicsEffect*)self, enable);
}

void q_graphicseffect_update(void* self) {
    QGraphicsEffect_Update((QGraphicsEffect*)self);
}

void q_graphicseffect_enabled_changed(void* self, bool enabled) {
    QGraphicsEffect_EnabledChanged((QGraphicsEffect*)self, enabled);
}

void q_graphicseffect_on_enabled_changed(void* self, void (*slot)(void*, bool)) {
    QGraphicsEffect_Connect_EnabledChanged((QGraphicsEffect*)self, (intptr_t)slot);
}

void q_graphicseffect_draw(void* self, void* painter) {
    QGraphicsEffect_Draw((QGraphicsEffect*)self, (QPainter*)painter);
}

void q_graphicseffect_on_draw(void* self, void (*slot)(void*, void*)) {
    QGraphicsEffect_OnDraw((QGraphicsEffect*)self, (intptr_t)slot);
}

void q_graphicseffect_qbase_draw(void* self, void* painter) {
    QGraphicsEffect_QBaseDraw((QGraphicsEffect*)self, (QPainter*)painter);
}

void q_graphicseffect_source_changed(void* self, int64_t flags) {
    QGraphicsEffect_SourceChanged((QGraphicsEffect*)self, flags);
}

void q_graphicseffect_on_source_changed(void* self, void (*slot)(void*, int64_t)) {
    QGraphicsEffect_OnSourceChanged((QGraphicsEffect*)self, (intptr_t)slot);
}

void q_graphicseffect_qbase_source_changed(void* self, int64_t flags) {
    QGraphicsEffect_QBaseSourceChanged((QGraphicsEffect*)self, flags);
}

void q_graphicseffect_update_bounding_rect(void* self) {
    QGraphicsEffect_UpdateBoundingRect((QGraphicsEffect*)self);
}

void q_graphicseffect_on_update_bounding_rect(void* self, void (*slot)()) {
    QGraphicsEffect_OnUpdateBoundingRect((QGraphicsEffect*)self, (intptr_t)slot);
}

void q_graphicseffect_qbase_update_bounding_rect(void* self) {
    QGraphicsEffect_QBaseUpdateBoundingRect((QGraphicsEffect*)self);
}

bool q_graphicseffect_source_is_pixmap(void* self) {
    return QGraphicsEffect_SourceIsPixmap((QGraphicsEffect*)self);
}

void q_graphicseffect_on_source_is_pixmap(void* self, bool (*slot)()) {
    QGraphicsEffect_OnSourceIsPixmap((QGraphicsEffect*)self, (intptr_t)slot);
}

bool q_graphicseffect_qbase_source_is_pixmap(void* self) {
    return QGraphicsEffect_QBaseSourceIsPixmap((QGraphicsEffect*)self);
}

QRectF* q_graphicseffect_source_bounding_rect(void* self) {
    return QGraphicsEffect_SourceBoundingRect((QGraphicsEffect*)self);
}

void q_graphicseffect_on_source_bounding_rect(void* self, QRectF* (*slot)()) {
    QGraphicsEffect_OnSourceBoundingRect((QGraphicsEffect*)self, (intptr_t)slot);
}

QRectF* q_graphicseffect_qbase_source_bounding_rect(void* self) {
    return QGraphicsEffect_QBaseSourceBoundingRect((QGraphicsEffect*)self);
}

void q_graphicseffect_draw_source(void* self, void* painter) {
    QGraphicsEffect_DrawSource((QGraphicsEffect*)self, (QPainter*)painter);
}

void q_graphicseffect_on_draw_source(void* self, void (*slot)(void*, void*)) {
    QGraphicsEffect_OnDrawSource((QGraphicsEffect*)self, (intptr_t)slot);
}

void q_graphicseffect_qbase_draw_source(void* self, void* painter) {
    QGraphicsEffect_QBaseDrawSource((QGraphicsEffect*)self, (QPainter*)painter);
}

QPixmap* q_graphicseffect_source_pixmap(void* self) {
    return QGraphicsEffect_SourcePixmap((QGraphicsEffect*)self);
}

void q_graphicseffect_on_source_pixmap(void* self, QPixmap* (*slot)()) {
    QGraphicsEffect_OnSourcePixmap((QGraphicsEffect*)self, (intptr_t)slot);
}

QPixmap* q_graphicseffect_qbase_source_pixmap(void* self) {
    return QGraphicsEffect_QBaseSourcePixmap((QGraphicsEffect*)self);
}

const char* q_graphicseffect_tr2(const char* s, const char* c) {
    libqt_string _str = QGraphicsEffect_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_graphicseffect_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QGraphicsEffect_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QRectF* q_graphicseffect_source_bounding_rect1(void* self, int64_t system) {
    return QGraphicsEffect_SourceBoundingRect1((QGraphicsEffect*)self, system);
}

void q_graphicseffect_on_source_bounding_rect1(void* self, QRectF* (*slot)(void*, int64_t)) {
    QGraphicsEffect_OnSourceBoundingRect1((QGraphicsEffect*)self, (intptr_t)slot);
}

QRectF* q_graphicseffect_qbase_source_bounding_rect1(void* self, int64_t system) {
    return QGraphicsEffect_QBaseSourceBoundingRect1((QGraphicsEffect*)self, system);
}

QPixmap* q_graphicseffect_source_pixmap1(void* self, int64_t system) {
    return QGraphicsEffect_SourcePixmap1((QGraphicsEffect*)self, system);
}

void q_graphicseffect_on_source_pixmap1(void* self, QPixmap* (*slot)(void*, int64_t)) {
    QGraphicsEffect_OnSourcePixmap1((QGraphicsEffect*)self, (intptr_t)slot);
}

QPixmap* q_graphicseffect_qbase_source_pixmap1(void* self, int64_t system) {
    return QGraphicsEffect_QBaseSourcePixmap1((QGraphicsEffect*)self, system);
}

QPixmap* q_graphicseffect_source_pixmap2(void* self, int64_t system, void* offset) {
    return QGraphicsEffect_SourcePixmap2((QGraphicsEffect*)self, system, (QPoint*)offset);
}

void q_graphicseffect_on_source_pixmap2(void* self, QPixmap* (*slot)(void*, int64_t, void*)) {
    QGraphicsEffect_OnSourcePixmap2((QGraphicsEffect*)self, (intptr_t)slot);
}

QPixmap* q_graphicseffect_qbase_source_pixmap2(void* self, int64_t system, void* offset) {
    return QGraphicsEffect_QBaseSourcePixmap2((QGraphicsEffect*)self, system, (QPoint*)offset);
}

QPixmap* q_graphicseffect_source_pixmap3(void* self, int64_t system, void* offset, int64_t mode) {
    return QGraphicsEffect_SourcePixmap3((QGraphicsEffect*)self, system, (QPoint*)offset, mode);
}

void q_graphicseffect_on_source_pixmap3(void* self, QPixmap* (*slot)(void*, int64_t, void*, int64_t)) {
    QGraphicsEffect_OnSourcePixmap3((QGraphicsEffect*)self, (intptr_t)slot);
}

QPixmap* q_graphicseffect_qbase_source_pixmap3(void* self, int64_t system, void* offset, int64_t mode) {
    return QGraphicsEffect_QBaseSourcePixmap3((QGraphicsEffect*)self, system, (QPoint*)offset, mode);
}

const char* q_graphicseffect_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicseffect_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_graphicseffect_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_graphicseffect_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_graphicseffect_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_graphicseffect_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_graphicseffect_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_graphicseffect_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_graphicseffect_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_graphicseffect_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_graphicseffect_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_graphicseffect_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_graphicseffect_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_graphicseffect_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_graphicseffect_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_graphicseffect_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_graphicseffect_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_graphicseffect_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_graphicseffect_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_graphicseffect_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_graphicseffect_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_graphicseffect_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_graphicseffect_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_graphicseffect_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_graphicseffect_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_graphicseffect_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_graphicseffect_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_graphicseffect_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_graphicseffect_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_graphicseffect_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_graphicseffect_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_graphicseffect_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_graphicseffect_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_graphicseffect_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_graphicseffect_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_graphicseffect_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_graphicseffect_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_graphicseffect_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_graphicseffect_event(void* self, void* event) {
    return QGraphicsEffect_Event((QGraphicsEffect*)self, (QEvent*)event);
}

bool q_graphicseffect_qbase_event(void* self, void* event) {
    return QGraphicsEffect_QBaseEvent((QGraphicsEffect*)self, (QEvent*)event);
}

void q_graphicseffect_on_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsEffect_OnEvent((QGraphicsEffect*)self, (intptr_t)slot);
}

bool q_graphicseffect_event_filter(void* self, void* watched, void* event) {
    return QGraphicsEffect_EventFilter((QGraphicsEffect*)self, (QObject*)watched, (QEvent*)event);
}

bool q_graphicseffect_qbase_event_filter(void* self, void* watched, void* event) {
    return QGraphicsEffect_QBaseEventFilter((QGraphicsEffect*)self, (QObject*)watched, (QEvent*)event);
}

void q_graphicseffect_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGraphicsEffect_OnEventFilter((QGraphicsEffect*)self, (intptr_t)slot);
}

void q_graphicseffect_timer_event(void* self, void* event) {
    QGraphicsEffect_TimerEvent((QGraphicsEffect*)self, (QTimerEvent*)event);
}

void q_graphicseffect_qbase_timer_event(void* self, void* event) {
    QGraphicsEffect_QBaseTimerEvent((QGraphicsEffect*)self, (QTimerEvent*)event);
}

void q_graphicseffect_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsEffect_OnTimerEvent((QGraphicsEffect*)self, (intptr_t)slot);
}

void q_graphicseffect_child_event(void* self, void* event) {
    QGraphicsEffect_ChildEvent((QGraphicsEffect*)self, (QChildEvent*)event);
}

void q_graphicseffect_qbase_child_event(void* self, void* event) {
    QGraphicsEffect_QBaseChildEvent((QGraphicsEffect*)self, (QChildEvent*)event);
}

void q_graphicseffect_on_child_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsEffect_OnChildEvent((QGraphicsEffect*)self, (intptr_t)slot);
}

void q_graphicseffect_custom_event(void* self, void* event) {
    QGraphicsEffect_CustomEvent((QGraphicsEffect*)self, (QEvent*)event);
}

void q_graphicseffect_qbase_custom_event(void* self, void* event) {
    QGraphicsEffect_QBaseCustomEvent((QGraphicsEffect*)self, (QEvent*)event);
}

void q_graphicseffect_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsEffect_OnCustomEvent((QGraphicsEffect*)self, (intptr_t)slot);
}

void q_graphicseffect_connect_notify(void* self, void* signal) {
    QGraphicsEffect_ConnectNotify((QGraphicsEffect*)self, (QMetaMethod*)signal);
}

void q_graphicseffect_qbase_connect_notify(void* self, void* signal) {
    QGraphicsEffect_QBaseConnectNotify((QGraphicsEffect*)self, (QMetaMethod*)signal);
}

void q_graphicseffect_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsEffect_OnConnectNotify((QGraphicsEffect*)self, (intptr_t)slot);
}

void q_graphicseffect_disconnect_notify(void* self, void* signal) {
    QGraphicsEffect_DisconnectNotify((QGraphicsEffect*)self, (QMetaMethod*)signal);
}

void q_graphicseffect_qbase_disconnect_notify(void* self, void* signal) {
    QGraphicsEffect_QBaseDisconnectNotify((QGraphicsEffect*)self, (QMetaMethod*)signal);
}

void q_graphicseffect_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsEffect_OnDisconnectNotify((QGraphicsEffect*)self, (intptr_t)slot);
}

QObject* q_graphicseffect_sender(void* self) {
    return QGraphicsEffect_Sender((QGraphicsEffect*)self);
}

QObject* q_graphicseffect_qbase_sender(void* self) {
    return QGraphicsEffect_QBaseSender((QGraphicsEffect*)self);
}

void q_graphicseffect_on_sender(void* self, QObject* (*slot)()) {
    QGraphicsEffect_OnSender((QGraphicsEffect*)self, (intptr_t)slot);
}

int32_t q_graphicseffect_sender_signal_index(void* self) {
    return QGraphicsEffect_SenderSignalIndex((QGraphicsEffect*)self);
}

int32_t q_graphicseffect_qbase_sender_signal_index(void* self) {
    return QGraphicsEffect_QBaseSenderSignalIndex((QGraphicsEffect*)self);
}

void q_graphicseffect_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QGraphicsEffect_OnSenderSignalIndex((QGraphicsEffect*)self, (intptr_t)slot);
}

int32_t q_graphicseffect_receivers(void* self, const char* signal) {
    return QGraphicsEffect_Receivers((QGraphicsEffect*)self, signal);
}

int32_t q_graphicseffect_qbase_receivers(void* self, const char* signal) {
    return QGraphicsEffect_QBaseReceivers((QGraphicsEffect*)self, signal);
}

void q_graphicseffect_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QGraphicsEffect_OnReceivers((QGraphicsEffect*)self, (intptr_t)slot);
}

bool q_graphicseffect_is_signal_connected(void* self, void* signal) {
    return QGraphicsEffect_IsSignalConnected((QGraphicsEffect*)self, (QMetaMethod*)signal);
}

bool q_graphicseffect_qbase_is_signal_connected(void* self, void* signal) {
    return QGraphicsEffect_QBaseIsSignalConnected((QGraphicsEffect*)self, (QMetaMethod*)signal);
}

void q_graphicseffect_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QGraphicsEffect_OnIsSignalConnected((QGraphicsEffect*)self, (intptr_t)slot);
}

void q_graphicseffect_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_graphicseffect_delete(void* self) {
    QGraphicsEffect_Delete((QGraphicsEffect*)(self));
}

QGraphicsColorizeEffect* q_graphicscolorizeeffect_new() {
    return QGraphicsColorizeEffect_new();
}

QGraphicsColorizeEffect* q_graphicscolorizeeffect_new2(void* parent) {
    return QGraphicsColorizeEffect_new2((QObject*)parent);
}

const QMetaObject* q_graphicscolorizeeffect_meta_object(void* self) {
    return QGraphicsColorizeEffect_MetaObject((QGraphicsColorizeEffect*)self);
}

void* q_graphicscolorizeeffect_metacast(void* self, const char* param1) {
    return QGraphicsColorizeEffect_Metacast((QGraphicsColorizeEffect*)self, param1);
}

int32_t q_graphicscolorizeeffect_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsColorizeEffect_Metacall((QGraphicsColorizeEffect*)self, param1, param2, param3);
}

void q_graphicscolorizeeffect_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QGraphicsColorizeEffect_OnMetacall((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

int32_t q_graphicscolorizeeffect_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsColorizeEffect_QBaseMetacall((QGraphicsColorizeEffect*)self, param1, param2, param3);
}

const char* q_graphicscolorizeeffect_tr(const char* s) {
    libqt_string _str = QGraphicsColorizeEffect_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QColor* q_graphicscolorizeeffect_color(void* self) {
    return QGraphicsColorizeEffect_Color((QGraphicsColorizeEffect*)self);
}

double q_graphicscolorizeeffect_strength(void* self) {
    return QGraphicsColorizeEffect_Strength((QGraphicsColorizeEffect*)self);
}

void q_graphicscolorizeeffect_set_color(void* self, void* c) {
    QGraphicsColorizeEffect_SetColor((QGraphicsColorizeEffect*)self, (QColor*)c);
}

void q_graphicscolorizeeffect_set_strength(void* self, double strength) {
    QGraphicsColorizeEffect_SetStrength((QGraphicsColorizeEffect*)self, strength);
}

void q_graphicscolorizeeffect_color_changed(void* self, void* color) {
    QGraphicsColorizeEffect_ColorChanged((QGraphicsColorizeEffect*)self, (QColor*)color);
}

void q_graphicscolorizeeffect_on_color_changed(void* self, void (*slot)(void*, void*)) {
    QGraphicsColorizeEffect_Connect_ColorChanged((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

void q_graphicscolorizeeffect_strength_changed(void* self, double strength) {
    QGraphicsColorizeEffect_StrengthChanged((QGraphicsColorizeEffect*)self, strength);
}

void q_graphicscolorizeeffect_on_strength_changed(void* self, void (*slot)(void*, double)) {
    QGraphicsColorizeEffect_Connect_StrengthChanged((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

void q_graphicscolorizeeffect_draw(void* self, void* painter) {
    QGraphicsColorizeEffect_Draw((QGraphicsColorizeEffect*)self, (QPainter*)painter);
}

void q_graphicscolorizeeffect_on_draw(void* self, void (*slot)(void*, void*)) {
    QGraphicsColorizeEffect_OnDraw((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

void q_graphicscolorizeeffect_qbase_draw(void* self, void* painter) {
    QGraphicsColorizeEffect_QBaseDraw((QGraphicsColorizeEffect*)self, (QPainter*)painter);
}

const char* q_graphicscolorizeeffect_tr2(const char* s, const char* c) {
    libqt_string _str = QGraphicsColorizeEffect_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_graphicscolorizeeffect_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QGraphicsColorizeEffect_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QRectF* q_graphicscolorizeeffect_bounding_rect(void* self) {
    return QGraphicsEffect_BoundingRect((QGraphicsEffect*)self);
}

bool q_graphicscolorizeeffect_is_enabled(void* self) {
    return QGraphicsEffect_IsEnabled((QGraphicsEffect*)self);
}

void q_graphicscolorizeeffect_set_enabled(void* self, bool enable) {
    QGraphicsEffect_SetEnabled((QGraphicsEffect*)self, enable);
}

void q_graphicscolorizeeffect_update(void* self) {
    QGraphicsEffect_Update((QGraphicsEffect*)self);
}

void q_graphicscolorizeeffect_enabled_changed(void* self, bool enabled) {
    QGraphicsEffect_EnabledChanged((QGraphicsEffect*)self, enabled);
}

void q_graphicscolorizeeffect_on_enabled_changed(void* self, void (*slot)(void*, bool)) {
    QGraphicsEffect_Connect_EnabledChanged((QGraphicsEffect*)self, (intptr_t)slot);
}

const char* q_graphicscolorizeeffect_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicscolorizeeffect_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_graphicscolorizeeffect_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_graphicscolorizeeffect_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_graphicscolorizeeffect_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_graphicscolorizeeffect_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_graphicscolorizeeffect_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_graphicscolorizeeffect_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_graphicscolorizeeffect_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_graphicscolorizeeffect_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_graphicscolorizeeffect_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_graphicscolorizeeffect_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_graphicscolorizeeffect_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_graphicscolorizeeffect_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_graphicscolorizeeffect_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_graphicscolorizeeffect_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_graphicscolorizeeffect_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_graphicscolorizeeffect_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_graphicscolorizeeffect_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_graphicscolorizeeffect_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_graphicscolorizeeffect_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_graphicscolorizeeffect_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_graphicscolorizeeffect_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_graphicscolorizeeffect_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_graphicscolorizeeffect_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_graphicscolorizeeffect_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_graphicscolorizeeffect_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_graphicscolorizeeffect_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_graphicscolorizeeffect_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_graphicscolorizeeffect_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_graphicscolorizeeffect_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_graphicscolorizeeffect_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_graphicscolorizeeffect_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_graphicscolorizeeffect_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_graphicscolorizeeffect_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_graphicscolorizeeffect_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_graphicscolorizeeffect_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_graphicscolorizeeffect_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

QRectF* q_graphicscolorizeeffect_bounding_rect_for(void* self, void* sourceRect) {
    return QGraphicsColorizeEffect_BoundingRectFor((QGraphicsColorizeEffect*)self, (QRectF*)sourceRect);
}

QRectF* q_graphicscolorizeeffect_qbase_bounding_rect_for(void* self, void* sourceRect) {
    return QGraphicsColorizeEffect_QBaseBoundingRectFor((QGraphicsColorizeEffect*)self, (QRectF*)sourceRect);
}

void q_graphicscolorizeeffect_on_bounding_rect_for(void* self, QRectF* (*slot)(void*, void*)) {
    QGraphicsColorizeEffect_OnBoundingRectFor((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

void q_graphicscolorizeeffect_source_changed(void* self, int64_t flags) {
    QGraphicsColorizeEffect_SourceChanged((QGraphicsColorizeEffect*)self, flags);
}

void q_graphicscolorizeeffect_qbase_source_changed(void* self, int64_t flags) {
    QGraphicsColorizeEffect_QBaseSourceChanged((QGraphicsColorizeEffect*)self, flags);
}

void q_graphicscolorizeeffect_on_source_changed(void* self, void (*slot)(void*, int64_t)) {
    QGraphicsColorizeEffect_OnSourceChanged((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

bool q_graphicscolorizeeffect_event(void* self, void* event) {
    return QGraphicsColorizeEffect_Event((QGraphicsColorizeEffect*)self, (QEvent*)event);
}

bool q_graphicscolorizeeffect_qbase_event(void* self, void* event) {
    return QGraphicsColorizeEffect_QBaseEvent((QGraphicsColorizeEffect*)self, (QEvent*)event);
}

void q_graphicscolorizeeffect_on_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsColorizeEffect_OnEvent((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

bool q_graphicscolorizeeffect_event_filter(void* self, void* watched, void* event) {
    return QGraphicsColorizeEffect_EventFilter((QGraphicsColorizeEffect*)self, (QObject*)watched, (QEvent*)event);
}

bool q_graphicscolorizeeffect_qbase_event_filter(void* self, void* watched, void* event) {
    return QGraphicsColorizeEffect_QBaseEventFilter((QGraphicsColorizeEffect*)self, (QObject*)watched, (QEvent*)event);
}

void q_graphicscolorizeeffect_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGraphicsColorizeEffect_OnEventFilter((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

void q_graphicscolorizeeffect_timer_event(void* self, void* event) {
    QGraphicsColorizeEffect_TimerEvent((QGraphicsColorizeEffect*)self, (QTimerEvent*)event);
}

void q_graphicscolorizeeffect_qbase_timer_event(void* self, void* event) {
    QGraphicsColorizeEffect_QBaseTimerEvent((QGraphicsColorizeEffect*)self, (QTimerEvent*)event);
}

void q_graphicscolorizeeffect_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsColorizeEffect_OnTimerEvent((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

void q_graphicscolorizeeffect_child_event(void* self, void* event) {
    QGraphicsColorizeEffect_ChildEvent((QGraphicsColorizeEffect*)self, (QChildEvent*)event);
}

void q_graphicscolorizeeffect_qbase_child_event(void* self, void* event) {
    QGraphicsColorizeEffect_QBaseChildEvent((QGraphicsColorizeEffect*)self, (QChildEvent*)event);
}

void q_graphicscolorizeeffect_on_child_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsColorizeEffect_OnChildEvent((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

void q_graphicscolorizeeffect_custom_event(void* self, void* event) {
    QGraphicsColorizeEffect_CustomEvent((QGraphicsColorizeEffect*)self, (QEvent*)event);
}

void q_graphicscolorizeeffect_qbase_custom_event(void* self, void* event) {
    QGraphicsColorizeEffect_QBaseCustomEvent((QGraphicsColorizeEffect*)self, (QEvent*)event);
}

void q_graphicscolorizeeffect_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsColorizeEffect_OnCustomEvent((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

void q_graphicscolorizeeffect_connect_notify(void* self, void* signal) {
    QGraphicsColorizeEffect_ConnectNotify((QGraphicsColorizeEffect*)self, (QMetaMethod*)signal);
}

void q_graphicscolorizeeffect_qbase_connect_notify(void* self, void* signal) {
    QGraphicsColorizeEffect_QBaseConnectNotify((QGraphicsColorizeEffect*)self, (QMetaMethod*)signal);
}

void q_graphicscolorizeeffect_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsColorizeEffect_OnConnectNotify((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

void q_graphicscolorizeeffect_disconnect_notify(void* self, void* signal) {
    QGraphicsColorizeEffect_DisconnectNotify((QGraphicsColorizeEffect*)self, (QMetaMethod*)signal);
}

void q_graphicscolorizeeffect_qbase_disconnect_notify(void* self, void* signal) {
    QGraphicsColorizeEffect_QBaseDisconnectNotify((QGraphicsColorizeEffect*)self, (QMetaMethod*)signal);
}

void q_graphicscolorizeeffect_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsColorizeEffect_OnDisconnectNotify((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

void q_graphicscolorizeeffect_update_bounding_rect(void* self) {
    QGraphicsColorizeEffect_UpdateBoundingRect((QGraphicsColorizeEffect*)self);
}

void q_graphicscolorizeeffect_qbase_update_bounding_rect(void* self) {
    QGraphicsColorizeEffect_QBaseUpdateBoundingRect((QGraphicsColorizeEffect*)self);
}

void q_graphicscolorizeeffect_on_update_bounding_rect(void* self, void (*slot)()) {
    QGraphicsColorizeEffect_OnUpdateBoundingRect((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

bool q_graphicscolorizeeffect_source_is_pixmap(void* self) {
    return QGraphicsColorizeEffect_SourceIsPixmap((QGraphicsColorizeEffect*)self);
}

bool q_graphicscolorizeeffect_qbase_source_is_pixmap(void* self) {
    return QGraphicsColorizeEffect_QBaseSourceIsPixmap((QGraphicsColorizeEffect*)self);
}

void q_graphicscolorizeeffect_on_source_is_pixmap(void* self, bool (*slot)()) {
    QGraphicsColorizeEffect_OnSourceIsPixmap((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

QRectF* q_graphicscolorizeeffect_source_bounding_rect(void* self) {
    return QGraphicsColorizeEffect_SourceBoundingRect((QGraphicsColorizeEffect*)self);
}

QRectF* q_graphicscolorizeeffect_qbase_source_bounding_rect(void* self) {
    return QGraphicsColorizeEffect_QBaseSourceBoundingRect((QGraphicsColorizeEffect*)self);
}

void q_graphicscolorizeeffect_on_source_bounding_rect(void* self, QRectF* (*slot)()) {
    QGraphicsColorizeEffect_OnSourceBoundingRect((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

void q_graphicscolorizeeffect_draw_source(void* self, void* painter) {
    QGraphicsColorizeEffect_DrawSource((QGraphicsColorizeEffect*)self, (QPainter*)painter);
}

void q_graphicscolorizeeffect_qbase_draw_source(void* self, void* painter) {
    QGraphicsColorizeEffect_QBaseDrawSource((QGraphicsColorizeEffect*)self, (QPainter*)painter);
}

void q_graphicscolorizeeffect_on_draw_source(void* self, void (*slot)(void*, void*)) {
    QGraphicsColorizeEffect_OnDrawSource((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

QPixmap* q_graphicscolorizeeffect_source_pixmap(void* self) {
    return QGraphicsColorizeEffect_SourcePixmap((QGraphicsColorizeEffect*)self);
}

QPixmap* q_graphicscolorizeeffect_qbase_source_pixmap(void* self) {
    return QGraphicsColorizeEffect_QBaseSourcePixmap((QGraphicsColorizeEffect*)self);
}

void q_graphicscolorizeeffect_on_source_pixmap(void* self, QPixmap* (*slot)()) {
    QGraphicsColorizeEffect_OnSourcePixmap((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

QObject* q_graphicscolorizeeffect_sender(void* self) {
    return QGraphicsColorizeEffect_Sender((QGraphicsColorizeEffect*)self);
}

QObject* q_graphicscolorizeeffect_qbase_sender(void* self) {
    return QGraphicsColorizeEffect_QBaseSender((QGraphicsColorizeEffect*)self);
}

void q_graphicscolorizeeffect_on_sender(void* self, QObject* (*slot)()) {
    QGraphicsColorizeEffect_OnSender((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

int32_t q_graphicscolorizeeffect_sender_signal_index(void* self) {
    return QGraphicsColorizeEffect_SenderSignalIndex((QGraphicsColorizeEffect*)self);
}

int32_t q_graphicscolorizeeffect_qbase_sender_signal_index(void* self) {
    return QGraphicsColorizeEffect_QBaseSenderSignalIndex((QGraphicsColorizeEffect*)self);
}

void q_graphicscolorizeeffect_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QGraphicsColorizeEffect_OnSenderSignalIndex((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

int32_t q_graphicscolorizeeffect_receivers(void* self, const char* signal) {
    return QGraphicsColorizeEffect_Receivers((QGraphicsColorizeEffect*)self, signal);
}

int32_t q_graphicscolorizeeffect_qbase_receivers(void* self, const char* signal) {
    return QGraphicsColorizeEffect_QBaseReceivers((QGraphicsColorizeEffect*)self, signal);
}

void q_graphicscolorizeeffect_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QGraphicsColorizeEffect_OnReceivers((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

bool q_graphicscolorizeeffect_is_signal_connected(void* self, void* signal) {
    return QGraphicsColorizeEffect_IsSignalConnected((QGraphicsColorizeEffect*)self, (QMetaMethod*)signal);
}

bool q_graphicscolorizeeffect_qbase_is_signal_connected(void* self, void* signal) {
    return QGraphicsColorizeEffect_QBaseIsSignalConnected((QGraphicsColorizeEffect*)self, (QMetaMethod*)signal);
}

void q_graphicscolorizeeffect_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QGraphicsColorizeEffect_OnIsSignalConnected((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

void q_graphicscolorizeeffect_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_graphicscolorizeeffect_delete(void* self) {
    QGraphicsColorizeEffect_Delete((QGraphicsColorizeEffect*)(self));
}

QGraphicsBlurEffect* q_graphicsblureffect_new() {
    return QGraphicsBlurEffect_new();
}

QGraphicsBlurEffect* q_graphicsblureffect_new2(void* parent) {
    return QGraphicsBlurEffect_new2((QObject*)parent);
}

const QMetaObject* q_graphicsblureffect_meta_object(void* self) {
    return QGraphicsBlurEffect_MetaObject((QGraphicsBlurEffect*)self);
}

void* q_graphicsblureffect_metacast(void* self, const char* param1) {
    return QGraphicsBlurEffect_Metacast((QGraphicsBlurEffect*)self, param1);
}

int32_t q_graphicsblureffect_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsBlurEffect_Metacall((QGraphicsBlurEffect*)self, param1, param2, param3);
}

void q_graphicsblureffect_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QGraphicsBlurEffect_OnMetacall((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

int32_t q_graphicsblureffect_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsBlurEffect_QBaseMetacall((QGraphicsBlurEffect*)self, param1, param2, param3);
}

const char* q_graphicsblureffect_tr(const char* s) {
    libqt_string _str = QGraphicsBlurEffect_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QRectF* q_graphicsblureffect_bounding_rect_for(void* self, void* rect) {
    return QGraphicsBlurEffect_BoundingRectFor((QGraphicsBlurEffect*)self, (QRectF*)rect);
}

void q_graphicsblureffect_on_bounding_rect_for(void* self, QRectF* (*slot)(void*, void*)) {
    QGraphicsBlurEffect_OnBoundingRectFor((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

QRectF* q_graphicsblureffect_qbase_bounding_rect_for(void* self, void* rect) {
    return QGraphicsBlurEffect_QBaseBoundingRectFor((QGraphicsBlurEffect*)self, (QRectF*)rect);
}

double q_graphicsblureffect_blur_radius(void* self) {
    return QGraphicsBlurEffect_BlurRadius((QGraphicsBlurEffect*)self);
}

int64_t q_graphicsblureffect_blur_hints(void* self) {
    return QGraphicsBlurEffect_BlurHints((QGraphicsBlurEffect*)self);
}

void q_graphicsblureffect_set_blur_radius(void* self, double blurRadius) {
    QGraphicsBlurEffect_SetBlurRadius((QGraphicsBlurEffect*)self, blurRadius);
}

void q_graphicsblureffect_set_blur_hints(void* self, int64_t hints) {
    QGraphicsBlurEffect_SetBlurHints((QGraphicsBlurEffect*)self, hints);
}

void q_graphicsblureffect_blur_radius_changed(void* self, double blurRadius) {
    QGraphicsBlurEffect_BlurRadiusChanged((QGraphicsBlurEffect*)self, blurRadius);
}

void q_graphicsblureffect_on_blur_radius_changed(void* self, void (*slot)(void*, double)) {
    QGraphicsBlurEffect_Connect_BlurRadiusChanged((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

void q_graphicsblureffect_blur_hints_changed(void* self, int64_t hints) {
    QGraphicsBlurEffect_BlurHintsChanged((QGraphicsBlurEffect*)self, hints);
}

void q_graphicsblureffect_on_blur_hints_changed(void* self, void (*slot)(void*, int64_t)) {
    QGraphicsBlurEffect_Connect_BlurHintsChanged((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

void q_graphicsblureffect_draw(void* self, void* painter) {
    QGraphicsBlurEffect_Draw((QGraphicsBlurEffect*)self, (QPainter*)painter);
}

void q_graphicsblureffect_on_draw(void* self, void (*slot)(void*, void*)) {
    QGraphicsBlurEffect_OnDraw((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

void q_graphicsblureffect_qbase_draw(void* self, void* painter) {
    QGraphicsBlurEffect_QBaseDraw((QGraphicsBlurEffect*)self, (QPainter*)painter);
}

const char* q_graphicsblureffect_tr2(const char* s, const char* c) {
    libqt_string _str = QGraphicsBlurEffect_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_graphicsblureffect_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QGraphicsBlurEffect_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QRectF* q_graphicsblureffect_bounding_rect(void* self) {
    return QGraphicsEffect_BoundingRect((QGraphicsEffect*)self);
}

bool q_graphicsblureffect_is_enabled(void* self) {
    return QGraphicsEffect_IsEnabled((QGraphicsEffect*)self);
}

void q_graphicsblureffect_set_enabled(void* self, bool enable) {
    QGraphicsEffect_SetEnabled((QGraphicsEffect*)self, enable);
}

void q_graphicsblureffect_update(void* self) {
    QGraphicsEffect_Update((QGraphicsEffect*)self);
}

void q_graphicsblureffect_enabled_changed(void* self, bool enabled) {
    QGraphicsEffect_EnabledChanged((QGraphicsEffect*)self, enabled);
}

void q_graphicsblureffect_on_enabled_changed(void* self, void (*slot)(void*, bool)) {
    QGraphicsEffect_Connect_EnabledChanged((QGraphicsEffect*)self, (intptr_t)slot);
}

const char* q_graphicsblureffect_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsblureffect_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_graphicsblureffect_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_graphicsblureffect_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_graphicsblureffect_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_graphicsblureffect_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_graphicsblureffect_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_graphicsblureffect_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_graphicsblureffect_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_graphicsblureffect_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_graphicsblureffect_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_graphicsblureffect_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_graphicsblureffect_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_graphicsblureffect_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_graphicsblureffect_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_graphicsblureffect_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_graphicsblureffect_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_graphicsblureffect_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_graphicsblureffect_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_graphicsblureffect_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_graphicsblureffect_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_graphicsblureffect_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_graphicsblureffect_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_graphicsblureffect_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_graphicsblureffect_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_graphicsblureffect_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_graphicsblureffect_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_graphicsblureffect_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_graphicsblureffect_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_graphicsblureffect_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_graphicsblureffect_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_graphicsblureffect_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_graphicsblureffect_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_graphicsblureffect_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_graphicsblureffect_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_graphicsblureffect_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_graphicsblureffect_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_graphicsblureffect_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

void q_graphicsblureffect_source_changed(void* self, int64_t flags) {
    QGraphicsBlurEffect_SourceChanged((QGraphicsBlurEffect*)self, flags);
}

void q_graphicsblureffect_qbase_source_changed(void* self, int64_t flags) {
    QGraphicsBlurEffect_QBaseSourceChanged((QGraphicsBlurEffect*)self, flags);
}

void q_graphicsblureffect_on_source_changed(void* self, void (*slot)(void*, int64_t)) {
    QGraphicsBlurEffect_OnSourceChanged((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

bool q_graphicsblureffect_event(void* self, void* event) {
    return QGraphicsBlurEffect_Event((QGraphicsBlurEffect*)self, (QEvent*)event);
}

bool q_graphicsblureffect_qbase_event(void* self, void* event) {
    return QGraphicsBlurEffect_QBaseEvent((QGraphicsBlurEffect*)self, (QEvent*)event);
}

void q_graphicsblureffect_on_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsBlurEffect_OnEvent((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

bool q_graphicsblureffect_event_filter(void* self, void* watched, void* event) {
    return QGraphicsBlurEffect_EventFilter((QGraphicsBlurEffect*)self, (QObject*)watched, (QEvent*)event);
}

bool q_graphicsblureffect_qbase_event_filter(void* self, void* watched, void* event) {
    return QGraphicsBlurEffect_QBaseEventFilter((QGraphicsBlurEffect*)self, (QObject*)watched, (QEvent*)event);
}

void q_graphicsblureffect_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGraphicsBlurEffect_OnEventFilter((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

void q_graphicsblureffect_timer_event(void* self, void* event) {
    QGraphicsBlurEffect_TimerEvent((QGraphicsBlurEffect*)self, (QTimerEvent*)event);
}

void q_graphicsblureffect_qbase_timer_event(void* self, void* event) {
    QGraphicsBlurEffect_QBaseTimerEvent((QGraphicsBlurEffect*)self, (QTimerEvent*)event);
}

void q_graphicsblureffect_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsBlurEffect_OnTimerEvent((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

void q_graphicsblureffect_child_event(void* self, void* event) {
    QGraphicsBlurEffect_ChildEvent((QGraphicsBlurEffect*)self, (QChildEvent*)event);
}

void q_graphicsblureffect_qbase_child_event(void* self, void* event) {
    QGraphicsBlurEffect_QBaseChildEvent((QGraphicsBlurEffect*)self, (QChildEvent*)event);
}

void q_graphicsblureffect_on_child_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsBlurEffect_OnChildEvent((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

void q_graphicsblureffect_custom_event(void* self, void* event) {
    QGraphicsBlurEffect_CustomEvent((QGraphicsBlurEffect*)self, (QEvent*)event);
}

void q_graphicsblureffect_qbase_custom_event(void* self, void* event) {
    QGraphicsBlurEffect_QBaseCustomEvent((QGraphicsBlurEffect*)self, (QEvent*)event);
}

void q_graphicsblureffect_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsBlurEffect_OnCustomEvent((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

void q_graphicsblureffect_connect_notify(void* self, void* signal) {
    QGraphicsBlurEffect_ConnectNotify((QGraphicsBlurEffect*)self, (QMetaMethod*)signal);
}

void q_graphicsblureffect_qbase_connect_notify(void* self, void* signal) {
    QGraphicsBlurEffect_QBaseConnectNotify((QGraphicsBlurEffect*)self, (QMetaMethod*)signal);
}

void q_graphicsblureffect_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsBlurEffect_OnConnectNotify((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

void q_graphicsblureffect_disconnect_notify(void* self, void* signal) {
    QGraphicsBlurEffect_DisconnectNotify((QGraphicsBlurEffect*)self, (QMetaMethod*)signal);
}

void q_graphicsblureffect_qbase_disconnect_notify(void* self, void* signal) {
    QGraphicsBlurEffect_QBaseDisconnectNotify((QGraphicsBlurEffect*)self, (QMetaMethod*)signal);
}

void q_graphicsblureffect_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsBlurEffect_OnDisconnectNotify((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

void q_graphicsblureffect_update_bounding_rect(void* self) {
    QGraphicsBlurEffect_UpdateBoundingRect((QGraphicsBlurEffect*)self);
}

void q_graphicsblureffect_qbase_update_bounding_rect(void* self) {
    QGraphicsBlurEffect_QBaseUpdateBoundingRect((QGraphicsBlurEffect*)self);
}

void q_graphicsblureffect_on_update_bounding_rect(void* self, void (*slot)()) {
    QGraphicsBlurEffect_OnUpdateBoundingRect((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

bool q_graphicsblureffect_source_is_pixmap(void* self) {
    return QGraphicsBlurEffect_SourceIsPixmap((QGraphicsBlurEffect*)self);
}

bool q_graphicsblureffect_qbase_source_is_pixmap(void* self) {
    return QGraphicsBlurEffect_QBaseSourceIsPixmap((QGraphicsBlurEffect*)self);
}

void q_graphicsblureffect_on_source_is_pixmap(void* self, bool (*slot)()) {
    QGraphicsBlurEffect_OnSourceIsPixmap((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

QRectF* q_graphicsblureffect_source_bounding_rect(void* self) {
    return QGraphicsBlurEffect_SourceBoundingRect((QGraphicsBlurEffect*)self);
}

QRectF* q_graphicsblureffect_qbase_source_bounding_rect(void* self) {
    return QGraphicsBlurEffect_QBaseSourceBoundingRect((QGraphicsBlurEffect*)self);
}

void q_graphicsblureffect_on_source_bounding_rect(void* self, QRectF* (*slot)()) {
    QGraphicsBlurEffect_OnSourceBoundingRect((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

void q_graphicsblureffect_draw_source(void* self, void* painter) {
    QGraphicsBlurEffect_DrawSource((QGraphicsBlurEffect*)self, (QPainter*)painter);
}

void q_graphicsblureffect_qbase_draw_source(void* self, void* painter) {
    QGraphicsBlurEffect_QBaseDrawSource((QGraphicsBlurEffect*)self, (QPainter*)painter);
}

void q_graphicsblureffect_on_draw_source(void* self, void (*slot)(void*, void*)) {
    QGraphicsBlurEffect_OnDrawSource((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

QPixmap* q_graphicsblureffect_source_pixmap(void* self) {
    return QGraphicsBlurEffect_SourcePixmap((QGraphicsBlurEffect*)self);
}

QPixmap* q_graphicsblureffect_qbase_source_pixmap(void* self) {
    return QGraphicsBlurEffect_QBaseSourcePixmap((QGraphicsBlurEffect*)self);
}

void q_graphicsblureffect_on_source_pixmap(void* self, QPixmap* (*slot)()) {
    QGraphicsBlurEffect_OnSourcePixmap((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

QObject* q_graphicsblureffect_sender(void* self) {
    return QGraphicsBlurEffect_Sender((QGraphicsBlurEffect*)self);
}

QObject* q_graphicsblureffect_qbase_sender(void* self) {
    return QGraphicsBlurEffect_QBaseSender((QGraphicsBlurEffect*)self);
}

void q_graphicsblureffect_on_sender(void* self, QObject* (*slot)()) {
    QGraphicsBlurEffect_OnSender((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

int32_t q_graphicsblureffect_sender_signal_index(void* self) {
    return QGraphicsBlurEffect_SenderSignalIndex((QGraphicsBlurEffect*)self);
}

int32_t q_graphicsblureffect_qbase_sender_signal_index(void* self) {
    return QGraphicsBlurEffect_QBaseSenderSignalIndex((QGraphicsBlurEffect*)self);
}

void q_graphicsblureffect_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QGraphicsBlurEffect_OnSenderSignalIndex((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

int32_t q_graphicsblureffect_receivers(void* self, const char* signal) {
    return QGraphicsBlurEffect_Receivers((QGraphicsBlurEffect*)self, signal);
}

int32_t q_graphicsblureffect_qbase_receivers(void* self, const char* signal) {
    return QGraphicsBlurEffect_QBaseReceivers((QGraphicsBlurEffect*)self, signal);
}

void q_graphicsblureffect_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QGraphicsBlurEffect_OnReceivers((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

bool q_graphicsblureffect_is_signal_connected(void* self, void* signal) {
    return QGraphicsBlurEffect_IsSignalConnected((QGraphicsBlurEffect*)self, (QMetaMethod*)signal);
}

bool q_graphicsblureffect_qbase_is_signal_connected(void* self, void* signal) {
    return QGraphicsBlurEffect_QBaseIsSignalConnected((QGraphicsBlurEffect*)self, (QMetaMethod*)signal);
}

void q_graphicsblureffect_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QGraphicsBlurEffect_OnIsSignalConnected((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

void q_graphicsblureffect_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_graphicsblureffect_delete(void* self) {
    QGraphicsBlurEffect_Delete((QGraphicsBlurEffect*)(self));
}

QGraphicsDropShadowEffect* q_graphicsdropshadoweffect_new() {
    return QGraphicsDropShadowEffect_new();
}

QGraphicsDropShadowEffect* q_graphicsdropshadoweffect_new2(void* parent) {
    return QGraphicsDropShadowEffect_new2((QObject*)parent);
}

const QMetaObject* q_graphicsdropshadoweffect_meta_object(void* self) {
    return QGraphicsDropShadowEffect_MetaObject((QGraphicsDropShadowEffect*)self);
}

void* q_graphicsdropshadoweffect_metacast(void* self, const char* param1) {
    return QGraphicsDropShadowEffect_Metacast((QGraphicsDropShadowEffect*)self, param1);
}

int32_t q_graphicsdropshadoweffect_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsDropShadowEffect_Metacall((QGraphicsDropShadowEffect*)self, param1, param2, param3);
}

void q_graphicsdropshadoweffect_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QGraphicsDropShadowEffect_OnMetacall((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

int32_t q_graphicsdropshadoweffect_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsDropShadowEffect_QBaseMetacall((QGraphicsDropShadowEffect*)self, param1, param2, param3);
}

const char* q_graphicsdropshadoweffect_tr(const char* s) {
    libqt_string _str = QGraphicsDropShadowEffect_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QRectF* q_graphicsdropshadoweffect_bounding_rect_for(void* self, void* rect) {
    return QGraphicsDropShadowEffect_BoundingRectFor((QGraphicsDropShadowEffect*)self, (QRectF*)rect);
}

void q_graphicsdropshadoweffect_on_bounding_rect_for(void* self, QRectF* (*slot)(void*, void*)) {
    QGraphicsDropShadowEffect_OnBoundingRectFor((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

QRectF* q_graphicsdropshadoweffect_qbase_bounding_rect_for(void* self, void* rect) {
    return QGraphicsDropShadowEffect_QBaseBoundingRectFor((QGraphicsDropShadowEffect*)self, (QRectF*)rect);
}

QPointF* q_graphicsdropshadoweffect_offset(void* self) {
    return QGraphicsDropShadowEffect_Offset((QGraphicsDropShadowEffect*)self);
}

double q_graphicsdropshadoweffect_x_offset(void* self) {
    return QGraphicsDropShadowEffect_XOffset((QGraphicsDropShadowEffect*)self);
}

double q_graphicsdropshadoweffect_y_offset(void* self) {
    return QGraphicsDropShadowEffect_YOffset((QGraphicsDropShadowEffect*)self);
}

double q_graphicsdropshadoweffect_blur_radius(void* self) {
    return QGraphicsDropShadowEffect_BlurRadius((QGraphicsDropShadowEffect*)self);
}

QColor* q_graphicsdropshadoweffect_color(void* self) {
    return QGraphicsDropShadowEffect_Color((QGraphicsDropShadowEffect*)self);
}

void q_graphicsdropshadoweffect_set_offset(void* self, void* ofs) {
    QGraphicsDropShadowEffect_SetOffset((QGraphicsDropShadowEffect*)self, (QPointF*)ofs);
}

void q_graphicsdropshadoweffect_set_offset2(void* self, double dx, double dy) {
    QGraphicsDropShadowEffect_SetOffset2((QGraphicsDropShadowEffect*)self, dx, dy);
}

void q_graphicsdropshadoweffect_set_offset3(void* self, double d) {
    QGraphicsDropShadowEffect_SetOffset3((QGraphicsDropShadowEffect*)self, d);
}

void q_graphicsdropshadoweffect_set_x_offset(void* self, double dx) {
    QGraphicsDropShadowEffect_SetXOffset((QGraphicsDropShadowEffect*)self, dx);
}

void q_graphicsdropshadoweffect_set_y_offset(void* self, double dy) {
    QGraphicsDropShadowEffect_SetYOffset((QGraphicsDropShadowEffect*)self, dy);
}

void q_graphicsdropshadoweffect_set_blur_radius(void* self, double blurRadius) {
    QGraphicsDropShadowEffect_SetBlurRadius((QGraphicsDropShadowEffect*)self, blurRadius);
}

void q_graphicsdropshadoweffect_set_color(void* self, void* color) {
    QGraphicsDropShadowEffect_SetColor((QGraphicsDropShadowEffect*)self, (QColor*)color);
}

void q_graphicsdropshadoweffect_offset_changed(void* self, void* offset) {
    QGraphicsDropShadowEffect_OffsetChanged((QGraphicsDropShadowEffect*)self, (QPointF*)offset);
}

void q_graphicsdropshadoweffect_on_offset_changed(void* self, void (*slot)(void*, void*)) {
    QGraphicsDropShadowEffect_Connect_OffsetChanged((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

void q_graphicsdropshadoweffect_blur_radius_changed(void* self, double blurRadius) {
    QGraphicsDropShadowEffect_BlurRadiusChanged((QGraphicsDropShadowEffect*)self, blurRadius);
}

void q_graphicsdropshadoweffect_on_blur_radius_changed(void* self, void (*slot)(void*, double)) {
    QGraphicsDropShadowEffect_Connect_BlurRadiusChanged((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

void q_graphicsdropshadoweffect_color_changed(void* self, void* color) {
    QGraphicsDropShadowEffect_ColorChanged((QGraphicsDropShadowEffect*)self, (QColor*)color);
}

void q_graphicsdropshadoweffect_on_color_changed(void* self, void (*slot)(void*, void*)) {
    QGraphicsDropShadowEffect_Connect_ColorChanged((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

void q_graphicsdropshadoweffect_draw(void* self, void* painter) {
    QGraphicsDropShadowEffect_Draw((QGraphicsDropShadowEffect*)self, (QPainter*)painter);
}

void q_graphicsdropshadoweffect_on_draw(void* self, void (*slot)(void*, void*)) {
    QGraphicsDropShadowEffect_OnDraw((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

void q_graphicsdropshadoweffect_qbase_draw(void* self, void* painter) {
    QGraphicsDropShadowEffect_QBaseDraw((QGraphicsDropShadowEffect*)self, (QPainter*)painter);
}

const char* q_graphicsdropshadoweffect_tr2(const char* s, const char* c) {
    libqt_string _str = QGraphicsDropShadowEffect_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_graphicsdropshadoweffect_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QGraphicsDropShadowEffect_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QRectF* q_graphicsdropshadoweffect_bounding_rect(void* self) {
    return QGraphicsEffect_BoundingRect((QGraphicsEffect*)self);
}

bool q_graphicsdropshadoweffect_is_enabled(void* self) {
    return QGraphicsEffect_IsEnabled((QGraphicsEffect*)self);
}

void q_graphicsdropshadoweffect_set_enabled(void* self, bool enable) {
    QGraphicsEffect_SetEnabled((QGraphicsEffect*)self, enable);
}

void q_graphicsdropshadoweffect_update(void* self) {
    QGraphicsEffect_Update((QGraphicsEffect*)self);
}

void q_graphicsdropshadoweffect_enabled_changed(void* self, bool enabled) {
    QGraphicsEffect_EnabledChanged((QGraphicsEffect*)self, enabled);
}

void q_graphicsdropshadoweffect_on_enabled_changed(void* self, void (*slot)(void*, bool)) {
    QGraphicsEffect_Connect_EnabledChanged((QGraphicsEffect*)self, (intptr_t)slot);
}

const char* q_graphicsdropshadoweffect_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsdropshadoweffect_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_graphicsdropshadoweffect_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_graphicsdropshadoweffect_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_graphicsdropshadoweffect_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_graphicsdropshadoweffect_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_graphicsdropshadoweffect_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_graphicsdropshadoweffect_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_graphicsdropshadoweffect_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_graphicsdropshadoweffect_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_graphicsdropshadoweffect_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_graphicsdropshadoweffect_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_graphicsdropshadoweffect_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_graphicsdropshadoweffect_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_graphicsdropshadoweffect_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_graphicsdropshadoweffect_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_graphicsdropshadoweffect_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_graphicsdropshadoweffect_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_graphicsdropshadoweffect_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_graphicsdropshadoweffect_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_graphicsdropshadoweffect_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_graphicsdropshadoweffect_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_graphicsdropshadoweffect_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_graphicsdropshadoweffect_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_graphicsdropshadoweffect_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_graphicsdropshadoweffect_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_graphicsdropshadoweffect_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_graphicsdropshadoweffect_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_graphicsdropshadoweffect_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_graphicsdropshadoweffect_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_graphicsdropshadoweffect_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_graphicsdropshadoweffect_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_graphicsdropshadoweffect_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_graphicsdropshadoweffect_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_graphicsdropshadoweffect_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_graphicsdropshadoweffect_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_graphicsdropshadoweffect_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_graphicsdropshadoweffect_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

void q_graphicsdropshadoweffect_source_changed(void* self, int64_t flags) {
    QGraphicsDropShadowEffect_SourceChanged((QGraphicsDropShadowEffect*)self, flags);
}

void q_graphicsdropshadoweffect_qbase_source_changed(void* self, int64_t flags) {
    QGraphicsDropShadowEffect_QBaseSourceChanged((QGraphicsDropShadowEffect*)self, flags);
}

void q_graphicsdropshadoweffect_on_source_changed(void* self, void (*slot)(void*, int64_t)) {
    QGraphicsDropShadowEffect_OnSourceChanged((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

bool q_graphicsdropshadoweffect_event(void* self, void* event) {
    return QGraphicsDropShadowEffect_Event((QGraphicsDropShadowEffect*)self, (QEvent*)event);
}

bool q_graphicsdropshadoweffect_qbase_event(void* self, void* event) {
    return QGraphicsDropShadowEffect_QBaseEvent((QGraphicsDropShadowEffect*)self, (QEvent*)event);
}

void q_graphicsdropshadoweffect_on_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsDropShadowEffect_OnEvent((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

bool q_graphicsdropshadoweffect_event_filter(void* self, void* watched, void* event) {
    return QGraphicsDropShadowEffect_EventFilter((QGraphicsDropShadowEffect*)self, (QObject*)watched, (QEvent*)event);
}

bool q_graphicsdropshadoweffect_qbase_event_filter(void* self, void* watched, void* event) {
    return QGraphicsDropShadowEffect_QBaseEventFilter((QGraphicsDropShadowEffect*)self, (QObject*)watched, (QEvent*)event);
}

void q_graphicsdropshadoweffect_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGraphicsDropShadowEffect_OnEventFilter((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

void q_graphicsdropshadoweffect_timer_event(void* self, void* event) {
    QGraphicsDropShadowEffect_TimerEvent((QGraphicsDropShadowEffect*)self, (QTimerEvent*)event);
}

void q_graphicsdropshadoweffect_qbase_timer_event(void* self, void* event) {
    QGraphicsDropShadowEffect_QBaseTimerEvent((QGraphicsDropShadowEffect*)self, (QTimerEvent*)event);
}

void q_graphicsdropshadoweffect_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsDropShadowEffect_OnTimerEvent((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

void q_graphicsdropshadoweffect_child_event(void* self, void* event) {
    QGraphicsDropShadowEffect_ChildEvent((QGraphicsDropShadowEffect*)self, (QChildEvent*)event);
}

void q_graphicsdropshadoweffect_qbase_child_event(void* self, void* event) {
    QGraphicsDropShadowEffect_QBaseChildEvent((QGraphicsDropShadowEffect*)self, (QChildEvent*)event);
}

void q_graphicsdropshadoweffect_on_child_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsDropShadowEffect_OnChildEvent((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

void q_graphicsdropshadoweffect_custom_event(void* self, void* event) {
    QGraphicsDropShadowEffect_CustomEvent((QGraphicsDropShadowEffect*)self, (QEvent*)event);
}

void q_graphicsdropshadoweffect_qbase_custom_event(void* self, void* event) {
    QGraphicsDropShadowEffect_QBaseCustomEvent((QGraphicsDropShadowEffect*)self, (QEvent*)event);
}

void q_graphicsdropshadoweffect_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsDropShadowEffect_OnCustomEvent((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

void q_graphicsdropshadoweffect_connect_notify(void* self, void* signal) {
    QGraphicsDropShadowEffect_ConnectNotify((QGraphicsDropShadowEffect*)self, (QMetaMethod*)signal);
}

void q_graphicsdropshadoweffect_qbase_connect_notify(void* self, void* signal) {
    QGraphicsDropShadowEffect_QBaseConnectNotify((QGraphicsDropShadowEffect*)self, (QMetaMethod*)signal);
}

void q_graphicsdropshadoweffect_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsDropShadowEffect_OnConnectNotify((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

void q_graphicsdropshadoweffect_disconnect_notify(void* self, void* signal) {
    QGraphicsDropShadowEffect_DisconnectNotify((QGraphicsDropShadowEffect*)self, (QMetaMethod*)signal);
}

void q_graphicsdropshadoweffect_qbase_disconnect_notify(void* self, void* signal) {
    QGraphicsDropShadowEffect_QBaseDisconnectNotify((QGraphicsDropShadowEffect*)self, (QMetaMethod*)signal);
}

void q_graphicsdropshadoweffect_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsDropShadowEffect_OnDisconnectNotify((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

void q_graphicsdropshadoweffect_update_bounding_rect(void* self) {
    QGraphicsDropShadowEffect_UpdateBoundingRect((QGraphicsDropShadowEffect*)self);
}

void q_graphicsdropshadoweffect_qbase_update_bounding_rect(void* self) {
    QGraphicsDropShadowEffect_QBaseUpdateBoundingRect((QGraphicsDropShadowEffect*)self);
}

void q_graphicsdropshadoweffect_on_update_bounding_rect(void* self, void (*slot)()) {
    QGraphicsDropShadowEffect_OnUpdateBoundingRect((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

bool q_graphicsdropshadoweffect_source_is_pixmap(void* self) {
    return QGraphicsDropShadowEffect_SourceIsPixmap((QGraphicsDropShadowEffect*)self);
}

bool q_graphicsdropshadoweffect_qbase_source_is_pixmap(void* self) {
    return QGraphicsDropShadowEffect_QBaseSourceIsPixmap((QGraphicsDropShadowEffect*)self);
}

void q_graphicsdropshadoweffect_on_source_is_pixmap(void* self, bool (*slot)()) {
    QGraphicsDropShadowEffect_OnSourceIsPixmap((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

QRectF* q_graphicsdropshadoweffect_source_bounding_rect(void* self) {
    return QGraphicsDropShadowEffect_SourceBoundingRect((QGraphicsDropShadowEffect*)self);
}

QRectF* q_graphicsdropshadoweffect_qbase_source_bounding_rect(void* self) {
    return QGraphicsDropShadowEffect_QBaseSourceBoundingRect((QGraphicsDropShadowEffect*)self);
}

void q_graphicsdropshadoweffect_on_source_bounding_rect(void* self, QRectF* (*slot)()) {
    QGraphicsDropShadowEffect_OnSourceBoundingRect((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

void q_graphicsdropshadoweffect_draw_source(void* self, void* painter) {
    QGraphicsDropShadowEffect_DrawSource((QGraphicsDropShadowEffect*)self, (QPainter*)painter);
}

void q_graphicsdropshadoweffect_qbase_draw_source(void* self, void* painter) {
    QGraphicsDropShadowEffect_QBaseDrawSource((QGraphicsDropShadowEffect*)self, (QPainter*)painter);
}

void q_graphicsdropshadoweffect_on_draw_source(void* self, void (*slot)(void*, void*)) {
    QGraphicsDropShadowEffect_OnDrawSource((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

QPixmap* q_graphicsdropshadoweffect_source_pixmap(void* self) {
    return QGraphicsDropShadowEffect_SourcePixmap((QGraphicsDropShadowEffect*)self);
}

QPixmap* q_graphicsdropshadoweffect_qbase_source_pixmap(void* self) {
    return QGraphicsDropShadowEffect_QBaseSourcePixmap((QGraphicsDropShadowEffect*)self);
}

void q_graphicsdropshadoweffect_on_source_pixmap(void* self, QPixmap* (*slot)()) {
    QGraphicsDropShadowEffect_OnSourcePixmap((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

QObject* q_graphicsdropshadoweffect_sender(void* self) {
    return QGraphicsDropShadowEffect_Sender((QGraphicsDropShadowEffect*)self);
}

QObject* q_graphicsdropshadoweffect_qbase_sender(void* self) {
    return QGraphicsDropShadowEffect_QBaseSender((QGraphicsDropShadowEffect*)self);
}

void q_graphicsdropshadoweffect_on_sender(void* self, QObject* (*slot)()) {
    QGraphicsDropShadowEffect_OnSender((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

int32_t q_graphicsdropshadoweffect_sender_signal_index(void* self) {
    return QGraphicsDropShadowEffect_SenderSignalIndex((QGraphicsDropShadowEffect*)self);
}

int32_t q_graphicsdropshadoweffect_qbase_sender_signal_index(void* self) {
    return QGraphicsDropShadowEffect_QBaseSenderSignalIndex((QGraphicsDropShadowEffect*)self);
}

void q_graphicsdropshadoweffect_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QGraphicsDropShadowEffect_OnSenderSignalIndex((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

int32_t q_graphicsdropshadoweffect_receivers(void* self, const char* signal) {
    return QGraphicsDropShadowEffect_Receivers((QGraphicsDropShadowEffect*)self, signal);
}

int32_t q_graphicsdropshadoweffect_qbase_receivers(void* self, const char* signal) {
    return QGraphicsDropShadowEffect_QBaseReceivers((QGraphicsDropShadowEffect*)self, signal);
}

void q_graphicsdropshadoweffect_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QGraphicsDropShadowEffect_OnReceivers((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

bool q_graphicsdropshadoweffect_is_signal_connected(void* self, void* signal) {
    return QGraphicsDropShadowEffect_IsSignalConnected((QGraphicsDropShadowEffect*)self, (QMetaMethod*)signal);
}

bool q_graphicsdropshadoweffect_qbase_is_signal_connected(void* self, void* signal) {
    return QGraphicsDropShadowEffect_QBaseIsSignalConnected((QGraphicsDropShadowEffect*)self, (QMetaMethod*)signal);
}

void q_graphicsdropshadoweffect_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QGraphicsDropShadowEffect_OnIsSignalConnected((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

void q_graphicsdropshadoweffect_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_graphicsdropshadoweffect_delete(void* self) {
    QGraphicsDropShadowEffect_Delete((QGraphicsDropShadowEffect*)(self));
}

QGraphicsOpacityEffect* q_graphicsopacityeffect_new() {
    return QGraphicsOpacityEffect_new();
}

QGraphicsOpacityEffect* q_graphicsopacityeffect_new2(void* parent) {
    return QGraphicsOpacityEffect_new2((QObject*)parent);
}

const QMetaObject* q_graphicsopacityeffect_meta_object(void* self) {
    return QGraphicsOpacityEffect_MetaObject((QGraphicsOpacityEffect*)self);
}

void* q_graphicsopacityeffect_metacast(void* self, const char* param1) {
    return QGraphicsOpacityEffect_Metacast((QGraphicsOpacityEffect*)self, param1);
}

int32_t q_graphicsopacityeffect_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsOpacityEffect_Metacall((QGraphicsOpacityEffect*)self, param1, param2, param3);
}

void q_graphicsopacityeffect_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QGraphicsOpacityEffect_OnMetacall((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

int32_t q_graphicsopacityeffect_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsOpacityEffect_QBaseMetacall((QGraphicsOpacityEffect*)self, param1, param2, param3);
}

const char* q_graphicsopacityeffect_tr(const char* s) {
    libqt_string _str = QGraphicsOpacityEffect_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

double q_graphicsopacityeffect_opacity(void* self) {
    return QGraphicsOpacityEffect_Opacity((QGraphicsOpacityEffect*)self);
}

QBrush* q_graphicsopacityeffect_opacity_mask(void* self) {
    return QGraphicsOpacityEffect_OpacityMask((QGraphicsOpacityEffect*)self);
}

void q_graphicsopacityeffect_set_opacity(void* self, double opacity) {
    QGraphicsOpacityEffect_SetOpacity((QGraphicsOpacityEffect*)self, opacity);
}

void q_graphicsopacityeffect_set_opacity_mask(void* self, void* mask) {
    QGraphicsOpacityEffect_SetOpacityMask((QGraphicsOpacityEffect*)self, (QBrush*)mask);
}

void q_graphicsopacityeffect_opacity_changed(void* self, double opacity) {
    QGraphicsOpacityEffect_OpacityChanged((QGraphicsOpacityEffect*)self, opacity);
}

void q_graphicsopacityeffect_on_opacity_changed(void* self, void (*slot)(void*, double)) {
    QGraphicsOpacityEffect_Connect_OpacityChanged((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

void q_graphicsopacityeffect_opacity_mask_changed(void* self, void* mask) {
    QGraphicsOpacityEffect_OpacityMaskChanged((QGraphicsOpacityEffect*)self, (QBrush*)mask);
}

void q_graphicsopacityeffect_on_opacity_mask_changed(void* self, void (*slot)(void*, void*)) {
    QGraphicsOpacityEffect_Connect_OpacityMaskChanged((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

void q_graphicsopacityeffect_draw(void* self, void* painter) {
    QGraphicsOpacityEffect_Draw((QGraphicsOpacityEffect*)self, (QPainter*)painter);
}

void q_graphicsopacityeffect_on_draw(void* self, void (*slot)(void*, void*)) {
    QGraphicsOpacityEffect_OnDraw((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

void q_graphicsopacityeffect_qbase_draw(void* self, void* painter) {
    QGraphicsOpacityEffect_QBaseDraw((QGraphicsOpacityEffect*)self, (QPainter*)painter);
}

const char* q_graphicsopacityeffect_tr2(const char* s, const char* c) {
    libqt_string _str = QGraphicsOpacityEffect_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_graphicsopacityeffect_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QGraphicsOpacityEffect_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QRectF* q_graphicsopacityeffect_bounding_rect(void* self) {
    return QGraphicsEffect_BoundingRect((QGraphicsEffect*)self);
}

bool q_graphicsopacityeffect_is_enabled(void* self) {
    return QGraphicsEffect_IsEnabled((QGraphicsEffect*)self);
}

void q_graphicsopacityeffect_set_enabled(void* self, bool enable) {
    QGraphicsEffect_SetEnabled((QGraphicsEffect*)self, enable);
}

void q_graphicsopacityeffect_update(void* self) {
    QGraphicsEffect_Update((QGraphicsEffect*)self);
}

void q_graphicsopacityeffect_enabled_changed(void* self, bool enabled) {
    QGraphicsEffect_EnabledChanged((QGraphicsEffect*)self, enabled);
}

void q_graphicsopacityeffect_on_enabled_changed(void* self, void (*slot)(void*, bool)) {
    QGraphicsEffect_Connect_EnabledChanged((QGraphicsEffect*)self, (intptr_t)slot);
}

const char* q_graphicsopacityeffect_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsopacityeffect_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_graphicsopacityeffect_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_graphicsopacityeffect_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_graphicsopacityeffect_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_graphicsopacityeffect_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_graphicsopacityeffect_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_graphicsopacityeffect_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_graphicsopacityeffect_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_graphicsopacityeffect_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_graphicsopacityeffect_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_graphicsopacityeffect_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_graphicsopacityeffect_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_graphicsopacityeffect_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_graphicsopacityeffect_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_graphicsopacityeffect_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_graphicsopacityeffect_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_graphicsopacityeffect_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_graphicsopacityeffect_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_graphicsopacityeffect_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_graphicsopacityeffect_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_graphicsopacityeffect_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_graphicsopacityeffect_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_graphicsopacityeffect_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_graphicsopacityeffect_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_graphicsopacityeffect_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_graphicsopacityeffect_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_graphicsopacityeffect_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_graphicsopacityeffect_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_graphicsopacityeffect_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_graphicsopacityeffect_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_graphicsopacityeffect_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_graphicsopacityeffect_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_graphicsopacityeffect_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_graphicsopacityeffect_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_graphicsopacityeffect_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_graphicsopacityeffect_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_graphicsopacityeffect_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

QRectF* q_graphicsopacityeffect_bounding_rect_for(void* self, void* sourceRect) {
    return QGraphicsOpacityEffect_BoundingRectFor((QGraphicsOpacityEffect*)self, (QRectF*)sourceRect);
}

QRectF* q_graphicsopacityeffect_qbase_bounding_rect_for(void* self, void* sourceRect) {
    return QGraphicsOpacityEffect_QBaseBoundingRectFor((QGraphicsOpacityEffect*)self, (QRectF*)sourceRect);
}

void q_graphicsopacityeffect_on_bounding_rect_for(void* self, QRectF* (*slot)(void*, void*)) {
    QGraphicsOpacityEffect_OnBoundingRectFor((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

void q_graphicsopacityeffect_source_changed(void* self, int64_t flags) {
    QGraphicsOpacityEffect_SourceChanged((QGraphicsOpacityEffect*)self, flags);
}

void q_graphicsopacityeffect_qbase_source_changed(void* self, int64_t flags) {
    QGraphicsOpacityEffect_QBaseSourceChanged((QGraphicsOpacityEffect*)self, flags);
}

void q_graphicsopacityeffect_on_source_changed(void* self, void (*slot)(void*, int64_t)) {
    QGraphicsOpacityEffect_OnSourceChanged((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

bool q_graphicsopacityeffect_event(void* self, void* event) {
    return QGraphicsOpacityEffect_Event((QGraphicsOpacityEffect*)self, (QEvent*)event);
}

bool q_graphicsopacityeffect_qbase_event(void* self, void* event) {
    return QGraphicsOpacityEffect_QBaseEvent((QGraphicsOpacityEffect*)self, (QEvent*)event);
}

void q_graphicsopacityeffect_on_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsOpacityEffect_OnEvent((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

bool q_graphicsopacityeffect_event_filter(void* self, void* watched, void* event) {
    return QGraphicsOpacityEffect_EventFilter((QGraphicsOpacityEffect*)self, (QObject*)watched, (QEvent*)event);
}

bool q_graphicsopacityeffect_qbase_event_filter(void* self, void* watched, void* event) {
    return QGraphicsOpacityEffect_QBaseEventFilter((QGraphicsOpacityEffect*)self, (QObject*)watched, (QEvent*)event);
}

void q_graphicsopacityeffect_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGraphicsOpacityEffect_OnEventFilter((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

void q_graphicsopacityeffect_timer_event(void* self, void* event) {
    QGraphicsOpacityEffect_TimerEvent((QGraphicsOpacityEffect*)self, (QTimerEvent*)event);
}

void q_graphicsopacityeffect_qbase_timer_event(void* self, void* event) {
    QGraphicsOpacityEffect_QBaseTimerEvent((QGraphicsOpacityEffect*)self, (QTimerEvent*)event);
}

void q_graphicsopacityeffect_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsOpacityEffect_OnTimerEvent((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

void q_graphicsopacityeffect_child_event(void* self, void* event) {
    QGraphicsOpacityEffect_ChildEvent((QGraphicsOpacityEffect*)self, (QChildEvent*)event);
}

void q_graphicsopacityeffect_qbase_child_event(void* self, void* event) {
    QGraphicsOpacityEffect_QBaseChildEvent((QGraphicsOpacityEffect*)self, (QChildEvent*)event);
}

void q_graphicsopacityeffect_on_child_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsOpacityEffect_OnChildEvent((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

void q_graphicsopacityeffect_custom_event(void* self, void* event) {
    QGraphicsOpacityEffect_CustomEvent((QGraphicsOpacityEffect*)self, (QEvent*)event);
}

void q_graphicsopacityeffect_qbase_custom_event(void* self, void* event) {
    QGraphicsOpacityEffect_QBaseCustomEvent((QGraphicsOpacityEffect*)self, (QEvent*)event);
}

void q_graphicsopacityeffect_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsOpacityEffect_OnCustomEvent((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

void q_graphicsopacityeffect_connect_notify(void* self, void* signal) {
    QGraphicsOpacityEffect_ConnectNotify((QGraphicsOpacityEffect*)self, (QMetaMethod*)signal);
}

void q_graphicsopacityeffect_qbase_connect_notify(void* self, void* signal) {
    QGraphicsOpacityEffect_QBaseConnectNotify((QGraphicsOpacityEffect*)self, (QMetaMethod*)signal);
}

void q_graphicsopacityeffect_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsOpacityEffect_OnConnectNotify((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

void q_graphicsopacityeffect_disconnect_notify(void* self, void* signal) {
    QGraphicsOpacityEffect_DisconnectNotify((QGraphicsOpacityEffect*)self, (QMetaMethod*)signal);
}

void q_graphicsopacityeffect_qbase_disconnect_notify(void* self, void* signal) {
    QGraphicsOpacityEffect_QBaseDisconnectNotify((QGraphicsOpacityEffect*)self, (QMetaMethod*)signal);
}

void q_graphicsopacityeffect_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsOpacityEffect_OnDisconnectNotify((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

void q_graphicsopacityeffect_update_bounding_rect(void* self) {
    QGraphicsOpacityEffect_UpdateBoundingRect((QGraphicsOpacityEffect*)self);
}

void q_graphicsopacityeffect_qbase_update_bounding_rect(void* self) {
    QGraphicsOpacityEffect_QBaseUpdateBoundingRect((QGraphicsOpacityEffect*)self);
}

void q_graphicsopacityeffect_on_update_bounding_rect(void* self, void (*slot)()) {
    QGraphicsOpacityEffect_OnUpdateBoundingRect((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

bool q_graphicsopacityeffect_source_is_pixmap(void* self) {
    return QGraphicsOpacityEffect_SourceIsPixmap((QGraphicsOpacityEffect*)self);
}

bool q_graphicsopacityeffect_qbase_source_is_pixmap(void* self) {
    return QGraphicsOpacityEffect_QBaseSourceIsPixmap((QGraphicsOpacityEffect*)self);
}

void q_graphicsopacityeffect_on_source_is_pixmap(void* self, bool (*slot)()) {
    QGraphicsOpacityEffect_OnSourceIsPixmap((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

QRectF* q_graphicsopacityeffect_source_bounding_rect(void* self) {
    return QGraphicsOpacityEffect_SourceBoundingRect((QGraphicsOpacityEffect*)self);
}

QRectF* q_graphicsopacityeffect_qbase_source_bounding_rect(void* self) {
    return QGraphicsOpacityEffect_QBaseSourceBoundingRect((QGraphicsOpacityEffect*)self);
}

void q_graphicsopacityeffect_on_source_bounding_rect(void* self, QRectF* (*slot)()) {
    QGraphicsOpacityEffect_OnSourceBoundingRect((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

void q_graphicsopacityeffect_draw_source(void* self, void* painter) {
    QGraphicsOpacityEffect_DrawSource((QGraphicsOpacityEffect*)self, (QPainter*)painter);
}

void q_graphicsopacityeffect_qbase_draw_source(void* self, void* painter) {
    QGraphicsOpacityEffect_QBaseDrawSource((QGraphicsOpacityEffect*)self, (QPainter*)painter);
}

void q_graphicsopacityeffect_on_draw_source(void* self, void (*slot)(void*, void*)) {
    QGraphicsOpacityEffect_OnDrawSource((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

QPixmap* q_graphicsopacityeffect_source_pixmap(void* self) {
    return QGraphicsOpacityEffect_SourcePixmap((QGraphicsOpacityEffect*)self);
}

QPixmap* q_graphicsopacityeffect_qbase_source_pixmap(void* self) {
    return QGraphicsOpacityEffect_QBaseSourcePixmap((QGraphicsOpacityEffect*)self);
}

void q_graphicsopacityeffect_on_source_pixmap(void* self, QPixmap* (*slot)()) {
    QGraphicsOpacityEffect_OnSourcePixmap((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

QObject* q_graphicsopacityeffect_sender(void* self) {
    return QGraphicsOpacityEffect_Sender((QGraphicsOpacityEffect*)self);
}

QObject* q_graphicsopacityeffect_qbase_sender(void* self) {
    return QGraphicsOpacityEffect_QBaseSender((QGraphicsOpacityEffect*)self);
}

void q_graphicsopacityeffect_on_sender(void* self, QObject* (*slot)()) {
    QGraphicsOpacityEffect_OnSender((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

int32_t q_graphicsopacityeffect_sender_signal_index(void* self) {
    return QGraphicsOpacityEffect_SenderSignalIndex((QGraphicsOpacityEffect*)self);
}

int32_t q_graphicsopacityeffect_qbase_sender_signal_index(void* self) {
    return QGraphicsOpacityEffect_QBaseSenderSignalIndex((QGraphicsOpacityEffect*)self);
}

void q_graphicsopacityeffect_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QGraphicsOpacityEffect_OnSenderSignalIndex((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

int32_t q_graphicsopacityeffect_receivers(void* self, const char* signal) {
    return QGraphicsOpacityEffect_Receivers((QGraphicsOpacityEffect*)self, signal);
}

int32_t q_graphicsopacityeffect_qbase_receivers(void* self, const char* signal) {
    return QGraphicsOpacityEffect_QBaseReceivers((QGraphicsOpacityEffect*)self, signal);
}

void q_graphicsopacityeffect_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QGraphicsOpacityEffect_OnReceivers((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

bool q_graphicsopacityeffect_is_signal_connected(void* self, void* signal) {
    return QGraphicsOpacityEffect_IsSignalConnected((QGraphicsOpacityEffect*)self, (QMetaMethod*)signal);
}

bool q_graphicsopacityeffect_qbase_is_signal_connected(void* self, void* signal) {
    return QGraphicsOpacityEffect_QBaseIsSignalConnected((QGraphicsOpacityEffect*)self, (QMetaMethod*)signal);
}

void q_graphicsopacityeffect_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QGraphicsOpacityEffect_OnIsSignalConnected((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

void q_graphicsopacityeffect_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_graphicsopacityeffect_delete(void* self) {
    QGraphicsOpacityEffect_Delete((QGraphicsOpacityEffect*)(self));
}
