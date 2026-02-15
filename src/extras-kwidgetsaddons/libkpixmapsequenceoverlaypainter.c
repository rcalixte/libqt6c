#include "libkpixmapsequence.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "../libqwidget.hpp"
#include "libkpixmapsequenceoverlaypainter.hpp"
#include "libkpixmapsequenceoverlaypainter.h"

KPixmapSequenceOverlayPainter* k_pixmapsequenceoverlaypainter_new() {
    return KPixmapSequenceOverlayPainter_new();
}

KPixmapSequenceOverlayPainter* k_pixmapsequenceoverlaypainter_new2(void* seq) {
    return KPixmapSequenceOverlayPainter_new2((KPixmapSequence*)seq);
}

KPixmapSequenceOverlayPainter* k_pixmapsequenceoverlaypainter_new3(void* parent) {
    return KPixmapSequenceOverlayPainter_new3((QObject*)parent);
}

KPixmapSequenceOverlayPainter* k_pixmapsequenceoverlaypainter_new4(void* seq, void* parent) {
    return KPixmapSequenceOverlayPainter_new4((KPixmapSequence*)seq, (QObject*)parent);
}

const QMetaObject* k_pixmapsequenceoverlaypainter_meta_object(void* self) {
    return KPixmapSequenceOverlayPainter_MetaObject((KPixmapSequenceOverlayPainter*)self);
}

void k_pixmapsequenceoverlaypainter_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KPixmapSequenceOverlayPainter_OnMetaObject((KPixmapSequenceOverlayPainter*)self, (intptr_t)callback);
}

const QMetaObject* k_pixmapsequenceoverlaypainter_qbase_meta_object(void* self) {
    return KPixmapSequenceOverlayPainter_QBaseMetaObject((KPixmapSequenceOverlayPainter*)self);
}

void* k_pixmapsequenceoverlaypainter_metacast(void* self, const char* param1) {
    return KPixmapSequenceOverlayPainter_Metacast((KPixmapSequenceOverlayPainter*)self, param1);
}

void k_pixmapsequenceoverlaypainter_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KPixmapSequenceOverlayPainter_OnMetacast((KPixmapSequenceOverlayPainter*)self, (intptr_t)callback);
}

void* k_pixmapsequenceoverlaypainter_qbase_metacast(void* self, const char* param1) {
    return KPixmapSequenceOverlayPainter_QBaseMetacast((KPixmapSequenceOverlayPainter*)self, param1);
}

int32_t k_pixmapsequenceoverlaypainter_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPixmapSequenceOverlayPainter_Metacall((KPixmapSequenceOverlayPainter*)self, param1, param2, param3);
}

void k_pixmapsequenceoverlaypainter_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KPixmapSequenceOverlayPainter_OnMetacall((KPixmapSequenceOverlayPainter*)self, (intptr_t)callback);
}

int32_t k_pixmapsequenceoverlaypainter_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPixmapSequenceOverlayPainter_QBaseMetacall((KPixmapSequenceOverlayPainter*)self, param1, param2, param3);
}

const char* k_pixmapsequenceoverlaypainter_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KPixmapSequence* k_pixmapsequenceoverlaypainter_sequence(void* self) {
    return KPixmapSequenceOverlayPainter_Sequence((KPixmapSequenceOverlayPainter*)self);
}

int32_t k_pixmapsequenceoverlaypainter_interval(void* self) {
    return KPixmapSequenceOverlayPainter_Interval((KPixmapSequenceOverlayPainter*)self);
}

QRect* k_pixmapsequenceoverlaypainter_rect(void* self) {
    return KPixmapSequenceOverlayPainter_Rect((KPixmapSequenceOverlayPainter*)self);
}

int32_t k_pixmapsequenceoverlaypainter_alignment(void* self) {
    return KPixmapSequenceOverlayPainter_Alignment((KPixmapSequenceOverlayPainter*)self);
}

QPoint* k_pixmapsequenceoverlaypainter_offset(void* self) {
    return KPixmapSequenceOverlayPainter_Offset((KPixmapSequenceOverlayPainter*)self);
}

