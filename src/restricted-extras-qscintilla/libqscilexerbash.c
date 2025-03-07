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
#include "libqscilexerbash.hpp"
#include "libqscilexerbash.h"

/// https://doc.qt.io/qt-6/qscilexerbash.html

/// q_scilexerbash_new constructs a new QsciLexerBash object.
///
///
QsciLexerBash* q_scilexerbash_new() {
    return QsciLexerBash_new();
}

/// q_scilexerbash_new2 constructs a new QsciLexerBash object.
///
/// ``` QObject* parent ```
QsciLexerBash* q_scilexerbash_new2(void* parent) {
    return QsciLexerBash_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerBash* self ```
QMetaObject* q_scilexerbash_meta_object(void* self) {
    return QsciLexerBash_MetaObject((QsciLexerBash*)self);
}

/// ``` QsciLexerBash* self, const char* param1 ```
void* q_scilexerbash_metacast(void* self, const char* param1) {
    return QsciLexerBash_Metacast((QsciLexerBash*)self, param1);
}

/// ``` QsciLexerBash* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerbash_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerBash_Metacall((QsciLexerBash*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerBash* self, int32_t (*slot)(QsciLexerBash*, enum QMetaObject__Call, int, void*) ```
void q_scilexerbash_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerBash_OnMetacall((QsciLexerBash*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerBash* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerbash_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerBash_QBaseMetacall((QsciLexerBash*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexerbash_tr(const char* s) {
    libqt_string _str = QsciLexerBash_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerbash.html#language)
///
/// ``` QsciLexerBash* self ```
const char* q_scilexerbash_language(void* self) {
    return QsciLexerBash_Language((QsciLexerBash*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerbash.html#lexer)
///
/// ``` QsciLexerBash* self ```
const char* q_scilexerbash_lexer(void* self) {
    return QsciLexerBash_Lexer((QsciLexerBash*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerbash.html#braceStyle)
///
/// ``` QsciLexerBash* self ```
int32_t q_scilexerbash_brace_style(void* self) {
    return QsciLexerBash_BraceStyle((QsciLexerBash*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerbash.html#wordCharacters)
///
/// ``` QsciLexerBash* self ```
const char* q_scilexerbash_word_characters(void* self) {
    return QsciLexerBash_WordCharacters((QsciLexerBash*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerbash.html#defaultColor)
///
/// ``` QsciLexerBash* self, int style ```
QColor* q_scilexerbash_default_color(void* self, int style) {
    return QsciLexerBash_DefaultColor((QsciLexerBash*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerbash.html#defaultEolFill)
///
/// ``` QsciLexerBash* self, int style ```
bool q_scilexerbash_default_eol_fill(void* self, int style) {
    return QsciLexerBash_DefaultEolFill((QsciLexerBash*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerbash.html#defaultFont)
///
/// ``` QsciLexerBash* self, int style ```
QFont* q_scilexerbash_default_font(void* self, int style) {
    return QsciLexerBash_DefaultFont((QsciLexerBash*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerbash.html#defaultPaper)
///
/// ``` QsciLexerBash* self, int style ```
QColor* q_scilexerbash_default_paper(void* self, int style) {
    return QsciLexerBash_DefaultPaper((QsciLexerBash*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerbash.html#keywords)
///
/// ``` QsciLexerBash* self, int set ```
const char* q_scilexerbash_keywords(void* self, int set) {
    return QsciLexerBash_Keywords((QsciLexerBash*)self, set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerbash.html#description)
///
/// ``` QsciLexerBash* self, int style ```
const char* q_scilexerbash_description(void* self, int style) {
    libqt_string _str = QsciLexerBash_Description((QsciLexerBash*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerbash.html#refreshProperties)
///
/// ``` QsciLexerBash* self ```
void q_scilexerbash_refresh_properties(void* self) {
    QsciLexerBash_RefreshProperties((QsciLexerBash*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerbash.html#foldComments)
///
/// ``` QsciLexerBash* self ```
bool q_scilexerbash_fold_comments(void* self) {
    return QsciLexerBash_FoldComments((QsciLexerBash*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerbash.html#foldCompact)
///
/// ``` QsciLexerBash* self ```
bool q_scilexerbash_fold_compact(void* self) {
    return QsciLexerBash_FoldCompact((QsciLexerBash*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerbash.html#setFoldComments)
///
/// ``` QsciLexerBash* self, bool fold ```
void q_scilexerbash_set_fold_comments(void* self, bool fold) {
    QsciLexerBash_SetFoldComments((QsciLexerBash*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerBash* self, void (*slot)(QsciLexerBash*, bool) ```
void q_scilexerbash_on_set_fold_comments(void* self, void (*slot)(void*, bool)) {
    QsciLexerBash_OnSetFoldComments((QsciLexerBash*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerBash* self, bool fold ```
void q_scilexerbash_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerBash_QBaseSetFoldComments((QsciLexerBash*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerbash.html#setFoldCompact)
///
/// ``` QsciLexerBash* self, bool fold ```
void q_scilexerbash_set_fold_compact(void* self, bool fold) {
    QsciLexerBash_SetFoldCompact((QsciLexerBash*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerBash* self, void (*slot)(QsciLexerBash*, bool) ```
void q_scilexerbash_on_set_fold_compact(void* self, void (*slot)(void*, bool)) {
    QsciLexerBash_OnSetFoldCompact((QsciLexerBash*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerBash* self, bool fold ```
void q_scilexerbash_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerBash_QBaseSetFoldCompact((QsciLexerBash*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerbash.html#readProperties)
///
/// ``` QsciLexerBash* self, QSettings* qs, const char* prefix ```
bool q_scilexerbash_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerBash_ReadProperties((QsciLexerBash*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerBash* self, bool (*slot)(QsciLexerBash*, QSettings*, const char*) ```
void q_scilexerbash_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerBash_OnReadProperties((QsciLexerBash*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerBash* self, QSettings* qs, const char* prefix ```
bool q_scilexerbash_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerBash_QBaseReadProperties((QsciLexerBash*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerbash.html#writeProperties)
///
/// ``` QsciLexerBash* self, QSettings* qs, const char* prefix ```
bool q_scilexerbash_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerBash_WriteProperties((QsciLexerBash*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerBash* self, bool (*slot)(QsciLexerBash*, QSettings*, const char*) ```
void q_scilexerbash_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerBash_OnWriteProperties((QsciLexerBash*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerBash* self, QSettings* qs, const char* prefix ```
bool q_scilexerbash_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerBash_QBaseWriteProperties((QsciLexerBash*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexerbash_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerBash_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexerbash_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerBash_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerBash* self ```
QsciAbstractAPIs* q_scilexerbash_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerBash* self ```
int32_t q_scilexerbash_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerBash* self ```
QsciScintilla* q_scilexerbash_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerBash* self, QsciAbstractAPIs* apis ```
void q_scilexerbash_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerBash* self, QColor* c ```
void q_scilexerbash_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerBash* self, QFont* f ```
void q_scilexerbash_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerBash* self, QColor* c ```
void q_scilexerbash_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerBash* self, QSettings* qs ```
bool q_scilexerbash_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerBash* self, QSettings* qs ```
bool q_scilexerbash_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerBash* self, QColor* c, int style ```
void q_scilexerbash_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerBash* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerbash_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerBash* self, bool eolfilled, int style ```
void q_scilexerbash_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerBash* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexerbash_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerBash* self, QFont* f, int style ```
void q_scilexerbash_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerBash* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexerbash_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerBash* self, QColor* c, int style ```
void q_scilexerbash_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerBash* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerbash_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerBash* self, const char* prop, const char* val ```
void q_scilexerbash_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerBash* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexerbash_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerBash* self, QSettings* qs, const char* prefix ```
bool q_scilexerbash_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerBash* self, QSettings* qs, const char* prefix ```
bool q_scilexerbash_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerBash* self ```
const char* q_scilexerbash_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerBash* self, const char* name ```
void q_scilexerbash_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerBash* self ```
bool q_scilexerbash_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerBash* self ```
bool q_scilexerbash_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerBash* self ```
bool q_scilexerbash_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerBash* self ```
bool q_scilexerbash_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerBash* self, bool b ```
bool q_scilexerbash_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerBash* self ```
QThread* q_scilexerbash_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerBash* self, QThread* thread ```
void q_scilexerbash_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerBash* self, int interval ```
int32_t q_scilexerbash_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerBash* self, int id ```
void q_scilexerbash_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerBash* self ```
libqt_list /* of QObject* */ q_scilexerbash_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerBash* self, QObject* parent ```
void q_scilexerbash_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerBash* self, QObject* filterObj ```
void q_scilexerbash_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerBash* self, QObject* obj ```
void q_scilexerbash_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexerbash_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerBash* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexerbash_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexerbash_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexerbash_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerBash* self ```
void q_scilexerbash_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerBash* self ```
void q_scilexerbash_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerBash* self, const char* name, QVariant* value ```
bool q_scilexerbash_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerBash* self, const char* name ```
QVariant* q_scilexerbash_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerBash* self ```
const char** q_scilexerbash_dynamic_property_names(void* self) {
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
/// ``` QsciLexerBash* self ```
QBindingStorage* q_scilexerbash_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerBash* self ```
QBindingStorage* q_scilexerbash_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerBash* self ```
void q_scilexerbash_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexerBash* self, void (*slot)(QObject*) ```
void q_scilexerbash_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerBash* self ```
QObject* q_scilexerbash_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerBash* self, const char* classname ```
bool q_scilexerbash_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerBash* self ```
void q_scilexerbash_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerBash* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexerbash_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerbash_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerBash* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerbash_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerBash* self, QObject* param1 ```
void q_scilexerbash_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexerBash* self, void (*slot)(QObject*, QObject*) ```
void q_scilexerbash_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self ```
int32_t q_scilexerbash_lexer_id(void* self) {
    return QsciLexerBash_LexerId((QsciLexerBash*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self ```
int32_t q_scilexerbash_qbase_lexer_id(void* self) {
    return QsciLexerBash_QBaseLexerId((QsciLexerBash*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, int32_t (*slot)() ```
void q_scilexerbash_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerBash_OnLexerId((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self ```
const char* q_scilexerbash_auto_completion_fillups(void* self) {
    return QsciLexerBash_AutoCompletionFillups((QsciLexerBash*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self ```
const char* q_scilexerbash_qbase_auto_completion_fillups(void* self) {
    return QsciLexerBash_QBaseAutoCompletionFillups((QsciLexerBash*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, const char* (*slot)() ```
void q_scilexerbash_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerBash_OnAutoCompletionFillups((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self ```
const char** q_scilexerbash_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerBash_AutoCompletionWordSeparators((QsciLexerBash*)self);
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
/// ``` QsciLexerBash* self ```
const char** q_scilexerbash_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerBash_QBaseAutoCompletionWordSeparators((QsciLexerBash*)self);
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
/// ``` QsciLexerBash* self, const char** (*slot)() ```
void q_scilexerbash_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerBash_OnAutoCompletionWordSeparators((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self, int* style ```
const char* q_scilexerbash_block_end(void* self, int* style) {
    return QsciLexerBash_BlockEnd((QsciLexerBash*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self, int* style ```
const char* q_scilexerbash_qbase_block_end(void* self, int* style) {
    return QsciLexerBash_QBaseBlockEnd((QsciLexerBash*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, const char* (*slot)(QsciLexerBash*, int*) ```
void q_scilexerbash_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerBash_OnBlockEnd((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self ```
int32_t q_scilexerbash_block_lookback(void* self) {
    return QsciLexerBash_BlockLookback((QsciLexerBash*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self ```
int32_t q_scilexerbash_qbase_block_lookback(void* self) {
    return QsciLexerBash_QBaseBlockLookback((QsciLexerBash*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, int32_t (*slot)() ```
void q_scilexerbash_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerBash_OnBlockLookback((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self, int* style ```
const char* q_scilexerbash_block_start(void* self, int* style) {
    return QsciLexerBash_BlockStart((QsciLexerBash*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self, int* style ```
const char* q_scilexerbash_qbase_block_start(void* self, int* style) {
    return QsciLexerBash_QBaseBlockStart((QsciLexerBash*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, const char* (*slot)(QsciLexerBash*, int*) ```
void q_scilexerbash_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerBash_OnBlockStart((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self, int* style ```
const char* q_scilexerbash_block_start_keyword(void* self, int* style) {
    return QsciLexerBash_BlockStartKeyword((QsciLexerBash*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self, int* style ```
const char* q_scilexerbash_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerBash_QBaseBlockStartKeyword((QsciLexerBash*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, const char* (*slot)(QsciLexerBash*, int*) ```
void q_scilexerbash_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerBash_OnBlockStartKeyword((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self ```
bool q_scilexerbash_case_sensitive(void* self) {
    return QsciLexerBash_CaseSensitive((QsciLexerBash*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self ```
bool q_scilexerbash_qbase_case_sensitive(void* self) {
    return QsciLexerBash_QBaseCaseSensitive((QsciLexerBash*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, bool (*slot)() ```
void q_scilexerbash_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerBash_OnCaseSensitive((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self, int style ```
QColor* q_scilexerbash_color(void* self, int style) {
    return QsciLexerBash_Color((QsciLexerBash*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self, int style ```
QColor* q_scilexerbash_qbase_color(void* self, int style) {
    return QsciLexerBash_QBaseColor((QsciLexerBash*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, QColor* (*slot)(QsciLexerBash*, int) ```
void q_scilexerbash_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerBash_OnColor((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self, int style ```
bool q_scilexerbash_eol_fill(void* self, int style) {
    return QsciLexerBash_EolFill((QsciLexerBash*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self, int style ```
bool q_scilexerbash_qbase_eol_fill(void* self, int style) {
    return QsciLexerBash_QBaseEolFill((QsciLexerBash*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, bool (*slot)(QsciLexerBash*, int) ```
void q_scilexerbash_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerBash_OnEolFill((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self, int style ```
QFont* q_scilexerbash_font(void* self, int style) {
    return QsciLexerBash_Font((QsciLexerBash*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self, int style ```
QFont* q_scilexerbash_qbase_font(void* self, int style) {
    return QsciLexerBash_QBaseFont((QsciLexerBash*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, QFont* (*slot)(QsciLexerBash*, int) ```
void q_scilexerbash_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerBash_OnFont((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self ```
int32_t q_scilexerbash_indentation_guide_view(void* self) {
    return QsciLexerBash_IndentationGuideView((QsciLexerBash*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self ```
int32_t q_scilexerbash_qbase_indentation_guide_view(void* self) {
    return QsciLexerBash_QBaseIndentationGuideView((QsciLexerBash*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, int32_t (*slot)() ```
void q_scilexerbash_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerBash_OnIndentationGuideView((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self ```
int32_t q_scilexerbash_default_style(void* self) {
    return QsciLexerBash_DefaultStyle((QsciLexerBash*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self ```
int32_t q_scilexerbash_qbase_default_style(void* self) {
    return QsciLexerBash_QBaseDefaultStyle((QsciLexerBash*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, int32_t (*slot)() ```
void q_scilexerbash_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerBash_OnDefaultStyle((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self, int style ```
QColor* q_scilexerbash_paper(void* self, int style) {
    return QsciLexerBash_Paper((QsciLexerBash*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self, int style ```
QColor* q_scilexerbash_qbase_paper(void* self, int style) {
    return QsciLexerBash_QBasePaper((QsciLexerBash*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, QColor* (*slot)(QsciLexerBash*, int) ```
void q_scilexerbash_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerBash_OnPaper((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self, int style ```
QColor* q_scilexerbash_default_color_with_style(void* self, int style) {
    return QsciLexerBash_DefaultColorWithStyle((QsciLexerBash*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self, int style ```
QColor* q_scilexerbash_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerBash_QBaseDefaultColorWithStyle((QsciLexerBash*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, QColor* (*slot)(QsciLexerBash*, int) ```
void q_scilexerbash_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerBash_OnDefaultColorWithStyle((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self, int style ```
QFont* q_scilexerbash_default_font_with_style(void* self, int style) {
    return QsciLexerBash_DefaultFontWithStyle((QsciLexerBash*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self, int style ```
QFont* q_scilexerbash_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerBash_QBaseDefaultFontWithStyle((QsciLexerBash*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, QFont* (*slot)(QsciLexerBash*, int) ```
void q_scilexerbash_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerBash_OnDefaultFontWithStyle((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self, int style ```
QColor* q_scilexerbash_default_paper_with_style(void* self, int style) {
    return QsciLexerBash_DefaultPaperWithStyle((QsciLexerBash*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self, int style ```
QColor* q_scilexerbash_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerBash_QBaseDefaultPaperWithStyle((QsciLexerBash*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, QColor* (*slot)(QsciLexerBash*, int) ```
void q_scilexerbash_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerBash_OnDefaultPaperWithStyle((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self, QsciScintilla* editor ```
void q_scilexerbash_set_editor(void* self, void* editor) {
    QsciLexerBash_SetEditor((QsciLexerBash*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self, QsciScintilla* editor ```
void q_scilexerbash_qbase_set_editor(void* self, void* editor) {
    QsciLexerBash_QBaseSetEditor((QsciLexerBash*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, void (*slot)(QsciLexerBash*, QsciScintilla*) ```
void q_scilexerbash_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerBash_OnSetEditor((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self ```
int32_t q_scilexerbash_style_bits_needed(void* self) {
    return QsciLexerBash_StyleBitsNeeded((QsciLexerBash*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self ```
int32_t q_scilexerbash_qbase_style_bits_needed(void* self) {
    return QsciLexerBash_QBaseStyleBitsNeeded((QsciLexerBash*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, int32_t (*slot)() ```
void q_scilexerbash_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerBash_OnStyleBitsNeeded((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self, int autoindentstyle ```
void q_scilexerbash_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerBash_SetAutoIndentStyle((QsciLexerBash*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self, int autoindentstyle ```
void q_scilexerbash_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerBash_QBaseSetAutoIndentStyle((QsciLexerBash*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, void (*slot)(QsciLexerBash*, int) ```
void q_scilexerbash_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerBash_OnSetAutoIndentStyle((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self, QColor* c, int style ```
void q_scilexerbash_set_color(void* self, void* c, int style) {
    QsciLexerBash_SetColor((QsciLexerBash*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self, QColor* c, int style ```
void q_scilexerbash_qbase_set_color(void* self, void* c, int style) {
    QsciLexerBash_QBaseSetColor((QsciLexerBash*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, void (*slot)(QsciLexerBash*, QColor*, int) ```
void q_scilexerbash_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerBash_OnSetColor((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self, bool eoffill, int style ```
void q_scilexerbash_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerBash_SetEolFill((QsciLexerBash*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self, bool eoffill, int style ```
void q_scilexerbash_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerBash_QBaseSetEolFill((QsciLexerBash*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, void (*slot)(QsciLexerBash*, bool, int) ```
void q_scilexerbash_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerBash_OnSetEolFill((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self, QFont* f, int style ```
void q_scilexerbash_set_font(void* self, void* f, int style) {
    QsciLexerBash_SetFont((QsciLexerBash*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self, QFont* f, int style ```
void q_scilexerbash_qbase_set_font(void* self, void* f, int style) {
    QsciLexerBash_QBaseSetFont((QsciLexerBash*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, void (*slot)(QsciLexerBash*, QFont*, int) ```
void q_scilexerbash_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerBash_OnSetFont((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self, QColor* c, int style ```
void q_scilexerbash_set_paper(void* self, void* c, int style) {
    QsciLexerBash_SetPaper((QsciLexerBash*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self, QColor* c, int style ```
void q_scilexerbash_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerBash_QBaseSetPaper((QsciLexerBash*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, void (*slot)(QsciLexerBash*, QColor*, int) ```
void q_scilexerbash_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerBash_OnSetPaper((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self, QEvent* event ```
bool q_scilexerbash_event(void* self, void* event) {
    return QsciLexerBash_Event((QsciLexerBash*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self, QEvent* event ```
bool q_scilexerbash_qbase_event(void* self, void* event) {
    return QsciLexerBash_QBaseEvent((QsciLexerBash*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, bool (*slot)(QsciLexerBash*, QEvent*) ```
void q_scilexerbash_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerBash_OnEvent((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self, QObject* watched, QEvent* event ```
bool q_scilexerbash_event_filter(void* self, void* watched, void* event) {
    return QsciLexerBash_EventFilter((QsciLexerBash*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self, QObject* watched, QEvent* event ```
bool q_scilexerbash_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerBash_QBaseEventFilter((QsciLexerBash*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, bool (*slot)(QsciLexerBash*, QObject*, QEvent*) ```
void q_scilexerbash_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerBash_OnEventFilter((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self, QTimerEvent* event ```
void q_scilexerbash_timer_event(void* self, void* event) {
    QsciLexerBash_TimerEvent((QsciLexerBash*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self, QTimerEvent* event ```
void q_scilexerbash_qbase_timer_event(void* self, void* event) {
    QsciLexerBash_QBaseTimerEvent((QsciLexerBash*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, void (*slot)(QsciLexerBash*, QTimerEvent*) ```
void q_scilexerbash_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerBash_OnTimerEvent((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self, QChildEvent* event ```
void q_scilexerbash_child_event(void* self, void* event) {
    QsciLexerBash_ChildEvent((QsciLexerBash*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self, QChildEvent* event ```
void q_scilexerbash_qbase_child_event(void* self, void* event) {
    QsciLexerBash_QBaseChildEvent((QsciLexerBash*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, void (*slot)(QsciLexerBash*, QChildEvent*) ```
void q_scilexerbash_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerBash_OnChildEvent((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self, QEvent* event ```
void q_scilexerbash_custom_event(void* self, void* event) {
    QsciLexerBash_CustomEvent((QsciLexerBash*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self, QEvent* event ```
void q_scilexerbash_qbase_custom_event(void* self, void* event) {
    QsciLexerBash_QBaseCustomEvent((QsciLexerBash*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, void (*slot)(QsciLexerBash*, QEvent*) ```
void q_scilexerbash_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerBash_OnCustomEvent((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self, QMetaMethod* signal ```
void q_scilexerbash_connect_notify(void* self, void* signal) {
    QsciLexerBash_ConnectNotify((QsciLexerBash*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self, QMetaMethod* signal ```
void q_scilexerbash_qbase_connect_notify(void* self, void* signal) {
    QsciLexerBash_QBaseConnectNotify((QsciLexerBash*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, void (*slot)(QsciLexerBash*, QMetaMethod*) ```
void q_scilexerbash_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerBash_OnConnectNotify((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self, QMetaMethod* signal ```
void q_scilexerbash_disconnect_notify(void* self, void* signal) {
    QsciLexerBash_DisconnectNotify((QsciLexerBash*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self, QMetaMethod* signal ```
void q_scilexerbash_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerBash_QBaseDisconnectNotify((QsciLexerBash*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, void (*slot)(QsciLexerBash*, QMetaMethod*) ```
void q_scilexerbash_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerBash_OnDisconnectNotify((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self ```
QObject* q_scilexerbash_sender(void* self) {
    return QsciLexerBash_Sender((QsciLexerBash*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self ```
QObject* q_scilexerbash_qbase_sender(void* self) {
    return QsciLexerBash_QBaseSender((QsciLexerBash*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, QObject* (*slot)() ```
void q_scilexerbash_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerBash_OnSender((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self ```
int32_t q_scilexerbash_sender_signal_index(void* self) {
    return QsciLexerBash_SenderSignalIndex((QsciLexerBash*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self ```
int32_t q_scilexerbash_qbase_sender_signal_index(void* self) {
    return QsciLexerBash_QBaseSenderSignalIndex((QsciLexerBash*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, int32_t (*slot)() ```
void q_scilexerbash_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerBash_OnSenderSignalIndex((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self, const char* signal ```
int32_t q_scilexerbash_receivers(void* self, const char* signal) {
    return QsciLexerBash_Receivers((QsciLexerBash*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self, const char* signal ```
int32_t q_scilexerbash_qbase_receivers(void* self, const char* signal) {
    return QsciLexerBash_QBaseReceivers((QsciLexerBash*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, int32_t (*slot)(QsciLexerBash*, const char*) ```
void q_scilexerbash_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerBash_OnReceivers((QsciLexerBash*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerBash* self, QMetaMethod* signal ```
bool q_scilexerbash_is_signal_connected(void* self, void* signal) {
    return QsciLexerBash_IsSignalConnected((QsciLexerBash*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerBash* self, QMetaMethod* signal ```
bool q_scilexerbash_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerBash_QBaseIsSignalConnected((QsciLexerBash*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerBash* self, bool (*slot)(QsciLexerBash*, QMetaMethod*) ```
void q_scilexerbash_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerBash_OnIsSignalConnected((QsciLexerBash*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexerBash* self ```
void q_scilexerbash_delete(void* self) {
    QsciLexerBash_Delete((QsciLexerBash*)(self));
}