#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "libqscilexer.hpp"
#include "../libqcoreevent.hpp"
#include "libqscilexerdiff.hpp"
#include "libqscilexerdiff.h"

/// https://doc.qt.io/qt-6/qscilexerdiff.html

/// q_scilexerdiff_new constructs a new QsciLexerDiff object.
///
///
QsciLexerDiff* q_scilexerdiff_new() {
    return QsciLexerDiff_new();
}

/// q_scilexerdiff_new2 constructs a new QsciLexerDiff object.
///
/// ``` QObject* parent ```
QsciLexerDiff* q_scilexerdiff_new2(void* parent) {
    return QsciLexerDiff_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerDiff* self ```
QMetaObject* q_scilexerdiff_meta_object(void* self) {
    return QsciLexerDiff_MetaObject((QsciLexerDiff*)self);
}

/// ``` QsciLexerDiff* self, const char* param1 ```
void* q_scilexerdiff_metacast(void* self, const char* param1) {
    return QsciLexerDiff_Metacast((QsciLexerDiff*)self, param1);
}

/// ``` QsciLexerDiff* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerdiff_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerDiff_Metacall((QsciLexerDiff*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerDiff* self, int32_t (*slot)(QsciLexerDiff*, enum QMetaObject__Call, int, void*) ```
void q_scilexerdiff_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerDiff_OnMetacall((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerDiff* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerdiff_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerDiff_QBaseMetacall((QsciLexerDiff*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexerdiff_tr(const char* s) {
    libqt_string _str = QsciLexerDiff_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerdiff.html#language)
///
/// ``` QsciLexerDiff* self ```
const char* q_scilexerdiff_language(void* self) {
    return QsciLexerDiff_Language((QsciLexerDiff*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerdiff.html#lexer)
///
/// ``` QsciLexerDiff* self ```
const char* q_scilexerdiff_lexer(void* self) {
    return QsciLexerDiff_Lexer((QsciLexerDiff*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerdiff.html#wordCharacters)
///
/// ``` QsciLexerDiff* self ```
const char* q_scilexerdiff_word_characters(void* self) {
    return QsciLexerDiff_WordCharacters((QsciLexerDiff*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerdiff.html#defaultColor)
///
/// ``` QsciLexerDiff* self, int style ```
QColor* q_scilexerdiff_default_color(void* self, int style) {
    return QsciLexerDiff_DefaultColor((QsciLexerDiff*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerdiff.html#description)
///
/// ``` QsciLexerDiff* self, int style ```
const char* q_scilexerdiff_description(void* self, int style) {
    libqt_string _str = QsciLexerDiff_Description((QsciLexerDiff*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexerdiff_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerDiff_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexerdiff_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerDiff_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerDiff* self ```
QsciAbstractAPIs* q_scilexerdiff_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerDiff* self ```
int32_t q_scilexerdiff_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// ``` QsciLexerDiff* self ```
QFont* q_scilexerdiff_default_font(void* self) {
    return QsciLexer_DefaultFont((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// ``` QsciLexerDiff* self ```
QColor* q_scilexerdiff_default_paper(void* self) {
    return QsciLexer_DefaultPaper((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerDiff* self ```
QsciScintilla* q_scilexerdiff_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerDiff* self, QsciAbstractAPIs* apis ```
void q_scilexerdiff_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerDiff* self, QColor* c ```
void q_scilexerdiff_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerDiff* self, QFont* f ```
void q_scilexerdiff_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerDiff* self, QColor* c ```
void q_scilexerdiff_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerDiff* self, QSettings* qs ```
bool q_scilexerdiff_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerDiff* self, QSettings* qs ```
bool q_scilexerdiff_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerDiff* self, QColor* c, int style ```
void q_scilexerdiff_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerDiff* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerdiff_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerDiff* self, bool eolfilled, int style ```
void q_scilexerdiff_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerDiff* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexerdiff_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerDiff* self, QFont* f, int style ```
void q_scilexerdiff_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerDiff* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexerdiff_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerDiff* self, QColor* c, int style ```
void q_scilexerdiff_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerDiff* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerdiff_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerDiff* self, const char* prop, const char* val ```
void q_scilexerdiff_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerDiff* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexerdiff_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerDiff* self, QSettings* qs, const char* prefix ```
bool q_scilexerdiff_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerDiff* self, QSettings* qs, const char* prefix ```
bool q_scilexerdiff_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerDiff* self ```
const char* q_scilexerdiff_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerDiff* self, const char* name ```
void q_scilexerdiff_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerDiff* self ```
bool q_scilexerdiff_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerDiff* self ```
bool q_scilexerdiff_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerDiff* self ```
bool q_scilexerdiff_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerDiff* self ```
bool q_scilexerdiff_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerDiff* self, bool b ```
bool q_scilexerdiff_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerDiff* self ```
QThread* q_scilexerdiff_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerDiff* self, QThread* thread ```
void q_scilexerdiff_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerDiff* self, int interval ```
int32_t q_scilexerdiff_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerDiff* self, int id ```
void q_scilexerdiff_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerDiff* self ```
libqt_list /* of QObject* */ q_scilexerdiff_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerDiff* self, QObject* parent ```
void q_scilexerdiff_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerDiff* self, QObject* filterObj ```
void q_scilexerdiff_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerDiff* self, QObject* obj ```
void q_scilexerdiff_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexerdiff_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerDiff* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexerdiff_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexerdiff_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexerdiff_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerDiff* self ```
void q_scilexerdiff_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerDiff* self ```
void q_scilexerdiff_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerDiff* self, const char* name, QVariant* value ```
bool q_scilexerdiff_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerDiff* self, const char* name ```
QVariant* q_scilexerdiff_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerDiff* self ```
const char** q_scilexerdiff_dynamic_property_names(void* self) {
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
/// ``` QsciLexerDiff* self ```
QBindingStorage* q_scilexerdiff_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerDiff* self ```
QBindingStorage* q_scilexerdiff_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerDiff* self ```
void q_scilexerdiff_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexerDiff* self, void (*slot)(QObject*) ```
void q_scilexerdiff_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerDiff* self ```
QObject* q_scilexerdiff_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerDiff* self, const char* classname ```
bool q_scilexerdiff_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerDiff* self ```
void q_scilexerdiff_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerDiff* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexerdiff_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerdiff_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerDiff* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerdiff_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerDiff* self, QObject* param1 ```
void q_scilexerdiff_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexerDiff* self, void (*slot)(QObject*, QObject*) ```
void q_scilexerdiff_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self ```
int32_t q_scilexerdiff_lexer_id(void* self) {
    return QsciLexerDiff_LexerId((QsciLexerDiff*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self ```
int32_t q_scilexerdiff_qbase_lexer_id(void* self) {
    return QsciLexerDiff_QBaseLexerId((QsciLexerDiff*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, int32_t (*slot)() ```
void q_scilexerdiff_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerDiff_OnLexerId((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self ```
const char* q_scilexerdiff_auto_completion_fillups(void* self) {
    return QsciLexerDiff_AutoCompletionFillups((QsciLexerDiff*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self ```
const char* q_scilexerdiff_qbase_auto_completion_fillups(void* self) {
    return QsciLexerDiff_QBaseAutoCompletionFillups((QsciLexerDiff*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, const char* (*slot)() ```
void q_scilexerdiff_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerDiff_OnAutoCompletionFillups((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self ```
const char** q_scilexerdiff_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerDiff_AutoCompletionWordSeparators((QsciLexerDiff*)self);
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

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self ```
const char** q_scilexerdiff_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerDiff_QBaseAutoCompletionWordSeparators((QsciLexerDiff*)self);
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

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, const char** (*slot)() ```
void q_scilexerdiff_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerDiff_OnAutoCompletionWordSeparators((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self, int* style ```
const char* q_scilexerdiff_block_end(void* self, int* style) {
    return QsciLexerDiff_BlockEnd((QsciLexerDiff*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self, int* style ```
const char* q_scilexerdiff_qbase_block_end(void* self, int* style) {
    return QsciLexerDiff_QBaseBlockEnd((QsciLexerDiff*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, const char* (*slot)(QsciLexerDiff*, int*) ```
void q_scilexerdiff_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerDiff_OnBlockEnd((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self ```
int32_t q_scilexerdiff_block_lookback(void* self) {
    return QsciLexerDiff_BlockLookback((QsciLexerDiff*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self ```
int32_t q_scilexerdiff_qbase_block_lookback(void* self) {
    return QsciLexerDiff_QBaseBlockLookback((QsciLexerDiff*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, int32_t (*slot)() ```
void q_scilexerdiff_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerDiff_OnBlockLookback((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self, int* style ```
const char* q_scilexerdiff_block_start(void* self, int* style) {
    return QsciLexerDiff_BlockStart((QsciLexerDiff*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self, int* style ```
const char* q_scilexerdiff_qbase_block_start(void* self, int* style) {
    return QsciLexerDiff_QBaseBlockStart((QsciLexerDiff*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, const char* (*slot)(QsciLexerDiff*, int*) ```
void q_scilexerdiff_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerDiff_OnBlockStart((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self, int* style ```
const char* q_scilexerdiff_block_start_keyword(void* self, int* style) {
    return QsciLexerDiff_BlockStartKeyword((QsciLexerDiff*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self, int* style ```
const char* q_scilexerdiff_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerDiff_QBaseBlockStartKeyword((QsciLexerDiff*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, const char* (*slot)(QsciLexerDiff*, int*) ```
void q_scilexerdiff_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerDiff_OnBlockStartKeyword((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#braceStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self ```
int32_t q_scilexerdiff_brace_style(void* self) {
    return QsciLexerDiff_BraceStyle((QsciLexerDiff*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self ```
int32_t q_scilexerdiff_qbase_brace_style(void* self) {
    return QsciLexerDiff_QBaseBraceStyle((QsciLexerDiff*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, int32_t (*slot)() ```
void q_scilexerdiff_on_brace_style(void* self, int32_t (*slot)()) {
    QsciLexerDiff_OnBraceStyle((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self ```
bool q_scilexerdiff_case_sensitive(void* self) {
    return QsciLexerDiff_CaseSensitive((QsciLexerDiff*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self ```
bool q_scilexerdiff_qbase_case_sensitive(void* self) {
    return QsciLexerDiff_QBaseCaseSensitive((QsciLexerDiff*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, bool (*slot)() ```
void q_scilexerdiff_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerDiff_OnCaseSensitive((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self, int style ```
QColor* q_scilexerdiff_color(void* self, int style) {
    return QsciLexerDiff_Color((QsciLexerDiff*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self, int style ```
QColor* q_scilexerdiff_qbase_color(void* self, int style) {
    return QsciLexerDiff_QBaseColor((QsciLexerDiff*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, QColor* (*slot)(QsciLexerDiff*, int) ```
void q_scilexerdiff_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerDiff_OnColor((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self, int style ```
bool q_scilexerdiff_eol_fill(void* self, int style) {
    return QsciLexerDiff_EolFill((QsciLexerDiff*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self, int style ```
bool q_scilexerdiff_qbase_eol_fill(void* self, int style) {
    return QsciLexerDiff_QBaseEolFill((QsciLexerDiff*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, bool (*slot)(QsciLexerDiff*, int) ```
void q_scilexerdiff_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerDiff_OnEolFill((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self, int style ```
QFont* q_scilexerdiff_font(void* self, int style) {
    return QsciLexerDiff_Font((QsciLexerDiff*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self, int style ```
QFont* q_scilexerdiff_qbase_font(void* self, int style) {
    return QsciLexerDiff_QBaseFont((QsciLexerDiff*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, QFont* (*slot)(QsciLexerDiff*, int) ```
void q_scilexerdiff_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerDiff_OnFont((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self ```
int32_t q_scilexerdiff_indentation_guide_view(void* self) {
    return QsciLexerDiff_IndentationGuideView((QsciLexerDiff*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self ```
int32_t q_scilexerdiff_qbase_indentation_guide_view(void* self) {
    return QsciLexerDiff_QBaseIndentationGuideView((QsciLexerDiff*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, int32_t (*slot)() ```
void q_scilexerdiff_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerDiff_OnIndentationGuideView((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#keywords)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self, int set ```
const char* q_scilexerdiff_keywords(void* self, int set) {
    return QsciLexerDiff_Keywords((QsciLexerDiff*)self, set);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self, int set ```
const char* q_scilexerdiff_qbase_keywords(void* self, int set) {
    return QsciLexerDiff_QBaseKeywords((QsciLexerDiff*)self, set);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, const char* (*slot)(QsciLexerDiff*, int) ```
void q_scilexerdiff_on_keywords(void* self, const char* (*slot)(void*, int)) {
    QsciLexerDiff_OnKeywords((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self ```
int32_t q_scilexerdiff_default_style(void* self) {
    return QsciLexerDiff_DefaultStyle((QsciLexerDiff*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self ```
int32_t q_scilexerdiff_qbase_default_style(void* self) {
    return QsciLexerDiff_QBaseDefaultStyle((QsciLexerDiff*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, int32_t (*slot)() ```
void q_scilexerdiff_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerDiff_OnDefaultStyle((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self, int style ```
QColor* q_scilexerdiff_paper(void* self, int style) {
    return QsciLexerDiff_Paper((QsciLexerDiff*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self, int style ```
QColor* q_scilexerdiff_qbase_paper(void* self, int style) {
    return QsciLexerDiff_QBasePaper((QsciLexerDiff*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, QColor* (*slot)(QsciLexerDiff*, int) ```
void q_scilexerdiff_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerDiff_OnPaper((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self, int style ```
QColor* q_scilexerdiff_default_color_with_style(void* self, int style) {
    return QsciLexerDiff_DefaultColorWithStyle((QsciLexerDiff*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self, int style ```
QColor* q_scilexerdiff_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerDiff_QBaseDefaultColorWithStyle((QsciLexerDiff*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, QColor* (*slot)(QsciLexerDiff*, int) ```
void q_scilexerdiff_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerDiff_OnDefaultColorWithStyle((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self, int style ```
bool q_scilexerdiff_default_eol_fill(void* self, int style) {
    return QsciLexerDiff_DefaultEolFill((QsciLexerDiff*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self, int style ```
bool q_scilexerdiff_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerDiff_QBaseDefaultEolFill((QsciLexerDiff*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, bool (*slot)(QsciLexerDiff*, int) ```
void q_scilexerdiff_on_default_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerDiff_OnDefaultEolFill((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self, int style ```
QFont* q_scilexerdiff_default_font_with_style(void* self, int style) {
    return QsciLexerDiff_DefaultFontWithStyle((QsciLexerDiff*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self, int style ```
QFont* q_scilexerdiff_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerDiff_QBaseDefaultFontWithStyle((QsciLexerDiff*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, QFont* (*slot)(QsciLexerDiff*, int) ```
void q_scilexerdiff_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerDiff_OnDefaultFontWithStyle((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self, int style ```
QColor* q_scilexerdiff_default_paper_with_style(void* self, int style) {
    return QsciLexerDiff_DefaultPaperWithStyle((QsciLexerDiff*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self, int style ```
QColor* q_scilexerdiff_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerDiff_QBaseDefaultPaperWithStyle((QsciLexerDiff*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, QColor* (*slot)(QsciLexerDiff*, int) ```
void q_scilexerdiff_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerDiff_OnDefaultPaperWithStyle((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self, QsciScintilla* editor ```
void q_scilexerdiff_set_editor(void* self, void* editor) {
    QsciLexerDiff_SetEditor((QsciLexerDiff*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self, QsciScintilla* editor ```
void q_scilexerdiff_qbase_set_editor(void* self, void* editor) {
    QsciLexerDiff_QBaseSetEditor((QsciLexerDiff*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, void (*slot)(QsciLexerDiff*, QsciScintilla*) ```
void q_scilexerdiff_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerDiff_OnSetEditor((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#refreshProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self ```
void q_scilexerdiff_refresh_properties(void* self) {
    QsciLexerDiff_RefreshProperties((QsciLexerDiff*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self ```
void q_scilexerdiff_qbase_refresh_properties(void* self) {
    QsciLexerDiff_QBaseRefreshProperties((QsciLexerDiff*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, void (*slot)() ```
void q_scilexerdiff_on_refresh_properties(void* self, void (*slot)()) {
    QsciLexerDiff_OnRefreshProperties((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self ```
int32_t q_scilexerdiff_style_bits_needed(void* self) {
    return QsciLexerDiff_StyleBitsNeeded((QsciLexerDiff*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self ```
int32_t q_scilexerdiff_qbase_style_bits_needed(void* self) {
    return QsciLexerDiff_QBaseStyleBitsNeeded((QsciLexerDiff*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, int32_t (*slot)() ```
void q_scilexerdiff_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerDiff_OnStyleBitsNeeded((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self, int autoindentstyle ```
void q_scilexerdiff_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerDiff_SetAutoIndentStyle((QsciLexerDiff*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self, int autoindentstyle ```
void q_scilexerdiff_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerDiff_QBaseSetAutoIndentStyle((QsciLexerDiff*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, void (*slot)(QsciLexerDiff*, int) ```
void q_scilexerdiff_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerDiff_OnSetAutoIndentStyle((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self, QColor* c, int style ```
void q_scilexerdiff_set_color(void* self, void* c, int style) {
    QsciLexerDiff_SetColor((QsciLexerDiff*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self, QColor* c, int style ```
void q_scilexerdiff_qbase_set_color(void* self, void* c, int style) {
    QsciLexerDiff_QBaseSetColor((QsciLexerDiff*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, void (*slot)(QsciLexerDiff*, QColor*, int) ```
void q_scilexerdiff_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerDiff_OnSetColor((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self, bool eoffill, int style ```
void q_scilexerdiff_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerDiff_SetEolFill((QsciLexerDiff*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self, bool eoffill, int style ```
void q_scilexerdiff_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerDiff_QBaseSetEolFill((QsciLexerDiff*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, void (*slot)(QsciLexerDiff*, bool, int) ```
void q_scilexerdiff_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerDiff_OnSetEolFill((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self, QFont* f, int style ```
void q_scilexerdiff_set_font(void* self, void* f, int style) {
    QsciLexerDiff_SetFont((QsciLexerDiff*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self, QFont* f, int style ```
void q_scilexerdiff_qbase_set_font(void* self, void* f, int style) {
    QsciLexerDiff_QBaseSetFont((QsciLexerDiff*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, void (*slot)(QsciLexerDiff*, QFont*, int) ```
void q_scilexerdiff_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerDiff_OnSetFont((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self, QColor* c, int style ```
void q_scilexerdiff_set_paper(void* self, void* c, int style) {
    QsciLexerDiff_SetPaper((QsciLexerDiff*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self, QColor* c, int style ```
void q_scilexerdiff_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerDiff_QBaseSetPaper((QsciLexerDiff*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, void (*slot)(QsciLexerDiff*, QColor*, int) ```
void q_scilexerdiff_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerDiff_OnSetPaper((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self, QSettings* qs, const char* prefix ```
bool q_scilexerdiff_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerDiff_ReadProperties((QsciLexerDiff*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self, QSettings* qs, const char* prefix ```
bool q_scilexerdiff_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerDiff_QBaseReadProperties((QsciLexerDiff*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, bool (*slot)(QsciLexerDiff*, QSettings*, const char*) ```
void q_scilexerdiff_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerDiff_OnReadProperties((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self, QSettings* qs, const char* prefix ```
bool q_scilexerdiff_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerDiff_WriteProperties((QsciLexerDiff*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self, QSettings* qs, const char* prefix ```
bool q_scilexerdiff_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerDiff_QBaseWriteProperties((QsciLexerDiff*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, bool (*slot)(QsciLexerDiff*, QSettings*, const char*) ```
void q_scilexerdiff_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerDiff_OnWriteProperties((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self, QEvent* event ```
bool q_scilexerdiff_event(void* self, void* event) {
    return QsciLexerDiff_Event((QsciLexerDiff*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self, QEvent* event ```
bool q_scilexerdiff_qbase_event(void* self, void* event) {
    return QsciLexerDiff_QBaseEvent((QsciLexerDiff*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, bool (*slot)(QsciLexerDiff*, QEvent*) ```
void q_scilexerdiff_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerDiff_OnEvent((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self, QObject* watched, QEvent* event ```
bool q_scilexerdiff_event_filter(void* self, void* watched, void* event) {
    return QsciLexerDiff_EventFilter((QsciLexerDiff*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self, QObject* watched, QEvent* event ```
bool q_scilexerdiff_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerDiff_QBaseEventFilter((QsciLexerDiff*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, bool (*slot)(QsciLexerDiff*, QObject*, QEvent*) ```
void q_scilexerdiff_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerDiff_OnEventFilter((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self, QTimerEvent* event ```
void q_scilexerdiff_timer_event(void* self, void* event) {
    QsciLexerDiff_TimerEvent((QsciLexerDiff*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self, QTimerEvent* event ```
void q_scilexerdiff_qbase_timer_event(void* self, void* event) {
    QsciLexerDiff_QBaseTimerEvent((QsciLexerDiff*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, void (*slot)(QsciLexerDiff*, QTimerEvent*) ```
void q_scilexerdiff_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerDiff_OnTimerEvent((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self, QChildEvent* event ```
void q_scilexerdiff_child_event(void* self, void* event) {
    QsciLexerDiff_ChildEvent((QsciLexerDiff*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self, QChildEvent* event ```
void q_scilexerdiff_qbase_child_event(void* self, void* event) {
    QsciLexerDiff_QBaseChildEvent((QsciLexerDiff*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, void (*slot)(QsciLexerDiff*, QChildEvent*) ```
void q_scilexerdiff_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerDiff_OnChildEvent((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self, QEvent* event ```
void q_scilexerdiff_custom_event(void* self, void* event) {
    QsciLexerDiff_CustomEvent((QsciLexerDiff*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self, QEvent* event ```
void q_scilexerdiff_qbase_custom_event(void* self, void* event) {
    QsciLexerDiff_QBaseCustomEvent((QsciLexerDiff*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, void (*slot)(QsciLexerDiff*, QEvent*) ```
void q_scilexerdiff_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerDiff_OnCustomEvent((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self, QMetaMethod* signal ```
void q_scilexerdiff_connect_notify(void* self, void* signal) {
    QsciLexerDiff_ConnectNotify((QsciLexerDiff*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self, QMetaMethod* signal ```
void q_scilexerdiff_qbase_connect_notify(void* self, void* signal) {
    QsciLexerDiff_QBaseConnectNotify((QsciLexerDiff*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, void (*slot)(QsciLexerDiff*, QMetaMethod*) ```
void q_scilexerdiff_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerDiff_OnConnectNotify((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self, QMetaMethod* signal ```
void q_scilexerdiff_disconnect_notify(void* self, void* signal) {
    QsciLexerDiff_DisconnectNotify((QsciLexerDiff*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self, QMetaMethod* signal ```
void q_scilexerdiff_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerDiff_QBaseDisconnectNotify((QsciLexerDiff*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, void (*slot)(QsciLexerDiff*, QMetaMethod*) ```
void q_scilexerdiff_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerDiff_OnDisconnectNotify((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self ```
QObject* q_scilexerdiff_sender(void* self) {
    return QsciLexerDiff_Sender((QsciLexerDiff*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self ```
QObject* q_scilexerdiff_qbase_sender(void* self) {
    return QsciLexerDiff_QBaseSender((QsciLexerDiff*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, QObject* (*slot)() ```
void q_scilexerdiff_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerDiff_OnSender((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self ```
int32_t q_scilexerdiff_sender_signal_index(void* self) {
    return QsciLexerDiff_SenderSignalIndex((QsciLexerDiff*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self ```
int32_t q_scilexerdiff_qbase_sender_signal_index(void* self) {
    return QsciLexerDiff_QBaseSenderSignalIndex((QsciLexerDiff*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, int32_t (*slot)() ```
void q_scilexerdiff_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerDiff_OnSenderSignalIndex((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self, const char* signal ```
int32_t q_scilexerdiff_receivers(void* self, const char* signal) {
    return QsciLexerDiff_Receivers((QsciLexerDiff*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self, const char* signal ```
int32_t q_scilexerdiff_qbase_receivers(void* self, const char* signal) {
    return QsciLexerDiff_QBaseReceivers((QsciLexerDiff*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, int32_t (*slot)(QsciLexerDiff*, const char*) ```
void q_scilexerdiff_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerDiff_OnReceivers((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerDiff* self, QMetaMethod* signal ```
bool q_scilexerdiff_is_signal_connected(void* self, void* signal) {
    return QsciLexerDiff_IsSignalConnected((QsciLexerDiff*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerDiff* self, QMetaMethod* signal ```
bool q_scilexerdiff_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerDiff_QBaseIsSignalConnected((QsciLexerDiff*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerDiff* self, bool (*slot)(QsciLexerDiff*, QMetaMethod*) ```
void q_scilexerdiff_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerDiff_OnIsSignalConnected((QsciLexerDiff*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexerDiff* self ```
void q_scilexerdiff_delete(void* self) {
    QsciLexerDiff_Delete((QsciLexerDiff*)(self));
}