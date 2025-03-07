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
#include "libqscilexeravs.hpp"
#include "libqscilexeravs.h"

/// https://doc.qt.io/qt-6/qscilexeravs.html

/// q_scilexeravs_new constructs a new QsciLexerAVS object.
///
///
QsciLexerAVS* q_scilexeravs_new() {
    return QsciLexerAVS_new();
}

/// q_scilexeravs_new2 constructs a new QsciLexerAVS object.
///
/// ``` QObject* parent ```
QsciLexerAVS* q_scilexeravs_new2(void* parent) {
    return QsciLexerAVS_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerAVS* self ```
QMetaObject* q_scilexeravs_meta_object(void* self) {
    return QsciLexerAVS_MetaObject((QsciLexerAVS*)self);
}

/// ``` QsciLexerAVS* self, const char* param1 ```
void* q_scilexeravs_metacast(void* self, const char* param1) {
    return QsciLexerAVS_Metacast((QsciLexerAVS*)self, param1);
}

/// ``` QsciLexerAVS* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexeravs_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerAVS_Metacall((QsciLexerAVS*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerAVS* self, int32_t (*slot)(QsciLexerAVS*, enum QMetaObject__Call, int, void*) ```
void q_scilexeravs_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerAVS_OnMetacall((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerAVS* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexeravs_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerAVS_QBaseMetacall((QsciLexerAVS*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexeravs_tr(const char* s) {
    libqt_string _str = QsciLexerAVS_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexeravs.html#language)
///
/// ``` QsciLexerAVS* self ```
const char* q_scilexeravs_language(void* self) {
    return QsciLexerAVS_Language((QsciLexerAVS*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexeravs.html#lexer)
///
/// ``` QsciLexerAVS* self ```
const char* q_scilexeravs_lexer(void* self) {
    return QsciLexerAVS_Lexer((QsciLexerAVS*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexeravs.html#braceStyle)
///
/// ``` QsciLexerAVS* self ```
int32_t q_scilexeravs_brace_style(void* self) {
    return QsciLexerAVS_BraceStyle((QsciLexerAVS*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexeravs.html#wordCharacters)
///
/// ``` QsciLexerAVS* self ```
const char* q_scilexeravs_word_characters(void* self) {
    return QsciLexerAVS_WordCharacters((QsciLexerAVS*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexeravs.html#defaultColor)
///
/// ``` QsciLexerAVS* self, int style ```
QColor* q_scilexeravs_default_color(void* self, int style) {
    return QsciLexerAVS_DefaultColor((QsciLexerAVS*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexeravs.html#defaultFont)
///
/// ``` QsciLexerAVS* self, int style ```
QFont* q_scilexeravs_default_font(void* self, int style) {
    return QsciLexerAVS_DefaultFont((QsciLexerAVS*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexeravs.html#keywords)
///
/// ``` QsciLexerAVS* self, int set ```
const char* q_scilexeravs_keywords(void* self, int set) {
    return QsciLexerAVS_Keywords((QsciLexerAVS*)self, set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexeravs.html#description)
///
/// ``` QsciLexerAVS* self, int style ```
const char* q_scilexeravs_description(void* self, int style) {
    libqt_string _str = QsciLexerAVS_Description((QsciLexerAVS*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexeravs.html#refreshProperties)
///
/// ``` QsciLexerAVS* self ```
void q_scilexeravs_refresh_properties(void* self) {
    QsciLexerAVS_RefreshProperties((QsciLexerAVS*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexeravs.html#foldComments)
///
/// ``` QsciLexerAVS* self ```
bool q_scilexeravs_fold_comments(void* self) {
    return QsciLexerAVS_FoldComments((QsciLexerAVS*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexeravs.html#foldCompact)
///
/// ``` QsciLexerAVS* self ```
bool q_scilexeravs_fold_compact(void* self) {
    return QsciLexerAVS_FoldCompact((QsciLexerAVS*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexeravs.html#setFoldComments)
///
/// ``` QsciLexerAVS* self, bool fold ```
void q_scilexeravs_set_fold_comments(void* self, bool fold) {
    QsciLexerAVS_SetFoldComments((QsciLexerAVS*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerAVS* self, void (*slot)(QsciLexerAVS*, bool) ```
void q_scilexeravs_on_set_fold_comments(void* self, void (*slot)(void*, bool)) {
    QsciLexerAVS_OnSetFoldComments((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerAVS* self, bool fold ```
void q_scilexeravs_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerAVS_QBaseSetFoldComments((QsciLexerAVS*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexeravs.html#setFoldCompact)
///
/// ``` QsciLexerAVS* self, bool fold ```
void q_scilexeravs_set_fold_compact(void* self, bool fold) {
    QsciLexerAVS_SetFoldCompact((QsciLexerAVS*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerAVS* self, void (*slot)(QsciLexerAVS*, bool) ```
void q_scilexeravs_on_set_fold_compact(void* self, void (*slot)(void*, bool)) {
    QsciLexerAVS_OnSetFoldCompact((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerAVS* self, bool fold ```
void q_scilexeravs_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerAVS_QBaseSetFoldCompact((QsciLexerAVS*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexeravs.html#readProperties)
///
/// ``` QsciLexerAVS* self, QSettings* qs, const char* prefix ```
bool q_scilexeravs_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerAVS_ReadProperties((QsciLexerAVS*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerAVS* self, bool (*slot)(QsciLexerAVS*, QSettings*, const char*) ```
void q_scilexeravs_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerAVS_OnReadProperties((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerAVS* self, QSettings* qs, const char* prefix ```
bool q_scilexeravs_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerAVS_QBaseReadProperties((QsciLexerAVS*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexeravs.html#writeProperties)
///
/// ``` QsciLexerAVS* self, QSettings* qs, const char* prefix ```
bool q_scilexeravs_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerAVS_WriteProperties((QsciLexerAVS*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerAVS* self, bool (*slot)(QsciLexerAVS*, QSettings*, const char*) ```
void q_scilexeravs_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerAVS_OnWriteProperties((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerAVS* self, QSettings* qs, const char* prefix ```
bool q_scilexeravs_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerAVS_QBaseWriteProperties((QsciLexerAVS*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexeravs_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerAVS_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexeravs_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerAVS_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerAVS* self ```
QsciAbstractAPIs* q_scilexeravs_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerAVS* self ```
int32_t q_scilexeravs_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// ``` QsciLexerAVS* self ```
QColor* q_scilexeravs_default_paper(void* self) {
    return QsciLexer_DefaultPaper((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerAVS* self ```
QsciScintilla* q_scilexeravs_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerAVS* self, QsciAbstractAPIs* apis ```
void q_scilexeravs_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerAVS* self, QColor* c ```
void q_scilexeravs_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerAVS* self, QFont* f ```
void q_scilexeravs_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerAVS* self, QColor* c ```
void q_scilexeravs_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerAVS* self, QSettings* qs ```
bool q_scilexeravs_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerAVS* self, QSettings* qs ```
bool q_scilexeravs_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerAVS* self, QColor* c, int style ```
void q_scilexeravs_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerAVS* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexeravs_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerAVS* self, bool eolfilled, int style ```
void q_scilexeravs_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerAVS* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexeravs_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerAVS* self, QFont* f, int style ```
void q_scilexeravs_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerAVS* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexeravs_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerAVS* self, QColor* c, int style ```
void q_scilexeravs_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerAVS* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexeravs_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerAVS* self, const char* prop, const char* val ```
void q_scilexeravs_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerAVS* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexeravs_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerAVS* self, QSettings* qs, const char* prefix ```
bool q_scilexeravs_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerAVS* self, QSettings* qs, const char* prefix ```
bool q_scilexeravs_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerAVS* self ```
const char* q_scilexeravs_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerAVS* self, const char* name ```
void q_scilexeravs_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerAVS* self ```
bool q_scilexeravs_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerAVS* self ```
bool q_scilexeravs_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerAVS* self ```
bool q_scilexeravs_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerAVS* self ```
bool q_scilexeravs_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerAVS* self, bool b ```
bool q_scilexeravs_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerAVS* self ```
QThread* q_scilexeravs_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerAVS* self, QThread* thread ```
void q_scilexeravs_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerAVS* self, int interval ```
int32_t q_scilexeravs_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerAVS* self, int id ```
void q_scilexeravs_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerAVS* self ```
libqt_list /* of QObject* */ q_scilexeravs_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerAVS* self, QObject* parent ```
void q_scilexeravs_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerAVS* self, QObject* filterObj ```
void q_scilexeravs_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerAVS* self, QObject* obj ```
void q_scilexeravs_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexeravs_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerAVS* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexeravs_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexeravs_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexeravs_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerAVS* self ```
void q_scilexeravs_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerAVS* self ```
void q_scilexeravs_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerAVS* self, const char* name, QVariant* value ```
bool q_scilexeravs_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerAVS* self, const char* name ```
QVariant* q_scilexeravs_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerAVS* self ```
const char** q_scilexeravs_dynamic_property_names(void* self) {
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
/// ``` QsciLexerAVS* self ```
QBindingStorage* q_scilexeravs_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerAVS* self ```
QBindingStorage* q_scilexeravs_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerAVS* self ```
void q_scilexeravs_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexerAVS* self, void (*slot)(QObject*) ```
void q_scilexeravs_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerAVS* self ```
QObject* q_scilexeravs_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerAVS* self, const char* classname ```
bool q_scilexeravs_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerAVS* self ```
void q_scilexeravs_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerAVS* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexeravs_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexeravs_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerAVS* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexeravs_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerAVS* self, QObject* param1 ```
void q_scilexeravs_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexerAVS* self, void (*slot)(QObject*, QObject*) ```
void q_scilexeravs_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self ```
int32_t q_scilexeravs_lexer_id(void* self) {
    return QsciLexerAVS_LexerId((QsciLexerAVS*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self ```
int32_t q_scilexeravs_qbase_lexer_id(void* self) {
    return QsciLexerAVS_QBaseLexerId((QsciLexerAVS*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, int32_t (*slot)() ```
void q_scilexeravs_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerAVS_OnLexerId((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self ```
const char* q_scilexeravs_auto_completion_fillups(void* self) {
    return QsciLexerAVS_AutoCompletionFillups((QsciLexerAVS*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self ```
const char* q_scilexeravs_qbase_auto_completion_fillups(void* self) {
    return QsciLexerAVS_QBaseAutoCompletionFillups((QsciLexerAVS*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, const char* (*slot)() ```
void q_scilexeravs_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerAVS_OnAutoCompletionFillups((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self ```
const char** q_scilexeravs_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerAVS_AutoCompletionWordSeparators((QsciLexerAVS*)self);
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
/// ``` QsciLexerAVS* self ```
const char** q_scilexeravs_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerAVS_QBaseAutoCompletionWordSeparators((QsciLexerAVS*)self);
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
/// ``` QsciLexerAVS* self, const char** (*slot)() ```
void q_scilexeravs_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerAVS_OnAutoCompletionWordSeparators((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self, int* style ```
const char* q_scilexeravs_block_end(void* self, int* style) {
    return QsciLexerAVS_BlockEnd((QsciLexerAVS*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self, int* style ```
const char* q_scilexeravs_qbase_block_end(void* self, int* style) {
    return QsciLexerAVS_QBaseBlockEnd((QsciLexerAVS*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, const char* (*slot)(QsciLexerAVS*, int*) ```
void q_scilexeravs_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerAVS_OnBlockEnd((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self ```
int32_t q_scilexeravs_block_lookback(void* self) {
    return QsciLexerAVS_BlockLookback((QsciLexerAVS*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self ```
int32_t q_scilexeravs_qbase_block_lookback(void* self) {
    return QsciLexerAVS_QBaseBlockLookback((QsciLexerAVS*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, int32_t (*slot)() ```
void q_scilexeravs_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerAVS_OnBlockLookback((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self, int* style ```
const char* q_scilexeravs_block_start(void* self, int* style) {
    return QsciLexerAVS_BlockStart((QsciLexerAVS*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self, int* style ```
const char* q_scilexeravs_qbase_block_start(void* self, int* style) {
    return QsciLexerAVS_QBaseBlockStart((QsciLexerAVS*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, const char* (*slot)(QsciLexerAVS*, int*) ```
void q_scilexeravs_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerAVS_OnBlockStart((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self, int* style ```
const char* q_scilexeravs_block_start_keyword(void* self, int* style) {
    return QsciLexerAVS_BlockStartKeyword((QsciLexerAVS*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self, int* style ```
const char* q_scilexeravs_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerAVS_QBaseBlockStartKeyword((QsciLexerAVS*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, const char* (*slot)(QsciLexerAVS*, int*) ```
void q_scilexeravs_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerAVS_OnBlockStartKeyword((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self ```
bool q_scilexeravs_case_sensitive(void* self) {
    return QsciLexerAVS_CaseSensitive((QsciLexerAVS*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self ```
bool q_scilexeravs_qbase_case_sensitive(void* self) {
    return QsciLexerAVS_QBaseCaseSensitive((QsciLexerAVS*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, bool (*slot)() ```
void q_scilexeravs_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerAVS_OnCaseSensitive((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self, int style ```
QColor* q_scilexeravs_color(void* self, int style) {
    return QsciLexerAVS_Color((QsciLexerAVS*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self, int style ```
QColor* q_scilexeravs_qbase_color(void* self, int style) {
    return QsciLexerAVS_QBaseColor((QsciLexerAVS*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, QColor* (*slot)(QsciLexerAVS*, int) ```
void q_scilexeravs_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerAVS_OnColor((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self, int style ```
bool q_scilexeravs_eol_fill(void* self, int style) {
    return QsciLexerAVS_EolFill((QsciLexerAVS*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self, int style ```
bool q_scilexeravs_qbase_eol_fill(void* self, int style) {
    return QsciLexerAVS_QBaseEolFill((QsciLexerAVS*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, bool (*slot)(QsciLexerAVS*, int) ```
void q_scilexeravs_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerAVS_OnEolFill((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self, int style ```
QFont* q_scilexeravs_font(void* self, int style) {
    return QsciLexerAVS_Font((QsciLexerAVS*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self, int style ```
QFont* q_scilexeravs_qbase_font(void* self, int style) {
    return QsciLexerAVS_QBaseFont((QsciLexerAVS*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, QFont* (*slot)(QsciLexerAVS*, int) ```
void q_scilexeravs_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerAVS_OnFont((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self ```
int32_t q_scilexeravs_indentation_guide_view(void* self) {
    return QsciLexerAVS_IndentationGuideView((QsciLexerAVS*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self ```
int32_t q_scilexeravs_qbase_indentation_guide_view(void* self) {
    return QsciLexerAVS_QBaseIndentationGuideView((QsciLexerAVS*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, int32_t (*slot)() ```
void q_scilexeravs_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerAVS_OnIndentationGuideView((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self ```
int32_t q_scilexeravs_default_style(void* self) {
    return QsciLexerAVS_DefaultStyle((QsciLexerAVS*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self ```
int32_t q_scilexeravs_qbase_default_style(void* self) {
    return QsciLexerAVS_QBaseDefaultStyle((QsciLexerAVS*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, int32_t (*slot)() ```
void q_scilexeravs_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerAVS_OnDefaultStyle((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self, int style ```
QColor* q_scilexeravs_paper(void* self, int style) {
    return QsciLexerAVS_Paper((QsciLexerAVS*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self, int style ```
QColor* q_scilexeravs_qbase_paper(void* self, int style) {
    return QsciLexerAVS_QBasePaper((QsciLexerAVS*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, QColor* (*slot)(QsciLexerAVS*, int) ```
void q_scilexeravs_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerAVS_OnPaper((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self, int style ```
QColor* q_scilexeravs_default_color_with_style(void* self, int style) {
    return QsciLexerAVS_DefaultColorWithStyle((QsciLexerAVS*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self, int style ```
QColor* q_scilexeravs_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerAVS_QBaseDefaultColorWithStyle((QsciLexerAVS*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, QColor* (*slot)(QsciLexerAVS*, int) ```
void q_scilexeravs_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerAVS_OnDefaultColorWithStyle((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self, int style ```
bool q_scilexeravs_default_eol_fill(void* self, int style) {
    return QsciLexerAVS_DefaultEolFill((QsciLexerAVS*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self, int style ```
bool q_scilexeravs_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerAVS_QBaseDefaultEolFill((QsciLexerAVS*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, bool (*slot)(QsciLexerAVS*, int) ```
void q_scilexeravs_on_default_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerAVS_OnDefaultEolFill((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self, int style ```
QFont* q_scilexeravs_default_font_with_style(void* self, int style) {
    return QsciLexerAVS_DefaultFontWithStyle((QsciLexerAVS*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self, int style ```
QFont* q_scilexeravs_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerAVS_QBaseDefaultFontWithStyle((QsciLexerAVS*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, QFont* (*slot)(QsciLexerAVS*, int) ```
void q_scilexeravs_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerAVS_OnDefaultFontWithStyle((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self, int style ```
QColor* q_scilexeravs_default_paper_with_style(void* self, int style) {
    return QsciLexerAVS_DefaultPaperWithStyle((QsciLexerAVS*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self, int style ```
QColor* q_scilexeravs_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerAVS_QBaseDefaultPaperWithStyle((QsciLexerAVS*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, QColor* (*slot)(QsciLexerAVS*, int) ```
void q_scilexeravs_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerAVS_OnDefaultPaperWithStyle((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self, QsciScintilla* editor ```
void q_scilexeravs_set_editor(void* self, void* editor) {
    QsciLexerAVS_SetEditor((QsciLexerAVS*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self, QsciScintilla* editor ```
void q_scilexeravs_qbase_set_editor(void* self, void* editor) {
    QsciLexerAVS_QBaseSetEditor((QsciLexerAVS*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, void (*slot)(QsciLexerAVS*, QsciScintilla*) ```
void q_scilexeravs_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerAVS_OnSetEditor((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self ```
int32_t q_scilexeravs_style_bits_needed(void* self) {
    return QsciLexerAVS_StyleBitsNeeded((QsciLexerAVS*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self ```
int32_t q_scilexeravs_qbase_style_bits_needed(void* self) {
    return QsciLexerAVS_QBaseStyleBitsNeeded((QsciLexerAVS*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, int32_t (*slot)() ```
void q_scilexeravs_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerAVS_OnStyleBitsNeeded((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self, int autoindentstyle ```
void q_scilexeravs_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerAVS_SetAutoIndentStyle((QsciLexerAVS*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self, int autoindentstyle ```
void q_scilexeravs_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerAVS_QBaseSetAutoIndentStyle((QsciLexerAVS*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, void (*slot)(QsciLexerAVS*, int) ```
void q_scilexeravs_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerAVS_OnSetAutoIndentStyle((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self, QColor* c, int style ```
void q_scilexeravs_set_color(void* self, void* c, int style) {
    QsciLexerAVS_SetColor((QsciLexerAVS*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self, QColor* c, int style ```
void q_scilexeravs_qbase_set_color(void* self, void* c, int style) {
    QsciLexerAVS_QBaseSetColor((QsciLexerAVS*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, void (*slot)(QsciLexerAVS*, QColor*, int) ```
void q_scilexeravs_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerAVS_OnSetColor((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self, bool eoffill, int style ```
void q_scilexeravs_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerAVS_SetEolFill((QsciLexerAVS*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self, bool eoffill, int style ```
void q_scilexeravs_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerAVS_QBaseSetEolFill((QsciLexerAVS*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, void (*slot)(QsciLexerAVS*, bool, int) ```
void q_scilexeravs_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerAVS_OnSetEolFill((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self, QFont* f, int style ```
void q_scilexeravs_set_font(void* self, void* f, int style) {
    QsciLexerAVS_SetFont((QsciLexerAVS*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self, QFont* f, int style ```
void q_scilexeravs_qbase_set_font(void* self, void* f, int style) {
    QsciLexerAVS_QBaseSetFont((QsciLexerAVS*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, void (*slot)(QsciLexerAVS*, QFont*, int) ```
void q_scilexeravs_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerAVS_OnSetFont((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self, QColor* c, int style ```
void q_scilexeravs_set_paper(void* self, void* c, int style) {
    QsciLexerAVS_SetPaper((QsciLexerAVS*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self, QColor* c, int style ```
void q_scilexeravs_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerAVS_QBaseSetPaper((QsciLexerAVS*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, void (*slot)(QsciLexerAVS*, QColor*, int) ```
void q_scilexeravs_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerAVS_OnSetPaper((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self, QEvent* event ```
bool q_scilexeravs_event(void* self, void* event) {
    return QsciLexerAVS_Event((QsciLexerAVS*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self, QEvent* event ```
bool q_scilexeravs_qbase_event(void* self, void* event) {
    return QsciLexerAVS_QBaseEvent((QsciLexerAVS*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, bool (*slot)(QsciLexerAVS*, QEvent*) ```
void q_scilexeravs_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerAVS_OnEvent((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self, QObject* watched, QEvent* event ```
bool q_scilexeravs_event_filter(void* self, void* watched, void* event) {
    return QsciLexerAVS_EventFilter((QsciLexerAVS*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self, QObject* watched, QEvent* event ```
bool q_scilexeravs_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerAVS_QBaseEventFilter((QsciLexerAVS*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, bool (*slot)(QsciLexerAVS*, QObject*, QEvent*) ```
void q_scilexeravs_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerAVS_OnEventFilter((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self, QTimerEvent* event ```
void q_scilexeravs_timer_event(void* self, void* event) {
    QsciLexerAVS_TimerEvent((QsciLexerAVS*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self, QTimerEvent* event ```
void q_scilexeravs_qbase_timer_event(void* self, void* event) {
    QsciLexerAVS_QBaseTimerEvent((QsciLexerAVS*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, void (*slot)(QsciLexerAVS*, QTimerEvent*) ```
void q_scilexeravs_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerAVS_OnTimerEvent((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self, QChildEvent* event ```
void q_scilexeravs_child_event(void* self, void* event) {
    QsciLexerAVS_ChildEvent((QsciLexerAVS*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self, QChildEvent* event ```
void q_scilexeravs_qbase_child_event(void* self, void* event) {
    QsciLexerAVS_QBaseChildEvent((QsciLexerAVS*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, void (*slot)(QsciLexerAVS*, QChildEvent*) ```
void q_scilexeravs_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerAVS_OnChildEvent((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self, QEvent* event ```
void q_scilexeravs_custom_event(void* self, void* event) {
    QsciLexerAVS_CustomEvent((QsciLexerAVS*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self, QEvent* event ```
void q_scilexeravs_qbase_custom_event(void* self, void* event) {
    QsciLexerAVS_QBaseCustomEvent((QsciLexerAVS*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, void (*slot)(QsciLexerAVS*, QEvent*) ```
void q_scilexeravs_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerAVS_OnCustomEvent((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self, QMetaMethod* signal ```
void q_scilexeravs_connect_notify(void* self, void* signal) {
    QsciLexerAVS_ConnectNotify((QsciLexerAVS*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self, QMetaMethod* signal ```
void q_scilexeravs_qbase_connect_notify(void* self, void* signal) {
    QsciLexerAVS_QBaseConnectNotify((QsciLexerAVS*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, void (*slot)(QsciLexerAVS*, QMetaMethod*) ```
void q_scilexeravs_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerAVS_OnConnectNotify((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self, QMetaMethod* signal ```
void q_scilexeravs_disconnect_notify(void* self, void* signal) {
    QsciLexerAVS_DisconnectNotify((QsciLexerAVS*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self, QMetaMethod* signal ```
void q_scilexeravs_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerAVS_QBaseDisconnectNotify((QsciLexerAVS*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, void (*slot)(QsciLexerAVS*, QMetaMethod*) ```
void q_scilexeravs_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerAVS_OnDisconnectNotify((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self ```
QObject* q_scilexeravs_sender(void* self) {
    return QsciLexerAVS_Sender((QsciLexerAVS*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self ```
QObject* q_scilexeravs_qbase_sender(void* self) {
    return QsciLexerAVS_QBaseSender((QsciLexerAVS*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, QObject* (*slot)() ```
void q_scilexeravs_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerAVS_OnSender((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self ```
int32_t q_scilexeravs_sender_signal_index(void* self) {
    return QsciLexerAVS_SenderSignalIndex((QsciLexerAVS*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self ```
int32_t q_scilexeravs_qbase_sender_signal_index(void* self) {
    return QsciLexerAVS_QBaseSenderSignalIndex((QsciLexerAVS*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, int32_t (*slot)() ```
void q_scilexeravs_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerAVS_OnSenderSignalIndex((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self, const char* signal ```
int32_t q_scilexeravs_receivers(void* self, const char* signal) {
    return QsciLexerAVS_Receivers((QsciLexerAVS*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self, const char* signal ```
int32_t q_scilexeravs_qbase_receivers(void* self, const char* signal) {
    return QsciLexerAVS_QBaseReceivers((QsciLexerAVS*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, int32_t (*slot)(QsciLexerAVS*, const char*) ```
void q_scilexeravs_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerAVS_OnReceivers((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerAVS* self, QMetaMethod* signal ```
bool q_scilexeravs_is_signal_connected(void* self, void* signal) {
    return QsciLexerAVS_IsSignalConnected((QsciLexerAVS*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerAVS* self, QMetaMethod* signal ```
bool q_scilexeravs_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerAVS_QBaseIsSignalConnected((QsciLexerAVS*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerAVS* self, bool (*slot)(QsciLexerAVS*, QMetaMethod*) ```
void q_scilexeravs_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerAVS_OnIsSignalConnected((QsciLexerAVS*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexerAVS* self ```
void q_scilexeravs_delete(void* self) {
    QsciLexerAVS_Delete((QsciLexerAVS*)(self));
}