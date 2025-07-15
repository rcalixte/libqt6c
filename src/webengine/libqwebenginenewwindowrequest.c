#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqrect.hpp"
#include <string.h>
#include "../libqurl.hpp"
#include "libqwebenginepage.hpp"
#include "libqwebenginenewwindowrequest.hpp"
#include "libqwebenginenewwindowrequest.h"

const QMetaObject* q_webenginenewwindowrequest_meta_object(void* self) {
    return QWebEngineNewWindowRequest_MetaObject((QWebEngineNewWindowRequest*)self);
}

void* q_webenginenewwindowrequest_metacast(void* self, const char* param1) {
    return QWebEngineNewWindowRequest_Metacast((QWebEngineNewWindowRequest*)self, param1);
}

int32_t q_webenginenewwindowrequest_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWebEngineNewWindowRequest_Metacall((QWebEngineNewWindowRequest*)self, param1, param2, param3);
}

const char* q_webenginenewwindowrequest_tr(const char* s) {
    libqt_string _str = QWebEngineNewWindowRequest_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_webenginenewwindowrequest_destination(void* self) {
    return QWebEngineNewWindowRequest_Destination((QWebEngineNewWindowRequest*)self);
}

QUrl* q_webenginenewwindowrequest_requested_url(void* self) {
    return QWebEngineNewWindowRequest_RequestedUrl((QWebEngineNewWindowRequest*)self);
}

QRect* q_webenginenewwindowrequest_requested_geometry(void* self) {
    return QWebEngineNewWindowRequest_RequestedGeometry((QWebEngineNewWindowRequest*)self);
}

bool q_webenginenewwindowrequest_is_user_initiated(void* self) {
    return QWebEngineNewWindowRequest_IsUserInitiated((QWebEngineNewWindowRequest*)self);
}

void q_webenginenewwindowrequest_open_in(void* self, void* param1) {
    QWebEngineNewWindowRequest_OpenIn((QWebEngineNewWindowRequest*)self, (QWebEnginePage*)param1);
}

const char* q_webenginenewwindowrequest_tr2(const char* s, const char* c) {
    libqt_string _str = QWebEngineNewWindowRequest_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webenginenewwindowrequest_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QWebEngineNewWindowRequest_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_webenginenewwindowrequest_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_webenginenewwindowrequest_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_webenginenewwindowrequest_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webenginenewwindowrequest_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_webenginenewwindowrequest_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_webenginenewwindowrequest_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_webenginenewwindowrequest_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_webenginenewwindowrequest_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_webenginenewwindowrequest_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_webenginenewwindowrequest_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_webenginenewwindowrequest_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_webenginenewwindowrequest_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_webenginenewwindowrequest_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_webenginenewwindowrequest_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_webenginenewwindowrequest_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_webenginenewwindowrequest_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_webenginenewwindowrequest_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_webenginenewwindowrequest_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_webenginenewwindowrequest_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_webenginenewwindowrequest_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_webenginenewwindowrequest_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_webenginenewwindowrequest_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_webenginenewwindowrequest_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_webenginenewwindowrequest_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_webenginenewwindowrequest_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_webenginenewwindowrequest_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_webenginenewwindowrequest_dynamic_property_names(void* self) {
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
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_webenginenewwindowrequest_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_webenginenewwindowrequest_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_webenginenewwindowrequest_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_webenginenewwindowrequest_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_webenginenewwindowrequest_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_webenginenewwindowrequest_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_webenginenewwindowrequest_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_webenginenewwindowrequest_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_webenginenewwindowrequest_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_webenginenewwindowrequest_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_webenginenewwindowrequest_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_webenginenewwindowrequest_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_webenginenewwindowrequest_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

void q_webenginenewwindowrequest_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_webenginenewwindowrequest_delete(void* self) {
    QWebEngineNewWindowRequest_Delete((QWebEngineNewWindowRequest*)(self));
}
