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
#include "libqscilexertex.hpp"
#include "libqscilexertex.h"

/// https://doc.qt.io/qt-6/qscilexertex.html

/// q_scilexertex_new constructs a new QsciLexerTeX object.
///
///
QsciLexerTeX* q_scilexertex_new() {
    return QsciLexerTeX_new();
}

/// q_scilexertex_new2 constructs a new QsciLexerTeX object.
///
/// ``` QObject* parent ```
QsciLexerTeX* q_scilexertex_new2(void* parent) {
    return QsciLexerTeX_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerTeX* self ```
QMetaObject* q_scilexertex_meta_object(void* self) {
    return QsciLexerTeX_MetaObject((QsciLexerTeX*)self);
}

/// ``` QsciLexerTeX* self, const char* param1 ```
void* q_scilexertex_metacast(void* self, const char* param1) {
    return QsciLexerTeX_Metacast((QsciLexerTeX*)self, param1);
}

/// ``` QsciLexerTeX* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexertex_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerTeX_Metacall((QsciLexerTeX*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerTeX* self, int32_t (*slot)(QsciLexerTeX*, enum QMetaObject__Call, int, void*) ```
void q_scilexertex_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerTeX_OnMetacall((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerTeX* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexertex_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerTeX_QBaseMetacall((QsciLexerTeX*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexertex_tr(const char* s) {
    libqt_string _str = QsciLexerTeX_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexertex.html#language)
///
/// ``` QsciLexerTeX* self ```
const char* q_scilexertex_language(void* self) {
    return QsciLexerTeX_Language((QsciLexerTeX*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexertex.html#lexer)
///
/// ``` QsciLexerTeX* self ```
const char* q_scilexertex_lexer(void* self) {
    return QsciLexerTeX_Lexer((QsciLexerTeX*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexertex.html#wordCharacters)
///
/// ``` QsciLexerTeX* self ```
const char* q_scilexertex_word_characters(void* self) {
    return QsciLexerTeX_WordCharacters((QsciLexerTeX*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexertex.html#defaultColor)
///
/// ``` QsciLexerTeX* self, int style ```
QColor* q_scilexertex_default_color(void* self, int style) {
    return QsciLexerTeX_DefaultColor((QsciLexerTeX*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexertex.html#keywords)
///
/// ``` QsciLexerTeX* self, int set ```
const char* q_scilexertex_keywords(void* self, int set) {
    return QsciLexerTeX_Keywords((QsciLexerTeX*)self, set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexertex.html#description)
///
/// ``` QsciLexerTeX* self, int style ```
const char* q_scilexertex_description(void* self, int style) {
    libqt_string _str = QsciLexerTeX_Description((QsciLexerTeX*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexertex.html#refreshProperties)
///
/// ``` QsciLexerTeX* self ```
void q_scilexertex_refresh_properties(void* self) {
    QsciLexerTeX_RefreshProperties((QsciLexerTeX*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexertex.html#setFoldComments)
///
/// ``` QsciLexerTeX* self, bool fold ```
void q_scilexertex_set_fold_comments(void* self, bool fold) {
    QsciLexerTeX_SetFoldComments((QsciLexerTeX*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexertex.html#foldComments)
///
/// ``` QsciLexerTeX* self ```
bool q_scilexertex_fold_comments(void* self) {
    return QsciLexerTeX_FoldComments((QsciLexerTeX*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexertex.html#setFoldCompact)
///
/// ``` QsciLexerTeX* self, bool fold ```
void q_scilexertex_set_fold_compact(void* self, bool fold) {
    QsciLexerTeX_SetFoldCompact((QsciLexerTeX*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexertex.html#foldCompact)
///
/// ``` QsciLexerTeX* self ```
bool q_scilexertex_fold_compact(void* self) {
    return QsciLexerTeX_FoldCompact((QsciLexerTeX*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexertex.html#setProcessComments)
///
/// ``` QsciLexerTeX* self, bool enable ```
void q_scilexertex_set_process_comments(void* self, bool enable) {
    QsciLexerTeX_SetProcessComments((QsciLexerTeX*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexertex.html#processComments)
///
/// ``` QsciLexerTeX* self ```
bool q_scilexertex_process_comments(void* self) {
    return QsciLexerTeX_ProcessComments((QsciLexerTeX*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexertex.html#setProcessIf)
///
/// ``` QsciLexerTeX* self, bool enable ```
void q_scilexertex_set_process_if(void* self, bool enable) {
    QsciLexerTeX_SetProcessIf((QsciLexerTeX*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexertex.html#processIf)
///
/// ``` QsciLexerTeX* self ```
bool q_scilexertex_process_if(void* self) {
    return QsciLexerTeX_ProcessIf((QsciLexerTeX*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexertex.html#readProperties)
///
/// ``` QsciLexerTeX* self, QSettings* qs, const char* prefix ```
bool q_scilexertex_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerTeX_ReadProperties((QsciLexerTeX*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerTeX* self, bool (*slot)(QsciLexerTeX*, QSettings*, const char*) ```
void q_scilexertex_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerTeX_OnReadProperties((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerTeX* self, QSettings* qs, const char* prefix ```
bool q_scilexertex_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerTeX_QBaseReadProperties((QsciLexerTeX*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexertex.html#writeProperties)
///
/// ``` QsciLexerTeX* self, QSettings* qs, const char* prefix ```
bool q_scilexertex_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerTeX_WriteProperties((QsciLexerTeX*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerTeX* self, bool (*slot)(QsciLexerTeX*, QSettings*, const char*) ```
void q_scilexertex_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerTeX_OnWriteProperties((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerTeX* self, QSettings* qs, const char* prefix ```
bool q_scilexertex_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerTeX_QBaseWriteProperties((QsciLexerTeX*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexertex_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerTeX_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexertex_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerTeX_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerTeX* self ```
QsciAbstractAPIs* q_scilexertex_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerTeX* self ```
int32_t q_scilexertex_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// ``` QsciLexerTeX* self ```
QFont* q_scilexertex_default_font(void* self) {
    return QsciLexer_DefaultFont((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// ``` QsciLexerTeX* self ```
QColor* q_scilexertex_default_paper(void* self) {
    return QsciLexer_DefaultPaper((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerTeX* self ```
QsciScintilla* q_scilexertex_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerTeX* self, QsciAbstractAPIs* apis ```
void q_scilexertex_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerTeX* self, QColor* c ```
void q_scilexertex_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerTeX* self, QFont* f ```
void q_scilexertex_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerTeX* self, QColor* c ```
void q_scilexertex_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerTeX* self, QSettings* qs ```
bool q_scilexertex_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerTeX* self, QSettings* qs ```
bool q_scilexertex_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerTeX* self, QColor* c, int style ```
void q_scilexertex_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerTeX* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexertex_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerTeX* self, bool eolfilled, int style ```
void q_scilexertex_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerTeX* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexertex_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerTeX* self, QFont* f, int style ```
void q_scilexertex_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerTeX* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexertex_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerTeX* self, QColor* c, int style ```
void q_scilexertex_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerTeX* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexertex_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerTeX* self, const char* prop, const char* val ```
void q_scilexertex_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerTeX* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexertex_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerTeX* self, QSettings* qs, const char* prefix ```
bool q_scilexertex_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerTeX* self, QSettings* qs, const char* prefix ```
bool q_scilexertex_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerTeX* self ```
const char* q_scilexertex_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerTeX* self, const char* name ```
void q_scilexertex_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerTeX* self ```
bool q_scilexertex_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerTeX* self ```
bool q_scilexertex_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerTeX* self ```
bool q_scilexertex_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerTeX* self ```
bool q_scilexertex_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerTeX* self, bool b ```
bool q_scilexertex_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerTeX* self ```
QThread* q_scilexertex_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerTeX* self, QThread* thread ```
void q_scilexertex_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerTeX* self, int interval ```
int32_t q_scilexertex_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerTeX* self, int id ```
void q_scilexertex_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerTeX* self ```
libqt_list /* of QObject* */ q_scilexertex_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerTeX* self, QObject* parent ```
void q_scilexertex_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerTeX* self, QObject* filterObj ```
void q_scilexertex_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerTeX* self, QObject* obj ```
void q_scilexertex_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexertex_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerTeX* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexertex_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexertex_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexertex_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerTeX* self ```
void q_scilexertex_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerTeX* self ```
void q_scilexertex_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerTeX* self, const char* name, QVariant* value ```
bool q_scilexertex_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerTeX* self, const char* name ```
QVariant* q_scilexertex_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerTeX* self ```
const char** q_scilexertex_dynamic_property_names(void* self) {
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
/// ``` QsciLexerTeX* self ```
QBindingStorage* q_scilexertex_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerTeX* self ```
QBindingStorage* q_scilexertex_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerTeX* self ```
void q_scilexertex_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexerTeX* self, void (*slot)(QObject*) ```
void q_scilexertex_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerTeX* self ```
QObject* q_scilexertex_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerTeX* self, const char* classname ```
bool q_scilexertex_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerTeX* self ```
void q_scilexertex_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerTeX* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexertex_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexertex_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerTeX* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexertex_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerTeX* self, QObject* param1 ```
void q_scilexertex_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexerTeX* self, void (*slot)(QObject*, QObject*) ```
void q_scilexertex_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self ```
int32_t q_scilexertex_lexer_id(void* self) {
    return QsciLexerTeX_LexerId((QsciLexerTeX*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self ```
int32_t q_scilexertex_qbase_lexer_id(void* self) {
    return QsciLexerTeX_QBaseLexerId((QsciLexerTeX*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, int32_t (*slot)() ```
void q_scilexertex_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerTeX_OnLexerId((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self ```
const char* q_scilexertex_auto_completion_fillups(void* self) {
    return QsciLexerTeX_AutoCompletionFillups((QsciLexerTeX*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self ```
const char* q_scilexertex_qbase_auto_completion_fillups(void* self) {
    return QsciLexerTeX_QBaseAutoCompletionFillups((QsciLexerTeX*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, const char* (*slot)() ```
void q_scilexertex_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerTeX_OnAutoCompletionFillups((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self ```
const char** q_scilexertex_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerTeX_AutoCompletionWordSeparators((QsciLexerTeX*)self);
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
/// ``` QsciLexerTeX* self ```
const char** q_scilexertex_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerTeX_QBaseAutoCompletionWordSeparators((QsciLexerTeX*)self);
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
/// ``` QsciLexerTeX* self, const char** (*slot)() ```
void q_scilexertex_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerTeX_OnAutoCompletionWordSeparators((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self, int* style ```
const char* q_scilexertex_block_end(void* self, int* style) {
    return QsciLexerTeX_BlockEnd((QsciLexerTeX*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self, int* style ```
const char* q_scilexertex_qbase_block_end(void* self, int* style) {
    return QsciLexerTeX_QBaseBlockEnd((QsciLexerTeX*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, const char* (*slot)(QsciLexerTeX*, int*) ```
void q_scilexertex_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerTeX_OnBlockEnd((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self ```
int32_t q_scilexertex_block_lookback(void* self) {
    return QsciLexerTeX_BlockLookback((QsciLexerTeX*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self ```
int32_t q_scilexertex_qbase_block_lookback(void* self) {
    return QsciLexerTeX_QBaseBlockLookback((QsciLexerTeX*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, int32_t (*slot)() ```
void q_scilexertex_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerTeX_OnBlockLookback((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self, int* style ```
const char* q_scilexertex_block_start(void* self, int* style) {
    return QsciLexerTeX_BlockStart((QsciLexerTeX*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self, int* style ```
const char* q_scilexertex_qbase_block_start(void* self, int* style) {
    return QsciLexerTeX_QBaseBlockStart((QsciLexerTeX*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, const char* (*slot)(QsciLexerTeX*, int*) ```
void q_scilexertex_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerTeX_OnBlockStart((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self, int* style ```
const char* q_scilexertex_block_start_keyword(void* self, int* style) {
    return QsciLexerTeX_BlockStartKeyword((QsciLexerTeX*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self, int* style ```
const char* q_scilexertex_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerTeX_QBaseBlockStartKeyword((QsciLexerTeX*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, const char* (*slot)(QsciLexerTeX*, int*) ```
void q_scilexertex_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerTeX_OnBlockStartKeyword((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#braceStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self ```
int32_t q_scilexertex_brace_style(void* self) {
    return QsciLexerTeX_BraceStyle((QsciLexerTeX*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self ```
int32_t q_scilexertex_qbase_brace_style(void* self) {
    return QsciLexerTeX_QBaseBraceStyle((QsciLexerTeX*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, int32_t (*slot)() ```
void q_scilexertex_on_brace_style(void* self, int32_t (*slot)()) {
    QsciLexerTeX_OnBraceStyle((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self ```
bool q_scilexertex_case_sensitive(void* self) {
    return QsciLexerTeX_CaseSensitive((QsciLexerTeX*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self ```
bool q_scilexertex_qbase_case_sensitive(void* self) {
    return QsciLexerTeX_QBaseCaseSensitive((QsciLexerTeX*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, bool (*slot)() ```
void q_scilexertex_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerTeX_OnCaseSensitive((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self, int style ```
QColor* q_scilexertex_color(void* self, int style) {
    return QsciLexerTeX_Color((QsciLexerTeX*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self, int style ```
QColor* q_scilexertex_qbase_color(void* self, int style) {
    return QsciLexerTeX_QBaseColor((QsciLexerTeX*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, QColor* (*slot)(QsciLexerTeX*, int) ```
void q_scilexertex_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerTeX_OnColor((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self, int style ```
bool q_scilexertex_eol_fill(void* self, int style) {
    return QsciLexerTeX_EolFill((QsciLexerTeX*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self, int style ```
bool q_scilexertex_qbase_eol_fill(void* self, int style) {
    return QsciLexerTeX_QBaseEolFill((QsciLexerTeX*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, bool (*slot)(QsciLexerTeX*, int) ```
void q_scilexertex_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerTeX_OnEolFill((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self, int style ```
QFont* q_scilexertex_font(void* self, int style) {
    return QsciLexerTeX_Font((QsciLexerTeX*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self, int style ```
QFont* q_scilexertex_qbase_font(void* self, int style) {
    return QsciLexerTeX_QBaseFont((QsciLexerTeX*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, QFont* (*slot)(QsciLexerTeX*, int) ```
void q_scilexertex_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerTeX_OnFont((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self ```
int32_t q_scilexertex_indentation_guide_view(void* self) {
    return QsciLexerTeX_IndentationGuideView((QsciLexerTeX*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self ```
int32_t q_scilexertex_qbase_indentation_guide_view(void* self) {
    return QsciLexerTeX_QBaseIndentationGuideView((QsciLexerTeX*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, int32_t (*slot)() ```
void q_scilexertex_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerTeX_OnIndentationGuideView((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self ```
int32_t q_scilexertex_default_style(void* self) {
    return QsciLexerTeX_DefaultStyle((QsciLexerTeX*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self ```
int32_t q_scilexertex_qbase_default_style(void* self) {
    return QsciLexerTeX_QBaseDefaultStyle((QsciLexerTeX*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, int32_t (*slot)() ```
void q_scilexertex_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerTeX_OnDefaultStyle((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self, int style ```
QColor* q_scilexertex_paper(void* self, int style) {
    return QsciLexerTeX_Paper((QsciLexerTeX*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self, int style ```
QColor* q_scilexertex_qbase_paper(void* self, int style) {
    return QsciLexerTeX_QBasePaper((QsciLexerTeX*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, QColor* (*slot)(QsciLexerTeX*, int) ```
void q_scilexertex_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerTeX_OnPaper((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self, int style ```
QColor* q_scilexertex_default_color_with_style(void* self, int style) {
    return QsciLexerTeX_DefaultColorWithStyle((QsciLexerTeX*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self, int style ```
QColor* q_scilexertex_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerTeX_QBaseDefaultColorWithStyle((QsciLexerTeX*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, QColor* (*slot)(QsciLexerTeX*, int) ```
void q_scilexertex_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerTeX_OnDefaultColorWithStyle((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self, int style ```
bool q_scilexertex_default_eol_fill(void* self, int style) {
    return QsciLexerTeX_DefaultEolFill((QsciLexerTeX*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self, int style ```
bool q_scilexertex_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerTeX_QBaseDefaultEolFill((QsciLexerTeX*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, bool (*slot)(QsciLexerTeX*, int) ```
void q_scilexertex_on_default_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerTeX_OnDefaultEolFill((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self, int style ```
QFont* q_scilexertex_default_font_with_style(void* self, int style) {
    return QsciLexerTeX_DefaultFontWithStyle((QsciLexerTeX*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self, int style ```
QFont* q_scilexertex_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerTeX_QBaseDefaultFontWithStyle((QsciLexerTeX*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, QFont* (*slot)(QsciLexerTeX*, int) ```
void q_scilexertex_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerTeX_OnDefaultFontWithStyle((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self, int style ```
QColor* q_scilexertex_default_paper_with_style(void* self, int style) {
    return QsciLexerTeX_DefaultPaperWithStyle((QsciLexerTeX*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self, int style ```
QColor* q_scilexertex_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerTeX_QBaseDefaultPaperWithStyle((QsciLexerTeX*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, QColor* (*slot)(QsciLexerTeX*, int) ```
void q_scilexertex_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerTeX_OnDefaultPaperWithStyle((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self, QsciScintilla* editor ```
void q_scilexertex_set_editor(void* self, void* editor) {
    QsciLexerTeX_SetEditor((QsciLexerTeX*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self, QsciScintilla* editor ```
void q_scilexertex_qbase_set_editor(void* self, void* editor) {
    QsciLexerTeX_QBaseSetEditor((QsciLexerTeX*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, void (*slot)(QsciLexerTeX*, QsciScintilla*) ```
void q_scilexertex_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerTeX_OnSetEditor((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self ```
int32_t q_scilexertex_style_bits_needed(void* self) {
    return QsciLexerTeX_StyleBitsNeeded((QsciLexerTeX*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self ```
int32_t q_scilexertex_qbase_style_bits_needed(void* self) {
    return QsciLexerTeX_QBaseStyleBitsNeeded((QsciLexerTeX*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, int32_t (*slot)() ```
void q_scilexertex_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerTeX_OnStyleBitsNeeded((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self, int autoindentstyle ```
void q_scilexertex_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerTeX_SetAutoIndentStyle((QsciLexerTeX*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self, int autoindentstyle ```
void q_scilexertex_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerTeX_QBaseSetAutoIndentStyle((QsciLexerTeX*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, void (*slot)(QsciLexerTeX*, int) ```
void q_scilexertex_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerTeX_OnSetAutoIndentStyle((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self, QColor* c, int style ```
void q_scilexertex_set_color(void* self, void* c, int style) {
    QsciLexerTeX_SetColor((QsciLexerTeX*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self, QColor* c, int style ```
void q_scilexertex_qbase_set_color(void* self, void* c, int style) {
    QsciLexerTeX_QBaseSetColor((QsciLexerTeX*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, void (*slot)(QsciLexerTeX*, QColor*, int) ```
void q_scilexertex_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerTeX_OnSetColor((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self, bool eoffill, int style ```
void q_scilexertex_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerTeX_SetEolFill((QsciLexerTeX*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self, bool eoffill, int style ```
void q_scilexertex_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerTeX_QBaseSetEolFill((QsciLexerTeX*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, void (*slot)(QsciLexerTeX*, bool, int) ```
void q_scilexertex_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerTeX_OnSetEolFill((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self, QFont* f, int style ```
void q_scilexertex_set_font(void* self, void* f, int style) {
    QsciLexerTeX_SetFont((QsciLexerTeX*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self, QFont* f, int style ```
void q_scilexertex_qbase_set_font(void* self, void* f, int style) {
    QsciLexerTeX_QBaseSetFont((QsciLexerTeX*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, void (*slot)(QsciLexerTeX*, QFont*, int) ```
void q_scilexertex_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerTeX_OnSetFont((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self, QColor* c, int style ```
void q_scilexertex_set_paper(void* self, void* c, int style) {
    QsciLexerTeX_SetPaper((QsciLexerTeX*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self, QColor* c, int style ```
void q_scilexertex_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerTeX_QBaseSetPaper((QsciLexerTeX*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, void (*slot)(QsciLexerTeX*, QColor*, int) ```
void q_scilexertex_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerTeX_OnSetPaper((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self, QEvent* event ```
bool q_scilexertex_event(void* self, void* event) {
    return QsciLexerTeX_Event((QsciLexerTeX*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self, QEvent* event ```
bool q_scilexertex_qbase_event(void* self, void* event) {
    return QsciLexerTeX_QBaseEvent((QsciLexerTeX*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, bool (*slot)(QsciLexerTeX*, QEvent*) ```
void q_scilexertex_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerTeX_OnEvent((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self, QObject* watched, QEvent* event ```
bool q_scilexertex_event_filter(void* self, void* watched, void* event) {
    return QsciLexerTeX_EventFilter((QsciLexerTeX*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self, QObject* watched, QEvent* event ```
bool q_scilexertex_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerTeX_QBaseEventFilter((QsciLexerTeX*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, bool (*slot)(QsciLexerTeX*, QObject*, QEvent*) ```
void q_scilexertex_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerTeX_OnEventFilter((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self, QTimerEvent* event ```
void q_scilexertex_timer_event(void* self, void* event) {
    QsciLexerTeX_TimerEvent((QsciLexerTeX*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self, QTimerEvent* event ```
void q_scilexertex_qbase_timer_event(void* self, void* event) {
    QsciLexerTeX_QBaseTimerEvent((QsciLexerTeX*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, void (*slot)(QsciLexerTeX*, QTimerEvent*) ```
void q_scilexertex_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerTeX_OnTimerEvent((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self, QChildEvent* event ```
void q_scilexertex_child_event(void* self, void* event) {
    QsciLexerTeX_ChildEvent((QsciLexerTeX*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self, QChildEvent* event ```
void q_scilexertex_qbase_child_event(void* self, void* event) {
    QsciLexerTeX_QBaseChildEvent((QsciLexerTeX*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, void (*slot)(QsciLexerTeX*, QChildEvent*) ```
void q_scilexertex_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerTeX_OnChildEvent((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self, QEvent* event ```
void q_scilexertex_custom_event(void* self, void* event) {
    QsciLexerTeX_CustomEvent((QsciLexerTeX*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self, QEvent* event ```
void q_scilexertex_qbase_custom_event(void* self, void* event) {
    QsciLexerTeX_QBaseCustomEvent((QsciLexerTeX*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, void (*slot)(QsciLexerTeX*, QEvent*) ```
void q_scilexertex_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerTeX_OnCustomEvent((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self, QMetaMethod* signal ```
void q_scilexertex_connect_notify(void* self, void* signal) {
    QsciLexerTeX_ConnectNotify((QsciLexerTeX*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self, QMetaMethod* signal ```
void q_scilexertex_qbase_connect_notify(void* self, void* signal) {
    QsciLexerTeX_QBaseConnectNotify((QsciLexerTeX*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, void (*slot)(QsciLexerTeX*, QMetaMethod*) ```
void q_scilexertex_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerTeX_OnConnectNotify((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self, QMetaMethod* signal ```
void q_scilexertex_disconnect_notify(void* self, void* signal) {
    QsciLexerTeX_DisconnectNotify((QsciLexerTeX*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self, QMetaMethod* signal ```
void q_scilexertex_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerTeX_QBaseDisconnectNotify((QsciLexerTeX*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, void (*slot)(QsciLexerTeX*, QMetaMethod*) ```
void q_scilexertex_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerTeX_OnDisconnectNotify((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self ```
QObject* q_scilexertex_sender(void* self) {
    return QsciLexerTeX_Sender((QsciLexerTeX*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self ```
QObject* q_scilexertex_qbase_sender(void* self) {
    return QsciLexerTeX_QBaseSender((QsciLexerTeX*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, QObject* (*slot)() ```
void q_scilexertex_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerTeX_OnSender((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self ```
int32_t q_scilexertex_sender_signal_index(void* self) {
    return QsciLexerTeX_SenderSignalIndex((QsciLexerTeX*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self ```
int32_t q_scilexertex_qbase_sender_signal_index(void* self) {
    return QsciLexerTeX_QBaseSenderSignalIndex((QsciLexerTeX*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, int32_t (*slot)() ```
void q_scilexertex_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerTeX_OnSenderSignalIndex((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self, const char* signal ```
int32_t q_scilexertex_receivers(void* self, const char* signal) {
    return QsciLexerTeX_Receivers((QsciLexerTeX*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self, const char* signal ```
int32_t q_scilexertex_qbase_receivers(void* self, const char* signal) {
    return QsciLexerTeX_QBaseReceivers((QsciLexerTeX*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, int32_t (*slot)(QsciLexerTeX*, const char*) ```
void q_scilexertex_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerTeX_OnReceivers((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerTeX* self, QMetaMethod* signal ```
bool q_scilexertex_is_signal_connected(void* self, void* signal) {
    return QsciLexerTeX_IsSignalConnected((QsciLexerTeX*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerTeX* self, QMetaMethod* signal ```
bool q_scilexertex_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerTeX_QBaseIsSignalConnected((QsciLexerTeX*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerTeX* self, bool (*slot)(QsciLexerTeX*, QMetaMethod*) ```
void q_scilexertex_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerTeX_OnIsSignalConnected((QsciLexerTeX*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexerTeX* self ```
void q_scilexertex_delete(void* self) {
    QsciLexerTeX_Delete((QsciLexerTeX*)(self));
}