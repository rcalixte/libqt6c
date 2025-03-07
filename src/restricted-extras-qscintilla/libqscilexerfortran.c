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
#include "libqscilexerfortran77.hpp"
#include "../libqcoreevent.hpp"
#include "libqscilexerfortran.hpp"
#include "libqscilexerfortran.h"

/// https://doc.qt.io/qt-6/qscilexerfortran.html

/// q_scilexerfortran_new constructs a new QsciLexerFortran object.
///
///
QsciLexerFortran* q_scilexerfortran_new() {
    return QsciLexerFortran_new();
}

/// q_scilexerfortran_new2 constructs a new QsciLexerFortran object.
///
/// ``` QObject* parent ```
QsciLexerFortran* q_scilexerfortran_new2(void* parent) {
    return QsciLexerFortran_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerFortran* self ```
QMetaObject* q_scilexerfortran_meta_object(void* self) {
    return QsciLexerFortran_MetaObject((QsciLexerFortran*)self);
}

/// ``` QsciLexerFortran* self, const char* param1 ```
void* q_scilexerfortran_metacast(void* self, const char* param1) {
    return QsciLexerFortran_Metacast((QsciLexerFortran*)self, param1);
}

/// ``` QsciLexerFortran* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerfortran_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerFortran_Metacall((QsciLexerFortran*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerFortran* self, int32_t (*slot)(QsciLexerFortran*, enum QMetaObject__Call, int, void*) ```
void q_scilexerfortran_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerFortran_OnMetacall((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerFortran* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerfortran_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerFortran_QBaseMetacall((QsciLexerFortran*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexerfortran_tr(const char* s) {
    libqt_string _str = QsciLexerFortran_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran.html#language)
///
/// ``` QsciLexerFortran* self ```
const char* q_scilexerfortran_language(void* self) {
    return QsciLexerFortran_Language((QsciLexerFortran*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran.html#lexer)
///
/// ``` QsciLexerFortran* self ```
const char* q_scilexerfortran_lexer(void* self) {
    return QsciLexerFortran_Lexer((QsciLexerFortran*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran.html#keywords)
///
/// ``` QsciLexerFortran* self, int set ```
const char* q_scilexerfortran_keywords(void* self, int set) {
    return QsciLexerFortran_Keywords((QsciLexerFortran*)self, set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexerfortran_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerFortran_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexerfortran_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerFortran_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexerFortran77
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#defaultColor)
///
/// ``` QsciLexerFortran* self, int style ```
QColor* q_scilexerfortran_default_color(void* self, int style) {
    return QsciLexerFortran77_DefaultColor((QsciLexerFortran77*)self, style);
}

/// Inherited from QsciLexerFortran77
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#defaultFont)
///
/// ``` QsciLexerFortran* self, int style ```
QFont* q_scilexerfortran_default_font(void* self, int style) {
    return QsciLexerFortran77_DefaultFont((QsciLexerFortran77*)self, style);
}

/// Inherited from QsciLexerFortran77
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#defaultPaper)
///
/// ``` QsciLexerFortran* self, int style ```
QColor* q_scilexerfortran_default_paper(void* self, int style) {
    return QsciLexerFortran77_DefaultPaper((QsciLexerFortran77*)self, style);
}

/// Inherited from QsciLexerFortran77
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#foldCompact)
///
/// ``` QsciLexerFortran* self ```
bool q_scilexerfortran_fold_compact(void* self) {
    return QsciLexerFortran77_FoldCompact((QsciLexerFortran77*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerFortran* self ```
QsciAbstractAPIs* q_scilexerfortran_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerFortran* self ```
int32_t q_scilexerfortran_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerFortran* self ```
QsciScintilla* q_scilexerfortran_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerFortran* self, QsciAbstractAPIs* apis ```
void q_scilexerfortran_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerFortran* self, QColor* c ```
void q_scilexerfortran_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerFortran* self, QFont* f ```
void q_scilexerfortran_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerFortran* self, QColor* c ```
void q_scilexerfortran_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerFortran* self, QSettings* qs ```
bool q_scilexerfortran_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerFortran* self, QSettings* qs ```
bool q_scilexerfortran_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerFortran* self, QColor* c, int style ```
void q_scilexerfortran_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerFortran* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerfortran_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerFortran* self, bool eolfilled, int style ```
void q_scilexerfortran_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerFortran* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexerfortran_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerFortran* self, QFont* f, int style ```
void q_scilexerfortran_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerFortran* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexerfortran_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerFortran* self, QColor* c, int style ```
void q_scilexerfortran_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerFortran* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerfortran_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerFortran* self, const char* prop, const char* val ```
void q_scilexerfortran_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerFortran* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexerfortran_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerFortran* self, QSettings* qs, const char* prefix ```
bool q_scilexerfortran_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerFortran* self, QSettings* qs, const char* prefix ```
bool q_scilexerfortran_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerFortran* self ```
const char* q_scilexerfortran_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerFortran* self, const char* name ```
void q_scilexerfortran_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerFortran* self ```
bool q_scilexerfortran_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerFortran* self ```
bool q_scilexerfortran_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerFortran* self ```
bool q_scilexerfortran_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerFortran* self ```
bool q_scilexerfortran_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerFortran* self, bool b ```
bool q_scilexerfortran_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerFortran* self ```
QThread* q_scilexerfortran_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerFortran* self, QThread* thread ```
void q_scilexerfortran_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerFortran* self, int interval ```
int32_t q_scilexerfortran_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerFortran* self, int id ```
void q_scilexerfortran_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerFortran* self ```
libqt_list /* of QObject* */ q_scilexerfortran_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerFortran* self, QObject* parent ```
void q_scilexerfortran_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerFortran* self, QObject* filterObj ```
void q_scilexerfortran_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerFortran* self, QObject* obj ```
void q_scilexerfortran_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexerfortran_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerFortran* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexerfortran_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexerfortran_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexerfortran_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerFortran* self ```
void q_scilexerfortran_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerFortran* self ```
void q_scilexerfortran_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerFortran* self, const char* name, QVariant* value ```
bool q_scilexerfortran_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerFortran* self, const char* name ```
QVariant* q_scilexerfortran_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerFortran* self ```
const char** q_scilexerfortran_dynamic_property_names(void* self) {
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
/// ``` QsciLexerFortran* self ```
QBindingStorage* q_scilexerfortran_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerFortran* self ```
QBindingStorage* q_scilexerfortran_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerFortran* self ```
void q_scilexerfortran_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexerFortran* self, void (*slot)(QObject*) ```
void q_scilexerfortran_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerFortran* self ```
QObject* q_scilexerfortran_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerFortran* self, const char* classname ```
bool q_scilexerfortran_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerFortran* self ```
void q_scilexerfortran_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerFortran* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexerfortran_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerfortran_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerFortran* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerfortran_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerFortran* self, QObject* param1 ```
void q_scilexerfortran_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexerFortran* self, void (*slot)(QObject*, QObject*) ```
void q_scilexerfortran_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QsciLexerFortran77
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#setFoldCompact)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self, bool fold ```
void q_scilexerfortran_set_fold_compact(void* self, bool fold) {
    QsciLexerFortran_SetFoldCompact((QsciLexerFortran*)self, fold);
}

/// Inherited from QsciLexerFortran77
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self, bool fold ```
void q_scilexerfortran_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerFortran_QBaseSetFoldCompact((QsciLexerFortran*)self, fold);
}

/// Inherited from QsciLexerFortran77
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, void (*slot)(QsciLexerFortran*, bool) ```
void q_scilexerfortran_on_set_fold_compact(void* self, void (*slot)(void*, bool)) {
    QsciLexerFortran_OnSetFoldCompact((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self ```
int32_t q_scilexerfortran_lexer_id(void* self) {
    return QsciLexerFortran_LexerId((QsciLexerFortran*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self ```
int32_t q_scilexerfortran_qbase_lexer_id(void* self) {
    return QsciLexerFortran_QBaseLexerId((QsciLexerFortran*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, int32_t (*slot)() ```
void q_scilexerfortran_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerFortran_OnLexerId((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self ```
const char* q_scilexerfortran_auto_completion_fillups(void* self) {
    return QsciLexerFortran_AutoCompletionFillups((QsciLexerFortran*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self ```
const char* q_scilexerfortran_qbase_auto_completion_fillups(void* self) {
    return QsciLexerFortran_QBaseAutoCompletionFillups((QsciLexerFortran*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, const char* (*slot)() ```
void q_scilexerfortran_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerFortran_OnAutoCompletionFillups((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self ```
const char** q_scilexerfortran_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerFortran_AutoCompletionWordSeparators((QsciLexerFortran*)self);
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
/// ``` QsciLexerFortran* self ```
const char** q_scilexerfortran_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerFortran_QBaseAutoCompletionWordSeparators((QsciLexerFortran*)self);
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
/// ``` QsciLexerFortran* self, const char** (*slot)() ```
void q_scilexerfortran_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerFortran_OnAutoCompletionWordSeparators((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self, int* style ```
const char* q_scilexerfortran_block_end(void* self, int* style) {
    return QsciLexerFortran_BlockEnd((QsciLexerFortran*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self, int* style ```
const char* q_scilexerfortran_qbase_block_end(void* self, int* style) {
    return QsciLexerFortran_QBaseBlockEnd((QsciLexerFortran*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, const char* (*slot)(QsciLexerFortran*, int*) ```
void q_scilexerfortran_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerFortran_OnBlockEnd((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self ```
int32_t q_scilexerfortran_block_lookback(void* self) {
    return QsciLexerFortran_BlockLookback((QsciLexerFortran*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self ```
int32_t q_scilexerfortran_qbase_block_lookback(void* self) {
    return QsciLexerFortran_QBaseBlockLookback((QsciLexerFortran*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, int32_t (*slot)() ```
void q_scilexerfortran_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerFortran_OnBlockLookback((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self, int* style ```
const char* q_scilexerfortran_block_start(void* self, int* style) {
    return QsciLexerFortran_BlockStart((QsciLexerFortran*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self, int* style ```
const char* q_scilexerfortran_qbase_block_start(void* self, int* style) {
    return QsciLexerFortran_QBaseBlockStart((QsciLexerFortran*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, const char* (*slot)(QsciLexerFortran*, int*) ```
void q_scilexerfortran_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerFortran_OnBlockStart((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self, int* style ```
const char* q_scilexerfortran_block_start_keyword(void* self, int* style) {
    return QsciLexerFortran_BlockStartKeyword((QsciLexerFortran*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self, int* style ```
const char* q_scilexerfortran_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerFortran_QBaseBlockStartKeyword((QsciLexerFortran*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, const char* (*slot)(QsciLexerFortran*, int*) ```
void q_scilexerfortran_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerFortran_OnBlockStartKeyword((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#braceStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self ```
int32_t q_scilexerfortran_brace_style(void* self) {
    return QsciLexerFortran_BraceStyle((QsciLexerFortran*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self ```
int32_t q_scilexerfortran_qbase_brace_style(void* self) {
    return QsciLexerFortran_QBaseBraceStyle((QsciLexerFortran*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, int32_t (*slot)() ```
void q_scilexerfortran_on_brace_style(void* self, int32_t (*slot)()) {
    QsciLexerFortran_OnBraceStyle((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self ```
bool q_scilexerfortran_case_sensitive(void* self) {
    return QsciLexerFortran_CaseSensitive((QsciLexerFortran*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self ```
bool q_scilexerfortran_qbase_case_sensitive(void* self) {
    return QsciLexerFortran_QBaseCaseSensitive((QsciLexerFortran*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, bool (*slot)() ```
void q_scilexerfortran_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerFortran_OnCaseSensitive((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self, int style ```
QColor* q_scilexerfortran_color(void* self, int style) {
    return QsciLexerFortran_Color((QsciLexerFortran*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self, int style ```
QColor* q_scilexerfortran_qbase_color(void* self, int style) {
    return QsciLexerFortran_QBaseColor((QsciLexerFortran*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, QColor* (*slot)(QsciLexerFortran*, int) ```
void q_scilexerfortran_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerFortran_OnColor((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self, int style ```
bool q_scilexerfortran_eol_fill(void* self, int style) {
    return QsciLexerFortran_EolFill((QsciLexerFortran*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self, int style ```
bool q_scilexerfortran_qbase_eol_fill(void* self, int style) {
    return QsciLexerFortran_QBaseEolFill((QsciLexerFortran*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, bool (*slot)(QsciLexerFortran*, int) ```
void q_scilexerfortran_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerFortran_OnEolFill((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self, int style ```
QFont* q_scilexerfortran_font(void* self, int style) {
    return QsciLexerFortran_Font((QsciLexerFortran*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self, int style ```
QFont* q_scilexerfortran_qbase_font(void* self, int style) {
    return QsciLexerFortran_QBaseFont((QsciLexerFortran*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, QFont* (*slot)(QsciLexerFortran*, int) ```
void q_scilexerfortran_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerFortran_OnFont((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self ```
int32_t q_scilexerfortran_indentation_guide_view(void* self) {
    return QsciLexerFortran_IndentationGuideView((QsciLexerFortran*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self ```
int32_t q_scilexerfortran_qbase_indentation_guide_view(void* self) {
    return QsciLexerFortran_QBaseIndentationGuideView((QsciLexerFortran*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, int32_t (*slot)() ```
void q_scilexerfortran_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerFortran_OnIndentationGuideView((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self ```
int32_t q_scilexerfortran_default_style(void* self) {
    return QsciLexerFortran_DefaultStyle((QsciLexerFortran*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self ```
int32_t q_scilexerfortran_qbase_default_style(void* self) {
    return QsciLexerFortran_QBaseDefaultStyle((QsciLexerFortran*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, int32_t (*slot)() ```
void q_scilexerfortran_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerFortran_OnDefaultStyle((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#description)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self, int style ```
const char* q_scilexerfortran_description(void* self, int style) {
    libqt_string _str = QsciLexerFortran_Description((QsciLexerFortran*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self, int style ```
const char* q_scilexerfortran_qbase_description(void* self, int style) {
    libqt_string _str = QsciLexerFortran_QBaseDescription((QsciLexerFortran*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, const char* (*slot)(QsciLexerFortran*, int) ```
void q_scilexerfortran_on_description(void* self, const char* (*slot)(void*, int)) {
    QsciLexerFortran_OnDescription((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self, int style ```
QColor* q_scilexerfortran_paper(void* self, int style) {
    return QsciLexerFortran_Paper((QsciLexerFortran*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self, int style ```
QColor* q_scilexerfortran_qbase_paper(void* self, int style) {
    return QsciLexerFortran_QBasePaper((QsciLexerFortran*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, QColor* (*slot)(QsciLexerFortran*, int) ```
void q_scilexerfortran_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerFortran_OnPaper((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self, int style ```
QColor* q_scilexerfortran_default_color_with_style(void* self, int style) {
    return QsciLexerFortran_DefaultColorWithStyle((QsciLexerFortran*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self, int style ```
QColor* q_scilexerfortran_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerFortran_QBaseDefaultColorWithStyle((QsciLexerFortran*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, QColor* (*slot)(QsciLexerFortran*, int) ```
void q_scilexerfortran_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerFortran_OnDefaultColorWithStyle((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self, int style ```
bool q_scilexerfortran_default_eol_fill(void* self, int style) {
    return QsciLexerFortran_DefaultEolFill((QsciLexerFortran*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self, int style ```
bool q_scilexerfortran_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerFortran_QBaseDefaultEolFill((QsciLexerFortran*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, bool (*slot)(QsciLexerFortran*, int) ```
void q_scilexerfortran_on_default_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerFortran_OnDefaultEolFill((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self, int style ```
QFont* q_scilexerfortran_default_font_with_style(void* self, int style) {
    return QsciLexerFortran_DefaultFontWithStyle((QsciLexerFortran*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self, int style ```
QFont* q_scilexerfortran_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerFortran_QBaseDefaultFontWithStyle((QsciLexerFortran*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, QFont* (*slot)(QsciLexerFortran*, int) ```
void q_scilexerfortran_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerFortran_OnDefaultFontWithStyle((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self, int style ```
QColor* q_scilexerfortran_default_paper_with_style(void* self, int style) {
    return QsciLexerFortran_DefaultPaperWithStyle((QsciLexerFortran*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self, int style ```
QColor* q_scilexerfortran_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerFortran_QBaseDefaultPaperWithStyle((QsciLexerFortran*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, QColor* (*slot)(QsciLexerFortran*, int) ```
void q_scilexerfortran_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerFortran_OnDefaultPaperWithStyle((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self, QsciScintilla* editor ```
void q_scilexerfortran_set_editor(void* self, void* editor) {
    QsciLexerFortran_SetEditor((QsciLexerFortran*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self, QsciScintilla* editor ```
void q_scilexerfortran_qbase_set_editor(void* self, void* editor) {
    QsciLexerFortran_QBaseSetEditor((QsciLexerFortran*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, void (*slot)(QsciLexerFortran*, QsciScintilla*) ```
void q_scilexerfortran_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerFortran_OnSetEditor((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#refreshProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self ```
void q_scilexerfortran_refresh_properties(void* self) {
    QsciLexerFortran_RefreshProperties((QsciLexerFortran*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self ```
void q_scilexerfortran_qbase_refresh_properties(void* self) {
    QsciLexerFortran_QBaseRefreshProperties((QsciLexerFortran*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, void (*slot)() ```
void q_scilexerfortran_on_refresh_properties(void* self, void (*slot)()) {
    QsciLexerFortran_OnRefreshProperties((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self ```
int32_t q_scilexerfortran_style_bits_needed(void* self) {
    return QsciLexerFortran_StyleBitsNeeded((QsciLexerFortran*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self ```
int32_t q_scilexerfortran_qbase_style_bits_needed(void* self) {
    return QsciLexerFortran_QBaseStyleBitsNeeded((QsciLexerFortran*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, int32_t (*slot)() ```
void q_scilexerfortran_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerFortran_OnStyleBitsNeeded((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self ```
const char* q_scilexerfortran_word_characters(void* self) {
    return QsciLexerFortran_WordCharacters((QsciLexerFortran*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self ```
const char* q_scilexerfortran_qbase_word_characters(void* self) {
    return QsciLexerFortran_QBaseWordCharacters((QsciLexerFortran*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, const char* (*slot)() ```
void q_scilexerfortran_on_word_characters(void* self, const char* (*slot)()) {
    QsciLexerFortran_OnWordCharacters((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self, int autoindentstyle ```
void q_scilexerfortran_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerFortran_SetAutoIndentStyle((QsciLexerFortran*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self, int autoindentstyle ```
void q_scilexerfortran_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerFortran_QBaseSetAutoIndentStyle((QsciLexerFortran*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, void (*slot)(QsciLexerFortran*, int) ```
void q_scilexerfortran_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerFortran_OnSetAutoIndentStyle((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self, QColor* c, int style ```
void q_scilexerfortran_set_color(void* self, void* c, int style) {
    QsciLexerFortran_SetColor((QsciLexerFortran*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self, QColor* c, int style ```
void q_scilexerfortran_qbase_set_color(void* self, void* c, int style) {
    QsciLexerFortran_QBaseSetColor((QsciLexerFortran*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, void (*slot)(QsciLexerFortran*, QColor*, int) ```
void q_scilexerfortran_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerFortran_OnSetColor((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self, bool eoffill, int style ```
void q_scilexerfortran_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerFortran_SetEolFill((QsciLexerFortran*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self, bool eoffill, int style ```
void q_scilexerfortran_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerFortran_QBaseSetEolFill((QsciLexerFortran*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, void (*slot)(QsciLexerFortran*, bool, int) ```
void q_scilexerfortran_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerFortran_OnSetEolFill((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self, QFont* f, int style ```
void q_scilexerfortran_set_font(void* self, void* f, int style) {
    QsciLexerFortran_SetFont((QsciLexerFortran*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self, QFont* f, int style ```
void q_scilexerfortran_qbase_set_font(void* self, void* f, int style) {
    QsciLexerFortran_QBaseSetFont((QsciLexerFortran*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, void (*slot)(QsciLexerFortran*, QFont*, int) ```
void q_scilexerfortran_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerFortran_OnSetFont((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self, QColor* c, int style ```
void q_scilexerfortran_set_paper(void* self, void* c, int style) {
    QsciLexerFortran_SetPaper((QsciLexerFortran*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self, QColor* c, int style ```
void q_scilexerfortran_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerFortran_QBaseSetPaper((QsciLexerFortran*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, void (*slot)(QsciLexerFortran*, QColor*, int) ```
void q_scilexerfortran_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerFortran_OnSetPaper((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self, QSettings* qs, const char* prefix ```
bool q_scilexerfortran_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerFortran_ReadProperties((QsciLexerFortran*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self, QSettings* qs, const char* prefix ```
bool q_scilexerfortran_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerFortran_QBaseReadProperties((QsciLexerFortran*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, bool (*slot)(QsciLexerFortran*, QSettings*, const char*) ```
void q_scilexerfortran_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerFortran_OnReadProperties((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self, QSettings* qs, const char* prefix ```
bool q_scilexerfortran_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerFortran_WriteProperties((QsciLexerFortran*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self, QSettings* qs, const char* prefix ```
bool q_scilexerfortran_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerFortran_QBaseWriteProperties((QsciLexerFortran*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, bool (*slot)(QsciLexerFortran*, QSettings*, const char*) ```
void q_scilexerfortran_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerFortran_OnWriteProperties((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self, QEvent* event ```
bool q_scilexerfortran_event(void* self, void* event) {
    return QsciLexerFortran_Event((QsciLexerFortran*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self, QEvent* event ```
bool q_scilexerfortran_qbase_event(void* self, void* event) {
    return QsciLexerFortran_QBaseEvent((QsciLexerFortran*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, bool (*slot)(QsciLexerFortran*, QEvent*) ```
void q_scilexerfortran_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerFortran_OnEvent((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self, QObject* watched, QEvent* event ```
bool q_scilexerfortran_event_filter(void* self, void* watched, void* event) {
    return QsciLexerFortran_EventFilter((QsciLexerFortran*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self, QObject* watched, QEvent* event ```
bool q_scilexerfortran_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerFortran_QBaseEventFilter((QsciLexerFortran*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, bool (*slot)(QsciLexerFortran*, QObject*, QEvent*) ```
void q_scilexerfortran_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerFortran_OnEventFilter((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self, QTimerEvent* event ```
void q_scilexerfortran_timer_event(void* self, void* event) {
    QsciLexerFortran_TimerEvent((QsciLexerFortran*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self, QTimerEvent* event ```
void q_scilexerfortran_qbase_timer_event(void* self, void* event) {
    QsciLexerFortran_QBaseTimerEvent((QsciLexerFortran*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, void (*slot)(QsciLexerFortran*, QTimerEvent*) ```
void q_scilexerfortran_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerFortran_OnTimerEvent((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self, QChildEvent* event ```
void q_scilexerfortran_child_event(void* self, void* event) {
    QsciLexerFortran_ChildEvent((QsciLexerFortran*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self, QChildEvent* event ```
void q_scilexerfortran_qbase_child_event(void* self, void* event) {
    QsciLexerFortran_QBaseChildEvent((QsciLexerFortran*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, void (*slot)(QsciLexerFortran*, QChildEvent*) ```
void q_scilexerfortran_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerFortran_OnChildEvent((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self, QEvent* event ```
void q_scilexerfortran_custom_event(void* self, void* event) {
    QsciLexerFortran_CustomEvent((QsciLexerFortran*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self, QEvent* event ```
void q_scilexerfortran_qbase_custom_event(void* self, void* event) {
    QsciLexerFortran_QBaseCustomEvent((QsciLexerFortran*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, void (*slot)(QsciLexerFortran*, QEvent*) ```
void q_scilexerfortran_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerFortran_OnCustomEvent((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self, QMetaMethod* signal ```
void q_scilexerfortran_connect_notify(void* self, void* signal) {
    QsciLexerFortran_ConnectNotify((QsciLexerFortran*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self, QMetaMethod* signal ```
void q_scilexerfortran_qbase_connect_notify(void* self, void* signal) {
    QsciLexerFortran_QBaseConnectNotify((QsciLexerFortran*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, void (*slot)(QsciLexerFortran*, QMetaMethod*) ```
void q_scilexerfortran_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerFortran_OnConnectNotify((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self, QMetaMethod* signal ```
void q_scilexerfortran_disconnect_notify(void* self, void* signal) {
    QsciLexerFortran_DisconnectNotify((QsciLexerFortran*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self, QMetaMethod* signal ```
void q_scilexerfortran_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerFortran_QBaseDisconnectNotify((QsciLexerFortran*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, void (*slot)(QsciLexerFortran*, QMetaMethod*) ```
void q_scilexerfortran_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerFortran_OnDisconnectNotify((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self ```
QObject* q_scilexerfortran_sender(void* self) {
    return QsciLexerFortran_Sender((QsciLexerFortran*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self ```
QObject* q_scilexerfortran_qbase_sender(void* self) {
    return QsciLexerFortran_QBaseSender((QsciLexerFortran*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, QObject* (*slot)() ```
void q_scilexerfortran_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerFortran_OnSender((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self ```
int32_t q_scilexerfortran_sender_signal_index(void* self) {
    return QsciLexerFortran_SenderSignalIndex((QsciLexerFortran*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self ```
int32_t q_scilexerfortran_qbase_sender_signal_index(void* self) {
    return QsciLexerFortran_QBaseSenderSignalIndex((QsciLexerFortran*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, int32_t (*slot)() ```
void q_scilexerfortran_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerFortran_OnSenderSignalIndex((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self, const char* signal ```
int32_t q_scilexerfortran_receivers(void* self, const char* signal) {
    return QsciLexerFortran_Receivers((QsciLexerFortran*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self, const char* signal ```
int32_t q_scilexerfortran_qbase_receivers(void* self, const char* signal) {
    return QsciLexerFortran_QBaseReceivers((QsciLexerFortran*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, int32_t (*slot)(QsciLexerFortran*, const char*) ```
void q_scilexerfortran_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerFortran_OnReceivers((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran* self, QMetaMethod* signal ```
bool q_scilexerfortran_is_signal_connected(void* self, void* signal) {
    return QsciLexerFortran_IsSignalConnected((QsciLexerFortran*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran* self, QMetaMethod* signal ```
bool q_scilexerfortran_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerFortran_QBaseIsSignalConnected((QsciLexerFortran*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran* self, bool (*slot)(QsciLexerFortran*, QMetaMethod*) ```
void q_scilexerfortran_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerFortran_OnIsSignalConnected((QsciLexerFortran*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexerFortran* self ```
void q_scilexerfortran_delete(void* self) {
    QsciLexerFortran_Delete((QsciLexerFortran*)(self));
}