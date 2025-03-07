#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqmetatype.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqurl.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqmimedata.hpp"
#include "libqmimedata.h"

/// https://doc.qt.io/qt-6/qmimedata.html

/// q_mimedata_new constructs a new QMimeData object.
///
///
QMimeData* q_mimedata_new() {
    return QMimeData_new();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QMimeData* self ```
QMetaObject* q_mimedata_meta_object(void* self) {
    return QMimeData_MetaObject((QMimeData*)self);
}

/// ``` QMimeData* self, const char* param1 ```
void* q_mimedata_metacast(void* self, const char* param1) {
    return QMimeData_Metacast((QMimeData*)self, param1);
}

/// ``` QMimeData* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_mimedata_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QMimeData_Metacall((QMimeData*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QMimeData* self, int32_t (*slot)(QMimeData*, enum QMetaObject__Call, int, void*) ```
void q_mimedata_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QMimeData_OnMetacall((QMimeData*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMimeData* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_mimedata_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QMimeData_QBaseMetacall((QMimeData*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_mimedata_tr(const char* s) {
    libqt_string _str = QMimeData_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#urls)
///
/// ``` QMimeData* self ```
libqt_list /* of QUrl* */ q_mimedata_urls(void* self) {
    libqt_list _arr = QMimeData_Urls((QMimeData*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#setUrls)
///
/// ``` QMimeData* self, QUrl* urls[] ```
void q_mimedata_set_urls(void* self, void* urls[]) {
    QUrl** urls_arr = (QUrl**)urls;
    size_t urls_len = 0;
    while (urls_arr[urls_len] != NULL) {
        urls_len++;
    }
    libqt_list urls_list = {
        .len = urls_len,
        .data = {(QUrl*)urls},
    };
    QMimeData_SetUrls((QMimeData*)self, urls_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#hasUrls)
///
/// ``` QMimeData* self ```
bool q_mimedata_has_urls(void* self) {
    return QMimeData_HasUrls((QMimeData*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#text)
///
/// ``` QMimeData* self ```
const char* q_mimedata_text(void* self) {
    libqt_string _str = QMimeData_Text((QMimeData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#setText)
///
/// ``` QMimeData* self, const char* text ```
void q_mimedata_set_text(void* self, const char* text) {
    QMimeData_SetText((QMimeData*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#hasText)
///
/// ``` QMimeData* self ```
bool q_mimedata_has_text(void* self) {
    return QMimeData_HasText((QMimeData*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#html)
///
/// ``` QMimeData* self ```
const char* q_mimedata_html(void* self) {
    libqt_string _str = QMimeData_Html((QMimeData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#setHtml)
///
/// ``` QMimeData* self, const char* html ```
void q_mimedata_set_html(void* self, const char* html) {
    QMimeData_SetHtml((QMimeData*)self, qstring(html));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#hasHtml)
///
/// ``` QMimeData* self ```
bool q_mimedata_has_html(void* self) {
    return QMimeData_HasHtml((QMimeData*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#imageData)
///
/// ``` QMimeData* self ```
QVariant* q_mimedata_image_data(void* self) {
    return QMimeData_ImageData((QMimeData*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#setImageData)
///
/// ``` QMimeData* self, QVariant* image ```
void q_mimedata_set_image_data(void* self, void* image) {
    QMimeData_SetImageData((QMimeData*)self, (QVariant*)image);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#hasImage)
///
/// ``` QMimeData* self ```
bool q_mimedata_has_image(void* self) {
    return QMimeData_HasImage((QMimeData*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#colorData)
///
/// ``` QMimeData* self ```
QVariant* q_mimedata_color_data(void* self) {
    return QMimeData_ColorData((QMimeData*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#setColorData)
///
/// ``` QMimeData* self, QVariant* color ```
void q_mimedata_set_color_data(void* self, void* color) {
    QMimeData_SetColorData((QMimeData*)self, (QVariant*)color);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#hasColor)
///
/// ``` QMimeData* self ```
bool q_mimedata_has_color(void* self) {
    return QMimeData_HasColor((QMimeData*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#data)
///
/// ``` QMimeData* self, const char* mimetype ```
char* q_mimedata_data(void* self, const char* mimetype) {
    libqt_string _str = QMimeData_Data((QMimeData*)self, qstring(mimetype));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#setData)
///
/// ``` QMimeData* self, const char* mimetype, const char* data ```
void q_mimedata_set_data(void* self, const char* mimetype, const char* data) {
    QMimeData_SetData((QMimeData*)self, qstring(mimetype), qstring(data));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#removeFormat)
///
/// ``` QMimeData* self, const char* mimetype ```
void q_mimedata_remove_format(void* self, const char* mimetype) {
    QMimeData_RemoveFormat((QMimeData*)self, qstring(mimetype));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#hasFormat)
///
/// ``` QMimeData* self, const char* mimetype ```
bool q_mimedata_has_format(void* self, const char* mimetype) {
    return QMimeData_HasFormat((QMimeData*)self, qstring(mimetype));
}

/// Allows for overriding the related default method
///
/// ``` QMimeData* self, bool (*slot)(QMimeData*, const char*) ```
void q_mimedata_on_has_format(void* self, bool (*slot)(void*, const char*)) {
    QMimeData_OnHasFormat((QMimeData*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMimeData* self, const char* mimetype ```
bool q_mimedata_qbase_has_format(void* self, const char* mimetype) {
    return QMimeData_QBaseHasFormat((QMimeData*)self, qstring(mimetype));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#formats)
///
/// ``` QMimeData* self ```
const char** q_mimedata_formats(void* self) {
    libqt_list _arr = QMimeData_Formats((QMimeData*)self);
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
/// ``` QMimeData* self, const char** (*slot)() ```
void q_mimedata_on_formats(void* self, const char** (*slot)()) {
    QMimeData_OnFormats((QMimeData*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMimeData* self ```
const char** q_mimedata_qbase_formats(void* self) {
    libqt_list _arr = QMimeData_QBaseFormats((QMimeData*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#clear)
///
/// ``` QMimeData* self ```
void q_mimedata_clear(void* self) {
    QMimeData_Clear((QMimeData*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#retrieveData)
///
/// ``` QMimeData* self, const char* mimetype, QMetaType* preferredType ```
QVariant* q_mimedata_retrieve_data(void* self, const char* mimetype, void* preferredType) {
    return QMimeData_RetrieveData((QMimeData*)self, qstring(mimetype), (QMetaType*)preferredType);
}

/// Allows for overriding the related default method
///
/// ``` QMimeData* self, QVariant* (*slot)(QMimeData*, const char*, QMetaType*) ```
void q_mimedata_on_retrieve_data(void* self, QVariant* (*slot)(void*, const char*, void*)) {
    QMimeData_OnRetrieveData((QMimeData*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMimeData* self, const char* mimetype, QMetaType* preferredType ```
QVariant* q_mimedata_qbase_retrieve_data(void* self, const char* mimetype, void* preferredType) {
    return QMimeData_QBaseRetrieveData((QMimeData*)self, qstring(mimetype), (QMetaType*)preferredType);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_mimedata_tr2(const char* s, const char* c) {
    libqt_string _str = QMimeData_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_mimedata_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QMimeData_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QMimeData* self ```
const char* q_mimedata_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QMimeData* self, const char* name ```
void q_mimedata_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QMimeData* self ```
bool q_mimedata_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QMimeData* self ```
bool q_mimedata_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QMimeData* self ```
bool q_mimedata_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QMimeData* self ```
bool q_mimedata_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QMimeData* self, bool b ```
bool q_mimedata_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QMimeData* self ```
QThread* q_mimedata_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QMimeData* self, QThread* thread ```
void q_mimedata_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMimeData* self, int interval ```
int32_t q_mimedata_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QMimeData* self, int id ```
void q_mimedata_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QMimeData* self ```
libqt_list /* of QObject* */ q_mimedata_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QMimeData* self, QObject* parent ```
void q_mimedata_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QMimeData* self, QObject* filterObj ```
void q_mimedata_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QMimeData* self, QObject* obj ```
void q_mimedata_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_mimedata_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMimeData* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_mimedata_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_mimedata_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_mimedata_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QMimeData* self ```
void q_mimedata_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QMimeData* self ```
void q_mimedata_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QMimeData* self, const char* name, QVariant* value ```
bool q_mimedata_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QMimeData* self, const char* name ```
QVariant* q_mimedata_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QMimeData* self ```
const char** q_mimedata_dynamic_property_names(void* self) {
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
/// ``` QMimeData* self ```
QBindingStorage* q_mimedata_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMimeData* self ```
QBindingStorage* q_mimedata_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMimeData* self ```
void q_mimedata_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QMimeData* self, void (*slot)(QObject*) ```
void q_mimedata_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QMimeData* self ```
QObject* q_mimedata_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QMimeData* self, const char* classname ```
bool q_mimedata_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QMimeData* self ```
void q_mimedata_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMimeData* self, int interval, enum Qt__TimerType timerType ```
int32_t q_mimedata_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_mimedata_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMimeData* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_mimedata_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMimeData* self, QObject* param1 ```
void q_mimedata_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QMimeData* self, void (*slot)(QObject*, QObject*) ```
void q_mimedata_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMimeData* self, QEvent* event ```
bool q_mimedata_event(void* self, void* event) {
    return QMimeData_Event((QMimeData*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMimeData* self, QEvent* event ```
bool q_mimedata_qbase_event(void* self, void* event) {
    return QMimeData_QBaseEvent((QMimeData*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMimeData* self, bool (*slot)(QMimeData*, QEvent*) ```
void q_mimedata_on_event(void* self, bool (*slot)(void*, void*)) {
    QMimeData_OnEvent((QMimeData*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMimeData* self, QObject* watched, QEvent* event ```
bool q_mimedata_event_filter(void* self, void* watched, void* event) {
    return QMimeData_EventFilter((QMimeData*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMimeData* self, QObject* watched, QEvent* event ```
bool q_mimedata_qbase_event_filter(void* self, void* watched, void* event) {
    return QMimeData_QBaseEventFilter((QMimeData*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMimeData* self, bool (*slot)(QMimeData*, QObject*, QEvent*) ```
void q_mimedata_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QMimeData_OnEventFilter((QMimeData*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMimeData* self, QTimerEvent* event ```
void q_mimedata_timer_event(void* self, void* event) {
    QMimeData_TimerEvent((QMimeData*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMimeData* self, QTimerEvent* event ```
void q_mimedata_qbase_timer_event(void* self, void* event) {
    QMimeData_QBaseTimerEvent((QMimeData*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMimeData* self, void (*slot)(QMimeData*, QTimerEvent*) ```
void q_mimedata_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QMimeData_OnTimerEvent((QMimeData*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMimeData* self, QChildEvent* event ```
void q_mimedata_child_event(void* self, void* event) {
    QMimeData_ChildEvent((QMimeData*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMimeData* self, QChildEvent* event ```
void q_mimedata_qbase_child_event(void* self, void* event) {
    QMimeData_QBaseChildEvent((QMimeData*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMimeData* self, void (*slot)(QMimeData*, QChildEvent*) ```
void q_mimedata_on_child_event(void* self, void (*slot)(void*, void*)) {
    QMimeData_OnChildEvent((QMimeData*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMimeData* self, QEvent* event ```
void q_mimedata_custom_event(void* self, void* event) {
    QMimeData_CustomEvent((QMimeData*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMimeData* self, QEvent* event ```
void q_mimedata_qbase_custom_event(void* self, void* event) {
    QMimeData_QBaseCustomEvent((QMimeData*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMimeData* self, void (*slot)(QMimeData*, QEvent*) ```
void q_mimedata_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QMimeData_OnCustomEvent((QMimeData*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMimeData* self, QMetaMethod* signal ```
void q_mimedata_connect_notify(void* self, void* signal) {
    QMimeData_ConnectNotify((QMimeData*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMimeData* self, QMetaMethod* signal ```
void q_mimedata_qbase_connect_notify(void* self, void* signal) {
    QMimeData_QBaseConnectNotify((QMimeData*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMimeData* self, void (*slot)(QMimeData*, QMetaMethod*) ```
void q_mimedata_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QMimeData_OnConnectNotify((QMimeData*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMimeData* self, QMetaMethod* signal ```
void q_mimedata_disconnect_notify(void* self, void* signal) {
    QMimeData_DisconnectNotify((QMimeData*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMimeData* self, QMetaMethod* signal ```
void q_mimedata_qbase_disconnect_notify(void* self, void* signal) {
    QMimeData_QBaseDisconnectNotify((QMimeData*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMimeData* self, void (*slot)(QMimeData*, QMetaMethod*) ```
void q_mimedata_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QMimeData_OnDisconnectNotify((QMimeData*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMimeData* self ```
QObject* q_mimedata_sender(void* self) {
    return QMimeData_Sender((QMimeData*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMimeData* self ```
QObject* q_mimedata_qbase_sender(void* self) {
    return QMimeData_QBaseSender((QMimeData*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMimeData* self, QObject* (*slot)() ```
void q_mimedata_on_sender(void* self, QObject* (*slot)()) {
    QMimeData_OnSender((QMimeData*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMimeData* self ```
int32_t q_mimedata_sender_signal_index(void* self) {
    return QMimeData_SenderSignalIndex((QMimeData*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMimeData* self ```
int32_t q_mimedata_qbase_sender_signal_index(void* self) {
    return QMimeData_QBaseSenderSignalIndex((QMimeData*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMimeData* self, int32_t (*slot)() ```
void q_mimedata_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QMimeData_OnSenderSignalIndex((QMimeData*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMimeData* self, const char* signal ```
int32_t q_mimedata_receivers(void* self, const char* signal) {
    return QMimeData_Receivers((QMimeData*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMimeData* self, const char* signal ```
int32_t q_mimedata_qbase_receivers(void* self, const char* signal) {
    return QMimeData_QBaseReceivers((QMimeData*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMimeData* self, int32_t (*slot)(QMimeData*, const char*) ```
void q_mimedata_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QMimeData_OnReceivers((QMimeData*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMimeData* self, QMetaMethod* signal ```
bool q_mimedata_is_signal_connected(void* self, void* signal) {
    return QMimeData_IsSignalConnected((QMimeData*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMimeData* self, QMetaMethod* signal ```
bool q_mimedata_qbase_is_signal_connected(void* self, void* signal) {
    return QMimeData_QBaseIsSignalConnected((QMimeData*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMimeData* self, bool (*slot)(QMimeData*, QMetaMethod*) ```
void q_mimedata_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QMimeData_OnIsSignalConnected((QMimeData*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QMimeData* self ```
void q_mimedata_delete(void* self) {
    QMimeData_Delete((QMimeData*)(self));
}