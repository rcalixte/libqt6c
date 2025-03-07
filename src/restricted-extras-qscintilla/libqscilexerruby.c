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
#include "libqscilexerruby.hpp"
#include "libqscilexerruby.h"

/// https://doc.qt.io/qt-6/qscilexerruby.html

/// q_scilexerruby_new constructs a new QsciLexerRuby object.
///
///
QsciLexerRuby* q_scilexerruby_new() {
    return QsciLexerRuby_new();
}

/// q_scilexerruby_new2 constructs a new QsciLexerRuby object.
///
/// ``` QObject* parent ```
QsciLexerRuby* q_scilexerruby_new2(void* parent) {
    return QsciLexerRuby_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerRuby* self ```
QMetaObject* q_scilexerruby_meta_object(void* self) {
    return QsciLexerRuby_MetaObject((QsciLexerRuby*)self);
}

/// ``` QsciLexerRuby* self, const char* param1 ```
void* q_scilexerruby_metacast(void* self, const char* param1) {
    return QsciLexerRuby_Metacast((QsciLexerRuby*)self, param1);
}

/// ``` QsciLexerRuby* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerruby_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerRuby_Metacall((QsciLexerRuby*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerRuby* self, int32_t (*slot)(QsciLexerRuby*, enum QMetaObject__Call, int, void*) ```
void q_scilexerruby_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerRuby_OnMetacall((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerRuby* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerruby_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerRuby_QBaseMetacall((QsciLexerRuby*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexerruby_tr(const char* s) {
    libqt_string _str = QsciLexerRuby_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#language)
///
/// ``` QsciLexerRuby* self ```
const char* q_scilexerruby_language(void* self) {
    return QsciLexerRuby_Language((QsciLexerRuby*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#lexer)
///
/// ``` QsciLexerRuby* self ```
const char* q_scilexerruby_lexer(void* self) {
    return QsciLexerRuby_Lexer((QsciLexerRuby*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#blockEnd)
///
/// ``` QsciLexerRuby* self ```
const char* q_scilexerruby_block_end(void* self) {
    return QsciLexerRuby_BlockEnd((QsciLexerRuby*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#blockStart)
///
/// ``` QsciLexerRuby* self ```
const char* q_scilexerruby_block_start(void* self) {
    return QsciLexerRuby_BlockStart((QsciLexerRuby*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#blockStartKeyword)
///
/// ``` QsciLexerRuby* self ```
const char* q_scilexerruby_block_start_keyword(void* self) {
    return QsciLexerRuby_BlockStartKeyword((QsciLexerRuby*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#braceStyle)
///
/// ``` QsciLexerRuby* self ```
int32_t q_scilexerruby_brace_style(void* self) {
    return QsciLexerRuby_BraceStyle((QsciLexerRuby*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#defaultColor)
///
/// ``` QsciLexerRuby* self, int style ```
QColor* q_scilexerruby_default_color(void* self, int style) {
    return QsciLexerRuby_DefaultColor((QsciLexerRuby*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#defaultEolFill)
///
/// ``` QsciLexerRuby* self, int style ```
bool q_scilexerruby_default_eol_fill(void* self, int style) {
    return QsciLexerRuby_DefaultEolFill((QsciLexerRuby*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#defaultFont)
///
/// ``` QsciLexerRuby* self, int style ```
QFont* q_scilexerruby_default_font(void* self, int style) {
    return QsciLexerRuby_DefaultFont((QsciLexerRuby*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#defaultPaper)
///
/// ``` QsciLexerRuby* self, int style ```
QColor* q_scilexerruby_default_paper(void* self, int style) {
    return QsciLexerRuby_DefaultPaper((QsciLexerRuby*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#keywords)
///
/// ``` QsciLexerRuby* self, int set ```
const char* q_scilexerruby_keywords(void* self, int set) {
    return QsciLexerRuby_Keywords((QsciLexerRuby*)self, set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#description)
///
/// ``` QsciLexerRuby* self, int style ```
const char* q_scilexerruby_description(void* self, int style) {
    libqt_string _str = QsciLexerRuby_Description((QsciLexerRuby*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#refreshProperties)
///
/// ``` QsciLexerRuby* self ```
void q_scilexerruby_refresh_properties(void* self) {
    QsciLexerRuby_RefreshProperties((QsciLexerRuby*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#setFoldComments)
///
/// ``` QsciLexerRuby* self, bool fold ```
void q_scilexerruby_set_fold_comments(void* self, bool fold) {
    QsciLexerRuby_SetFoldComments((QsciLexerRuby*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#foldComments)
///
/// ``` QsciLexerRuby* self ```
bool q_scilexerruby_fold_comments(void* self) {
    return QsciLexerRuby_FoldComments((QsciLexerRuby*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#setFoldCompact)
///
/// ``` QsciLexerRuby* self, bool fold ```
void q_scilexerruby_set_fold_compact(void* self, bool fold) {
    QsciLexerRuby_SetFoldCompact((QsciLexerRuby*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#foldCompact)
///
/// ``` QsciLexerRuby* self ```
bool q_scilexerruby_fold_compact(void* self) {
    return QsciLexerRuby_FoldCompact((QsciLexerRuby*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#readProperties)
///
/// ``` QsciLexerRuby* self, QSettings* qs, const char* prefix ```
bool q_scilexerruby_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerRuby_ReadProperties((QsciLexerRuby*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerRuby* self, bool (*slot)(QsciLexerRuby*, QSettings*, const char*) ```
void q_scilexerruby_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerRuby_OnReadProperties((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerRuby* self, QSettings* qs, const char* prefix ```
bool q_scilexerruby_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerRuby_QBaseReadProperties((QsciLexerRuby*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#writeProperties)
///
/// ``` QsciLexerRuby* self, QSettings* qs, const char* prefix ```
bool q_scilexerruby_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerRuby_WriteProperties((QsciLexerRuby*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerRuby* self, bool (*slot)(QsciLexerRuby*, QSettings*, const char*) ```
void q_scilexerruby_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerRuby_OnWriteProperties((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerRuby* self, QSettings* qs, const char* prefix ```
bool q_scilexerruby_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerRuby_QBaseWriteProperties((QsciLexerRuby*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexerruby_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerRuby_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexerruby_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerRuby_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#blockEnd)
///
/// ``` QsciLexerRuby* self, int* style ```
const char* q_scilexerruby_block_end1(void* self, int* style) {
    return QsciLexerRuby_BlockEnd1((QsciLexerRuby*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#blockStart)
///
/// ``` QsciLexerRuby* self, int* style ```
const char* q_scilexerruby_block_start1(void* self, int* style) {
    return QsciLexerRuby_BlockStart1((QsciLexerRuby*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#blockStartKeyword)
///
/// ``` QsciLexerRuby* self, int* style ```
const char* q_scilexerruby_block_start_keyword1(void* self, int* style) {
    return QsciLexerRuby_BlockStartKeyword1((QsciLexerRuby*)self, style);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerRuby* self ```
QsciAbstractAPIs* q_scilexerruby_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerRuby* self ```
int32_t q_scilexerruby_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerRuby* self ```
QsciScintilla* q_scilexerruby_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerRuby* self, QsciAbstractAPIs* apis ```
void q_scilexerruby_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerRuby* self, QColor* c ```
void q_scilexerruby_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerRuby* self, QFont* f ```
void q_scilexerruby_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerRuby* self, QColor* c ```
void q_scilexerruby_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerRuby* self, QSettings* qs ```
bool q_scilexerruby_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerRuby* self, QSettings* qs ```
bool q_scilexerruby_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerRuby* self, QColor* c, int style ```
void q_scilexerruby_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerruby_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerRuby* self, bool eolfilled, int style ```
void q_scilexerruby_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexerruby_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerRuby* self, QFont* f, int style ```
void q_scilexerruby_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexerruby_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerRuby* self, QColor* c, int style ```
void q_scilexerruby_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerruby_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerRuby* self, const char* prop, const char* val ```
void q_scilexerruby_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexerruby_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerRuby* self, QSettings* qs, const char* prefix ```
bool q_scilexerruby_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerRuby* self, QSettings* qs, const char* prefix ```
bool q_scilexerruby_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerRuby* self ```
const char* q_scilexerruby_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerRuby* self, const char* name ```
void q_scilexerruby_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerRuby* self ```
bool q_scilexerruby_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerRuby* self ```
bool q_scilexerruby_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerRuby* self ```
bool q_scilexerruby_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerRuby* self ```
bool q_scilexerruby_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerRuby* self, bool b ```
bool q_scilexerruby_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerRuby* self ```
QThread* q_scilexerruby_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerRuby* self, QThread* thread ```
void q_scilexerruby_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerRuby* self, int interval ```
int32_t q_scilexerruby_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerRuby* self, int id ```
void q_scilexerruby_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerRuby* self ```
libqt_list /* of QObject* */ q_scilexerruby_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerRuby* self, QObject* parent ```
void q_scilexerruby_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerRuby* self, QObject* filterObj ```
void q_scilexerruby_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerRuby* self, QObject* obj ```
void q_scilexerruby_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexerruby_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerRuby* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexerruby_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexerruby_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexerruby_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerRuby* self ```
void q_scilexerruby_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerRuby* self ```
void q_scilexerruby_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerRuby* self, const char* name, QVariant* value ```
bool q_scilexerruby_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerRuby* self, const char* name ```
QVariant* q_scilexerruby_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerRuby* self ```
const char** q_scilexerruby_dynamic_property_names(void* self) {
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
/// ``` QsciLexerRuby* self ```
QBindingStorage* q_scilexerruby_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerRuby* self ```
QBindingStorage* q_scilexerruby_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerRuby* self ```
void q_scilexerruby_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexerRuby* self, void (*slot)(QObject*) ```
void q_scilexerruby_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerRuby* self ```
QObject* q_scilexerruby_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerRuby* self, const char* classname ```
bool q_scilexerruby_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerRuby* self ```
void q_scilexerruby_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerRuby* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexerruby_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerruby_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerRuby* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerruby_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerRuby* self, QObject* param1 ```
void q_scilexerruby_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexerRuby* self, void (*slot)(QObject*, QObject*) ```
void q_scilexerruby_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self ```
int32_t q_scilexerruby_lexer_id(void* self) {
    return QsciLexerRuby_LexerId((QsciLexerRuby*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self ```
int32_t q_scilexerruby_qbase_lexer_id(void* self) {
    return QsciLexerRuby_QBaseLexerId((QsciLexerRuby*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, int32_t (*slot)() ```
void q_scilexerruby_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerRuby_OnLexerId((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self ```
const char* q_scilexerruby_auto_completion_fillups(void* self) {
    return QsciLexerRuby_AutoCompletionFillups((QsciLexerRuby*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self ```
const char* q_scilexerruby_qbase_auto_completion_fillups(void* self) {
    return QsciLexerRuby_QBaseAutoCompletionFillups((QsciLexerRuby*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, const char* (*slot)() ```
void q_scilexerruby_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerRuby_OnAutoCompletionFillups((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self ```
const char** q_scilexerruby_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerRuby_AutoCompletionWordSeparators((QsciLexerRuby*)self);
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
/// ``` QsciLexerRuby* self ```
const char** q_scilexerruby_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerRuby_QBaseAutoCompletionWordSeparators((QsciLexerRuby*)self);
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
/// ``` QsciLexerRuby* self, const char** (*slot)() ```
void q_scilexerruby_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerRuby_OnAutoCompletionWordSeparators((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self ```
int32_t q_scilexerruby_block_lookback(void* self) {
    return QsciLexerRuby_BlockLookback((QsciLexerRuby*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self ```
int32_t q_scilexerruby_qbase_block_lookback(void* self) {
    return QsciLexerRuby_QBaseBlockLookback((QsciLexerRuby*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, int32_t (*slot)() ```
void q_scilexerruby_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerRuby_OnBlockLookback((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self ```
bool q_scilexerruby_case_sensitive(void* self) {
    return QsciLexerRuby_CaseSensitive((QsciLexerRuby*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self ```
bool q_scilexerruby_qbase_case_sensitive(void* self) {
    return QsciLexerRuby_QBaseCaseSensitive((QsciLexerRuby*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, bool (*slot)() ```
void q_scilexerruby_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerRuby_OnCaseSensitive((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, int style ```
QColor* q_scilexerruby_color(void* self, int style) {
    return QsciLexerRuby_Color((QsciLexerRuby*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, int style ```
QColor* q_scilexerruby_qbase_color(void* self, int style) {
    return QsciLexerRuby_QBaseColor((QsciLexerRuby*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QColor* (*slot)(QsciLexerRuby*, int) ```
void q_scilexerruby_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerRuby_OnColor((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, int style ```
bool q_scilexerruby_eol_fill(void* self, int style) {
    return QsciLexerRuby_EolFill((QsciLexerRuby*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, int style ```
bool q_scilexerruby_qbase_eol_fill(void* self, int style) {
    return QsciLexerRuby_QBaseEolFill((QsciLexerRuby*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, bool (*slot)(QsciLexerRuby*, int) ```
void q_scilexerruby_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerRuby_OnEolFill((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, int style ```
QFont* q_scilexerruby_font(void* self, int style) {
    return QsciLexerRuby_Font((QsciLexerRuby*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, int style ```
QFont* q_scilexerruby_qbase_font(void* self, int style) {
    return QsciLexerRuby_QBaseFont((QsciLexerRuby*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QFont* (*slot)(QsciLexerRuby*, int) ```
void q_scilexerruby_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerRuby_OnFont((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self ```
int32_t q_scilexerruby_indentation_guide_view(void* self) {
    return QsciLexerRuby_IndentationGuideView((QsciLexerRuby*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self ```
int32_t q_scilexerruby_qbase_indentation_guide_view(void* self) {
    return QsciLexerRuby_QBaseIndentationGuideView((QsciLexerRuby*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, int32_t (*slot)() ```
void q_scilexerruby_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerRuby_OnIndentationGuideView((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self ```
int32_t q_scilexerruby_default_style(void* self) {
    return QsciLexerRuby_DefaultStyle((QsciLexerRuby*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self ```
int32_t q_scilexerruby_qbase_default_style(void* self) {
    return QsciLexerRuby_QBaseDefaultStyle((QsciLexerRuby*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, int32_t (*slot)() ```
void q_scilexerruby_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerRuby_OnDefaultStyle((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, int style ```
QColor* q_scilexerruby_paper(void* self, int style) {
    return QsciLexerRuby_Paper((QsciLexerRuby*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, int style ```
QColor* q_scilexerruby_qbase_paper(void* self, int style) {
    return QsciLexerRuby_QBasePaper((QsciLexerRuby*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QColor* (*slot)(QsciLexerRuby*, int) ```
void q_scilexerruby_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerRuby_OnPaper((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, int style ```
QColor* q_scilexerruby_default_color_with_style(void* self, int style) {
    return QsciLexerRuby_DefaultColorWithStyle((QsciLexerRuby*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, int style ```
QColor* q_scilexerruby_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerRuby_QBaseDefaultColorWithStyle((QsciLexerRuby*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QColor* (*slot)(QsciLexerRuby*, int) ```
void q_scilexerruby_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerRuby_OnDefaultColorWithStyle((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, int style ```
QFont* q_scilexerruby_default_font_with_style(void* self, int style) {
    return QsciLexerRuby_DefaultFontWithStyle((QsciLexerRuby*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, int style ```
QFont* q_scilexerruby_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerRuby_QBaseDefaultFontWithStyle((QsciLexerRuby*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QFont* (*slot)(QsciLexerRuby*, int) ```
void q_scilexerruby_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerRuby_OnDefaultFontWithStyle((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, int style ```
QColor* q_scilexerruby_default_paper_with_style(void* self, int style) {
    return QsciLexerRuby_DefaultPaperWithStyle((QsciLexerRuby*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, int style ```
QColor* q_scilexerruby_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerRuby_QBaseDefaultPaperWithStyle((QsciLexerRuby*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QColor* (*slot)(QsciLexerRuby*, int) ```
void q_scilexerruby_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerRuby_OnDefaultPaperWithStyle((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, QsciScintilla* editor ```
void q_scilexerruby_set_editor(void* self, void* editor) {
    QsciLexerRuby_SetEditor((QsciLexerRuby*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QsciScintilla* editor ```
void q_scilexerruby_qbase_set_editor(void* self, void* editor) {
    QsciLexerRuby_QBaseSetEditor((QsciLexerRuby*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexerRuby*, QsciScintilla*) ```
void q_scilexerruby_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerRuby_OnSetEditor((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self ```
int32_t q_scilexerruby_style_bits_needed(void* self) {
    return QsciLexerRuby_StyleBitsNeeded((QsciLexerRuby*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self ```
int32_t q_scilexerruby_qbase_style_bits_needed(void* self) {
    return QsciLexerRuby_QBaseStyleBitsNeeded((QsciLexerRuby*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, int32_t (*slot)() ```
void q_scilexerruby_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerRuby_OnStyleBitsNeeded((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self ```
const char* q_scilexerruby_word_characters(void* self) {
    return QsciLexerRuby_WordCharacters((QsciLexerRuby*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self ```
const char* q_scilexerruby_qbase_word_characters(void* self) {
    return QsciLexerRuby_QBaseWordCharacters((QsciLexerRuby*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, const char* (*slot)() ```
void q_scilexerruby_on_word_characters(void* self, const char* (*slot)()) {
    QsciLexerRuby_OnWordCharacters((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, int autoindentstyle ```
void q_scilexerruby_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerRuby_SetAutoIndentStyle((QsciLexerRuby*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, int autoindentstyle ```
void q_scilexerruby_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerRuby_QBaseSetAutoIndentStyle((QsciLexerRuby*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexerRuby*, int) ```
void q_scilexerruby_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerRuby_OnSetAutoIndentStyle((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, QColor* c, int style ```
void q_scilexerruby_set_color(void* self, void* c, int style) {
    QsciLexerRuby_SetColor((QsciLexerRuby*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QColor* c, int style ```
void q_scilexerruby_qbase_set_color(void* self, void* c, int style) {
    QsciLexerRuby_QBaseSetColor((QsciLexerRuby*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexerRuby*, QColor*, int) ```
void q_scilexerruby_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerRuby_OnSetColor((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, bool eoffill, int style ```
void q_scilexerruby_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerRuby_SetEolFill((QsciLexerRuby*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, bool eoffill, int style ```
void q_scilexerruby_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerRuby_QBaseSetEolFill((QsciLexerRuby*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexerRuby*, bool, int) ```
void q_scilexerruby_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerRuby_OnSetEolFill((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, QFont* f, int style ```
void q_scilexerruby_set_font(void* self, void* f, int style) {
    QsciLexerRuby_SetFont((QsciLexerRuby*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QFont* f, int style ```
void q_scilexerruby_qbase_set_font(void* self, void* f, int style) {
    QsciLexerRuby_QBaseSetFont((QsciLexerRuby*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexerRuby*, QFont*, int) ```
void q_scilexerruby_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerRuby_OnSetFont((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, QColor* c, int style ```
void q_scilexerruby_set_paper(void* self, void* c, int style) {
    QsciLexerRuby_SetPaper((QsciLexerRuby*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QColor* c, int style ```
void q_scilexerruby_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerRuby_QBaseSetPaper((QsciLexerRuby*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexerRuby*, QColor*, int) ```
void q_scilexerruby_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerRuby_OnSetPaper((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, QEvent* event ```
bool q_scilexerruby_event(void* self, void* event) {
    return QsciLexerRuby_Event((QsciLexerRuby*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QEvent* event ```
bool q_scilexerruby_qbase_event(void* self, void* event) {
    return QsciLexerRuby_QBaseEvent((QsciLexerRuby*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, bool (*slot)(QsciLexerRuby*, QEvent*) ```
void q_scilexerruby_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerRuby_OnEvent((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, QObject* watched, QEvent* event ```
bool q_scilexerruby_event_filter(void* self, void* watched, void* event) {
    return QsciLexerRuby_EventFilter((QsciLexerRuby*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QObject* watched, QEvent* event ```
bool q_scilexerruby_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerRuby_QBaseEventFilter((QsciLexerRuby*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, bool (*slot)(QsciLexerRuby*, QObject*, QEvent*) ```
void q_scilexerruby_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerRuby_OnEventFilter((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, QTimerEvent* event ```
void q_scilexerruby_timer_event(void* self, void* event) {
    QsciLexerRuby_TimerEvent((QsciLexerRuby*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QTimerEvent* event ```
void q_scilexerruby_qbase_timer_event(void* self, void* event) {
    QsciLexerRuby_QBaseTimerEvent((QsciLexerRuby*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexerRuby*, QTimerEvent*) ```
void q_scilexerruby_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerRuby_OnTimerEvent((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, QChildEvent* event ```
void q_scilexerruby_child_event(void* self, void* event) {
    QsciLexerRuby_ChildEvent((QsciLexerRuby*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QChildEvent* event ```
void q_scilexerruby_qbase_child_event(void* self, void* event) {
    QsciLexerRuby_QBaseChildEvent((QsciLexerRuby*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexerRuby*, QChildEvent*) ```
void q_scilexerruby_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerRuby_OnChildEvent((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, QEvent* event ```
void q_scilexerruby_custom_event(void* self, void* event) {
    QsciLexerRuby_CustomEvent((QsciLexerRuby*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QEvent* event ```
void q_scilexerruby_qbase_custom_event(void* self, void* event) {
    QsciLexerRuby_QBaseCustomEvent((QsciLexerRuby*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexerRuby*, QEvent*) ```
void q_scilexerruby_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerRuby_OnCustomEvent((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, QMetaMethod* signal ```
void q_scilexerruby_connect_notify(void* self, void* signal) {
    QsciLexerRuby_ConnectNotify((QsciLexerRuby*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QMetaMethod* signal ```
void q_scilexerruby_qbase_connect_notify(void* self, void* signal) {
    QsciLexerRuby_QBaseConnectNotify((QsciLexerRuby*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexerRuby*, QMetaMethod*) ```
void q_scilexerruby_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerRuby_OnConnectNotify((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, QMetaMethod* signal ```
void q_scilexerruby_disconnect_notify(void* self, void* signal) {
    QsciLexerRuby_DisconnectNotify((QsciLexerRuby*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QMetaMethod* signal ```
void q_scilexerruby_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerRuby_QBaseDisconnectNotify((QsciLexerRuby*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexerRuby*, QMetaMethod*) ```
void q_scilexerruby_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerRuby_OnDisconnectNotify((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self ```
QObject* q_scilexerruby_sender(void* self) {
    return QsciLexerRuby_Sender((QsciLexerRuby*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self ```
QObject* q_scilexerruby_qbase_sender(void* self) {
    return QsciLexerRuby_QBaseSender((QsciLexerRuby*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QObject* (*slot)() ```
void q_scilexerruby_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerRuby_OnSender((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self ```
int32_t q_scilexerruby_sender_signal_index(void* self) {
    return QsciLexerRuby_SenderSignalIndex((QsciLexerRuby*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self ```
int32_t q_scilexerruby_qbase_sender_signal_index(void* self) {
    return QsciLexerRuby_QBaseSenderSignalIndex((QsciLexerRuby*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, int32_t (*slot)() ```
void q_scilexerruby_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerRuby_OnSenderSignalIndex((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, const char* signal ```
int32_t q_scilexerruby_receivers(void* self, const char* signal) {
    return QsciLexerRuby_Receivers((QsciLexerRuby*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, const char* signal ```
int32_t q_scilexerruby_qbase_receivers(void* self, const char* signal) {
    return QsciLexerRuby_QBaseReceivers((QsciLexerRuby*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, int32_t (*slot)(QsciLexerRuby*, const char*) ```
void q_scilexerruby_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerRuby_OnReceivers((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, QMetaMethod* signal ```
bool q_scilexerruby_is_signal_connected(void* self, void* signal) {
    return QsciLexerRuby_IsSignalConnected((QsciLexerRuby*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QMetaMethod* signal ```
bool q_scilexerruby_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerRuby_QBaseIsSignalConnected((QsciLexerRuby*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, bool (*slot)(QsciLexerRuby*, QMetaMethod*) ```
void q_scilexerruby_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerRuby_OnIsSignalConnected((QsciLexerRuby*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexerRuby* self ```
void q_scilexerruby_delete(void* self) {
    QsciLexerRuby_Delete((QsciLexerRuby*)(self));
}