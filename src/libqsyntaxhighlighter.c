#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqcolor.hpp"
#include "libqfont.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqtextobject.hpp"
#include "libqtextformat.hpp"
#include "libqtextdocument.hpp"
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqsyntaxhighlighter.hpp"
#include "libqsyntaxhighlighter.h"

/// https://doc.qt.io/qt-6/qsyntaxhighlighter.html

/// q_syntaxhighlighter_new constructs a new QSyntaxHighlighter object.
///
/// ``` QObject* parent ```
QSyntaxHighlighter* q_syntaxhighlighter_new(void* parent) {
    return QSyntaxHighlighter_new((QObject*)parent);
}

/// q_syntaxhighlighter_new2 constructs a new QSyntaxHighlighter object.
///
/// ``` QTextDocument* parent ```
QSyntaxHighlighter* q_syntaxhighlighter_new2(void* parent) {
    return QSyntaxHighlighter_new2((QTextDocument*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSyntaxHighlighter* self ```
QMetaObject* q_syntaxhighlighter_meta_object(void* self) {
    return QSyntaxHighlighter_MetaObject((QSyntaxHighlighter*)self);
}

/// ``` QSyntaxHighlighter* self, const char* param1 ```
void* q_syntaxhighlighter_metacast(void* self, const char* param1) {
    return QSyntaxHighlighter_Metacast((QSyntaxHighlighter*)self, param1);
}

/// ``` QSyntaxHighlighter* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_syntaxhighlighter_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSyntaxHighlighter_Metacall((QSyntaxHighlighter*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QSyntaxHighlighter* self, int32_t (*slot)(QSyntaxHighlighter*, enum QMetaObject__Call, int, void*) ```
void q_syntaxhighlighter_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QSyntaxHighlighter_OnMetacall((QSyntaxHighlighter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSyntaxHighlighter* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_syntaxhighlighter_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSyntaxHighlighter_QBaseMetacall((QSyntaxHighlighter*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_syntaxhighlighter_tr(const char* s) {
    libqt_string _str = QSyntaxHighlighter_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setDocument)
///
/// ``` QSyntaxHighlighter* self, QTextDocument* doc ```
void q_syntaxhighlighter_set_document(void* self, void* doc) {
    QSyntaxHighlighter_SetDocument((QSyntaxHighlighter*)self, (QTextDocument*)doc);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#document)
///
/// ``` QSyntaxHighlighter* self ```
QTextDocument* q_syntaxhighlighter_document(void* self) {
    return QSyntaxHighlighter_Document((QSyntaxHighlighter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlight)
///
/// ``` QSyntaxHighlighter* self ```
void q_syntaxhighlighter_rehighlight(void* self) {
    QSyntaxHighlighter_Rehighlight((QSyntaxHighlighter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlightBlock)
///
/// ``` QSyntaxHighlighter* self, QTextBlock* block ```
void q_syntaxhighlighter_rehighlight_block(void* self, void* block) {
    QSyntaxHighlighter_RehighlightBlock((QSyntaxHighlighter*)self, (QTextBlock*)block);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#highlightBlock)
///
/// ``` QSyntaxHighlighter* self, const char* text ```
void q_syntaxhighlighter_highlight_block(void* self, const char* text) {
    QSyntaxHighlighter_HighlightBlock((QSyntaxHighlighter*)self, qstring(text));
}

/// Allows for overriding the related default method
///
/// ``` QSyntaxHighlighter* self, void (*slot)(QSyntaxHighlighter*, const char*) ```
void q_syntaxhighlighter_on_highlight_block(void* self, void (*slot)(void*, const char*)) {
    QSyntaxHighlighter_OnHighlightBlock((QSyntaxHighlighter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSyntaxHighlighter* self, const char* text ```
void q_syntaxhighlighter_qbase_highlight_block(void* self, const char* text) {
    QSyntaxHighlighter_QBaseHighlightBlock((QSyntaxHighlighter*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
///
/// ``` QSyntaxHighlighter* self, int start, int count, QTextCharFormat* format ```
void q_syntaxhighlighter_set_format(void* self, int start, int count, void* format) {
    QSyntaxHighlighter_SetFormat((QSyntaxHighlighter*)self, start, count, (QTextCharFormat*)format);
}

/// Allows for overriding the related default method
///
/// ``` QSyntaxHighlighter* self, void (*slot)(QSyntaxHighlighter*, int, int, QTextCharFormat*) ```
void q_syntaxhighlighter_on_set_format(void* self, void (*slot)(void*, int, int, void*)) {
    QSyntaxHighlighter_OnSetFormat((QSyntaxHighlighter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSyntaxHighlighter* self, int start, int count, QTextCharFormat* format ```
void q_syntaxhighlighter_qbase_set_format(void* self, int start, int count, void* format) {
    QSyntaxHighlighter_QBaseSetFormat((QSyntaxHighlighter*)self, start, count, (QTextCharFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
///
/// ``` QSyntaxHighlighter* self, int start, int count, QColor* color ```
void q_syntaxhighlighter_set_format2(void* self, int start, int count, void* color) {
    QSyntaxHighlighter_SetFormat2((QSyntaxHighlighter*)self, start, count, (QColor*)color);
}

/// Allows for overriding the related default method
///
/// ``` QSyntaxHighlighter* self, void (*slot)(QSyntaxHighlighter*, int, int, QColor*) ```
void q_syntaxhighlighter_on_set_format2(void* self, void (*slot)(void*, int, int, void*)) {
    QSyntaxHighlighter_OnSetFormat2((QSyntaxHighlighter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSyntaxHighlighter* self, int start, int count, QColor* color ```
void q_syntaxhighlighter_qbase_set_format2(void* self, int start, int count, void* color) {
    QSyntaxHighlighter_QBaseSetFormat2((QSyntaxHighlighter*)self, start, count, (QColor*)color);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
///
/// ``` QSyntaxHighlighter* self, int start, int count, QFont* font ```
void q_syntaxhighlighter_set_format3(void* self, int start, int count, void* font) {
    QSyntaxHighlighter_SetFormat3((QSyntaxHighlighter*)self, start, count, (QFont*)font);
}

/// Allows for overriding the related default method
///
/// ``` QSyntaxHighlighter* self, void (*slot)(QSyntaxHighlighter*, int, int, QFont*) ```
void q_syntaxhighlighter_on_set_format3(void* self, void (*slot)(void*, int, int, void*)) {
    QSyntaxHighlighter_OnSetFormat3((QSyntaxHighlighter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSyntaxHighlighter* self, int start, int count, QFont* font ```
void q_syntaxhighlighter_qbase_set_format3(void* self, int start, int count, void* font) {
    QSyntaxHighlighter_QBaseSetFormat3((QSyntaxHighlighter*)self, start, count, (QFont*)font);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
///
/// ``` QSyntaxHighlighter* self, int pos ```
QTextCharFormat* q_syntaxhighlighter_format(void* self, int pos) {
    return QSyntaxHighlighter_Format((QSyntaxHighlighter*)self, pos);
}

/// Allows for overriding the related default method
///
/// ``` QSyntaxHighlighter* self, QTextCharFormat* (*slot)(QSyntaxHighlighter*, int) ```
void q_syntaxhighlighter_on_format(void* self, QTextCharFormat* (*slot)(void*, int)) {
    QSyntaxHighlighter_OnFormat((QSyntaxHighlighter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSyntaxHighlighter* self, int pos ```
QTextCharFormat* q_syntaxhighlighter_qbase_format(void* self, int pos) {
    return QSyntaxHighlighter_QBaseFormat((QSyntaxHighlighter*)self, pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
///
/// ``` QSyntaxHighlighter* self ```
int32_t q_syntaxhighlighter_previous_block_state(void* self) {
    return QSyntaxHighlighter_PreviousBlockState((QSyntaxHighlighter*)self);
}

/// Allows for overriding the related default method
///
/// ``` QSyntaxHighlighter* self, int32_t (*slot)() ```
void q_syntaxhighlighter_on_previous_block_state(void* self, int32_t (*slot)()) {
    QSyntaxHighlighter_OnPreviousBlockState((QSyntaxHighlighter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSyntaxHighlighter* self ```
int32_t q_syntaxhighlighter_qbase_previous_block_state(void* self) {
    return QSyntaxHighlighter_QBasePreviousBlockState((QSyntaxHighlighter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
///
/// ``` QSyntaxHighlighter* self ```
int32_t q_syntaxhighlighter_current_block_state(void* self) {
    return QSyntaxHighlighter_CurrentBlockState((QSyntaxHighlighter*)self);
}

/// Allows for overriding the related default method
///
/// ``` QSyntaxHighlighter* self, int32_t (*slot)() ```
void q_syntaxhighlighter_on_current_block_state(void* self, int32_t (*slot)()) {
    QSyntaxHighlighter_OnCurrentBlockState((QSyntaxHighlighter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSyntaxHighlighter* self ```
int32_t q_syntaxhighlighter_qbase_current_block_state(void* self) {
    return QSyntaxHighlighter_QBaseCurrentBlockState((QSyntaxHighlighter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
///
/// ``` QSyntaxHighlighter* self, int newState ```
void q_syntaxhighlighter_set_current_block_state(void* self, int newState) {
    QSyntaxHighlighter_SetCurrentBlockState((QSyntaxHighlighter*)self, newState);
}

/// Allows for overriding the related default method
///
/// ``` QSyntaxHighlighter* self, void (*slot)(QSyntaxHighlighter*, int) ```
void q_syntaxhighlighter_on_set_current_block_state(void* self, void (*slot)(void*, int)) {
    QSyntaxHighlighter_OnSetCurrentBlockState((QSyntaxHighlighter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSyntaxHighlighter* self, int newState ```
void q_syntaxhighlighter_qbase_set_current_block_state(void* self, int newState) {
    QSyntaxHighlighter_QBaseSetCurrentBlockState((QSyntaxHighlighter*)self, newState);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
///
/// ``` QSyntaxHighlighter* self, QTextBlockUserData* data ```
void q_syntaxhighlighter_set_current_block_user_data(void* self, void* data) {
    QSyntaxHighlighter_SetCurrentBlockUserData((QSyntaxHighlighter*)self, (QTextBlockUserData*)data);
}

/// Allows for overriding the related default method
///
/// ``` QSyntaxHighlighter* self, void (*slot)(QSyntaxHighlighter*, QTextBlockUserData*) ```
void q_syntaxhighlighter_on_set_current_block_user_data(void* self, void (*slot)(void*, void*)) {
    QSyntaxHighlighter_OnSetCurrentBlockUserData((QSyntaxHighlighter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSyntaxHighlighter* self, QTextBlockUserData* data ```
void q_syntaxhighlighter_qbase_set_current_block_user_data(void* self, void* data) {
    QSyntaxHighlighter_QBaseSetCurrentBlockUserData((QSyntaxHighlighter*)self, (QTextBlockUserData*)data);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
///
/// ``` QSyntaxHighlighter* self ```
QTextBlockUserData* q_syntaxhighlighter_current_block_user_data(void* self) {
    return QSyntaxHighlighter_CurrentBlockUserData((QSyntaxHighlighter*)self);
}

/// Allows for overriding the related default method
///
/// ``` QSyntaxHighlighter* self, QTextBlockUserData* (*slot)() ```
void q_syntaxhighlighter_on_current_block_user_data(void* self, QTextBlockUserData* (*slot)()) {
    QSyntaxHighlighter_OnCurrentBlockUserData((QSyntaxHighlighter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSyntaxHighlighter* self ```
QTextBlockUserData* q_syntaxhighlighter_qbase_current_block_user_data(void* self) {
    return QSyntaxHighlighter_QBaseCurrentBlockUserData((QSyntaxHighlighter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
///
/// ``` QSyntaxHighlighter* self ```
QTextBlock* q_syntaxhighlighter_current_block(void* self) {
    return QSyntaxHighlighter_CurrentBlock((QSyntaxHighlighter*)self);
}

/// Allows for overriding the related default method
///
/// ``` QSyntaxHighlighter* self, QTextBlock* (*slot)() ```
void q_syntaxhighlighter_on_current_block(void* self, QTextBlock* (*slot)()) {
    QSyntaxHighlighter_OnCurrentBlock((QSyntaxHighlighter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSyntaxHighlighter* self ```
QTextBlock* q_syntaxhighlighter_qbase_current_block(void* self) {
    return QSyntaxHighlighter_QBaseCurrentBlock((QSyntaxHighlighter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_syntaxhighlighter_tr2(const char* s, const char* c) {
    libqt_string _str = QSyntaxHighlighter_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_syntaxhighlighter_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSyntaxHighlighter_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSyntaxHighlighter* self ```
const char* q_syntaxhighlighter_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSyntaxHighlighter* self, const char* name ```
void q_syntaxhighlighter_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSyntaxHighlighter* self ```
bool q_syntaxhighlighter_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSyntaxHighlighter* self ```
bool q_syntaxhighlighter_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSyntaxHighlighter* self ```
bool q_syntaxhighlighter_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSyntaxHighlighter* self ```
bool q_syntaxhighlighter_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSyntaxHighlighter* self, bool b ```
bool q_syntaxhighlighter_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSyntaxHighlighter* self ```
QThread* q_syntaxhighlighter_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSyntaxHighlighter* self, QThread* thread ```
void q_syntaxhighlighter_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSyntaxHighlighter* self, int interval ```
int32_t q_syntaxhighlighter_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSyntaxHighlighter* self, int id ```
void q_syntaxhighlighter_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSyntaxHighlighter* self ```
libqt_list /* of QObject* */ q_syntaxhighlighter_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSyntaxHighlighter* self, QObject* parent ```
void q_syntaxhighlighter_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSyntaxHighlighter* self, QObject* filterObj ```
void q_syntaxhighlighter_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSyntaxHighlighter* self, QObject* obj ```
void q_syntaxhighlighter_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_syntaxhighlighter_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSyntaxHighlighter* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_syntaxhighlighter_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_syntaxhighlighter_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_syntaxhighlighter_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSyntaxHighlighter* self ```
void q_syntaxhighlighter_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSyntaxHighlighter* self ```
void q_syntaxhighlighter_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSyntaxHighlighter* self, const char* name, QVariant* value ```
bool q_syntaxhighlighter_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSyntaxHighlighter* self, const char* name ```
QVariant* q_syntaxhighlighter_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSyntaxHighlighter* self ```
const char** q_syntaxhighlighter_dynamic_property_names(void* self) {
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
/// ``` QSyntaxHighlighter* self ```
QBindingStorage* q_syntaxhighlighter_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSyntaxHighlighter* self ```
QBindingStorage* q_syntaxhighlighter_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSyntaxHighlighter* self ```
void q_syntaxhighlighter_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QSyntaxHighlighter* self, void (*slot)(QObject*) ```
void q_syntaxhighlighter_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSyntaxHighlighter* self ```
QObject* q_syntaxhighlighter_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSyntaxHighlighter* self, const char* classname ```
bool q_syntaxhighlighter_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSyntaxHighlighter* self ```
void q_syntaxhighlighter_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSyntaxHighlighter* self, int interval, enum Qt__TimerType timerType ```
int32_t q_syntaxhighlighter_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_syntaxhighlighter_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSyntaxHighlighter* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_syntaxhighlighter_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSyntaxHighlighter* self, QObject* param1 ```
void q_syntaxhighlighter_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QSyntaxHighlighter* self, void (*slot)(QObject*, QObject*) ```
void q_syntaxhighlighter_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QEvent* event ```
bool q_syntaxhighlighter_event(void* self, void* event) {
    return QSyntaxHighlighter_Event((QSyntaxHighlighter*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QEvent* event ```
bool q_syntaxhighlighter_qbase_event(void* self, void* event) {
    return QSyntaxHighlighter_QBaseEvent((QSyntaxHighlighter*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, bool (*slot)(QSyntaxHighlighter*, QEvent*) ```
void q_syntaxhighlighter_on_event(void* self, bool (*slot)(void*, void*)) {
    QSyntaxHighlighter_OnEvent((QSyntaxHighlighter*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QObject* watched, QEvent* event ```
bool q_syntaxhighlighter_event_filter(void* self, void* watched, void* event) {
    return QSyntaxHighlighter_EventFilter((QSyntaxHighlighter*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QObject* watched, QEvent* event ```
bool q_syntaxhighlighter_qbase_event_filter(void* self, void* watched, void* event) {
    return QSyntaxHighlighter_QBaseEventFilter((QSyntaxHighlighter*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, bool (*slot)(QSyntaxHighlighter*, QObject*, QEvent*) ```
void q_syntaxhighlighter_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QSyntaxHighlighter_OnEventFilter((QSyntaxHighlighter*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QTimerEvent* event ```
void q_syntaxhighlighter_timer_event(void* self, void* event) {
    QSyntaxHighlighter_TimerEvent((QSyntaxHighlighter*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QTimerEvent* event ```
void q_syntaxhighlighter_qbase_timer_event(void* self, void* event) {
    QSyntaxHighlighter_QBaseTimerEvent((QSyntaxHighlighter*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, void (*slot)(QSyntaxHighlighter*, QTimerEvent*) ```
void q_syntaxhighlighter_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QSyntaxHighlighter_OnTimerEvent((QSyntaxHighlighter*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QChildEvent* event ```
void q_syntaxhighlighter_child_event(void* self, void* event) {
    QSyntaxHighlighter_ChildEvent((QSyntaxHighlighter*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QChildEvent* event ```
void q_syntaxhighlighter_qbase_child_event(void* self, void* event) {
    QSyntaxHighlighter_QBaseChildEvent((QSyntaxHighlighter*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, void (*slot)(QSyntaxHighlighter*, QChildEvent*) ```
void q_syntaxhighlighter_on_child_event(void* self, void (*slot)(void*, void*)) {
    QSyntaxHighlighter_OnChildEvent((QSyntaxHighlighter*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QEvent* event ```
void q_syntaxhighlighter_custom_event(void* self, void* event) {
    QSyntaxHighlighter_CustomEvent((QSyntaxHighlighter*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QEvent* event ```
void q_syntaxhighlighter_qbase_custom_event(void* self, void* event) {
    QSyntaxHighlighter_QBaseCustomEvent((QSyntaxHighlighter*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, void (*slot)(QSyntaxHighlighter*, QEvent*) ```
void q_syntaxhighlighter_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QSyntaxHighlighter_OnCustomEvent((QSyntaxHighlighter*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QMetaMethod* signal ```
void q_syntaxhighlighter_connect_notify(void* self, void* signal) {
    QSyntaxHighlighter_ConnectNotify((QSyntaxHighlighter*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QMetaMethod* signal ```
void q_syntaxhighlighter_qbase_connect_notify(void* self, void* signal) {
    QSyntaxHighlighter_QBaseConnectNotify((QSyntaxHighlighter*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, void (*slot)(QSyntaxHighlighter*, QMetaMethod*) ```
void q_syntaxhighlighter_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QSyntaxHighlighter_OnConnectNotify((QSyntaxHighlighter*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QMetaMethod* signal ```
void q_syntaxhighlighter_disconnect_notify(void* self, void* signal) {
    QSyntaxHighlighter_DisconnectNotify((QSyntaxHighlighter*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QMetaMethod* signal ```
void q_syntaxhighlighter_qbase_disconnect_notify(void* self, void* signal) {
    QSyntaxHighlighter_QBaseDisconnectNotify((QSyntaxHighlighter*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, void (*slot)(QSyntaxHighlighter*, QMetaMethod*) ```
void q_syntaxhighlighter_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QSyntaxHighlighter_OnDisconnectNotify((QSyntaxHighlighter*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSyntaxHighlighter* self ```
QObject* q_syntaxhighlighter_sender(void* self) {
    return QSyntaxHighlighter_Sender((QSyntaxHighlighter*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self ```
QObject* q_syntaxhighlighter_qbase_sender(void* self) {
    return QSyntaxHighlighter_QBaseSender((QSyntaxHighlighter*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QObject* (*slot)() ```
void q_syntaxhighlighter_on_sender(void* self, QObject* (*slot)()) {
    QSyntaxHighlighter_OnSender((QSyntaxHighlighter*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSyntaxHighlighter* self ```
int32_t q_syntaxhighlighter_sender_signal_index(void* self) {
    return QSyntaxHighlighter_SenderSignalIndex((QSyntaxHighlighter*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self ```
int32_t q_syntaxhighlighter_qbase_sender_signal_index(void* self) {
    return QSyntaxHighlighter_QBaseSenderSignalIndex((QSyntaxHighlighter*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, int32_t (*slot)() ```
void q_syntaxhighlighter_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QSyntaxHighlighter_OnSenderSignalIndex((QSyntaxHighlighter*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSyntaxHighlighter* self, const char* signal ```
int32_t q_syntaxhighlighter_receivers(void* self, const char* signal) {
    return QSyntaxHighlighter_Receivers((QSyntaxHighlighter*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, const char* signal ```
int32_t q_syntaxhighlighter_qbase_receivers(void* self, const char* signal) {
    return QSyntaxHighlighter_QBaseReceivers((QSyntaxHighlighter*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, int32_t (*slot)(QSyntaxHighlighter*, const char*) ```
void q_syntaxhighlighter_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QSyntaxHighlighter_OnReceivers((QSyntaxHighlighter*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QMetaMethod* signal ```
bool q_syntaxhighlighter_is_signal_connected(void* self, void* signal) {
    return QSyntaxHighlighter_IsSignalConnected((QSyntaxHighlighter*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QMetaMethod* signal ```
bool q_syntaxhighlighter_qbase_is_signal_connected(void* self, void* signal) {
    return QSyntaxHighlighter_QBaseIsSignalConnected((QSyntaxHighlighter*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, bool (*slot)(QSyntaxHighlighter*, QMetaMethod*) ```
void q_syntaxhighlighter_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QSyntaxHighlighter_OnIsSignalConnected((QSyntaxHighlighter*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QSyntaxHighlighter* self ```
void q_syntaxhighlighter_delete(void* self) {
    QSyntaxHighlighter_Delete((QSyntaxHighlighter*)(self));
}