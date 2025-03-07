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
#include "libqscilexerspice.hpp"
#include "libqscilexerspice.h"

/// https://doc.qt.io/qt-6/qscilexerspice.html

/// q_scilexerspice_new constructs a new QsciLexerSpice object.
///
///
QsciLexerSpice* q_scilexerspice_new() {
    return QsciLexerSpice_new();
}

/// q_scilexerspice_new2 constructs a new QsciLexerSpice object.
///
/// ``` QObject* parent ```
QsciLexerSpice* q_scilexerspice_new2(void* parent) {
    return QsciLexerSpice_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerSpice* self ```
QMetaObject* q_scilexerspice_meta_object(void* self) {
    return QsciLexerSpice_MetaObject((QsciLexerSpice*)self);
}

/// ``` QsciLexerSpice* self, const char* param1 ```
void* q_scilexerspice_metacast(void* self, const char* param1) {
    return QsciLexerSpice_Metacast((QsciLexerSpice*)self, param1);
}

/// ``` QsciLexerSpice* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerspice_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerSpice_Metacall((QsciLexerSpice*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerSpice* self, int32_t (*slot)(QsciLexerSpice*, enum QMetaObject__Call, int, void*) ```
void q_scilexerspice_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerSpice_OnMetacall((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerSpice* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerspice_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerSpice_QBaseMetacall((QsciLexerSpice*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexerspice_tr(const char* s) {
    libqt_string _str = QsciLexerSpice_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerspice.html#language)
///
/// ``` QsciLexerSpice* self ```
const char* q_scilexerspice_language(void* self) {
    return QsciLexerSpice_Language((QsciLexerSpice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerspice.html#lexer)
///
/// ``` QsciLexerSpice* self ```
const char* q_scilexerspice_lexer(void* self) {
    return QsciLexerSpice_Lexer((QsciLexerSpice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerspice.html#braceStyle)
///
/// ``` QsciLexerSpice* self ```
int32_t q_scilexerspice_brace_style(void* self) {
    return QsciLexerSpice_BraceStyle((QsciLexerSpice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerspice.html#keywords)
///
/// ``` QsciLexerSpice* self, int set ```
const char* q_scilexerspice_keywords(void* self, int set) {
    return QsciLexerSpice_Keywords((QsciLexerSpice*)self, set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerspice.html#defaultColor)
///
/// ``` QsciLexerSpice* self, int style ```
QColor* q_scilexerspice_default_color(void* self, int style) {
    return QsciLexerSpice_DefaultColor((QsciLexerSpice*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerspice.html#defaultFont)
///
/// ``` QsciLexerSpice* self, int style ```
QFont* q_scilexerspice_default_font(void* self, int style) {
    return QsciLexerSpice_DefaultFont((QsciLexerSpice*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerspice.html#description)
///
/// ``` QsciLexerSpice* self, int style ```
const char* q_scilexerspice_description(void* self, int style) {
    libqt_string _str = QsciLexerSpice_Description((QsciLexerSpice*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexerspice_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerSpice_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexerspice_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerSpice_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerSpice* self ```
QsciAbstractAPIs* q_scilexerspice_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerSpice* self ```
int32_t q_scilexerspice_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// ``` QsciLexerSpice* self ```
QColor* q_scilexerspice_default_paper(void* self) {
    return QsciLexer_DefaultPaper((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerSpice* self ```
QsciScintilla* q_scilexerspice_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerSpice* self, QsciAbstractAPIs* apis ```
void q_scilexerspice_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerSpice* self, QColor* c ```
void q_scilexerspice_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerSpice* self, QFont* f ```
void q_scilexerspice_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerSpice* self, QColor* c ```
void q_scilexerspice_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerSpice* self, QSettings* qs ```
bool q_scilexerspice_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerSpice* self, QSettings* qs ```
bool q_scilexerspice_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerSpice* self, QColor* c, int style ```
void q_scilexerspice_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerSpice* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerspice_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerSpice* self, bool eolfilled, int style ```
void q_scilexerspice_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerSpice* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexerspice_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerSpice* self, QFont* f, int style ```
void q_scilexerspice_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerSpice* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexerspice_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerSpice* self, QColor* c, int style ```
void q_scilexerspice_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerSpice* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerspice_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerSpice* self, const char* prop, const char* val ```
void q_scilexerspice_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerSpice* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexerspice_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerSpice* self, QSettings* qs, const char* prefix ```
bool q_scilexerspice_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerSpice* self, QSettings* qs, const char* prefix ```
bool q_scilexerspice_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerSpice* self ```
const char* q_scilexerspice_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerSpice* self, const char* name ```
void q_scilexerspice_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerSpice* self ```
bool q_scilexerspice_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerSpice* self ```
bool q_scilexerspice_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerSpice* self ```
bool q_scilexerspice_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerSpice* self ```
bool q_scilexerspice_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerSpice* self, bool b ```
bool q_scilexerspice_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerSpice* self ```
QThread* q_scilexerspice_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerSpice* self, QThread* thread ```
void q_scilexerspice_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerSpice* self, int interval ```
int32_t q_scilexerspice_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerSpice* self, int id ```
void q_scilexerspice_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerSpice* self ```
libqt_list /* of QObject* */ q_scilexerspice_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerSpice* self, QObject* parent ```
void q_scilexerspice_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerSpice* self, QObject* filterObj ```
void q_scilexerspice_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerSpice* self, QObject* obj ```
void q_scilexerspice_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexerspice_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerSpice* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexerspice_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexerspice_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexerspice_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerSpice* self ```
void q_scilexerspice_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerSpice* self ```
void q_scilexerspice_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerSpice* self, const char* name, QVariant* value ```
bool q_scilexerspice_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerSpice* self, const char* name ```
QVariant* q_scilexerspice_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerSpice* self ```
const char** q_scilexerspice_dynamic_property_names(void* self) {
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
/// ``` QsciLexerSpice* self ```
QBindingStorage* q_scilexerspice_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerSpice* self ```
QBindingStorage* q_scilexerspice_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerSpice* self ```
void q_scilexerspice_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexerSpice* self, void (*slot)(QObject*) ```
void q_scilexerspice_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerSpice* self ```
QObject* q_scilexerspice_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerSpice* self, const char* classname ```
bool q_scilexerspice_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerSpice* self ```
void q_scilexerspice_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerSpice* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexerspice_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerspice_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerSpice* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerspice_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerSpice* self, QObject* param1 ```
void q_scilexerspice_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexerSpice* self, void (*slot)(QObject*, QObject*) ```
void q_scilexerspice_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self ```
int32_t q_scilexerspice_lexer_id(void* self) {
    return QsciLexerSpice_LexerId((QsciLexerSpice*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self ```
int32_t q_scilexerspice_qbase_lexer_id(void* self) {
    return QsciLexerSpice_QBaseLexerId((QsciLexerSpice*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, int32_t (*slot)() ```
void q_scilexerspice_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerSpice_OnLexerId((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self ```
const char* q_scilexerspice_auto_completion_fillups(void* self) {
    return QsciLexerSpice_AutoCompletionFillups((QsciLexerSpice*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self ```
const char* q_scilexerspice_qbase_auto_completion_fillups(void* self) {
    return QsciLexerSpice_QBaseAutoCompletionFillups((QsciLexerSpice*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, const char* (*slot)() ```
void q_scilexerspice_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerSpice_OnAutoCompletionFillups((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self ```
const char** q_scilexerspice_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerSpice_AutoCompletionWordSeparators((QsciLexerSpice*)self);
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
/// ``` QsciLexerSpice* self ```
const char** q_scilexerspice_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerSpice_QBaseAutoCompletionWordSeparators((QsciLexerSpice*)self);
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
/// ``` QsciLexerSpice* self, const char** (*slot)() ```
void q_scilexerspice_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerSpice_OnAutoCompletionWordSeparators((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self, int* style ```
const char* q_scilexerspice_block_end(void* self, int* style) {
    return QsciLexerSpice_BlockEnd((QsciLexerSpice*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self, int* style ```
const char* q_scilexerspice_qbase_block_end(void* self, int* style) {
    return QsciLexerSpice_QBaseBlockEnd((QsciLexerSpice*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, const char* (*slot)(QsciLexerSpice*, int*) ```
void q_scilexerspice_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerSpice_OnBlockEnd((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self ```
int32_t q_scilexerspice_block_lookback(void* self) {
    return QsciLexerSpice_BlockLookback((QsciLexerSpice*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self ```
int32_t q_scilexerspice_qbase_block_lookback(void* self) {
    return QsciLexerSpice_QBaseBlockLookback((QsciLexerSpice*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, int32_t (*slot)() ```
void q_scilexerspice_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerSpice_OnBlockLookback((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self, int* style ```
const char* q_scilexerspice_block_start(void* self, int* style) {
    return QsciLexerSpice_BlockStart((QsciLexerSpice*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self, int* style ```
const char* q_scilexerspice_qbase_block_start(void* self, int* style) {
    return QsciLexerSpice_QBaseBlockStart((QsciLexerSpice*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, const char* (*slot)(QsciLexerSpice*, int*) ```
void q_scilexerspice_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerSpice_OnBlockStart((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self, int* style ```
const char* q_scilexerspice_block_start_keyword(void* self, int* style) {
    return QsciLexerSpice_BlockStartKeyword((QsciLexerSpice*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self, int* style ```
const char* q_scilexerspice_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerSpice_QBaseBlockStartKeyword((QsciLexerSpice*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, const char* (*slot)(QsciLexerSpice*, int*) ```
void q_scilexerspice_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerSpice_OnBlockStartKeyword((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self ```
bool q_scilexerspice_case_sensitive(void* self) {
    return QsciLexerSpice_CaseSensitive((QsciLexerSpice*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self ```
bool q_scilexerspice_qbase_case_sensitive(void* self) {
    return QsciLexerSpice_QBaseCaseSensitive((QsciLexerSpice*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, bool (*slot)() ```
void q_scilexerspice_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerSpice_OnCaseSensitive((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self, int style ```
QColor* q_scilexerspice_color(void* self, int style) {
    return QsciLexerSpice_Color((QsciLexerSpice*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self, int style ```
QColor* q_scilexerspice_qbase_color(void* self, int style) {
    return QsciLexerSpice_QBaseColor((QsciLexerSpice*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, QColor* (*slot)(QsciLexerSpice*, int) ```
void q_scilexerspice_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerSpice_OnColor((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self, int style ```
bool q_scilexerspice_eol_fill(void* self, int style) {
    return QsciLexerSpice_EolFill((QsciLexerSpice*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self, int style ```
bool q_scilexerspice_qbase_eol_fill(void* self, int style) {
    return QsciLexerSpice_QBaseEolFill((QsciLexerSpice*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, bool (*slot)(QsciLexerSpice*, int) ```
void q_scilexerspice_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerSpice_OnEolFill((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self, int style ```
QFont* q_scilexerspice_font(void* self, int style) {
    return QsciLexerSpice_Font((QsciLexerSpice*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self, int style ```
QFont* q_scilexerspice_qbase_font(void* self, int style) {
    return QsciLexerSpice_QBaseFont((QsciLexerSpice*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, QFont* (*slot)(QsciLexerSpice*, int) ```
void q_scilexerspice_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerSpice_OnFont((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self ```
int32_t q_scilexerspice_indentation_guide_view(void* self) {
    return QsciLexerSpice_IndentationGuideView((QsciLexerSpice*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self ```
int32_t q_scilexerspice_qbase_indentation_guide_view(void* self) {
    return QsciLexerSpice_QBaseIndentationGuideView((QsciLexerSpice*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, int32_t (*slot)() ```
void q_scilexerspice_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerSpice_OnIndentationGuideView((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self ```
int32_t q_scilexerspice_default_style(void* self) {
    return QsciLexerSpice_DefaultStyle((QsciLexerSpice*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self ```
int32_t q_scilexerspice_qbase_default_style(void* self) {
    return QsciLexerSpice_QBaseDefaultStyle((QsciLexerSpice*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, int32_t (*slot)() ```
void q_scilexerspice_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerSpice_OnDefaultStyle((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self, int style ```
QColor* q_scilexerspice_paper(void* self, int style) {
    return QsciLexerSpice_Paper((QsciLexerSpice*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self, int style ```
QColor* q_scilexerspice_qbase_paper(void* self, int style) {
    return QsciLexerSpice_QBasePaper((QsciLexerSpice*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, QColor* (*slot)(QsciLexerSpice*, int) ```
void q_scilexerspice_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerSpice_OnPaper((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self, int style ```
QColor* q_scilexerspice_default_color_with_style(void* self, int style) {
    return QsciLexerSpice_DefaultColorWithStyle((QsciLexerSpice*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self, int style ```
QColor* q_scilexerspice_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerSpice_QBaseDefaultColorWithStyle((QsciLexerSpice*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, QColor* (*slot)(QsciLexerSpice*, int) ```
void q_scilexerspice_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerSpice_OnDefaultColorWithStyle((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self, int style ```
bool q_scilexerspice_default_eol_fill(void* self, int style) {
    return QsciLexerSpice_DefaultEolFill((QsciLexerSpice*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self, int style ```
bool q_scilexerspice_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerSpice_QBaseDefaultEolFill((QsciLexerSpice*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, bool (*slot)(QsciLexerSpice*, int) ```
void q_scilexerspice_on_default_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerSpice_OnDefaultEolFill((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self, int style ```
QFont* q_scilexerspice_default_font_with_style(void* self, int style) {
    return QsciLexerSpice_DefaultFontWithStyle((QsciLexerSpice*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self, int style ```
QFont* q_scilexerspice_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerSpice_QBaseDefaultFontWithStyle((QsciLexerSpice*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, QFont* (*slot)(QsciLexerSpice*, int) ```
void q_scilexerspice_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerSpice_OnDefaultFontWithStyle((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self, int style ```
QColor* q_scilexerspice_default_paper_with_style(void* self, int style) {
    return QsciLexerSpice_DefaultPaperWithStyle((QsciLexerSpice*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self, int style ```
QColor* q_scilexerspice_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerSpice_QBaseDefaultPaperWithStyle((QsciLexerSpice*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, QColor* (*slot)(QsciLexerSpice*, int) ```
void q_scilexerspice_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerSpice_OnDefaultPaperWithStyle((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self, QsciScintilla* editor ```
void q_scilexerspice_set_editor(void* self, void* editor) {
    QsciLexerSpice_SetEditor((QsciLexerSpice*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self, QsciScintilla* editor ```
void q_scilexerspice_qbase_set_editor(void* self, void* editor) {
    QsciLexerSpice_QBaseSetEditor((QsciLexerSpice*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, void (*slot)(QsciLexerSpice*, QsciScintilla*) ```
void q_scilexerspice_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerSpice_OnSetEditor((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#refreshProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self ```
void q_scilexerspice_refresh_properties(void* self) {
    QsciLexerSpice_RefreshProperties((QsciLexerSpice*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self ```
void q_scilexerspice_qbase_refresh_properties(void* self) {
    QsciLexerSpice_QBaseRefreshProperties((QsciLexerSpice*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, void (*slot)() ```
void q_scilexerspice_on_refresh_properties(void* self, void (*slot)()) {
    QsciLexerSpice_OnRefreshProperties((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self ```
int32_t q_scilexerspice_style_bits_needed(void* self) {
    return QsciLexerSpice_StyleBitsNeeded((QsciLexerSpice*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self ```
int32_t q_scilexerspice_qbase_style_bits_needed(void* self) {
    return QsciLexerSpice_QBaseStyleBitsNeeded((QsciLexerSpice*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, int32_t (*slot)() ```
void q_scilexerspice_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerSpice_OnStyleBitsNeeded((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self ```
const char* q_scilexerspice_word_characters(void* self) {
    return QsciLexerSpice_WordCharacters((QsciLexerSpice*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self ```
const char* q_scilexerspice_qbase_word_characters(void* self) {
    return QsciLexerSpice_QBaseWordCharacters((QsciLexerSpice*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, const char* (*slot)() ```
void q_scilexerspice_on_word_characters(void* self, const char* (*slot)()) {
    QsciLexerSpice_OnWordCharacters((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self, int autoindentstyle ```
void q_scilexerspice_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerSpice_SetAutoIndentStyle((QsciLexerSpice*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self, int autoindentstyle ```
void q_scilexerspice_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerSpice_QBaseSetAutoIndentStyle((QsciLexerSpice*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, void (*slot)(QsciLexerSpice*, int) ```
void q_scilexerspice_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerSpice_OnSetAutoIndentStyle((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self, QColor* c, int style ```
void q_scilexerspice_set_color(void* self, void* c, int style) {
    QsciLexerSpice_SetColor((QsciLexerSpice*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self, QColor* c, int style ```
void q_scilexerspice_qbase_set_color(void* self, void* c, int style) {
    QsciLexerSpice_QBaseSetColor((QsciLexerSpice*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, void (*slot)(QsciLexerSpice*, QColor*, int) ```
void q_scilexerspice_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerSpice_OnSetColor((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self, bool eoffill, int style ```
void q_scilexerspice_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerSpice_SetEolFill((QsciLexerSpice*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self, bool eoffill, int style ```
void q_scilexerspice_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerSpice_QBaseSetEolFill((QsciLexerSpice*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, void (*slot)(QsciLexerSpice*, bool, int) ```
void q_scilexerspice_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerSpice_OnSetEolFill((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self, QFont* f, int style ```
void q_scilexerspice_set_font(void* self, void* f, int style) {
    QsciLexerSpice_SetFont((QsciLexerSpice*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self, QFont* f, int style ```
void q_scilexerspice_qbase_set_font(void* self, void* f, int style) {
    QsciLexerSpice_QBaseSetFont((QsciLexerSpice*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, void (*slot)(QsciLexerSpice*, QFont*, int) ```
void q_scilexerspice_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerSpice_OnSetFont((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self, QColor* c, int style ```
void q_scilexerspice_set_paper(void* self, void* c, int style) {
    QsciLexerSpice_SetPaper((QsciLexerSpice*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self, QColor* c, int style ```
void q_scilexerspice_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerSpice_QBaseSetPaper((QsciLexerSpice*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, void (*slot)(QsciLexerSpice*, QColor*, int) ```
void q_scilexerspice_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerSpice_OnSetPaper((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self, QSettings* qs, const char* prefix ```
bool q_scilexerspice_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerSpice_ReadProperties((QsciLexerSpice*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self, QSettings* qs, const char* prefix ```
bool q_scilexerspice_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerSpice_QBaseReadProperties((QsciLexerSpice*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, bool (*slot)(QsciLexerSpice*, QSettings*, const char*) ```
void q_scilexerspice_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerSpice_OnReadProperties((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self, QSettings* qs, const char* prefix ```
bool q_scilexerspice_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerSpice_WriteProperties((QsciLexerSpice*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self, QSettings* qs, const char* prefix ```
bool q_scilexerspice_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerSpice_QBaseWriteProperties((QsciLexerSpice*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, bool (*slot)(QsciLexerSpice*, QSettings*, const char*) ```
void q_scilexerspice_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerSpice_OnWriteProperties((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self, QEvent* event ```
bool q_scilexerspice_event(void* self, void* event) {
    return QsciLexerSpice_Event((QsciLexerSpice*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self, QEvent* event ```
bool q_scilexerspice_qbase_event(void* self, void* event) {
    return QsciLexerSpice_QBaseEvent((QsciLexerSpice*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, bool (*slot)(QsciLexerSpice*, QEvent*) ```
void q_scilexerspice_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerSpice_OnEvent((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self, QObject* watched, QEvent* event ```
bool q_scilexerspice_event_filter(void* self, void* watched, void* event) {
    return QsciLexerSpice_EventFilter((QsciLexerSpice*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self, QObject* watched, QEvent* event ```
bool q_scilexerspice_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerSpice_QBaseEventFilter((QsciLexerSpice*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, bool (*slot)(QsciLexerSpice*, QObject*, QEvent*) ```
void q_scilexerspice_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerSpice_OnEventFilter((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self, QTimerEvent* event ```
void q_scilexerspice_timer_event(void* self, void* event) {
    QsciLexerSpice_TimerEvent((QsciLexerSpice*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self, QTimerEvent* event ```
void q_scilexerspice_qbase_timer_event(void* self, void* event) {
    QsciLexerSpice_QBaseTimerEvent((QsciLexerSpice*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, void (*slot)(QsciLexerSpice*, QTimerEvent*) ```
void q_scilexerspice_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerSpice_OnTimerEvent((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self, QChildEvent* event ```
void q_scilexerspice_child_event(void* self, void* event) {
    QsciLexerSpice_ChildEvent((QsciLexerSpice*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self, QChildEvent* event ```
void q_scilexerspice_qbase_child_event(void* self, void* event) {
    QsciLexerSpice_QBaseChildEvent((QsciLexerSpice*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, void (*slot)(QsciLexerSpice*, QChildEvent*) ```
void q_scilexerspice_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerSpice_OnChildEvent((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self, QEvent* event ```
void q_scilexerspice_custom_event(void* self, void* event) {
    QsciLexerSpice_CustomEvent((QsciLexerSpice*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self, QEvent* event ```
void q_scilexerspice_qbase_custom_event(void* self, void* event) {
    QsciLexerSpice_QBaseCustomEvent((QsciLexerSpice*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, void (*slot)(QsciLexerSpice*, QEvent*) ```
void q_scilexerspice_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerSpice_OnCustomEvent((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self, QMetaMethod* signal ```
void q_scilexerspice_connect_notify(void* self, void* signal) {
    QsciLexerSpice_ConnectNotify((QsciLexerSpice*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self, QMetaMethod* signal ```
void q_scilexerspice_qbase_connect_notify(void* self, void* signal) {
    QsciLexerSpice_QBaseConnectNotify((QsciLexerSpice*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, void (*slot)(QsciLexerSpice*, QMetaMethod*) ```
void q_scilexerspice_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerSpice_OnConnectNotify((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self, QMetaMethod* signal ```
void q_scilexerspice_disconnect_notify(void* self, void* signal) {
    QsciLexerSpice_DisconnectNotify((QsciLexerSpice*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self, QMetaMethod* signal ```
void q_scilexerspice_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerSpice_QBaseDisconnectNotify((QsciLexerSpice*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, void (*slot)(QsciLexerSpice*, QMetaMethod*) ```
void q_scilexerspice_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerSpice_OnDisconnectNotify((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self ```
QObject* q_scilexerspice_sender(void* self) {
    return QsciLexerSpice_Sender((QsciLexerSpice*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self ```
QObject* q_scilexerspice_qbase_sender(void* self) {
    return QsciLexerSpice_QBaseSender((QsciLexerSpice*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, QObject* (*slot)() ```
void q_scilexerspice_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerSpice_OnSender((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self ```
int32_t q_scilexerspice_sender_signal_index(void* self) {
    return QsciLexerSpice_SenderSignalIndex((QsciLexerSpice*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self ```
int32_t q_scilexerspice_qbase_sender_signal_index(void* self) {
    return QsciLexerSpice_QBaseSenderSignalIndex((QsciLexerSpice*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, int32_t (*slot)() ```
void q_scilexerspice_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerSpice_OnSenderSignalIndex((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self, const char* signal ```
int32_t q_scilexerspice_receivers(void* self, const char* signal) {
    return QsciLexerSpice_Receivers((QsciLexerSpice*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self, const char* signal ```
int32_t q_scilexerspice_qbase_receivers(void* self, const char* signal) {
    return QsciLexerSpice_QBaseReceivers((QsciLexerSpice*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, int32_t (*slot)(QsciLexerSpice*, const char*) ```
void q_scilexerspice_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerSpice_OnReceivers((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSpice* self, QMetaMethod* signal ```
bool q_scilexerspice_is_signal_connected(void* self, void* signal) {
    return QsciLexerSpice_IsSignalConnected((QsciLexerSpice*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSpice* self, QMetaMethod* signal ```
bool q_scilexerspice_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerSpice_QBaseIsSignalConnected((QsciLexerSpice*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSpice* self, bool (*slot)(QsciLexerSpice*, QMetaMethod*) ```
void q_scilexerspice_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerSpice_OnIsSignalConnected((QsciLexerSpice*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexerSpice* self ```
void q_scilexerspice_delete(void* self) {
    QsciLexerSpice_Delete((QsciLexerSpice*)(self));
}