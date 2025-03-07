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
#include "libqscilexersql.hpp"
#include "libqscilexersql.h"

/// https://doc.qt.io/qt-6/qscilexersql.html

/// q_scilexersql_new constructs a new QsciLexerSQL object.
///
///
QsciLexerSQL* q_scilexersql_new() {
    return QsciLexerSQL_new();
}

/// q_scilexersql_new2 constructs a new QsciLexerSQL object.
///
/// ``` QObject* parent ```
QsciLexerSQL* q_scilexersql_new2(void* parent) {
    return QsciLexerSQL_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerSQL* self ```
QMetaObject* q_scilexersql_meta_object(void* self) {
    return QsciLexerSQL_MetaObject((QsciLexerSQL*)self);
}

/// ``` QsciLexerSQL* self, const char* param1 ```
void* q_scilexersql_metacast(void* self, const char* param1) {
    return QsciLexerSQL_Metacast((QsciLexerSQL*)self, param1);
}

/// ``` QsciLexerSQL* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexersql_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerSQL_Metacall((QsciLexerSQL*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerSQL* self, int32_t (*slot)(QsciLexerSQL*, enum QMetaObject__Call, int, void*) ```
void q_scilexersql_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerSQL_OnMetacall((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerSQL* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexersql_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerSQL_QBaseMetacall((QsciLexerSQL*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexersql_tr(const char* s) {
    libqt_string _str = QsciLexerSQL_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexersql.html#language)
///
/// ``` QsciLexerSQL* self ```
const char* q_scilexersql_language(void* self) {
    return QsciLexerSQL_Language((QsciLexerSQL*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexersql.html#lexer)
///
/// ``` QsciLexerSQL* self ```
const char* q_scilexersql_lexer(void* self) {
    return QsciLexerSQL_Lexer((QsciLexerSQL*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexersql.html#braceStyle)
///
/// ``` QsciLexerSQL* self ```
int32_t q_scilexersql_brace_style(void* self) {
    return QsciLexerSQL_BraceStyle((QsciLexerSQL*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexersql.html#defaultColor)
///
/// ``` QsciLexerSQL* self, int style ```
QColor* q_scilexersql_default_color(void* self, int style) {
    return QsciLexerSQL_DefaultColor((QsciLexerSQL*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexersql.html#defaultEolFill)
///
/// ``` QsciLexerSQL* self, int style ```
bool q_scilexersql_default_eol_fill(void* self, int style) {
    return QsciLexerSQL_DefaultEolFill((QsciLexerSQL*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexersql.html#defaultFont)
///
/// ``` QsciLexerSQL* self, int style ```
QFont* q_scilexersql_default_font(void* self, int style) {
    return QsciLexerSQL_DefaultFont((QsciLexerSQL*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexersql.html#defaultPaper)
///
/// ``` QsciLexerSQL* self, int style ```
QColor* q_scilexersql_default_paper(void* self, int style) {
    return QsciLexerSQL_DefaultPaper((QsciLexerSQL*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexersql.html#keywords)
///
/// ``` QsciLexerSQL* self, int set ```
const char* q_scilexersql_keywords(void* self, int set) {
    return QsciLexerSQL_Keywords((QsciLexerSQL*)self, set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexersql.html#description)
///
/// ``` QsciLexerSQL* self, int style ```
const char* q_scilexersql_description(void* self, int style) {
    libqt_string _str = QsciLexerSQL_Description((QsciLexerSQL*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexersql.html#refreshProperties)
///
/// ``` QsciLexerSQL* self ```
void q_scilexersql_refresh_properties(void* self) {
    QsciLexerSQL_RefreshProperties((QsciLexerSQL*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexersql.html#backslashEscapes)
///
/// ``` QsciLexerSQL* self ```
bool q_scilexersql_backslash_escapes(void* self) {
    return QsciLexerSQL_BackslashEscapes((QsciLexerSQL*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexersql.html#setDottedWords)
///
/// ``` QsciLexerSQL* self, bool enable ```
void q_scilexersql_set_dotted_words(void* self, bool enable) {
    QsciLexerSQL_SetDottedWords((QsciLexerSQL*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexersql.html#dottedWords)
///
/// ``` QsciLexerSQL* self ```
bool q_scilexersql_dotted_words(void* self) {
    return QsciLexerSQL_DottedWords((QsciLexerSQL*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexersql.html#setFoldAtElse)
///
/// ``` QsciLexerSQL* self, bool fold ```
void q_scilexersql_set_fold_at_else(void* self, bool fold) {
    QsciLexerSQL_SetFoldAtElse((QsciLexerSQL*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexersql.html#foldAtElse)
///
/// ``` QsciLexerSQL* self ```
bool q_scilexersql_fold_at_else(void* self) {
    return QsciLexerSQL_FoldAtElse((QsciLexerSQL*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexersql.html#foldComments)
///
/// ``` QsciLexerSQL* self ```
bool q_scilexersql_fold_comments(void* self) {
    return QsciLexerSQL_FoldComments((QsciLexerSQL*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexersql.html#foldCompact)
///
/// ``` QsciLexerSQL* self ```
bool q_scilexersql_fold_compact(void* self) {
    return QsciLexerSQL_FoldCompact((QsciLexerSQL*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexersql.html#setFoldOnlyBegin)
///
/// ``` QsciLexerSQL* self, bool fold ```
void q_scilexersql_set_fold_only_begin(void* self, bool fold) {
    QsciLexerSQL_SetFoldOnlyBegin((QsciLexerSQL*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexersql.html#foldOnlyBegin)
///
/// ``` QsciLexerSQL* self ```
bool q_scilexersql_fold_only_begin(void* self) {
    return QsciLexerSQL_FoldOnlyBegin((QsciLexerSQL*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexersql.html#setHashComments)
///
/// ``` QsciLexerSQL* self, bool enable ```
void q_scilexersql_set_hash_comments(void* self, bool enable) {
    QsciLexerSQL_SetHashComments((QsciLexerSQL*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexersql.html#hashComments)
///
/// ``` QsciLexerSQL* self ```
bool q_scilexersql_hash_comments(void* self) {
    return QsciLexerSQL_HashComments((QsciLexerSQL*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexersql.html#setQuotedIdentifiers)
///
/// ``` QsciLexerSQL* self, bool enable ```
void q_scilexersql_set_quoted_identifiers(void* self, bool enable) {
    QsciLexerSQL_SetQuotedIdentifiers((QsciLexerSQL*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexersql.html#quotedIdentifiers)
///
/// ``` QsciLexerSQL* self ```
bool q_scilexersql_quoted_identifiers(void* self) {
    return QsciLexerSQL_QuotedIdentifiers((QsciLexerSQL*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexersql.html#setBackslashEscapes)
///
/// ``` QsciLexerSQL* self, bool enable ```
void q_scilexersql_set_backslash_escapes(void* self, bool enable) {
    QsciLexerSQL_SetBackslashEscapes((QsciLexerSQL*)self, enable);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerSQL* self, void (*slot)(QsciLexerSQL*, bool) ```
void q_scilexersql_on_set_backslash_escapes(void* self, void (*slot)(void*, bool)) {
    QsciLexerSQL_OnSetBackslashEscapes((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerSQL* self, bool enable ```
void q_scilexersql_qbase_set_backslash_escapes(void* self, bool enable) {
    QsciLexerSQL_QBaseSetBackslashEscapes((QsciLexerSQL*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexersql.html#setFoldComments)
///
/// ``` QsciLexerSQL* self, bool fold ```
void q_scilexersql_set_fold_comments(void* self, bool fold) {
    QsciLexerSQL_SetFoldComments((QsciLexerSQL*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerSQL* self, void (*slot)(QsciLexerSQL*, bool) ```
void q_scilexersql_on_set_fold_comments(void* self, void (*slot)(void*, bool)) {
    QsciLexerSQL_OnSetFoldComments((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerSQL* self, bool fold ```
void q_scilexersql_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerSQL_QBaseSetFoldComments((QsciLexerSQL*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexersql.html#setFoldCompact)
///
/// ``` QsciLexerSQL* self, bool fold ```
void q_scilexersql_set_fold_compact(void* self, bool fold) {
    QsciLexerSQL_SetFoldCompact((QsciLexerSQL*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerSQL* self, void (*slot)(QsciLexerSQL*, bool) ```
void q_scilexersql_on_set_fold_compact(void* self, void (*slot)(void*, bool)) {
    QsciLexerSQL_OnSetFoldCompact((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerSQL* self, bool fold ```
void q_scilexersql_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerSQL_QBaseSetFoldCompact((QsciLexerSQL*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexersql.html#readProperties)
///
/// ``` QsciLexerSQL* self, QSettings* qs, const char* prefix ```
bool q_scilexersql_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerSQL_ReadProperties((QsciLexerSQL*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerSQL* self, bool (*slot)(QsciLexerSQL*, QSettings*, const char*) ```
void q_scilexersql_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerSQL_OnReadProperties((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerSQL* self, QSettings* qs, const char* prefix ```
bool q_scilexersql_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerSQL_QBaseReadProperties((QsciLexerSQL*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexersql.html#writeProperties)
///
/// ``` QsciLexerSQL* self, QSettings* qs, const char* prefix ```
bool q_scilexersql_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerSQL_WriteProperties((QsciLexerSQL*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerSQL* self, bool (*slot)(QsciLexerSQL*, QSettings*, const char*) ```
void q_scilexersql_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerSQL_OnWriteProperties((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerSQL* self, QSettings* qs, const char* prefix ```
bool q_scilexersql_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerSQL_QBaseWriteProperties((QsciLexerSQL*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexersql_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerSQL_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexersql_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerSQL_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerSQL* self ```
QsciAbstractAPIs* q_scilexersql_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerSQL* self ```
int32_t q_scilexersql_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerSQL* self ```
QsciScintilla* q_scilexersql_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerSQL* self, QsciAbstractAPIs* apis ```
void q_scilexersql_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerSQL* self, QColor* c ```
void q_scilexersql_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerSQL* self, QFont* f ```
void q_scilexersql_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerSQL* self, QColor* c ```
void q_scilexersql_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerSQL* self, QSettings* qs ```
bool q_scilexersql_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerSQL* self, QSettings* qs ```
bool q_scilexersql_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerSQL* self, QColor* c, int style ```
void q_scilexersql_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerSQL* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexersql_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerSQL* self, bool eolfilled, int style ```
void q_scilexersql_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerSQL* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexersql_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerSQL* self, QFont* f, int style ```
void q_scilexersql_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerSQL* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexersql_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerSQL* self, QColor* c, int style ```
void q_scilexersql_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerSQL* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexersql_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerSQL* self, const char* prop, const char* val ```
void q_scilexersql_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerSQL* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexersql_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerSQL* self, QSettings* qs, const char* prefix ```
bool q_scilexersql_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerSQL* self, QSettings* qs, const char* prefix ```
bool q_scilexersql_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerSQL* self ```
const char* q_scilexersql_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerSQL* self, const char* name ```
void q_scilexersql_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerSQL* self ```
bool q_scilexersql_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerSQL* self ```
bool q_scilexersql_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerSQL* self ```
bool q_scilexersql_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerSQL* self ```
bool q_scilexersql_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerSQL* self, bool b ```
bool q_scilexersql_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerSQL* self ```
QThread* q_scilexersql_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerSQL* self, QThread* thread ```
void q_scilexersql_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerSQL* self, int interval ```
int32_t q_scilexersql_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerSQL* self, int id ```
void q_scilexersql_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerSQL* self ```
libqt_list /* of QObject* */ q_scilexersql_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerSQL* self, QObject* parent ```
void q_scilexersql_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerSQL* self, QObject* filterObj ```
void q_scilexersql_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerSQL* self, QObject* obj ```
void q_scilexersql_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexersql_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerSQL* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexersql_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexersql_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexersql_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerSQL* self ```
void q_scilexersql_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerSQL* self ```
void q_scilexersql_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerSQL* self, const char* name, QVariant* value ```
bool q_scilexersql_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerSQL* self, const char* name ```
QVariant* q_scilexersql_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerSQL* self ```
const char** q_scilexersql_dynamic_property_names(void* self) {
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
/// ``` QsciLexerSQL* self ```
QBindingStorage* q_scilexersql_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerSQL* self ```
QBindingStorage* q_scilexersql_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerSQL* self ```
void q_scilexersql_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexerSQL* self, void (*slot)(QObject*) ```
void q_scilexersql_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerSQL* self ```
QObject* q_scilexersql_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerSQL* self, const char* classname ```
bool q_scilexersql_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerSQL* self ```
void q_scilexersql_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerSQL* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexersql_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexersql_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerSQL* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexersql_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerSQL* self, QObject* param1 ```
void q_scilexersql_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexerSQL* self, void (*slot)(QObject*, QObject*) ```
void q_scilexersql_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self ```
int32_t q_scilexersql_lexer_id(void* self) {
    return QsciLexerSQL_LexerId((QsciLexerSQL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self ```
int32_t q_scilexersql_qbase_lexer_id(void* self) {
    return QsciLexerSQL_QBaseLexerId((QsciLexerSQL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, int32_t (*slot)() ```
void q_scilexersql_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerSQL_OnLexerId((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self ```
const char* q_scilexersql_auto_completion_fillups(void* self) {
    return QsciLexerSQL_AutoCompletionFillups((QsciLexerSQL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self ```
const char* q_scilexersql_qbase_auto_completion_fillups(void* self) {
    return QsciLexerSQL_QBaseAutoCompletionFillups((QsciLexerSQL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, const char* (*slot)() ```
void q_scilexersql_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerSQL_OnAutoCompletionFillups((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self ```
const char** q_scilexersql_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerSQL_AutoCompletionWordSeparators((QsciLexerSQL*)self);
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
/// ``` QsciLexerSQL* self ```
const char** q_scilexersql_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerSQL_QBaseAutoCompletionWordSeparators((QsciLexerSQL*)self);
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
/// ``` QsciLexerSQL* self, const char** (*slot)() ```
void q_scilexersql_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerSQL_OnAutoCompletionWordSeparators((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self, int* style ```
const char* q_scilexersql_block_end(void* self, int* style) {
    return QsciLexerSQL_BlockEnd((QsciLexerSQL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self, int* style ```
const char* q_scilexersql_qbase_block_end(void* self, int* style) {
    return QsciLexerSQL_QBaseBlockEnd((QsciLexerSQL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, const char* (*slot)(QsciLexerSQL*, int*) ```
void q_scilexersql_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerSQL_OnBlockEnd((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self ```
int32_t q_scilexersql_block_lookback(void* self) {
    return QsciLexerSQL_BlockLookback((QsciLexerSQL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self ```
int32_t q_scilexersql_qbase_block_lookback(void* self) {
    return QsciLexerSQL_QBaseBlockLookback((QsciLexerSQL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, int32_t (*slot)() ```
void q_scilexersql_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerSQL_OnBlockLookback((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self, int* style ```
const char* q_scilexersql_block_start(void* self, int* style) {
    return QsciLexerSQL_BlockStart((QsciLexerSQL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self, int* style ```
const char* q_scilexersql_qbase_block_start(void* self, int* style) {
    return QsciLexerSQL_QBaseBlockStart((QsciLexerSQL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, const char* (*slot)(QsciLexerSQL*, int*) ```
void q_scilexersql_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerSQL_OnBlockStart((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self, int* style ```
const char* q_scilexersql_block_start_keyword(void* self, int* style) {
    return QsciLexerSQL_BlockStartKeyword((QsciLexerSQL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self, int* style ```
const char* q_scilexersql_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerSQL_QBaseBlockStartKeyword((QsciLexerSQL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, const char* (*slot)(QsciLexerSQL*, int*) ```
void q_scilexersql_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerSQL_OnBlockStartKeyword((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self ```
bool q_scilexersql_case_sensitive(void* self) {
    return QsciLexerSQL_CaseSensitive((QsciLexerSQL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self ```
bool q_scilexersql_qbase_case_sensitive(void* self) {
    return QsciLexerSQL_QBaseCaseSensitive((QsciLexerSQL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, bool (*slot)() ```
void q_scilexersql_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerSQL_OnCaseSensitive((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self, int style ```
QColor* q_scilexersql_color(void* self, int style) {
    return QsciLexerSQL_Color((QsciLexerSQL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self, int style ```
QColor* q_scilexersql_qbase_color(void* self, int style) {
    return QsciLexerSQL_QBaseColor((QsciLexerSQL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, QColor* (*slot)(QsciLexerSQL*, int) ```
void q_scilexersql_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerSQL_OnColor((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self, int style ```
bool q_scilexersql_eol_fill(void* self, int style) {
    return QsciLexerSQL_EolFill((QsciLexerSQL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self, int style ```
bool q_scilexersql_qbase_eol_fill(void* self, int style) {
    return QsciLexerSQL_QBaseEolFill((QsciLexerSQL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, bool (*slot)(QsciLexerSQL*, int) ```
void q_scilexersql_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerSQL_OnEolFill((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self, int style ```
QFont* q_scilexersql_font(void* self, int style) {
    return QsciLexerSQL_Font((QsciLexerSQL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self, int style ```
QFont* q_scilexersql_qbase_font(void* self, int style) {
    return QsciLexerSQL_QBaseFont((QsciLexerSQL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, QFont* (*slot)(QsciLexerSQL*, int) ```
void q_scilexersql_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerSQL_OnFont((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self ```
int32_t q_scilexersql_indentation_guide_view(void* self) {
    return QsciLexerSQL_IndentationGuideView((QsciLexerSQL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self ```
int32_t q_scilexersql_qbase_indentation_guide_view(void* self) {
    return QsciLexerSQL_QBaseIndentationGuideView((QsciLexerSQL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, int32_t (*slot)() ```
void q_scilexersql_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerSQL_OnIndentationGuideView((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self ```
int32_t q_scilexersql_default_style(void* self) {
    return QsciLexerSQL_DefaultStyle((QsciLexerSQL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self ```
int32_t q_scilexersql_qbase_default_style(void* self) {
    return QsciLexerSQL_QBaseDefaultStyle((QsciLexerSQL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, int32_t (*slot)() ```
void q_scilexersql_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerSQL_OnDefaultStyle((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self, int style ```
QColor* q_scilexersql_paper(void* self, int style) {
    return QsciLexerSQL_Paper((QsciLexerSQL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self, int style ```
QColor* q_scilexersql_qbase_paper(void* self, int style) {
    return QsciLexerSQL_QBasePaper((QsciLexerSQL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, QColor* (*slot)(QsciLexerSQL*, int) ```
void q_scilexersql_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerSQL_OnPaper((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self, int style ```
QColor* q_scilexersql_default_color_with_style(void* self, int style) {
    return QsciLexerSQL_DefaultColorWithStyle((QsciLexerSQL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self, int style ```
QColor* q_scilexersql_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerSQL_QBaseDefaultColorWithStyle((QsciLexerSQL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, QColor* (*slot)(QsciLexerSQL*, int) ```
void q_scilexersql_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerSQL_OnDefaultColorWithStyle((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self, int style ```
QFont* q_scilexersql_default_font_with_style(void* self, int style) {
    return QsciLexerSQL_DefaultFontWithStyle((QsciLexerSQL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self, int style ```
QFont* q_scilexersql_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerSQL_QBaseDefaultFontWithStyle((QsciLexerSQL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, QFont* (*slot)(QsciLexerSQL*, int) ```
void q_scilexersql_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerSQL_OnDefaultFontWithStyle((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self, int style ```
QColor* q_scilexersql_default_paper_with_style(void* self, int style) {
    return QsciLexerSQL_DefaultPaperWithStyle((QsciLexerSQL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self, int style ```
QColor* q_scilexersql_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerSQL_QBaseDefaultPaperWithStyle((QsciLexerSQL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, QColor* (*slot)(QsciLexerSQL*, int) ```
void q_scilexersql_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerSQL_OnDefaultPaperWithStyle((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self, QsciScintilla* editor ```
void q_scilexersql_set_editor(void* self, void* editor) {
    QsciLexerSQL_SetEditor((QsciLexerSQL*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self, QsciScintilla* editor ```
void q_scilexersql_qbase_set_editor(void* self, void* editor) {
    QsciLexerSQL_QBaseSetEditor((QsciLexerSQL*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, void (*slot)(QsciLexerSQL*, QsciScintilla*) ```
void q_scilexersql_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerSQL_OnSetEditor((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self ```
int32_t q_scilexersql_style_bits_needed(void* self) {
    return QsciLexerSQL_StyleBitsNeeded((QsciLexerSQL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self ```
int32_t q_scilexersql_qbase_style_bits_needed(void* self) {
    return QsciLexerSQL_QBaseStyleBitsNeeded((QsciLexerSQL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, int32_t (*slot)() ```
void q_scilexersql_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerSQL_OnStyleBitsNeeded((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self ```
const char* q_scilexersql_word_characters(void* self) {
    return QsciLexerSQL_WordCharacters((QsciLexerSQL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self ```
const char* q_scilexersql_qbase_word_characters(void* self) {
    return QsciLexerSQL_QBaseWordCharacters((QsciLexerSQL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, const char* (*slot)() ```
void q_scilexersql_on_word_characters(void* self, const char* (*slot)()) {
    QsciLexerSQL_OnWordCharacters((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self, int autoindentstyle ```
void q_scilexersql_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerSQL_SetAutoIndentStyle((QsciLexerSQL*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self, int autoindentstyle ```
void q_scilexersql_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerSQL_QBaseSetAutoIndentStyle((QsciLexerSQL*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, void (*slot)(QsciLexerSQL*, int) ```
void q_scilexersql_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerSQL_OnSetAutoIndentStyle((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self, QColor* c, int style ```
void q_scilexersql_set_color(void* self, void* c, int style) {
    QsciLexerSQL_SetColor((QsciLexerSQL*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self, QColor* c, int style ```
void q_scilexersql_qbase_set_color(void* self, void* c, int style) {
    QsciLexerSQL_QBaseSetColor((QsciLexerSQL*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, void (*slot)(QsciLexerSQL*, QColor*, int) ```
void q_scilexersql_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerSQL_OnSetColor((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self, bool eoffill, int style ```
void q_scilexersql_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerSQL_SetEolFill((QsciLexerSQL*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self, bool eoffill, int style ```
void q_scilexersql_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerSQL_QBaseSetEolFill((QsciLexerSQL*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, void (*slot)(QsciLexerSQL*, bool, int) ```
void q_scilexersql_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerSQL_OnSetEolFill((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self, QFont* f, int style ```
void q_scilexersql_set_font(void* self, void* f, int style) {
    QsciLexerSQL_SetFont((QsciLexerSQL*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self, QFont* f, int style ```
void q_scilexersql_qbase_set_font(void* self, void* f, int style) {
    QsciLexerSQL_QBaseSetFont((QsciLexerSQL*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, void (*slot)(QsciLexerSQL*, QFont*, int) ```
void q_scilexersql_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerSQL_OnSetFont((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self, QColor* c, int style ```
void q_scilexersql_set_paper(void* self, void* c, int style) {
    QsciLexerSQL_SetPaper((QsciLexerSQL*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self, QColor* c, int style ```
void q_scilexersql_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerSQL_QBaseSetPaper((QsciLexerSQL*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, void (*slot)(QsciLexerSQL*, QColor*, int) ```
void q_scilexersql_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerSQL_OnSetPaper((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self, QEvent* event ```
bool q_scilexersql_event(void* self, void* event) {
    return QsciLexerSQL_Event((QsciLexerSQL*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self, QEvent* event ```
bool q_scilexersql_qbase_event(void* self, void* event) {
    return QsciLexerSQL_QBaseEvent((QsciLexerSQL*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, bool (*slot)(QsciLexerSQL*, QEvent*) ```
void q_scilexersql_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerSQL_OnEvent((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self, QObject* watched, QEvent* event ```
bool q_scilexersql_event_filter(void* self, void* watched, void* event) {
    return QsciLexerSQL_EventFilter((QsciLexerSQL*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self, QObject* watched, QEvent* event ```
bool q_scilexersql_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerSQL_QBaseEventFilter((QsciLexerSQL*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, bool (*slot)(QsciLexerSQL*, QObject*, QEvent*) ```
void q_scilexersql_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerSQL_OnEventFilter((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self, QTimerEvent* event ```
void q_scilexersql_timer_event(void* self, void* event) {
    QsciLexerSQL_TimerEvent((QsciLexerSQL*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self, QTimerEvent* event ```
void q_scilexersql_qbase_timer_event(void* self, void* event) {
    QsciLexerSQL_QBaseTimerEvent((QsciLexerSQL*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, void (*slot)(QsciLexerSQL*, QTimerEvent*) ```
void q_scilexersql_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerSQL_OnTimerEvent((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self, QChildEvent* event ```
void q_scilexersql_child_event(void* self, void* event) {
    QsciLexerSQL_ChildEvent((QsciLexerSQL*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self, QChildEvent* event ```
void q_scilexersql_qbase_child_event(void* self, void* event) {
    QsciLexerSQL_QBaseChildEvent((QsciLexerSQL*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, void (*slot)(QsciLexerSQL*, QChildEvent*) ```
void q_scilexersql_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerSQL_OnChildEvent((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self, QEvent* event ```
void q_scilexersql_custom_event(void* self, void* event) {
    QsciLexerSQL_CustomEvent((QsciLexerSQL*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self, QEvent* event ```
void q_scilexersql_qbase_custom_event(void* self, void* event) {
    QsciLexerSQL_QBaseCustomEvent((QsciLexerSQL*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, void (*slot)(QsciLexerSQL*, QEvent*) ```
void q_scilexersql_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerSQL_OnCustomEvent((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self, QMetaMethod* signal ```
void q_scilexersql_connect_notify(void* self, void* signal) {
    QsciLexerSQL_ConnectNotify((QsciLexerSQL*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self, QMetaMethod* signal ```
void q_scilexersql_qbase_connect_notify(void* self, void* signal) {
    QsciLexerSQL_QBaseConnectNotify((QsciLexerSQL*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, void (*slot)(QsciLexerSQL*, QMetaMethod*) ```
void q_scilexersql_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerSQL_OnConnectNotify((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self, QMetaMethod* signal ```
void q_scilexersql_disconnect_notify(void* self, void* signal) {
    QsciLexerSQL_DisconnectNotify((QsciLexerSQL*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self, QMetaMethod* signal ```
void q_scilexersql_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerSQL_QBaseDisconnectNotify((QsciLexerSQL*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, void (*slot)(QsciLexerSQL*, QMetaMethod*) ```
void q_scilexersql_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerSQL_OnDisconnectNotify((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self ```
QObject* q_scilexersql_sender(void* self) {
    return QsciLexerSQL_Sender((QsciLexerSQL*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self ```
QObject* q_scilexersql_qbase_sender(void* self) {
    return QsciLexerSQL_QBaseSender((QsciLexerSQL*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, QObject* (*slot)() ```
void q_scilexersql_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerSQL_OnSender((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self ```
int32_t q_scilexersql_sender_signal_index(void* self) {
    return QsciLexerSQL_SenderSignalIndex((QsciLexerSQL*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self ```
int32_t q_scilexersql_qbase_sender_signal_index(void* self) {
    return QsciLexerSQL_QBaseSenderSignalIndex((QsciLexerSQL*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, int32_t (*slot)() ```
void q_scilexersql_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerSQL_OnSenderSignalIndex((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self, const char* signal ```
int32_t q_scilexersql_receivers(void* self, const char* signal) {
    return QsciLexerSQL_Receivers((QsciLexerSQL*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self, const char* signal ```
int32_t q_scilexersql_qbase_receivers(void* self, const char* signal) {
    return QsciLexerSQL_QBaseReceivers((QsciLexerSQL*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, int32_t (*slot)(QsciLexerSQL*, const char*) ```
void q_scilexersql_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerSQL_OnReceivers((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerSQL* self, QMetaMethod* signal ```
bool q_scilexersql_is_signal_connected(void* self, void* signal) {
    return QsciLexerSQL_IsSignalConnected((QsciLexerSQL*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerSQL* self, QMetaMethod* signal ```
bool q_scilexersql_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerSQL_QBaseIsSignalConnected((QsciLexerSQL*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerSQL* self, bool (*slot)(QsciLexerSQL*, QMetaMethod*) ```
void q_scilexersql_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerSQL_OnIsSignalConnected((QsciLexerSQL*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexerSQL* self ```
void q_scilexersql_delete(void* self) {
    QsciLexerSQL_Delete((QsciLexerSQL*)(self));
}