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
#include "libqscilexercpp.hpp"
#include "../libqcoreevent.hpp"
#include "libqscilexeridl.hpp"
#include "libqscilexeridl.h"

/// https://doc.qt.io/qt-6/qscilexeridl.html

/// q_scilexeridl_new constructs a new QsciLexerIDL object.
///
///
QsciLexerIDL* q_scilexeridl_new() {
    return QsciLexerIDL_new();
}

/// q_scilexeridl_new2 constructs a new QsciLexerIDL object.
///
/// ``` QObject* parent ```
QsciLexerIDL* q_scilexeridl_new2(void* parent) {
    return QsciLexerIDL_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerIDL* self ```
QMetaObject* q_scilexeridl_meta_object(void* self) {
    return QsciLexerIDL_MetaObject((QsciLexerIDL*)self);
}

/// ``` QsciLexerIDL* self, const char* param1 ```
void* q_scilexeridl_metacast(void* self, const char* param1) {
    return QsciLexerIDL_Metacast((QsciLexerIDL*)self, param1);
}

/// ``` QsciLexerIDL* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexeridl_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerIDL_Metacall((QsciLexerIDL*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerIDL* self, int32_t (*slot)(QsciLexerIDL*, enum QMetaObject__Call, int, void*) ```
void q_scilexeridl_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerIDL_OnMetacall((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerIDL* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexeridl_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerIDL_QBaseMetacall((QsciLexerIDL*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexeridl_tr(const char* s) {
    libqt_string _str = QsciLexerIDL_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexeridl.html#language)
///
/// ``` QsciLexerIDL* self ```
const char* q_scilexeridl_language(void* self) {
    return QsciLexerIDL_Language((QsciLexerIDL*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexeridl.html#defaultColor)
///
/// ``` QsciLexerIDL* self, int style ```
QColor* q_scilexeridl_default_color(void* self, int style) {
    return QsciLexerIDL_DefaultColor((QsciLexerIDL*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexeridl.html#keywords)
///
/// ``` QsciLexerIDL* self, int set ```
const char* q_scilexeridl_keywords(void* self, int set) {
    return QsciLexerIDL_Keywords((QsciLexerIDL*)self, set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexeridl.html#description)
///
/// ``` QsciLexerIDL* self, int style ```
const char* q_scilexeridl_description(void* self, int style) {
    libqt_string _str = QsciLexerIDL_Description((QsciLexerIDL*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexeridl_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerIDL_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexeridl_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerIDL_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#defaultFont)
///
/// ``` QsciLexerIDL* self, int style ```
QFont* q_scilexeridl_default_font(void* self, int style) {
    return QsciLexerCPP_DefaultFont((QsciLexerCPP*)self, style);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#defaultPaper)
///
/// ``` QsciLexerIDL* self, int style ```
QColor* q_scilexeridl_default_paper(void* self, int style) {
    return QsciLexerCPP_DefaultPaper((QsciLexerCPP*)self, style);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#foldAtElse)
///
/// ``` QsciLexerIDL* self ```
bool q_scilexeridl_fold_at_else(void* self) {
    return QsciLexerCPP_FoldAtElse((QsciLexerCPP*)self);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#foldComments)
///
/// ``` QsciLexerIDL* self ```
bool q_scilexeridl_fold_comments(void* self) {
    return QsciLexerCPP_FoldComments((QsciLexerCPP*)self);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#foldCompact)
///
/// ``` QsciLexerIDL* self ```
bool q_scilexeridl_fold_compact(void* self) {
    return QsciLexerCPP_FoldCompact((QsciLexerCPP*)self);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#foldPreprocessor)
///
/// ``` QsciLexerIDL* self ```
bool q_scilexeridl_fold_preprocessor(void* self) {
    return QsciLexerCPP_FoldPreprocessor((QsciLexerCPP*)self);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#stylePreprocessor)
///
/// ``` QsciLexerIDL* self ```
bool q_scilexeridl_style_preprocessor(void* self) {
    return QsciLexerCPP_StylePreprocessor((QsciLexerCPP*)self);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setDollarsAllowed)
///
/// ``` QsciLexerIDL* self, bool allowed ```
void q_scilexeridl_set_dollars_allowed(void* self, bool allowed) {
    QsciLexerCPP_SetDollarsAllowed((QsciLexerCPP*)self, allowed);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#dollarsAllowed)
///
/// ``` QsciLexerIDL* self ```
bool q_scilexeridl_dollars_allowed(void* self) {
    return QsciLexerCPP_DollarsAllowed((QsciLexerCPP*)self);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setHighlightTripleQuotedStrings)
///
/// ``` QsciLexerIDL* self, bool enabled ```
void q_scilexeridl_set_highlight_triple_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightTripleQuotedStrings((QsciLexerCPP*)self, enabled);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#highlightTripleQuotedStrings)
///
/// ``` QsciLexerIDL* self ```
bool q_scilexeridl_highlight_triple_quoted_strings(void* self) {
    return QsciLexerCPP_HighlightTripleQuotedStrings((QsciLexerCPP*)self);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setHighlightHashQuotedStrings)
///
/// ``` QsciLexerIDL* self, bool enabled ```
void q_scilexeridl_set_highlight_hash_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightHashQuotedStrings((QsciLexerCPP*)self, enabled);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#highlightHashQuotedStrings)
///
/// ``` QsciLexerIDL* self ```
bool q_scilexeridl_highlight_hash_quoted_strings(void* self) {
    return QsciLexerCPP_HighlightHashQuotedStrings((QsciLexerCPP*)self);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setHighlightBackQuotedStrings)
///
/// ``` QsciLexerIDL* self, bool enabled ```
void q_scilexeridl_set_highlight_back_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightBackQuotedStrings((QsciLexerCPP*)self, enabled);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#highlightBackQuotedStrings)
///
/// ``` QsciLexerIDL* self ```
bool q_scilexeridl_highlight_back_quoted_strings(void* self) {
    return QsciLexerCPP_HighlightBackQuotedStrings((QsciLexerCPP*)self);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setHighlightEscapeSequences)
///
/// ``` QsciLexerIDL* self, bool enabled ```
void q_scilexeridl_set_highlight_escape_sequences(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightEscapeSequences((QsciLexerCPP*)self, enabled);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#highlightEscapeSequences)
///
/// ``` QsciLexerIDL* self ```
bool q_scilexeridl_highlight_escape_sequences(void* self) {
    return QsciLexerCPP_HighlightEscapeSequences((QsciLexerCPP*)self);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setVerbatimStringEscapeSequencesAllowed)
///
/// ``` QsciLexerIDL* self, bool allowed ```
void q_scilexeridl_set_verbatim_string_escape_sequences_allowed(void* self, bool allowed) {
    QsciLexerCPP_SetVerbatimStringEscapeSequencesAllowed((QsciLexerCPP*)self, allowed);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#verbatimStringEscapeSequencesAllowed)
///
/// ``` QsciLexerIDL* self ```
bool q_scilexeridl_verbatim_string_escape_sequences_allowed(void* self) {
    return QsciLexerCPP_VerbatimStringEscapeSequencesAllowed((QsciLexerCPP*)self);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#blockEnd)
///
/// ``` QsciLexerIDL* self, int* style ```
const char* q_scilexeridl_block_end1(void* self, int* style) {
    return QsciLexerCPP_BlockEnd1((QsciLexerCPP*)self, style);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#blockStart)
///
/// ``` QsciLexerIDL* self, int* style ```
const char* q_scilexeridl_block_start1(void* self, int* style) {
    return QsciLexerCPP_BlockStart1((QsciLexerCPP*)self, style);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#blockStartKeyword)
///
/// ``` QsciLexerIDL* self, int* style ```
const char* q_scilexeridl_block_start_keyword1(void* self, int* style) {
    return QsciLexerCPP_BlockStartKeyword1((QsciLexerCPP*)self, style);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerIDL* self ```
QsciAbstractAPIs* q_scilexeridl_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerIDL* self ```
int32_t q_scilexeridl_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerIDL* self ```
QsciScintilla* q_scilexeridl_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerIDL* self, QsciAbstractAPIs* apis ```
void q_scilexeridl_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerIDL* self, QColor* c ```
void q_scilexeridl_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerIDL* self, QFont* f ```
void q_scilexeridl_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerIDL* self, QColor* c ```
void q_scilexeridl_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerIDL* self, QSettings* qs ```
bool q_scilexeridl_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerIDL* self, QSettings* qs ```
bool q_scilexeridl_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerIDL* self, QColor* c, int style ```
void q_scilexeridl_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerIDL* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexeridl_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerIDL* self, bool eolfilled, int style ```
void q_scilexeridl_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerIDL* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexeridl_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerIDL* self, QFont* f, int style ```
void q_scilexeridl_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerIDL* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexeridl_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerIDL* self, QColor* c, int style ```
void q_scilexeridl_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerIDL* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexeridl_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerIDL* self, const char* prop, const char* val ```
void q_scilexeridl_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerIDL* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexeridl_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerIDL* self, QSettings* qs, const char* prefix ```
bool q_scilexeridl_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerIDL* self, QSettings* qs, const char* prefix ```
bool q_scilexeridl_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerIDL* self ```
const char* q_scilexeridl_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerIDL* self, const char* name ```
void q_scilexeridl_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerIDL* self ```
bool q_scilexeridl_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerIDL* self ```
bool q_scilexeridl_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerIDL* self ```
bool q_scilexeridl_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerIDL* self ```
bool q_scilexeridl_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerIDL* self, bool b ```
bool q_scilexeridl_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerIDL* self ```
QThread* q_scilexeridl_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerIDL* self, QThread* thread ```
void q_scilexeridl_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerIDL* self, int interval ```
int32_t q_scilexeridl_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerIDL* self, int id ```
void q_scilexeridl_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerIDL* self ```
libqt_list /* of QObject* */ q_scilexeridl_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerIDL* self, QObject* parent ```
void q_scilexeridl_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerIDL* self, QObject* filterObj ```
void q_scilexeridl_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerIDL* self, QObject* obj ```
void q_scilexeridl_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexeridl_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerIDL* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexeridl_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexeridl_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexeridl_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerIDL* self ```
void q_scilexeridl_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerIDL* self ```
void q_scilexeridl_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerIDL* self, const char* name, QVariant* value ```
bool q_scilexeridl_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerIDL* self, const char* name ```
QVariant* q_scilexeridl_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerIDL* self ```
const char** q_scilexeridl_dynamic_property_names(void* self) {
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
/// ``` QsciLexerIDL* self ```
QBindingStorage* q_scilexeridl_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerIDL* self ```
QBindingStorage* q_scilexeridl_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerIDL* self ```
void q_scilexeridl_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexerIDL* self, void (*slot)(QObject*) ```
void q_scilexeridl_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerIDL* self ```
QObject* q_scilexeridl_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerIDL* self, const char* classname ```
bool q_scilexeridl_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerIDL* self ```
void q_scilexeridl_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerIDL* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexeridl_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexeridl_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerIDL* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexeridl_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerIDL* self, QObject* param1 ```
void q_scilexeridl_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexerIDL* self, void (*slot)(QObject*, QObject*) ```
void q_scilexeridl_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setFoldAtElse)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, bool fold ```
void q_scilexeridl_set_fold_at_else(void* self, bool fold) {
    QsciLexerIDL_SetFoldAtElse((QsciLexerIDL*)self, fold);
}

/// Inherited from QsciLexerCPP
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, bool fold ```
void q_scilexeridl_qbase_set_fold_at_else(void* self, bool fold) {
    QsciLexerIDL_QBaseSetFoldAtElse((QsciLexerIDL*)self, fold);
}

/// Inherited from QsciLexerCPP
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, void (*slot)(QsciLexerIDL*, bool) ```
void q_scilexeridl_on_set_fold_at_else(void* self, void (*slot)(void*, bool)) {
    QsciLexerIDL_OnSetFoldAtElse((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setFoldComments)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, bool fold ```
void q_scilexeridl_set_fold_comments(void* self, bool fold) {
    QsciLexerIDL_SetFoldComments((QsciLexerIDL*)self, fold);
}

/// Inherited from QsciLexerCPP
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, bool fold ```
void q_scilexeridl_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerIDL_QBaseSetFoldComments((QsciLexerIDL*)self, fold);
}

/// Inherited from QsciLexerCPP
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, void (*slot)(QsciLexerIDL*, bool) ```
void q_scilexeridl_on_set_fold_comments(void* self, void (*slot)(void*, bool)) {
    QsciLexerIDL_OnSetFoldComments((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setFoldCompact)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, bool fold ```
void q_scilexeridl_set_fold_compact(void* self, bool fold) {
    QsciLexerIDL_SetFoldCompact((QsciLexerIDL*)self, fold);
}

/// Inherited from QsciLexerCPP
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, bool fold ```
void q_scilexeridl_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerIDL_QBaseSetFoldCompact((QsciLexerIDL*)self, fold);
}

/// Inherited from QsciLexerCPP
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, void (*slot)(QsciLexerIDL*, bool) ```
void q_scilexeridl_on_set_fold_compact(void* self, void (*slot)(void*, bool)) {
    QsciLexerIDL_OnSetFoldCompact((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setFoldPreprocessor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, bool fold ```
void q_scilexeridl_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerIDL_SetFoldPreprocessor((QsciLexerIDL*)self, fold);
}

/// Inherited from QsciLexerCPP
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, bool fold ```
void q_scilexeridl_qbase_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerIDL_QBaseSetFoldPreprocessor((QsciLexerIDL*)self, fold);
}

/// Inherited from QsciLexerCPP
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, void (*slot)(QsciLexerIDL*, bool) ```
void q_scilexeridl_on_set_fold_preprocessor(void* self, void (*slot)(void*, bool)) {
    QsciLexerIDL_OnSetFoldPreprocessor((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setStylePreprocessor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, bool style ```
void q_scilexeridl_set_style_preprocessor(void* self, bool style) {
    QsciLexerIDL_SetStylePreprocessor((QsciLexerIDL*)self, style);
}

/// Inherited from QsciLexerCPP
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, bool style ```
void q_scilexeridl_qbase_set_style_preprocessor(void* self, bool style) {
    QsciLexerIDL_QBaseSetStylePreprocessor((QsciLexerIDL*)self, style);
}

/// Inherited from QsciLexerCPP
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, void (*slot)(QsciLexerIDL*, bool) ```
void q_scilexeridl_on_set_style_preprocessor(void* self, void (*slot)(void*, bool)) {
    QsciLexerIDL_OnSetStylePreprocessor((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexer)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self ```
const char* q_scilexeridl_lexer(void* self) {
    return QsciLexerIDL_Lexer((QsciLexerIDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self ```
const char* q_scilexeridl_qbase_lexer(void* self) {
    return QsciLexerIDL_QBaseLexer((QsciLexerIDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, const char* (*slot)() ```
void q_scilexeridl_on_lexer(void* self, const char* (*slot)()) {
    QsciLexerIDL_OnLexer((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self ```
int32_t q_scilexeridl_lexer_id(void* self) {
    return QsciLexerIDL_LexerId((QsciLexerIDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self ```
int32_t q_scilexeridl_qbase_lexer_id(void* self) {
    return QsciLexerIDL_QBaseLexerId((QsciLexerIDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, int32_t (*slot)() ```
void q_scilexeridl_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerIDL_OnLexerId((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self ```
const char* q_scilexeridl_auto_completion_fillups(void* self) {
    return QsciLexerIDL_AutoCompletionFillups((QsciLexerIDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self ```
const char* q_scilexeridl_qbase_auto_completion_fillups(void* self) {
    return QsciLexerIDL_QBaseAutoCompletionFillups((QsciLexerIDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, const char* (*slot)() ```
void q_scilexeridl_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerIDL_OnAutoCompletionFillups((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self ```
const char** q_scilexeridl_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerIDL_AutoCompletionWordSeparators((QsciLexerIDL*)self);
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
/// ``` QsciLexerIDL* self ```
const char** q_scilexeridl_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerIDL_QBaseAutoCompletionWordSeparators((QsciLexerIDL*)self);
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
/// ``` QsciLexerIDL* self, const char** (*slot)() ```
void q_scilexeridl_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerIDL_OnAutoCompletionWordSeparators((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, int* style ```
const char* q_scilexeridl_block_end(void* self, int* style) {
    return QsciLexerIDL_BlockEnd((QsciLexerIDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, int* style ```
const char* q_scilexeridl_qbase_block_end(void* self, int* style) {
    return QsciLexerIDL_QBaseBlockEnd((QsciLexerIDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, const char* (*slot)(QsciLexerIDL*, int*) ```
void q_scilexeridl_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerIDL_OnBlockEnd((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self ```
int32_t q_scilexeridl_block_lookback(void* self) {
    return QsciLexerIDL_BlockLookback((QsciLexerIDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self ```
int32_t q_scilexeridl_qbase_block_lookback(void* self) {
    return QsciLexerIDL_QBaseBlockLookback((QsciLexerIDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, int32_t (*slot)() ```
void q_scilexeridl_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerIDL_OnBlockLookback((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, int* style ```
const char* q_scilexeridl_block_start(void* self, int* style) {
    return QsciLexerIDL_BlockStart((QsciLexerIDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, int* style ```
const char* q_scilexeridl_qbase_block_start(void* self, int* style) {
    return QsciLexerIDL_QBaseBlockStart((QsciLexerIDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, const char* (*slot)(QsciLexerIDL*, int*) ```
void q_scilexeridl_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerIDL_OnBlockStart((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, int* style ```
const char* q_scilexeridl_block_start_keyword(void* self, int* style) {
    return QsciLexerIDL_BlockStartKeyword((QsciLexerIDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, int* style ```
const char* q_scilexeridl_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerIDL_QBaseBlockStartKeyword((QsciLexerIDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, const char* (*slot)(QsciLexerIDL*, int*) ```
void q_scilexeridl_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerIDL_OnBlockStartKeyword((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#braceStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self ```
int32_t q_scilexeridl_brace_style(void* self) {
    return QsciLexerIDL_BraceStyle((QsciLexerIDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self ```
int32_t q_scilexeridl_qbase_brace_style(void* self) {
    return QsciLexerIDL_QBaseBraceStyle((QsciLexerIDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, int32_t (*slot)() ```
void q_scilexeridl_on_brace_style(void* self, int32_t (*slot)()) {
    QsciLexerIDL_OnBraceStyle((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self ```
bool q_scilexeridl_case_sensitive(void* self) {
    return QsciLexerIDL_CaseSensitive((QsciLexerIDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self ```
bool q_scilexeridl_qbase_case_sensitive(void* self) {
    return QsciLexerIDL_QBaseCaseSensitive((QsciLexerIDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, bool (*slot)() ```
void q_scilexeridl_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerIDL_OnCaseSensitive((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, int style ```
QColor* q_scilexeridl_color(void* self, int style) {
    return QsciLexerIDL_Color((QsciLexerIDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, int style ```
QColor* q_scilexeridl_qbase_color(void* self, int style) {
    return QsciLexerIDL_QBaseColor((QsciLexerIDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, QColor* (*slot)(QsciLexerIDL*, int) ```
void q_scilexeridl_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerIDL_OnColor((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, int style ```
bool q_scilexeridl_eol_fill(void* self, int style) {
    return QsciLexerIDL_EolFill((QsciLexerIDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, int style ```
bool q_scilexeridl_qbase_eol_fill(void* self, int style) {
    return QsciLexerIDL_QBaseEolFill((QsciLexerIDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, bool (*slot)(QsciLexerIDL*, int) ```
void q_scilexeridl_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerIDL_OnEolFill((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, int style ```
QFont* q_scilexeridl_font(void* self, int style) {
    return QsciLexerIDL_Font((QsciLexerIDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, int style ```
QFont* q_scilexeridl_qbase_font(void* self, int style) {
    return QsciLexerIDL_QBaseFont((QsciLexerIDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, QFont* (*slot)(QsciLexerIDL*, int) ```
void q_scilexeridl_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerIDL_OnFont((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self ```
int32_t q_scilexeridl_indentation_guide_view(void* self) {
    return QsciLexerIDL_IndentationGuideView((QsciLexerIDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self ```
int32_t q_scilexeridl_qbase_indentation_guide_view(void* self) {
    return QsciLexerIDL_QBaseIndentationGuideView((QsciLexerIDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, int32_t (*slot)() ```
void q_scilexeridl_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerIDL_OnIndentationGuideView((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self ```
int32_t q_scilexeridl_default_style(void* self) {
    return QsciLexerIDL_DefaultStyle((QsciLexerIDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self ```
int32_t q_scilexeridl_qbase_default_style(void* self) {
    return QsciLexerIDL_QBaseDefaultStyle((QsciLexerIDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, int32_t (*slot)() ```
void q_scilexeridl_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerIDL_OnDefaultStyle((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, int style ```
QColor* q_scilexeridl_paper(void* self, int style) {
    return QsciLexerIDL_Paper((QsciLexerIDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, int style ```
QColor* q_scilexeridl_qbase_paper(void* self, int style) {
    return QsciLexerIDL_QBasePaper((QsciLexerIDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, QColor* (*slot)(QsciLexerIDL*, int) ```
void q_scilexeridl_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerIDL_OnPaper((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, int style ```
QColor* q_scilexeridl_default_color_with_style(void* self, int style) {
    return QsciLexerIDL_DefaultColorWithStyle((QsciLexerIDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, int style ```
QColor* q_scilexeridl_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerIDL_QBaseDefaultColorWithStyle((QsciLexerIDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, QColor* (*slot)(QsciLexerIDL*, int) ```
void q_scilexeridl_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerIDL_OnDefaultColorWithStyle((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, int style ```
bool q_scilexeridl_default_eol_fill(void* self, int style) {
    return QsciLexerIDL_DefaultEolFill((QsciLexerIDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, int style ```
bool q_scilexeridl_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerIDL_QBaseDefaultEolFill((QsciLexerIDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, bool (*slot)(QsciLexerIDL*, int) ```
void q_scilexeridl_on_default_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerIDL_OnDefaultEolFill((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, int style ```
QFont* q_scilexeridl_default_font_with_style(void* self, int style) {
    return QsciLexerIDL_DefaultFontWithStyle((QsciLexerIDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, int style ```
QFont* q_scilexeridl_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerIDL_QBaseDefaultFontWithStyle((QsciLexerIDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, QFont* (*slot)(QsciLexerIDL*, int) ```
void q_scilexeridl_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerIDL_OnDefaultFontWithStyle((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, int style ```
QColor* q_scilexeridl_default_paper_with_style(void* self, int style) {
    return QsciLexerIDL_DefaultPaperWithStyle((QsciLexerIDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, int style ```
QColor* q_scilexeridl_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerIDL_QBaseDefaultPaperWithStyle((QsciLexerIDL*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, QColor* (*slot)(QsciLexerIDL*, int) ```
void q_scilexeridl_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerIDL_OnDefaultPaperWithStyle((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, QsciScintilla* editor ```
void q_scilexeridl_set_editor(void* self, void* editor) {
    QsciLexerIDL_SetEditor((QsciLexerIDL*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, QsciScintilla* editor ```
void q_scilexeridl_qbase_set_editor(void* self, void* editor) {
    QsciLexerIDL_QBaseSetEditor((QsciLexerIDL*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, void (*slot)(QsciLexerIDL*, QsciScintilla*) ```
void q_scilexeridl_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerIDL_OnSetEditor((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#refreshProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self ```
void q_scilexeridl_refresh_properties(void* self) {
    QsciLexerIDL_RefreshProperties((QsciLexerIDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self ```
void q_scilexeridl_qbase_refresh_properties(void* self) {
    QsciLexerIDL_QBaseRefreshProperties((QsciLexerIDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, void (*slot)() ```
void q_scilexeridl_on_refresh_properties(void* self, void (*slot)()) {
    QsciLexerIDL_OnRefreshProperties((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self ```
int32_t q_scilexeridl_style_bits_needed(void* self) {
    return QsciLexerIDL_StyleBitsNeeded((QsciLexerIDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self ```
int32_t q_scilexeridl_qbase_style_bits_needed(void* self) {
    return QsciLexerIDL_QBaseStyleBitsNeeded((QsciLexerIDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, int32_t (*slot)() ```
void q_scilexeridl_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerIDL_OnStyleBitsNeeded((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self ```
const char* q_scilexeridl_word_characters(void* self) {
    return QsciLexerIDL_WordCharacters((QsciLexerIDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self ```
const char* q_scilexeridl_qbase_word_characters(void* self) {
    return QsciLexerIDL_QBaseWordCharacters((QsciLexerIDL*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, const char* (*slot)() ```
void q_scilexeridl_on_word_characters(void* self, const char* (*slot)()) {
    QsciLexerIDL_OnWordCharacters((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, int autoindentstyle ```
void q_scilexeridl_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerIDL_SetAutoIndentStyle((QsciLexerIDL*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, int autoindentstyle ```
void q_scilexeridl_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerIDL_QBaseSetAutoIndentStyle((QsciLexerIDL*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, void (*slot)(QsciLexerIDL*, int) ```
void q_scilexeridl_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerIDL_OnSetAutoIndentStyle((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, QColor* c, int style ```
void q_scilexeridl_set_color(void* self, void* c, int style) {
    QsciLexerIDL_SetColor((QsciLexerIDL*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, QColor* c, int style ```
void q_scilexeridl_qbase_set_color(void* self, void* c, int style) {
    QsciLexerIDL_QBaseSetColor((QsciLexerIDL*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, void (*slot)(QsciLexerIDL*, QColor*, int) ```
void q_scilexeridl_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerIDL_OnSetColor((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, bool eoffill, int style ```
void q_scilexeridl_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerIDL_SetEolFill((QsciLexerIDL*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, bool eoffill, int style ```
void q_scilexeridl_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerIDL_QBaseSetEolFill((QsciLexerIDL*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, void (*slot)(QsciLexerIDL*, bool, int) ```
void q_scilexeridl_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerIDL_OnSetEolFill((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, QFont* f, int style ```
void q_scilexeridl_set_font(void* self, void* f, int style) {
    QsciLexerIDL_SetFont((QsciLexerIDL*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, QFont* f, int style ```
void q_scilexeridl_qbase_set_font(void* self, void* f, int style) {
    QsciLexerIDL_QBaseSetFont((QsciLexerIDL*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, void (*slot)(QsciLexerIDL*, QFont*, int) ```
void q_scilexeridl_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerIDL_OnSetFont((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, QColor* c, int style ```
void q_scilexeridl_set_paper(void* self, void* c, int style) {
    QsciLexerIDL_SetPaper((QsciLexerIDL*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, QColor* c, int style ```
void q_scilexeridl_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerIDL_QBaseSetPaper((QsciLexerIDL*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, void (*slot)(QsciLexerIDL*, QColor*, int) ```
void q_scilexeridl_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerIDL_OnSetPaper((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, QSettings* qs, const char* prefix ```
bool q_scilexeridl_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerIDL_ReadProperties((QsciLexerIDL*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, QSettings* qs, const char* prefix ```
bool q_scilexeridl_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerIDL_QBaseReadProperties((QsciLexerIDL*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, bool (*slot)(QsciLexerIDL*, QSettings*, const char*) ```
void q_scilexeridl_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerIDL_OnReadProperties((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, QSettings* qs, const char* prefix ```
bool q_scilexeridl_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerIDL_WriteProperties((QsciLexerIDL*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, QSettings* qs, const char* prefix ```
bool q_scilexeridl_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerIDL_QBaseWriteProperties((QsciLexerIDL*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, bool (*slot)(QsciLexerIDL*, QSettings*, const char*) ```
void q_scilexeridl_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerIDL_OnWriteProperties((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, QEvent* event ```
bool q_scilexeridl_event(void* self, void* event) {
    return QsciLexerIDL_Event((QsciLexerIDL*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, QEvent* event ```
bool q_scilexeridl_qbase_event(void* self, void* event) {
    return QsciLexerIDL_QBaseEvent((QsciLexerIDL*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, bool (*slot)(QsciLexerIDL*, QEvent*) ```
void q_scilexeridl_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerIDL_OnEvent((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, QObject* watched, QEvent* event ```
bool q_scilexeridl_event_filter(void* self, void* watched, void* event) {
    return QsciLexerIDL_EventFilter((QsciLexerIDL*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, QObject* watched, QEvent* event ```
bool q_scilexeridl_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerIDL_QBaseEventFilter((QsciLexerIDL*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, bool (*slot)(QsciLexerIDL*, QObject*, QEvent*) ```
void q_scilexeridl_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerIDL_OnEventFilter((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, QTimerEvent* event ```
void q_scilexeridl_timer_event(void* self, void* event) {
    QsciLexerIDL_TimerEvent((QsciLexerIDL*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, QTimerEvent* event ```
void q_scilexeridl_qbase_timer_event(void* self, void* event) {
    QsciLexerIDL_QBaseTimerEvent((QsciLexerIDL*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, void (*slot)(QsciLexerIDL*, QTimerEvent*) ```
void q_scilexeridl_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerIDL_OnTimerEvent((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, QChildEvent* event ```
void q_scilexeridl_child_event(void* self, void* event) {
    QsciLexerIDL_ChildEvent((QsciLexerIDL*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, QChildEvent* event ```
void q_scilexeridl_qbase_child_event(void* self, void* event) {
    QsciLexerIDL_QBaseChildEvent((QsciLexerIDL*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, void (*slot)(QsciLexerIDL*, QChildEvent*) ```
void q_scilexeridl_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerIDL_OnChildEvent((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, QEvent* event ```
void q_scilexeridl_custom_event(void* self, void* event) {
    QsciLexerIDL_CustomEvent((QsciLexerIDL*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, QEvent* event ```
void q_scilexeridl_qbase_custom_event(void* self, void* event) {
    QsciLexerIDL_QBaseCustomEvent((QsciLexerIDL*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, void (*slot)(QsciLexerIDL*, QEvent*) ```
void q_scilexeridl_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerIDL_OnCustomEvent((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, QMetaMethod* signal ```
void q_scilexeridl_connect_notify(void* self, void* signal) {
    QsciLexerIDL_ConnectNotify((QsciLexerIDL*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, QMetaMethod* signal ```
void q_scilexeridl_qbase_connect_notify(void* self, void* signal) {
    QsciLexerIDL_QBaseConnectNotify((QsciLexerIDL*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, void (*slot)(QsciLexerIDL*, QMetaMethod*) ```
void q_scilexeridl_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerIDL_OnConnectNotify((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, QMetaMethod* signal ```
void q_scilexeridl_disconnect_notify(void* self, void* signal) {
    QsciLexerIDL_DisconnectNotify((QsciLexerIDL*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, QMetaMethod* signal ```
void q_scilexeridl_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerIDL_QBaseDisconnectNotify((QsciLexerIDL*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, void (*slot)(QsciLexerIDL*, QMetaMethod*) ```
void q_scilexeridl_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerIDL_OnDisconnectNotify((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self ```
QObject* q_scilexeridl_sender(void* self) {
    return QsciLexerIDL_Sender((QsciLexerIDL*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self ```
QObject* q_scilexeridl_qbase_sender(void* self) {
    return QsciLexerIDL_QBaseSender((QsciLexerIDL*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, QObject* (*slot)() ```
void q_scilexeridl_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerIDL_OnSender((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self ```
int32_t q_scilexeridl_sender_signal_index(void* self) {
    return QsciLexerIDL_SenderSignalIndex((QsciLexerIDL*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self ```
int32_t q_scilexeridl_qbase_sender_signal_index(void* self) {
    return QsciLexerIDL_QBaseSenderSignalIndex((QsciLexerIDL*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, int32_t (*slot)() ```
void q_scilexeridl_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerIDL_OnSenderSignalIndex((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, const char* signal ```
int32_t q_scilexeridl_receivers(void* self, const char* signal) {
    return QsciLexerIDL_Receivers((QsciLexerIDL*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, const char* signal ```
int32_t q_scilexeridl_qbase_receivers(void* self, const char* signal) {
    return QsciLexerIDL_QBaseReceivers((QsciLexerIDL*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, int32_t (*slot)(QsciLexerIDL*, const char*) ```
void q_scilexeridl_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerIDL_OnReceivers((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerIDL* self, QMetaMethod* signal ```
bool q_scilexeridl_is_signal_connected(void* self, void* signal) {
    return QsciLexerIDL_IsSignalConnected((QsciLexerIDL*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerIDL* self, QMetaMethod* signal ```
bool q_scilexeridl_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerIDL_QBaseIsSignalConnected((QsciLexerIDL*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerIDL* self, bool (*slot)(QsciLexerIDL*, QMetaMethod*) ```
void q_scilexeridl_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerIDL_OnIsSignalConnected((QsciLexerIDL*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexerIDL* self ```
void q_scilexeridl_delete(void* self) {
    QsciLexerIDL_Delete((QsciLexerIDL*)(self));
}