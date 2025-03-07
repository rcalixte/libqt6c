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
#include "libqscilexerbatch.hpp"
#include "libqscilexerbatch.h"

/// https://doc.qt.io/qt-6/qscilexerbatch.html

/// q_scilexerbatch_new constructs a new QsciLexerBatch object.
///
///
QsciLexerBatch* q_scilexerbatch_new() {
    return QsciLexerBatch_new();
}

/// q_scilexerbatch_new2 constructs a new QsciLexerBatch object.
///
/// ``` QObject* parent ```
QsciLexerBatch* q_scilexerbatch_new2(void* parent) {
    return QsciLexerBatch_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerBatch* self ```
QMetaObject* q_scilexerbatch_meta_object(void* self) {
    return QsciLexerBatch_MetaObject((QsciLexerBatch*)self);
}

/// ``` QsciLexerBatch* self, const char* param1 ```
void* q_scilexerbatch_metacast(void* self, const char* param1) {
    return QsciLexerBatch_Metacast((QsciLexerBatch*)self, param1);
}

/// ``` QsciLexerBatch* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerbatch_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerBatch_Metacall((QsciLexerBatch*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerBatch* self, int32_t (*slot)(QsciLexerBatch*, enum QMetaObject__Call, int, void*) ```
void q_scilexerbatch_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerBatch_OnMetacall((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerBatch* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerbatch_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerBatch_QBaseMetacall((QsciLexerBatch*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexerbatch_tr(const char* s) {
    libqt_string _str = QsciLexerBatch_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerbatch.html#language)
///
/// ``` QsciLexerBatch* self ```
const char* q_scilexerbatch_language(void* self) {
    return QsciLexerBatch_Language((QsciLexerBatch*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerbatch.html#lexer)
///
/// ``` QsciLexerBatch* self ```
const char* q_scilexerbatch_lexer(void* self) {
    return QsciLexerBatch_Lexer((QsciLexerBatch*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerbatch.html#wordCharacters)
///
/// ``` QsciLexerBatch* self ```
const char* q_scilexerbatch_word_characters(void* self) {
    return QsciLexerBatch_WordCharacters((QsciLexerBatch*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerbatch.html#caseSensitive)
///
/// ``` QsciLexerBatch* self ```
bool q_scilexerbatch_case_sensitive(void* self) {
    return QsciLexerBatch_CaseSensitive((QsciLexerBatch*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerbatch.html#defaultColor)
///
/// ``` QsciLexerBatch* self, int style ```
QColor* q_scilexerbatch_default_color(void* self, int style) {
    return QsciLexerBatch_DefaultColor((QsciLexerBatch*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerbatch.html#defaultEolFill)
///
/// ``` QsciLexerBatch* self, int style ```
bool q_scilexerbatch_default_eol_fill(void* self, int style) {
    return QsciLexerBatch_DefaultEolFill((QsciLexerBatch*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerbatch.html#defaultFont)
///
/// ``` QsciLexerBatch* self, int style ```
QFont* q_scilexerbatch_default_font(void* self, int style) {
    return QsciLexerBatch_DefaultFont((QsciLexerBatch*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerbatch.html#defaultPaper)
///
/// ``` QsciLexerBatch* self, int style ```
QColor* q_scilexerbatch_default_paper(void* self, int style) {
    return QsciLexerBatch_DefaultPaper((QsciLexerBatch*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerbatch.html#keywords)
///
/// ``` QsciLexerBatch* self, int set ```
const char* q_scilexerbatch_keywords(void* self, int set) {
    return QsciLexerBatch_Keywords((QsciLexerBatch*)self, set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerbatch.html#description)
///
/// ``` QsciLexerBatch* self, int style ```
const char* q_scilexerbatch_description(void* self, int style) {
    libqt_string _str = QsciLexerBatch_Description((QsciLexerBatch*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexerbatch_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerBatch_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexerbatch_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerBatch_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerBatch* self ```
QsciAbstractAPIs* q_scilexerbatch_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerBatch* self ```
int32_t q_scilexerbatch_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerBatch* self ```
QsciScintilla* q_scilexerbatch_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerBatch* self, QsciAbstractAPIs* apis ```
void q_scilexerbatch_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerBatch* self, QColor* c ```
void q_scilexerbatch_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerBatch* self, QFont* f ```
void q_scilexerbatch_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerBatch* self, QColor* c ```
void q_scilexerbatch_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerBatch* self, QSettings* qs ```
bool q_scilexerbatch_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerBatch* self, QSettings* qs ```
bool q_scilexerbatch_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerBatch* self, QColor* c, int style ```
void q_scilexerbatch_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerBatch* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerbatch_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerBatch* self, bool eolfilled, int style ```
void q_scilexerbatch_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerBatch* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexerbatch_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerBatch* self, QFont* f, int style ```
void q_scilexerbatch_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerBatch* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexerbatch_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerBatch* self, QColor* c, int style ```
void q_scilexerbatch_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerBatch* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerbatch_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerBatch* self, const char* prop, const char* val ```
void q_scilexerbatch_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerBatch* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexerbatch_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerBatch* self, QSettings* qs, const char* prefix ```
bool q_scilexerbatch_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerBatch* self, QSettings* qs, const char* prefix ```
bool q_scilexerbatch_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerBatch* self ```
const char* q_scilexerbatch_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerBatch* self, const char* name ```
void q_scilexerbatch_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerBatch* self ```
bool q_scilexerbatch_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerBatch* self ```
bool q_scilexerbatch_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerBatch* self ```
bool q_scilexerbatch_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerBatch* self ```
bool q_scilexerbatch_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerBatch* self, bool b ```
bool q_scilexerbatch_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerBatch* self ```
QThread* q_scilexerbatch_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerBatch* self, QThread* thread ```
void q_scilexerbatch_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerBatch* self, int interval ```
int32_t q_scilexerbatch_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerBatch* self, int id ```
void q_scilexerbatch_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerBatch* self ```
libqt_list /* of QObject* */ q_scilexerbatch_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerBatch* self, QObject* parent ```
void q_scilexerbatch_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerBatch* self, QObject* filterObj ```
void q_scilexerbatch_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerBatch* self, QObject* obj ```
void q_scilexerbatch_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexerbatch_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerBatch* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexerbatch_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexerbatch_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexerbatch_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerBatch* self ```
void q_scilexerbatch_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerBatch* self ```
void q_scilexerbatch_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerBatch* self, const char* name, QVariant* value ```
bool q_scilexerbatch_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerBatch* self, const char* name ```
QVariant* q_scilexerbatch_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerBatch* self ```
const char** q_scilexerbatch_dynamic_property_names(void* self) {
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
/// ``` QsciLexerBatch* self ```
QBindingStorage* q_scilexerbatch_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerBatch* self ```
QBindingStorage* q_scilexerbatch_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerBatch* self ```
void q_scilexerbatch_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexerBatch* self, void (*slot)(QObject*) ```
void q_scilexerbatch_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerBatch* self ```
QObject* q_scilexerbatch_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerBatch* self, const char* classname ```
bool q_scilexerbatch_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerBatch* self ```
void q_scilexerbatch_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerBatch* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexerbatch_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerbatch_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerBatch* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerbatch_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerBatch* self, QObject* param1 ```
void q_scilexerbatch_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexerBatch* self, void (*slot)(QObject*, QObject*) ```
void q_scilexerbatch_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self ```
int32_t q_scilexerbatch_lexer_id(void* self) {
    return QsciLexerBatch_LexerId((QsciLexerBatch*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self ```
int32_t q_scilexerbatch_qbase_lexer_id(void* self) {
    return QsciLexerBatch_QBaseLexerId((QsciLexerBatch*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, int32_t (*slot)() ```
void q_scilexerbatch_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerBatch_OnLexerId((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self ```
const char* q_scilexerbatch_auto_completion_fillups(void* self) {
    return QsciLexerBatch_AutoCompletionFillups((QsciLexerBatch*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self ```
const char* q_scilexerbatch_qbase_auto_completion_fillups(void* self) {
    return QsciLexerBatch_QBaseAutoCompletionFillups((QsciLexerBatch*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, const char* (*slot)() ```
void q_scilexerbatch_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerBatch_OnAutoCompletionFillups((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self ```
const char** q_scilexerbatch_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerBatch_AutoCompletionWordSeparators((QsciLexerBatch*)self);
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
/// ``` QsciLexerBatch* self ```
const char** q_scilexerbatch_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerBatch_QBaseAutoCompletionWordSeparators((QsciLexerBatch*)self);
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
/// ``` QsciLexerBatch* self, const char** (*slot)() ```
void q_scilexerbatch_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerBatch_OnAutoCompletionWordSeparators((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self, int* style ```
const char* q_scilexerbatch_block_end(void* self, int* style) {
    return QsciLexerBatch_BlockEnd((QsciLexerBatch*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self, int* style ```
const char* q_scilexerbatch_qbase_block_end(void* self, int* style) {
    return QsciLexerBatch_QBaseBlockEnd((QsciLexerBatch*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, const char* (*slot)(QsciLexerBatch*, int*) ```
void q_scilexerbatch_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerBatch_OnBlockEnd((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self ```
int32_t q_scilexerbatch_block_lookback(void* self) {
    return QsciLexerBatch_BlockLookback((QsciLexerBatch*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self ```
int32_t q_scilexerbatch_qbase_block_lookback(void* self) {
    return QsciLexerBatch_QBaseBlockLookback((QsciLexerBatch*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, int32_t (*slot)() ```
void q_scilexerbatch_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerBatch_OnBlockLookback((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self, int* style ```
const char* q_scilexerbatch_block_start(void* self, int* style) {
    return QsciLexerBatch_BlockStart((QsciLexerBatch*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self, int* style ```
const char* q_scilexerbatch_qbase_block_start(void* self, int* style) {
    return QsciLexerBatch_QBaseBlockStart((QsciLexerBatch*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, const char* (*slot)(QsciLexerBatch*, int*) ```
void q_scilexerbatch_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerBatch_OnBlockStart((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self, int* style ```
const char* q_scilexerbatch_block_start_keyword(void* self, int* style) {
    return QsciLexerBatch_BlockStartKeyword((QsciLexerBatch*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self, int* style ```
const char* q_scilexerbatch_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerBatch_QBaseBlockStartKeyword((QsciLexerBatch*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, const char* (*slot)(QsciLexerBatch*, int*) ```
void q_scilexerbatch_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerBatch_OnBlockStartKeyword((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#braceStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self ```
int32_t q_scilexerbatch_brace_style(void* self) {
    return QsciLexerBatch_BraceStyle((QsciLexerBatch*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self ```
int32_t q_scilexerbatch_qbase_brace_style(void* self) {
    return QsciLexerBatch_QBaseBraceStyle((QsciLexerBatch*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, int32_t (*slot)() ```
void q_scilexerbatch_on_brace_style(void* self, int32_t (*slot)()) {
    QsciLexerBatch_OnBraceStyle((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self, int style ```
QColor* q_scilexerbatch_color(void* self, int style) {
    return QsciLexerBatch_Color((QsciLexerBatch*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self, int style ```
QColor* q_scilexerbatch_qbase_color(void* self, int style) {
    return QsciLexerBatch_QBaseColor((QsciLexerBatch*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, QColor* (*slot)(QsciLexerBatch*, int) ```
void q_scilexerbatch_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerBatch_OnColor((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self, int style ```
bool q_scilexerbatch_eol_fill(void* self, int style) {
    return QsciLexerBatch_EolFill((QsciLexerBatch*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self, int style ```
bool q_scilexerbatch_qbase_eol_fill(void* self, int style) {
    return QsciLexerBatch_QBaseEolFill((QsciLexerBatch*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, bool (*slot)(QsciLexerBatch*, int) ```
void q_scilexerbatch_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerBatch_OnEolFill((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self, int style ```
QFont* q_scilexerbatch_font(void* self, int style) {
    return QsciLexerBatch_Font((QsciLexerBatch*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self, int style ```
QFont* q_scilexerbatch_qbase_font(void* self, int style) {
    return QsciLexerBatch_QBaseFont((QsciLexerBatch*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, QFont* (*slot)(QsciLexerBatch*, int) ```
void q_scilexerbatch_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerBatch_OnFont((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self ```
int32_t q_scilexerbatch_indentation_guide_view(void* self) {
    return QsciLexerBatch_IndentationGuideView((QsciLexerBatch*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self ```
int32_t q_scilexerbatch_qbase_indentation_guide_view(void* self) {
    return QsciLexerBatch_QBaseIndentationGuideView((QsciLexerBatch*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, int32_t (*slot)() ```
void q_scilexerbatch_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerBatch_OnIndentationGuideView((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self ```
int32_t q_scilexerbatch_default_style(void* self) {
    return QsciLexerBatch_DefaultStyle((QsciLexerBatch*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self ```
int32_t q_scilexerbatch_qbase_default_style(void* self) {
    return QsciLexerBatch_QBaseDefaultStyle((QsciLexerBatch*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, int32_t (*slot)() ```
void q_scilexerbatch_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerBatch_OnDefaultStyle((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self, int style ```
QColor* q_scilexerbatch_paper(void* self, int style) {
    return QsciLexerBatch_Paper((QsciLexerBatch*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self, int style ```
QColor* q_scilexerbatch_qbase_paper(void* self, int style) {
    return QsciLexerBatch_QBasePaper((QsciLexerBatch*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, QColor* (*slot)(QsciLexerBatch*, int) ```
void q_scilexerbatch_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerBatch_OnPaper((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self, int style ```
QColor* q_scilexerbatch_default_color_with_style(void* self, int style) {
    return QsciLexerBatch_DefaultColorWithStyle((QsciLexerBatch*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self, int style ```
QColor* q_scilexerbatch_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerBatch_QBaseDefaultColorWithStyle((QsciLexerBatch*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, QColor* (*slot)(QsciLexerBatch*, int) ```
void q_scilexerbatch_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerBatch_OnDefaultColorWithStyle((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self, int style ```
QFont* q_scilexerbatch_default_font_with_style(void* self, int style) {
    return QsciLexerBatch_DefaultFontWithStyle((QsciLexerBatch*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self, int style ```
QFont* q_scilexerbatch_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerBatch_QBaseDefaultFontWithStyle((QsciLexerBatch*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, QFont* (*slot)(QsciLexerBatch*, int) ```
void q_scilexerbatch_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerBatch_OnDefaultFontWithStyle((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self, int style ```
QColor* q_scilexerbatch_default_paper_with_style(void* self, int style) {
    return QsciLexerBatch_DefaultPaperWithStyle((QsciLexerBatch*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self, int style ```
QColor* q_scilexerbatch_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerBatch_QBaseDefaultPaperWithStyle((QsciLexerBatch*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, QColor* (*slot)(QsciLexerBatch*, int) ```
void q_scilexerbatch_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerBatch_OnDefaultPaperWithStyle((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self, QsciScintilla* editor ```
void q_scilexerbatch_set_editor(void* self, void* editor) {
    QsciLexerBatch_SetEditor((QsciLexerBatch*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self, QsciScintilla* editor ```
void q_scilexerbatch_qbase_set_editor(void* self, void* editor) {
    QsciLexerBatch_QBaseSetEditor((QsciLexerBatch*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, void (*slot)(QsciLexerBatch*, QsciScintilla*) ```
void q_scilexerbatch_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerBatch_OnSetEditor((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#refreshProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self ```
void q_scilexerbatch_refresh_properties(void* self) {
    QsciLexerBatch_RefreshProperties((QsciLexerBatch*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self ```
void q_scilexerbatch_qbase_refresh_properties(void* self) {
    QsciLexerBatch_QBaseRefreshProperties((QsciLexerBatch*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, void (*slot)() ```
void q_scilexerbatch_on_refresh_properties(void* self, void (*slot)()) {
    QsciLexerBatch_OnRefreshProperties((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self ```
int32_t q_scilexerbatch_style_bits_needed(void* self) {
    return QsciLexerBatch_StyleBitsNeeded((QsciLexerBatch*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self ```
int32_t q_scilexerbatch_qbase_style_bits_needed(void* self) {
    return QsciLexerBatch_QBaseStyleBitsNeeded((QsciLexerBatch*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, int32_t (*slot)() ```
void q_scilexerbatch_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerBatch_OnStyleBitsNeeded((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self, int autoindentstyle ```
void q_scilexerbatch_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerBatch_SetAutoIndentStyle((QsciLexerBatch*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self, int autoindentstyle ```
void q_scilexerbatch_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerBatch_QBaseSetAutoIndentStyle((QsciLexerBatch*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, void (*slot)(QsciLexerBatch*, int) ```
void q_scilexerbatch_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerBatch_OnSetAutoIndentStyle((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self, QColor* c, int style ```
void q_scilexerbatch_set_color(void* self, void* c, int style) {
    QsciLexerBatch_SetColor((QsciLexerBatch*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self, QColor* c, int style ```
void q_scilexerbatch_qbase_set_color(void* self, void* c, int style) {
    QsciLexerBatch_QBaseSetColor((QsciLexerBatch*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, void (*slot)(QsciLexerBatch*, QColor*, int) ```
void q_scilexerbatch_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerBatch_OnSetColor((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self, bool eoffill, int style ```
void q_scilexerbatch_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerBatch_SetEolFill((QsciLexerBatch*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self, bool eoffill, int style ```
void q_scilexerbatch_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerBatch_QBaseSetEolFill((QsciLexerBatch*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, void (*slot)(QsciLexerBatch*, bool, int) ```
void q_scilexerbatch_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerBatch_OnSetEolFill((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self, QFont* f, int style ```
void q_scilexerbatch_set_font(void* self, void* f, int style) {
    QsciLexerBatch_SetFont((QsciLexerBatch*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self, QFont* f, int style ```
void q_scilexerbatch_qbase_set_font(void* self, void* f, int style) {
    QsciLexerBatch_QBaseSetFont((QsciLexerBatch*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, void (*slot)(QsciLexerBatch*, QFont*, int) ```
void q_scilexerbatch_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerBatch_OnSetFont((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self, QColor* c, int style ```
void q_scilexerbatch_set_paper(void* self, void* c, int style) {
    QsciLexerBatch_SetPaper((QsciLexerBatch*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self, QColor* c, int style ```
void q_scilexerbatch_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerBatch_QBaseSetPaper((QsciLexerBatch*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, void (*slot)(QsciLexerBatch*, QColor*, int) ```
void q_scilexerbatch_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerBatch_OnSetPaper((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self, QSettings* qs, const char* prefix ```
bool q_scilexerbatch_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerBatch_ReadProperties((QsciLexerBatch*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self, QSettings* qs, const char* prefix ```
bool q_scilexerbatch_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerBatch_QBaseReadProperties((QsciLexerBatch*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, bool (*slot)(QsciLexerBatch*, QSettings*, const char*) ```
void q_scilexerbatch_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerBatch_OnReadProperties((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self, QSettings* qs, const char* prefix ```
bool q_scilexerbatch_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerBatch_WriteProperties((QsciLexerBatch*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self, QSettings* qs, const char* prefix ```
bool q_scilexerbatch_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerBatch_QBaseWriteProperties((QsciLexerBatch*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, bool (*slot)(QsciLexerBatch*, QSettings*, const char*) ```
void q_scilexerbatch_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerBatch_OnWriteProperties((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self, QEvent* event ```
bool q_scilexerbatch_event(void* self, void* event) {
    return QsciLexerBatch_Event((QsciLexerBatch*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self, QEvent* event ```
bool q_scilexerbatch_qbase_event(void* self, void* event) {
    return QsciLexerBatch_QBaseEvent((QsciLexerBatch*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, bool (*slot)(QsciLexerBatch*, QEvent*) ```
void q_scilexerbatch_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerBatch_OnEvent((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self, QObject* watched, QEvent* event ```
bool q_scilexerbatch_event_filter(void* self, void* watched, void* event) {
    return QsciLexerBatch_EventFilter((QsciLexerBatch*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self, QObject* watched, QEvent* event ```
bool q_scilexerbatch_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerBatch_QBaseEventFilter((QsciLexerBatch*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, bool (*slot)(QsciLexerBatch*, QObject*, QEvent*) ```
void q_scilexerbatch_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerBatch_OnEventFilter((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self, QTimerEvent* event ```
void q_scilexerbatch_timer_event(void* self, void* event) {
    QsciLexerBatch_TimerEvent((QsciLexerBatch*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self, QTimerEvent* event ```
void q_scilexerbatch_qbase_timer_event(void* self, void* event) {
    QsciLexerBatch_QBaseTimerEvent((QsciLexerBatch*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, void (*slot)(QsciLexerBatch*, QTimerEvent*) ```
void q_scilexerbatch_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerBatch_OnTimerEvent((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self, QChildEvent* event ```
void q_scilexerbatch_child_event(void* self, void* event) {
    QsciLexerBatch_ChildEvent((QsciLexerBatch*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self, QChildEvent* event ```
void q_scilexerbatch_qbase_child_event(void* self, void* event) {
    QsciLexerBatch_QBaseChildEvent((QsciLexerBatch*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, void (*slot)(QsciLexerBatch*, QChildEvent*) ```
void q_scilexerbatch_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerBatch_OnChildEvent((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self, QEvent* event ```
void q_scilexerbatch_custom_event(void* self, void* event) {
    QsciLexerBatch_CustomEvent((QsciLexerBatch*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self, QEvent* event ```
void q_scilexerbatch_qbase_custom_event(void* self, void* event) {
    QsciLexerBatch_QBaseCustomEvent((QsciLexerBatch*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, void (*slot)(QsciLexerBatch*, QEvent*) ```
void q_scilexerbatch_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerBatch_OnCustomEvent((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self, QMetaMethod* signal ```
void q_scilexerbatch_connect_notify(void* self, void* signal) {
    QsciLexerBatch_ConnectNotify((QsciLexerBatch*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self, QMetaMethod* signal ```
void q_scilexerbatch_qbase_connect_notify(void* self, void* signal) {
    QsciLexerBatch_QBaseConnectNotify((QsciLexerBatch*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, void (*slot)(QsciLexerBatch*, QMetaMethod*) ```
void q_scilexerbatch_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerBatch_OnConnectNotify((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self, QMetaMethod* signal ```
void q_scilexerbatch_disconnect_notify(void* self, void* signal) {
    QsciLexerBatch_DisconnectNotify((QsciLexerBatch*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self, QMetaMethod* signal ```
void q_scilexerbatch_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerBatch_QBaseDisconnectNotify((QsciLexerBatch*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, void (*slot)(QsciLexerBatch*, QMetaMethod*) ```
void q_scilexerbatch_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerBatch_OnDisconnectNotify((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self ```
QObject* q_scilexerbatch_sender(void* self) {
    return QsciLexerBatch_Sender((QsciLexerBatch*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self ```
QObject* q_scilexerbatch_qbase_sender(void* self) {
    return QsciLexerBatch_QBaseSender((QsciLexerBatch*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, QObject* (*slot)() ```
void q_scilexerbatch_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerBatch_OnSender((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self ```
int32_t q_scilexerbatch_sender_signal_index(void* self) {
    return QsciLexerBatch_SenderSignalIndex((QsciLexerBatch*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self ```
int32_t q_scilexerbatch_qbase_sender_signal_index(void* self) {
    return QsciLexerBatch_QBaseSenderSignalIndex((QsciLexerBatch*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, int32_t (*slot)() ```
void q_scilexerbatch_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerBatch_OnSenderSignalIndex((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self, const char* signal ```
int32_t q_scilexerbatch_receivers(void* self, const char* signal) {
    return QsciLexerBatch_Receivers((QsciLexerBatch*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self, const char* signal ```
int32_t q_scilexerbatch_qbase_receivers(void* self, const char* signal) {
    return QsciLexerBatch_QBaseReceivers((QsciLexerBatch*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, int32_t (*slot)(QsciLexerBatch*, const char*) ```
void q_scilexerbatch_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerBatch_OnReceivers((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBatch* self, QMetaMethod* signal ```
bool q_scilexerbatch_is_signal_connected(void* self, void* signal) {
    return QsciLexerBatch_IsSignalConnected((QsciLexerBatch*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBatch* self, QMetaMethod* signal ```
bool q_scilexerbatch_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerBatch_QBaseIsSignalConnected((QsciLexerBatch*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBatch* self, bool (*slot)(QsciLexerBatch*, QMetaMethod*) ```
void q_scilexerbatch_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerBatch_OnIsSignalConnected((QsciLexerBatch*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexerBatch* self ```
void q_scilexerbatch_delete(void* self) {
    QsciLexerBatch_Delete((QsciLexerBatch*)(self));
}