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
#include "libqscilexercmake.hpp"
#include "libqscilexercmake.h"

/// https://doc.qt.io/qt-6/qscilexercmake.html

/// q_scilexercmake_new constructs a new QsciLexerCMake object.
///
///
QsciLexerCMake* q_scilexercmake_new() {
    return QsciLexerCMake_new();
}

/// q_scilexercmake_new2 constructs a new QsciLexerCMake object.
///
/// ``` QObject* parent ```
QsciLexerCMake* q_scilexercmake_new2(void* parent) {
    return QsciLexerCMake_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerCMake* self ```
QMetaObject* q_scilexercmake_meta_object(void* self) {
    return QsciLexerCMake_MetaObject((QsciLexerCMake*)self);
}

/// ``` QsciLexerCMake* self, const char* param1 ```
void* q_scilexercmake_metacast(void* self, const char* param1) {
    return QsciLexerCMake_Metacast((QsciLexerCMake*)self, param1);
}

/// ``` QsciLexerCMake* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexercmake_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerCMake_Metacall((QsciLexerCMake*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerCMake* self, int32_t (*slot)(QsciLexerCMake*, enum QMetaObject__Call, int, void*) ```
void q_scilexercmake_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerCMake_OnMetacall((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerCMake* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexercmake_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerCMake_QBaseMetacall((QsciLexerCMake*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexercmake_tr(const char* s) {
    libqt_string _str = QsciLexerCMake_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercmake.html#language)
///
/// ``` QsciLexerCMake* self ```
const char* q_scilexercmake_language(void* self) {
    return QsciLexerCMake_Language((QsciLexerCMake*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercmake.html#lexer)
///
/// ``` QsciLexerCMake* self ```
const char* q_scilexercmake_lexer(void* self) {
    return QsciLexerCMake_Lexer((QsciLexerCMake*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercmake.html#defaultColor)
///
/// ``` QsciLexerCMake* self, int style ```
QColor* q_scilexercmake_default_color(void* self, int style) {
    return QsciLexerCMake_DefaultColor((QsciLexerCMake*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercmake.html#defaultFont)
///
/// ``` QsciLexerCMake* self, int style ```
QFont* q_scilexercmake_default_font(void* self, int style) {
    return QsciLexerCMake_DefaultFont((QsciLexerCMake*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercmake.html#defaultPaper)
///
/// ``` QsciLexerCMake* self, int style ```
QColor* q_scilexercmake_default_paper(void* self, int style) {
    return QsciLexerCMake_DefaultPaper((QsciLexerCMake*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercmake.html#keywords)
///
/// ``` QsciLexerCMake* self, int set ```
const char* q_scilexercmake_keywords(void* self, int set) {
    return QsciLexerCMake_Keywords((QsciLexerCMake*)self, set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercmake.html#description)
///
/// ``` QsciLexerCMake* self, int style ```
const char* q_scilexercmake_description(void* self, int style) {
    libqt_string _str = QsciLexerCMake_Description((QsciLexerCMake*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercmake.html#refreshProperties)
///
/// ``` QsciLexerCMake* self ```
void q_scilexercmake_refresh_properties(void* self) {
    QsciLexerCMake_RefreshProperties((QsciLexerCMake*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercmake.html#foldAtElse)
///
/// ``` QsciLexerCMake* self ```
bool q_scilexercmake_fold_at_else(void* self) {
    return QsciLexerCMake_FoldAtElse((QsciLexerCMake*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercmake.html#setFoldAtElse)
///
/// ``` QsciLexerCMake* self, bool fold ```
void q_scilexercmake_set_fold_at_else(void* self, bool fold) {
    QsciLexerCMake_SetFoldAtElse((QsciLexerCMake*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerCMake* self, void (*slot)(QsciLexerCMake*, bool) ```
void q_scilexercmake_on_set_fold_at_else(void* self, void (*slot)(void*, bool)) {
    QsciLexerCMake_OnSetFoldAtElse((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerCMake* self, bool fold ```
void q_scilexercmake_qbase_set_fold_at_else(void* self, bool fold) {
    QsciLexerCMake_QBaseSetFoldAtElse((QsciLexerCMake*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercmake.html#readProperties)
///
/// ``` QsciLexerCMake* self, QSettings* qs, const char* prefix ```
bool q_scilexercmake_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCMake_ReadProperties((QsciLexerCMake*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerCMake* self, bool (*slot)(QsciLexerCMake*, QSettings*, const char*) ```
void q_scilexercmake_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerCMake_OnReadProperties((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerCMake* self, QSettings* qs, const char* prefix ```
bool q_scilexercmake_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCMake_QBaseReadProperties((QsciLexerCMake*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercmake.html#writeProperties)
///
/// ``` QsciLexerCMake* self, QSettings* qs, const char* prefix ```
bool q_scilexercmake_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCMake_WriteProperties((QsciLexerCMake*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerCMake* self, bool (*slot)(QsciLexerCMake*, QSettings*, const char*) ```
void q_scilexercmake_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerCMake_OnWriteProperties((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerCMake* self, QSettings* qs, const char* prefix ```
bool q_scilexercmake_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCMake_QBaseWriteProperties((QsciLexerCMake*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexercmake_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerCMake_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexercmake_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerCMake_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerCMake* self ```
QsciAbstractAPIs* q_scilexercmake_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerCMake* self ```
int32_t q_scilexercmake_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerCMake* self ```
QsciScintilla* q_scilexercmake_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerCMake* self, QsciAbstractAPIs* apis ```
void q_scilexercmake_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerCMake* self, QColor* c ```
void q_scilexercmake_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerCMake* self, QFont* f ```
void q_scilexercmake_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerCMake* self, QColor* c ```
void q_scilexercmake_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerCMake* self, QSettings* qs ```
bool q_scilexercmake_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerCMake* self, QSettings* qs ```
bool q_scilexercmake_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerCMake* self, QColor* c, int style ```
void q_scilexercmake_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerCMake* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexercmake_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerCMake* self, bool eolfilled, int style ```
void q_scilexercmake_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerCMake* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexercmake_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerCMake* self, QFont* f, int style ```
void q_scilexercmake_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerCMake* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexercmake_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerCMake* self, QColor* c, int style ```
void q_scilexercmake_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerCMake* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexercmake_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerCMake* self, const char* prop, const char* val ```
void q_scilexercmake_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerCMake* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexercmake_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerCMake* self, QSettings* qs, const char* prefix ```
bool q_scilexercmake_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerCMake* self, QSettings* qs, const char* prefix ```
bool q_scilexercmake_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerCMake* self ```
const char* q_scilexercmake_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerCMake* self, const char* name ```
void q_scilexercmake_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerCMake* self ```
bool q_scilexercmake_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerCMake* self ```
bool q_scilexercmake_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerCMake* self ```
bool q_scilexercmake_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerCMake* self ```
bool q_scilexercmake_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerCMake* self, bool b ```
bool q_scilexercmake_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerCMake* self ```
QThread* q_scilexercmake_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerCMake* self, QThread* thread ```
void q_scilexercmake_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerCMake* self, int interval ```
int32_t q_scilexercmake_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerCMake* self, int id ```
void q_scilexercmake_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerCMake* self ```
libqt_list /* of QObject* */ q_scilexercmake_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerCMake* self, QObject* parent ```
void q_scilexercmake_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerCMake* self, QObject* filterObj ```
void q_scilexercmake_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerCMake* self, QObject* obj ```
void q_scilexercmake_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexercmake_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerCMake* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexercmake_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexercmake_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexercmake_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerCMake* self ```
void q_scilexercmake_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerCMake* self ```
void q_scilexercmake_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerCMake* self, const char* name, QVariant* value ```
bool q_scilexercmake_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerCMake* self, const char* name ```
QVariant* q_scilexercmake_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerCMake* self ```
const char** q_scilexercmake_dynamic_property_names(void* self) {
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
/// ``` QsciLexerCMake* self ```
QBindingStorage* q_scilexercmake_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerCMake* self ```
QBindingStorage* q_scilexercmake_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerCMake* self ```
void q_scilexercmake_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexerCMake* self, void (*slot)(QObject*) ```
void q_scilexercmake_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerCMake* self ```
QObject* q_scilexercmake_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerCMake* self, const char* classname ```
bool q_scilexercmake_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerCMake* self ```
void q_scilexercmake_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerCMake* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexercmake_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexercmake_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerCMake* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexercmake_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerCMake* self, QObject* param1 ```
void q_scilexercmake_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexerCMake* self, void (*slot)(QObject*, QObject*) ```
void q_scilexercmake_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self ```
int32_t q_scilexercmake_lexer_id(void* self) {
    return QsciLexerCMake_LexerId((QsciLexerCMake*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self ```
int32_t q_scilexercmake_qbase_lexer_id(void* self) {
    return QsciLexerCMake_QBaseLexerId((QsciLexerCMake*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, int32_t (*slot)() ```
void q_scilexercmake_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerCMake_OnLexerId((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self ```
const char* q_scilexercmake_auto_completion_fillups(void* self) {
    return QsciLexerCMake_AutoCompletionFillups((QsciLexerCMake*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self ```
const char* q_scilexercmake_qbase_auto_completion_fillups(void* self) {
    return QsciLexerCMake_QBaseAutoCompletionFillups((QsciLexerCMake*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, const char* (*slot)() ```
void q_scilexercmake_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerCMake_OnAutoCompletionFillups((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self ```
const char** q_scilexercmake_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerCMake_AutoCompletionWordSeparators((QsciLexerCMake*)self);
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
/// ``` QsciLexerCMake* self ```
const char** q_scilexercmake_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerCMake_QBaseAutoCompletionWordSeparators((QsciLexerCMake*)self);
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
/// ``` QsciLexerCMake* self, const char** (*slot)() ```
void q_scilexercmake_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerCMake_OnAutoCompletionWordSeparators((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self, int* style ```
const char* q_scilexercmake_block_end(void* self, int* style) {
    return QsciLexerCMake_BlockEnd((QsciLexerCMake*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self, int* style ```
const char* q_scilexercmake_qbase_block_end(void* self, int* style) {
    return QsciLexerCMake_QBaseBlockEnd((QsciLexerCMake*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, const char* (*slot)(QsciLexerCMake*, int*) ```
void q_scilexercmake_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerCMake_OnBlockEnd((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self ```
int32_t q_scilexercmake_block_lookback(void* self) {
    return QsciLexerCMake_BlockLookback((QsciLexerCMake*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self ```
int32_t q_scilexercmake_qbase_block_lookback(void* self) {
    return QsciLexerCMake_QBaseBlockLookback((QsciLexerCMake*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, int32_t (*slot)() ```
void q_scilexercmake_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerCMake_OnBlockLookback((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self, int* style ```
const char* q_scilexercmake_block_start(void* self, int* style) {
    return QsciLexerCMake_BlockStart((QsciLexerCMake*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self, int* style ```
const char* q_scilexercmake_qbase_block_start(void* self, int* style) {
    return QsciLexerCMake_QBaseBlockStart((QsciLexerCMake*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, const char* (*slot)(QsciLexerCMake*, int*) ```
void q_scilexercmake_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerCMake_OnBlockStart((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self, int* style ```
const char* q_scilexercmake_block_start_keyword(void* self, int* style) {
    return QsciLexerCMake_BlockStartKeyword((QsciLexerCMake*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self, int* style ```
const char* q_scilexercmake_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerCMake_QBaseBlockStartKeyword((QsciLexerCMake*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, const char* (*slot)(QsciLexerCMake*, int*) ```
void q_scilexercmake_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerCMake_OnBlockStartKeyword((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#braceStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self ```
int32_t q_scilexercmake_brace_style(void* self) {
    return QsciLexerCMake_BraceStyle((QsciLexerCMake*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self ```
int32_t q_scilexercmake_qbase_brace_style(void* self) {
    return QsciLexerCMake_QBaseBraceStyle((QsciLexerCMake*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, int32_t (*slot)() ```
void q_scilexercmake_on_brace_style(void* self, int32_t (*slot)()) {
    QsciLexerCMake_OnBraceStyle((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self ```
bool q_scilexercmake_case_sensitive(void* self) {
    return QsciLexerCMake_CaseSensitive((QsciLexerCMake*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self ```
bool q_scilexercmake_qbase_case_sensitive(void* self) {
    return QsciLexerCMake_QBaseCaseSensitive((QsciLexerCMake*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, bool (*slot)() ```
void q_scilexercmake_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerCMake_OnCaseSensitive((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self, int style ```
QColor* q_scilexercmake_color(void* self, int style) {
    return QsciLexerCMake_Color((QsciLexerCMake*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self, int style ```
QColor* q_scilexercmake_qbase_color(void* self, int style) {
    return QsciLexerCMake_QBaseColor((QsciLexerCMake*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, QColor* (*slot)(QsciLexerCMake*, int) ```
void q_scilexercmake_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerCMake_OnColor((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self, int style ```
bool q_scilexercmake_eol_fill(void* self, int style) {
    return QsciLexerCMake_EolFill((QsciLexerCMake*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self, int style ```
bool q_scilexercmake_qbase_eol_fill(void* self, int style) {
    return QsciLexerCMake_QBaseEolFill((QsciLexerCMake*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, bool (*slot)(QsciLexerCMake*, int) ```
void q_scilexercmake_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerCMake_OnEolFill((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self, int style ```
QFont* q_scilexercmake_font(void* self, int style) {
    return QsciLexerCMake_Font((QsciLexerCMake*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self, int style ```
QFont* q_scilexercmake_qbase_font(void* self, int style) {
    return QsciLexerCMake_QBaseFont((QsciLexerCMake*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, QFont* (*slot)(QsciLexerCMake*, int) ```
void q_scilexercmake_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerCMake_OnFont((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self ```
int32_t q_scilexercmake_indentation_guide_view(void* self) {
    return QsciLexerCMake_IndentationGuideView((QsciLexerCMake*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self ```
int32_t q_scilexercmake_qbase_indentation_guide_view(void* self) {
    return QsciLexerCMake_QBaseIndentationGuideView((QsciLexerCMake*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, int32_t (*slot)() ```
void q_scilexercmake_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerCMake_OnIndentationGuideView((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self ```
int32_t q_scilexercmake_default_style(void* self) {
    return QsciLexerCMake_DefaultStyle((QsciLexerCMake*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self ```
int32_t q_scilexercmake_qbase_default_style(void* self) {
    return QsciLexerCMake_QBaseDefaultStyle((QsciLexerCMake*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, int32_t (*slot)() ```
void q_scilexercmake_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerCMake_OnDefaultStyle((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self, int style ```
QColor* q_scilexercmake_paper(void* self, int style) {
    return QsciLexerCMake_Paper((QsciLexerCMake*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self, int style ```
QColor* q_scilexercmake_qbase_paper(void* self, int style) {
    return QsciLexerCMake_QBasePaper((QsciLexerCMake*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, QColor* (*slot)(QsciLexerCMake*, int) ```
void q_scilexercmake_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerCMake_OnPaper((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self, int style ```
QColor* q_scilexercmake_default_color_with_style(void* self, int style) {
    return QsciLexerCMake_DefaultColorWithStyle((QsciLexerCMake*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self, int style ```
QColor* q_scilexercmake_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerCMake_QBaseDefaultColorWithStyle((QsciLexerCMake*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, QColor* (*slot)(QsciLexerCMake*, int) ```
void q_scilexercmake_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerCMake_OnDefaultColorWithStyle((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self, int style ```
bool q_scilexercmake_default_eol_fill(void* self, int style) {
    return QsciLexerCMake_DefaultEolFill((QsciLexerCMake*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self, int style ```
bool q_scilexercmake_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerCMake_QBaseDefaultEolFill((QsciLexerCMake*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, bool (*slot)(QsciLexerCMake*, int) ```
void q_scilexercmake_on_default_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerCMake_OnDefaultEolFill((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self, int style ```
QFont* q_scilexercmake_default_font_with_style(void* self, int style) {
    return QsciLexerCMake_DefaultFontWithStyle((QsciLexerCMake*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self, int style ```
QFont* q_scilexercmake_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerCMake_QBaseDefaultFontWithStyle((QsciLexerCMake*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, QFont* (*slot)(QsciLexerCMake*, int) ```
void q_scilexercmake_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerCMake_OnDefaultFontWithStyle((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self, int style ```
QColor* q_scilexercmake_default_paper_with_style(void* self, int style) {
    return QsciLexerCMake_DefaultPaperWithStyle((QsciLexerCMake*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self, int style ```
QColor* q_scilexercmake_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerCMake_QBaseDefaultPaperWithStyle((QsciLexerCMake*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, QColor* (*slot)(QsciLexerCMake*, int) ```
void q_scilexercmake_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerCMake_OnDefaultPaperWithStyle((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self, QsciScintilla* editor ```
void q_scilexercmake_set_editor(void* self, void* editor) {
    QsciLexerCMake_SetEditor((QsciLexerCMake*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self, QsciScintilla* editor ```
void q_scilexercmake_qbase_set_editor(void* self, void* editor) {
    QsciLexerCMake_QBaseSetEditor((QsciLexerCMake*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, void (*slot)(QsciLexerCMake*, QsciScintilla*) ```
void q_scilexercmake_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerCMake_OnSetEditor((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self ```
int32_t q_scilexercmake_style_bits_needed(void* self) {
    return QsciLexerCMake_StyleBitsNeeded((QsciLexerCMake*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self ```
int32_t q_scilexercmake_qbase_style_bits_needed(void* self) {
    return QsciLexerCMake_QBaseStyleBitsNeeded((QsciLexerCMake*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, int32_t (*slot)() ```
void q_scilexercmake_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerCMake_OnStyleBitsNeeded((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self ```
const char* q_scilexercmake_word_characters(void* self) {
    return QsciLexerCMake_WordCharacters((QsciLexerCMake*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self ```
const char* q_scilexercmake_qbase_word_characters(void* self) {
    return QsciLexerCMake_QBaseWordCharacters((QsciLexerCMake*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, const char* (*slot)() ```
void q_scilexercmake_on_word_characters(void* self, const char* (*slot)()) {
    QsciLexerCMake_OnWordCharacters((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self, int autoindentstyle ```
void q_scilexercmake_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerCMake_SetAutoIndentStyle((QsciLexerCMake*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self, int autoindentstyle ```
void q_scilexercmake_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerCMake_QBaseSetAutoIndentStyle((QsciLexerCMake*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, void (*slot)(QsciLexerCMake*, int) ```
void q_scilexercmake_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerCMake_OnSetAutoIndentStyle((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self, QColor* c, int style ```
void q_scilexercmake_set_color(void* self, void* c, int style) {
    QsciLexerCMake_SetColor((QsciLexerCMake*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self, QColor* c, int style ```
void q_scilexercmake_qbase_set_color(void* self, void* c, int style) {
    QsciLexerCMake_QBaseSetColor((QsciLexerCMake*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, void (*slot)(QsciLexerCMake*, QColor*, int) ```
void q_scilexercmake_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerCMake_OnSetColor((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self, bool eoffill, int style ```
void q_scilexercmake_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerCMake_SetEolFill((QsciLexerCMake*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self, bool eoffill, int style ```
void q_scilexercmake_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerCMake_QBaseSetEolFill((QsciLexerCMake*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, void (*slot)(QsciLexerCMake*, bool, int) ```
void q_scilexercmake_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerCMake_OnSetEolFill((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self, QFont* f, int style ```
void q_scilexercmake_set_font(void* self, void* f, int style) {
    QsciLexerCMake_SetFont((QsciLexerCMake*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self, QFont* f, int style ```
void q_scilexercmake_qbase_set_font(void* self, void* f, int style) {
    QsciLexerCMake_QBaseSetFont((QsciLexerCMake*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, void (*slot)(QsciLexerCMake*, QFont*, int) ```
void q_scilexercmake_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerCMake_OnSetFont((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self, QColor* c, int style ```
void q_scilexercmake_set_paper(void* self, void* c, int style) {
    QsciLexerCMake_SetPaper((QsciLexerCMake*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self, QColor* c, int style ```
void q_scilexercmake_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerCMake_QBaseSetPaper((QsciLexerCMake*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, void (*slot)(QsciLexerCMake*, QColor*, int) ```
void q_scilexercmake_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerCMake_OnSetPaper((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self, QEvent* event ```
bool q_scilexercmake_event(void* self, void* event) {
    return QsciLexerCMake_Event((QsciLexerCMake*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self, QEvent* event ```
bool q_scilexercmake_qbase_event(void* self, void* event) {
    return QsciLexerCMake_QBaseEvent((QsciLexerCMake*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, bool (*slot)(QsciLexerCMake*, QEvent*) ```
void q_scilexercmake_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerCMake_OnEvent((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self, QObject* watched, QEvent* event ```
bool q_scilexercmake_event_filter(void* self, void* watched, void* event) {
    return QsciLexerCMake_EventFilter((QsciLexerCMake*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self, QObject* watched, QEvent* event ```
bool q_scilexercmake_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerCMake_QBaseEventFilter((QsciLexerCMake*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, bool (*slot)(QsciLexerCMake*, QObject*, QEvent*) ```
void q_scilexercmake_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerCMake_OnEventFilter((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self, QTimerEvent* event ```
void q_scilexercmake_timer_event(void* self, void* event) {
    QsciLexerCMake_TimerEvent((QsciLexerCMake*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self, QTimerEvent* event ```
void q_scilexercmake_qbase_timer_event(void* self, void* event) {
    QsciLexerCMake_QBaseTimerEvent((QsciLexerCMake*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, void (*slot)(QsciLexerCMake*, QTimerEvent*) ```
void q_scilexercmake_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerCMake_OnTimerEvent((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self, QChildEvent* event ```
void q_scilexercmake_child_event(void* self, void* event) {
    QsciLexerCMake_ChildEvent((QsciLexerCMake*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self, QChildEvent* event ```
void q_scilexercmake_qbase_child_event(void* self, void* event) {
    QsciLexerCMake_QBaseChildEvent((QsciLexerCMake*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, void (*slot)(QsciLexerCMake*, QChildEvent*) ```
void q_scilexercmake_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerCMake_OnChildEvent((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self, QEvent* event ```
void q_scilexercmake_custom_event(void* self, void* event) {
    QsciLexerCMake_CustomEvent((QsciLexerCMake*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self, QEvent* event ```
void q_scilexercmake_qbase_custom_event(void* self, void* event) {
    QsciLexerCMake_QBaseCustomEvent((QsciLexerCMake*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, void (*slot)(QsciLexerCMake*, QEvent*) ```
void q_scilexercmake_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerCMake_OnCustomEvent((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self, QMetaMethod* signal ```
void q_scilexercmake_connect_notify(void* self, void* signal) {
    QsciLexerCMake_ConnectNotify((QsciLexerCMake*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self, QMetaMethod* signal ```
void q_scilexercmake_qbase_connect_notify(void* self, void* signal) {
    QsciLexerCMake_QBaseConnectNotify((QsciLexerCMake*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, void (*slot)(QsciLexerCMake*, QMetaMethod*) ```
void q_scilexercmake_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerCMake_OnConnectNotify((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self, QMetaMethod* signal ```
void q_scilexercmake_disconnect_notify(void* self, void* signal) {
    QsciLexerCMake_DisconnectNotify((QsciLexerCMake*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self, QMetaMethod* signal ```
void q_scilexercmake_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerCMake_QBaseDisconnectNotify((QsciLexerCMake*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, void (*slot)(QsciLexerCMake*, QMetaMethod*) ```
void q_scilexercmake_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerCMake_OnDisconnectNotify((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self ```
QObject* q_scilexercmake_sender(void* self) {
    return QsciLexerCMake_Sender((QsciLexerCMake*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self ```
QObject* q_scilexercmake_qbase_sender(void* self) {
    return QsciLexerCMake_QBaseSender((QsciLexerCMake*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, QObject* (*slot)() ```
void q_scilexercmake_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerCMake_OnSender((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self ```
int32_t q_scilexercmake_sender_signal_index(void* self) {
    return QsciLexerCMake_SenderSignalIndex((QsciLexerCMake*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self ```
int32_t q_scilexercmake_qbase_sender_signal_index(void* self) {
    return QsciLexerCMake_QBaseSenderSignalIndex((QsciLexerCMake*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, int32_t (*slot)() ```
void q_scilexercmake_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerCMake_OnSenderSignalIndex((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self, const char* signal ```
int32_t q_scilexercmake_receivers(void* self, const char* signal) {
    return QsciLexerCMake_Receivers((QsciLexerCMake*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self, const char* signal ```
int32_t q_scilexercmake_qbase_receivers(void* self, const char* signal) {
    return QsciLexerCMake_QBaseReceivers((QsciLexerCMake*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, int32_t (*slot)(QsciLexerCMake*, const char*) ```
void q_scilexercmake_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerCMake_OnReceivers((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCMake* self, QMetaMethod* signal ```
bool q_scilexercmake_is_signal_connected(void* self, void* signal) {
    return QsciLexerCMake_IsSignalConnected((QsciLexerCMake*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCMake* self, QMetaMethod* signal ```
bool q_scilexercmake_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerCMake_QBaseIsSignalConnected((QsciLexerCMake*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCMake* self, bool (*slot)(QsciLexerCMake*, QMetaMethod*) ```
void q_scilexercmake_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerCMake_OnIsSignalConnected((QsciLexerCMake*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexerCMake* self ```
void q_scilexercmake_delete(void* self) {
    QsciLexerCMake_Delete((QsciLexerCMake*)(self));
}