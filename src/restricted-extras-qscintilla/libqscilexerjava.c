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
#include "libqscilexerjava.hpp"
#include "libqscilexerjava.h"

/// https://doc.qt.io/qt-6/qscilexerjava.html

/// q_scilexerjava_new constructs a new QsciLexerJava object.
///
///
QsciLexerJava* q_scilexerjava_new() {
    return QsciLexerJava_new();
}

/// q_scilexerjava_new2 constructs a new QsciLexerJava object.
///
/// ``` QObject* parent ```
QsciLexerJava* q_scilexerjava_new2(void* parent) {
    return QsciLexerJava_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerJava* self ```
QMetaObject* q_scilexerjava_meta_object(void* self) {
    return QsciLexerJava_MetaObject((QsciLexerJava*)self);
}

/// ``` QsciLexerJava* self, const char* param1 ```
void* q_scilexerjava_metacast(void* self, const char* param1) {
    return QsciLexerJava_Metacast((QsciLexerJava*)self, param1);
}

/// ``` QsciLexerJava* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerjava_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerJava_Metacall((QsciLexerJava*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerJava* self, int32_t (*slot)(QsciLexerJava*, enum QMetaObject__Call, int, void*) ```
void q_scilexerjava_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerJava_OnMetacall((QsciLexerJava*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerJava* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerjava_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerJava_QBaseMetacall((QsciLexerJava*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexerjava_tr(const char* s) {
    libqt_string _str = QsciLexerJava_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerjava.html#language)
///
/// ``` QsciLexerJava* self ```
const char* q_scilexerjava_language(void* self) {
    return QsciLexerJava_Language((QsciLexerJava*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerjava.html#keywords)
///
/// ``` QsciLexerJava* self, int set ```
const char* q_scilexerjava_keywords(void* self, int set) {
    return QsciLexerJava_Keywords((QsciLexerJava*)self, set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexerjava_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerJava_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexerjava_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerJava_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#defaultColor)
///
/// ``` QsciLexerJava* self, int style ```
QColor* q_scilexerjava_default_color(void* self, int style) {
    return QsciLexerCPP_DefaultColor((QsciLexerCPP*)self, style);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#defaultFont)
///
/// ``` QsciLexerJava* self, int style ```
QFont* q_scilexerjava_default_font(void* self, int style) {
    return QsciLexerCPP_DefaultFont((QsciLexerCPP*)self, style);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#defaultPaper)
///
/// ``` QsciLexerJava* self, int style ```
QColor* q_scilexerjava_default_paper(void* self, int style) {
    return QsciLexerCPP_DefaultPaper((QsciLexerCPP*)self, style);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#foldAtElse)
///
/// ``` QsciLexerJava* self ```
bool q_scilexerjava_fold_at_else(void* self) {
    return QsciLexerCPP_FoldAtElse((QsciLexerCPP*)self);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#foldComments)
///
/// ``` QsciLexerJava* self ```
bool q_scilexerjava_fold_comments(void* self) {
    return QsciLexerCPP_FoldComments((QsciLexerCPP*)self);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#foldCompact)
///
/// ``` QsciLexerJava* self ```
bool q_scilexerjava_fold_compact(void* self) {
    return QsciLexerCPP_FoldCompact((QsciLexerCPP*)self);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#foldPreprocessor)
///
/// ``` QsciLexerJava* self ```
bool q_scilexerjava_fold_preprocessor(void* self) {
    return QsciLexerCPP_FoldPreprocessor((QsciLexerCPP*)self);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#stylePreprocessor)
///
/// ``` QsciLexerJava* self ```
bool q_scilexerjava_style_preprocessor(void* self) {
    return QsciLexerCPP_StylePreprocessor((QsciLexerCPP*)self);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setDollarsAllowed)
///
/// ``` QsciLexerJava* self, bool allowed ```
void q_scilexerjava_set_dollars_allowed(void* self, bool allowed) {
    QsciLexerCPP_SetDollarsAllowed((QsciLexerCPP*)self, allowed);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#dollarsAllowed)
///
/// ``` QsciLexerJava* self ```
bool q_scilexerjava_dollars_allowed(void* self) {
    return QsciLexerCPP_DollarsAllowed((QsciLexerCPP*)self);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setHighlightTripleQuotedStrings)
///
/// ``` QsciLexerJava* self, bool enabled ```
void q_scilexerjava_set_highlight_triple_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightTripleQuotedStrings((QsciLexerCPP*)self, enabled);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#highlightTripleQuotedStrings)
///
/// ``` QsciLexerJava* self ```
bool q_scilexerjava_highlight_triple_quoted_strings(void* self) {
    return QsciLexerCPP_HighlightTripleQuotedStrings((QsciLexerCPP*)self);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setHighlightHashQuotedStrings)
///
/// ``` QsciLexerJava* self, bool enabled ```
void q_scilexerjava_set_highlight_hash_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightHashQuotedStrings((QsciLexerCPP*)self, enabled);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#highlightHashQuotedStrings)
///
/// ``` QsciLexerJava* self ```
bool q_scilexerjava_highlight_hash_quoted_strings(void* self) {
    return QsciLexerCPP_HighlightHashQuotedStrings((QsciLexerCPP*)self);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setHighlightBackQuotedStrings)
///
/// ``` QsciLexerJava* self, bool enabled ```
void q_scilexerjava_set_highlight_back_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightBackQuotedStrings((QsciLexerCPP*)self, enabled);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#highlightBackQuotedStrings)
///
/// ``` QsciLexerJava* self ```
bool q_scilexerjava_highlight_back_quoted_strings(void* self) {
    return QsciLexerCPP_HighlightBackQuotedStrings((QsciLexerCPP*)self);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setHighlightEscapeSequences)
///
/// ``` QsciLexerJava* self, bool enabled ```
void q_scilexerjava_set_highlight_escape_sequences(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightEscapeSequences((QsciLexerCPP*)self, enabled);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#highlightEscapeSequences)
///
/// ``` QsciLexerJava* self ```
bool q_scilexerjava_highlight_escape_sequences(void* self) {
    return QsciLexerCPP_HighlightEscapeSequences((QsciLexerCPP*)self);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setVerbatimStringEscapeSequencesAllowed)
///
/// ``` QsciLexerJava* self, bool allowed ```
void q_scilexerjava_set_verbatim_string_escape_sequences_allowed(void* self, bool allowed) {
    QsciLexerCPP_SetVerbatimStringEscapeSequencesAllowed((QsciLexerCPP*)self, allowed);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#verbatimStringEscapeSequencesAllowed)
///
/// ``` QsciLexerJava* self ```
bool q_scilexerjava_verbatim_string_escape_sequences_allowed(void* self) {
    return QsciLexerCPP_VerbatimStringEscapeSequencesAllowed((QsciLexerCPP*)self);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#blockEnd)
///
/// ``` QsciLexerJava* self, int* style ```
const char* q_scilexerjava_block_end1(void* self, int* style) {
    return QsciLexerCPP_BlockEnd1((QsciLexerCPP*)self, style);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#blockStart)
///
/// ``` QsciLexerJava* self, int* style ```
const char* q_scilexerjava_block_start1(void* self, int* style) {
    return QsciLexerCPP_BlockStart1((QsciLexerCPP*)self, style);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#blockStartKeyword)
///
/// ``` QsciLexerJava* self, int* style ```
const char* q_scilexerjava_block_start_keyword1(void* self, int* style) {
    return QsciLexerCPP_BlockStartKeyword1((QsciLexerCPP*)self, style);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerJava* self ```
QsciAbstractAPIs* q_scilexerjava_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerJava* self ```
int32_t q_scilexerjava_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerJava* self ```
QsciScintilla* q_scilexerjava_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerJava* self, QsciAbstractAPIs* apis ```
void q_scilexerjava_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerJava* self, QColor* c ```
void q_scilexerjava_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerJava* self, QFont* f ```
void q_scilexerjava_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerJava* self, QColor* c ```
void q_scilexerjava_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerJava* self, QSettings* qs ```
bool q_scilexerjava_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerJava* self, QSettings* qs ```
bool q_scilexerjava_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerJava* self, QColor* c, int style ```
void q_scilexerjava_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerJava* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerjava_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerJava* self, bool eolfilled, int style ```
void q_scilexerjava_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerJava* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexerjava_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerJava* self, QFont* f, int style ```
void q_scilexerjava_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerJava* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexerjava_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerJava* self, QColor* c, int style ```
void q_scilexerjava_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerJava* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerjava_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerJava* self, const char* prop, const char* val ```
void q_scilexerjava_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerJava* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexerjava_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerJava* self, QSettings* qs, const char* prefix ```
bool q_scilexerjava_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerJava* self, QSettings* qs, const char* prefix ```
bool q_scilexerjava_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerJava* self ```
const char* q_scilexerjava_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerJava* self, const char* name ```
void q_scilexerjava_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerJava* self ```
bool q_scilexerjava_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerJava* self ```
bool q_scilexerjava_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerJava* self ```
bool q_scilexerjava_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerJava* self ```
bool q_scilexerjava_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerJava* self, bool b ```
bool q_scilexerjava_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerJava* self ```
QThread* q_scilexerjava_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerJava* self, QThread* thread ```
void q_scilexerjava_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerJava* self, int interval ```
int32_t q_scilexerjava_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerJava* self, int id ```
void q_scilexerjava_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerJava* self ```
libqt_list /* of QObject* */ q_scilexerjava_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerJava* self, QObject* parent ```
void q_scilexerjava_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerJava* self, QObject* filterObj ```
void q_scilexerjava_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerJava* self, QObject* obj ```
void q_scilexerjava_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexerjava_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerJava* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexerjava_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexerjava_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexerjava_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerJava* self ```
void q_scilexerjava_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerJava* self ```
void q_scilexerjava_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerJava* self, const char* name, QVariant* value ```
bool q_scilexerjava_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerJava* self, const char* name ```
QVariant* q_scilexerjava_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerJava* self ```
const char** q_scilexerjava_dynamic_property_names(void* self) {
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
/// ``` QsciLexerJava* self ```
QBindingStorage* q_scilexerjava_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerJava* self ```
QBindingStorage* q_scilexerjava_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerJava* self ```
void q_scilexerjava_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexerJava* self, void (*slot)(QObject*) ```
void q_scilexerjava_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerJava* self ```
QObject* q_scilexerjava_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerJava* self, const char* classname ```
bool q_scilexerjava_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerJava* self ```
void q_scilexerjava_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerJava* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexerjava_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerjava_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerJava* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerjava_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerJava* self, QObject* param1 ```
void q_scilexerjava_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexerJava* self, void (*slot)(QObject*, QObject*) ```
void q_scilexerjava_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setFoldAtElse)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, bool fold ```
void q_scilexerjava_set_fold_at_else(void* self, bool fold) {
    QsciLexerJava_SetFoldAtElse((QsciLexerJava*)self, fold);
}

/// Inherited from QsciLexerCPP
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, bool fold ```
void q_scilexerjava_qbase_set_fold_at_else(void* self, bool fold) {
    QsciLexerJava_QBaseSetFoldAtElse((QsciLexerJava*)self, fold);
}

/// Inherited from QsciLexerCPP
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, void (*slot)(QsciLexerJava*, bool) ```
void q_scilexerjava_on_set_fold_at_else(void* self, void (*slot)(void*, bool)) {
    QsciLexerJava_OnSetFoldAtElse((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setFoldComments)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, bool fold ```
void q_scilexerjava_set_fold_comments(void* self, bool fold) {
    QsciLexerJava_SetFoldComments((QsciLexerJava*)self, fold);
}

/// Inherited from QsciLexerCPP
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, bool fold ```
void q_scilexerjava_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerJava_QBaseSetFoldComments((QsciLexerJava*)self, fold);
}

/// Inherited from QsciLexerCPP
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, void (*slot)(QsciLexerJava*, bool) ```
void q_scilexerjava_on_set_fold_comments(void* self, void (*slot)(void*, bool)) {
    QsciLexerJava_OnSetFoldComments((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setFoldCompact)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, bool fold ```
void q_scilexerjava_set_fold_compact(void* self, bool fold) {
    QsciLexerJava_SetFoldCompact((QsciLexerJava*)self, fold);
}

/// Inherited from QsciLexerCPP
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, bool fold ```
void q_scilexerjava_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerJava_QBaseSetFoldCompact((QsciLexerJava*)self, fold);
}

/// Inherited from QsciLexerCPP
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, void (*slot)(QsciLexerJava*, bool) ```
void q_scilexerjava_on_set_fold_compact(void* self, void (*slot)(void*, bool)) {
    QsciLexerJava_OnSetFoldCompact((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setFoldPreprocessor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, bool fold ```
void q_scilexerjava_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerJava_SetFoldPreprocessor((QsciLexerJava*)self, fold);
}

/// Inherited from QsciLexerCPP
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, bool fold ```
void q_scilexerjava_qbase_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerJava_QBaseSetFoldPreprocessor((QsciLexerJava*)self, fold);
}

/// Inherited from QsciLexerCPP
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, void (*slot)(QsciLexerJava*, bool) ```
void q_scilexerjava_on_set_fold_preprocessor(void* self, void (*slot)(void*, bool)) {
    QsciLexerJava_OnSetFoldPreprocessor((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setStylePreprocessor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, bool style ```
void q_scilexerjava_set_style_preprocessor(void* self, bool style) {
    QsciLexerJava_SetStylePreprocessor((QsciLexerJava*)self, style);
}

/// Inherited from QsciLexerCPP
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, bool style ```
void q_scilexerjava_qbase_set_style_preprocessor(void* self, bool style) {
    QsciLexerJava_QBaseSetStylePreprocessor((QsciLexerJava*)self, style);
}

/// Inherited from QsciLexerCPP
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, void (*slot)(QsciLexerJava*, bool) ```
void q_scilexerjava_on_set_style_preprocessor(void* self, void (*slot)(void*, bool)) {
    QsciLexerJava_OnSetStylePreprocessor((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexer)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self ```
const char* q_scilexerjava_lexer(void* self) {
    return QsciLexerJava_Lexer((QsciLexerJava*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self ```
const char* q_scilexerjava_qbase_lexer(void* self) {
    return QsciLexerJava_QBaseLexer((QsciLexerJava*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, const char* (*slot)() ```
void q_scilexerjava_on_lexer(void* self, const char* (*slot)()) {
    QsciLexerJava_OnLexer((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self ```
int32_t q_scilexerjava_lexer_id(void* self) {
    return QsciLexerJava_LexerId((QsciLexerJava*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self ```
int32_t q_scilexerjava_qbase_lexer_id(void* self) {
    return QsciLexerJava_QBaseLexerId((QsciLexerJava*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, int32_t (*slot)() ```
void q_scilexerjava_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerJava_OnLexerId((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self ```
const char* q_scilexerjava_auto_completion_fillups(void* self) {
    return QsciLexerJava_AutoCompletionFillups((QsciLexerJava*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self ```
const char* q_scilexerjava_qbase_auto_completion_fillups(void* self) {
    return QsciLexerJava_QBaseAutoCompletionFillups((QsciLexerJava*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, const char* (*slot)() ```
void q_scilexerjava_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerJava_OnAutoCompletionFillups((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self ```
const char** q_scilexerjava_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerJava_AutoCompletionWordSeparators((QsciLexerJava*)self);
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
/// ``` QsciLexerJava* self ```
const char** q_scilexerjava_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerJava_QBaseAutoCompletionWordSeparators((QsciLexerJava*)self);
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
/// ``` QsciLexerJava* self, const char** (*slot)() ```
void q_scilexerjava_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerJava_OnAutoCompletionWordSeparators((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, int* style ```
const char* q_scilexerjava_block_end(void* self, int* style) {
    return QsciLexerJava_BlockEnd((QsciLexerJava*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, int* style ```
const char* q_scilexerjava_qbase_block_end(void* self, int* style) {
    return QsciLexerJava_QBaseBlockEnd((QsciLexerJava*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, const char* (*slot)(QsciLexerJava*, int*) ```
void q_scilexerjava_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerJava_OnBlockEnd((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self ```
int32_t q_scilexerjava_block_lookback(void* self) {
    return QsciLexerJava_BlockLookback((QsciLexerJava*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self ```
int32_t q_scilexerjava_qbase_block_lookback(void* self) {
    return QsciLexerJava_QBaseBlockLookback((QsciLexerJava*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, int32_t (*slot)() ```
void q_scilexerjava_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerJava_OnBlockLookback((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, int* style ```
const char* q_scilexerjava_block_start(void* self, int* style) {
    return QsciLexerJava_BlockStart((QsciLexerJava*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, int* style ```
const char* q_scilexerjava_qbase_block_start(void* self, int* style) {
    return QsciLexerJava_QBaseBlockStart((QsciLexerJava*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, const char* (*slot)(QsciLexerJava*, int*) ```
void q_scilexerjava_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerJava_OnBlockStart((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, int* style ```
const char* q_scilexerjava_block_start_keyword(void* self, int* style) {
    return QsciLexerJava_BlockStartKeyword((QsciLexerJava*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, int* style ```
const char* q_scilexerjava_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerJava_QBaseBlockStartKeyword((QsciLexerJava*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, const char* (*slot)(QsciLexerJava*, int*) ```
void q_scilexerjava_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerJava_OnBlockStartKeyword((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#braceStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self ```
int32_t q_scilexerjava_brace_style(void* self) {
    return QsciLexerJava_BraceStyle((QsciLexerJava*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self ```
int32_t q_scilexerjava_qbase_brace_style(void* self) {
    return QsciLexerJava_QBaseBraceStyle((QsciLexerJava*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, int32_t (*slot)() ```
void q_scilexerjava_on_brace_style(void* self, int32_t (*slot)()) {
    QsciLexerJava_OnBraceStyle((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self ```
bool q_scilexerjava_case_sensitive(void* self) {
    return QsciLexerJava_CaseSensitive((QsciLexerJava*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self ```
bool q_scilexerjava_qbase_case_sensitive(void* self) {
    return QsciLexerJava_QBaseCaseSensitive((QsciLexerJava*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, bool (*slot)() ```
void q_scilexerjava_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerJava_OnCaseSensitive((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, int style ```
QColor* q_scilexerjava_color(void* self, int style) {
    return QsciLexerJava_Color((QsciLexerJava*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, int style ```
QColor* q_scilexerjava_qbase_color(void* self, int style) {
    return QsciLexerJava_QBaseColor((QsciLexerJava*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, QColor* (*slot)(QsciLexerJava*, int) ```
void q_scilexerjava_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerJava_OnColor((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, int style ```
bool q_scilexerjava_eol_fill(void* self, int style) {
    return QsciLexerJava_EolFill((QsciLexerJava*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, int style ```
bool q_scilexerjava_qbase_eol_fill(void* self, int style) {
    return QsciLexerJava_QBaseEolFill((QsciLexerJava*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, bool (*slot)(QsciLexerJava*, int) ```
void q_scilexerjava_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerJava_OnEolFill((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, int style ```
QFont* q_scilexerjava_font(void* self, int style) {
    return QsciLexerJava_Font((QsciLexerJava*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, int style ```
QFont* q_scilexerjava_qbase_font(void* self, int style) {
    return QsciLexerJava_QBaseFont((QsciLexerJava*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, QFont* (*slot)(QsciLexerJava*, int) ```
void q_scilexerjava_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerJava_OnFont((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self ```
int32_t q_scilexerjava_indentation_guide_view(void* self) {
    return QsciLexerJava_IndentationGuideView((QsciLexerJava*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self ```
int32_t q_scilexerjava_qbase_indentation_guide_view(void* self) {
    return QsciLexerJava_QBaseIndentationGuideView((QsciLexerJava*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, int32_t (*slot)() ```
void q_scilexerjava_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerJava_OnIndentationGuideView((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self ```
int32_t q_scilexerjava_default_style(void* self) {
    return QsciLexerJava_DefaultStyle((QsciLexerJava*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self ```
int32_t q_scilexerjava_qbase_default_style(void* self) {
    return QsciLexerJava_QBaseDefaultStyle((QsciLexerJava*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, int32_t (*slot)() ```
void q_scilexerjava_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerJava_OnDefaultStyle((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#description)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, int style ```
const char* q_scilexerjava_description(void* self, int style) {
    libqt_string _str = QsciLexerJava_Description((QsciLexerJava*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, int style ```
const char* q_scilexerjava_qbase_description(void* self, int style) {
    libqt_string _str = QsciLexerJava_QBaseDescription((QsciLexerJava*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, const char* (*slot)(QsciLexerJava*, int) ```
void q_scilexerjava_on_description(void* self, const char* (*slot)(void*, int)) {
    QsciLexerJava_OnDescription((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, int style ```
QColor* q_scilexerjava_paper(void* self, int style) {
    return QsciLexerJava_Paper((QsciLexerJava*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, int style ```
QColor* q_scilexerjava_qbase_paper(void* self, int style) {
    return QsciLexerJava_QBasePaper((QsciLexerJava*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, QColor* (*slot)(QsciLexerJava*, int) ```
void q_scilexerjava_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerJava_OnPaper((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, int style ```
QColor* q_scilexerjava_default_color_with_style(void* self, int style) {
    return QsciLexerJava_DefaultColorWithStyle((QsciLexerJava*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, int style ```
QColor* q_scilexerjava_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerJava_QBaseDefaultColorWithStyle((QsciLexerJava*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, QColor* (*slot)(QsciLexerJava*, int) ```
void q_scilexerjava_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerJava_OnDefaultColorWithStyle((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, int style ```
bool q_scilexerjava_default_eol_fill(void* self, int style) {
    return QsciLexerJava_DefaultEolFill((QsciLexerJava*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, int style ```
bool q_scilexerjava_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerJava_QBaseDefaultEolFill((QsciLexerJava*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, bool (*slot)(QsciLexerJava*, int) ```
void q_scilexerjava_on_default_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerJava_OnDefaultEolFill((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, int style ```
QFont* q_scilexerjava_default_font_with_style(void* self, int style) {
    return QsciLexerJava_DefaultFontWithStyle((QsciLexerJava*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, int style ```
QFont* q_scilexerjava_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerJava_QBaseDefaultFontWithStyle((QsciLexerJava*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, QFont* (*slot)(QsciLexerJava*, int) ```
void q_scilexerjava_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerJava_OnDefaultFontWithStyle((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, int style ```
QColor* q_scilexerjava_default_paper_with_style(void* self, int style) {
    return QsciLexerJava_DefaultPaperWithStyle((QsciLexerJava*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, int style ```
QColor* q_scilexerjava_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerJava_QBaseDefaultPaperWithStyle((QsciLexerJava*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, QColor* (*slot)(QsciLexerJava*, int) ```
void q_scilexerjava_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerJava_OnDefaultPaperWithStyle((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, QsciScintilla* editor ```
void q_scilexerjava_set_editor(void* self, void* editor) {
    QsciLexerJava_SetEditor((QsciLexerJava*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, QsciScintilla* editor ```
void q_scilexerjava_qbase_set_editor(void* self, void* editor) {
    QsciLexerJava_QBaseSetEditor((QsciLexerJava*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, void (*slot)(QsciLexerJava*, QsciScintilla*) ```
void q_scilexerjava_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerJava_OnSetEditor((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#refreshProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self ```
void q_scilexerjava_refresh_properties(void* self) {
    QsciLexerJava_RefreshProperties((QsciLexerJava*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self ```
void q_scilexerjava_qbase_refresh_properties(void* self) {
    QsciLexerJava_QBaseRefreshProperties((QsciLexerJava*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, void (*slot)() ```
void q_scilexerjava_on_refresh_properties(void* self, void (*slot)()) {
    QsciLexerJava_OnRefreshProperties((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self ```
int32_t q_scilexerjava_style_bits_needed(void* self) {
    return QsciLexerJava_StyleBitsNeeded((QsciLexerJava*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self ```
int32_t q_scilexerjava_qbase_style_bits_needed(void* self) {
    return QsciLexerJava_QBaseStyleBitsNeeded((QsciLexerJava*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, int32_t (*slot)() ```
void q_scilexerjava_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerJava_OnStyleBitsNeeded((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self ```
const char* q_scilexerjava_word_characters(void* self) {
    return QsciLexerJava_WordCharacters((QsciLexerJava*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self ```
const char* q_scilexerjava_qbase_word_characters(void* self) {
    return QsciLexerJava_QBaseWordCharacters((QsciLexerJava*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, const char* (*slot)() ```
void q_scilexerjava_on_word_characters(void* self, const char* (*slot)()) {
    QsciLexerJava_OnWordCharacters((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, int autoindentstyle ```
void q_scilexerjava_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerJava_SetAutoIndentStyle((QsciLexerJava*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, int autoindentstyle ```
void q_scilexerjava_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerJava_QBaseSetAutoIndentStyle((QsciLexerJava*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, void (*slot)(QsciLexerJava*, int) ```
void q_scilexerjava_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerJava_OnSetAutoIndentStyle((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, QColor* c, int style ```
void q_scilexerjava_set_color(void* self, void* c, int style) {
    QsciLexerJava_SetColor((QsciLexerJava*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, QColor* c, int style ```
void q_scilexerjava_qbase_set_color(void* self, void* c, int style) {
    QsciLexerJava_QBaseSetColor((QsciLexerJava*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, void (*slot)(QsciLexerJava*, QColor*, int) ```
void q_scilexerjava_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerJava_OnSetColor((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, bool eoffill, int style ```
void q_scilexerjava_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerJava_SetEolFill((QsciLexerJava*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, bool eoffill, int style ```
void q_scilexerjava_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerJava_QBaseSetEolFill((QsciLexerJava*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, void (*slot)(QsciLexerJava*, bool, int) ```
void q_scilexerjava_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerJava_OnSetEolFill((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, QFont* f, int style ```
void q_scilexerjava_set_font(void* self, void* f, int style) {
    QsciLexerJava_SetFont((QsciLexerJava*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, QFont* f, int style ```
void q_scilexerjava_qbase_set_font(void* self, void* f, int style) {
    QsciLexerJava_QBaseSetFont((QsciLexerJava*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, void (*slot)(QsciLexerJava*, QFont*, int) ```
void q_scilexerjava_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerJava_OnSetFont((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, QColor* c, int style ```
void q_scilexerjava_set_paper(void* self, void* c, int style) {
    QsciLexerJava_SetPaper((QsciLexerJava*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, QColor* c, int style ```
void q_scilexerjava_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerJava_QBaseSetPaper((QsciLexerJava*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, void (*slot)(QsciLexerJava*, QColor*, int) ```
void q_scilexerjava_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerJava_OnSetPaper((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, QSettings* qs, const char* prefix ```
bool q_scilexerjava_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerJava_ReadProperties((QsciLexerJava*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, QSettings* qs, const char* prefix ```
bool q_scilexerjava_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerJava_QBaseReadProperties((QsciLexerJava*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, bool (*slot)(QsciLexerJava*, QSettings*, const char*) ```
void q_scilexerjava_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerJava_OnReadProperties((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, QSettings* qs, const char* prefix ```
bool q_scilexerjava_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerJava_WriteProperties((QsciLexerJava*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, QSettings* qs, const char* prefix ```
bool q_scilexerjava_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerJava_QBaseWriteProperties((QsciLexerJava*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, bool (*slot)(QsciLexerJava*, QSettings*, const char*) ```
void q_scilexerjava_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerJava_OnWriteProperties((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, QEvent* event ```
bool q_scilexerjava_event(void* self, void* event) {
    return QsciLexerJava_Event((QsciLexerJava*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, QEvent* event ```
bool q_scilexerjava_qbase_event(void* self, void* event) {
    return QsciLexerJava_QBaseEvent((QsciLexerJava*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, bool (*slot)(QsciLexerJava*, QEvent*) ```
void q_scilexerjava_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerJava_OnEvent((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, QObject* watched, QEvent* event ```
bool q_scilexerjava_event_filter(void* self, void* watched, void* event) {
    return QsciLexerJava_EventFilter((QsciLexerJava*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, QObject* watched, QEvent* event ```
bool q_scilexerjava_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerJava_QBaseEventFilter((QsciLexerJava*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, bool (*slot)(QsciLexerJava*, QObject*, QEvent*) ```
void q_scilexerjava_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerJava_OnEventFilter((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, QTimerEvent* event ```
void q_scilexerjava_timer_event(void* self, void* event) {
    QsciLexerJava_TimerEvent((QsciLexerJava*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, QTimerEvent* event ```
void q_scilexerjava_qbase_timer_event(void* self, void* event) {
    QsciLexerJava_QBaseTimerEvent((QsciLexerJava*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, void (*slot)(QsciLexerJava*, QTimerEvent*) ```
void q_scilexerjava_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerJava_OnTimerEvent((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, QChildEvent* event ```
void q_scilexerjava_child_event(void* self, void* event) {
    QsciLexerJava_ChildEvent((QsciLexerJava*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, QChildEvent* event ```
void q_scilexerjava_qbase_child_event(void* self, void* event) {
    QsciLexerJava_QBaseChildEvent((QsciLexerJava*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, void (*slot)(QsciLexerJava*, QChildEvent*) ```
void q_scilexerjava_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerJava_OnChildEvent((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, QEvent* event ```
void q_scilexerjava_custom_event(void* self, void* event) {
    QsciLexerJava_CustomEvent((QsciLexerJava*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, QEvent* event ```
void q_scilexerjava_qbase_custom_event(void* self, void* event) {
    QsciLexerJava_QBaseCustomEvent((QsciLexerJava*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, void (*slot)(QsciLexerJava*, QEvent*) ```
void q_scilexerjava_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerJava_OnCustomEvent((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, QMetaMethod* signal ```
void q_scilexerjava_connect_notify(void* self, void* signal) {
    QsciLexerJava_ConnectNotify((QsciLexerJava*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, QMetaMethod* signal ```
void q_scilexerjava_qbase_connect_notify(void* self, void* signal) {
    QsciLexerJava_QBaseConnectNotify((QsciLexerJava*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, void (*slot)(QsciLexerJava*, QMetaMethod*) ```
void q_scilexerjava_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerJava_OnConnectNotify((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, QMetaMethod* signal ```
void q_scilexerjava_disconnect_notify(void* self, void* signal) {
    QsciLexerJava_DisconnectNotify((QsciLexerJava*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, QMetaMethod* signal ```
void q_scilexerjava_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerJava_QBaseDisconnectNotify((QsciLexerJava*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, void (*slot)(QsciLexerJava*, QMetaMethod*) ```
void q_scilexerjava_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerJava_OnDisconnectNotify((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self ```
QObject* q_scilexerjava_sender(void* self) {
    return QsciLexerJava_Sender((QsciLexerJava*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self ```
QObject* q_scilexerjava_qbase_sender(void* self) {
    return QsciLexerJava_QBaseSender((QsciLexerJava*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, QObject* (*slot)() ```
void q_scilexerjava_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerJava_OnSender((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self ```
int32_t q_scilexerjava_sender_signal_index(void* self) {
    return QsciLexerJava_SenderSignalIndex((QsciLexerJava*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self ```
int32_t q_scilexerjava_qbase_sender_signal_index(void* self) {
    return QsciLexerJava_QBaseSenderSignalIndex((QsciLexerJava*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, int32_t (*slot)() ```
void q_scilexerjava_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerJava_OnSenderSignalIndex((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, const char* signal ```
int32_t q_scilexerjava_receivers(void* self, const char* signal) {
    return QsciLexerJava_Receivers((QsciLexerJava*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, const char* signal ```
int32_t q_scilexerjava_qbase_receivers(void* self, const char* signal) {
    return QsciLexerJava_QBaseReceivers((QsciLexerJava*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, int32_t (*slot)(QsciLexerJava*, const char*) ```
void q_scilexerjava_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerJava_OnReceivers((QsciLexerJava*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJava* self, QMetaMethod* signal ```
bool q_scilexerjava_is_signal_connected(void* self, void* signal) {
    return QsciLexerJava_IsSignalConnected((QsciLexerJava*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJava* self, QMetaMethod* signal ```
bool q_scilexerjava_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerJava_QBaseIsSignalConnected((QsciLexerJava*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJava* self, bool (*slot)(QsciLexerJava*, QMetaMethod*) ```
void q_scilexerjava_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerJava_OnIsSignalConnected((QsciLexerJava*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexerJava* self ```
void q_scilexerjava_delete(void* self) {
    QsciLexerJava_Delete((QsciLexerJava*)(self));
}