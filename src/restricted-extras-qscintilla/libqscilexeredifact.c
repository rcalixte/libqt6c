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
#include "libqscilexeredifact.hpp"
#include "libqscilexeredifact.h"

/// https://doc.qt.io/qt-6/qscilexeredifact.html

/// q_scilexeredifact_new constructs a new QsciLexerEDIFACT object.
///
///
QsciLexerEDIFACT* q_scilexeredifact_new() {
    return QsciLexerEDIFACT_new();
}

/// q_scilexeredifact_new2 constructs a new QsciLexerEDIFACT object.
///
/// ``` QObject* parent ```
QsciLexerEDIFACT* q_scilexeredifact_new2(void* parent) {
    return QsciLexerEDIFACT_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerEDIFACT* self ```
QMetaObject* q_scilexeredifact_meta_object(void* self) {
    return QsciLexerEDIFACT_MetaObject((QsciLexerEDIFACT*)self);
}

/// ``` QsciLexerEDIFACT* self, const char* param1 ```
void* q_scilexeredifact_metacast(void* self, const char* param1) {
    return QsciLexerEDIFACT_Metacast((QsciLexerEDIFACT*)self, param1);
}

/// ``` QsciLexerEDIFACT* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexeredifact_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerEDIFACT_Metacall((QsciLexerEDIFACT*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerEDIFACT* self, int32_t (*slot)(QsciLexerEDIFACT*, enum QMetaObject__Call, int, void*) ```
void q_scilexeredifact_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerEDIFACT_OnMetacall((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerEDIFACT* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexeredifact_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerEDIFACT_QBaseMetacall((QsciLexerEDIFACT*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexeredifact_tr(const char* s) {
    libqt_string _str = QsciLexerEDIFACT_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexeredifact.html#language)
///
/// ``` QsciLexerEDIFACT* self ```
const char* q_scilexeredifact_language(void* self) {
    return QsciLexerEDIFACT_Language((QsciLexerEDIFACT*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexeredifact.html#lexer)
///
/// ``` QsciLexerEDIFACT* self ```
const char* q_scilexeredifact_lexer(void* self) {
    return QsciLexerEDIFACT_Lexer((QsciLexerEDIFACT*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexeredifact.html#defaultColor)
///
/// ``` QsciLexerEDIFACT* self, int style ```
QColor* q_scilexeredifact_default_color(void* self, int style) {
    return QsciLexerEDIFACT_DefaultColor((QsciLexerEDIFACT*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexeredifact.html#description)
///
/// ``` QsciLexerEDIFACT* self, int style ```
const char* q_scilexeredifact_description(void* self, int style) {
    libqt_string _str = QsciLexerEDIFACT_Description((QsciLexerEDIFACT*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexeredifact_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerEDIFACT_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexeredifact_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerEDIFACT_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerEDIFACT* self ```
QsciAbstractAPIs* q_scilexeredifact_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerEDIFACT* self ```
int32_t q_scilexeredifact_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// ``` QsciLexerEDIFACT* self ```
QFont* q_scilexeredifact_default_font(void* self) {
    return QsciLexer_DefaultFont((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// ``` QsciLexerEDIFACT* self ```
QColor* q_scilexeredifact_default_paper(void* self) {
    return QsciLexer_DefaultPaper((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerEDIFACT* self ```
QsciScintilla* q_scilexeredifact_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerEDIFACT* self, QsciAbstractAPIs* apis ```
void q_scilexeredifact_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerEDIFACT* self, QColor* c ```
void q_scilexeredifact_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerEDIFACT* self, QFont* f ```
void q_scilexeredifact_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerEDIFACT* self, QColor* c ```
void q_scilexeredifact_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerEDIFACT* self, QSettings* qs ```
bool q_scilexeredifact_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerEDIFACT* self, QSettings* qs ```
bool q_scilexeredifact_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerEDIFACT* self, QColor* c, int style ```
void q_scilexeredifact_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerEDIFACT* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexeredifact_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerEDIFACT* self, bool eolfilled, int style ```
void q_scilexeredifact_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerEDIFACT* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexeredifact_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerEDIFACT* self, QFont* f, int style ```
void q_scilexeredifact_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerEDIFACT* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexeredifact_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerEDIFACT* self, QColor* c, int style ```
void q_scilexeredifact_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerEDIFACT* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexeredifact_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerEDIFACT* self, const char* prop, const char* val ```
void q_scilexeredifact_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerEDIFACT* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexeredifact_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerEDIFACT* self, QSettings* qs, const char* prefix ```
bool q_scilexeredifact_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerEDIFACT* self, QSettings* qs, const char* prefix ```
bool q_scilexeredifact_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerEDIFACT* self ```
const char* q_scilexeredifact_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerEDIFACT* self, const char* name ```
void q_scilexeredifact_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerEDIFACT* self ```
bool q_scilexeredifact_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerEDIFACT* self ```
bool q_scilexeredifact_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerEDIFACT* self ```
bool q_scilexeredifact_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerEDIFACT* self ```
bool q_scilexeredifact_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerEDIFACT* self, bool b ```
bool q_scilexeredifact_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerEDIFACT* self ```
QThread* q_scilexeredifact_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerEDIFACT* self, QThread* thread ```
void q_scilexeredifact_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerEDIFACT* self, int interval ```
int32_t q_scilexeredifact_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerEDIFACT* self, int id ```
void q_scilexeredifact_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerEDIFACT* self ```
libqt_list /* of QObject* */ q_scilexeredifact_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerEDIFACT* self, QObject* parent ```
void q_scilexeredifact_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerEDIFACT* self, QObject* filterObj ```
void q_scilexeredifact_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerEDIFACT* self, QObject* obj ```
void q_scilexeredifact_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexeredifact_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerEDIFACT* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexeredifact_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexeredifact_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexeredifact_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerEDIFACT* self ```
void q_scilexeredifact_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerEDIFACT* self ```
void q_scilexeredifact_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerEDIFACT* self, const char* name, QVariant* value ```
bool q_scilexeredifact_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerEDIFACT* self, const char* name ```
QVariant* q_scilexeredifact_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerEDIFACT* self ```
const char** q_scilexeredifact_dynamic_property_names(void* self) {
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
/// ``` QsciLexerEDIFACT* self ```
QBindingStorage* q_scilexeredifact_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerEDIFACT* self ```
QBindingStorage* q_scilexeredifact_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerEDIFACT* self ```
void q_scilexeredifact_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexerEDIFACT* self, void (*slot)(QObject*) ```
void q_scilexeredifact_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerEDIFACT* self ```
QObject* q_scilexeredifact_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerEDIFACT* self, const char* classname ```
bool q_scilexeredifact_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerEDIFACT* self ```
void q_scilexeredifact_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerEDIFACT* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexeredifact_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexeredifact_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerEDIFACT* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexeredifact_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerEDIFACT* self, QObject* param1 ```
void q_scilexeredifact_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexerEDIFACT* self, void (*slot)(QObject*, QObject*) ```
void q_scilexeredifact_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self ```
int32_t q_scilexeredifact_lexer_id(void* self) {
    return QsciLexerEDIFACT_LexerId((QsciLexerEDIFACT*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self ```
int32_t q_scilexeredifact_qbase_lexer_id(void* self) {
    return QsciLexerEDIFACT_QBaseLexerId((QsciLexerEDIFACT*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int32_t (*slot)() ```
void q_scilexeredifact_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerEDIFACT_OnLexerId((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self ```
const char* q_scilexeredifact_auto_completion_fillups(void* self) {
    return QsciLexerEDIFACT_AutoCompletionFillups((QsciLexerEDIFACT*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self ```
const char* q_scilexeredifact_qbase_auto_completion_fillups(void* self) {
    return QsciLexerEDIFACT_QBaseAutoCompletionFillups((QsciLexerEDIFACT*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, const char* (*slot)() ```
void q_scilexeredifact_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerEDIFACT_OnAutoCompletionFillups((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self ```
const char** q_scilexeredifact_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerEDIFACT_AutoCompletionWordSeparators((QsciLexerEDIFACT*)self);
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
/// ``` QsciLexerEDIFACT* self ```
const char** q_scilexeredifact_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerEDIFACT_QBaseAutoCompletionWordSeparators((QsciLexerEDIFACT*)self);
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
/// ``` QsciLexerEDIFACT* self, const char** (*slot)() ```
void q_scilexeredifact_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerEDIFACT_OnAutoCompletionWordSeparators((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int* style ```
const char* q_scilexeredifact_block_end(void* self, int* style) {
    return QsciLexerEDIFACT_BlockEnd((QsciLexerEDIFACT*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int* style ```
const char* q_scilexeredifact_qbase_block_end(void* self, int* style) {
    return QsciLexerEDIFACT_QBaseBlockEnd((QsciLexerEDIFACT*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, const char* (*slot)(QsciLexerEDIFACT*, int*) ```
void q_scilexeredifact_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerEDIFACT_OnBlockEnd((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self ```
int32_t q_scilexeredifact_block_lookback(void* self) {
    return QsciLexerEDIFACT_BlockLookback((QsciLexerEDIFACT*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self ```
int32_t q_scilexeredifact_qbase_block_lookback(void* self) {
    return QsciLexerEDIFACT_QBaseBlockLookback((QsciLexerEDIFACT*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int32_t (*slot)() ```
void q_scilexeredifact_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerEDIFACT_OnBlockLookback((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int* style ```
const char* q_scilexeredifact_block_start(void* self, int* style) {
    return QsciLexerEDIFACT_BlockStart((QsciLexerEDIFACT*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int* style ```
const char* q_scilexeredifact_qbase_block_start(void* self, int* style) {
    return QsciLexerEDIFACT_QBaseBlockStart((QsciLexerEDIFACT*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, const char* (*slot)(QsciLexerEDIFACT*, int*) ```
void q_scilexeredifact_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerEDIFACT_OnBlockStart((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int* style ```
const char* q_scilexeredifact_block_start_keyword(void* self, int* style) {
    return QsciLexerEDIFACT_BlockStartKeyword((QsciLexerEDIFACT*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int* style ```
const char* q_scilexeredifact_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerEDIFACT_QBaseBlockStartKeyword((QsciLexerEDIFACT*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, const char* (*slot)(QsciLexerEDIFACT*, int*) ```
void q_scilexeredifact_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerEDIFACT_OnBlockStartKeyword((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#braceStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self ```
int32_t q_scilexeredifact_brace_style(void* self) {
    return QsciLexerEDIFACT_BraceStyle((QsciLexerEDIFACT*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self ```
int32_t q_scilexeredifact_qbase_brace_style(void* self) {
    return QsciLexerEDIFACT_QBaseBraceStyle((QsciLexerEDIFACT*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int32_t (*slot)() ```
void q_scilexeredifact_on_brace_style(void* self, int32_t (*slot)()) {
    QsciLexerEDIFACT_OnBraceStyle((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self ```
bool q_scilexeredifact_case_sensitive(void* self) {
    return QsciLexerEDIFACT_CaseSensitive((QsciLexerEDIFACT*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self ```
bool q_scilexeredifact_qbase_case_sensitive(void* self) {
    return QsciLexerEDIFACT_QBaseCaseSensitive((QsciLexerEDIFACT*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, bool (*slot)() ```
void q_scilexeredifact_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerEDIFACT_OnCaseSensitive((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int style ```
QColor* q_scilexeredifact_color(void* self, int style) {
    return QsciLexerEDIFACT_Color((QsciLexerEDIFACT*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int style ```
QColor* q_scilexeredifact_qbase_color(void* self, int style) {
    return QsciLexerEDIFACT_QBaseColor((QsciLexerEDIFACT*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QColor* (*slot)(QsciLexerEDIFACT*, int) ```
void q_scilexeredifact_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerEDIFACT_OnColor((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int style ```
bool q_scilexeredifact_eol_fill(void* self, int style) {
    return QsciLexerEDIFACT_EolFill((QsciLexerEDIFACT*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int style ```
bool q_scilexeredifact_qbase_eol_fill(void* self, int style) {
    return QsciLexerEDIFACT_QBaseEolFill((QsciLexerEDIFACT*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, bool (*slot)(QsciLexerEDIFACT*, int) ```
void q_scilexeredifact_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerEDIFACT_OnEolFill((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int style ```
QFont* q_scilexeredifact_font(void* self, int style) {
    return QsciLexerEDIFACT_Font((QsciLexerEDIFACT*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int style ```
QFont* q_scilexeredifact_qbase_font(void* self, int style) {
    return QsciLexerEDIFACT_QBaseFont((QsciLexerEDIFACT*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QFont* (*slot)(QsciLexerEDIFACT*, int) ```
void q_scilexeredifact_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerEDIFACT_OnFont((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self ```
int32_t q_scilexeredifact_indentation_guide_view(void* self) {
    return QsciLexerEDIFACT_IndentationGuideView((QsciLexerEDIFACT*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self ```
int32_t q_scilexeredifact_qbase_indentation_guide_view(void* self) {
    return QsciLexerEDIFACT_QBaseIndentationGuideView((QsciLexerEDIFACT*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int32_t (*slot)() ```
void q_scilexeredifact_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerEDIFACT_OnIndentationGuideView((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#keywords)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int set ```
const char* q_scilexeredifact_keywords(void* self, int set) {
    return QsciLexerEDIFACT_Keywords((QsciLexerEDIFACT*)self, set);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int set ```
const char* q_scilexeredifact_qbase_keywords(void* self, int set) {
    return QsciLexerEDIFACT_QBaseKeywords((QsciLexerEDIFACT*)self, set);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, const char* (*slot)(QsciLexerEDIFACT*, int) ```
void q_scilexeredifact_on_keywords(void* self, const char* (*slot)(void*, int)) {
    QsciLexerEDIFACT_OnKeywords((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self ```
int32_t q_scilexeredifact_default_style(void* self) {
    return QsciLexerEDIFACT_DefaultStyle((QsciLexerEDIFACT*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self ```
int32_t q_scilexeredifact_qbase_default_style(void* self) {
    return QsciLexerEDIFACT_QBaseDefaultStyle((QsciLexerEDIFACT*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int32_t (*slot)() ```
void q_scilexeredifact_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerEDIFACT_OnDefaultStyle((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int style ```
QColor* q_scilexeredifact_paper(void* self, int style) {
    return QsciLexerEDIFACT_Paper((QsciLexerEDIFACT*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int style ```
QColor* q_scilexeredifact_qbase_paper(void* self, int style) {
    return QsciLexerEDIFACT_QBasePaper((QsciLexerEDIFACT*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QColor* (*slot)(QsciLexerEDIFACT*, int) ```
void q_scilexeredifact_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerEDIFACT_OnPaper((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int style ```
QColor* q_scilexeredifact_default_color_with_style(void* self, int style) {
    return QsciLexerEDIFACT_DefaultColorWithStyle((QsciLexerEDIFACT*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int style ```
QColor* q_scilexeredifact_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerEDIFACT_QBaseDefaultColorWithStyle((QsciLexerEDIFACT*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QColor* (*slot)(QsciLexerEDIFACT*, int) ```
void q_scilexeredifact_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerEDIFACT_OnDefaultColorWithStyle((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int style ```
bool q_scilexeredifact_default_eol_fill(void* self, int style) {
    return QsciLexerEDIFACT_DefaultEolFill((QsciLexerEDIFACT*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int style ```
bool q_scilexeredifact_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerEDIFACT_QBaseDefaultEolFill((QsciLexerEDIFACT*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, bool (*slot)(QsciLexerEDIFACT*, int) ```
void q_scilexeredifact_on_default_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerEDIFACT_OnDefaultEolFill((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int style ```
QFont* q_scilexeredifact_default_font_with_style(void* self, int style) {
    return QsciLexerEDIFACT_DefaultFontWithStyle((QsciLexerEDIFACT*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int style ```
QFont* q_scilexeredifact_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerEDIFACT_QBaseDefaultFontWithStyle((QsciLexerEDIFACT*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QFont* (*slot)(QsciLexerEDIFACT*, int) ```
void q_scilexeredifact_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerEDIFACT_OnDefaultFontWithStyle((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int style ```
QColor* q_scilexeredifact_default_paper_with_style(void* self, int style) {
    return QsciLexerEDIFACT_DefaultPaperWithStyle((QsciLexerEDIFACT*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int style ```
QColor* q_scilexeredifact_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerEDIFACT_QBaseDefaultPaperWithStyle((QsciLexerEDIFACT*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QColor* (*slot)(QsciLexerEDIFACT*, int) ```
void q_scilexeredifact_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerEDIFACT_OnDefaultPaperWithStyle((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QsciScintilla* editor ```
void q_scilexeredifact_set_editor(void* self, void* editor) {
    QsciLexerEDIFACT_SetEditor((QsciLexerEDIFACT*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QsciScintilla* editor ```
void q_scilexeredifact_qbase_set_editor(void* self, void* editor) {
    QsciLexerEDIFACT_QBaseSetEditor((QsciLexerEDIFACT*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, void (*slot)(QsciLexerEDIFACT*, QsciScintilla*) ```
void q_scilexeredifact_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerEDIFACT_OnSetEditor((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#refreshProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self ```
void q_scilexeredifact_refresh_properties(void* self) {
    QsciLexerEDIFACT_RefreshProperties((QsciLexerEDIFACT*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self ```
void q_scilexeredifact_qbase_refresh_properties(void* self) {
    QsciLexerEDIFACT_QBaseRefreshProperties((QsciLexerEDIFACT*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, void (*slot)() ```
void q_scilexeredifact_on_refresh_properties(void* self, void (*slot)()) {
    QsciLexerEDIFACT_OnRefreshProperties((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self ```
int32_t q_scilexeredifact_style_bits_needed(void* self) {
    return QsciLexerEDIFACT_StyleBitsNeeded((QsciLexerEDIFACT*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self ```
int32_t q_scilexeredifact_qbase_style_bits_needed(void* self) {
    return QsciLexerEDIFACT_QBaseStyleBitsNeeded((QsciLexerEDIFACT*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int32_t (*slot)() ```
void q_scilexeredifact_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerEDIFACT_OnStyleBitsNeeded((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self ```
const char* q_scilexeredifact_word_characters(void* self) {
    return QsciLexerEDIFACT_WordCharacters((QsciLexerEDIFACT*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self ```
const char* q_scilexeredifact_qbase_word_characters(void* self) {
    return QsciLexerEDIFACT_QBaseWordCharacters((QsciLexerEDIFACT*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, const char* (*slot)() ```
void q_scilexeredifact_on_word_characters(void* self, const char* (*slot)()) {
    QsciLexerEDIFACT_OnWordCharacters((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int autoindentstyle ```
void q_scilexeredifact_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerEDIFACT_SetAutoIndentStyle((QsciLexerEDIFACT*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int autoindentstyle ```
void q_scilexeredifact_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerEDIFACT_QBaseSetAutoIndentStyle((QsciLexerEDIFACT*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, void (*slot)(QsciLexerEDIFACT*, int) ```
void q_scilexeredifact_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerEDIFACT_OnSetAutoIndentStyle((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QColor* c, int style ```
void q_scilexeredifact_set_color(void* self, void* c, int style) {
    QsciLexerEDIFACT_SetColor((QsciLexerEDIFACT*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QColor* c, int style ```
void q_scilexeredifact_qbase_set_color(void* self, void* c, int style) {
    QsciLexerEDIFACT_QBaseSetColor((QsciLexerEDIFACT*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, void (*slot)(QsciLexerEDIFACT*, QColor*, int) ```
void q_scilexeredifact_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerEDIFACT_OnSetColor((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, bool eoffill, int style ```
void q_scilexeredifact_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerEDIFACT_SetEolFill((QsciLexerEDIFACT*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, bool eoffill, int style ```
void q_scilexeredifact_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerEDIFACT_QBaseSetEolFill((QsciLexerEDIFACT*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, void (*slot)(QsciLexerEDIFACT*, bool, int) ```
void q_scilexeredifact_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerEDIFACT_OnSetEolFill((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QFont* f, int style ```
void q_scilexeredifact_set_font(void* self, void* f, int style) {
    QsciLexerEDIFACT_SetFont((QsciLexerEDIFACT*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QFont* f, int style ```
void q_scilexeredifact_qbase_set_font(void* self, void* f, int style) {
    QsciLexerEDIFACT_QBaseSetFont((QsciLexerEDIFACT*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, void (*slot)(QsciLexerEDIFACT*, QFont*, int) ```
void q_scilexeredifact_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerEDIFACT_OnSetFont((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QColor* c, int style ```
void q_scilexeredifact_set_paper(void* self, void* c, int style) {
    QsciLexerEDIFACT_SetPaper((QsciLexerEDIFACT*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QColor* c, int style ```
void q_scilexeredifact_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerEDIFACT_QBaseSetPaper((QsciLexerEDIFACT*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, void (*slot)(QsciLexerEDIFACT*, QColor*, int) ```
void q_scilexeredifact_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerEDIFACT_OnSetPaper((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QSettings* qs, const char* prefix ```
bool q_scilexeredifact_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerEDIFACT_ReadProperties((QsciLexerEDIFACT*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QSettings* qs, const char* prefix ```
bool q_scilexeredifact_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerEDIFACT_QBaseReadProperties((QsciLexerEDIFACT*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, bool (*slot)(QsciLexerEDIFACT*, QSettings*, const char*) ```
void q_scilexeredifact_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerEDIFACT_OnReadProperties((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QSettings* qs, const char* prefix ```
bool q_scilexeredifact_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerEDIFACT_WriteProperties((QsciLexerEDIFACT*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QSettings* qs, const char* prefix ```
bool q_scilexeredifact_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerEDIFACT_QBaseWriteProperties((QsciLexerEDIFACT*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, bool (*slot)(QsciLexerEDIFACT*, QSettings*, const char*) ```
void q_scilexeredifact_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerEDIFACT_OnWriteProperties((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QEvent* event ```
bool q_scilexeredifact_event(void* self, void* event) {
    return QsciLexerEDIFACT_Event((QsciLexerEDIFACT*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QEvent* event ```
bool q_scilexeredifact_qbase_event(void* self, void* event) {
    return QsciLexerEDIFACT_QBaseEvent((QsciLexerEDIFACT*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, bool (*slot)(QsciLexerEDIFACT*, QEvent*) ```
void q_scilexeredifact_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerEDIFACT_OnEvent((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QObject* watched, QEvent* event ```
bool q_scilexeredifact_event_filter(void* self, void* watched, void* event) {
    return QsciLexerEDIFACT_EventFilter((QsciLexerEDIFACT*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QObject* watched, QEvent* event ```
bool q_scilexeredifact_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerEDIFACT_QBaseEventFilter((QsciLexerEDIFACT*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, bool (*slot)(QsciLexerEDIFACT*, QObject*, QEvent*) ```
void q_scilexeredifact_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerEDIFACT_OnEventFilter((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QTimerEvent* event ```
void q_scilexeredifact_timer_event(void* self, void* event) {
    QsciLexerEDIFACT_TimerEvent((QsciLexerEDIFACT*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QTimerEvent* event ```
void q_scilexeredifact_qbase_timer_event(void* self, void* event) {
    QsciLexerEDIFACT_QBaseTimerEvent((QsciLexerEDIFACT*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, void (*slot)(QsciLexerEDIFACT*, QTimerEvent*) ```
void q_scilexeredifact_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerEDIFACT_OnTimerEvent((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QChildEvent* event ```
void q_scilexeredifact_child_event(void* self, void* event) {
    QsciLexerEDIFACT_ChildEvent((QsciLexerEDIFACT*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QChildEvent* event ```
void q_scilexeredifact_qbase_child_event(void* self, void* event) {
    QsciLexerEDIFACT_QBaseChildEvent((QsciLexerEDIFACT*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, void (*slot)(QsciLexerEDIFACT*, QChildEvent*) ```
void q_scilexeredifact_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerEDIFACT_OnChildEvent((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QEvent* event ```
void q_scilexeredifact_custom_event(void* self, void* event) {
    QsciLexerEDIFACT_CustomEvent((QsciLexerEDIFACT*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QEvent* event ```
void q_scilexeredifact_qbase_custom_event(void* self, void* event) {
    QsciLexerEDIFACT_QBaseCustomEvent((QsciLexerEDIFACT*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, void (*slot)(QsciLexerEDIFACT*, QEvent*) ```
void q_scilexeredifact_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerEDIFACT_OnCustomEvent((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QMetaMethod* signal ```
void q_scilexeredifact_connect_notify(void* self, void* signal) {
    QsciLexerEDIFACT_ConnectNotify((QsciLexerEDIFACT*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QMetaMethod* signal ```
void q_scilexeredifact_qbase_connect_notify(void* self, void* signal) {
    QsciLexerEDIFACT_QBaseConnectNotify((QsciLexerEDIFACT*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, void (*slot)(QsciLexerEDIFACT*, QMetaMethod*) ```
void q_scilexeredifact_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerEDIFACT_OnConnectNotify((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QMetaMethod* signal ```
void q_scilexeredifact_disconnect_notify(void* self, void* signal) {
    QsciLexerEDIFACT_DisconnectNotify((QsciLexerEDIFACT*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QMetaMethod* signal ```
void q_scilexeredifact_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerEDIFACT_QBaseDisconnectNotify((QsciLexerEDIFACT*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, void (*slot)(QsciLexerEDIFACT*, QMetaMethod*) ```
void q_scilexeredifact_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerEDIFACT_OnDisconnectNotify((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self ```
QObject* q_scilexeredifact_sender(void* self) {
    return QsciLexerEDIFACT_Sender((QsciLexerEDIFACT*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self ```
QObject* q_scilexeredifact_qbase_sender(void* self) {
    return QsciLexerEDIFACT_QBaseSender((QsciLexerEDIFACT*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QObject* (*slot)() ```
void q_scilexeredifact_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerEDIFACT_OnSender((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self ```
int32_t q_scilexeredifact_sender_signal_index(void* self) {
    return QsciLexerEDIFACT_SenderSignalIndex((QsciLexerEDIFACT*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self ```
int32_t q_scilexeredifact_qbase_sender_signal_index(void* self) {
    return QsciLexerEDIFACT_QBaseSenderSignalIndex((QsciLexerEDIFACT*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int32_t (*slot)() ```
void q_scilexeredifact_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerEDIFACT_OnSenderSignalIndex((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, const char* signal ```
int32_t q_scilexeredifact_receivers(void* self, const char* signal) {
    return QsciLexerEDIFACT_Receivers((QsciLexerEDIFACT*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, const char* signal ```
int32_t q_scilexeredifact_qbase_receivers(void* self, const char* signal) {
    return QsciLexerEDIFACT_QBaseReceivers((QsciLexerEDIFACT*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, int32_t (*slot)(QsciLexerEDIFACT*, const char*) ```
void q_scilexeredifact_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerEDIFACT_OnReceivers((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QMetaMethod* signal ```
bool q_scilexeredifact_is_signal_connected(void* self, void* signal) {
    return QsciLexerEDIFACT_IsSignalConnected((QsciLexerEDIFACT*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, QMetaMethod* signal ```
bool q_scilexeredifact_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerEDIFACT_QBaseIsSignalConnected((QsciLexerEDIFACT*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerEDIFACT* self, bool (*slot)(QsciLexerEDIFACT*, QMetaMethod*) ```
void q_scilexeredifact_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerEDIFACT_OnIsSignalConnected((QsciLexerEDIFACT*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexerEDIFACT* self ```
void q_scilexeredifact_delete(void* self) {
    QsciLexerEDIFACT_Delete((QsciLexerEDIFACT*)(self));
}