void k_pixmapsequenceoverlaypainter_set_sequence(void* self, void* seq) {
    KPixmapSequenceOverlayPainter_SetSequence((KPixmapSequenceOverlayPainter*)self, (KPixmapSequence*)seq);
}

void k_pixmapsequenceoverlaypainter_set_interval(void* self, int msecs) {
    KPixmapSequenceOverlayPainter_SetInterval((KPixmapSequenceOverlayPainter*)self, msecs);
}

void k_pixmapsequenceoverlaypainter_set_widget(void* self, void* w) {
    KPixmapSequenceOverlayPainter_SetWidget((KPixmapSequenceOverlayPainter*)self, (QWidget*)w);
}

void k_pixmapsequenceoverlaypainter_set_rect(void* self, void* rect) {
    KPixmapSequenceOverlayPainter_SetRect((KPixmapSequenceOverlayPainter*)self, (QRect*)rect);
}

void k_pixmapsequenceoverlaypainter_set_alignment(void* self, int32_t align) {
    KPixmapSequenceOverlayPainter_SetAlignment((KPixmapSequenceOverlayPainter*)self, align);
}

void k_pixmapsequenceoverlaypainter_set_offset(void* self, void* offset) {
    KPixmapSequenceOverlayPainter_SetOffset((KPixmapSequenceOverlayPainter*)self, (QPoint*)offset);
}

void k_pixmapsequenceoverlaypainter_start(void* self) {
    KPixmapSequenceOverlayPainter_Start((KPixmapSequenceOverlayPainter*)self);
}

void k_pixmapsequenceoverlaypainter_stop(void* self) {
    KPixmapSequenceOverlayPainter_Stop((KPixmapSequenceOverlayPainter*)self);
}

bool k_pixmapsequenceoverlaypainter_event_filter(void* self, void* obj, void* event) {
    return KPixmapSequenceOverlayPainter_EventFilter((KPixmapSequenceOverlayPainter*)self, (QObject*)obj, (QEvent*)event);
}

void k_pixmapsequenceoverlaypainter_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KPixmapSequenceOverlayPainter_OnEventFilter((KPixmapSequenceOverlayPainter*)self, (intptr_t)callback);
}

bool k_pixmapsequenceoverlaypainter_qbase_event_filter(void* self, void* obj, void* event) {
    return KPixmapSequenceOverlayPainter_QBaseEventFilter((KPixmapSequenceOverlayPainter*)self, (QObject*)obj, (QEvent*)event);
}

const char* k_pixmapsequenceoverlaypainter_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pixmapsequenceoverlaypainter_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pixmapsequenceoverlaypainter_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pixmapsequenceoverlaypainter_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_pixmapsequenceoverlaypainter_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_pixmapsequenceoverlaypainter_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_pixmapsequenceoverlaypainter_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_pixmapsequenceoverlaypainter_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_pixmapsequenceoverlaypainter_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_pixmapsequenceoverlaypainter_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_pixmapsequenceoverlaypainter_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_pixmapsequenceoverlaypainter_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_pixmapsequenceoverlaypainter_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_pixmapsequenceoverlaypainter_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_pixmapsequenceoverlaypainter_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_pixmapsequenceoverlaypainter_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_pixmapsequenceoverlaypainter_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_pixmapsequenceoverlaypainter_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_pixmapsequenceoverlaypainter_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_pixmapsequenceoverlaypainter_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_pixmapsequenceoverlaypainter_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_pixmapsequenceoverlaypainter_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_pixmapsequenceoverlaypainter_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_pixmapsequenceoverlaypainter_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_pixmapsequenceoverlaypainter_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_pixmapsequenceoverlaypainter_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_pixmapsequenceoverlaypainter_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_pixmapsequenceoverlaypainter_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_pixmapsequenceoverlaypainter_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_pixmapsequenceoverlaypainter_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_pixmapsequenceoverlaypainter_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_pixmapsequenceoverlaypainter_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_pixmapsequenceoverlaypainter_dynamic_property_names\n");
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

