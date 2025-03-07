#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "libqsciabstractapis.hpp"
#include "../libqcoreevent.hpp"
#include "libqsciapis.hpp"
#include "libqsciapis.h"

/// https://doc.qt.io/qt-6/qsciapis.html

/// q_sciapis_new constructs a new QsciAPIs object.
///
/// ``` QsciLexer* lexer ```
QsciAPIs* q_sciapis_new(void* lexer) {
    return QsciAPIs_new((QsciLexer*)lexer);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciAPIs* self ```
QMetaObject* q_sciapis_meta_object(void* self) {
    return QsciAPIs_MetaObject((QsciAPIs*)self);
}

/// ``` QsciAPIs* self, const char* param1 ```
void* q_sciapis_metacast(void* self, const char* param1) {
    return QsciAPIs_Metacast((QsciAPIs*)self, param1);
}

/// ``` QsciAPIs* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sciapis_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciAPIs_Metacall((QsciAPIs*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciAPIs* self, int32_t (*slot)(QsciAPIs*, enum QMetaObject__Call, int, void*) ```
void q_sciapis_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciAPIs_OnMetacall((QsciAPIs*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciAPIs* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sciapis_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciAPIs_QBaseMetacall((QsciAPIs*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_sciapis_tr(const char* s) {
    libqt_string _str = QsciAPIs_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciapis.html#add)
///
/// ``` QsciAPIs* self, const char* entry ```
void q_sciapis_add(void* self, const char* entry) {
    QsciAPIs_Add((QsciAPIs*)self, qstring(entry));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciapis.html#clear)
///
/// ``` QsciAPIs* self ```
void q_sciapis_clear(void* self) {
    QsciAPIs_Clear((QsciAPIs*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciapis.html#load)
///
/// ``` QsciAPIs* self, const char* filename ```
bool q_sciapis_load(void* self, const char* filename) {
    return QsciAPIs_Load((QsciAPIs*)self, qstring(filename));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciapis.html#remove)
///
/// ``` QsciAPIs* self, const char* entry ```
void q_sciapis_remove(void* self, const char* entry) {
    QsciAPIs_Remove((QsciAPIs*)self, qstring(entry));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciapis.html#prepare)
///
/// ``` QsciAPIs* self ```
void q_sciapis_prepare(void* self) {
    QsciAPIs_Prepare((QsciAPIs*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciapis.html#cancelPreparation)
///
/// ``` QsciAPIs* self ```
void q_sciapis_cancel_preparation(void* self) {
    QsciAPIs_CancelPreparation((QsciAPIs*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciapis.html#defaultPreparedName)
///
/// ``` QsciAPIs* self ```
const char* q_sciapis_default_prepared_name(void* self) {
    libqt_string _str = QsciAPIs_DefaultPreparedName((QsciAPIs*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciapis.html#isPrepared)
///
/// ``` QsciAPIs* self ```
bool q_sciapis_is_prepared(void* self) {
    return QsciAPIs_IsPrepared((QsciAPIs*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciapis.html#loadPrepared)
///
/// ``` QsciAPIs* self ```
bool q_sciapis_load_prepared(void* self) {
    return QsciAPIs_LoadPrepared((QsciAPIs*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciapis.html#savePrepared)
///
/// ``` QsciAPIs* self ```
bool q_sciapis_save_prepared(void* self) {
    return QsciAPIs_SavePrepared((QsciAPIs*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciapis.html#updateAutoCompletionList)
///
/// ``` QsciAPIs* self, const char* context[], const char* list[] ```
void q_sciapis_update_auto_completion_list(void* self, const char* context[], const char* list[]) {
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
    QsciAPIs_UpdateAutoCompletionList((QsciAPIs*)self, context_list, list_list);
}

/// Allows for overriding the related default method
///
/// ``` QsciAPIs* self, void (*slot)(QsciAPIs*, const char*[], const char*[]) ```
void q_sciapis_on_update_auto_completion_list(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciAPIs_OnUpdateAutoCompletionList((QsciAPIs*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciAPIs* self, const char* context[], const char* list[] ```
void q_sciapis_qbase_update_auto_completion_list(void* self, const char* context[], const char* list[]) {
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
    QsciAPIs_QBaseUpdateAutoCompletionList((QsciAPIs*)self, context_list, list_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciapis.html#autoCompletionSelected)
///
/// ``` QsciAPIs* self, const char* sel ```
void q_sciapis_auto_completion_selected(void* self, const char* sel) {
    QsciAPIs_AutoCompletionSelected((QsciAPIs*)self, qstring(sel));
}

/// Allows for overriding the related default method
///
/// ``` QsciAPIs* self, void (*slot)(QsciAPIs*, const char*) ```
void q_sciapis_on_auto_completion_selected(void* self, void (*slot)(void*, const char*)) {
    QsciAPIs_OnAutoCompletionSelected((QsciAPIs*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciAPIs* self, const char* sel ```
void q_sciapis_qbase_auto_completion_selected(void* self, const char* sel) {
    QsciAPIs_QBaseAutoCompletionSelected((QsciAPIs*)self, qstring(sel));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciapis.html#callTips)
///
/// ``` QsciAPIs* self, const char* context[], int commas, enum QsciScintilla__CallTipsStyle style, int* shifts[] ```
const char** q_sciapis_call_tips(void* self, const char* context[], int commas, int64_t style, int* shifts[]) {
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
    libqt_list _arr = QsciAPIs_CallTips((QsciAPIs*)self, context_list, commas, style, shifts_list);
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
/// ``` QsciAPIs* self, const char** (*slot)(QsciAPIs*, const char*[], int, enum QsciScintilla__CallTipsStyle, int*[]) ```
void q_sciapis_on_call_tips(void* self, const char** (*slot)(void*, const char*, int, int64_t, int*)) {
    QsciAPIs_OnCallTips((QsciAPIs*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciAPIs* self, const char* context[], int commas, enum QsciScintilla__CallTipsStyle style, int* shifts[] ```
const char** q_sciapis_qbase_call_tips(void* self, const char* context[], int commas, int64_t style, int* shifts[]) {
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
    libqt_list _arr = QsciAPIs_QBaseCallTips((QsciAPIs*)self, context_list, commas, style, shifts_list);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qsciapis.html#event)
///
/// ``` QsciAPIs* self, QEvent* e ```
bool q_sciapis_event(void* self, void* e) {
    return QsciAPIs_Event((QsciAPIs*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QsciAPIs* self, bool (*slot)(QsciAPIs*, QEvent*) ```
void q_sciapis_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciAPIs_OnEvent((QsciAPIs*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciAPIs* self, QEvent* e ```
bool q_sciapis_qbase_event(void* self, void* e) {
    return QsciAPIs_QBaseEvent((QsciAPIs*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciapis.html#installedAPIFiles)
///
/// ``` QsciAPIs* self ```
const char** q_sciapis_installed_a_p_i_files(void* self) {
    libqt_list _arr = QsciAPIs_InstalledAPIFiles((QsciAPIs*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qsciapis.html#apiPreparationCancelled)
///
/// ``` QsciAPIs* self ```
void q_sciapis_api_preparation_cancelled(void* self) {
    QsciAPIs_ApiPreparationCancelled((QsciAPIs*)self);
}

/// ``` QsciAPIs* self, void (*slot)(QsciAPIs*) ```
void q_sciapis_on_api_preparation_cancelled(void* self, void (*slot)(void*)) {
    QsciAPIs_Connect_ApiPreparationCancelled((QsciAPIs*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciapis.html#apiPreparationStarted)
///
/// ``` QsciAPIs* self ```
void q_sciapis_api_preparation_started(void* self) {
    QsciAPIs_ApiPreparationStarted((QsciAPIs*)self);
}

/// ``` QsciAPIs* self, void (*slot)(QsciAPIs*) ```
void q_sciapis_on_api_preparation_started(void* self, void (*slot)(void*)) {
    QsciAPIs_Connect_ApiPreparationStarted((QsciAPIs*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciapis.html#apiPreparationFinished)
///
/// ``` QsciAPIs* self ```
void q_sciapis_api_preparation_finished(void* self) {
    QsciAPIs_ApiPreparationFinished((QsciAPIs*)self);
}

/// ``` QsciAPIs* self, void (*slot)(QsciAPIs*) ```
void q_sciapis_on_api_preparation_finished(void* self, void (*slot)(void*)) {
    QsciAPIs_Connect_ApiPreparationFinished((QsciAPIs*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_sciapis_tr2(const char* s, const char* c) {
    libqt_string _str = QsciAPIs_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_sciapis_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciAPIs_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciapis.html#isPrepared)
///
/// ``` QsciAPIs* self, const char* filename ```
bool q_sciapis_is_prepared1(void* self, const char* filename) {
    return QsciAPIs_IsPrepared1((QsciAPIs*)self, qstring(filename));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciapis.html#loadPrepared)
///
/// ``` QsciAPIs* self, const char* filename ```
bool q_sciapis_load_prepared1(void* self, const char* filename) {
    return QsciAPIs_LoadPrepared1((QsciAPIs*)self, qstring(filename));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciapis.html#savePrepared)
///
/// ``` QsciAPIs* self, const char* filename ```
bool q_sciapis_save_prepared1(void* self, const char* filename) {
    return QsciAPIs_SavePrepared1((QsciAPIs*)self, qstring(filename));
}

/// Inherited from QsciAbstractAPIs
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsciabstractapis.html#lexer)
///
/// ``` QsciAPIs* self ```
QsciLexer* q_sciapis_lexer(void* self) {
    return QsciAbstractAPIs_Lexer((QsciAbstractAPIs*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciAPIs* self ```
const char* q_sciapis_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciAPIs* self, const char* name ```
void q_sciapis_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciAPIs* self ```
bool q_sciapis_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciAPIs* self ```
bool q_sciapis_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciAPIs* self ```
bool q_sciapis_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciAPIs* self ```
bool q_sciapis_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciAPIs* self, bool b ```
bool q_sciapis_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciAPIs* self ```
QThread* q_sciapis_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciAPIs* self, QThread* thread ```
void q_sciapis_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciAPIs* self, int interval ```
int32_t q_sciapis_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciAPIs* self, int id ```
void q_sciapis_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciAPIs* self ```
libqt_list /* of QObject* */ q_sciapis_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciAPIs* self, QObject* parent ```
void q_sciapis_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciAPIs* self, QObject* filterObj ```
void q_sciapis_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciAPIs* self, QObject* obj ```
void q_sciapis_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_sciapis_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciAPIs* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_sciapis_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_sciapis_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_sciapis_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciAPIs* self ```
void q_sciapis_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciAPIs* self ```
void q_sciapis_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciAPIs* self, const char* name, QVariant* value ```
bool q_sciapis_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciAPIs* self, const char* name ```
QVariant* q_sciapis_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciAPIs* self ```
const char** q_sciapis_dynamic_property_names(void* self) {
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
/// ``` QsciAPIs* self ```
QBindingStorage* q_sciapis_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciAPIs* self ```
QBindingStorage* q_sciapis_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciAPIs* self ```
void q_sciapis_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciAPIs* self, void (*slot)(QObject*) ```
void q_sciapis_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciAPIs* self ```
QObject* q_sciapis_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciAPIs* self, const char* classname ```
bool q_sciapis_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciAPIs* self ```
void q_sciapis_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciAPIs* self, int interval, enum Qt__TimerType timerType ```
int32_t q_sciapis_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sciapis_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciAPIs* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sciapis_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciAPIs* self, QObject* param1 ```
void q_sciapis_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciAPIs* self, void (*slot)(QObject*, QObject*) ```
void q_sciapis_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAPIs* self, QObject* watched, QEvent* event ```
bool q_sciapis_event_filter(void* self, void* watched, void* event) {
    return QsciAPIs_EventFilter((QsciAPIs*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAPIs* self, QObject* watched, QEvent* event ```
bool q_sciapis_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciAPIs_QBaseEventFilter((QsciAPIs*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAPIs* self, bool (*slot)(QsciAPIs*, QObject*, QEvent*) ```
void q_sciapis_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciAPIs_OnEventFilter((QsciAPIs*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAPIs* self, QTimerEvent* event ```
void q_sciapis_timer_event(void* self, void* event) {
    QsciAPIs_TimerEvent((QsciAPIs*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAPIs* self, QTimerEvent* event ```
void q_sciapis_qbase_timer_event(void* self, void* event) {
    QsciAPIs_QBaseTimerEvent((QsciAPIs*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAPIs* self, void (*slot)(QsciAPIs*, QTimerEvent*) ```
void q_sciapis_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciAPIs_OnTimerEvent((QsciAPIs*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAPIs* self, QChildEvent* event ```
void q_sciapis_child_event(void* self, void* event) {
    QsciAPIs_ChildEvent((QsciAPIs*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAPIs* self, QChildEvent* event ```
void q_sciapis_qbase_child_event(void* self, void* event) {
    QsciAPIs_QBaseChildEvent((QsciAPIs*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAPIs* self, void (*slot)(QsciAPIs*, QChildEvent*) ```
void q_sciapis_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciAPIs_OnChildEvent((QsciAPIs*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAPIs* self, QEvent* event ```
void q_sciapis_custom_event(void* self, void* event) {
    QsciAPIs_CustomEvent((QsciAPIs*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAPIs* self, QEvent* event ```
void q_sciapis_qbase_custom_event(void* self, void* event) {
    QsciAPIs_QBaseCustomEvent((QsciAPIs*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAPIs* self, void (*slot)(QsciAPIs*, QEvent*) ```
void q_sciapis_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciAPIs_OnCustomEvent((QsciAPIs*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAPIs* self, QMetaMethod* signal ```
void q_sciapis_connect_notify(void* self, void* signal) {
    QsciAPIs_ConnectNotify((QsciAPIs*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAPIs* self, QMetaMethod* signal ```
void q_sciapis_qbase_connect_notify(void* self, void* signal) {
    QsciAPIs_QBaseConnectNotify((QsciAPIs*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAPIs* self, void (*slot)(QsciAPIs*, QMetaMethod*) ```
void q_sciapis_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciAPIs_OnConnectNotify((QsciAPIs*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAPIs* self, QMetaMethod* signal ```
void q_sciapis_disconnect_notify(void* self, void* signal) {
    QsciAPIs_DisconnectNotify((QsciAPIs*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAPIs* self, QMetaMethod* signal ```
void q_sciapis_qbase_disconnect_notify(void* self, void* signal) {
    QsciAPIs_QBaseDisconnectNotify((QsciAPIs*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAPIs* self, void (*slot)(QsciAPIs*, QMetaMethod*) ```
void q_sciapis_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciAPIs_OnDisconnectNotify((QsciAPIs*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAPIs* self ```
QObject* q_sciapis_sender(void* self) {
    return QsciAPIs_Sender((QsciAPIs*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAPIs* self ```
QObject* q_sciapis_qbase_sender(void* self) {
    return QsciAPIs_QBaseSender((QsciAPIs*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAPIs* self, QObject* (*slot)() ```
void q_sciapis_on_sender(void* self, QObject* (*slot)()) {
    QsciAPIs_OnSender((QsciAPIs*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAPIs* self ```
int32_t q_sciapis_sender_signal_index(void* self) {
    return QsciAPIs_SenderSignalIndex((QsciAPIs*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAPIs* self ```
int32_t q_sciapis_qbase_sender_signal_index(void* self) {
    return QsciAPIs_QBaseSenderSignalIndex((QsciAPIs*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAPIs* self, int32_t (*slot)() ```
void q_sciapis_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciAPIs_OnSenderSignalIndex((QsciAPIs*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAPIs* self, const char* signal ```
int32_t q_sciapis_receivers(void* self, const char* signal) {
    return QsciAPIs_Receivers((QsciAPIs*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAPIs* self, const char* signal ```
int32_t q_sciapis_qbase_receivers(void* self, const char* signal) {
    return QsciAPIs_QBaseReceivers((QsciAPIs*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAPIs* self, int32_t (*slot)(QsciAPIs*, const char*) ```
void q_sciapis_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciAPIs_OnReceivers((QsciAPIs*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAPIs* self, QMetaMethod* signal ```
bool q_sciapis_is_signal_connected(void* self, void* signal) {
    return QsciAPIs_IsSignalConnected((QsciAPIs*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAPIs* self, QMetaMethod* signal ```
bool q_sciapis_qbase_is_signal_connected(void* self, void* signal) {
    return QsciAPIs_QBaseIsSignalConnected((QsciAPIs*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAPIs* self, bool (*slot)(QsciAPIs*, QMetaMethod*) ```
void q_sciapis_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciAPIs_OnIsSignalConnected((QsciAPIs*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciAPIs* self ```
void q_sciapis_delete(void* self) {
    QsciAPIs_Delete((QsciAPIs*)(self));
}