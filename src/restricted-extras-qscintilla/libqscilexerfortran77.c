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
#include "libqscilexerfortran77.hpp"
#include "libqscilexerfortran77.h"

/// https://doc.qt.io/qt-6/qscilexerfortran77.html

/// q_scilexerfortran77_new constructs a new QsciLexerFortran77 object.
///
///
QsciLexerFortran77* q_scilexerfortran77_new() {
    return QsciLexerFortran77_new();
}

/// q_scilexerfortran77_new2 constructs a new QsciLexerFortran77 object.
///
/// ``` QObject* parent ```
QsciLexerFortran77* q_scilexerfortran77_new2(void* parent) {
    return QsciLexerFortran77_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerFortran77* self ```
QMetaObject* q_scilexerfortran77_meta_object(void* self) {
    return QsciLexerFortran77_MetaObject((QsciLexerFortran77*)self);
}

/// ``` QsciLexerFortran77* self, const char* param1 ```
void* q_scilexerfortran77_metacast(void* self, const char* param1) {
    return QsciLexerFortran77_Metacast((QsciLexerFortran77*)self, param1);
}

/// ``` QsciLexerFortran77* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerfortran77_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerFortran77_Metacall((QsciLexerFortran77*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerFortran77* self, int32_t (*slot)(QsciLexerFortran77*, enum QMetaObject__Call, int, void*) ```
void q_scilexerfortran77_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerFortran77_OnMetacall((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerFortran77* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerfortran77_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerFortran77_QBaseMetacall((QsciLexerFortran77*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexerfortran77_tr(const char* s) {
    libqt_string _str = QsciLexerFortran77_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#language)
///
/// ``` QsciLexerFortran77* self ```
const char* q_scilexerfortran77_language(void* self) {
    return QsciLexerFortran77_Language((QsciLexerFortran77*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#lexer)
///
/// ``` QsciLexerFortran77* self ```
const char* q_scilexerfortran77_lexer(void* self) {
    return QsciLexerFortran77_Lexer((QsciLexerFortran77*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#braceStyle)
///
/// ``` QsciLexerFortran77* self ```
int32_t q_scilexerfortran77_brace_style(void* self) {
    return QsciLexerFortran77_BraceStyle((QsciLexerFortran77*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#defaultColor)
///
/// ``` QsciLexerFortran77* self, int style ```
QColor* q_scilexerfortran77_default_color(void* self, int style) {
    return QsciLexerFortran77_DefaultColor((QsciLexerFortran77*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#defaultEolFill)
///
/// ``` QsciLexerFortran77* self, int style ```
bool q_scilexerfortran77_default_eol_fill(void* self, int style) {
    return QsciLexerFortran77_DefaultEolFill((QsciLexerFortran77*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#defaultFont)
///
/// ``` QsciLexerFortran77* self, int style ```
QFont* q_scilexerfortran77_default_font(void* self, int style) {
    return QsciLexerFortran77_DefaultFont((QsciLexerFortran77*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#defaultPaper)
///
/// ``` QsciLexerFortran77* self, int style ```
QColor* q_scilexerfortran77_default_paper(void* self, int style) {
    return QsciLexerFortran77_DefaultPaper((QsciLexerFortran77*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#keywords)
///
/// ``` QsciLexerFortran77* self, int set ```
const char* q_scilexerfortran77_keywords(void* self, int set) {
    return QsciLexerFortran77_Keywords((QsciLexerFortran77*)self, set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#description)
///
/// ``` QsciLexerFortran77* self, int style ```
const char* q_scilexerfortran77_description(void* self, int style) {
    libqt_string _str = QsciLexerFortran77_Description((QsciLexerFortran77*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#refreshProperties)
///
/// ``` QsciLexerFortran77* self ```
void q_scilexerfortran77_refresh_properties(void* self) {
    QsciLexerFortran77_RefreshProperties((QsciLexerFortran77*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#foldCompact)
///
/// ``` QsciLexerFortran77* self ```
bool q_scilexerfortran77_fold_compact(void* self) {
    return QsciLexerFortran77_FoldCompact((QsciLexerFortran77*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#setFoldCompact)
///
/// ``` QsciLexerFortran77* self, bool fold ```
void q_scilexerfortran77_set_fold_compact(void* self, bool fold) {
    QsciLexerFortran77_SetFoldCompact((QsciLexerFortran77*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexerFortran77*, bool) ```
void q_scilexerfortran77_on_set_fold_compact(void* self, void (*slot)(void*, bool)) {
    QsciLexerFortran77_OnSetFoldCompact((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerFortran77* self, bool fold ```
void q_scilexerfortran77_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerFortran77_QBaseSetFoldCompact((QsciLexerFortran77*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#readProperties)
///
/// ``` QsciLexerFortran77* self, QSettings* qs, const char* prefix ```
bool q_scilexerfortran77_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerFortran77_ReadProperties((QsciLexerFortran77*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerFortran77* self, bool (*slot)(QsciLexerFortran77*, QSettings*, const char*) ```
void q_scilexerfortran77_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerFortran77_OnReadProperties((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerFortran77* self, QSettings* qs, const char* prefix ```
bool q_scilexerfortran77_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerFortran77_QBaseReadProperties((QsciLexerFortran77*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#writeProperties)
///
/// ``` QsciLexerFortran77* self, QSettings* qs, const char* prefix ```
bool q_scilexerfortran77_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerFortran77_WriteProperties((QsciLexerFortran77*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerFortran77* self, bool (*slot)(QsciLexerFortran77*, QSettings*, const char*) ```
void q_scilexerfortran77_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerFortran77_OnWriteProperties((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerFortran77* self, QSettings* qs, const char* prefix ```
bool q_scilexerfortran77_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerFortran77_QBaseWriteProperties((QsciLexerFortran77*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexerfortran77_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerFortran77_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexerfortran77_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerFortran77_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerFortran77* self ```
QsciAbstractAPIs* q_scilexerfortran77_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerFortran77* self ```
int32_t q_scilexerfortran77_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerFortran77* self ```
QsciScintilla* q_scilexerfortran77_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerFortran77* self, QsciAbstractAPIs* apis ```
void q_scilexerfortran77_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerFortran77* self, QColor* c ```
void q_scilexerfortran77_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerFortran77* self, QFont* f ```
void q_scilexerfortran77_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerFortran77* self, QColor* c ```
void q_scilexerfortran77_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerFortran77* self, QSettings* qs ```
bool q_scilexerfortran77_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerFortran77* self, QSettings* qs ```
bool q_scilexerfortran77_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerFortran77* self, QColor* c, int style ```
void q_scilexerfortran77_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerfortran77_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerFortran77* self, bool eolfilled, int style ```
void q_scilexerfortran77_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexerfortran77_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerFortran77* self, QFont* f, int style ```
void q_scilexerfortran77_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexerfortran77_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerFortran77* self, QColor* c, int style ```
void q_scilexerfortran77_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerfortran77_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerFortran77* self, const char* prop, const char* val ```
void q_scilexerfortran77_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexerfortran77_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerFortran77* self, QSettings* qs, const char* prefix ```
bool q_scilexerfortran77_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerFortran77* self, QSettings* qs, const char* prefix ```
bool q_scilexerfortran77_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerFortran77* self ```
const char* q_scilexerfortran77_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerFortran77* self, const char* name ```
void q_scilexerfortran77_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerFortran77* self ```
bool q_scilexerfortran77_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerFortran77* self ```
bool q_scilexerfortran77_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerFortran77* self ```
bool q_scilexerfortran77_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerFortran77* self ```
bool q_scilexerfortran77_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerFortran77* self, bool b ```
bool q_scilexerfortran77_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerFortran77* self ```
QThread* q_scilexerfortran77_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerFortran77* self, QThread* thread ```
void q_scilexerfortran77_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerFortran77* self, int interval ```
int32_t q_scilexerfortran77_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerFortran77* self, int id ```
void q_scilexerfortran77_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerFortran77* self ```
libqt_list /* of QObject* */ q_scilexerfortran77_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerFortran77* self, QObject* parent ```
void q_scilexerfortran77_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerFortran77* self, QObject* filterObj ```
void q_scilexerfortran77_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerFortran77* self, QObject* obj ```
void q_scilexerfortran77_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexerfortran77_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerFortran77* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexerfortran77_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexerfortran77_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexerfortran77_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerFortran77* self ```
void q_scilexerfortran77_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerFortran77* self ```
void q_scilexerfortran77_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerFortran77* self, const char* name, QVariant* value ```
bool q_scilexerfortran77_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerFortran77* self, const char* name ```
QVariant* q_scilexerfortran77_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerFortran77* self ```
const char** q_scilexerfortran77_dynamic_property_names(void* self) {
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
/// ``` QsciLexerFortran77* self ```
QBindingStorage* q_scilexerfortran77_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerFortran77* self ```
QBindingStorage* q_scilexerfortran77_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerFortran77* self ```
void q_scilexerfortran77_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexerFortran77* self, void (*slot)(QObject*) ```
void q_scilexerfortran77_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerFortran77* self ```
QObject* q_scilexerfortran77_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerFortran77* self, const char* classname ```
bool q_scilexerfortran77_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerFortran77* self ```
void q_scilexerfortran77_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerFortran77* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexerfortran77_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerfortran77_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerFortran77* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerfortran77_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerFortran77* self, QObject* param1 ```
void q_scilexerfortran77_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexerFortran77* self, void (*slot)(QObject*, QObject*) ```
void q_scilexerfortran77_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
int32_t q_scilexerfortran77_lexer_id(void* self) {
    return QsciLexerFortran77_LexerId((QsciLexerFortran77*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
int32_t q_scilexerfortran77_qbase_lexer_id(void* self) {
    return QsciLexerFortran77_QBaseLexerId((QsciLexerFortran77*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int32_t (*slot)() ```
void q_scilexerfortran77_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerFortran77_OnLexerId((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
const char* q_scilexerfortran77_auto_completion_fillups(void* self) {
    return QsciLexerFortran77_AutoCompletionFillups((QsciLexerFortran77*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
const char* q_scilexerfortran77_qbase_auto_completion_fillups(void* self) {
    return QsciLexerFortran77_QBaseAutoCompletionFillups((QsciLexerFortran77*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, const char* (*slot)() ```
void q_scilexerfortran77_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerFortran77_OnAutoCompletionFillups((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
const char** q_scilexerfortran77_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerFortran77_AutoCompletionWordSeparators((QsciLexerFortran77*)self);
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
/// ``` QsciLexerFortran77* self ```
const char** q_scilexerfortran77_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerFortran77_QBaseAutoCompletionWordSeparators((QsciLexerFortran77*)self);
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
/// ``` QsciLexerFortran77* self, const char** (*slot)() ```
void q_scilexerfortran77_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerFortran77_OnAutoCompletionWordSeparators((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, int* style ```
const char* q_scilexerfortran77_block_end(void* self, int* style) {
    return QsciLexerFortran77_BlockEnd((QsciLexerFortran77*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int* style ```
const char* q_scilexerfortran77_qbase_block_end(void* self, int* style) {
    return QsciLexerFortran77_QBaseBlockEnd((QsciLexerFortran77*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, const char* (*slot)(QsciLexerFortran77*, int*) ```
void q_scilexerfortran77_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerFortran77_OnBlockEnd((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
int32_t q_scilexerfortran77_block_lookback(void* self) {
    return QsciLexerFortran77_BlockLookback((QsciLexerFortran77*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
int32_t q_scilexerfortran77_qbase_block_lookback(void* self) {
    return QsciLexerFortran77_QBaseBlockLookback((QsciLexerFortran77*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int32_t (*slot)() ```
void q_scilexerfortran77_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerFortran77_OnBlockLookback((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, int* style ```
const char* q_scilexerfortran77_block_start(void* self, int* style) {
    return QsciLexerFortran77_BlockStart((QsciLexerFortran77*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int* style ```
const char* q_scilexerfortran77_qbase_block_start(void* self, int* style) {
    return QsciLexerFortran77_QBaseBlockStart((QsciLexerFortran77*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, const char* (*slot)(QsciLexerFortran77*, int*) ```
void q_scilexerfortran77_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerFortran77_OnBlockStart((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, int* style ```
const char* q_scilexerfortran77_block_start_keyword(void* self, int* style) {
    return QsciLexerFortran77_BlockStartKeyword((QsciLexerFortran77*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int* style ```
const char* q_scilexerfortran77_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerFortran77_QBaseBlockStartKeyword((QsciLexerFortran77*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, const char* (*slot)(QsciLexerFortran77*, int*) ```
void q_scilexerfortran77_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerFortran77_OnBlockStartKeyword((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
bool q_scilexerfortran77_case_sensitive(void* self) {
    return QsciLexerFortran77_CaseSensitive((QsciLexerFortran77*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
bool q_scilexerfortran77_qbase_case_sensitive(void* self) {
    return QsciLexerFortran77_QBaseCaseSensitive((QsciLexerFortran77*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, bool (*slot)() ```
void q_scilexerfortran77_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerFortran77_OnCaseSensitive((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, int style ```
QColor* q_scilexerfortran77_color(void* self, int style) {
    return QsciLexerFortran77_Color((QsciLexerFortran77*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int style ```
QColor* q_scilexerfortran77_qbase_color(void* self, int style) {
    return QsciLexerFortran77_QBaseColor((QsciLexerFortran77*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QColor* (*slot)(QsciLexerFortran77*, int) ```
void q_scilexerfortran77_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerFortran77_OnColor((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, int style ```
bool q_scilexerfortran77_eol_fill(void* self, int style) {
    return QsciLexerFortran77_EolFill((QsciLexerFortran77*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int style ```
bool q_scilexerfortran77_qbase_eol_fill(void* self, int style) {
    return QsciLexerFortran77_QBaseEolFill((QsciLexerFortran77*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, bool (*slot)(QsciLexerFortran77*, int) ```
void q_scilexerfortran77_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerFortran77_OnEolFill((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, int style ```
QFont* q_scilexerfortran77_font(void* self, int style) {
    return QsciLexerFortran77_Font((QsciLexerFortran77*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int style ```
QFont* q_scilexerfortran77_qbase_font(void* self, int style) {
    return QsciLexerFortran77_QBaseFont((QsciLexerFortran77*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QFont* (*slot)(QsciLexerFortran77*, int) ```
void q_scilexerfortran77_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerFortran77_OnFont((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
int32_t q_scilexerfortran77_indentation_guide_view(void* self) {
    return QsciLexerFortran77_IndentationGuideView((QsciLexerFortran77*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
int32_t q_scilexerfortran77_qbase_indentation_guide_view(void* self) {
    return QsciLexerFortran77_QBaseIndentationGuideView((QsciLexerFortran77*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int32_t (*slot)() ```
void q_scilexerfortran77_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerFortran77_OnIndentationGuideView((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
int32_t q_scilexerfortran77_default_style(void* self) {
    return QsciLexerFortran77_DefaultStyle((QsciLexerFortran77*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
int32_t q_scilexerfortran77_qbase_default_style(void* self) {
    return QsciLexerFortran77_QBaseDefaultStyle((QsciLexerFortran77*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int32_t (*slot)() ```
void q_scilexerfortran77_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerFortran77_OnDefaultStyle((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, int style ```
QColor* q_scilexerfortran77_paper(void* self, int style) {
    return QsciLexerFortran77_Paper((QsciLexerFortran77*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int style ```
QColor* q_scilexerfortran77_qbase_paper(void* self, int style) {
    return QsciLexerFortran77_QBasePaper((QsciLexerFortran77*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QColor* (*slot)(QsciLexerFortran77*, int) ```
void q_scilexerfortran77_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerFortran77_OnPaper((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, int style ```
QColor* q_scilexerfortran77_default_color_with_style(void* self, int style) {
    return QsciLexerFortran77_DefaultColorWithStyle((QsciLexerFortran77*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int style ```
QColor* q_scilexerfortran77_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerFortran77_QBaseDefaultColorWithStyle((QsciLexerFortran77*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QColor* (*slot)(QsciLexerFortran77*, int) ```
void q_scilexerfortran77_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerFortran77_OnDefaultColorWithStyle((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, int style ```
QFont* q_scilexerfortran77_default_font_with_style(void* self, int style) {
    return QsciLexerFortran77_DefaultFontWithStyle((QsciLexerFortran77*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int style ```
QFont* q_scilexerfortran77_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerFortran77_QBaseDefaultFontWithStyle((QsciLexerFortran77*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QFont* (*slot)(QsciLexerFortran77*, int) ```
void q_scilexerfortran77_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerFortran77_OnDefaultFontWithStyle((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, int style ```
QColor* q_scilexerfortran77_default_paper_with_style(void* self, int style) {
    return QsciLexerFortran77_DefaultPaperWithStyle((QsciLexerFortran77*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int style ```
QColor* q_scilexerfortran77_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerFortran77_QBaseDefaultPaperWithStyle((QsciLexerFortran77*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QColor* (*slot)(QsciLexerFortran77*, int) ```
void q_scilexerfortran77_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerFortran77_OnDefaultPaperWithStyle((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, QsciScintilla* editor ```
void q_scilexerfortran77_set_editor(void* self, void* editor) {
    QsciLexerFortran77_SetEditor((QsciLexerFortran77*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QsciScintilla* editor ```
void q_scilexerfortran77_qbase_set_editor(void* self, void* editor) {
    QsciLexerFortran77_QBaseSetEditor((QsciLexerFortran77*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexerFortran77*, QsciScintilla*) ```
void q_scilexerfortran77_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerFortran77_OnSetEditor((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
int32_t q_scilexerfortran77_style_bits_needed(void* self) {
    return QsciLexerFortran77_StyleBitsNeeded((QsciLexerFortran77*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
int32_t q_scilexerfortran77_qbase_style_bits_needed(void* self) {
    return QsciLexerFortran77_QBaseStyleBitsNeeded((QsciLexerFortran77*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int32_t (*slot)() ```
void q_scilexerfortran77_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerFortran77_OnStyleBitsNeeded((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
const char* q_scilexerfortran77_word_characters(void* self) {
    return QsciLexerFortran77_WordCharacters((QsciLexerFortran77*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
const char* q_scilexerfortran77_qbase_word_characters(void* self) {
    return QsciLexerFortran77_QBaseWordCharacters((QsciLexerFortran77*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, const char* (*slot)() ```
void q_scilexerfortran77_on_word_characters(void* self, const char* (*slot)()) {
    QsciLexerFortran77_OnWordCharacters((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, int autoindentstyle ```
void q_scilexerfortran77_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerFortran77_SetAutoIndentStyle((QsciLexerFortran77*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int autoindentstyle ```
void q_scilexerfortran77_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerFortran77_QBaseSetAutoIndentStyle((QsciLexerFortran77*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexerFortran77*, int) ```
void q_scilexerfortran77_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerFortran77_OnSetAutoIndentStyle((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, QColor* c, int style ```
void q_scilexerfortran77_set_color(void* self, void* c, int style) {
    QsciLexerFortran77_SetColor((QsciLexerFortran77*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QColor* c, int style ```
void q_scilexerfortran77_qbase_set_color(void* self, void* c, int style) {
    QsciLexerFortran77_QBaseSetColor((QsciLexerFortran77*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexerFortran77*, QColor*, int) ```
void q_scilexerfortran77_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerFortran77_OnSetColor((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, bool eoffill, int style ```
void q_scilexerfortran77_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerFortran77_SetEolFill((QsciLexerFortran77*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, bool eoffill, int style ```
void q_scilexerfortran77_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerFortran77_QBaseSetEolFill((QsciLexerFortran77*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexerFortran77*, bool, int) ```
void q_scilexerfortran77_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerFortran77_OnSetEolFill((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, QFont* f, int style ```
void q_scilexerfortran77_set_font(void* self, void* f, int style) {
    QsciLexerFortran77_SetFont((QsciLexerFortran77*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QFont* f, int style ```
void q_scilexerfortran77_qbase_set_font(void* self, void* f, int style) {
    QsciLexerFortran77_QBaseSetFont((QsciLexerFortran77*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexerFortran77*, QFont*, int) ```
void q_scilexerfortran77_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerFortran77_OnSetFont((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, QColor* c, int style ```
void q_scilexerfortran77_set_paper(void* self, void* c, int style) {
    QsciLexerFortran77_SetPaper((QsciLexerFortran77*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QColor* c, int style ```
void q_scilexerfortran77_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerFortran77_QBaseSetPaper((QsciLexerFortran77*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexerFortran77*, QColor*, int) ```
void q_scilexerfortran77_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerFortran77_OnSetPaper((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, QEvent* event ```
bool q_scilexerfortran77_event(void* self, void* event) {
    return QsciLexerFortran77_Event((QsciLexerFortran77*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QEvent* event ```
bool q_scilexerfortran77_qbase_event(void* self, void* event) {
    return QsciLexerFortran77_QBaseEvent((QsciLexerFortran77*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, bool (*slot)(QsciLexerFortran77*, QEvent*) ```
void q_scilexerfortran77_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerFortran77_OnEvent((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, QObject* watched, QEvent* event ```
bool q_scilexerfortran77_event_filter(void* self, void* watched, void* event) {
    return QsciLexerFortran77_EventFilter((QsciLexerFortran77*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QObject* watched, QEvent* event ```
bool q_scilexerfortran77_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerFortran77_QBaseEventFilter((QsciLexerFortran77*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, bool (*slot)(QsciLexerFortran77*, QObject*, QEvent*) ```
void q_scilexerfortran77_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerFortran77_OnEventFilter((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, QTimerEvent* event ```
void q_scilexerfortran77_timer_event(void* self, void* event) {
    QsciLexerFortran77_TimerEvent((QsciLexerFortran77*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QTimerEvent* event ```
void q_scilexerfortran77_qbase_timer_event(void* self, void* event) {
    QsciLexerFortran77_QBaseTimerEvent((QsciLexerFortran77*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexerFortran77*, QTimerEvent*) ```
void q_scilexerfortran77_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerFortran77_OnTimerEvent((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, QChildEvent* event ```
void q_scilexerfortran77_child_event(void* self, void* event) {
    QsciLexerFortran77_ChildEvent((QsciLexerFortran77*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QChildEvent* event ```
void q_scilexerfortran77_qbase_child_event(void* self, void* event) {
    QsciLexerFortran77_QBaseChildEvent((QsciLexerFortran77*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexerFortran77*, QChildEvent*) ```
void q_scilexerfortran77_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerFortran77_OnChildEvent((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, QEvent* event ```
void q_scilexerfortran77_custom_event(void* self, void* event) {
    QsciLexerFortran77_CustomEvent((QsciLexerFortran77*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QEvent* event ```
void q_scilexerfortran77_qbase_custom_event(void* self, void* event) {
    QsciLexerFortran77_QBaseCustomEvent((QsciLexerFortran77*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexerFortran77*, QEvent*) ```
void q_scilexerfortran77_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerFortran77_OnCustomEvent((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, QMetaMethod* signal ```
void q_scilexerfortran77_connect_notify(void* self, void* signal) {
    QsciLexerFortran77_ConnectNotify((QsciLexerFortran77*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QMetaMethod* signal ```
void q_scilexerfortran77_qbase_connect_notify(void* self, void* signal) {
    QsciLexerFortran77_QBaseConnectNotify((QsciLexerFortran77*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexerFortran77*, QMetaMethod*) ```
void q_scilexerfortran77_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerFortran77_OnConnectNotify((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, QMetaMethod* signal ```
void q_scilexerfortran77_disconnect_notify(void* self, void* signal) {
    QsciLexerFortran77_DisconnectNotify((QsciLexerFortran77*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QMetaMethod* signal ```
void q_scilexerfortran77_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerFortran77_QBaseDisconnectNotify((QsciLexerFortran77*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexerFortran77*, QMetaMethod*) ```
void q_scilexerfortran77_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerFortran77_OnDisconnectNotify((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
QObject* q_scilexerfortran77_sender(void* self) {
    return QsciLexerFortran77_Sender((QsciLexerFortran77*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
QObject* q_scilexerfortran77_qbase_sender(void* self) {
    return QsciLexerFortran77_QBaseSender((QsciLexerFortran77*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QObject* (*slot)() ```
void q_scilexerfortran77_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerFortran77_OnSender((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
int32_t q_scilexerfortran77_sender_signal_index(void* self) {
    return QsciLexerFortran77_SenderSignalIndex((QsciLexerFortran77*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
int32_t q_scilexerfortran77_qbase_sender_signal_index(void* self) {
    return QsciLexerFortran77_QBaseSenderSignalIndex((QsciLexerFortran77*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int32_t (*slot)() ```
void q_scilexerfortran77_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerFortran77_OnSenderSignalIndex((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, const char* signal ```
int32_t q_scilexerfortran77_receivers(void* self, const char* signal) {
    return QsciLexerFortran77_Receivers((QsciLexerFortran77*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, const char* signal ```
int32_t q_scilexerfortran77_qbase_receivers(void* self, const char* signal) {
    return QsciLexerFortran77_QBaseReceivers((QsciLexerFortran77*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int32_t (*slot)(QsciLexerFortran77*, const char*) ```
void q_scilexerfortran77_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerFortran77_OnReceivers((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, QMetaMethod* signal ```
bool q_scilexerfortran77_is_signal_connected(void* self, void* signal) {
    return QsciLexerFortran77_IsSignalConnected((QsciLexerFortran77*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QMetaMethod* signal ```
bool q_scilexerfortran77_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerFortran77_QBaseIsSignalConnected((QsciLexerFortran77*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, bool (*slot)(QsciLexerFortran77*, QMetaMethod*) ```
void q_scilexerfortran77_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerFortran77_OnIsSignalConnected((QsciLexerFortran77*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexerFortran77* self ```
void q_scilexerfortran77_delete(void* self) {
    QsciLexerFortran77_Delete((QsciLexerFortran77*)(self));
}