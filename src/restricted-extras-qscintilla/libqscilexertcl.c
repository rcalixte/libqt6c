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
#include "libqscilexertcl.hpp"
#include "libqscilexertcl.h"

/// https://doc.qt.io/qt-6/qscilexertcl.html

/// q_scilexertcl_new constructs a new QsciLexerTCL object.
///
///
QsciLexerTCL* q_scilexertcl_new() {
    return QsciLexerTCL_new();
}

/// q_scilexertcl_new2 constructs a new QsciLexerTCL object.
///
/// ``` QObject* parent ```
QsciLexerTCL* q_scilexertcl_new2(void* parent) {
    return QsciLexerTCL_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerTCL* self ```
QMetaObject* q_scilexertcl_meta_object(void* self) {
    return QsciLexerTCL_MetaObject((QsciLexerTCL*)self);
}

/// ``` QsciLexerTCL* self, const char* param1 ```
void* q_scilexertcl_metacast(void* self, const char* param1) {
    return QsciLexerTCL_Metacast((QsciLexerTCL*)self, param1);
}

/// ``` QsciLexerTCL* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexertcl_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerTCL_Metacall((QsciLexerTCL*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerTCL* self, int32_t (*slot)(QsciLexerTCL*, enum QMetaObject__Call, int, void*) ```
void q_scilexertcl_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerTCL_OnMetacall((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerTCL* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexertcl_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerTCL_QBaseMetacall((QsciLexerTCL*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexertcl_tr(const char* s) {
    libqt_string _str = QsciLexerTCL_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexertcl.html#language)
///
/// ``` QsciLexerTCL* self ```
const char* q_scilexertcl_language(void* self) {
    return QsciLexerTCL_Language((QsciLexerTCL*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexertcl.html#lexer)
///
/// ``` QsciLexerTCL* self ```
const char* q_scilexertcl_lexer(void* self) {
    return QsciLexerTCL_Lexer((QsciLexerTCL*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexertcl.html#braceStyle)
///
/// ``` QsciLexerTCL* self ```
int32_t q_scilexertcl_brace_style(void* self) {
    return QsciLexerTCL_BraceStyle((QsciLexerTCL*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexertcl.html#defaultColor)
///
/// ``` QsciLexerTCL* self, int style ```
QColor* q_scilexertcl_default_color(void* self, int style) {
    return QsciLexerTCL_DefaultColor((QsciLexerTCL*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexertcl.html#defaultEolFill)
///
/// ``` QsciLexerTCL* self, int style ```
bool q_scilexertcl_default_eol_fill(void* self, int style) {
    return QsciLexerTCL_DefaultEolFill((QsciLexerTCL*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexertcl.html#defaultFont)
///
/// ``` QsciLexerTCL* self, int style ```
QFont* q_scilexertcl_default_font(void* self, int style) {
    return QsciLexerTCL_DefaultFont((QsciLexerTCL*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexertcl.html#defaultPaper)
///
/// ``` QsciLexerTCL* self, int style ```
QColor* q_scilexertcl_default_paper(void* self, int style) {
    return QsciLexerTCL_DefaultPaper((QsciLexerTCL*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexertcl.html#keywords)
///
/// ``` QsciLexerTCL* self, int set ```
const char* q_scilexertcl_keywords(void* self, int set) {
    return QsciLexerTCL_Keywords((QsciLexerTCL*)self, set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexertcl.html#description)
///
/// ``` QsciLexerTCL* self, int style ```
const char* q_scilexertcl_description(void* self, int style) {
    libqt_string _str = QsciLexerTCL_Description((QsciLexerTCL*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexertcl.html#refreshProperties)
///
/// ``` QsciLexerTCL* self ```
void q_scilexertcl_refresh_properties(void* self) {
    QsciLexerTCL_RefreshProperties((QsciLexerTCL*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexertcl.html#setFoldComments)
///
/// ``` QsciLexerTCL* self, bool fold ```
void q_scilexertcl_set_fold_comments(void* self, bool fold) {
    QsciLexerTCL_SetFoldComments((QsciLexerTCL*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexertcl.html#foldComments)
///
/// ``` QsciLexerTCL* self ```
bool q_scilexertcl_fold_comments(void* self) {
    return QsciLexerTCL_FoldComments((QsciLexerTCL*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexertcl.html#readProperties)
///
/// ``` QsciLexerTCL* self, QSettings* qs, const char* prefix ```
bool q_scilexertcl_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerTCL_ReadProperties((QsciLexerTCL*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerTCL* self, bool (*slot)(QsciLexerTCL*, QSettings*, const char*) ```
void q_scilexertcl_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerTCL_OnReadProperties((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerTCL* self, QSettings* qs, const char* prefix ```
bool q_scilexertcl_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerTCL_QBaseReadProperties((QsciLexerTCL*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexertcl.html#writeProperties)
///
/// ``` QsciLexerTCL* self, QSettings* qs, const char* prefix ```
bool q_scilexertcl_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerTCL_WriteProperties((QsciLexerTCL*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerTCL* self, bool (*slot)(QsciLexerTCL*, QSettings*, const char*) ```
void q_scilexertcl_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerTCL_OnWriteProperties((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerTCL* self, QSettings* qs, const char* prefix ```
bool q_scilexertcl_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerTCL_QBaseWriteProperties((QsciLexerTCL*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexertcl_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerTCL_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexertcl_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerTCL_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerTCL* self ```
QsciAbstractAPIs* q_scilexertcl_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerTCL* self ```
int32_t q_scilexertcl_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerTCL* self ```
QsciScintilla* q_scilexertcl_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerTCL* self, QsciAbstractAPIs* apis ```
void q_scilexertcl_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerTCL* self, QColor* c ```
void q_scilexertcl_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerTCL* self, QFont* f ```
void q_scilexertcl_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerTCL* self, QColor* c ```
void q_scilexertcl_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerTCL* self, QSettings* qs ```
bool q_scilexertcl_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerTCL* self, QSettings* qs ```
bool q_scilexertcl_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerTCL* self, QColor* c, int style ```
void q_scilexertcl_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerTCL* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexertcl_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerTCL* self, bool eolfilled, int style ```
void q_scilexertcl_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerTCL* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexertcl_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerTCL* self, QFont* f, int style ```
void q_scilexertcl_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerTCL* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexertcl_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerTCL* self, QColor* c, int style ```
void q_scilexertcl_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerTCL* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexertcl_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerTCL* self, const char* prop, const char* val ```
void q_scilexertcl_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerTCL* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexertcl_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerTCL* self, QSettings* qs, const char* prefix ```
bool q_scilexertcl_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerTCL* self, QSettings* qs, const char* prefix ```
bool q_scilexertcl_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerTCL* self ```
const char* q_scilexertcl_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerTCL* self, const char* name ```
void q_scilexertcl_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerTCL* self ```
bool q_scilexertcl_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerTCL* self ```
bool q_scilexertcl_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerTCL* self ```
bool q_scilexertcl_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerTCL* self ```
bool q_scilexertcl_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerTCL* self, bool b ```
bool q_scilexertcl_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerTCL* self ```
QThread* q_scilexertcl_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerTCL* self, QThread* thread ```
void q_scilexertcl_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerTCL* self, int interval ```
int32_t q_scilexertcl_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerTCL* self, int id ```
void q_scilexertcl_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerTCL* self ```
libqt_list /* of QObject* */ q_scilexertcl_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerTCL* self, QObject* parent ```
void q_scilexertcl_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerTCL* self, QObject* filterObj ```
void q_scilexertcl_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerTCL* self, QObject* obj ```
void q_scilexertcl_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexertcl_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerTCL* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexertcl_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexertcl_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexertcl_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerTCL* self ```
void q_scilexertcl_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerTCL* self ```
void q_scilexertcl_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerTCL* self, const char* name, QVariant* value ```
bool q_scilexertcl_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerTCL* self, const char* name ```
QVariant* q_scilexertcl_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerTCL* self ```
const char** q_scilexertcl_dynamic_property_names(void* self) {
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
/// ``` QsciLexerTCL* self ```
QBindingStorage* q_scilexertcl_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerTCL* self ```
QBindingStorage* q_scilexertcl_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerTCL* self ```
void q_scilexertcl_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexerTCL* self, void (*slot)(QObject*) ```
void q_scilexertcl_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerTCL* self ```
QObject* q_scilexertcl_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerTCL* self, const char* classname ```
bool q_scilexertcl_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerTCL* self ```
void q_scilexertcl_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerTCL* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexertcl_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexertcl_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerTCL* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexertcl_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerTCL* self, QObject* param1 ```
void q_scilexertcl_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexerTCL* self, void (*slot)(QObject*, QObject*) ```
void q_scilexertcl_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self ```
int32_t q_scilexertcl_lexer_id(void* self) {
    return QsciLexerTCL_LexerId((QsciLexerTCL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self ```
int32_t q_scilexertcl_qbase_lexer_id(void* self) {
    return QsciLexerTCL_QBaseLexerId((QsciLexerTCL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, int32_t (*slot)() ```
void q_scilexertcl_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerTCL_OnLexerId((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self ```
const char* q_scilexertcl_auto_completion_fillups(void* self) {
    return QsciLexerTCL_AutoCompletionFillups((QsciLexerTCL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self ```
const char* q_scilexertcl_qbase_auto_completion_fillups(void* self) {
    return QsciLexerTCL_QBaseAutoCompletionFillups((QsciLexerTCL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, const char* (*slot)() ```
void q_scilexertcl_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerTCL_OnAutoCompletionFillups((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self ```
const char** q_scilexertcl_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerTCL_AutoCompletionWordSeparators((QsciLexerTCL*)self);
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
/// ``` QsciLexerTCL* self ```
const char** q_scilexertcl_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerTCL_QBaseAutoCompletionWordSeparators((QsciLexerTCL*)self);
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
/// ``` QsciLexerTCL* self, const char** (*slot)() ```
void q_scilexertcl_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerTCL_OnAutoCompletionWordSeparators((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self, int* style ```
const char* q_scilexertcl_block_end(void* self, int* style) {
    return QsciLexerTCL_BlockEnd((QsciLexerTCL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self, int* style ```
const char* q_scilexertcl_qbase_block_end(void* self, int* style) {
    return QsciLexerTCL_QBaseBlockEnd((QsciLexerTCL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, const char* (*slot)(QsciLexerTCL*, int*) ```
void q_scilexertcl_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerTCL_OnBlockEnd((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self ```
int32_t q_scilexertcl_block_lookback(void* self) {
    return QsciLexerTCL_BlockLookback((QsciLexerTCL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self ```
int32_t q_scilexertcl_qbase_block_lookback(void* self) {
    return QsciLexerTCL_QBaseBlockLookback((QsciLexerTCL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, int32_t (*slot)() ```
void q_scilexertcl_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerTCL_OnBlockLookback((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self, int* style ```
const char* q_scilexertcl_block_start(void* self, int* style) {
    return QsciLexerTCL_BlockStart((QsciLexerTCL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self, int* style ```
const char* q_scilexertcl_qbase_block_start(void* self, int* style) {
    return QsciLexerTCL_QBaseBlockStart((QsciLexerTCL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, const char* (*slot)(QsciLexerTCL*, int*) ```
void q_scilexertcl_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerTCL_OnBlockStart((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self, int* style ```
const char* q_scilexertcl_block_start_keyword(void* self, int* style) {
    return QsciLexerTCL_BlockStartKeyword((QsciLexerTCL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self, int* style ```
const char* q_scilexertcl_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerTCL_QBaseBlockStartKeyword((QsciLexerTCL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, const char* (*slot)(QsciLexerTCL*, int*) ```
void q_scilexertcl_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerTCL_OnBlockStartKeyword((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self ```
bool q_scilexertcl_case_sensitive(void* self) {
    return QsciLexerTCL_CaseSensitive((QsciLexerTCL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self ```
bool q_scilexertcl_qbase_case_sensitive(void* self) {
    return QsciLexerTCL_QBaseCaseSensitive((QsciLexerTCL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, bool (*slot)() ```
void q_scilexertcl_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerTCL_OnCaseSensitive((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self, int style ```
QColor* q_scilexertcl_color(void* self, int style) {
    return QsciLexerTCL_Color((QsciLexerTCL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self, int style ```
QColor* q_scilexertcl_qbase_color(void* self, int style) {
    return QsciLexerTCL_QBaseColor((QsciLexerTCL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, QColor* (*slot)(QsciLexerTCL*, int) ```
void q_scilexertcl_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerTCL_OnColor((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self, int style ```
bool q_scilexertcl_eol_fill(void* self, int style) {
    return QsciLexerTCL_EolFill((QsciLexerTCL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self, int style ```
bool q_scilexertcl_qbase_eol_fill(void* self, int style) {
    return QsciLexerTCL_QBaseEolFill((QsciLexerTCL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, bool (*slot)(QsciLexerTCL*, int) ```
void q_scilexertcl_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerTCL_OnEolFill((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self, int style ```
QFont* q_scilexertcl_font(void* self, int style) {
    return QsciLexerTCL_Font((QsciLexerTCL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self, int style ```
QFont* q_scilexertcl_qbase_font(void* self, int style) {
    return QsciLexerTCL_QBaseFont((QsciLexerTCL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, QFont* (*slot)(QsciLexerTCL*, int) ```
void q_scilexertcl_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerTCL_OnFont((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self ```
int32_t q_scilexertcl_indentation_guide_view(void* self) {
    return QsciLexerTCL_IndentationGuideView((QsciLexerTCL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self ```
int32_t q_scilexertcl_qbase_indentation_guide_view(void* self) {
    return QsciLexerTCL_QBaseIndentationGuideView((QsciLexerTCL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, int32_t (*slot)() ```
void q_scilexertcl_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerTCL_OnIndentationGuideView((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self ```
int32_t q_scilexertcl_default_style(void* self) {
    return QsciLexerTCL_DefaultStyle((QsciLexerTCL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self ```
int32_t q_scilexertcl_qbase_default_style(void* self) {
    return QsciLexerTCL_QBaseDefaultStyle((QsciLexerTCL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, int32_t (*slot)() ```
void q_scilexertcl_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerTCL_OnDefaultStyle((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self, int style ```
QColor* q_scilexertcl_paper(void* self, int style) {
    return QsciLexerTCL_Paper((QsciLexerTCL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self, int style ```
QColor* q_scilexertcl_qbase_paper(void* self, int style) {
    return QsciLexerTCL_QBasePaper((QsciLexerTCL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, QColor* (*slot)(QsciLexerTCL*, int) ```
void q_scilexertcl_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerTCL_OnPaper((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self, int style ```
QColor* q_scilexertcl_default_color_with_style(void* self, int style) {
    return QsciLexerTCL_DefaultColorWithStyle((QsciLexerTCL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self, int style ```
QColor* q_scilexertcl_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerTCL_QBaseDefaultColorWithStyle((QsciLexerTCL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, QColor* (*slot)(QsciLexerTCL*, int) ```
void q_scilexertcl_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerTCL_OnDefaultColorWithStyle((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self, int style ```
QFont* q_scilexertcl_default_font_with_style(void* self, int style) {
    return QsciLexerTCL_DefaultFontWithStyle((QsciLexerTCL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self, int style ```
QFont* q_scilexertcl_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerTCL_QBaseDefaultFontWithStyle((QsciLexerTCL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, QFont* (*slot)(QsciLexerTCL*, int) ```
void q_scilexertcl_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerTCL_OnDefaultFontWithStyle((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self, int style ```
QColor* q_scilexertcl_default_paper_with_style(void* self, int style) {
    return QsciLexerTCL_DefaultPaperWithStyle((QsciLexerTCL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self, int style ```
QColor* q_scilexertcl_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerTCL_QBaseDefaultPaperWithStyle((QsciLexerTCL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, QColor* (*slot)(QsciLexerTCL*, int) ```
void q_scilexertcl_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerTCL_OnDefaultPaperWithStyle((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self, QsciScintilla* editor ```
void q_scilexertcl_set_editor(void* self, void* editor) {
    QsciLexerTCL_SetEditor((QsciLexerTCL*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self, QsciScintilla* editor ```
void q_scilexertcl_qbase_set_editor(void* self, void* editor) {
    QsciLexerTCL_QBaseSetEditor((QsciLexerTCL*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, void (*slot)(QsciLexerTCL*, QsciScintilla*) ```
void q_scilexertcl_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerTCL_OnSetEditor((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self ```
int32_t q_scilexertcl_style_bits_needed(void* self) {
    return QsciLexerTCL_StyleBitsNeeded((QsciLexerTCL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self ```
int32_t q_scilexertcl_qbase_style_bits_needed(void* self) {
    return QsciLexerTCL_QBaseStyleBitsNeeded((QsciLexerTCL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, int32_t (*slot)() ```
void q_scilexertcl_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerTCL_OnStyleBitsNeeded((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self ```
const char* q_scilexertcl_word_characters(void* self) {
    return QsciLexerTCL_WordCharacters((QsciLexerTCL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self ```
const char* q_scilexertcl_qbase_word_characters(void* self) {
    return QsciLexerTCL_QBaseWordCharacters((QsciLexerTCL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, const char* (*slot)() ```
void q_scilexertcl_on_word_characters(void* self, const char* (*slot)()) {
    QsciLexerTCL_OnWordCharacters((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self, int autoindentstyle ```
void q_scilexertcl_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerTCL_SetAutoIndentStyle((QsciLexerTCL*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self, int autoindentstyle ```
void q_scilexertcl_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerTCL_QBaseSetAutoIndentStyle((QsciLexerTCL*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, void (*slot)(QsciLexerTCL*, int) ```
void q_scilexertcl_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerTCL_OnSetAutoIndentStyle((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self, QColor* c, int style ```
void q_scilexertcl_set_color(void* self, void* c, int style) {
    QsciLexerTCL_SetColor((QsciLexerTCL*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self, QColor* c, int style ```
void q_scilexertcl_qbase_set_color(void* self, void* c, int style) {
    QsciLexerTCL_QBaseSetColor((QsciLexerTCL*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, void (*slot)(QsciLexerTCL*, QColor*, int) ```
void q_scilexertcl_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerTCL_OnSetColor((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self, bool eoffill, int style ```
void q_scilexertcl_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerTCL_SetEolFill((QsciLexerTCL*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self, bool eoffill, int style ```
void q_scilexertcl_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerTCL_QBaseSetEolFill((QsciLexerTCL*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, void (*slot)(QsciLexerTCL*, bool, int) ```
void q_scilexertcl_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerTCL_OnSetEolFill((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self, QFont* f, int style ```
void q_scilexertcl_set_font(void* self, void* f, int style) {
    QsciLexerTCL_SetFont((QsciLexerTCL*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self, QFont* f, int style ```
void q_scilexertcl_qbase_set_font(void* self, void* f, int style) {
    QsciLexerTCL_QBaseSetFont((QsciLexerTCL*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, void (*slot)(QsciLexerTCL*, QFont*, int) ```
void q_scilexertcl_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerTCL_OnSetFont((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self, QColor* c, int style ```
void q_scilexertcl_set_paper(void* self, void* c, int style) {
    QsciLexerTCL_SetPaper((QsciLexerTCL*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self, QColor* c, int style ```
void q_scilexertcl_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerTCL_QBaseSetPaper((QsciLexerTCL*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, void (*slot)(QsciLexerTCL*, QColor*, int) ```
void q_scilexertcl_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerTCL_OnSetPaper((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self, QEvent* event ```
bool q_scilexertcl_event(void* self, void* event) {
    return QsciLexerTCL_Event((QsciLexerTCL*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self, QEvent* event ```
bool q_scilexertcl_qbase_event(void* self, void* event) {
    return QsciLexerTCL_QBaseEvent((QsciLexerTCL*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, bool (*slot)(QsciLexerTCL*, QEvent*) ```
void q_scilexertcl_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerTCL_OnEvent((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self, QObject* watched, QEvent* event ```
bool q_scilexertcl_event_filter(void* self, void* watched, void* event) {
    return QsciLexerTCL_EventFilter((QsciLexerTCL*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self, QObject* watched, QEvent* event ```
bool q_scilexertcl_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerTCL_QBaseEventFilter((QsciLexerTCL*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, bool (*slot)(QsciLexerTCL*, QObject*, QEvent*) ```
void q_scilexertcl_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerTCL_OnEventFilter((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self, QTimerEvent* event ```
void q_scilexertcl_timer_event(void* self, void* event) {
    QsciLexerTCL_TimerEvent((QsciLexerTCL*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self, QTimerEvent* event ```
void q_scilexertcl_qbase_timer_event(void* self, void* event) {
    QsciLexerTCL_QBaseTimerEvent((QsciLexerTCL*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, void (*slot)(QsciLexerTCL*, QTimerEvent*) ```
void q_scilexertcl_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerTCL_OnTimerEvent((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self, QChildEvent* event ```
void q_scilexertcl_child_event(void* self, void* event) {
    QsciLexerTCL_ChildEvent((QsciLexerTCL*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self, QChildEvent* event ```
void q_scilexertcl_qbase_child_event(void* self, void* event) {
    QsciLexerTCL_QBaseChildEvent((QsciLexerTCL*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, void (*slot)(QsciLexerTCL*, QChildEvent*) ```
void q_scilexertcl_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerTCL_OnChildEvent((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self, QEvent* event ```
void q_scilexertcl_custom_event(void* self, void* event) {
    QsciLexerTCL_CustomEvent((QsciLexerTCL*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self, QEvent* event ```
void q_scilexertcl_qbase_custom_event(void* self, void* event) {
    QsciLexerTCL_QBaseCustomEvent((QsciLexerTCL*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, void (*slot)(QsciLexerTCL*, QEvent*) ```
void q_scilexertcl_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerTCL_OnCustomEvent((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self, QMetaMethod* signal ```
void q_scilexertcl_connect_notify(void* self, void* signal) {
    QsciLexerTCL_ConnectNotify((QsciLexerTCL*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self, QMetaMethod* signal ```
void q_scilexertcl_qbase_connect_notify(void* self, void* signal) {
    QsciLexerTCL_QBaseConnectNotify((QsciLexerTCL*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, void (*slot)(QsciLexerTCL*, QMetaMethod*) ```
void q_scilexertcl_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerTCL_OnConnectNotify((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self, QMetaMethod* signal ```
void q_scilexertcl_disconnect_notify(void* self, void* signal) {
    QsciLexerTCL_DisconnectNotify((QsciLexerTCL*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self, QMetaMethod* signal ```
void q_scilexertcl_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerTCL_QBaseDisconnectNotify((QsciLexerTCL*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, void (*slot)(QsciLexerTCL*, QMetaMethod*) ```
void q_scilexertcl_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerTCL_OnDisconnectNotify((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self ```
QObject* q_scilexertcl_sender(void* self) {
    return QsciLexerTCL_Sender((QsciLexerTCL*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self ```
QObject* q_scilexertcl_qbase_sender(void* self) {
    return QsciLexerTCL_QBaseSender((QsciLexerTCL*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, QObject* (*slot)() ```
void q_scilexertcl_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerTCL_OnSender((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self ```
int32_t q_scilexertcl_sender_signal_index(void* self) {
    return QsciLexerTCL_SenderSignalIndex((QsciLexerTCL*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self ```
int32_t q_scilexertcl_qbase_sender_signal_index(void* self) {
    return QsciLexerTCL_QBaseSenderSignalIndex((QsciLexerTCL*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, int32_t (*slot)() ```
void q_scilexertcl_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerTCL_OnSenderSignalIndex((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self, const char* signal ```
int32_t q_scilexertcl_receivers(void* self, const char* signal) {
    return QsciLexerTCL_Receivers((QsciLexerTCL*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self, const char* signal ```
int32_t q_scilexertcl_qbase_receivers(void* self, const char* signal) {
    return QsciLexerTCL_QBaseReceivers((QsciLexerTCL*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, int32_t (*slot)(QsciLexerTCL*, const char*) ```
void q_scilexertcl_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerTCL_OnReceivers((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTCL* self, QMetaMethod* signal ```
bool q_scilexertcl_is_signal_connected(void* self, void* signal) {
    return QsciLexerTCL_IsSignalConnected((QsciLexerTCL*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTCL* self, QMetaMethod* signal ```
bool q_scilexertcl_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerTCL_QBaseIsSignalConnected((QsciLexerTCL*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTCL* self, bool (*slot)(QsciLexerTCL*, QMetaMethod*) ```
void q_scilexertcl_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerTCL_OnIsSignalConnected((QsciLexerTCL*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexerTCL* self ```
void q_scilexertcl_delete(void* self) {
    QsciLexerTCL_Delete((QsciLexerTCL*)(self));
}