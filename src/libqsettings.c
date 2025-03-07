#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqsettings.hpp"
#include "libqsettings.h"

/// https://doc.qt.io/qt-6/qsettings.html

/// q_settings_new constructs a new QSettings object.
///
/// ``` const char* organization ```
QSettings* q_settings_new(const char* organization) {
    return QSettings_new(qstring(organization));
}

/// q_settings_new2 constructs a new QSettings object.
///
/// ``` enum QSettings__Scope scope, const char* organization ```
QSettings* q_settings_new2(int64_t scope, const char* organization) {
    return QSettings_new2(scope, qstring(organization));
}

/// q_settings_new3 constructs a new QSettings object.
///
/// ``` enum QSettings__Format format, enum QSettings__Scope scope, const char* organization ```
QSettings* q_settings_new3(int64_t format, int64_t scope, const char* organization) {
    return QSettings_new3(format, scope, qstring(organization));
}

/// q_settings_new4 constructs a new QSettings object.
///
/// ``` const char* fileName, enum QSettings__Format format ```
QSettings* q_settings_new4(const char* fileName, int64_t format) {
    return QSettings_new4(qstring(fileName), format);
}

/// q_settings_new5 constructs a new QSettings object.
///
///
QSettings* q_settings_new5() {
    return QSettings_new5();
}

/// q_settings_new6 constructs a new QSettings object.
///
/// ``` enum QSettings__Scope scope ```
QSettings* q_settings_new6(int64_t scope) {
    return QSettings_new6(scope);
}

/// q_settings_new7 constructs a new QSettings object.
///
/// ``` const char* organization, const char* application ```
QSettings* q_settings_new7(const char* organization, const char* application) {
    return QSettings_new7(qstring(organization), qstring(application));
}

/// q_settings_new8 constructs a new QSettings object.
///
/// ``` const char* organization, const char* application, QObject* parent ```
QSettings* q_settings_new8(const char* organization, const char* application, void* parent) {
    return QSettings_new8(qstring(organization), qstring(application), (QObject*)parent);
}

/// q_settings_new9 constructs a new QSettings object.
///
/// ``` enum QSettings__Scope scope, const char* organization, const char* application ```
QSettings* q_settings_new9(int64_t scope, const char* organization, const char* application) {
    return QSettings_new9(scope, qstring(organization), qstring(application));
}

/// q_settings_new10 constructs a new QSettings object.
///
/// ``` enum QSettings__Scope scope, const char* organization, const char* application, QObject* parent ```
QSettings* q_settings_new10(int64_t scope, const char* organization, const char* application, void* parent) {
    return QSettings_new10(scope, qstring(organization), qstring(application), (QObject*)parent);
}

/// q_settings_new11 constructs a new QSettings object.
///
/// ``` enum QSettings__Format format, enum QSettings__Scope scope, const char* organization, const char* application ```
QSettings* q_settings_new11(int64_t format, int64_t scope, const char* organization, const char* application) {
    return QSettings_new11(format, scope, qstring(organization), qstring(application));
}

/// q_settings_new12 constructs a new QSettings object.
///
/// ``` enum QSettings__Format format, enum QSettings__Scope scope, const char* organization, const char* application, QObject* parent ```
QSettings* q_settings_new12(int64_t format, int64_t scope, const char* organization, const char* application, void* parent) {
    return QSettings_new12(format, scope, qstring(organization), qstring(application), (QObject*)parent);
}

/// q_settings_new13 constructs a new QSettings object.
///
/// ``` const char* fileName, enum QSettings__Format format, QObject* parent ```
QSettings* q_settings_new13(const char* fileName, int64_t format, void* parent) {
    return QSettings_new13(qstring(fileName), format, (QObject*)parent);
}

/// q_settings_new14 constructs a new QSettings object.
///
/// ``` QObject* parent ```
QSettings* q_settings_new14(void* parent) {
    return QSettings_new14((QObject*)parent);
}

