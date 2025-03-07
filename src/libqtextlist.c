#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqtextobject.hpp"
#include "libqtextdocument.hpp"
#include "libqtextformat.hpp"
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqtextlist.hpp"
#include "libqtextlist.h"

/// https://doc.qt.io/qt-6/qtextlist.html

/// q_textlist_new constructs a new QTextList object.
///
/// ``` QTextDocument* doc ```
QTextList* q_textlist_new(void* doc) {
    return QTextList_new((QTextDocument*)doc);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTextList* self ```
QMetaObject* q_textlist_meta_object(void* self) {
    return QTextList_MetaObject((QTextList*)self);
}

/// ``` QTextList* self, const char* param1 ```
void* q_textlist_metacast(void* self, const char* param1) {
    return QTextList_Metacast((QTextList*)self, param1);
}

/// ``` QTextList* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_textlist_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTextList_Metacall((QTextList*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QTextList* self, int32_t (*slot)(QTextList*, enum QMetaObject__Call, int, void*) ```
void q_textlist_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QTextList_OnMetacall((QTextList*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextList* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_textlist_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTextList_QBaseMetacall((QTextList*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_textlist_tr(const char* s) {
    libqt_string _str = QTextList_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlist.html#count)
///
/// ``` QTextList* self ```
int32_t q_textlist_count(void* self) {
    return QTextList_Count((QTextList*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlist.html#item)
///
/// ``` QTextList* self, int i ```
QTextBlock* q_textlist_item(void* self, int i) {
    return QTextList_Item((QTextList*)self, i);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlist.html#itemNumber)
///
/// ``` QTextList* self, QTextBlock* param1 ```
int32_t q_textlist_item_number(void* self, void* param1) {
    return QTextList_ItemNumber((QTextList*)self, (QTextBlock*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlist.html#itemText)
///
/// ``` QTextList* self, QTextBlock* param1 ```
const char* q_textlist_item_text(void* self, void* param1) {
    libqt_string _str = QTextList_ItemText((QTextList*)self, (QTextBlock*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlist.html#removeItem)
///
/// ``` QTextList* self, int i ```
void q_textlist_remove_item(void* self, int i) {
    QTextList_RemoveItem((QTextList*)self, i);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlist.html#remove)
///
/// ``` QTextList* self, QTextBlock* param1 ```
void q_textlist_remove(void* self, void* param1) {
    QTextList_Remove((QTextList*)self, (QTextBlock*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlist.html#add)
///
/// ``` QTextList* self, QTextBlock* block ```
void q_textlist_add(void* self, void* block) {
    QTextList_Add((QTextList*)self, (QTextBlock*)block);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlist.html#setFormat)
///
/// ``` QTextList* self, QTextListFormat* format ```
void q_textlist_set_format(void* self, void* format) {
    QTextList_SetFormat((QTextList*)self, (QTextListFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlist.html#format)
///
/// ``` QTextList* self ```
QTextListFormat* q_textlist_format(void* self) {
    return QTextList_Format((QTextList*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_textlist_tr2(const char* s, const char* c) {
    libqt_string _str = QTextList_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_textlist_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTextList_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QTextObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#formatIndex)
///
/// ``` QTextList* self ```
int32_t q_textlist_format_index(void* self) {
    return QTextObject_FormatIndex((QTextObject*)self);
}

/// Inherited from QTextObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#document)
///
/// ``` QTextList* self ```
QTextDocument* q_textlist_document(void* self) {
    return QTextObject_Document((QTextObject*)self);
}

/// Inherited from QTextObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#objectIndex)
///
/// ``` QTextList* self ```
int32_t q_textlist_object_index(void* self) {
    return QTextObject_ObjectIndex((QTextObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTextList* self ```
const char* q_textlist_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTextList* self, const char* name ```
void q_textlist_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTextList* self ```
bool q_textlist_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTextList* self ```
bool q_textlist_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTextList* self ```
bool q_textlist_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTextList* self ```
bool q_textlist_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTextList* self, bool b ```
bool q_textlist_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTextList* self ```
QThread* q_textlist_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTextList* self, QThread* thread ```
void q_textlist_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTextList* self, int interval ```
int32_t q_textlist_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTextList* self, int id ```
void q_textlist_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTextList* self ```
libqt_list /* of QObject* */ q_textlist_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QTextList* self, QObject* parent ```
void q_textlist_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTextList* self, QObject* filterObj ```
void q_textlist_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTextList* self, QObject* obj ```
void q_textlist_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_textlist_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTextList* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_textlist_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_textlist_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_textlist_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTextList* self ```
void q_textlist_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTextList* self ```
void q_textlist_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTextList* self, const char* name, QVariant* value ```
bool q_textlist_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTextList* self, const char* name ```
QVariant* q_textlist_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTextList* self ```
const char** q_textlist_dynamic_property_names(void* self) {
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
/// ``` QTextList* self ```
QBindingStorage* q_textlist_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTextList* self ```
QBindingStorage* q_textlist_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextList* self ```
void q_textlist_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QTextList* self, void (*slot)(QObject*) ```
void q_textlist_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTextList* self ```
QObject* q_textlist_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTextList* self, const char* classname ```
bool q_textlist_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTextList* self ```
void q_textlist_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTextList* self, int interval, enum Qt__TimerType timerType ```
int32_t q_textlist_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_textlist_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTextList* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_textlist_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextList* self, QObject* param1 ```
void q_textlist_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QTextList* self, void (*slot)(QObject*, QObject*) ```
void q_textlist_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QTextBlockGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockgroup.html#blockInserted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextList* self, QTextBlock* block ```
void q_textlist_block_inserted(void* self, void* block) {
    QTextList_BlockInserted((QTextList*)self, (QTextBlock*)block);
}

/// Inherited from QTextBlockGroup
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextList* self, QTextBlock* block ```
void q_textlist_qbase_block_inserted(void* self, void* block) {
    QTextList_QBaseBlockInserted((QTextList*)self, (QTextBlock*)block);
}

/// Inherited from QTextBlockGroup
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextList* self, void (*slot)(QTextList*, QTextBlock*) ```
void q_textlist_on_block_inserted(void* self, void (*slot)(void*, void*)) {
    QTextList_OnBlockInserted((QTextList*)self, (intptr_t)slot);
}

/// Inherited from QTextBlockGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockgroup.html#blockRemoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextList* self, QTextBlock* block ```
void q_textlist_block_removed(void* self, void* block) {
    QTextList_BlockRemoved((QTextList*)self, (QTextBlock*)block);
}

/// Inherited from QTextBlockGroup
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextList* self, QTextBlock* block ```
void q_textlist_qbase_block_removed(void* self, void* block) {
    QTextList_QBaseBlockRemoved((QTextList*)self, (QTextBlock*)block);
}

/// Inherited from QTextBlockGroup
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextList* self, void (*slot)(QTextList*, QTextBlock*) ```
void q_textlist_on_block_removed(void* self, void (*slot)(void*, void*)) {
    QTextList_OnBlockRemoved((QTextList*)self, (intptr_t)slot);
}

/// Inherited from QTextBlockGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockgroup.html#blockFormatChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextList* self, QTextBlock* block ```
void q_textlist_block_format_changed(void* self, void* block) {
    QTextList_BlockFormatChanged((QTextList*)self, (QTextBlock*)block);
}

/// Inherited from QTextBlockGroup
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextList* self, QTextBlock* block ```
void q_textlist_qbase_block_format_changed(void* self, void* block) {
    QTextList_QBaseBlockFormatChanged((QTextList*)self, (QTextBlock*)block);
}

/// Inherited from QTextBlockGroup
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextList* self, void (*slot)(QTextList*, QTextBlock*) ```
void q_textlist_on_block_format_changed(void* self, void (*slot)(void*, void*)) {
    QTextList_OnBlockFormatChanged((QTextList*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextList* self, QEvent* event ```
bool q_textlist_event(void* self, void* event) {
    return QTextList_Event((QTextList*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextList* self, QEvent* event ```
bool q_textlist_qbase_event(void* self, void* event) {
    return QTextList_QBaseEvent((QTextList*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextList* self, bool (*slot)(QTextList*, QEvent*) ```
void q_textlist_on_event(void* self, bool (*slot)(void*, void*)) {
    QTextList_OnEvent((QTextList*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextList* self, QObject* watched, QEvent* event ```
bool q_textlist_event_filter(void* self, void* watched, void* event) {
    return QTextList_EventFilter((QTextList*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextList* self, QObject* watched, QEvent* event ```
bool q_textlist_qbase_event_filter(void* self, void* watched, void* event) {
    return QTextList_QBaseEventFilter((QTextList*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextList* self, bool (*slot)(QTextList*, QObject*, QEvent*) ```
void q_textlist_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QTextList_OnEventFilter((QTextList*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextList* self, QTimerEvent* event ```
void q_textlist_timer_event(void* self, void* event) {
    QTextList_TimerEvent((QTextList*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextList* self, QTimerEvent* event ```
void q_textlist_qbase_timer_event(void* self, void* event) {
    QTextList_QBaseTimerEvent((QTextList*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextList* self, void (*slot)(QTextList*, QTimerEvent*) ```
void q_textlist_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QTextList_OnTimerEvent((QTextList*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextList* self, QChildEvent* event ```
void q_textlist_child_event(void* self, void* event) {
    QTextList_ChildEvent((QTextList*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextList* self, QChildEvent* event ```
void q_textlist_qbase_child_event(void* self, void* event) {
    QTextList_QBaseChildEvent((QTextList*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextList* self, void (*slot)(QTextList*, QChildEvent*) ```
void q_textlist_on_child_event(void* self, void (*slot)(void*, void*)) {
    QTextList_OnChildEvent((QTextList*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextList* self, QEvent* event ```
void q_textlist_custom_event(void* self, void* event) {
    QTextList_CustomEvent((QTextList*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextList* self, QEvent* event ```
void q_textlist_qbase_custom_event(void* self, void* event) {
    QTextList_QBaseCustomEvent((QTextList*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextList* self, void (*slot)(QTextList*, QEvent*) ```
void q_textlist_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QTextList_OnCustomEvent((QTextList*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextList* self, QMetaMethod* signal ```
void q_textlist_connect_notify(void* self, void* signal) {
    QTextList_ConnectNotify((QTextList*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextList* self, QMetaMethod* signal ```
void q_textlist_qbase_connect_notify(void* self, void* signal) {
    QTextList_QBaseConnectNotify((QTextList*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextList* self, void (*slot)(QTextList*, QMetaMethod*) ```
void q_textlist_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QTextList_OnConnectNotify((QTextList*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextList* self, QMetaMethod* signal ```
void q_textlist_disconnect_notify(void* self, void* signal) {
    QTextList_DisconnectNotify((QTextList*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextList* self, QMetaMethod* signal ```
void q_textlist_qbase_disconnect_notify(void* self, void* signal) {
    QTextList_QBaseDisconnectNotify((QTextList*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextList* self, void (*slot)(QTextList*, QMetaMethod*) ```
void q_textlist_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QTextList_OnDisconnectNotify((QTextList*)self, (intptr_t)slot);
}

/// Inherited from QTextBlockGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockgroup.html#blockList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextList* self ```
libqt_list /* of QTextBlock* */ q_textlist_block_list(void* self) {
    libqt_list _arr = QTextList_BlockList((QTextList*)self);
    return _arr;
}

/// Inherited from QTextBlockGroup
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextList* self ```
libqt_list /* of QTextBlock* */ q_textlist_qbase_block_list(void* self) {
    libqt_list _arr = QTextList_QBaseBlockList((QTextList*)self);
    return _arr;
}

/// Inherited from QTextBlockGroup
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextList* self, libqt_list /* of QTextBlock* */ (*slot)() ```
void q_textlist_on_block_list(void* self, libqt_list /* of QTextBlock* */ (*slot)()) {
    QTextList_OnBlockList((QTextList*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextList* self ```
QObject* q_textlist_sender(void* self) {
    return QTextList_Sender((QTextList*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextList* self ```
QObject* q_textlist_qbase_sender(void* self) {
    return QTextList_QBaseSender((QTextList*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextList* self, QObject* (*slot)() ```
void q_textlist_on_sender(void* self, QObject* (*slot)()) {
    QTextList_OnSender((QTextList*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextList* self ```
int32_t q_textlist_sender_signal_index(void* self) {
    return QTextList_SenderSignalIndex((QTextList*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextList* self ```
int32_t q_textlist_qbase_sender_signal_index(void* self) {
    return QTextList_QBaseSenderSignalIndex((QTextList*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextList* self, int32_t (*slot)() ```
void q_textlist_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QTextList_OnSenderSignalIndex((QTextList*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextList* self, const char* signal ```
int32_t q_textlist_receivers(void* self, const char* signal) {
    return QTextList_Receivers((QTextList*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextList* self, const char* signal ```
int32_t q_textlist_qbase_receivers(void* self, const char* signal) {
    return QTextList_QBaseReceivers((QTextList*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextList* self, int32_t (*slot)(QTextList*, const char*) ```
void q_textlist_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QTextList_OnReceivers((QTextList*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextList* self, QMetaMethod* signal ```
bool q_textlist_is_signal_connected(void* self, void* signal) {
    return QTextList_IsSignalConnected((QTextList*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextList* self, QMetaMethod* signal ```
bool q_textlist_qbase_is_signal_connected(void* self, void* signal) {
    return QTextList_QBaseIsSignalConnected((QTextList*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextList* self, bool (*slot)(QTextList*, QMetaMethod*) ```
void q_textlist_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QTextList_OnIsSignalConnected((QTextList*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QTextList* self ```
void q_textlist_delete(void* self) {
    QTextList_Delete((QTextList*)(self));
}