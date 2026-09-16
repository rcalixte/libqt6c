#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqquickitem.hpp"
#include "../libqtextdocument.hpp"
#include "../libqurl.hpp"
#include "libqquicktextdocument.hpp"
#include "libqquicktextdocument.h"

QQuickTextDocument* q_quicktextdocument_new(void* parent) {
    return QQuickTextDocument_New((QQuickItem*)parent);
}

const QMetaObject* q_quicktextdocument_meta_object(void* self) {
    return QQuickTextDocument_MetaObject((QQuickTextDocument*)self);
}

void q_quicktextdocument_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QQuickTextDocument_OnMetaObject((QQuickTextDocument*)self, (intptr_t)callback);
}

const QMetaObject* q_quicktextdocument_super_meta_object(void* self) {
    return QQuickTextDocument_SuperMetaObject((QQuickTextDocument*)self);
}

void* q_quicktextdocument_metacast(void* self, const char* param1) {
    return QQuickTextDocument_Metacast((QQuickTextDocument*)self, param1);
}

void q_quicktextdocument_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QQuickTextDocument_OnMetacast((QQuickTextDocument*)self, (intptr_t)callback);
}

void* q_quicktextdocument_super_metacast(void* self, const char* param1) {
    return QQuickTextDocument_SuperMetacast((QQuickTextDocument*)self, param1);
}

int32_t q_quicktextdocument_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuickTextDocument_Metacall((QQuickTextDocument*)self, param1, param2, param3);
}

void q_quicktextdocument_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QQuickTextDocument_OnMetacall((QQuickTextDocument*)self, (intptr_t)callback);
}

int32_t q_quicktextdocument_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuickTextDocument_SuperMetacall((QQuickTextDocument*)self, param1, param2, param3);
}

const char* q_quicktextdocument_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* q_quicktextdocument_source(void* self) {
    return QQuickTextDocument_Source((QQuickTextDocument*)self);
}

void q_quicktextdocument_set_source(void* self, void* url) {
    QQuickTextDocument_SetSource((QQuickTextDocument*)self, (QUrl*)url);
}

bool q_quicktextdocument_is_modified(void* self) {
    return QQuickTextDocument_IsModified((QQuickTextDocument*)self);
}

void q_quicktextdocument_set_modified(void* self, bool modified) {
    QQuickTextDocument_SetModified((QQuickTextDocument*)self, modified);
}

QTextDocument* q_quicktextdocument_text_document(void* self) {
    return QQuickTextDocument_TextDocument((QQuickTextDocument*)self);
}

void q_quicktextdocument_set_text_document(void* self, void* document) {
    QQuickTextDocument_SetTextDocument((QQuickTextDocument*)self, (QTextDocument*)document);
}

void q_quicktextdocument_save(void* self) {
    QQuickTextDocument_Save((QQuickTextDocument*)self);
}

void q_quicktextdocument_save_as(void* self, void* url) {
    QQuickTextDocument_SaveAs((QQuickTextDocument*)self, (QUrl*)url);
}

uint8_t q_quicktextdocument_status(void* self) {
    return QQuickTextDocument_Status((QQuickTextDocument*)self);
}

