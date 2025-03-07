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
#include "libqscilexerpov.hpp"
#include "libqscilexerpov.h"

/// https://doc.qt.io/qt-6/qscilexerpov.html

/// q_scilexerpov_new constructs a new QsciLexerPOV object.
///
///
QsciLexerPOV* q_scilexerpov_new() {
    return QsciLexerPOV_new();
}

/// q_scilexerpov_new2 constructs a new QsciLexerPOV object.
///
/// ``` QObject* parent ```
QsciLexerPOV* q_scilexerpov_new2(void* parent) {
    return QsciLexerPOV_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerPOV* self ```
QMetaObject* q_scilexerpov_meta_object(void* self) {
    return QsciLexerPOV_MetaObject((QsciLexerPOV*)self);
}

/// ``` QsciLexerPOV* self, const char* param1 ```
void* q_scilexerpov_metacast(void* self, const char* param1) {
    return QsciLexerPOV_Metacast((QsciLexerPOV*)self, param1);
}

/// ``` QsciLexerPOV* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerpov_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerPOV_Metacall((QsciLexerPOV*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPOV* self, int32_t (*slot)(QsciLexerPOV*, enum QMetaObject__Call, int, void*) ```
void q_scilexerpov_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerPOV_OnMetacall((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPOV* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerpov_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerPOV_QBaseMetacall((QsciLexerPOV*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexerpov_tr(const char* s) {
    libqt_string _str = QsciLexerPOV_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpov.html#language)
///
/// ``` QsciLexerPOV* self ```
const char* q_scilexerpov_language(void* self) {
    return QsciLexerPOV_Language((QsciLexerPOV*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpov.html#lexer)
///
/// ``` QsciLexerPOV* self ```
const char* q_scilexerpov_lexer(void* self) {
    return QsciLexerPOV_Lexer((QsciLexerPOV*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpov.html#braceStyle)
///
/// ``` QsciLexerPOV* self ```
int32_t q_scilexerpov_brace_style(void* self) {
    return QsciLexerPOV_BraceStyle((QsciLexerPOV*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpov.html#wordCharacters)
///
/// ``` QsciLexerPOV* self ```
const char* q_scilexerpov_word_characters(void* self) {
    return QsciLexerPOV_WordCharacters((QsciLexerPOV*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpov.html#defaultColor)
///
/// ``` QsciLexerPOV* self, int style ```
QColor* q_scilexerpov_default_color(void* self, int style) {
    return QsciLexerPOV_DefaultColor((QsciLexerPOV*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpov.html#defaultEolFill)
///
/// ``` QsciLexerPOV* self, int style ```
bool q_scilexerpov_default_eol_fill(void* self, int style) {
    return QsciLexerPOV_DefaultEolFill((QsciLexerPOV*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpov.html#defaultFont)
///
/// ``` QsciLexerPOV* self, int style ```
QFont* q_scilexerpov_default_font(void* self, int style) {
    return QsciLexerPOV_DefaultFont((QsciLexerPOV*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpov.html#defaultPaper)
///
/// ``` QsciLexerPOV* self, int style ```
QColor* q_scilexerpov_default_paper(void* self, int style) {
    return QsciLexerPOV_DefaultPaper((QsciLexerPOV*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpov.html#keywords)
///
/// ``` QsciLexerPOV* self, int set ```
const char* q_scilexerpov_keywords(void* self, int set) {
    return QsciLexerPOV_Keywords((QsciLexerPOV*)self, set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpov.html#description)
///
/// ``` QsciLexerPOV* self, int style ```
const char* q_scilexerpov_description(void* self, int style) {
    libqt_string _str = QsciLexerPOV_Description((QsciLexerPOV*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpov.html#refreshProperties)
///
/// ``` QsciLexerPOV* self ```
void q_scilexerpov_refresh_properties(void* self) {
    QsciLexerPOV_RefreshProperties((QsciLexerPOV*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpov.html#foldComments)
///
/// ``` QsciLexerPOV* self ```
bool q_scilexerpov_fold_comments(void* self) {
    return QsciLexerPOV_FoldComments((QsciLexerPOV*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpov.html#foldCompact)
///
/// ``` QsciLexerPOV* self ```
bool q_scilexerpov_fold_compact(void* self) {
    return QsciLexerPOV_FoldCompact((QsciLexerPOV*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpov.html#foldDirectives)
///
/// ``` QsciLexerPOV* self ```
bool q_scilexerpov_fold_directives(void* self) {
    return QsciLexerPOV_FoldDirectives((QsciLexerPOV*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpov.html#setFoldComments)
///
/// ``` QsciLexerPOV* self, bool fold ```
void q_scilexerpov_set_fold_comments(void* self, bool fold) {
    QsciLexerPOV_SetFoldComments((QsciLexerPOV*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPOV* self, void (*slot)(QsciLexerPOV*, bool) ```
void q_scilexerpov_on_set_fold_comments(void* self, void (*slot)(void*, bool)) {
    QsciLexerPOV_OnSetFoldComments((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPOV* self, bool fold ```
void q_scilexerpov_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerPOV_QBaseSetFoldComments((QsciLexerPOV*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpov.html#setFoldCompact)
///
/// ``` QsciLexerPOV* self, bool fold ```
void q_scilexerpov_set_fold_compact(void* self, bool fold) {
    QsciLexerPOV_SetFoldCompact((QsciLexerPOV*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPOV* self, void (*slot)(QsciLexerPOV*, bool) ```
void q_scilexerpov_on_set_fold_compact(void* self, void (*slot)(void*, bool)) {
    QsciLexerPOV_OnSetFoldCompact((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPOV* self, bool fold ```
void q_scilexerpov_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerPOV_QBaseSetFoldCompact((QsciLexerPOV*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpov.html#setFoldDirectives)
///
/// ``` QsciLexerPOV* self, bool fold ```
void q_scilexerpov_set_fold_directives(void* self, bool fold) {
    QsciLexerPOV_SetFoldDirectives((QsciLexerPOV*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPOV* self, void (*slot)(QsciLexerPOV*, bool) ```
void q_scilexerpov_on_set_fold_directives(void* self, void (*slot)(void*, bool)) {
    QsciLexerPOV_OnSetFoldDirectives((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPOV* self, bool fold ```
void q_scilexerpov_qbase_set_fold_directives(void* self, bool fold) {
    QsciLexerPOV_QBaseSetFoldDirectives((QsciLexerPOV*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpov.html#readProperties)
///
/// ``` QsciLexerPOV* self, QSettings* qs, const char* prefix ```
bool q_scilexerpov_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPOV_ReadProperties((QsciLexerPOV*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPOV* self, bool (*slot)(QsciLexerPOV*, QSettings*, const char*) ```
void q_scilexerpov_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerPOV_OnReadProperties((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPOV* self, QSettings* qs, const char* prefix ```
bool q_scilexerpov_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPOV_QBaseReadProperties((QsciLexerPOV*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpov.html#writeProperties)
///
/// ``` QsciLexerPOV* self, QSettings* qs, const char* prefix ```
bool q_scilexerpov_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPOV_WriteProperties((QsciLexerPOV*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPOV* self, bool (*slot)(QsciLexerPOV*, QSettings*, const char*) ```
void q_scilexerpov_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerPOV_OnWriteProperties((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPOV* self, QSettings* qs, const char* prefix ```
bool q_scilexerpov_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPOV_QBaseWriteProperties((QsciLexerPOV*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexerpov_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerPOV_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexerpov_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerPOV_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerPOV* self ```
QsciAbstractAPIs* q_scilexerpov_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerPOV* self ```
int32_t q_scilexerpov_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerPOV* self ```
QsciScintilla* q_scilexerpov_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerPOV* self, QsciAbstractAPIs* apis ```
void q_scilexerpov_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerPOV* self, QColor* c ```
void q_scilexerpov_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerPOV* self, QFont* f ```
void q_scilexerpov_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerPOV* self, QColor* c ```
void q_scilexerpov_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerPOV* self, QSettings* qs ```
bool q_scilexerpov_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerPOV* self, QSettings* qs ```
bool q_scilexerpov_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerPOV* self, QColor* c, int style ```
void q_scilexerpov_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerPOV* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerpov_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerPOV* self, bool eolfilled, int style ```
void q_scilexerpov_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerPOV* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexerpov_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerPOV* self, QFont* f, int style ```
void q_scilexerpov_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerPOV* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexerpov_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerPOV* self, QColor* c, int style ```
void q_scilexerpov_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerPOV* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerpov_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerPOV* self, const char* prop, const char* val ```
void q_scilexerpov_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerPOV* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexerpov_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerPOV* self, QSettings* qs, const char* prefix ```
bool q_scilexerpov_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerPOV* self, QSettings* qs, const char* prefix ```
bool q_scilexerpov_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerPOV* self ```
const char* q_scilexerpov_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerPOV* self, const char* name ```
void q_scilexerpov_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerPOV* self ```
bool q_scilexerpov_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerPOV* self ```
bool q_scilexerpov_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerPOV* self ```
bool q_scilexerpov_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerPOV* self ```
bool q_scilexerpov_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerPOV* self, bool b ```
bool q_scilexerpov_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerPOV* self ```
QThread* q_scilexerpov_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerPOV* self, QThread* thread ```
void q_scilexerpov_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerPOV* self, int interval ```
int32_t q_scilexerpov_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerPOV* self, int id ```
void q_scilexerpov_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerPOV* self ```
libqt_list /* of QObject* */ q_scilexerpov_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerPOV* self, QObject* parent ```
void q_scilexerpov_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerPOV* self, QObject* filterObj ```
void q_scilexerpov_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerPOV* self, QObject* obj ```
void q_scilexerpov_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexerpov_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerPOV* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexerpov_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexerpov_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexerpov_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerPOV* self ```
void q_scilexerpov_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerPOV* self ```
void q_scilexerpov_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerPOV* self, const char* name, QVariant* value ```
bool q_scilexerpov_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerPOV* self, const char* name ```
QVariant* q_scilexerpov_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerPOV* self ```
const char** q_scilexerpov_dynamic_property_names(void* self) {
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
/// ``` QsciLexerPOV* self ```
QBindingStorage* q_scilexerpov_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerPOV* self ```
QBindingStorage* q_scilexerpov_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerPOV* self ```
void q_scilexerpov_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexerPOV* self, void (*slot)(QObject*) ```
void q_scilexerpov_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerPOV* self ```
QObject* q_scilexerpov_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerPOV* self, const char* classname ```
bool q_scilexerpov_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerPOV* self ```
void q_scilexerpov_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerPOV* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexerpov_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerpov_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerPOV* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerpov_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerPOV* self, QObject* param1 ```
void q_scilexerpov_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexerPOV* self, void (*slot)(QObject*, QObject*) ```
void q_scilexerpov_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self ```
int32_t q_scilexerpov_lexer_id(void* self) {
    return QsciLexerPOV_LexerId((QsciLexerPOV*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self ```
int32_t q_scilexerpov_qbase_lexer_id(void* self) {
    return QsciLexerPOV_QBaseLexerId((QsciLexerPOV*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, int32_t (*slot)() ```
void q_scilexerpov_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerPOV_OnLexerId((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self ```
const char* q_scilexerpov_auto_completion_fillups(void* self) {
    return QsciLexerPOV_AutoCompletionFillups((QsciLexerPOV*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self ```
const char* q_scilexerpov_qbase_auto_completion_fillups(void* self) {
    return QsciLexerPOV_QBaseAutoCompletionFillups((QsciLexerPOV*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, const char* (*slot)() ```
void q_scilexerpov_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerPOV_OnAutoCompletionFillups((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self ```
const char** q_scilexerpov_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerPOV_AutoCompletionWordSeparators((QsciLexerPOV*)self);
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
/// ``` QsciLexerPOV* self ```
const char** q_scilexerpov_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerPOV_QBaseAutoCompletionWordSeparators((QsciLexerPOV*)self);
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
/// ``` QsciLexerPOV* self, const char** (*slot)() ```
void q_scilexerpov_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerPOV_OnAutoCompletionWordSeparators((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self, int* style ```
const char* q_scilexerpov_block_end(void* self, int* style) {
    return QsciLexerPOV_BlockEnd((QsciLexerPOV*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self, int* style ```
const char* q_scilexerpov_qbase_block_end(void* self, int* style) {
    return QsciLexerPOV_QBaseBlockEnd((QsciLexerPOV*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, const char* (*slot)(QsciLexerPOV*, int*) ```
void q_scilexerpov_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerPOV_OnBlockEnd((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self ```
int32_t q_scilexerpov_block_lookback(void* self) {
    return QsciLexerPOV_BlockLookback((QsciLexerPOV*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self ```
int32_t q_scilexerpov_qbase_block_lookback(void* self) {
    return QsciLexerPOV_QBaseBlockLookback((QsciLexerPOV*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, int32_t (*slot)() ```
void q_scilexerpov_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerPOV_OnBlockLookback((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self, int* style ```
const char* q_scilexerpov_block_start(void* self, int* style) {
    return QsciLexerPOV_BlockStart((QsciLexerPOV*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self, int* style ```
const char* q_scilexerpov_qbase_block_start(void* self, int* style) {
    return QsciLexerPOV_QBaseBlockStart((QsciLexerPOV*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, const char* (*slot)(QsciLexerPOV*, int*) ```
void q_scilexerpov_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerPOV_OnBlockStart((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self, int* style ```
const char* q_scilexerpov_block_start_keyword(void* self, int* style) {
    return QsciLexerPOV_BlockStartKeyword((QsciLexerPOV*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self, int* style ```
const char* q_scilexerpov_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerPOV_QBaseBlockStartKeyword((QsciLexerPOV*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, const char* (*slot)(QsciLexerPOV*, int*) ```
void q_scilexerpov_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerPOV_OnBlockStartKeyword((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self ```
bool q_scilexerpov_case_sensitive(void* self) {
    return QsciLexerPOV_CaseSensitive((QsciLexerPOV*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self ```
bool q_scilexerpov_qbase_case_sensitive(void* self) {
    return QsciLexerPOV_QBaseCaseSensitive((QsciLexerPOV*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, bool (*slot)() ```
void q_scilexerpov_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerPOV_OnCaseSensitive((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self, int style ```
QColor* q_scilexerpov_color(void* self, int style) {
    return QsciLexerPOV_Color((QsciLexerPOV*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self, int style ```
QColor* q_scilexerpov_qbase_color(void* self, int style) {
    return QsciLexerPOV_QBaseColor((QsciLexerPOV*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, QColor* (*slot)(QsciLexerPOV*, int) ```
void q_scilexerpov_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerPOV_OnColor((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self, int style ```
bool q_scilexerpov_eol_fill(void* self, int style) {
    return QsciLexerPOV_EolFill((QsciLexerPOV*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self, int style ```
bool q_scilexerpov_qbase_eol_fill(void* self, int style) {
    return QsciLexerPOV_QBaseEolFill((QsciLexerPOV*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, bool (*slot)(QsciLexerPOV*, int) ```
void q_scilexerpov_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerPOV_OnEolFill((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self, int style ```
QFont* q_scilexerpov_font(void* self, int style) {
    return QsciLexerPOV_Font((QsciLexerPOV*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self, int style ```
QFont* q_scilexerpov_qbase_font(void* self, int style) {
    return QsciLexerPOV_QBaseFont((QsciLexerPOV*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, QFont* (*slot)(QsciLexerPOV*, int) ```
void q_scilexerpov_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerPOV_OnFont((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self ```
int32_t q_scilexerpov_indentation_guide_view(void* self) {
    return QsciLexerPOV_IndentationGuideView((QsciLexerPOV*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self ```
int32_t q_scilexerpov_qbase_indentation_guide_view(void* self) {
    return QsciLexerPOV_QBaseIndentationGuideView((QsciLexerPOV*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, int32_t (*slot)() ```
void q_scilexerpov_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerPOV_OnIndentationGuideView((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self ```
int32_t q_scilexerpov_default_style(void* self) {
    return QsciLexerPOV_DefaultStyle((QsciLexerPOV*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self ```
int32_t q_scilexerpov_qbase_default_style(void* self) {
    return QsciLexerPOV_QBaseDefaultStyle((QsciLexerPOV*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, int32_t (*slot)() ```
void q_scilexerpov_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerPOV_OnDefaultStyle((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self, int style ```
QColor* q_scilexerpov_paper(void* self, int style) {
    return QsciLexerPOV_Paper((QsciLexerPOV*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self, int style ```
QColor* q_scilexerpov_qbase_paper(void* self, int style) {
    return QsciLexerPOV_QBasePaper((QsciLexerPOV*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, QColor* (*slot)(QsciLexerPOV*, int) ```
void q_scilexerpov_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerPOV_OnPaper((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self, int style ```
QColor* q_scilexerpov_default_color_with_style(void* self, int style) {
    return QsciLexerPOV_DefaultColorWithStyle((QsciLexerPOV*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self, int style ```
QColor* q_scilexerpov_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerPOV_QBaseDefaultColorWithStyle((QsciLexerPOV*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, QColor* (*slot)(QsciLexerPOV*, int) ```
void q_scilexerpov_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerPOV_OnDefaultColorWithStyle((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self, int style ```
QFont* q_scilexerpov_default_font_with_style(void* self, int style) {
    return QsciLexerPOV_DefaultFontWithStyle((QsciLexerPOV*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self, int style ```
QFont* q_scilexerpov_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerPOV_QBaseDefaultFontWithStyle((QsciLexerPOV*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, QFont* (*slot)(QsciLexerPOV*, int) ```
void q_scilexerpov_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerPOV_OnDefaultFontWithStyle((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self, int style ```
QColor* q_scilexerpov_default_paper_with_style(void* self, int style) {
    return QsciLexerPOV_DefaultPaperWithStyle((QsciLexerPOV*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self, int style ```
QColor* q_scilexerpov_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerPOV_QBaseDefaultPaperWithStyle((QsciLexerPOV*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, QColor* (*slot)(QsciLexerPOV*, int) ```
void q_scilexerpov_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerPOV_OnDefaultPaperWithStyle((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self, QsciScintilla* editor ```
void q_scilexerpov_set_editor(void* self, void* editor) {
    QsciLexerPOV_SetEditor((QsciLexerPOV*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self, QsciScintilla* editor ```
void q_scilexerpov_qbase_set_editor(void* self, void* editor) {
    QsciLexerPOV_QBaseSetEditor((QsciLexerPOV*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, void (*slot)(QsciLexerPOV*, QsciScintilla*) ```
void q_scilexerpov_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerPOV_OnSetEditor((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self ```
int32_t q_scilexerpov_style_bits_needed(void* self) {
    return QsciLexerPOV_StyleBitsNeeded((QsciLexerPOV*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self ```
int32_t q_scilexerpov_qbase_style_bits_needed(void* self) {
    return QsciLexerPOV_QBaseStyleBitsNeeded((QsciLexerPOV*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, int32_t (*slot)() ```
void q_scilexerpov_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerPOV_OnStyleBitsNeeded((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self, int autoindentstyle ```
void q_scilexerpov_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerPOV_SetAutoIndentStyle((QsciLexerPOV*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self, int autoindentstyle ```
void q_scilexerpov_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerPOV_QBaseSetAutoIndentStyle((QsciLexerPOV*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, void (*slot)(QsciLexerPOV*, int) ```
void q_scilexerpov_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerPOV_OnSetAutoIndentStyle((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self, QColor* c, int style ```
void q_scilexerpov_set_color(void* self, void* c, int style) {
    QsciLexerPOV_SetColor((QsciLexerPOV*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self, QColor* c, int style ```
void q_scilexerpov_qbase_set_color(void* self, void* c, int style) {
    QsciLexerPOV_QBaseSetColor((QsciLexerPOV*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, void (*slot)(QsciLexerPOV*, QColor*, int) ```
void q_scilexerpov_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerPOV_OnSetColor((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self, bool eoffill, int style ```
void q_scilexerpov_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerPOV_SetEolFill((QsciLexerPOV*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self, bool eoffill, int style ```
void q_scilexerpov_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerPOV_QBaseSetEolFill((QsciLexerPOV*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, void (*slot)(QsciLexerPOV*, bool, int) ```
void q_scilexerpov_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerPOV_OnSetEolFill((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self, QFont* f, int style ```
void q_scilexerpov_set_font(void* self, void* f, int style) {
    QsciLexerPOV_SetFont((QsciLexerPOV*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self, QFont* f, int style ```
void q_scilexerpov_qbase_set_font(void* self, void* f, int style) {
    QsciLexerPOV_QBaseSetFont((QsciLexerPOV*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, void (*slot)(QsciLexerPOV*, QFont*, int) ```
void q_scilexerpov_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerPOV_OnSetFont((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self, QColor* c, int style ```
void q_scilexerpov_set_paper(void* self, void* c, int style) {
    QsciLexerPOV_SetPaper((QsciLexerPOV*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self, QColor* c, int style ```
void q_scilexerpov_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerPOV_QBaseSetPaper((QsciLexerPOV*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, void (*slot)(QsciLexerPOV*, QColor*, int) ```
void q_scilexerpov_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerPOV_OnSetPaper((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self, QEvent* event ```
bool q_scilexerpov_event(void* self, void* event) {
    return QsciLexerPOV_Event((QsciLexerPOV*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self, QEvent* event ```
bool q_scilexerpov_qbase_event(void* self, void* event) {
    return QsciLexerPOV_QBaseEvent((QsciLexerPOV*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, bool (*slot)(QsciLexerPOV*, QEvent*) ```
void q_scilexerpov_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerPOV_OnEvent((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self, QObject* watched, QEvent* event ```
bool q_scilexerpov_event_filter(void* self, void* watched, void* event) {
    return QsciLexerPOV_EventFilter((QsciLexerPOV*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self, QObject* watched, QEvent* event ```
bool q_scilexerpov_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerPOV_QBaseEventFilter((QsciLexerPOV*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, bool (*slot)(QsciLexerPOV*, QObject*, QEvent*) ```
void q_scilexerpov_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerPOV_OnEventFilter((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self, QTimerEvent* event ```
void q_scilexerpov_timer_event(void* self, void* event) {
    QsciLexerPOV_TimerEvent((QsciLexerPOV*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self, QTimerEvent* event ```
void q_scilexerpov_qbase_timer_event(void* self, void* event) {
    QsciLexerPOV_QBaseTimerEvent((QsciLexerPOV*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, void (*slot)(QsciLexerPOV*, QTimerEvent*) ```
void q_scilexerpov_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerPOV_OnTimerEvent((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self, QChildEvent* event ```
void q_scilexerpov_child_event(void* self, void* event) {
    QsciLexerPOV_ChildEvent((QsciLexerPOV*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self, QChildEvent* event ```
void q_scilexerpov_qbase_child_event(void* self, void* event) {
    QsciLexerPOV_QBaseChildEvent((QsciLexerPOV*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, void (*slot)(QsciLexerPOV*, QChildEvent*) ```
void q_scilexerpov_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerPOV_OnChildEvent((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self, QEvent* event ```
void q_scilexerpov_custom_event(void* self, void* event) {
    QsciLexerPOV_CustomEvent((QsciLexerPOV*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self, QEvent* event ```
void q_scilexerpov_qbase_custom_event(void* self, void* event) {
    QsciLexerPOV_QBaseCustomEvent((QsciLexerPOV*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, void (*slot)(QsciLexerPOV*, QEvent*) ```
void q_scilexerpov_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerPOV_OnCustomEvent((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self, QMetaMethod* signal ```
void q_scilexerpov_connect_notify(void* self, void* signal) {
    QsciLexerPOV_ConnectNotify((QsciLexerPOV*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self, QMetaMethod* signal ```
void q_scilexerpov_qbase_connect_notify(void* self, void* signal) {
    QsciLexerPOV_QBaseConnectNotify((QsciLexerPOV*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, void (*slot)(QsciLexerPOV*, QMetaMethod*) ```
void q_scilexerpov_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerPOV_OnConnectNotify((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self, QMetaMethod* signal ```
void q_scilexerpov_disconnect_notify(void* self, void* signal) {
    QsciLexerPOV_DisconnectNotify((QsciLexerPOV*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self, QMetaMethod* signal ```
void q_scilexerpov_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerPOV_QBaseDisconnectNotify((QsciLexerPOV*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, void (*slot)(QsciLexerPOV*, QMetaMethod*) ```
void q_scilexerpov_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerPOV_OnDisconnectNotify((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self ```
QObject* q_scilexerpov_sender(void* self) {
    return QsciLexerPOV_Sender((QsciLexerPOV*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self ```
QObject* q_scilexerpov_qbase_sender(void* self) {
    return QsciLexerPOV_QBaseSender((QsciLexerPOV*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, QObject* (*slot)() ```
void q_scilexerpov_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerPOV_OnSender((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self ```
int32_t q_scilexerpov_sender_signal_index(void* self) {
    return QsciLexerPOV_SenderSignalIndex((QsciLexerPOV*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self ```
int32_t q_scilexerpov_qbase_sender_signal_index(void* self) {
    return QsciLexerPOV_QBaseSenderSignalIndex((QsciLexerPOV*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, int32_t (*slot)() ```
void q_scilexerpov_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerPOV_OnSenderSignalIndex((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self, const char* signal ```
int32_t q_scilexerpov_receivers(void* self, const char* signal) {
    return QsciLexerPOV_Receivers((QsciLexerPOV*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self, const char* signal ```
int32_t q_scilexerpov_qbase_receivers(void* self, const char* signal) {
    return QsciLexerPOV_QBaseReceivers((QsciLexerPOV*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, int32_t (*slot)(QsciLexerPOV*, const char*) ```
void q_scilexerpov_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerPOV_OnReceivers((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPOV* self, QMetaMethod* signal ```
bool q_scilexerpov_is_signal_connected(void* self, void* signal) {
    return QsciLexerPOV_IsSignalConnected((QsciLexerPOV*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPOV* self, QMetaMethod* signal ```
bool q_scilexerpov_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerPOV_QBaseIsSignalConnected((QsciLexerPOV*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPOV* self, bool (*slot)(QsciLexerPOV*, QMetaMethod*) ```
void q_scilexerpov_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerPOV_OnIsSignalConnected((QsciLexerPOV*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexerPOV* self ```
void q_scilexerpov_delete(void* self) {
    QsciLexerPOV_Delete((QsciLexerPOV*)(self));
}