/// q_settings_new15 constructs a new QSettings object.
///
/// ``` enum QSettings__Scope scope, QObject* parent ```
QSettings* q_settings_new15(int64_t scope, void* parent) {
    return QSettings_new15(scope, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSettings* self ```
QMetaObject* q_settings_meta_object(void* self) {
    return QSettings_MetaObject((QSettings*)self);
}

/// ``` QSettings* self, const char* param1 ```
void* q_settings_metacast(void* self, const char* param1) {
    return QSettings_Metacast((QSettings*)self, param1);
}

/// ``` QSettings* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_settings_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSettings_Metacall((QSettings*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QSettings* self, int32_t (*slot)(QSettings*, enum QMetaObject__Call, int, void*) ```
void q_settings_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QSettings_OnMetacall((QSettings*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSettings* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_settings_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSettings_QBaseMetacall((QSettings*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_settings_tr(const char* s) {
    libqt_string _str = QSettings_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#clear)
///
/// ``` QSettings* self ```
void q_settings_clear(void* self) {
    QSettings_Clear((QSettings*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#sync)
///
/// ``` QSettings* self ```
void q_settings_sync(void* self) {
    QSettings_Sync((QSettings*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#status)
///
/// ``` QSettings* self ```
int64_t q_settings_status(void* self) {
    return QSettings_Status((QSettings*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#isAtomicSyncRequired)
///
/// ``` QSettings* self ```
bool q_settings_is_atomic_sync_required(void* self) {
    return QSettings_IsAtomicSyncRequired((QSettings*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#setAtomicSyncRequired)
///
/// ``` QSettings* self, bool enable ```
void q_settings_set_atomic_sync_required(void* self, bool enable) {
    QSettings_SetAtomicSyncRequired((QSettings*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#beginGroup)
///
/// ``` QSettings* self, const char* prefix ```
void q_settings_begin_group(void* self, const char* prefix) {
    libqt_strview prefix_strview = qstrview(prefix);
    QSettings_BeginGroup((QSettings*)self, (QAnyStringView*)&prefix_strview);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#endGroup)
///
/// ``` QSettings* self ```
void q_settings_end_group(void* self) {
    QSettings_EndGroup((QSettings*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#group)
///
/// ``` QSettings* self ```
const char* q_settings_group(void* self) {
    libqt_string _str = QSettings_Group((QSettings*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#beginReadArray)
///
/// ``` QSettings* self, const char* prefix ```
int32_t q_settings_begin_read_array(void* self, const char* prefix) {
    libqt_strview prefix_strview = qstrview(prefix);
    return QSettings_BeginReadArray((QSettings*)self, (QAnyStringView*)&prefix_strview);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#beginWriteArray)
///
/// ``` QSettings* self, const char* prefix ```
void q_settings_begin_write_array(void* self, const char* prefix) {
    libqt_strview prefix_strview = qstrview(prefix);
    QSettings_BeginWriteArray((QSettings*)self, (QAnyStringView*)&prefix_strview);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#endArray)
///
/// ``` QSettings* self ```
void q_settings_end_array(void* self) {
    QSettings_EndArray((QSettings*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#setArrayIndex)
///
/// ``` QSettings* self, int i ```
void q_settings_set_array_index(void* self, int i) {
    QSettings_SetArrayIndex((QSettings*)self, i);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#allKeys)
///
/// ``` QSettings* self ```
const char** q_settings_all_keys(void* self) {
    libqt_list _arr = QSettings_AllKeys((QSettings*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#childKeys)
///
/// ``` QSettings* self ```
const char** q_settings_child_keys(void* self) {
    libqt_list _arr = QSettings_ChildKeys((QSettings*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#childGroups)
///
/// ``` QSettings* self ```
const char** q_settings_child_groups(void* self) {
    libqt_list _arr = QSettings_ChildGroups((QSettings*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#isWritable)
///
/// ``` QSettings* self ```
bool q_settings_is_writable(void* self) {
    return QSettings_IsWritable((QSettings*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#setValue)
///
/// ``` QSettings* self, const char* key, QVariant* value ```
void q_settings_set_value(void* self, const char* key, void* value) {
    libqt_strview key_strview = qstrview(key);
    QSettings_SetValue((QSettings*)self, (QAnyStringView*)&key_strview, (QVariant*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#value)
///
/// ``` QSettings* self, const char* key, QVariant* defaultValue ```
QVariant* q_settings_value(void* self, const char* key, void* defaultValue) {
    libqt_strview key_strview = qstrview(key);
    return QSettings_Value((QSettings*)self, (QAnyStringView*)&key_strview, (QVariant*)defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#value)
///
/// ``` QSettings* self, const char* key ```
QVariant* q_settings_value_with_key(void* self, const char* key) {
    libqt_strview key_strview = qstrview(key);
    return QSettings_ValueWithKey((QSettings*)self, (QAnyStringView*)&key_strview);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#remove)
///
/// ``` QSettings* self, const char* key ```
void q_settings_remove(void* self, const char* key) {
    libqt_strview key_strview = qstrview(key);
    QSettings_Remove((QSettings*)self, (QAnyStringView*)&key_strview);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#contains)
///
/// ``` QSettings* self, const char* key ```
bool q_settings_contains(void* self, const char* key) {
    libqt_strview key_strview = qstrview(key);
    return QSettings_Contains((QSettings*)self, (QAnyStringView*)&key_strview);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#setFallbacksEnabled)
///
/// ``` QSettings* self, bool b ```
void q_settings_set_fallbacks_enabled(void* self, bool b) {
    QSettings_SetFallbacksEnabled((QSettings*)self, b);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#fallbacksEnabled)
///
/// ``` QSettings* self ```
bool q_settings_fallbacks_enabled(void* self) {
    return QSettings_FallbacksEnabled((QSettings*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#fileName)
///
/// ``` QSettings* self ```
const char* q_settings_file_name(void* self) {
    libqt_string _str = QSettings_FileName((QSettings*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#format)
///
/// ``` QSettings* self ```
int64_t q_settings_format(void* self) {
    return QSettings_Format((QSettings*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#scope)
///
/// ``` QSettings* self ```
int64_t q_settings_scope(void* self) {
    return QSettings_Scope((QSettings*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#organizationName)
///
/// ``` QSettings* self ```
const char* q_settings_organization_name(void* self) {
    libqt_string _str = QSettings_OrganizationName((QSettings*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#applicationName)
///
/// ``` QSettings* self ```
const char* q_settings_application_name(void* self) {
    libqt_string _str = QSettings_ApplicationName((QSettings*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#setDefaultFormat)
///
/// ``` enum QSettings__Format format ```
void q_settings_set_default_format(int64_t format) {
    QSettings_SetDefaultFormat(format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#defaultFormat)
///
///
int64_t q_settings_default_format() {
    return QSettings_DefaultFormat();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#setPath)
///
/// ``` enum QSettings__Format format, enum QSettings__Scope scope, const char* path ```
void q_settings_set_path(int64_t format, int64_t scope, const char* path) {
    QSettings_SetPath(format, scope, qstring(path));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#event)
///
/// ``` QSettings* self, QEvent* event ```
bool q_settings_event(void* self, void* event) {
    return QSettings_Event((QSettings*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QSettings* self, bool (*slot)(QSettings*, QEvent*) ```
void q_settings_on_event(void* self, bool (*slot)(void*, void*)) {
    QSettings_OnEvent((QSettings*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSettings* self, QEvent* event ```
bool q_settings_qbase_event(void* self, void* event) {
    return QSettings_QBaseEvent((QSettings*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_settings_tr2(const char* s, const char* c) {
    libqt_string _str = QSettings_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_settings_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSettings_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#beginWriteArray)
///
/// ``` QSettings* self, const char* prefix, int size ```
void q_settings_begin_write_array2(void* self, const char* prefix, int size) {
    libqt_strview prefix_strview = qstrview(prefix);
    QSettings_BeginWriteArray2((QSettings*)self, (QAnyStringView*)&prefix_strview, size);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSettings* self ```
const char* q_settings_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSettings* self, const char* name ```
void q_settings_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSettings* self ```
bool q_settings_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSettings* self ```
bool q_settings_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSettings* self ```
bool q_settings_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSettings* self ```
bool q_settings_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSettings* self, bool b ```
bool q_settings_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSettings* self ```
QThread* q_settings_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSettings* self, QThread* thread ```
void q_settings_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSettings* self, int interval ```
int32_t q_settings_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSettings* self, int id ```
void q_settings_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSettings* self ```
libqt_list /* of QObject* */ q_settings_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSettings* self, QObject* parent ```
void q_settings_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSettings* self, QObject* filterObj ```
void q_settings_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSettings* self, QObject* obj ```
void q_settings_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_settings_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSettings* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_settings_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_settings_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_settings_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSettings* self ```
void q_settings_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSettings* self ```
void q_settings_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSettings* self, const char* name, QVariant* value ```
bool q_settings_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSettings* self, const char* name ```
QVariant* q_settings_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSettings* self ```
const char** q_settings_dynamic_property_names(void* self) {
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
/// ``` QSettings* self ```
QBindingStorage* q_settings_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSettings* self ```
QBindingStorage* q_settings_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSettings* self ```
void q_settings_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QSettings* self, void (*slot)(QObject*) ```
void q_settings_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSettings* self ```
QObject* q_settings_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSettings* self, const char* classname ```
bool q_settings_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSettings* self ```
void q_settings_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSettings* self, int interval, enum Qt__TimerType timerType ```
int32_t q_settings_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_settings_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSettings* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_settings_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSettings* self, QObject* param1 ```
void q_settings_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QSettings* self, void (*slot)(QObject*, QObject*) ```
void q_settings_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSettings* self, QObject* watched, QEvent* event ```
bool q_settings_event_filter(void* self, void* watched, void* event) {
    return QSettings_EventFilter((QSettings*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSettings* self, QObject* watched, QEvent* event ```
bool q_settings_qbase_event_filter(void* self, void* watched, void* event) {
    return QSettings_QBaseEventFilter((QSettings*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSettings* self, bool (*slot)(QSettings*, QObject*, QEvent*) ```
void q_settings_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QSettings_OnEventFilter((QSettings*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSettings* self, QTimerEvent* event ```
void q_settings_timer_event(void* self, void* event) {
    QSettings_TimerEvent((QSettings*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSettings* self, QTimerEvent* event ```
void q_settings_qbase_timer_event(void* self, void* event) {
    QSettings_QBaseTimerEvent((QSettings*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSettings* self, void (*slot)(QSettings*, QTimerEvent*) ```
void q_settings_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QSettings_OnTimerEvent((QSettings*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSettings* self, QChildEvent* event ```
void q_settings_child_event(void* self, void* event) {
    QSettings_ChildEvent((QSettings*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSettings* self, QChildEvent* event ```
void q_settings_qbase_child_event(void* self, void* event) {
    QSettings_QBaseChildEvent((QSettings*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSettings* self, void (*slot)(QSettings*, QChildEvent*) ```
void q_settings_on_child_event(void* self, void (*slot)(void*, void*)) {
    QSettings_OnChildEvent((QSettings*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSettings* self, QEvent* event ```
void q_settings_custom_event(void* self, void* event) {
    QSettings_CustomEvent((QSettings*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSettings* self, QEvent* event ```
void q_settings_qbase_custom_event(void* self, void* event) {
    QSettings_QBaseCustomEvent((QSettings*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSettings* self, void (*slot)(QSettings*, QEvent*) ```
void q_settings_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QSettings_OnCustomEvent((QSettings*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSettings* self, QMetaMethod* signal ```
void q_settings_connect_notify(void* self, void* signal) {
    QSettings_ConnectNotify((QSettings*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSettings* self, QMetaMethod* signal ```
void q_settings_qbase_connect_notify(void* self, void* signal) {
    QSettings_QBaseConnectNotify((QSettings*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSettings* self, void (*slot)(QSettings*, QMetaMethod*) ```
void q_settings_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QSettings_OnConnectNotify((QSettings*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSettings* self, QMetaMethod* signal ```
void q_settings_disconnect_notify(void* self, void* signal) {
    QSettings_DisconnectNotify((QSettings*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSettings* self, QMetaMethod* signal ```
void q_settings_qbase_disconnect_notify(void* self, void* signal) {
    QSettings_QBaseDisconnectNotify((QSettings*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSettings* self, void (*slot)(QSettings*, QMetaMethod*) ```
void q_settings_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QSettings_OnDisconnectNotify((QSettings*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSettings* self ```
QObject* q_settings_sender(void* self) {
    return QSettings_Sender((QSettings*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSettings* self ```
QObject* q_settings_qbase_sender(void* self) {
    return QSettings_QBaseSender((QSettings*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSettings* self, QObject* (*slot)() ```
void q_settings_on_sender(void* self, QObject* (*slot)()) {
    QSettings_OnSender((QSettings*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSettings* self ```
int32_t q_settings_sender_signal_index(void* self) {
    return QSettings_SenderSignalIndex((QSettings*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSettings* self ```
int32_t q_settings_qbase_sender_signal_index(void* self) {
    return QSettings_QBaseSenderSignalIndex((QSettings*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSettings* self, int32_t (*slot)() ```
void q_settings_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QSettings_OnSenderSignalIndex((QSettings*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSettings* self, const char* signal ```
int32_t q_settings_receivers(void* self, const char* signal) {
    return QSettings_Receivers((QSettings*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSettings* self, const char* signal ```
int32_t q_settings_qbase_receivers(void* self, const char* signal) {
    return QSettings_QBaseReceivers((QSettings*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSettings* self, int32_t (*slot)(QSettings*, const char*) ```
void q_settings_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QSettings_OnReceivers((QSettings*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSettings* self, QMetaMethod* signal ```
bool q_settings_is_signal_connected(void* self, void* signal) {
    return QSettings_IsSignalConnected((QSettings*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSettings* self, QMetaMethod* signal ```
bool q_settings_qbase_is_signal_connected(void* self, void* signal) {
    return QSettings_QBaseIsSignalConnected((QSettings*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSettings* self, bool (*slot)(QSettings*, QMetaMethod*) ```
void q_settings_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QSettings_OnIsSignalConnected((QSettings*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QSettings* self ```
void q_settings_delete(void* self) {
    QSettings_Delete((QSettings*)(self));
}