QBindingStorage* k_pixmapsequenceoverlaypainter_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_pixmapsequenceoverlaypainter_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_pixmapsequenceoverlaypainter_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_pixmapsequenceoverlaypainter_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_pixmapsequenceoverlaypainter_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_pixmapsequenceoverlaypainter_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_pixmapsequenceoverlaypainter_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_pixmapsequenceoverlaypainter_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_pixmapsequenceoverlaypainter_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_pixmapsequenceoverlaypainter_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_pixmapsequenceoverlaypainter_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_pixmapsequenceoverlaypainter_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_pixmapsequenceoverlaypainter_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_pixmapsequenceoverlaypainter_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_pixmapsequenceoverlaypainter_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_pixmapsequenceoverlaypainter_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_pixmapsequenceoverlaypainter_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_pixmapsequenceoverlaypainter_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_pixmapsequenceoverlaypainter_event(void* self, void* event) {
    return KPixmapSequenceOverlayPainter_Event((KPixmapSequenceOverlayPainter*)self, (QEvent*)event);
}

bool k_pixmapsequenceoverlaypainter_qbase_event(void* self, void* event) {
    return KPixmapSequenceOverlayPainter_QBaseEvent((KPixmapSequenceOverlayPainter*)self, (QEvent*)event);
}

void k_pixmapsequenceoverlaypainter_on_event(void* self, bool (*callback)(void*, void*)) {
    KPixmapSequenceOverlayPainter_OnEvent((KPixmapSequenceOverlayPainter*)self, (intptr_t)callback);
}

void k_pixmapsequenceoverlaypainter_timer_event(void* self, void* event) {
    KPixmapSequenceOverlayPainter_TimerEvent((KPixmapSequenceOverlayPainter*)self, (QTimerEvent*)event);
}

void k_pixmapsequenceoverlaypainter_qbase_timer_event(void* self, void* event) {
    KPixmapSequenceOverlayPainter_QBaseTimerEvent((KPixmapSequenceOverlayPainter*)self, (QTimerEvent*)event);
}

void k_pixmapsequenceoverlaypainter_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KPixmapSequenceOverlayPainter_OnTimerEvent((KPixmapSequenceOverlayPainter*)self, (intptr_t)callback);
}

void k_pixmapsequenceoverlaypainter_child_event(void* self, void* event) {
    KPixmapSequenceOverlayPainter_ChildEvent((KPixmapSequenceOverlayPainter*)self, (QChildEvent*)event);
}

void k_pixmapsequenceoverlaypainter_qbase_child_event(void* self, void* event) {
    KPixmapSequenceOverlayPainter_QBaseChildEvent((KPixmapSequenceOverlayPainter*)self, (QChildEvent*)event);
}

void k_pixmapsequenceoverlaypainter_on_child_event(void* self, void (*callback)(void*, void*)) {
    KPixmapSequenceOverlayPainter_OnChildEvent((KPixmapSequenceOverlayPainter*)self, (intptr_t)callback);
}

void k_pixmapsequenceoverlaypainter_custom_event(void* self, void* event) {
    KPixmapSequenceOverlayPainter_CustomEvent((KPixmapSequenceOverlayPainter*)self, (QEvent*)event);
}

void k_pixmapsequenceoverlaypainter_qbase_custom_event(void* self, void* event) {
    KPixmapSequenceOverlayPainter_QBaseCustomEvent((KPixmapSequenceOverlayPainter*)self, (QEvent*)event);
}

void k_pixmapsequenceoverlaypainter_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KPixmapSequenceOverlayPainter_OnCustomEvent((KPixmapSequenceOverlayPainter*)self, (intptr_t)callback);
}

void k_pixmapsequenceoverlaypainter_connect_notify(void* self, void* signal) {
    KPixmapSequenceOverlayPainter_ConnectNotify((KPixmapSequenceOverlayPainter*)self, (QMetaMethod*)signal);
}

