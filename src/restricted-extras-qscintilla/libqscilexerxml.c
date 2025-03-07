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
#include "libqscilexerhtml.hpp"
#include "../libqcoreevent.hpp"
#include "libqscilexerxml.hpp"
#include "libqscilexerxml.h"

/// https://doc.qt.io/qt-6/qscilexerxml.html

/// q_scilexerxml_new constructs a new QsciLexerXML object.
///
///
QsciLexerXML* q_scilexerxml_new() {
    return QsciLexerXML_new();
}

/// q_scilexerxml_new2 constructs a new QsciLexerXML object.
///
/// ``` QObject* parent ```
QsciLexerXML* q_scilexerxml_new2(void* parent) {
    return QsciLexerXML_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerXML* self ```
QMetaObject* q_scilexerxml_meta_object(void* self) {
    return QsciLexerXML_MetaObject((QsciLexerXML*)self);
}

/// ``` QsciLexerXML* self, const char* param1 ```
void* q_scilexerxml_metacast(void* self, const char* param1) {
    return QsciLexerXML_Metacast((QsciLexerXML*)self, param1);
}

/// ``` QsciLexerXML* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerxml_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerXML_Metacall((QsciLexerXML*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerXML* self, int32_t (*slot)(QsciLexerXML*, enum QMetaObject__Call, int, void*) ```
void q_scilexerxml_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerXML_OnMetacall((QsciLexerXML*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerXML* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerxml_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerXML_QBaseMetacall((QsciLexerXML*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexerxml_tr(const char* s) {
    libqt_string _str = QsciLexerXML_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerxml.html#language)
///
/// ``` QsciLexerXML* self ```
const char* q_scilexerxml_language(void* self) {
    return QsciLexerXML_Language((QsciLexerXML*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerxml.html#lexer)
///
/// ``` QsciLexerXML* self ```
const char* q_scilexerxml_lexer(void* self) {
    return QsciLexerXML_Lexer((QsciLexerXML*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerxml.html#defaultColor)
///
/// ``` QsciLexerXML* self, int style ```
QColor* q_scilexerxml_default_color(void* self, int style) {
    return QsciLexerXML_DefaultColor((QsciLexerXML*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerxml.html#defaultEolFill)
///
/// ``` QsciLexerXML* self, int style ```
bool q_scilexerxml_default_eol_fill(void* self, int style) {
    return QsciLexerXML_DefaultEolFill((QsciLexerXML*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerxml.html#defaultFont)
///
/// ``` QsciLexerXML* self, int style ```
QFont* q_scilexerxml_default_font(void* self, int style) {
    return QsciLexerXML_DefaultFont((QsciLexerXML*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerxml.html#defaultPaper)
///
/// ``` QsciLexerXML* self, int style ```
QColor* q_scilexerxml_default_paper(void* self, int style) {
    return QsciLexerXML_DefaultPaper((QsciLexerXML*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerxml.html#keywords)
///
/// ``` QsciLexerXML* self, int set ```
const char* q_scilexerxml_keywords(void* self, int set) {
    return QsciLexerXML_Keywords((QsciLexerXML*)self, set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerxml.html#refreshProperties)
///
/// ``` QsciLexerXML* self ```
void q_scilexerxml_refresh_properties(void* self) {
    QsciLexerXML_RefreshProperties((QsciLexerXML*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerxml.html#setScriptsStyled)
///
/// ``` QsciLexerXML* self, bool styled ```
void q_scilexerxml_set_scripts_styled(void* self, bool styled) {
    QsciLexerXML_SetScriptsStyled((QsciLexerXML*)self, styled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerxml.html#scriptsStyled)
///
/// ``` QsciLexerXML* self ```
bool q_scilexerxml_scripts_styled(void* self) {
    return QsciLexerXML_ScriptsStyled((QsciLexerXML*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerxml.html#readProperties)
///
/// ``` QsciLexerXML* self, QSettings* qs, const char* prefix ```
bool q_scilexerxml_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerXML_ReadProperties((QsciLexerXML*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerXML* self, bool (*slot)(QsciLexerXML*, QSettings*, const char*) ```
void q_scilexerxml_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerXML_OnReadProperties((QsciLexerXML*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerXML* self, QSettings* qs, const char* prefix ```
bool q_scilexerxml_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerXML_QBaseReadProperties((QsciLexerXML*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerxml.html#writeProperties)
///
/// ``` QsciLexerXML* self, QSettings* qs, const char* prefix ```
bool q_scilexerxml_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerXML_WriteProperties((QsciLexerXML*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerXML* self, bool (*slot)(QsciLexerXML*, QSettings*, const char*) ```
void q_scilexerxml_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerXML_OnWriteProperties((QsciLexerXML*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerXML* self, QSettings* qs, const char* prefix ```
bool q_scilexerxml_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerXML_QBaseWriteProperties((QsciLexerXML*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexerxml_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerXML_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexerxml_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerXML_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#caseSensitiveTags)
///
/// ``` QsciLexerXML* self ```
bool q_scilexerxml_case_sensitive_tags(void* self) {
    return QsciLexerHTML_CaseSensitiveTags((QsciLexerHTML*)self);
}

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#setDjangoTemplates)
///
/// ``` QsciLexerXML* self, bool enabled ```
void q_scilexerxml_set_django_templates(void* self, bool enabled) {
    QsciLexerHTML_SetDjangoTemplates((QsciLexerHTML*)self, enabled);
}

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#djangoTemplates)
///
/// ``` QsciLexerXML* self ```
bool q_scilexerxml_django_templates(void* self) {
    return QsciLexerHTML_DjangoTemplates((QsciLexerHTML*)self);
}

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#foldCompact)
///
/// ``` QsciLexerXML* self ```
bool q_scilexerxml_fold_compact(void* self) {
    return QsciLexerHTML_FoldCompact((QsciLexerHTML*)self);
}

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#foldPreprocessor)
///
/// ``` QsciLexerXML* self ```
bool q_scilexerxml_fold_preprocessor(void* self) {
    return QsciLexerHTML_FoldPreprocessor((QsciLexerHTML*)self);
}

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#setFoldScriptComments)
///
/// ``` QsciLexerXML* self, bool fold ```
void q_scilexerxml_set_fold_script_comments(void* self, bool fold) {
    QsciLexerHTML_SetFoldScriptComments((QsciLexerHTML*)self, fold);
}

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#foldScriptComments)
///
/// ``` QsciLexerXML* self ```
bool q_scilexerxml_fold_script_comments(void* self) {
    return QsciLexerHTML_FoldScriptComments((QsciLexerHTML*)self);
}

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#setFoldScriptHeredocs)
///
/// ``` QsciLexerXML* self, bool fold ```
void q_scilexerxml_set_fold_script_heredocs(void* self, bool fold) {
    QsciLexerHTML_SetFoldScriptHeredocs((QsciLexerHTML*)self, fold);
}

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#foldScriptHeredocs)
///
/// ``` QsciLexerXML* self ```
bool q_scilexerxml_fold_script_heredocs(void* self) {
    return QsciLexerHTML_FoldScriptHeredocs((QsciLexerHTML*)self);
}

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#setMakoTemplates)
///
/// ``` QsciLexerXML* self, bool enabled ```
void q_scilexerxml_set_mako_templates(void* self, bool enabled) {
    QsciLexerHTML_SetMakoTemplates((QsciLexerHTML*)self, enabled);
}

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#makoTemplates)
///
/// ``` QsciLexerXML* self ```
bool q_scilexerxml_mako_templates(void* self) {
    return QsciLexerHTML_MakoTemplates((QsciLexerHTML*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerXML* self ```
QsciAbstractAPIs* q_scilexerxml_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerXML* self ```
int32_t q_scilexerxml_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerXML* self ```
QsciScintilla* q_scilexerxml_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerXML* self, QsciAbstractAPIs* apis ```
void q_scilexerxml_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerXML* self, QColor* c ```
void q_scilexerxml_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerXML* self, QFont* f ```
void q_scilexerxml_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerXML* self, QColor* c ```
void q_scilexerxml_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerXML* self, QSettings* qs ```
bool q_scilexerxml_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerXML* self, QSettings* qs ```
bool q_scilexerxml_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerXML* self, QColor* c, int style ```
void q_scilexerxml_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerXML* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerxml_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerXML* self, bool eolfilled, int style ```
void q_scilexerxml_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerXML* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexerxml_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerXML* self, QFont* f, int style ```
void q_scilexerxml_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerXML* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexerxml_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerXML* self, QColor* c, int style ```
void q_scilexerxml_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerXML* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerxml_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerXML* self, const char* prop, const char* val ```
void q_scilexerxml_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerXML* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexerxml_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerXML* self, QSettings* qs, const char* prefix ```
bool q_scilexerxml_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerXML* self, QSettings* qs, const char* prefix ```
bool q_scilexerxml_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerXML* self ```
const char* q_scilexerxml_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerXML* self, const char* name ```
void q_scilexerxml_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerXML* self ```
bool q_scilexerxml_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerXML* self ```
bool q_scilexerxml_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerXML* self ```
bool q_scilexerxml_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerXML* self ```
bool q_scilexerxml_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerXML* self, bool b ```
bool q_scilexerxml_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerXML* self ```
QThread* q_scilexerxml_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerXML* self, QThread* thread ```
void q_scilexerxml_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerXML* self, int interval ```
int32_t q_scilexerxml_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerXML* self, int id ```
void q_scilexerxml_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerXML* self ```
libqt_list /* of QObject* */ q_scilexerxml_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerXML* self, QObject* parent ```
void q_scilexerxml_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerXML* self, QObject* filterObj ```
void q_scilexerxml_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerXML* self, QObject* obj ```
void q_scilexerxml_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexerxml_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerXML* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexerxml_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexerxml_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexerxml_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerXML* self ```
void q_scilexerxml_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerXML* self ```
void q_scilexerxml_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerXML* self, const char* name, QVariant* value ```
bool q_scilexerxml_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerXML* self, const char* name ```
QVariant* q_scilexerxml_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerXML* self ```
const char** q_scilexerxml_dynamic_property_names(void* self) {
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
/// ``` QsciLexerXML* self ```
QBindingStorage* q_scilexerxml_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerXML* self ```
QBindingStorage* q_scilexerxml_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerXML* self ```
void q_scilexerxml_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexerXML* self, void (*slot)(QObject*) ```
void q_scilexerxml_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerXML* self ```
QObject* q_scilexerxml_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerXML* self, const char* classname ```
bool q_scilexerxml_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerXML* self ```
void q_scilexerxml_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerXML* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexerxml_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerxml_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerXML* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerxml_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerXML* self, QObject* param1 ```
void q_scilexerxml_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexerXML* self, void (*slot)(QObject*, QObject*) ```
void q_scilexerxml_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#setFoldCompact)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self, bool fold ```
void q_scilexerxml_set_fold_compact(void* self, bool fold) {
    QsciLexerXML_SetFoldCompact((QsciLexerXML*)self, fold);
}

/// Inherited from QsciLexerHTML
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self, bool fold ```
void q_scilexerxml_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerXML_QBaseSetFoldCompact((QsciLexerXML*)self, fold);
}

/// Inherited from QsciLexerHTML
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, void (*slot)(QsciLexerXML*, bool) ```
void q_scilexerxml_on_set_fold_compact(void* self, void (*slot)(void*, bool)) {
    QsciLexerXML_OnSetFoldCompact((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#setFoldPreprocessor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self, bool fold ```
void q_scilexerxml_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerXML_SetFoldPreprocessor((QsciLexerXML*)self, fold);
}

/// Inherited from QsciLexerHTML
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self, bool fold ```
void q_scilexerxml_qbase_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerXML_QBaseSetFoldPreprocessor((QsciLexerXML*)self, fold);
}

/// Inherited from QsciLexerHTML
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, void (*slot)(QsciLexerXML*, bool) ```
void q_scilexerxml_on_set_fold_preprocessor(void* self, void (*slot)(void*, bool)) {
    QsciLexerXML_OnSetFoldPreprocessor((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#setCaseSensitiveTags)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self, bool sens ```
void q_scilexerxml_set_case_sensitive_tags(void* self, bool sens) {
    QsciLexerXML_SetCaseSensitiveTags((QsciLexerXML*)self, sens);
}

/// Inherited from QsciLexerHTML
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self, bool sens ```
void q_scilexerxml_qbase_set_case_sensitive_tags(void* self, bool sens) {
    QsciLexerXML_QBaseSetCaseSensitiveTags((QsciLexerXML*)self, sens);
}

/// Inherited from QsciLexerHTML
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, void (*slot)(QsciLexerXML*, bool) ```
void q_scilexerxml_on_set_case_sensitive_tags(void* self, void (*slot)(void*, bool)) {
    QsciLexerXML_OnSetCaseSensitiveTags((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self ```
int32_t q_scilexerxml_lexer_id(void* self) {
    return QsciLexerXML_LexerId((QsciLexerXML*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self ```
int32_t q_scilexerxml_qbase_lexer_id(void* self) {
    return QsciLexerXML_QBaseLexerId((QsciLexerXML*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, int32_t (*slot)() ```
void q_scilexerxml_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerXML_OnLexerId((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self ```
const char* q_scilexerxml_auto_completion_fillups(void* self) {
    return QsciLexerXML_AutoCompletionFillups((QsciLexerXML*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self ```
const char* q_scilexerxml_qbase_auto_completion_fillups(void* self) {
    return QsciLexerXML_QBaseAutoCompletionFillups((QsciLexerXML*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, const char* (*slot)() ```
void q_scilexerxml_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerXML_OnAutoCompletionFillups((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self ```
const char** q_scilexerxml_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerXML_AutoCompletionWordSeparators((QsciLexerXML*)self);
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
/// ``` QsciLexerXML* self ```
const char** q_scilexerxml_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerXML_QBaseAutoCompletionWordSeparators((QsciLexerXML*)self);
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
/// ``` QsciLexerXML* self, const char** (*slot)() ```
void q_scilexerxml_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerXML_OnAutoCompletionWordSeparators((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self, int* style ```
const char* q_scilexerxml_block_end(void* self, int* style) {
    return QsciLexerXML_BlockEnd((QsciLexerXML*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self, int* style ```
const char* q_scilexerxml_qbase_block_end(void* self, int* style) {
    return QsciLexerXML_QBaseBlockEnd((QsciLexerXML*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, const char* (*slot)(QsciLexerXML*, int*) ```
void q_scilexerxml_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerXML_OnBlockEnd((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self ```
int32_t q_scilexerxml_block_lookback(void* self) {
    return QsciLexerXML_BlockLookback((QsciLexerXML*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self ```
int32_t q_scilexerxml_qbase_block_lookback(void* self) {
    return QsciLexerXML_QBaseBlockLookback((QsciLexerXML*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, int32_t (*slot)() ```
void q_scilexerxml_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerXML_OnBlockLookback((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self, int* style ```
const char* q_scilexerxml_block_start(void* self, int* style) {
    return QsciLexerXML_BlockStart((QsciLexerXML*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self, int* style ```
const char* q_scilexerxml_qbase_block_start(void* self, int* style) {
    return QsciLexerXML_QBaseBlockStart((QsciLexerXML*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, const char* (*slot)(QsciLexerXML*, int*) ```
void q_scilexerxml_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerXML_OnBlockStart((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self, int* style ```
const char* q_scilexerxml_block_start_keyword(void* self, int* style) {
    return QsciLexerXML_BlockStartKeyword((QsciLexerXML*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self, int* style ```
const char* q_scilexerxml_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerXML_QBaseBlockStartKeyword((QsciLexerXML*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, const char* (*slot)(QsciLexerXML*, int*) ```
void q_scilexerxml_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerXML_OnBlockStartKeyword((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#braceStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self ```
int32_t q_scilexerxml_brace_style(void* self) {
    return QsciLexerXML_BraceStyle((QsciLexerXML*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self ```
int32_t q_scilexerxml_qbase_brace_style(void* self) {
    return QsciLexerXML_QBaseBraceStyle((QsciLexerXML*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, int32_t (*slot)() ```
void q_scilexerxml_on_brace_style(void* self, int32_t (*slot)()) {
    QsciLexerXML_OnBraceStyle((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self ```
bool q_scilexerxml_case_sensitive(void* self) {
    return QsciLexerXML_CaseSensitive((QsciLexerXML*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self ```
bool q_scilexerxml_qbase_case_sensitive(void* self) {
    return QsciLexerXML_QBaseCaseSensitive((QsciLexerXML*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, bool (*slot)() ```
void q_scilexerxml_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerXML_OnCaseSensitive((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self, int style ```
QColor* q_scilexerxml_color(void* self, int style) {
    return QsciLexerXML_Color((QsciLexerXML*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self, int style ```
QColor* q_scilexerxml_qbase_color(void* self, int style) {
    return QsciLexerXML_QBaseColor((QsciLexerXML*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, QColor* (*slot)(QsciLexerXML*, int) ```
void q_scilexerxml_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerXML_OnColor((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self, int style ```
bool q_scilexerxml_eol_fill(void* self, int style) {
    return QsciLexerXML_EolFill((QsciLexerXML*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self, int style ```
bool q_scilexerxml_qbase_eol_fill(void* self, int style) {
    return QsciLexerXML_QBaseEolFill((QsciLexerXML*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, bool (*slot)(QsciLexerXML*, int) ```
void q_scilexerxml_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerXML_OnEolFill((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self, int style ```
QFont* q_scilexerxml_font(void* self, int style) {
    return QsciLexerXML_Font((QsciLexerXML*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self, int style ```
QFont* q_scilexerxml_qbase_font(void* self, int style) {
    return QsciLexerXML_QBaseFont((QsciLexerXML*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, QFont* (*slot)(QsciLexerXML*, int) ```
void q_scilexerxml_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerXML_OnFont((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self ```
int32_t q_scilexerxml_indentation_guide_view(void* self) {
    return QsciLexerXML_IndentationGuideView((QsciLexerXML*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self ```
int32_t q_scilexerxml_qbase_indentation_guide_view(void* self) {
    return QsciLexerXML_QBaseIndentationGuideView((QsciLexerXML*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, int32_t (*slot)() ```
void q_scilexerxml_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerXML_OnIndentationGuideView((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self ```
int32_t q_scilexerxml_default_style(void* self) {
    return QsciLexerXML_DefaultStyle((QsciLexerXML*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self ```
int32_t q_scilexerxml_qbase_default_style(void* self) {
    return QsciLexerXML_QBaseDefaultStyle((QsciLexerXML*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, int32_t (*slot)() ```
void q_scilexerxml_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerXML_OnDefaultStyle((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#description)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self, int style ```
const char* q_scilexerxml_description(void* self, int style) {
    libqt_string _str = QsciLexerXML_Description((QsciLexerXML*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self, int style ```
const char* q_scilexerxml_qbase_description(void* self, int style) {
    libqt_string _str = QsciLexerXML_QBaseDescription((QsciLexerXML*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, const char* (*slot)(QsciLexerXML*, int) ```
void q_scilexerxml_on_description(void* self, const char* (*slot)(void*, int)) {
    QsciLexerXML_OnDescription((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self, int style ```
QColor* q_scilexerxml_paper(void* self, int style) {
    return QsciLexerXML_Paper((QsciLexerXML*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self, int style ```
QColor* q_scilexerxml_qbase_paper(void* self, int style) {
    return QsciLexerXML_QBasePaper((QsciLexerXML*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, QColor* (*slot)(QsciLexerXML*, int) ```
void q_scilexerxml_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerXML_OnPaper((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self, int style ```
QColor* q_scilexerxml_default_color_with_style(void* self, int style) {
    return QsciLexerXML_DefaultColorWithStyle((QsciLexerXML*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self, int style ```
QColor* q_scilexerxml_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerXML_QBaseDefaultColorWithStyle((QsciLexerXML*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, QColor* (*slot)(QsciLexerXML*, int) ```
void q_scilexerxml_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerXML_OnDefaultColorWithStyle((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self, int style ```
QFont* q_scilexerxml_default_font_with_style(void* self, int style) {
    return QsciLexerXML_DefaultFontWithStyle((QsciLexerXML*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self, int style ```
QFont* q_scilexerxml_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerXML_QBaseDefaultFontWithStyle((QsciLexerXML*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, QFont* (*slot)(QsciLexerXML*, int) ```
void q_scilexerxml_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerXML_OnDefaultFontWithStyle((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self, int style ```
QColor* q_scilexerxml_default_paper_with_style(void* self, int style) {
    return QsciLexerXML_DefaultPaperWithStyle((QsciLexerXML*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self, int style ```
QColor* q_scilexerxml_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerXML_QBaseDefaultPaperWithStyle((QsciLexerXML*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, QColor* (*slot)(QsciLexerXML*, int) ```
void q_scilexerxml_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerXML_OnDefaultPaperWithStyle((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self, QsciScintilla* editor ```
void q_scilexerxml_set_editor(void* self, void* editor) {
    QsciLexerXML_SetEditor((QsciLexerXML*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self, QsciScintilla* editor ```
void q_scilexerxml_qbase_set_editor(void* self, void* editor) {
    QsciLexerXML_QBaseSetEditor((QsciLexerXML*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, void (*slot)(QsciLexerXML*, QsciScintilla*) ```
void q_scilexerxml_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerXML_OnSetEditor((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self ```
int32_t q_scilexerxml_style_bits_needed(void* self) {
    return QsciLexerXML_StyleBitsNeeded((QsciLexerXML*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self ```
int32_t q_scilexerxml_qbase_style_bits_needed(void* self) {
    return QsciLexerXML_QBaseStyleBitsNeeded((QsciLexerXML*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, int32_t (*slot)() ```
void q_scilexerxml_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerXML_OnStyleBitsNeeded((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self ```
const char* q_scilexerxml_word_characters(void* self) {
    return QsciLexerXML_WordCharacters((QsciLexerXML*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self ```
const char* q_scilexerxml_qbase_word_characters(void* self) {
    return QsciLexerXML_QBaseWordCharacters((QsciLexerXML*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, const char* (*slot)() ```
void q_scilexerxml_on_word_characters(void* self, const char* (*slot)()) {
    QsciLexerXML_OnWordCharacters((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self, int autoindentstyle ```
void q_scilexerxml_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerXML_SetAutoIndentStyle((QsciLexerXML*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self, int autoindentstyle ```
void q_scilexerxml_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerXML_QBaseSetAutoIndentStyle((QsciLexerXML*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, void (*slot)(QsciLexerXML*, int) ```
void q_scilexerxml_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerXML_OnSetAutoIndentStyle((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self, QColor* c, int style ```
void q_scilexerxml_set_color(void* self, void* c, int style) {
    QsciLexerXML_SetColor((QsciLexerXML*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self, QColor* c, int style ```
void q_scilexerxml_qbase_set_color(void* self, void* c, int style) {
    QsciLexerXML_QBaseSetColor((QsciLexerXML*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, void (*slot)(QsciLexerXML*, QColor*, int) ```
void q_scilexerxml_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerXML_OnSetColor((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self, bool eoffill, int style ```
void q_scilexerxml_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerXML_SetEolFill((QsciLexerXML*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self, bool eoffill, int style ```
void q_scilexerxml_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerXML_QBaseSetEolFill((QsciLexerXML*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, void (*slot)(QsciLexerXML*, bool, int) ```
void q_scilexerxml_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerXML_OnSetEolFill((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self, QFont* f, int style ```
void q_scilexerxml_set_font(void* self, void* f, int style) {
    QsciLexerXML_SetFont((QsciLexerXML*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self, QFont* f, int style ```
void q_scilexerxml_qbase_set_font(void* self, void* f, int style) {
    QsciLexerXML_QBaseSetFont((QsciLexerXML*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, void (*slot)(QsciLexerXML*, QFont*, int) ```
void q_scilexerxml_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerXML_OnSetFont((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self, QColor* c, int style ```
void q_scilexerxml_set_paper(void* self, void* c, int style) {
    QsciLexerXML_SetPaper((QsciLexerXML*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self, QColor* c, int style ```
void q_scilexerxml_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerXML_QBaseSetPaper((QsciLexerXML*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, void (*slot)(QsciLexerXML*, QColor*, int) ```
void q_scilexerxml_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerXML_OnSetPaper((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self, QEvent* event ```
bool q_scilexerxml_event(void* self, void* event) {
    return QsciLexerXML_Event((QsciLexerXML*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self, QEvent* event ```
bool q_scilexerxml_qbase_event(void* self, void* event) {
    return QsciLexerXML_QBaseEvent((QsciLexerXML*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, bool (*slot)(QsciLexerXML*, QEvent*) ```
void q_scilexerxml_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerXML_OnEvent((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self, QObject* watched, QEvent* event ```
bool q_scilexerxml_event_filter(void* self, void* watched, void* event) {
    return QsciLexerXML_EventFilter((QsciLexerXML*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self, QObject* watched, QEvent* event ```
bool q_scilexerxml_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerXML_QBaseEventFilter((QsciLexerXML*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, bool (*slot)(QsciLexerXML*, QObject*, QEvent*) ```
void q_scilexerxml_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerXML_OnEventFilter((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self, QTimerEvent* event ```
void q_scilexerxml_timer_event(void* self, void* event) {
    QsciLexerXML_TimerEvent((QsciLexerXML*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self, QTimerEvent* event ```
void q_scilexerxml_qbase_timer_event(void* self, void* event) {
    QsciLexerXML_QBaseTimerEvent((QsciLexerXML*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, void (*slot)(QsciLexerXML*, QTimerEvent*) ```
void q_scilexerxml_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerXML_OnTimerEvent((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self, QChildEvent* event ```
void q_scilexerxml_child_event(void* self, void* event) {
    QsciLexerXML_ChildEvent((QsciLexerXML*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self, QChildEvent* event ```
void q_scilexerxml_qbase_child_event(void* self, void* event) {
    QsciLexerXML_QBaseChildEvent((QsciLexerXML*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, void (*slot)(QsciLexerXML*, QChildEvent*) ```
void q_scilexerxml_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerXML_OnChildEvent((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self, QEvent* event ```
void q_scilexerxml_custom_event(void* self, void* event) {
    QsciLexerXML_CustomEvent((QsciLexerXML*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self, QEvent* event ```
void q_scilexerxml_qbase_custom_event(void* self, void* event) {
    QsciLexerXML_QBaseCustomEvent((QsciLexerXML*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, void (*slot)(QsciLexerXML*, QEvent*) ```
void q_scilexerxml_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerXML_OnCustomEvent((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self, QMetaMethod* signal ```
void q_scilexerxml_connect_notify(void* self, void* signal) {
    QsciLexerXML_ConnectNotify((QsciLexerXML*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self, QMetaMethod* signal ```
void q_scilexerxml_qbase_connect_notify(void* self, void* signal) {
    QsciLexerXML_QBaseConnectNotify((QsciLexerXML*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, void (*slot)(QsciLexerXML*, QMetaMethod*) ```
void q_scilexerxml_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerXML_OnConnectNotify((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self, QMetaMethod* signal ```
void q_scilexerxml_disconnect_notify(void* self, void* signal) {
    QsciLexerXML_DisconnectNotify((QsciLexerXML*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self, QMetaMethod* signal ```
void q_scilexerxml_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerXML_QBaseDisconnectNotify((QsciLexerXML*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, void (*slot)(QsciLexerXML*, QMetaMethod*) ```
void q_scilexerxml_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerXML_OnDisconnectNotify((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self ```
QObject* q_scilexerxml_sender(void* self) {
    return QsciLexerXML_Sender((QsciLexerXML*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self ```
QObject* q_scilexerxml_qbase_sender(void* self) {
    return QsciLexerXML_QBaseSender((QsciLexerXML*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, QObject* (*slot)() ```
void q_scilexerxml_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerXML_OnSender((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self ```
int32_t q_scilexerxml_sender_signal_index(void* self) {
    return QsciLexerXML_SenderSignalIndex((QsciLexerXML*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self ```
int32_t q_scilexerxml_qbase_sender_signal_index(void* self) {
    return QsciLexerXML_QBaseSenderSignalIndex((QsciLexerXML*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, int32_t (*slot)() ```
void q_scilexerxml_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerXML_OnSenderSignalIndex((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self, const char* signal ```
int32_t q_scilexerxml_receivers(void* self, const char* signal) {
    return QsciLexerXML_Receivers((QsciLexerXML*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self, const char* signal ```
int32_t q_scilexerxml_qbase_receivers(void* self, const char* signal) {
    return QsciLexerXML_QBaseReceivers((QsciLexerXML*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, int32_t (*slot)(QsciLexerXML*, const char*) ```
void q_scilexerxml_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerXML_OnReceivers((QsciLexerXML*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerXML* self, QMetaMethod* signal ```
bool q_scilexerxml_is_signal_connected(void* self, void* signal) {
    return QsciLexerXML_IsSignalConnected((QsciLexerXML*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerXML* self, QMetaMethod* signal ```
bool q_scilexerxml_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerXML_QBaseIsSignalConnected((QsciLexerXML*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerXML* self, bool (*slot)(QsciLexerXML*, QMetaMethod*) ```
void q_scilexerxml_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerXML_OnIsSignalConnected((QsciLexerXML*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexerXML* self ```
void q_scilexerxml_delete(void* self) {
    QsciLexerXML_Delete((QsciLexerXML*)(self));
}