const char* q_quicktextdocument_error_string(void* self) {
    libqt_string _str = QQuickTextDocument_ErrorString((QQuickTextDocument*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quicktextdocument_text_document_changed(void* self) {
    QQuickTextDocument_TextDocumentChanged((QQuickTextDocument*)self);
}

void q_quicktextdocument_on_text_document_changed(void* self, void (*callback)(void*)) {
    QQuickTextDocument_Connect_TextDocumentChanged((QQuickTextDocument*)self, (intptr_t)callback);
}

void q_quicktextdocument_source_changed(void* self) {
    QQuickTextDocument_SourceChanged((QQuickTextDocument*)self);
}

void q_quicktextdocument_on_source_changed(void* self, void (*callback)(void*)) {
    QQuickTextDocument_Connect_SourceChanged((QQuickTextDocument*)self, (intptr_t)callback);
}

void q_quicktextdocument_modified_changed(void* self) {
    QQuickTextDocument_ModifiedChanged((QQuickTextDocument*)self);
}

void q_quicktextdocument_on_modified_changed(void* self, void (*callback)(void*)) {
    QQuickTextDocument_Connect_ModifiedChanged((QQuickTextDocument*)self, (intptr_t)callback);
}

void q_quicktextdocument_status_changed(void* self) {
    QQuickTextDocument_StatusChanged((QQuickTextDocument*)self);
}

void q_quicktextdocument_on_status_changed(void* self, void (*callback)(void*)) {
    QQuickTextDocument_Connect_StatusChanged((QQuickTextDocument*)self, (intptr_t)callback);
}

void q_quicktextdocument_error_string_changed(void* self) {
    QQuickTextDocument_ErrorStringChanged((QQuickTextDocument*)self);
}

void q_quicktextdocument_on_error_string_changed(void* self, void (*callback)(void*)) {
    QQuickTextDocument_Connect_ErrorStringChanged((QQuickTextDocument*)self, (intptr_t)callback);
}

const char* q_quicktextdocument_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quicktextdocument_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quicktextdocument_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quicktextdocument_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_quicktextdocument_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_quicktextdocument_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_quicktextdocument_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_quicktextdocument_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_quicktextdocument_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_quicktextdocument_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_quicktextdocument_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_quicktextdocument_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_quicktextdocument_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_quicktextdocument_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_quicktextdocument_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_quicktextdocument_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_quicktextdocument_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_quicktextdocument_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_quicktextdocument_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_quicktextdocument_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_quicktextdocument_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_quicktextdocument_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_quicktextdocument_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_quicktextdocument_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_quicktextdocument_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_quicktextdocument_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_quicktextdocument_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_quicktextdocument_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_quicktextdocument_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_quicktextdocument_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_quicktextdocument_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_quicktextdocument_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_quicktextdocument_dynamic_property_names\n");
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

QBindingStorage* q_quicktextdocument_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_quicktextdocument_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_quicktextdocument_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_quicktextdocument_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_quicktextdocument_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_quicktextdocument_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_quicktextdocument_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_quicktextdocument_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_quicktextdocument_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_quicktextdocument_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_quicktextdocument_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_quicktextdocument_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_quicktextdocument_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_quicktextdocument_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_quicktextdocument_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_quicktextdocument_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_quicktextdocument_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_quicktextdocument_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_quicktextdocument_event(void* self, void* event) {
    return QQuickTextDocument_Event((QQuickTextDocument*)self, (QEvent*)event);
}

bool q_quicktextdocument_super_event(void* self, void* event) {
    return QQuickTextDocument_SuperEvent((QQuickTextDocument*)self, (QEvent*)event);
}

void q_quicktextdocument_on_event(void* self, bool (*callback)(void*, void*)) {
    QQuickTextDocument_OnEvent((QQuickTextDocument*)self, (intptr_t)callback);
}

bool q_quicktextdocument_event_filter(void* self, void* watched, void* event) {
    return QQuickTextDocument_EventFilter((QQuickTextDocument*)self, (QObject*)watched, (QEvent*)event);
}

bool q_quicktextdocument_super_event_filter(void* self, void* watched, void* event) {
    return QQuickTextDocument_SuperEventFilter((QQuickTextDocument*)self, (QObject*)watched, (QEvent*)event);
}

void q_quicktextdocument_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQuickTextDocument_OnEventFilter((QQuickTextDocument*)self, (intptr_t)callback);
}

void q_quicktextdocument_timer_event(void* self, void* event) {
    QQuickTextDocument_TimerEvent((QQuickTextDocument*)self, (QTimerEvent*)event);
}

void q_quicktextdocument_super_timer_event(void* self, void* event) {
    QQuickTextDocument_SuperTimerEvent((QQuickTextDocument*)self, (QTimerEvent*)event);
}

void q_quicktextdocument_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QQuickTextDocument_OnTimerEvent((QQuickTextDocument*)self, (intptr_t)callback);
}

void q_quicktextdocument_child_event(void* self, void* event) {
    QQuickTextDocument_ChildEvent((QQuickTextDocument*)self, (QChildEvent*)event);
}

void q_quicktextdocument_super_child_event(void* self, void* event) {
    QQuickTextDocument_SuperChildEvent((QQuickTextDocument*)self, (QChildEvent*)event);
}

void q_quicktextdocument_on_child_event(void* self, void (*callback)(void*, void*)) {
    QQuickTextDocument_OnChildEvent((QQuickTextDocument*)self, (intptr_t)callback);
}

void q_quicktextdocument_custom_event(void* self, void* event) {
    QQuickTextDocument_CustomEvent((QQuickTextDocument*)self, (QEvent*)event);
}

void q_quicktextdocument_super_custom_event(void* self, void* event) {
    QQuickTextDocument_SuperCustomEvent((QQuickTextDocument*)self, (QEvent*)event);
}

void q_quicktextdocument_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QQuickTextDocument_OnCustomEvent((QQuickTextDocument*)self, (intptr_t)callback);
}