void k_pixmapsequenceoverlaypainter_qbase_connect_notify(void* self, void* signal) {
    KPixmapSequenceOverlayPainter_QBaseConnectNotify((KPixmapSequenceOverlayPainter*)self, (QMetaMethod*)signal);
}

void k_pixmapsequenceoverlaypainter_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KPixmapSequenceOverlayPainter_OnConnectNotify((KPixmapSequenceOverlayPainter*)self, (intptr_t)callback);
}

void k_pixmapsequenceoverlaypainter_disconnect_notify(void* self, void* signal) {
    KPixmapSequenceOverlayPainter_DisconnectNotify((KPixmapSequenceOverlayPainter*)self, (QMetaMethod*)signal);
}

void k_pixmapsequenceoverlaypainter_qbase_disconnect_notify(void* self, void* signal) {
    KPixmapSequenceOverlayPainter_QBaseDisconnectNotify((KPixmapSequenceOverlayPainter*)self, (QMetaMethod*)signal);
}

void k_pixmapsequenceoverlaypainter_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KPixmapSequenceOverlayPainter_OnDisconnectNotify((KPixmapSequenceOverlayPainter*)self, (intptr_t)callback);
}

QObject* k_pixmapsequenceoverlaypainter_sender(void* self) {
    return KPixmapSequenceOverlayPainter_Sender((KPixmapSequenceOverlayPainter*)self);
}

QObject* k_pixmapsequenceoverlaypainter_qbase_sender(void* self) {
    return KPixmapSequenceOverlayPainter_QBaseSender((KPixmapSequenceOverlayPainter*)self);
}

void k_pixmapsequenceoverlaypainter_on_sender(void* self, QObject* (*callback)()) {
    KPixmapSequenceOverlayPainter_OnSender((KPixmapSequenceOverlayPainter*)self, (intptr_t)callback);
}

int32_t k_pixmapsequenceoverlaypainter_sender_signal_index(void* self) {
    return KPixmapSequenceOverlayPainter_SenderSignalIndex((KPixmapSequenceOverlayPainter*)self);
}

int32_t k_pixmapsequenceoverlaypainter_qbase_sender_signal_index(void* self) {
    return KPixmapSequenceOverlayPainter_QBaseSenderSignalIndex((KPixmapSequenceOverlayPainter*)self);
}

void k_pixmapsequenceoverlaypainter_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KPixmapSequenceOverlayPainter_OnSenderSignalIndex((KPixmapSequenceOverlayPainter*)self, (intptr_t)callback);
}

int32_t k_pixmapsequenceoverlaypainter_receivers(void* self, const char* signal) {
    return KPixmapSequenceOverlayPainter_Receivers((KPixmapSequenceOverlayPainter*)self, signal);
}

int32_t k_pixmapsequenceoverlaypainter_qbase_receivers(void* self, const char* signal) {
    return KPixmapSequenceOverlayPainter_QBaseReceivers((KPixmapSequenceOverlayPainter*)self, signal);
}

void k_pixmapsequenceoverlaypainter_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KPixmapSequenceOverlayPainter_OnReceivers((KPixmapSequenceOverlayPainter*)self, (intptr_t)callback);
}

bool k_pixmapsequenceoverlaypainter_is_signal_connected(void* self, void* signal) {
    return KPixmapSequenceOverlayPainter_IsSignalConnected((KPixmapSequenceOverlayPainter*)self, (QMetaMethod*)signal);
}

bool k_pixmapsequenceoverlaypainter_qbase_is_signal_connected(void* self, void* signal) {
    return KPixmapSequenceOverlayPainter_QBaseIsSignalConnected((KPixmapSequenceOverlayPainter*)self, (QMetaMethod*)signal);
}

void k_pixmapsequenceoverlaypainter_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KPixmapSequenceOverlayPainter_OnIsSignalConnected((KPixmapSequenceOverlayPainter*)self, (intptr_t)callback);
}

void k_pixmapsequenceoverlaypainter_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_pixmapsequenceoverlaypainter_delete(void* self) {
    KPixmapSequenceOverlayPainter_Delete((KPixmapSequenceOverlayPainter*)(self));
}
