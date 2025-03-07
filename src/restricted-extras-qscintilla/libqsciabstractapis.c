#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqsciabstractapis.hpp"
#include "libqsciabstractapis.h"

/// https://doc.qt.io/qt-6/qsciabstractapis.html

/// q_sciabstractapis_new constructs a new QsciAbstractAPIs object.
///
/// ``` QsciLexer* lexer ```
QsciAbstractAPIs* q_sciabstractapis_new(void* lexer) {
    return QsciAbstractAPIs_new((QsciLexer*)lexer);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciAbstractAPIs* self ```
QMetaObject* q_sciabstractapis_meta_object(void* self) {
    return QsciAbstractAPIs_MetaObject((QsciAbstractAPIs*)self);
}

/// ``` QsciAbstractAPIs* self, const char* param1 ```
void* q_sciabstractapis_metacast(void* self, const char* param1) {
    return QsciAbstractAPIs_Metacast((QsciAbstractAPIs*)self, param1);
}

/// ``` QsciAbstractAPIs* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sciabstractapis_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciAbstractAPIs_Metacall((QsciAbstractAPIs*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciAbstractAPIs* self, int32_t (*slot)(QsciAbstractAPIs*, enum QMetaObject__Call, int, void*) ```
void q_sciabstractapis_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciAbstractAPIs_OnMetacall((QsciAbstractAPIs*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciAbstractAPIs* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sciabstractapis_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciAbstractAPIs_QBaseMetacall((QsciAbstractAPIs*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_sciabstractapis_tr(const char* s) {
    libqt_string _str = QsciAbstractAPIs_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciabstractapis.html#lexer)
///
/// ``` QsciAbstractAPIs* self ```
QsciLexer* q_sciabstractapis_lexer(void* self) {
    return QsciAbstractAPIs_Lexer((QsciAbstractAPIs*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciabstractapis.html#updateAutoCompletionList)
///
/// ``` QsciAbstractAPIs* self, const char* context[], const char* list[] ```
void q_sciabstractapis_update_auto_completion_list(void* self, const char* context[], const char* list[]) {
    size_t context_len = libqt_strv_length(context);
    libqt_string* context_qstr = malloc(context_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < context_len; ++_i) {
        context_qstr[_i] = qstring(context[_i]);
    }
    libqt_list context_list = qstrlist(context_qstr, context_len);
    size_t list_len = libqt_strv_length(list);
    libqt_string* list_qstr = malloc(list_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < list_len; ++_i) {
        list_qstr[_i] = qstring(list[_i]);
    }
    libqt_list list_list = qstrlist(list_qstr, list_len);
    QsciAbstractAPIs_UpdateAutoCompletionList((QsciAbstractAPIs*)self, context_list, list_list);
}

/// Allows for overriding the related default method
///
/// ``` QsciAbstractAPIs* self, void (*slot)(QsciAbstractAPIs*, const char*[], const char*[]) ```
void q_sciabstractapis_on_update_auto_completion_list(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciAbstractAPIs_OnUpdateAutoCompletionList((QsciAbstractAPIs*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciAbstractAPIs* self, const char* context[], const char* list[] ```
void q_sciabstractapis_qbase_update_auto_completion_list(void* self, const char* context[], const char* list[]) {
    size_t context_len = libqt_strv_length(context);
    libqt_string* context_qstr = malloc(context_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < context_len; ++_i) {
        context_qstr[_i] = qstring(context[_i]);
    }
    libqt_list context_list = qstrlist(context_qstr, context_len);
    size_t list_len = libqt_strv_length(list);
    libqt_string* list_qstr = malloc(list_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < list_len; ++_i) {
        list_qstr[_i] = qstring(list[_i]);
    }
    libqt_list list_list = qstrlist(list_qstr, list_len);
    QsciAbstractAPIs_QBaseUpdateAutoCompletionList((QsciAbstractAPIs*)self, context_list, list_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciabstractapis.html#autoCompletionSelected)
///
/// ``` QsciAbstractAPIs* self, const char* selection ```
void q_sciabstractapis_auto_completion_selected(void* self, const char* selection) {
    QsciAbstractAPIs_AutoCompletionSelected((QsciAbstractAPIs*)self, qstring(selection));
}

/// Allows for overriding the related default method
///
/// ``` QsciAbstractAPIs* self, void (*slot)(QsciAbstractAPIs*, const char*) ```
void q_sciabstractapis_on_auto_completion_selected(void* self, void (*slot)(void*, const char*)) {
    QsciAbstractAPIs_OnAutoCompletionSelected((QsciAbstractAPIs*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciAbstractAPIs* self, const char* selection ```
void q_sciabstractapis_qbase_auto_completion_selected(void* self, const char* selection) {
    QsciAbstractAPIs_QBaseAutoCompletionSelected((QsciAbstractAPIs*)self, qstring(selection));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciabstractapis.html#callTips)
///
/// ``` QsciAbstractAPIs* self, const char* context[], int commas, enum QsciScintilla__CallTipsStyle style, int* shifts[] ```
const char** q_sciabstractapis_call_tips(void* self, const char* context[], int commas, int64_t style, int* shifts[]) {
    size_t context_len = libqt_strv_length(context);
    libqt_string* context_qstr = malloc(context_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < context_len; ++_i) {
        context_qstr[_i] = qstring(context[_i]);
    }
    libqt_list context_list = qstrlist(context_qstr, context_len);
    size_t shifts_len = 0;
    while (shifts[shifts_len] != NULL) {
        shifts_len++;
    }
    libqt_list shifts_list = {
        .len = shifts_len,
        .data = {(int*)shifts},
    };
    libqt_list _arr = QsciAbstractAPIs_CallTips((QsciAbstractAPIs*)self, context_list, commas, style, shifts_list);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Allows for overriding the related default method
///
/// ``` QsciAbstractAPIs* self, const char** (*slot)(QsciAbstractAPIs*, const char*[], int, enum QsciScintilla__CallTipsStyle, int*[]) ```
void q_sciabstractapis_on_call_tips(void* self, const char** (*slot)(void*, const char*, int, int64_t, int*)) {
    QsciAbstractAPIs_OnCallTips((QsciAbstractAPIs*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciAbstractAPIs* self, const char* context[], int commas, enum QsciScintilla__CallTipsStyle style, int* shifts[] ```
const char** q_sciabstractapis_qbase_call_tips(void* self, const char* context[], int commas, int64_t style, int* shifts[]) {
    size_t context_len = libqt_strv_length(context);
    libqt_string* context_qstr = malloc(context_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < context_len; ++_i) {
        context_qstr[_i] = qstring(context[_i]);
    }
    libqt_list context_list = qstrlist(context_qstr, context_len);
    size_t shifts_len = 0;
    while (shifts[shifts_len] != NULL) {
        shifts_len++;
    }
    libqt_list shifts_list = {
        .len = shifts_len,
        .data = {(int*)shifts},
    };
    libqt_list _arr = QsciAbstractAPIs_QBaseCallTips((QsciAbstractAPIs*)self, context_list, commas, style, shifts_list);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_sciabstractapis_tr2(const char* s, const char* c) {
    libqt_string _str = QsciAbstractAPIs_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_sciabstractapis_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciAbstractAPIs_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciAbstractAPIs* self ```
const char* q_sciabstractapis_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciAbstractAPIs* self, const char* name ```
void q_sciabstractapis_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciAbstractAPIs* self ```
bool q_sciabstractapis_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciAbstractAPIs* self ```
bool q_sciabstractapis_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciAbstractAPIs* self ```
bool q_sciabstractapis_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciAbstractAPIs* self ```
bool q_sciabstractapis_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciAbstractAPIs* self, bool b ```
bool q_sciabstractapis_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciAbstractAPIs* self ```
QThread* q_sciabstractapis_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciAbstractAPIs* self, QThread* thread ```
void q_sciabstractapis_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciAbstractAPIs* self, int interval ```
int32_t q_sciabstractapis_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciAbstractAPIs* self, int id ```
void q_sciabstractapis_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciAbstractAPIs* self ```
libqt_list /* of QObject* */ q_sciabstractapis_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciAbstractAPIs* self, QObject* parent ```
void q_sciabstractapis_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciAbstractAPIs* self, QObject* filterObj ```
void q_sciabstractapis_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciAbstractAPIs* self, QObject* obj ```
void q_sciabstractapis_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_sciabstractapis_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciAbstractAPIs* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_sciabstractapis_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_sciabstractapis_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_sciabstractapis_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciAbstractAPIs* self ```
void q_sciabstractapis_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciAbstractAPIs* self ```
void q_sciabstractapis_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciAbstractAPIs* self, const char* name, QVariant* value ```
bool q_sciabstractapis_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciAbstractAPIs* self, const char* name ```
QVariant* q_sciabstractapis_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciAbstractAPIs* self ```
const char** q_sciabstractapis_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciAbstractAPIs* self ```
QBindingStorage* q_sciabstractapis_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciAbstractAPIs* self ```
QBindingStorage* q_sciabstractapis_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciAbstractAPIs* self ```
void q_sciabstractapis_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciAbstractAPIs* self, void (*slot)(QObject*) ```
void q_sciabstractapis_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciAbstractAPIs* self ```
QObject* q_sciabstractapis_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciAbstractAPIs* self, const char* classname ```
bool q_sciabstractapis_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciAbstractAPIs* self ```
void q_sciabstractapis_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciAbstractAPIs* self, int interval, enum Qt__TimerType timerType ```
int32_t q_sciabstractapis_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sciabstractapis_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciAbstractAPIs* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sciabstractapis_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciAbstractAPIs* self, QObject* param1 ```
void q_sciabstractapis_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciAbstractAPIs* self, void (*slot)(QObject*, QObject*) ```
void q_sciabstractapis_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QEvent* event ```
bool q_sciabstractapis_event(void* self, void* event) {
    return QsciAbstractAPIs_Event((QsciAbstractAPIs*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QEvent* event ```
bool q_sciabstractapis_qbase_event(void* self, void* event) {
    return QsciAbstractAPIs_QBaseEvent((QsciAbstractAPIs*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, bool (*slot)(QsciAbstractAPIs*, QEvent*) ```
void q_sciabstractapis_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciAbstractAPIs_OnEvent((QsciAbstractAPIs*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QObject* watched, QEvent* event ```
bool q_sciabstractapis_event_filter(void* self, void* watched, void* event) {
    return QsciAbstractAPIs_EventFilter((QsciAbstractAPIs*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QObject* watched, QEvent* event ```
bool q_sciabstractapis_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciAbstractAPIs_QBaseEventFilter((QsciAbstractAPIs*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, bool (*slot)(QsciAbstractAPIs*, QObject*, QEvent*) ```
void q_sciabstractapis_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciAbstractAPIs_OnEventFilter((QsciAbstractAPIs*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QTimerEvent* event ```
void q_sciabstractapis_timer_event(void* self, void* event) {
    QsciAbstractAPIs_TimerEvent((QsciAbstractAPIs*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QTimerEvent* event ```
void q_sciabstractapis_qbase_timer_event(void* self, void* event) {
    QsciAbstractAPIs_QBaseTimerEvent((QsciAbstractAPIs*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, void (*slot)(QsciAbstractAPIs*, QTimerEvent*) ```
void q_sciabstractapis_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciAbstractAPIs_OnTimerEvent((QsciAbstractAPIs*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QChildEvent* event ```
void q_sciabstractapis_child_event(void* self, void* event) {
    QsciAbstractAPIs_ChildEvent((QsciAbstractAPIs*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QChildEvent* event ```
void q_sciabstractapis_qbase_child_event(void* self, void* event) {
    QsciAbstractAPIs_QBaseChildEvent((QsciAbstractAPIs*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, void (*slot)(QsciAbstractAPIs*, QChildEvent*) ```
void q_sciabstractapis_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciAbstractAPIs_OnChildEvent((QsciAbstractAPIs*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QEvent* event ```
void q_sciabstractapis_custom_event(void* self, void* event) {
    QsciAbstractAPIs_CustomEvent((QsciAbstractAPIs*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QEvent* event ```
void q_sciabstractapis_qbase_custom_event(void* self, void* event) {
    QsciAbstractAPIs_QBaseCustomEvent((QsciAbstractAPIs*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, void (*slot)(QsciAbstractAPIs*, QEvent*) ```
void q_sciabstractapis_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciAbstractAPIs_OnCustomEvent((QsciAbstractAPIs*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QMetaMethod* signal ```
void q_sciabstractapis_connect_notify(void* self, void* signal) {
    QsciAbstractAPIs_ConnectNotify((QsciAbstractAPIs*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QMetaMethod* signal ```
void q_sciabstractapis_qbase_connect_notify(void* self, void* signal) {
    QsciAbstractAPIs_QBaseConnectNotify((QsciAbstractAPIs*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, void (*slot)(QsciAbstractAPIs*, QMetaMethod*) ```
void q_sciabstractapis_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciAbstractAPIs_OnConnectNotify((QsciAbstractAPIs*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QMetaMethod* signal ```
void q_sciabstractapis_disconnect_notify(void* self, void* signal) {
    QsciAbstractAPIs_DisconnectNotify((QsciAbstractAPIs*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QMetaMethod* signal ```
void q_sciabstractapis_qbase_disconnect_notify(void* self, void* signal) {
    QsciAbstractAPIs_QBaseDisconnectNotify((QsciAbstractAPIs*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, void (*slot)(QsciAbstractAPIs*, QMetaMethod*) ```
void q_sciabstractapis_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciAbstractAPIs_OnDisconnectNotify((QsciAbstractAPIs*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAbstractAPIs* self ```
QObject* q_sciabstractapis_sender(void* self) {
    return QsciAbstractAPIs_Sender((QsciAbstractAPIs*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self ```
QObject* q_sciabstractapis_qbase_sender(void* self) {
    return QsciAbstractAPIs_QBaseSender((QsciAbstractAPIs*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QObject* (*slot)() ```
void q_sciabstractapis_on_sender(void* self, QObject* (*slot)()) {
    QsciAbstractAPIs_OnSender((QsciAbstractAPIs*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAbstractAPIs* self ```
int32_t q_sciabstractapis_sender_signal_index(void* self) {
    return QsciAbstractAPIs_SenderSignalIndex((QsciAbstractAPIs*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self ```
int32_t q_sciabstractapis_qbase_sender_signal_index(void* self) {
    return QsciAbstractAPIs_QBaseSenderSignalIndex((QsciAbstractAPIs*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, int32_t (*slot)() ```
void q_sciabstractapis_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciAbstractAPIs_OnSenderSignalIndex((QsciAbstractAPIs*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAbstractAPIs* self, const char* signal ```
int32_t q_sciabstractapis_receivers(void* self, const char* signal) {
    return QsciAbstractAPIs_Receivers((QsciAbstractAPIs*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, const char* signal ```
int32_t q_sciabstractapis_qbase_receivers(void* self, const char* signal) {
    return QsciAbstractAPIs_QBaseReceivers((QsciAbstractAPIs*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, int32_t (*slot)(QsciAbstractAPIs*, const char*) ```
void q_sciabstractapis_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciAbstractAPIs_OnReceivers((QsciAbstractAPIs*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QMetaMethod* signal ```
bool q_sciabstractapis_is_signal_connected(void* self, void* signal) {
    return QsciAbstractAPIs_IsSignalConnected((QsciAbstractAPIs*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QMetaMethod* signal ```
bool q_sciabstractapis_qbase_is_signal_connected(void* self, void* signal) {
    return QsciAbstractAPIs_QBaseIsSignalConnected((QsciAbstractAPIs*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, bool (*slot)(QsciAbstractAPIs*, QMetaMethod*) ```
void q_sciabstractapis_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciAbstractAPIs_OnIsSignalConnected((QsciAbstractAPIs*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciAbstractAPIs* self ```
void q_sciabstractapis_delete(void* self) {
    QsciAbstractAPIs_Delete((QsciAbstractAPIs*)(self));
}