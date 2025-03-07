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
#include "libqscilexervhdl.hpp"
#include "libqscilexervhdl.h"

/// https://doc.qt.io/qt-6/qscilexervhdl.html

/// q_scilexervhdl_new constructs a new QsciLexerVHDL object.
///
///
QsciLexerVHDL* q_scilexervhdl_new() {
    return QsciLexerVHDL_new();
}

/// q_scilexervhdl_new2 constructs a new QsciLexerVHDL object.
///
/// ``` QObject* parent ```
QsciLexerVHDL* q_scilexervhdl_new2(void* parent) {
    return QsciLexerVHDL_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerVHDL* self ```
QMetaObject* q_scilexervhdl_meta_object(void* self) {
    return QsciLexerVHDL_MetaObject((QsciLexerVHDL*)self);
}

/// ``` QsciLexerVHDL* self, const char* param1 ```
void* q_scilexervhdl_metacast(void* self, const char* param1) {
    return QsciLexerVHDL_Metacast((QsciLexerVHDL*)self, param1);
}

/// ``` QsciLexerVHDL* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexervhdl_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerVHDL_Metacall((QsciLexerVHDL*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerVHDL* self, int32_t (*slot)(QsciLexerVHDL*, enum QMetaObject__Call, int, void*) ```
void q_scilexervhdl_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerVHDL_OnMetacall((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerVHDL* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexervhdl_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerVHDL_QBaseMetacall((QsciLexerVHDL*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexervhdl_tr(const char* s) {
    libqt_string _str = QsciLexerVHDL_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexervhdl.html#language)
///
/// ``` QsciLexerVHDL* self ```
const char* q_scilexervhdl_language(void* self) {
    return QsciLexerVHDL_Language((QsciLexerVHDL*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexervhdl.html#lexer)
///
/// ``` QsciLexerVHDL* self ```
const char* q_scilexervhdl_lexer(void* self) {
    return QsciLexerVHDL_Lexer((QsciLexerVHDL*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexervhdl.html#braceStyle)
///
/// ``` QsciLexerVHDL* self ```
int32_t q_scilexervhdl_brace_style(void* self) {
    return QsciLexerVHDL_BraceStyle((QsciLexerVHDL*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexervhdl.html#defaultColor)
///
/// ``` QsciLexerVHDL* self, int style ```
QColor* q_scilexervhdl_default_color(void* self, int style) {
    return QsciLexerVHDL_DefaultColor((QsciLexerVHDL*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexervhdl.html#defaultEolFill)
///
/// ``` QsciLexerVHDL* self, int style ```
bool q_scilexervhdl_default_eol_fill(void* self, int style) {
    return QsciLexerVHDL_DefaultEolFill((QsciLexerVHDL*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexervhdl.html#defaultFont)
///
/// ``` QsciLexerVHDL* self, int style ```
QFont* q_scilexervhdl_default_font(void* self, int style) {
    return QsciLexerVHDL_DefaultFont((QsciLexerVHDL*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexervhdl.html#defaultPaper)
///
/// ``` QsciLexerVHDL* self, int style ```
QColor* q_scilexervhdl_default_paper(void* self, int style) {
    return QsciLexerVHDL_DefaultPaper((QsciLexerVHDL*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexervhdl.html#keywords)
///
/// ``` QsciLexerVHDL* self, int set ```
const char* q_scilexervhdl_keywords(void* self, int set) {
    return QsciLexerVHDL_Keywords((QsciLexerVHDL*)self, set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexervhdl.html#description)
///
/// ``` QsciLexerVHDL* self, int style ```
const char* q_scilexervhdl_description(void* self, int style) {
    libqt_string _str = QsciLexerVHDL_Description((QsciLexerVHDL*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexervhdl.html#refreshProperties)
///
/// ``` QsciLexerVHDL* self ```
void q_scilexervhdl_refresh_properties(void* self) {
    QsciLexerVHDL_RefreshProperties((QsciLexerVHDL*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexervhdl.html#foldComments)
///
/// ``` QsciLexerVHDL* self ```
bool q_scilexervhdl_fold_comments(void* self) {
    return QsciLexerVHDL_FoldComments((QsciLexerVHDL*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexervhdl.html#foldCompact)
///
/// ``` QsciLexerVHDL* self ```
bool q_scilexervhdl_fold_compact(void* self) {
    return QsciLexerVHDL_FoldCompact((QsciLexerVHDL*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexervhdl.html#foldAtElse)
///
/// ``` QsciLexerVHDL* self ```
bool q_scilexervhdl_fold_at_else(void* self) {
    return QsciLexerVHDL_FoldAtElse((QsciLexerVHDL*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexervhdl.html#foldAtBegin)
///
/// ``` QsciLexerVHDL* self ```
bool q_scilexervhdl_fold_at_begin(void* self) {
    return QsciLexerVHDL_FoldAtBegin((QsciLexerVHDL*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexervhdl.html#foldAtParenthesis)
///
/// ``` QsciLexerVHDL* self ```
bool q_scilexervhdl_fold_at_parenthesis(void* self) {
    return QsciLexerVHDL_FoldAtParenthesis((QsciLexerVHDL*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexervhdl.html#setFoldComments)
///
/// ``` QsciLexerVHDL* self, bool fold ```
void q_scilexervhdl_set_fold_comments(void* self, bool fold) {
    QsciLexerVHDL_SetFoldComments((QsciLexerVHDL*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, bool) ```
void q_scilexervhdl_on_set_fold_comments(void* self, void (*slot)(void*, bool)) {
    QsciLexerVHDL_OnSetFoldComments((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerVHDL* self, bool fold ```
void q_scilexervhdl_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerVHDL_QBaseSetFoldComments((QsciLexerVHDL*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexervhdl.html#setFoldCompact)
///
/// ``` QsciLexerVHDL* self, bool fold ```
void q_scilexervhdl_set_fold_compact(void* self, bool fold) {
    QsciLexerVHDL_SetFoldCompact((QsciLexerVHDL*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, bool) ```
void q_scilexervhdl_on_set_fold_compact(void* self, void (*slot)(void*, bool)) {
    QsciLexerVHDL_OnSetFoldCompact((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerVHDL* self, bool fold ```
void q_scilexervhdl_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerVHDL_QBaseSetFoldCompact((QsciLexerVHDL*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexervhdl.html#setFoldAtElse)
///
/// ``` QsciLexerVHDL* self, bool fold ```
void q_scilexervhdl_set_fold_at_else(void* self, bool fold) {
    QsciLexerVHDL_SetFoldAtElse((QsciLexerVHDL*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, bool) ```
void q_scilexervhdl_on_set_fold_at_else(void* self, void (*slot)(void*, bool)) {
    QsciLexerVHDL_OnSetFoldAtElse((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerVHDL* self, bool fold ```
void q_scilexervhdl_qbase_set_fold_at_else(void* self, bool fold) {
    QsciLexerVHDL_QBaseSetFoldAtElse((QsciLexerVHDL*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexervhdl.html#setFoldAtBegin)
///
/// ``` QsciLexerVHDL* self, bool fold ```
void q_scilexervhdl_set_fold_at_begin(void* self, bool fold) {
    QsciLexerVHDL_SetFoldAtBegin((QsciLexerVHDL*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, bool) ```
void q_scilexervhdl_on_set_fold_at_begin(void* self, void (*slot)(void*, bool)) {
    QsciLexerVHDL_OnSetFoldAtBegin((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerVHDL* self, bool fold ```
void q_scilexervhdl_qbase_set_fold_at_begin(void* self, bool fold) {
    QsciLexerVHDL_QBaseSetFoldAtBegin((QsciLexerVHDL*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexervhdl.html#setFoldAtParenthesis)
///
/// ``` QsciLexerVHDL* self, bool fold ```
void q_scilexervhdl_set_fold_at_parenthesis(void* self, bool fold) {
    QsciLexerVHDL_SetFoldAtParenthesis((QsciLexerVHDL*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, bool) ```
void q_scilexervhdl_on_set_fold_at_parenthesis(void* self, void (*slot)(void*, bool)) {
    QsciLexerVHDL_OnSetFoldAtParenthesis((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerVHDL* self, bool fold ```
void q_scilexervhdl_qbase_set_fold_at_parenthesis(void* self, bool fold) {
    QsciLexerVHDL_QBaseSetFoldAtParenthesis((QsciLexerVHDL*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexervhdl.html#readProperties)
///
/// ``` QsciLexerVHDL* self, QSettings* qs, const char* prefix ```
bool q_scilexervhdl_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerVHDL_ReadProperties((QsciLexerVHDL*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerVHDL* self, bool (*slot)(QsciLexerVHDL*, QSettings*, const char*) ```
void q_scilexervhdl_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerVHDL_OnReadProperties((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerVHDL* self, QSettings* qs, const char* prefix ```
bool q_scilexervhdl_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerVHDL_QBaseReadProperties((QsciLexerVHDL*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexervhdl.html#writeProperties)
///
/// ``` QsciLexerVHDL* self, QSettings* qs, const char* prefix ```
bool q_scilexervhdl_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerVHDL_WriteProperties((QsciLexerVHDL*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerVHDL* self, bool (*slot)(QsciLexerVHDL*, QSettings*, const char*) ```
void q_scilexervhdl_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerVHDL_OnWriteProperties((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerVHDL* self, QSettings* qs, const char* prefix ```
bool q_scilexervhdl_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerVHDL_QBaseWriteProperties((QsciLexerVHDL*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexervhdl_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerVHDL_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexervhdl_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerVHDL_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerVHDL* self ```
QsciAbstractAPIs* q_scilexervhdl_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerVHDL* self ```
int32_t q_scilexervhdl_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerVHDL* self ```
QsciScintilla* q_scilexervhdl_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerVHDL* self, QsciAbstractAPIs* apis ```
void q_scilexervhdl_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerVHDL* self, QColor* c ```
void q_scilexervhdl_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerVHDL* self, QFont* f ```
void q_scilexervhdl_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerVHDL* self, QColor* c ```
void q_scilexervhdl_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerVHDL* self, QSettings* qs ```
bool q_scilexervhdl_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerVHDL* self, QSettings* qs ```
bool q_scilexervhdl_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerVHDL* self, QColor* c, int style ```
void q_scilexervhdl_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexervhdl_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerVHDL* self, bool eolfilled, int style ```
void q_scilexervhdl_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexervhdl_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerVHDL* self, QFont* f, int style ```
void q_scilexervhdl_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexervhdl_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerVHDL* self, QColor* c, int style ```
void q_scilexervhdl_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexervhdl_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerVHDL* self, const char* prop, const char* val ```
void q_scilexervhdl_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexervhdl_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerVHDL* self, QSettings* qs, const char* prefix ```
bool q_scilexervhdl_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerVHDL* self, QSettings* qs, const char* prefix ```
bool q_scilexervhdl_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerVHDL* self ```
const char* q_scilexervhdl_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerVHDL* self, const char* name ```
void q_scilexervhdl_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerVHDL* self ```
bool q_scilexervhdl_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerVHDL* self ```
bool q_scilexervhdl_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerVHDL* self ```
bool q_scilexervhdl_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerVHDL* self ```
bool q_scilexervhdl_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerVHDL* self, bool b ```
bool q_scilexervhdl_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerVHDL* self ```
QThread* q_scilexervhdl_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerVHDL* self, QThread* thread ```
void q_scilexervhdl_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerVHDL* self, int interval ```
int32_t q_scilexervhdl_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerVHDL* self, int id ```
void q_scilexervhdl_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerVHDL* self ```
libqt_list /* of QObject* */ q_scilexervhdl_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerVHDL* self, QObject* parent ```
void q_scilexervhdl_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerVHDL* self, QObject* filterObj ```
void q_scilexervhdl_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerVHDL* self, QObject* obj ```
void q_scilexervhdl_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexervhdl_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerVHDL* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexervhdl_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexervhdl_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexervhdl_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerVHDL* self ```
void q_scilexervhdl_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerVHDL* self ```
void q_scilexervhdl_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerVHDL* self, const char* name, QVariant* value ```
bool q_scilexervhdl_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerVHDL* self, const char* name ```
QVariant* q_scilexervhdl_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerVHDL* self ```
const char** q_scilexervhdl_dynamic_property_names(void* self) {
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
/// ``` QsciLexerVHDL* self ```
QBindingStorage* q_scilexervhdl_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerVHDL* self ```
QBindingStorage* q_scilexervhdl_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerVHDL* self ```
void q_scilexervhdl_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexerVHDL* self, void (*slot)(QObject*) ```
void q_scilexervhdl_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerVHDL* self ```
QObject* q_scilexervhdl_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerVHDL* self, const char* classname ```
bool q_scilexervhdl_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerVHDL* self ```
void q_scilexervhdl_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerVHDL* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexervhdl_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexervhdl_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerVHDL* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexervhdl_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerVHDL* self, QObject* param1 ```
void q_scilexervhdl_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexerVHDL* self, void (*slot)(QObject*, QObject*) ```
void q_scilexervhdl_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
int32_t q_scilexervhdl_lexer_id(void* self) {
    return QsciLexerVHDL_LexerId((QsciLexerVHDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
int32_t q_scilexervhdl_qbase_lexer_id(void* self) {
    return QsciLexerVHDL_QBaseLexerId((QsciLexerVHDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int32_t (*slot)() ```
void q_scilexervhdl_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerVHDL_OnLexerId((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
const char* q_scilexervhdl_auto_completion_fillups(void* self) {
    return QsciLexerVHDL_AutoCompletionFillups((QsciLexerVHDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
const char* q_scilexervhdl_qbase_auto_completion_fillups(void* self) {
    return QsciLexerVHDL_QBaseAutoCompletionFillups((QsciLexerVHDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, const char* (*slot)() ```
void q_scilexervhdl_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerVHDL_OnAutoCompletionFillups((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
const char** q_scilexervhdl_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerVHDL_AutoCompletionWordSeparators((QsciLexerVHDL*)self);
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
/// ``` QsciLexerVHDL* self ```
const char** q_scilexervhdl_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerVHDL_QBaseAutoCompletionWordSeparators((QsciLexerVHDL*)self);
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
/// ``` QsciLexerVHDL* self, const char** (*slot)() ```
void q_scilexervhdl_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerVHDL_OnAutoCompletionWordSeparators((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, int* style ```
const char* q_scilexervhdl_block_end(void* self, int* style) {
    return QsciLexerVHDL_BlockEnd((QsciLexerVHDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int* style ```
const char* q_scilexervhdl_qbase_block_end(void* self, int* style) {
    return QsciLexerVHDL_QBaseBlockEnd((QsciLexerVHDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, const char* (*slot)(QsciLexerVHDL*, int*) ```
void q_scilexervhdl_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerVHDL_OnBlockEnd((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
int32_t q_scilexervhdl_block_lookback(void* self) {
    return QsciLexerVHDL_BlockLookback((QsciLexerVHDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
int32_t q_scilexervhdl_qbase_block_lookback(void* self) {
    return QsciLexerVHDL_QBaseBlockLookback((QsciLexerVHDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int32_t (*slot)() ```
void q_scilexervhdl_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerVHDL_OnBlockLookback((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, int* style ```
const char* q_scilexervhdl_block_start(void* self, int* style) {
    return QsciLexerVHDL_BlockStart((QsciLexerVHDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int* style ```
const char* q_scilexervhdl_qbase_block_start(void* self, int* style) {
    return QsciLexerVHDL_QBaseBlockStart((QsciLexerVHDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, const char* (*slot)(QsciLexerVHDL*, int*) ```
void q_scilexervhdl_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerVHDL_OnBlockStart((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, int* style ```
const char* q_scilexervhdl_block_start_keyword(void* self, int* style) {
    return QsciLexerVHDL_BlockStartKeyword((QsciLexerVHDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int* style ```
const char* q_scilexervhdl_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerVHDL_QBaseBlockStartKeyword((QsciLexerVHDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, const char* (*slot)(QsciLexerVHDL*, int*) ```
void q_scilexervhdl_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerVHDL_OnBlockStartKeyword((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
bool q_scilexervhdl_case_sensitive(void* self) {
    return QsciLexerVHDL_CaseSensitive((QsciLexerVHDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
bool q_scilexervhdl_qbase_case_sensitive(void* self) {
    return QsciLexerVHDL_QBaseCaseSensitive((QsciLexerVHDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, bool (*slot)() ```
void q_scilexervhdl_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerVHDL_OnCaseSensitive((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, int style ```
QColor* q_scilexervhdl_color(void* self, int style) {
    return QsciLexerVHDL_Color((QsciLexerVHDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int style ```
QColor* q_scilexervhdl_qbase_color(void* self, int style) {
    return QsciLexerVHDL_QBaseColor((QsciLexerVHDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QColor* (*slot)(QsciLexerVHDL*, int) ```
void q_scilexervhdl_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerVHDL_OnColor((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, int style ```
bool q_scilexervhdl_eol_fill(void* self, int style) {
    return QsciLexerVHDL_EolFill((QsciLexerVHDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int style ```
bool q_scilexervhdl_qbase_eol_fill(void* self, int style) {
    return QsciLexerVHDL_QBaseEolFill((QsciLexerVHDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, bool (*slot)(QsciLexerVHDL*, int) ```
void q_scilexervhdl_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerVHDL_OnEolFill((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, int style ```
QFont* q_scilexervhdl_font(void* self, int style) {
    return QsciLexerVHDL_Font((QsciLexerVHDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int style ```
QFont* q_scilexervhdl_qbase_font(void* self, int style) {
    return QsciLexerVHDL_QBaseFont((QsciLexerVHDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QFont* (*slot)(QsciLexerVHDL*, int) ```
void q_scilexervhdl_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerVHDL_OnFont((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
int32_t q_scilexervhdl_indentation_guide_view(void* self) {
    return QsciLexerVHDL_IndentationGuideView((QsciLexerVHDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
int32_t q_scilexervhdl_qbase_indentation_guide_view(void* self) {
    return QsciLexerVHDL_QBaseIndentationGuideView((QsciLexerVHDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int32_t (*slot)() ```
void q_scilexervhdl_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerVHDL_OnIndentationGuideView((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
int32_t q_scilexervhdl_default_style(void* self) {
    return QsciLexerVHDL_DefaultStyle((QsciLexerVHDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
int32_t q_scilexervhdl_qbase_default_style(void* self) {
    return QsciLexerVHDL_QBaseDefaultStyle((QsciLexerVHDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int32_t (*slot)() ```
void q_scilexervhdl_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerVHDL_OnDefaultStyle((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, int style ```
QColor* q_scilexervhdl_paper(void* self, int style) {
    return QsciLexerVHDL_Paper((QsciLexerVHDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int style ```
QColor* q_scilexervhdl_qbase_paper(void* self, int style) {
    return QsciLexerVHDL_QBasePaper((QsciLexerVHDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QColor* (*slot)(QsciLexerVHDL*, int) ```
void q_scilexervhdl_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerVHDL_OnPaper((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, int style ```
QColor* q_scilexervhdl_default_color_with_style(void* self, int style) {
    return QsciLexerVHDL_DefaultColorWithStyle((QsciLexerVHDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int style ```
QColor* q_scilexervhdl_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerVHDL_QBaseDefaultColorWithStyle((QsciLexerVHDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QColor* (*slot)(QsciLexerVHDL*, int) ```
void q_scilexervhdl_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerVHDL_OnDefaultColorWithStyle((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, int style ```
QFont* q_scilexervhdl_default_font_with_style(void* self, int style) {
    return QsciLexerVHDL_DefaultFontWithStyle((QsciLexerVHDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int style ```
QFont* q_scilexervhdl_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerVHDL_QBaseDefaultFontWithStyle((QsciLexerVHDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QFont* (*slot)(QsciLexerVHDL*, int) ```
void q_scilexervhdl_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerVHDL_OnDefaultFontWithStyle((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, int style ```
QColor* q_scilexervhdl_default_paper_with_style(void* self, int style) {
    return QsciLexerVHDL_DefaultPaperWithStyle((QsciLexerVHDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int style ```
QColor* q_scilexervhdl_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerVHDL_QBaseDefaultPaperWithStyle((QsciLexerVHDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QColor* (*slot)(QsciLexerVHDL*, int) ```
void q_scilexervhdl_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerVHDL_OnDefaultPaperWithStyle((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, QsciScintilla* editor ```
void q_scilexervhdl_set_editor(void* self, void* editor) {
    QsciLexerVHDL_SetEditor((QsciLexerVHDL*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QsciScintilla* editor ```
void q_scilexervhdl_qbase_set_editor(void* self, void* editor) {
    QsciLexerVHDL_QBaseSetEditor((QsciLexerVHDL*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, QsciScintilla*) ```
void q_scilexervhdl_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerVHDL_OnSetEditor((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
int32_t q_scilexervhdl_style_bits_needed(void* self) {
    return QsciLexerVHDL_StyleBitsNeeded((QsciLexerVHDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
int32_t q_scilexervhdl_qbase_style_bits_needed(void* self) {
    return QsciLexerVHDL_QBaseStyleBitsNeeded((QsciLexerVHDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int32_t (*slot)() ```
void q_scilexervhdl_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerVHDL_OnStyleBitsNeeded((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
const char* q_scilexervhdl_word_characters(void* self) {
    return QsciLexerVHDL_WordCharacters((QsciLexerVHDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
const char* q_scilexervhdl_qbase_word_characters(void* self) {
    return QsciLexerVHDL_QBaseWordCharacters((QsciLexerVHDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, const char* (*slot)() ```
void q_scilexervhdl_on_word_characters(void* self, const char* (*slot)()) {
    QsciLexerVHDL_OnWordCharacters((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, int autoindentstyle ```
void q_scilexervhdl_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerVHDL_SetAutoIndentStyle((QsciLexerVHDL*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int autoindentstyle ```
void q_scilexervhdl_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerVHDL_QBaseSetAutoIndentStyle((QsciLexerVHDL*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, int) ```
void q_scilexervhdl_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerVHDL_OnSetAutoIndentStyle((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, QColor* c, int style ```
void q_scilexervhdl_set_color(void* self, void* c, int style) {
    QsciLexerVHDL_SetColor((QsciLexerVHDL*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QColor* c, int style ```
void q_scilexervhdl_qbase_set_color(void* self, void* c, int style) {
    QsciLexerVHDL_QBaseSetColor((QsciLexerVHDL*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, QColor*, int) ```
void q_scilexervhdl_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerVHDL_OnSetColor((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, bool eoffill, int style ```
void q_scilexervhdl_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerVHDL_SetEolFill((QsciLexerVHDL*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, bool eoffill, int style ```
void q_scilexervhdl_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerVHDL_QBaseSetEolFill((QsciLexerVHDL*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, bool, int) ```
void q_scilexervhdl_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerVHDL_OnSetEolFill((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, QFont* f, int style ```
void q_scilexervhdl_set_font(void* self, void* f, int style) {
    QsciLexerVHDL_SetFont((QsciLexerVHDL*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QFont* f, int style ```
void q_scilexervhdl_qbase_set_font(void* self, void* f, int style) {
    QsciLexerVHDL_QBaseSetFont((QsciLexerVHDL*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, QFont*, int) ```
void q_scilexervhdl_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerVHDL_OnSetFont((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, QColor* c, int style ```
void q_scilexervhdl_set_paper(void* self, void* c, int style) {
    QsciLexerVHDL_SetPaper((QsciLexerVHDL*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QColor* c, int style ```
void q_scilexervhdl_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerVHDL_QBaseSetPaper((QsciLexerVHDL*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, QColor*, int) ```
void q_scilexervhdl_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerVHDL_OnSetPaper((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, QEvent* event ```
bool q_scilexervhdl_event(void* self, void* event) {
    return QsciLexerVHDL_Event((QsciLexerVHDL*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QEvent* event ```
bool q_scilexervhdl_qbase_event(void* self, void* event) {
    return QsciLexerVHDL_QBaseEvent((QsciLexerVHDL*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, bool (*slot)(QsciLexerVHDL*, QEvent*) ```
void q_scilexervhdl_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerVHDL_OnEvent((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, QObject* watched, QEvent* event ```
bool q_scilexervhdl_event_filter(void* self, void* watched, void* event) {
    return QsciLexerVHDL_EventFilter((QsciLexerVHDL*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QObject* watched, QEvent* event ```
bool q_scilexervhdl_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerVHDL_QBaseEventFilter((QsciLexerVHDL*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, bool (*slot)(QsciLexerVHDL*, QObject*, QEvent*) ```
void q_scilexervhdl_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerVHDL_OnEventFilter((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, QTimerEvent* event ```
void q_scilexervhdl_timer_event(void* self, void* event) {
    QsciLexerVHDL_TimerEvent((QsciLexerVHDL*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QTimerEvent* event ```
void q_scilexervhdl_qbase_timer_event(void* self, void* event) {
    QsciLexerVHDL_QBaseTimerEvent((QsciLexerVHDL*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, QTimerEvent*) ```
void q_scilexervhdl_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerVHDL_OnTimerEvent((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, QChildEvent* event ```
void q_scilexervhdl_child_event(void* self, void* event) {
    QsciLexerVHDL_ChildEvent((QsciLexerVHDL*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QChildEvent* event ```
void q_scilexervhdl_qbase_child_event(void* self, void* event) {
    QsciLexerVHDL_QBaseChildEvent((QsciLexerVHDL*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, QChildEvent*) ```
void q_scilexervhdl_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerVHDL_OnChildEvent((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, QEvent* event ```
void q_scilexervhdl_custom_event(void* self, void* event) {
    QsciLexerVHDL_CustomEvent((QsciLexerVHDL*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QEvent* event ```
void q_scilexervhdl_qbase_custom_event(void* self, void* event) {
    QsciLexerVHDL_QBaseCustomEvent((QsciLexerVHDL*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, QEvent*) ```
void q_scilexervhdl_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerVHDL_OnCustomEvent((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, QMetaMethod* signal ```
void q_scilexervhdl_connect_notify(void* self, void* signal) {
    QsciLexerVHDL_ConnectNotify((QsciLexerVHDL*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QMetaMethod* signal ```
void q_scilexervhdl_qbase_connect_notify(void* self, void* signal) {
    QsciLexerVHDL_QBaseConnectNotify((QsciLexerVHDL*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, QMetaMethod*) ```
void q_scilexervhdl_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerVHDL_OnConnectNotify((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, QMetaMethod* signal ```
void q_scilexervhdl_disconnect_notify(void* self, void* signal) {
    QsciLexerVHDL_DisconnectNotify((QsciLexerVHDL*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QMetaMethod* signal ```
void q_scilexervhdl_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerVHDL_QBaseDisconnectNotify((QsciLexerVHDL*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, QMetaMethod*) ```
void q_scilexervhdl_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerVHDL_OnDisconnectNotify((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
QObject* q_scilexervhdl_sender(void* self) {
    return QsciLexerVHDL_Sender((QsciLexerVHDL*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
QObject* q_scilexervhdl_qbase_sender(void* self) {
    return QsciLexerVHDL_QBaseSender((QsciLexerVHDL*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QObject* (*slot)() ```
void q_scilexervhdl_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerVHDL_OnSender((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
int32_t q_scilexervhdl_sender_signal_index(void* self) {
    return QsciLexerVHDL_SenderSignalIndex((QsciLexerVHDL*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
int32_t q_scilexervhdl_qbase_sender_signal_index(void* self) {
    return QsciLexerVHDL_QBaseSenderSignalIndex((QsciLexerVHDL*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int32_t (*slot)() ```
void q_scilexervhdl_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerVHDL_OnSenderSignalIndex((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, const char* signal ```
int32_t q_scilexervhdl_receivers(void* self, const char* signal) {
    return QsciLexerVHDL_Receivers((QsciLexerVHDL*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, const char* signal ```
int32_t q_scilexervhdl_qbase_receivers(void* self, const char* signal) {
    return QsciLexerVHDL_QBaseReceivers((QsciLexerVHDL*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int32_t (*slot)(QsciLexerVHDL*, const char*) ```
void q_scilexervhdl_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerVHDL_OnReceivers((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, QMetaMethod* signal ```
bool q_scilexervhdl_is_signal_connected(void* self, void* signal) {
    return QsciLexerVHDL_IsSignalConnected((QsciLexerVHDL*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QMetaMethod* signal ```
bool q_scilexervhdl_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerVHDL_QBaseIsSignalConnected((QsciLexerVHDL*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, bool (*slot)(QsciLexerVHDL*, QMetaMethod*) ```
void q_scilexervhdl_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerVHDL_OnIsSignalConnected((QsciLexerVHDL*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexerVHDL* self ```
void q_scilexervhdl_delete(void* self) {
    QsciLexerVHDL_Delete((QsciLexerVHDL*)(self));
}