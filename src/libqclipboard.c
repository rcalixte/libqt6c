#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqimage.hpp"
#include "libqmetaobject.hpp"
#include "libqmimedata.hpp"
#include "libqobject.hpp"
#include "libqpixmap.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqclipboard.hpp"
#include "libqclipboard.h"

/// https://doc.qt.io/qt-6/qclipboard.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QClipboard* self ```
QMetaObject* q_clipboard_meta_object(void* self) {
    return QClipboard_MetaObject((QClipboard*)self);
}

/// ``` QClipboard* self, const char* param1 ```
void* q_clipboard_metacast(void* self, const char* param1) {
    return QClipboard_Metacast((QClipboard*)self, param1);
}

/// ``` QClipboard* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_clipboard_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QClipboard_Metacall((QClipboard*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_clipboard_tr(const char* s) {
    libqt_string _str = QClipboard_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#clear)
///
/// ``` QClipboard* self ```
void q_clipboard_clear(void* self) {
    QClipboard_Clear((QClipboard*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#supportsSelection)
///
/// ``` QClipboard* self ```
bool q_clipboard_supports_selection(void* self) {
    return QClipboard_SupportsSelection((QClipboard*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#supportsFindBuffer)
///
/// ``` QClipboard* self ```
bool q_clipboard_supports_find_buffer(void* self) {
    return QClipboard_SupportsFindBuffer((QClipboard*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#ownsSelection)
///
/// ``` QClipboard* self ```
bool q_clipboard_owns_selection(void* self) {
    return QClipboard_OwnsSelection((QClipboard*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#ownsClipboard)
///
/// ``` QClipboard* self ```
bool q_clipboard_owns_clipboard(void* self) {
    return QClipboard_OwnsClipboard((QClipboard*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#ownsFindBuffer)
///
/// ``` QClipboard* self ```
bool q_clipboard_owns_find_buffer(void* self) {
    return QClipboard_OwnsFindBuffer((QClipboard*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#text)
///
/// ``` QClipboard* self ```
const char* q_clipboard_text(void* self) {
    libqt_string _str = QClipboard_Text((QClipboard*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#text)
///
/// ``` QClipboard* self, const char* subtype ```
const char* q_clipboard_text_with_subtype(void* self, const char* subtype) {
    libqt_string _str = QClipboard_TextWithSubtype((QClipboard*)self, qstring(subtype));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#setText)
///
/// ``` QClipboard* self, const char* param1 ```
void q_clipboard_set_text(void* self, const char* param1) {
    QClipboard_SetText((QClipboard*)self, qstring(param1));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#mimeData)
///
/// ``` QClipboard* self ```
QMimeData* q_clipboard_mime_data(void* self) {
    return QClipboard_MimeData((QClipboard*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#setMimeData)
///
/// ``` QClipboard* self, QMimeData* data ```
void q_clipboard_set_mime_data(void* self, void* data) {
    QClipboard_SetMimeData((QClipboard*)self, (QMimeData*)data);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#image)
///
/// ``` QClipboard* self ```
QImage* q_clipboard_image(void* self) {
    return QClipboard_Image((QClipboard*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#pixmap)
///
/// ``` QClipboard* self ```
QPixmap* q_clipboard_pixmap(void* self) {
    return QClipboard_Pixmap((QClipboard*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#setImage)
///
/// ``` QClipboard* self, QImage* param1 ```
void q_clipboard_set_image(void* self, void* param1) {
    QClipboard_SetImage((QClipboard*)self, (QImage*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#setPixmap)
///
/// ``` QClipboard* self, QPixmap* param1 ```
void q_clipboard_set_pixmap(void* self, void* param1) {
    QClipboard_SetPixmap((QClipboard*)self, (QPixmap*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#changed)
///
/// ``` QClipboard* self, enum QClipboard__Mode mode ```
void q_clipboard_changed(void* self, int64_t mode) {
    QClipboard_Changed((QClipboard*)self, mode);
}

/// ``` QClipboard* self, void (*slot)(QClipboard*, enum QClipboard__Mode) ```
void q_clipboard_on_changed(void* self, void (*slot)(void*, int64_t)) {
    QClipboard_Connect_Changed((QClipboard*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#selectionChanged)
///
/// ``` QClipboard* self ```
void q_clipboard_selection_changed(void* self) {
    QClipboard_SelectionChanged((QClipboard*)self);
}

/// ``` QClipboard* self, void (*slot)(QClipboard*) ```
void q_clipboard_on_selection_changed(void* self, void (*slot)(void*)) {
    QClipboard_Connect_SelectionChanged((QClipboard*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#findBufferChanged)
///
/// ``` QClipboard* self ```
void q_clipboard_find_buffer_changed(void* self) {
    QClipboard_FindBufferChanged((QClipboard*)self);
}

/// ``` QClipboard* self, void (*slot)(QClipboard*) ```
void q_clipboard_on_find_buffer_changed(void* self, void (*slot)(void*)) {
    QClipboard_Connect_FindBufferChanged((QClipboard*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#dataChanged)
///
/// ``` QClipboard* self ```
void q_clipboard_data_changed(void* self) {
    QClipboard_DataChanged((QClipboard*)self);
}

/// ``` QClipboard* self, void (*slot)(QClipboard*) ```
void q_clipboard_on_data_changed(void* self, void (*slot)(void*)) {
    QClipboard_Connect_DataChanged((QClipboard*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_clipboard_tr2(const char* s, const char* c) {
    libqt_string _str = QClipboard_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_clipboard_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QClipboard_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#clear)
///
/// ``` QClipboard* self, enum QClipboard__Mode mode ```
void q_clipboard_clear1(void* self, int64_t mode) {
    QClipboard_Clear1((QClipboard*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#text)
///
/// ``` QClipboard* self, enum QClipboard__Mode mode ```
const char* q_clipboard_text1(void* self, int64_t mode) {
    libqt_string _str = QClipboard_Text1((QClipboard*)self, mode);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#text)
///
/// ``` QClipboard* self, const char* subtype, enum QClipboard__Mode mode ```
const char* q_clipboard_text2(void* self, const char* subtype, int64_t mode) {
    libqt_string _str = QClipboard_Text2((QClipboard*)self, qstring(subtype), mode);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#setText)
///
/// ``` QClipboard* self, const char* param1, enum QClipboard__Mode mode ```
void q_clipboard_set_text2(void* self, const char* param1, int64_t mode) {
    QClipboard_SetText2((QClipboard*)self, qstring(param1), mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#mimeData)
///
/// ``` QClipboard* self, enum QClipboard__Mode mode ```
QMimeData* q_clipboard_mime_data1(void* self, int64_t mode) {
    return QClipboard_MimeData1((QClipboard*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#setMimeData)
///
/// ``` QClipboard* self, QMimeData* data, enum QClipboard__Mode mode ```
void q_clipboard_set_mime_data2(void* self, void* data, int64_t mode) {
    QClipboard_SetMimeData2((QClipboard*)self, (QMimeData*)data, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#image)
///
/// ``` QClipboard* self, enum QClipboard__Mode mode ```
QImage* q_clipboard_image1(void* self, int64_t mode) {
    return QClipboard_Image1((QClipboard*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#pixmap)
///
/// ``` QClipboard* self, enum QClipboard__Mode mode ```
QPixmap* q_clipboard_pixmap1(void* self, int64_t mode) {
    return QClipboard_Pixmap1((QClipboard*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#setImage)
///
/// ``` QClipboard* self, QImage* param1, enum QClipboard__Mode mode ```
void q_clipboard_set_image2(void* self, void* param1, int64_t mode) {
    QClipboard_SetImage2((QClipboard*)self, (QImage*)param1, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#setPixmap)
///
/// ``` QClipboard* self, QPixmap* param1, enum QClipboard__Mode mode ```
void q_clipboard_set_pixmap2(void* self, void* param1, int64_t mode) {
    QClipboard_SetPixmap2((QClipboard*)self, (QPixmap*)param1, mode);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QClipboard* self, QEvent* event ```
bool q_clipboard_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QClipboard* self, QObject* watched, QEvent* event ```
bool q_clipboard_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QClipboard* self ```
const char* q_clipboard_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QClipboard* self, const char* name ```
void q_clipboard_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QClipboard* self ```
bool q_clipboard_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QClipboard* self ```
bool q_clipboard_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QClipboard* self ```
bool q_clipboard_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QClipboard* self ```
bool q_clipboard_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QClipboard* self, bool b ```
bool q_clipboard_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QClipboard* self ```
QThread* q_clipboard_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QClipboard* self, QThread* thread ```
void q_clipboard_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QClipboard* self, int interval ```
int32_t q_clipboard_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QClipboard* self, int id ```
void q_clipboard_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QClipboard* self ```
libqt_list /* of QObject* */ q_clipboard_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QClipboard* self, QObject* parent ```
void q_clipboard_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QClipboard* self, QObject* filterObj ```
void q_clipboard_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QClipboard* self, QObject* obj ```
void q_clipboard_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_clipboard_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QClipboard* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_clipboard_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_clipboard_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_clipboard_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QClipboard* self ```
void q_clipboard_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QClipboard* self ```
void q_clipboard_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QClipboard* self, const char* name, QVariant* value ```
bool q_clipboard_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QClipboard* self, const char* name ```
QVariant* q_clipboard_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QClipboard* self ```
const char** q_clipboard_dynamic_property_names(void* self) {
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
/// ``` QClipboard* self ```
QBindingStorage* q_clipboard_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QClipboard* self ```
QBindingStorage* q_clipboard_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QClipboard* self ```
void q_clipboard_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QClipboard* self, void (*slot)(QObject*) ```
void q_clipboard_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QClipboard* self ```
QObject* q_clipboard_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QClipboard* self, const char* classname ```
bool q_clipboard_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QClipboard* self ```
void q_clipboard_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QClipboard* self, int interval, enum Qt__TimerType timerType ```
int32_t q_clipboard_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_clipboard_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QClipboard* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_clipboard_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QClipboard* self, QObject* param1 ```
void q_clipboard_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QClipboard* self, void (*slot)(QObject*, QObject*) ```
void q_clipboard_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}
