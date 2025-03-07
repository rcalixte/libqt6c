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
#include "libqscilexermarkdown.hpp"
#include "libqscilexermarkdown.h"

/// https://doc.qt.io/qt-6/qscilexermarkdown.html

/// q_scilexermarkdown_new constructs a new QsciLexerMarkdown object.
///
///
QsciLexerMarkdown* q_scilexermarkdown_new() {
    return QsciLexerMarkdown_new();
}

/// q_scilexermarkdown_new2 constructs a new QsciLexerMarkdown object.
///
/// ``` QObject* parent ```
QsciLexerMarkdown* q_scilexermarkdown_new2(void* parent) {
    return QsciLexerMarkdown_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerMarkdown* self ```
QMetaObject* q_scilexermarkdown_meta_object(void* self) {
    return QsciLexerMarkdown_MetaObject((QsciLexerMarkdown*)self);
}

/// ``` QsciLexerMarkdown* self, const char* param1 ```
void* q_scilexermarkdown_metacast(void* self, const char* param1) {
    return QsciLexerMarkdown_Metacast((QsciLexerMarkdown*)self, param1);
}

/// ``` QsciLexerMarkdown* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexermarkdown_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerMarkdown_Metacall((QsciLexerMarkdown*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerMarkdown* self, int32_t (*slot)(QsciLexerMarkdown*, enum QMetaObject__Call, int, void*) ```
void q_scilexermarkdown_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerMarkdown_OnMetacall((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerMarkdown* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexermarkdown_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerMarkdown_QBaseMetacall((QsciLexerMarkdown*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexermarkdown_tr(const char* s) {
    libqt_string _str = QsciLexerMarkdown_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexermarkdown.html#language)
///
/// ``` QsciLexerMarkdown* self ```
const char* q_scilexermarkdown_language(void* self) {
    return QsciLexerMarkdown_Language((QsciLexerMarkdown*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexermarkdown.html#lexer)
///
/// ``` QsciLexerMarkdown* self ```
const char* q_scilexermarkdown_lexer(void* self) {
    return QsciLexerMarkdown_Lexer((QsciLexerMarkdown*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexermarkdown.html#defaultColor)
///
/// ``` QsciLexerMarkdown* self, int style ```
QColor* q_scilexermarkdown_default_color(void* self, int style) {
    return QsciLexerMarkdown_DefaultColor((QsciLexerMarkdown*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexermarkdown.html#defaultFont)
///
/// ``` QsciLexerMarkdown* self, int style ```
QFont* q_scilexermarkdown_default_font(void* self, int style) {
    return QsciLexerMarkdown_DefaultFont((QsciLexerMarkdown*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexermarkdown.html#defaultPaper)
///
/// ``` QsciLexerMarkdown* self, int style ```
QColor* q_scilexermarkdown_default_paper(void* self, int style) {
    return QsciLexerMarkdown_DefaultPaper((QsciLexerMarkdown*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexermarkdown.html#description)
///
/// ``` QsciLexerMarkdown* self, int style ```
const char* q_scilexermarkdown_description(void* self, int style) {
    libqt_string _str = QsciLexerMarkdown_Description((QsciLexerMarkdown*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexermarkdown_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerMarkdown_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexermarkdown_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerMarkdown_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerMarkdown* self ```
QsciAbstractAPIs* q_scilexermarkdown_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerMarkdown* self ```
int32_t q_scilexermarkdown_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerMarkdown* self ```
QsciScintilla* q_scilexermarkdown_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerMarkdown* self, QsciAbstractAPIs* apis ```
void q_scilexermarkdown_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerMarkdown* self, QColor* c ```
void q_scilexermarkdown_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerMarkdown* self, QFont* f ```
void q_scilexermarkdown_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerMarkdown* self, QColor* c ```
void q_scilexermarkdown_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerMarkdown* self, QSettings* qs ```
bool q_scilexermarkdown_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerMarkdown* self, QSettings* qs ```
bool q_scilexermarkdown_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerMarkdown* self, QColor* c, int style ```
void q_scilexermarkdown_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexermarkdown_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerMarkdown* self, bool eolfilled, int style ```
void q_scilexermarkdown_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexermarkdown_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerMarkdown* self, QFont* f, int style ```
void q_scilexermarkdown_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexermarkdown_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerMarkdown* self, QColor* c, int style ```
void q_scilexermarkdown_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexermarkdown_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerMarkdown* self, const char* prop, const char* val ```
void q_scilexermarkdown_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexermarkdown_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerMarkdown* self, QSettings* qs, const char* prefix ```
bool q_scilexermarkdown_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerMarkdown* self, QSettings* qs, const char* prefix ```
bool q_scilexermarkdown_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerMarkdown* self ```
const char* q_scilexermarkdown_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerMarkdown* self, const char* name ```
void q_scilexermarkdown_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerMarkdown* self ```
bool q_scilexermarkdown_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerMarkdown* self ```
bool q_scilexermarkdown_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerMarkdown* self ```
bool q_scilexermarkdown_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerMarkdown* self ```
bool q_scilexermarkdown_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerMarkdown* self, bool b ```
bool q_scilexermarkdown_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerMarkdown* self ```
QThread* q_scilexermarkdown_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerMarkdown* self, QThread* thread ```
void q_scilexermarkdown_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerMarkdown* self, int interval ```
int32_t q_scilexermarkdown_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerMarkdown* self, int id ```
void q_scilexermarkdown_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerMarkdown* self ```
libqt_list /* of QObject* */ q_scilexermarkdown_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerMarkdown* self, QObject* parent ```
void q_scilexermarkdown_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerMarkdown* self, QObject* filterObj ```
void q_scilexermarkdown_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerMarkdown* self, QObject* obj ```
void q_scilexermarkdown_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexermarkdown_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerMarkdown* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexermarkdown_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexermarkdown_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexermarkdown_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerMarkdown* self ```
void q_scilexermarkdown_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerMarkdown* self ```
void q_scilexermarkdown_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerMarkdown* self, const char* name, QVariant* value ```
bool q_scilexermarkdown_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerMarkdown* self, const char* name ```
QVariant* q_scilexermarkdown_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerMarkdown* self ```
const char** q_scilexermarkdown_dynamic_property_names(void* self) {
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
/// ``` QsciLexerMarkdown* self ```
QBindingStorage* q_scilexermarkdown_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerMarkdown* self ```
QBindingStorage* q_scilexermarkdown_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerMarkdown* self ```
void q_scilexermarkdown_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QObject*) ```
void q_scilexermarkdown_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerMarkdown* self ```
QObject* q_scilexermarkdown_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerMarkdown* self, const char* classname ```
bool q_scilexermarkdown_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerMarkdown* self ```
void q_scilexermarkdown_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerMarkdown* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexermarkdown_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexermarkdown_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerMarkdown* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexermarkdown_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerMarkdown* self, QObject* param1 ```
void q_scilexermarkdown_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QObject*, QObject*) ```
void q_scilexermarkdown_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
int32_t q_scilexermarkdown_lexer_id(void* self) {
    return QsciLexerMarkdown_LexerId((QsciLexerMarkdown*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
int32_t q_scilexermarkdown_qbase_lexer_id(void* self) {
    return QsciLexerMarkdown_QBaseLexerId((QsciLexerMarkdown*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int32_t (*slot)() ```
void q_scilexermarkdown_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerMarkdown_OnLexerId((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
const char* q_scilexermarkdown_auto_completion_fillups(void* self) {
    return QsciLexerMarkdown_AutoCompletionFillups((QsciLexerMarkdown*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
const char* q_scilexermarkdown_qbase_auto_completion_fillups(void* self) {
    return QsciLexerMarkdown_QBaseAutoCompletionFillups((QsciLexerMarkdown*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, const char* (*slot)() ```
void q_scilexermarkdown_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerMarkdown_OnAutoCompletionFillups((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
const char** q_scilexermarkdown_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerMarkdown_AutoCompletionWordSeparators((QsciLexerMarkdown*)self);
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
/// ``` QsciLexerMarkdown* self ```
const char** q_scilexermarkdown_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerMarkdown_QBaseAutoCompletionWordSeparators((QsciLexerMarkdown*)self);
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
/// ``` QsciLexerMarkdown* self, const char** (*slot)() ```
void q_scilexermarkdown_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerMarkdown_OnAutoCompletionWordSeparators((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int* style ```
const char* q_scilexermarkdown_block_end(void* self, int* style) {
    return QsciLexerMarkdown_BlockEnd((QsciLexerMarkdown*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int* style ```
const char* q_scilexermarkdown_qbase_block_end(void* self, int* style) {
    return QsciLexerMarkdown_QBaseBlockEnd((QsciLexerMarkdown*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, const char* (*slot)(QsciLexerMarkdown*, int*) ```
void q_scilexermarkdown_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerMarkdown_OnBlockEnd((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
int32_t q_scilexermarkdown_block_lookback(void* self) {
    return QsciLexerMarkdown_BlockLookback((QsciLexerMarkdown*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
int32_t q_scilexermarkdown_qbase_block_lookback(void* self) {
    return QsciLexerMarkdown_QBaseBlockLookback((QsciLexerMarkdown*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int32_t (*slot)() ```
void q_scilexermarkdown_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerMarkdown_OnBlockLookback((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int* style ```
const char* q_scilexermarkdown_block_start(void* self, int* style) {
    return QsciLexerMarkdown_BlockStart((QsciLexerMarkdown*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int* style ```
const char* q_scilexermarkdown_qbase_block_start(void* self, int* style) {
    return QsciLexerMarkdown_QBaseBlockStart((QsciLexerMarkdown*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, const char* (*slot)(QsciLexerMarkdown*, int*) ```
void q_scilexermarkdown_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerMarkdown_OnBlockStart((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int* style ```
const char* q_scilexermarkdown_block_start_keyword(void* self, int* style) {
    return QsciLexerMarkdown_BlockStartKeyword((QsciLexerMarkdown*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int* style ```
const char* q_scilexermarkdown_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerMarkdown_QBaseBlockStartKeyword((QsciLexerMarkdown*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, const char* (*slot)(QsciLexerMarkdown*, int*) ```
void q_scilexermarkdown_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerMarkdown_OnBlockStartKeyword((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#braceStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
int32_t q_scilexermarkdown_brace_style(void* self) {
    return QsciLexerMarkdown_BraceStyle((QsciLexerMarkdown*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
int32_t q_scilexermarkdown_qbase_brace_style(void* self) {
    return QsciLexerMarkdown_QBaseBraceStyle((QsciLexerMarkdown*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int32_t (*slot)() ```
void q_scilexermarkdown_on_brace_style(void* self, int32_t (*slot)()) {
    QsciLexerMarkdown_OnBraceStyle((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
bool q_scilexermarkdown_case_sensitive(void* self) {
    return QsciLexerMarkdown_CaseSensitive((QsciLexerMarkdown*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
bool q_scilexermarkdown_qbase_case_sensitive(void* self) {
    return QsciLexerMarkdown_QBaseCaseSensitive((QsciLexerMarkdown*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, bool (*slot)() ```
void q_scilexermarkdown_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerMarkdown_OnCaseSensitive((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
QColor* q_scilexermarkdown_color(void* self, int style) {
    return QsciLexerMarkdown_Color((QsciLexerMarkdown*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
QColor* q_scilexermarkdown_qbase_color(void* self, int style) {
    return QsciLexerMarkdown_QBaseColor((QsciLexerMarkdown*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QColor* (*slot)(QsciLexerMarkdown*, int) ```
void q_scilexermarkdown_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerMarkdown_OnColor((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
bool q_scilexermarkdown_eol_fill(void* self, int style) {
    return QsciLexerMarkdown_EolFill((QsciLexerMarkdown*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
bool q_scilexermarkdown_qbase_eol_fill(void* self, int style) {
    return QsciLexerMarkdown_QBaseEolFill((QsciLexerMarkdown*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, bool (*slot)(QsciLexerMarkdown*, int) ```
void q_scilexermarkdown_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerMarkdown_OnEolFill((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
QFont* q_scilexermarkdown_font(void* self, int style) {
    return QsciLexerMarkdown_Font((QsciLexerMarkdown*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
QFont* q_scilexermarkdown_qbase_font(void* self, int style) {
    return QsciLexerMarkdown_QBaseFont((QsciLexerMarkdown*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QFont* (*slot)(QsciLexerMarkdown*, int) ```
void q_scilexermarkdown_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerMarkdown_OnFont((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
int32_t q_scilexermarkdown_indentation_guide_view(void* self) {
    return QsciLexerMarkdown_IndentationGuideView((QsciLexerMarkdown*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
int32_t q_scilexermarkdown_qbase_indentation_guide_view(void* self) {
    return QsciLexerMarkdown_QBaseIndentationGuideView((QsciLexerMarkdown*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int32_t (*slot)() ```
void q_scilexermarkdown_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerMarkdown_OnIndentationGuideView((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#keywords)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int set ```
const char* q_scilexermarkdown_keywords(void* self, int set) {
    return QsciLexerMarkdown_Keywords((QsciLexerMarkdown*)self, set);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int set ```
const char* q_scilexermarkdown_qbase_keywords(void* self, int set) {
    return QsciLexerMarkdown_QBaseKeywords((QsciLexerMarkdown*)self, set);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, const char* (*slot)(QsciLexerMarkdown*, int) ```
void q_scilexermarkdown_on_keywords(void* self, const char* (*slot)(void*, int)) {
    QsciLexerMarkdown_OnKeywords((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
int32_t q_scilexermarkdown_default_style(void* self) {
    return QsciLexerMarkdown_DefaultStyle((QsciLexerMarkdown*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
int32_t q_scilexermarkdown_qbase_default_style(void* self) {
    return QsciLexerMarkdown_QBaseDefaultStyle((QsciLexerMarkdown*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int32_t (*slot)() ```
void q_scilexermarkdown_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerMarkdown_OnDefaultStyle((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
QColor* q_scilexermarkdown_paper(void* self, int style) {
    return QsciLexerMarkdown_Paper((QsciLexerMarkdown*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
QColor* q_scilexermarkdown_qbase_paper(void* self, int style) {
    return QsciLexerMarkdown_QBasePaper((QsciLexerMarkdown*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QColor* (*slot)(QsciLexerMarkdown*, int) ```
void q_scilexermarkdown_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerMarkdown_OnPaper((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
QColor* q_scilexermarkdown_default_color_with_style(void* self, int style) {
    return QsciLexerMarkdown_DefaultColorWithStyle((QsciLexerMarkdown*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
QColor* q_scilexermarkdown_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerMarkdown_QBaseDefaultColorWithStyle((QsciLexerMarkdown*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QColor* (*slot)(QsciLexerMarkdown*, int) ```
void q_scilexermarkdown_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerMarkdown_OnDefaultColorWithStyle((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
bool q_scilexermarkdown_default_eol_fill(void* self, int style) {
    return QsciLexerMarkdown_DefaultEolFill((QsciLexerMarkdown*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
bool q_scilexermarkdown_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerMarkdown_QBaseDefaultEolFill((QsciLexerMarkdown*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, bool (*slot)(QsciLexerMarkdown*, int) ```
void q_scilexermarkdown_on_default_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerMarkdown_OnDefaultEolFill((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
QFont* q_scilexermarkdown_default_font_with_style(void* self, int style) {
    return QsciLexerMarkdown_DefaultFontWithStyle((QsciLexerMarkdown*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
QFont* q_scilexermarkdown_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerMarkdown_QBaseDefaultFontWithStyle((QsciLexerMarkdown*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QFont* (*slot)(QsciLexerMarkdown*, int) ```
void q_scilexermarkdown_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerMarkdown_OnDefaultFontWithStyle((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
QColor* q_scilexermarkdown_default_paper_with_style(void* self, int style) {
    return QsciLexerMarkdown_DefaultPaperWithStyle((QsciLexerMarkdown*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
QColor* q_scilexermarkdown_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerMarkdown_QBaseDefaultPaperWithStyle((QsciLexerMarkdown*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QColor* (*slot)(QsciLexerMarkdown*, int) ```
void q_scilexermarkdown_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerMarkdown_OnDefaultPaperWithStyle((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QsciScintilla* editor ```
void q_scilexermarkdown_set_editor(void* self, void* editor) {
    QsciLexerMarkdown_SetEditor((QsciLexerMarkdown*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QsciScintilla* editor ```
void q_scilexermarkdown_qbase_set_editor(void* self, void* editor) {
    QsciLexerMarkdown_QBaseSetEditor((QsciLexerMarkdown*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexerMarkdown*, QsciScintilla*) ```
void q_scilexermarkdown_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerMarkdown_OnSetEditor((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#refreshProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
void q_scilexermarkdown_refresh_properties(void* self) {
    QsciLexerMarkdown_RefreshProperties((QsciLexerMarkdown*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
void q_scilexermarkdown_qbase_refresh_properties(void* self) {
    QsciLexerMarkdown_QBaseRefreshProperties((QsciLexerMarkdown*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, void (*slot)() ```
void q_scilexermarkdown_on_refresh_properties(void* self, void (*slot)()) {
    QsciLexerMarkdown_OnRefreshProperties((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
int32_t q_scilexermarkdown_style_bits_needed(void* self) {
    return QsciLexerMarkdown_StyleBitsNeeded((QsciLexerMarkdown*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
int32_t q_scilexermarkdown_qbase_style_bits_needed(void* self) {
    return QsciLexerMarkdown_QBaseStyleBitsNeeded((QsciLexerMarkdown*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int32_t (*slot)() ```
void q_scilexermarkdown_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerMarkdown_OnStyleBitsNeeded((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
const char* q_scilexermarkdown_word_characters(void* self) {
    return QsciLexerMarkdown_WordCharacters((QsciLexerMarkdown*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
const char* q_scilexermarkdown_qbase_word_characters(void* self) {
    return QsciLexerMarkdown_QBaseWordCharacters((QsciLexerMarkdown*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, const char* (*slot)() ```
void q_scilexermarkdown_on_word_characters(void* self, const char* (*slot)()) {
    QsciLexerMarkdown_OnWordCharacters((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int autoindentstyle ```
void q_scilexermarkdown_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerMarkdown_SetAutoIndentStyle((QsciLexerMarkdown*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int autoindentstyle ```
void q_scilexermarkdown_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerMarkdown_QBaseSetAutoIndentStyle((QsciLexerMarkdown*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexerMarkdown*, int) ```
void q_scilexermarkdown_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerMarkdown_OnSetAutoIndentStyle((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QColor* c, int style ```
void q_scilexermarkdown_set_color(void* self, void* c, int style) {
    QsciLexerMarkdown_SetColor((QsciLexerMarkdown*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QColor* c, int style ```
void q_scilexermarkdown_qbase_set_color(void* self, void* c, int style) {
    QsciLexerMarkdown_QBaseSetColor((QsciLexerMarkdown*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexerMarkdown*, QColor*, int) ```
void q_scilexermarkdown_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerMarkdown_OnSetColor((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, bool eoffill, int style ```
void q_scilexermarkdown_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerMarkdown_SetEolFill((QsciLexerMarkdown*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, bool eoffill, int style ```
void q_scilexermarkdown_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerMarkdown_QBaseSetEolFill((QsciLexerMarkdown*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexerMarkdown*, bool, int) ```
void q_scilexermarkdown_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerMarkdown_OnSetEolFill((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QFont* f, int style ```
void q_scilexermarkdown_set_font(void* self, void* f, int style) {
    QsciLexerMarkdown_SetFont((QsciLexerMarkdown*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QFont* f, int style ```
void q_scilexermarkdown_qbase_set_font(void* self, void* f, int style) {
    QsciLexerMarkdown_QBaseSetFont((QsciLexerMarkdown*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexerMarkdown*, QFont*, int) ```
void q_scilexermarkdown_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerMarkdown_OnSetFont((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QColor* c, int style ```
void q_scilexermarkdown_set_paper(void* self, void* c, int style) {
    QsciLexerMarkdown_SetPaper((QsciLexerMarkdown*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QColor* c, int style ```
void q_scilexermarkdown_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerMarkdown_QBaseSetPaper((QsciLexerMarkdown*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexerMarkdown*, QColor*, int) ```
void q_scilexermarkdown_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerMarkdown_OnSetPaper((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QSettings* qs, const char* prefix ```
bool q_scilexermarkdown_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerMarkdown_ReadProperties((QsciLexerMarkdown*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QSettings* qs, const char* prefix ```
bool q_scilexermarkdown_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerMarkdown_QBaseReadProperties((QsciLexerMarkdown*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, bool (*slot)(QsciLexerMarkdown*, QSettings*, const char*) ```
void q_scilexermarkdown_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerMarkdown_OnReadProperties((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QSettings* qs, const char* prefix ```
bool q_scilexermarkdown_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerMarkdown_WriteProperties((QsciLexerMarkdown*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QSettings* qs, const char* prefix ```
bool q_scilexermarkdown_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerMarkdown_QBaseWriteProperties((QsciLexerMarkdown*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, bool (*slot)(QsciLexerMarkdown*, QSettings*, const char*) ```
void q_scilexermarkdown_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerMarkdown_OnWriteProperties((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QEvent* event ```
bool q_scilexermarkdown_event(void* self, void* event) {
    return QsciLexerMarkdown_Event((QsciLexerMarkdown*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QEvent* event ```
bool q_scilexermarkdown_qbase_event(void* self, void* event) {
    return QsciLexerMarkdown_QBaseEvent((QsciLexerMarkdown*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, bool (*slot)(QsciLexerMarkdown*, QEvent*) ```
void q_scilexermarkdown_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerMarkdown_OnEvent((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QObject* watched, QEvent* event ```
bool q_scilexermarkdown_event_filter(void* self, void* watched, void* event) {
    return QsciLexerMarkdown_EventFilter((QsciLexerMarkdown*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QObject* watched, QEvent* event ```
bool q_scilexermarkdown_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerMarkdown_QBaseEventFilter((QsciLexerMarkdown*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, bool (*slot)(QsciLexerMarkdown*, QObject*, QEvent*) ```
void q_scilexermarkdown_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerMarkdown_OnEventFilter((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QTimerEvent* event ```
void q_scilexermarkdown_timer_event(void* self, void* event) {
    QsciLexerMarkdown_TimerEvent((QsciLexerMarkdown*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QTimerEvent* event ```
void q_scilexermarkdown_qbase_timer_event(void* self, void* event) {
    QsciLexerMarkdown_QBaseTimerEvent((QsciLexerMarkdown*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexerMarkdown*, QTimerEvent*) ```
void q_scilexermarkdown_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerMarkdown_OnTimerEvent((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QChildEvent* event ```
void q_scilexermarkdown_child_event(void* self, void* event) {
    QsciLexerMarkdown_ChildEvent((QsciLexerMarkdown*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QChildEvent* event ```
void q_scilexermarkdown_qbase_child_event(void* self, void* event) {
    QsciLexerMarkdown_QBaseChildEvent((QsciLexerMarkdown*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexerMarkdown*, QChildEvent*) ```
void q_scilexermarkdown_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerMarkdown_OnChildEvent((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QEvent* event ```
void q_scilexermarkdown_custom_event(void* self, void* event) {
    QsciLexerMarkdown_CustomEvent((QsciLexerMarkdown*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QEvent* event ```
void q_scilexermarkdown_qbase_custom_event(void* self, void* event) {
    QsciLexerMarkdown_QBaseCustomEvent((QsciLexerMarkdown*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexerMarkdown*, QEvent*) ```
void q_scilexermarkdown_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerMarkdown_OnCustomEvent((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QMetaMethod* signal ```
void q_scilexermarkdown_connect_notify(void* self, void* signal) {
    QsciLexerMarkdown_ConnectNotify((QsciLexerMarkdown*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QMetaMethod* signal ```
void q_scilexermarkdown_qbase_connect_notify(void* self, void* signal) {
    QsciLexerMarkdown_QBaseConnectNotify((QsciLexerMarkdown*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexerMarkdown*, QMetaMethod*) ```
void q_scilexermarkdown_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerMarkdown_OnConnectNotify((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QMetaMethod* signal ```
void q_scilexermarkdown_disconnect_notify(void* self, void* signal) {
    QsciLexerMarkdown_DisconnectNotify((QsciLexerMarkdown*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QMetaMethod* signal ```
void q_scilexermarkdown_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerMarkdown_QBaseDisconnectNotify((QsciLexerMarkdown*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexerMarkdown*, QMetaMethod*) ```
void q_scilexermarkdown_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerMarkdown_OnDisconnectNotify((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
QObject* q_scilexermarkdown_sender(void* self) {
    return QsciLexerMarkdown_Sender((QsciLexerMarkdown*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
QObject* q_scilexermarkdown_qbase_sender(void* self) {
    return QsciLexerMarkdown_QBaseSender((QsciLexerMarkdown*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QObject* (*slot)() ```
void q_scilexermarkdown_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerMarkdown_OnSender((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
int32_t q_scilexermarkdown_sender_signal_index(void* self) {
    return QsciLexerMarkdown_SenderSignalIndex((QsciLexerMarkdown*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
int32_t q_scilexermarkdown_qbase_sender_signal_index(void* self) {
    return QsciLexerMarkdown_QBaseSenderSignalIndex((QsciLexerMarkdown*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int32_t (*slot)() ```
void q_scilexermarkdown_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerMarkdown_OnSenderSignalIndex((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, const char* signal ```
int32_t q_scilexermarkdown_receivers(void* self, const char* signal) {
    return QsciLexerMarkdown_Receivers((QsciLexerMarkdown*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, const char* signal ```
int32_t q_scilexermarkdown_qbase_receivers(void* self, const char* signal) {
    return QsciLexerMarkdown_QBaseReceivers((QsciLexerMarkdown*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int32_t (*slot)(QsciLexerMarkdown*, const char*) ```
void q_scilexermarkdown_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerMarkdown_OnReceivers((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QMetaMethod* signal ```
bool q_scilexermarkdown_is_signal_connected(void* self, void* signal) {
    return QsciLexerMarkdown_IsSignalConnected((QsciLexerMarkdown*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QMetaMethod* signal ```
bool q_scilexermarkdown_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerMarkdown_QBaseIsSignalConnected((QsciLexerMarkdown*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, bool (*slot)(QsciLexerMarkdown*, QMetaMethod*) ```
void q_scilexermarkdown_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerMarkdown_OnIsSignalConnected((QsciLexerMarkdown*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexerMarkdown* self ```
void q_scilexermarkdown_delete(void* self) {
    QsciLexerMarkdown_Delete((QsciLexerMarkdown*)(self));
}