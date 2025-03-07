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
#include "libqscilexermatlab.hpp"
#include "../libqcoreevent.hpp"
#include "libqscilexeroctave.hpp"
#include "libqscilexeroctave.h"

/// https://doc.qt.io/qt-6/qscilexeroctave.html

/// q_scilexeroctave_new constructs a new QsciLexerOctave object.
///
///
QsciLexerOctave* q_scilexeroctave_new() {
    return QsciLexerOctave_new();
}

/// q_scilexeroctave_new2 constructs a new QsciLexerOctave object.
///
/// ``` QObject* parent ```
QsciLexerOctave* q_scilexeroctave_new2(void* parent) {
    return QsciLexerOctave_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerOctave* self ```
QMetaObject* q_scilexeroctave_meta_object(void* self) {
    return QsciLexerOctave_MetaObject((QsciLexerOctave*)self);
}

/// ``` QsciLexerOctave* self, const char* param1 ```
void* q_scilexeroctave_metacast(void* self, const char* param1) {
    return QsciLexerOctave_Metacast((QsciLexerOctave*)self, param1);
}

/// ``` QsciLexerOctave* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexeroctave_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerOctave_Metacall((QsciLexerOctave*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerOctave* self, int32_t (*slot)(QsciLexerOctave*, enum QMetaObject__Call, int, void*) ```
void q_scilexeroctave_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerOctave_OnMetacall((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerOctave* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexeroctave_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerOctave_QBaseMetacall((QsciLexerOctave*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexeroctave_tr(const char* s) {
    libqt_string _str = QsciLexerOctave_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexeroctave.html#language)
///
/// ``` QsciLexerOctave* self ```
const char* q_scilexeroctave_language(void* self) {
    return QsciLexerOctave_Language((QsciLexerOctave*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexeroctave.html#lexer)
///
/// ``` QsciLexerOctave* self ```
const char* q_scilexeroctave_lexer(void* self) {
    return QsciLexerOctave_Lexer((QsciLexerOctave*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexeroctave.html#keywords)
///
/// ``` QsciLexerOctave* self, int set ```
const char* q_scilexeroctave_keywords(void* self, int set) {
    return QsciLexerOctave_Keywords((QsciLexerOctave*)self, set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexeroctave_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerOctave_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexeroctave_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerOctave_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexerMatlab
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexermatlab.html#defaultColor)
///
/// ``` QsciLexerOctave* self, int style ```
QColor* q_scilexeroctave_default_color(void* self, int style) {
    return QsciLexerMatlab_DefaultColor((QsciLexerMatlab*)self, style);
}

/// Inherited from QsciLexerMatlab
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexermatlab.html#defaultFont)
///
/// ``` QsciLexerOctave* self, int style ```
QFont* q_scilexeroctave_default_font(void* self, int style) {
    return QsciLexerMatlab_DefaultFont((QsciLexerMatlab*)self, style);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerOctave* self ```
QsciAbstractAPIs* q_scilexeroctave_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerOctave* self ```
int32_t q_scilexeroctave_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// ``` QsciLexerOctave* self ```
QColor* q_scilexeroctave_default_paper(void* self) {
    return QsciLexer_DefaultPaper((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerOctave* self ```
QsciScintilla* q_scilexeroctave_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerOctave* self, QsciAbstractAPIs* apis ```
void q_scilexeroctave_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerOctave* self, QColor* c ```
void q_scilexeroctave_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerOctave* self, QFont* f ```
void q_scilexeroctave_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerOctave* self, QColor* c ```
void q_scilexeroctave_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerOctave* self, QSettings* qs ```
bool q_scilexeroctave_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerOctave* self, QSettings* qs ```
bool q_scilexeroctave_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerOctave* self, QColor* c, int style ```
void q_scilexeroctave_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerOctave* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexeroctave_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerOctave* self, bool eolfilled, int style ```
void q_scilexeroctave_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerOctave* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexeroctave_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerOctave* self, QFont* f, int style ```
void q_scilexeroctave_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerOctave* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexeroctave_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerOctave* self, QColor* c, int style ```
void q_scilexeroctave_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerOctave* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexeroctave_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerOctave* self, const char* prop, const char* val ```
void q_scilexeroctave_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerOctave* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexeroctave_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerOctave* self, QSettings* qs, const char* prefix ```
bool q_scilexeroctave_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerOctave* self, QSettings* qs, const char* prefix ```
bool q_scilexeroctave_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerOctave* self ```
const char* q_scilexeroctave_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerOctave* self, const char* name ```
void q_scilexeroctave_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerOctave* self ```
bool q_scilexeroctave_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerOctave* self ```
bool q_scilexeroctave_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerOctave* self ```
bool q_scilexeroctave_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerOctave* self ```
bool q_scilexeroctave_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerOctave* self, bool b ```
bool q_scilexeroctave_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerOctave* self ```
QThread* q_scilexeroctave_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerOctave* self, QThread* thread ```
void q_scilexeroctave_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerOctave* self, int interval ```
int32_t q_scilexeroctave_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerOctave* self, int id ```
void q_scilexeroctave_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerOctave* self ```
libqt_list /* of QObject* */ q_scilexeroctave_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerOctave* self, QObject* parent ```
void q_scilexeroctave_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerOctave* self, QObject* filterObj ```
void q_scilexeroctave_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerOctave* self, QObject* obj ```
void q_scilexeroctave_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexeroctave_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerOctave* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexeroctave_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexeroctave_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexeroctave_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerOctave* self ```
void q_scilexeroctave_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerOctave* self ```
void q_scilexeroctave_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerOctave* self, const char* name, QVariant* value ```
bool q_scilexeroctave_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerOctave* self, const char* name ```
QVariant* q_scilexeroctave_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerOctave* self ```
const char** q_scilexeroctave_dynamic_property_names(void* self) {
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
/// ``` QsciLexerOctave* self ```
QBindingStorage* q_scilexeroctave_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerOctave* self ```
QBindingStorage* q_scilexeroctave_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerOctave* self ```
void q_scilexeroctave_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexerOctave* self, void (*slot)(QObject*) ```
void q_scilexeroctave_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerOctave* self ```
QObject* q_scilexeroctave_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerOctave* self, const char* classname ```
bool q_scilexeroctave_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerOctave* self ```
void q_scilexeroctave_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerOctave* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexeroctave_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexeroctave_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerOctave* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexeroctave_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerOctave* self, QObject* param1 ```
void q_scilexeroctave_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexerOctave* self, void (*slot)(QObject*, QObject*) ```
void q_scilexeroctave_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self ```
int32_t q_scilexeroctave_lexer_id(void* self) {
    return QsciLexerOctave_LexerId((QsciLexerOctave*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self ```
int32_t q_scilexeroctave_qbase_lexer_id(void* self) {
    return QsciLexerOctave_QBaseLexerId((QsciLexerOctave*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, int32_t (*slot)() ```
void q_scilexeroctave_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerOctave_OnLexerId((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self ```
const char* q_scilexeroctave_auto_completion_fillups(void* self) {
    return QsciLexerOctave_AutoCompletionFillups((QsciLexerOctave*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self ```
const char* q_scilexeroctave_qbase_auto_completion_fillups(void* self) {
    return QsciLexerOctave_QBaseAutoCompletionFillups((QsciLexerOctave*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, const char* (*slot)() ```
void q_scilexeroctave_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerOctave_OnAutoCompletionFillups((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self ```
const char** q_scilexeroctave_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerOctave_AutoCompletionWordSeparators((QsciLexerOctave*)self);
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
/// ``` QsciLexerOctave* self ```
const char** q_scilexeroctave_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerOctave_QBaseAutoCompletionWordSeparators((QsciLexerOctave*)self);
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
/// ``` QsciLexerOctave* self, const char** (*slot)() ```
void q_scilexeroctave_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerOctave_OnAutoCompletionWordSeparators((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self, int* style ```
const char* q_scilexeroctave_block_end(void* self, int* style) {
    return QsciLexerOctave_BlockEnd((QsciLexerOctave*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self, int* style ```
const char* q_scilexeroctave_qbase_block_end(void* self, int* style) {
    return QsciLexerOctave_QBaseBlockEnd((QsciLexerOctave*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, const char* (*slot)(QsciLexerOctave*, int*) ```
void q_scilexeroctave_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerOctave_OnBlockEnd((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self ```
int32_t q_scilexeroctave_block_lookback(void* self) {
    return QsciLexerOctave_BlockLookback((QsciLexerOctave*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self ```
int32_t q_scilexeroctave_qbase_block_lookback(void* self) {
    return QsciLexerOctave_QBaseBlockLookback((QsciLexerOctave*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, int32_t (*slot)() ```
void q_scilexeroctave_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerOctave_OnBlockLookback((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self, int* style ```
const char* q_scilexeroctave_block_start(void* self, int* style) {
    return QsciLexerOctave_BlockStart((QsciLexerOctave*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self, int* style ```
const char* q_scilexeroctave_qbase_block_start(void* self, int* style) {
    return QsciLexerOctave_QBaseBlockStart((QsciLexerOctave*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, const char* (*slot)(QsciLexerOctave*, int*) ```
void q_scilexeroctave_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerOctave_OnBlockStart((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self, int* style ```
const char* q_scilexeroctave_block_start_keyword(void* self, int* style) {
    return QsciLexerOctave_BlockStartKeyword((QsciLexerOctave*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self, int* style ```
const char* q_scilexeroctave_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerOctave_QBaseBlockStartKeyword((QsciLexerOctave*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, const char* (*slot)(QsciLexerOctave*, int*) ```
void q_scilexeroctave_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerOctave_OnBlockStartKeyword((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#braceStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self ```
int32_t q_scilexeroctave_brace_style(void* self) {
    return QsciLexerOctave_BraceStyle((QsciLexerOctave*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self ```
int32_t q_scilexeroctave_qbase_brace_style(void* self) {
    return QsciLexerOctave_QBaseBraceStyle((QsciLexerOctave*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, int32_t (*slot)() ```
void q_scilexeroctave_on_brace_style(void* self, int32_t (*slot)()) {
    QsciLexerOctave_OnBraceStyle((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self ```
bool q_scilexeroctave_case_sensitive(void* self) {
    return QsciLexerOctave_CaseSensitive((QsciLexerOctave*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self ```
bool q_scilexeroctave_qbase_case_sensitive(void* self) {
    return QsciLexerOctave_QBaseCaseSensitive((QsciLexerOctave*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, bool (*slot)() ```
void q_scilexeroctave_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerOctave_OnCaseSensitive((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self, int style ```
QColor* q_scilexeroctave_color(void* self, int style) {
    return QsciLexerOctave_Color((QsciLexerOctave*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self, int style ```
QColor* q_scilexeroctave_qbase_color(void* self, int style) {
    return QsciLexerOctave_QBaseColor((QsciLexerOctave*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, QColor* (*slot)(QsciLexerOctave*, int) ```
void q_scilexeroctave_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerOctave_OnColor((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self, int style ```
bool q_scilexeroctave_eol_fill(void* self, int style) {
    return QsciLexerOctave_EolFill((QsciLexerOctave*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self, int style ```
bool q_scilexeroctave_qbase_eol_fill(void* self, int style) {
    return QsciLexerOctave_QBaseEolFill((QsciLexerOctave*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, bool (*slot)(QsciLexerOctave*, int) ```
void q_scilexeroctave_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerOctave_OnEolFill((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self, int style ```
QFont* q_scilexeroctave_font(void* self, int style) {
    return QsciLexerOctave_Font((QsciLexerOctave*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self, int style ```
QFont* q_scilexeroctave_qbase_font(void* self, int style) {
    return QsciLexerOctave_QBaseFont((QsciLexerOctave*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, QFont* (*slot)(QsciLexerOctave*, int) ```
void q_scilexeroctave_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerOctave_OnFont((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self ```
int32_t q_scilexeroctave_indentation_guide_view(void* self) {
    return QsciLexerOctave_IndentationGuideView((QsciLexerOctave*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self ```
int32_t q_scilexeroctave_qbase_indentation_guide_view(void* self) {
    return QsciLexerOctave_QBaseIndentationGuideView((QsciLexerOctave*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, int32_t (*slot)() ```
void q_scilexeroctave_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerOctave_OnIndentationGuideView((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self ```
int32_t q_scilexeroctave_default_style(void* self) {
    return QsciLexerOctave_DefaultStyle((QsciLexerOctave*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self ```
int32_t q_scilexeroctave_qbase_default_style(void* self) {
    return QsciLexerOctave_QBaseDefaultStyle((QsciLexerOctave*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, int32_t (*slot)() ```
void q_scilexeroctave_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerOctave_OnDefaultStyle((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#description)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self, int style ```
const char* q_scilexeroctave_description(void* self, int style) {
    libqt_string _str = QsciLexerOctave_Description((QsciLexerOctave*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self, int style ```
const char* q_scilexeroctave_qbase_description(void* self, int style) {
    libqt_string _str = QsciLexerOctave_QBaseDescription((QsciLexerOctave*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, const char* (*slot)(QsciLexerOctave*, int) ```
void q_scilexeroctave_on_description(void* self, const char* (*slot)(void*, int)) {
    QsciLexerOctave_OnDescription((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self, int style ```
QColor* q_scilexeroctave_paper(void* self, int style) {
    return QsciLexerOctave_Paper((QsciLexerOctave*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self, int style ```
QColor* q_scilexeroctave_qbase_paper(void* self, int style) {
    return QsciLexerOctave_QBasePaper((QsciLexerOctave*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, QColor* (*slot)(QsciLexerOctave*, int) ```
void q_scilexeroctave_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerOctave_OnPaper((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self, int style ```
QColor* q_scilexeroctave_default_color_with_style(void* self, int style) {
    return QsciLexerOctave_DefaultColorWithStyle((QsciLexerOctave*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self, int style ```
QColor* q_scilexeroctave_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerOctave_QBaseDefaultColorWithStyle((QsciLexerOctave*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, QColor* (*slot)(QsciLexerOctave*, int) ```
void q_scilexeroctave_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerOctave_OnDefaultColorWithStyle((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self, int style ```
bool q_scilexeroctave_default_eol_fill(void* self, int style) {
    return QsciLexerOctave_DefaultEolFill((QsciLexerOctave*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self, int style ```
bool q_scilexeroctave_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerOctave_QBaseDefaultEolFill((QsciLexerOctave*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, bool (*slot)(QsciLexerOctave*, int) ```
void q_scilexeroctave_on_default_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerOctave_OnDefaultEolFill((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self, int style ```
QFont* q_scilexeroctave_default_font_with_style(void* self, int style) {
    return QsciLexerOctave_DefaultFontWithStyle((QsciLexerOctave*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self, int style ```
QFont* q_scilexeroctave_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerOctave_QBaseDefaultFontWithStyle((QsciLexerOctave*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, QFont* (*slot)(QsciLexerOctave*, int) ```
void q_scilexeroctave_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerOctave_OnDefaultFontWithStyle((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self, int style ```
QColor* q_scilexeroctave_default_paper_with_style(void* self, int style) {
    return QsciLexerOctave_DefaultPaperWithStyle((QsciLexerOctave*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self, int style ```
QColor* q_scilexeroctave_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerOctave_QBaseDefaultPaperWithStyle((QsciLexerOctave*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, QColor* (*slot)(QsciLexerOctave*, int) ```
void q_scilexeroctave_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerOctave_OnDefaultPaperWithStyle((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self, QsciScintilla* editor ```
void q_scilexeroctave_set_editor(void* self, void* editor) {
    QsciLexerOctave_SetEditor((QsciLexerOctave*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self, QsciScintilla* editor ```
void q_scilexeroctave_qbase_set_editor(void* self, void* editor) {
    QsciLexerOctave_QBaseSetEditor((QsciLexerOctave*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, void (*slot)(QsciLexerOctave*, QsciScintilla*) ```
void q_scilexeroctave_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerOctave_OnSetEditor((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#refreshProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self ```
void q_scilexeroctave_refresh_properties(void* self) {
    QsciLexerOctave_RefreshProperties((QsciLexerOctave*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self ```
void q_scilexeroctave_qbase_refresh_properties(void* self) {
    QsciLexerOctave_QBaseRefreshProperties((QsciLexerOctave*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, void (*slot)() ```
void q_scilexeroctave_on_refresh_properties(void* self, void (*slot)()) {
    QsciLexerOctave_OnRefreshProperties((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self ```
int32_t q_scilexeroctave_style_bits_needed(void* self) {
    return QsciLexerOctave_StyleBitsNeeded((QsciLexerOctave*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self ```
int32_t q_scilexeroctave_qbase_style_bits_needed(void* self) {
    return QsciLexerOctave_QBaseStyleBitsNeeded((QsciLexerOctave*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, int32_t (*slot)() ```
void q_scilexeroctave_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerOctave_OnStyleBitsNeeded((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self ```
const char* q_scilexeroctave_word_characters(void* self) {
    return QsciLexerOctave_WordCharacters((QsciLexerOctave*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self ```
const char* q_scilexeroctave_qbase_word_characters(void* self) {
    return QsciLexerOctave_QBaseWordCharacters((QsciLexerOctave*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, const char* (*slot)() ```
void q_scilexeroctave_on_word_characters(void* self, const char* (*slot)()) {
    QsciLexerOctave_OnWordCharacters((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self, int autoindentstyle ```
void q_scilexeroctave_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerOctave_SetAutoIndentStyle((QsciLexerOctave*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self, int autoindentstyle ```
void q_scilexeroctave_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerOctave_QBaseSetAutoIndentStyle((QsciLexerOctave*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, void (*slot)(QsciLexerOctave*, int) ```
void q_scilexeroctave_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerOctave_OnSetAutoIndentStyle((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self, QColor* c, int style ```
void q_scilexeroctave_set_color(void* self, void* c, int style) {
    QsciLexerOctave_SetColor((QsciLexerOctave*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self, QColor* c, int style ```
void q_scilexeroctave_qbase_set_color(void* self, void* c, int style) {
    QsciLexerOctave_QBaseSetColor((QsciLexerOctave*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, void (*slot)(QsciLexerOctave*, QColor*, int) ```
void q_scilexeroctave_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerOctave_OnSetColor((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self, bool eoffill, int style ```
void q_scilexeroctave_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerOctave_SetEolFill((QsciLexerOctave*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self, bool eoffill, int style ```
void q_scilexeroctave_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerOctave_QBaseSetEolFill((QsciLexerOctave*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, void (*slot)(QsciLexerOctave*, bool, int) ```
void q_scilexeroctave_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerOctave_OnSetEolFill((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self, QFont* f, int style ```
void q_scilexeroctave_set_font(void* self, void* f, int style) {
    QsciLexerOctave_SetFont((QsciLexerOctave*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self, QFont* f, int style ```
void q_scilexeroctave_qbase_set_font(void* self, void* f, int style) {
    QsciLexerOctave_QBaseSetFont((QsciLexerOctave*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, void (*slot)(QsciLexerOctave*, QFont*, int) ```
void q_scilexeroctave_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerOctave_OnSetFont((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self, QColor* c, int style ```
void q_scilexeroctave_set_paper(void* self, void* c, int style) {
    QsciLexerOctave_SetPaper((QsciLexerOctave*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self, QColor* c, int style ```
void q_scilexeroctave_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerOctave_QBaseSetPaper((QsciLexerOctave*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, void (*slot)(QsciLexerOctave*, QColor*, int) ```
void q_scilexeroctave_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerOctave_OnSetPaper((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self, QSettings* qs, const char* prefix ```
bool q_scilexeroctave_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerOctave_ReadProperties((QsciLexerOctave*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self, QSettings* qs, const char* prefix ```
bool q_scilexeroctave_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerOctave_QBaseReadProperties((QsciLexerOctave*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, bool (*slot)(QsciLexerOctave*, QSettings*, const char*) ```
void q_scilexeroctave_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerOctave_OnReadProperties((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self, QSettings* qs, const char* prefix ```
bool q_scilexeroctave_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerOctave_WriteProperties((QsciLexerOctave*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self, QSettings* qs, const char* prefix ```
bool q_scilexeroctave_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerOctave_QBaseWriteProperties((QsciLexerOctave*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, bool (*slot)(QsciLexerOctave*, QSettings*, const char*) ```
void q_scilexeroctave_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerOctave_OnWriteProperties((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self, QEvent* event ```
bool q_scilexeroctave_event(void* self, void* event) {
    return QsciLexerOctave_Event((QsciLexerOctave*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self, QEvent* event ```
bool q_scilexeroctave_qbase_event(void* self, void* event) {
    return QsciLexerOctave_QBaseEvent((QsciLexerOctave*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, bool (*slot)(QsciLexerOctave*, QEvent*) ```
void q_scilexeroctave_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerOctave_OnEvent((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self, QObject* watched, QEvent* event ```
bool q_scilexeroctave_event_filter(void* self, void* watched, void* event) {
    return QsciLexerOctave_EventFilter((QsciLexerOctave*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self, QObject* watched, QEvent* event ```
bool q_scilexeroctave_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerOctave_QBaseEventFilter((QsciLexerOctave*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, bool (*slot)(QsciLexerOctave*, QObject*, QEvent*) ```
void q_scilexeroctave_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerOctave_OnEventFilter((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self, QTimerEvent* event ```
void q_scilexeroctave_timer_event(void* self, void* event) {
    QsciLexerOctave_TimerEvent((QsciLexerOctave*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self, QTimerEvent* event ```
void q_scilexeroctave_qbase_timer_event(void* self, void* event) {
    QsciLexerOctave_QBaseTimerEvent((QsciLexerOctave*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, void (*slot)(QsciLexerOctave*, QTimerEvent*) ```
void q_scilexeroctave_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerOctave_OnTimerEvent((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self, QChildEvent* event ```
void q_scilexeroctave_child_event(void* self, void* event) {
    QsciLexerOctave_ChildEvent((QsciLexerOctave*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self, QChildEvent* event ```
void q_scilexeroctave_qbase_child_event(void* self, void* event) {
    QsciLexerOctave_QBaseChildEvent((QsciLexerOctave*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, void (*slot)(QsciLexerOctave*, QChildEvent*) ```
void q_scilexeroctave_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerOctave_OnChildEvent((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self, QEvent* event ```
void q_scilexeroctave_custom_event(void* self, void* event) {
    QsciLexerOctave_CustomEvent((QsciLexerOctave*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self, QEvent* event ```
void q_scilexeroctave_qbase_custom_event(void* self, void* event) {
    QsciLexerOctave_QBaseCustomEvent((QsciLexerOctave*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, void (*slot)(QsciLexerOctave*, QEvent*) ```
void q_scilexeroctave_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerOctave_OnCustomEvent((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self, QMetaMethod* signal ```
void q_scilexeroctave_connect_notify(void* self, void* signal) {
    QsciLexerOctave_ConnectNotify((QsciLexerOctave*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self, QMetaMethod* signal ```
void q_scilexeroctave_qbase_connect_notify(void* self, void* signal) {
    QsciLexerOctave_QBaseConnectNotify((QsciLexerOctave*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, void (*slot)(QsciLexerOctave*, QMetaMethod*) ```
void q_scilexeroctave_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerOctave_OnConnectNotify((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self, QMetaMethod* signal ```
void q_scilexeroctave_disconnect_notify(void* self, void* signal) {
    QsciLexerOctave_DisconnectNotify((QsciLexerOctave*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self, QMetaMethod* signal ```
void q_scilexeroctave_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerOctave_QBaseDisconnectNotify((QsciLexerOctave*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, void (*slot)(QsciLexerOctave*, QMetaMethod*) ```
void q_scilexeroctave_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerOctave_OnDisconnectNotify((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self ```
QObject* q_scilexeroctave_sender(void* self) {
    return QsciLexerOctave_Sender((QsciLexerOctave*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self ```
QObject* q_scilexeroctave_qbase_sender(void* self) {
    return QsciLexerOctave_QBaseSender((QsciLexerOctave*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, QObject* (*slot)() ```
void q_scilexeroctave_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerOctave_OnSender((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self ```
int32_t q_scilexeroctave_sender_signal_index(void* self) {
    return QsciLexerOctave_SenderSignalIndex((QsciLexerOctave*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self ```
int32_t q_scilexeroctave_qbase_sender_signal_index(void* self) {
    return QsciLexerOctave_QBaseSenderSignalIndex((QsciLexerOctave*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, int32_t (*slot)() ```
void q_scilexeroctave_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerOctave_OnSenderSignalIndex((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self, const char* signal ```
int32_t q_scilexeroctave_receivers(void* self, const char* signal) {
    return QsciLexerOctave_Receivers((QsciLexerOctave*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self, const char* signal ```
int32_t q_scilexeroctave_qbase_receivers(void* self, const char* signal) {
    return QsciLexerOctave_QBaseReceivers((QsciLexerOctave*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, int32_t (*slot)(QsciLexerOctave*, const char*) ```
void q_scilexeroctave_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerOctave_OnReceivers((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerOctave* self, QMetaMethod* signal ```
bool q_scilexeroctave_is_signal_connected(void* self, void* signal) {
    return QsciLexerOctave_IsSignalConnected((QsciLexerOctave*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerOctave* self, QMetaMethod* signal ```
bool q_scilexeroctave_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerOctave_QBaseIsSignalConnected((QsciLexerOctave*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerOctave* self, bool (*slot)(QsciLexerOctave*, QMetaMethod*) ```
void q_scilexeroctave_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerOctave_OnIsSignalConnected((QsciLexerOctave*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexerOctave* self ```
void q_scilexeroctave_delete(void* self) {
    QsciLexerOctave_Delete((QsciLexerOctave*)(self));
}