void q_quicktextdocument_connect_notify(void* self, void* signal) {
    QQuickTextDocument_ConnectNotify((QQuickTextDocument*)self, (QMetaMethod*)signal);
}

void q_quicktextdocument_super_connect_notify(void* self, void* signal) {
    QQuickTextDocument_SuperConnectNotify((QQuickTextDocument*)self, (QMetaMethod*)signal);
}

void q_quicktextdocument_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QQuickTextDocument_OnConnectNotify((QQuickTextDocument*)self, (intptr_t)callback);
}

void q_quicktextdocument_disconnect_notify(void* self, void* signal) {
    QQuickTextDocument_DisconnectNotify((QQuickTextDocument*)self, (QMetaMethod*)signal);
}

void q_quicktextdocument_super_disconnect_notify(void* self, void* signal) {
    QQuickTextDocument_SuperDisconnectNotify((QQuickTextDocument*)self, (QMetaMethod*)signal);
}

void q_quicktextdocument_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QQuickTextDocument_OnDisconnectNotify((QQuickTextDocument*)self, (intptr_t)callback);
}

QObject* q_quicktextdocument_sender(void* self) {
    return QQuickTextDocument_Sender((QQuickTextDocument*)self);
}

QObject* q_quicktextdocument_super_sender(void* self) {
    return QQuickTextDocument_SuperSender((QQuickTextDocument*)self);
}

void q_quicktextdocument_on_sender(void* self, QObject* (*callback)()) {
    QQuickTextDocument_OnSender((QQuickTextDocument*)self, (intptr_t)callback);
}

int32_t q_quicktextdocument_sender_signal_index(void* self) {
    return QQuickTextDocument_SenderSignalIndex((QQuickTextDocument*)self);
}

int32_t q_quicktextdocument_super_sender_signal_index(void* self) {
    return QQuickTextDocument_SuperSenderSignalIndex((QQuickTextDocument*)self);
}

void q_quicktextdocument_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QQuickTextDocument_OnSenderSignalIndex((QQuickTextDocument*)self, (intptr_t)callback);
}

int32_t q_quicktextdocument_receivers(void* self, const char* signal) {
    return QQuickTextDocument_Receivers((QQuickTextDocument*)self, signal);
}

int32_t q_quicktextdocument_super_receivers(void* self, const char* signal) {
    return QQuickTextDocument_SuperReceivers((QQuickTextDocument*)self, signal);
}

void q_quicktextdocument_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QQuickTextDocument_OnReceivers((QQuickTextDocument*)self, (intptr_t)callback);
}

bool q_quicktextdocument_is_signal_connected(void* self, void* signal) {
    return QQuickTextDocument_IsSignalConnected((QQuickTextDocument*)self, (QMetaMethod*)signal);
}

bool q_quicktextdocument_super_is_signal_connected(void* self, void* signal) {
    return QQuickTextDocument_SuperIsSignalConnected((QQuickTextDocument*)self, (QMetaMethod*)signal);
}

void q_quicktextdocument_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QQuickTextDocument_OnIsSignalConnected((QQuickTextDocument*)self, (intptr_t)callback);
}

void q_quicktextdocument_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_quicktextdocument_delete(void* self) {
    QQuickTextDocument_Delete((QQuickTextDocument*)(self));
}
