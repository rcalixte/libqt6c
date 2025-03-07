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
#include "libqscilexerpo.hpp"
#include "libqscilexerpo.h"

/// https://doc.qt.io/qt-6/qscilexerpo.html

/// q_scilexerpo_new constructs a new QsciLexerPO object.
///
///
QsciLexerPO* q_scilexerpo_new() {
    return QsciLexerPO_new();
}

/// q_scilexerpo_new2 constructs a new QsciLexerPO object.
///
/// ``` QObject* parent ```
QsciLexerPO* q_scilexerpo_new2(void* parent) {
    return QsciLexerPO_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerPO* self ```
QMetaObject* q_scilexerpo_meta_object(void* self) {
    return QsciLexerPO_MetaObject((QsciLexerPO*)self);
}

/// ``` QsciLexerPO* self, const char* param1 ```
void* q_scilexerpo_metacast(void* self, const char* param1) {
    return QsciLexerPO_Metacast((QsciLexerPO*)self, param1);
}

/// ``` QsciLexerPO* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerpo_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerPO_Metacall((QsciLexerPO*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPO* self, int32_t (*slot)(QsciLexerPO*, enum QMetaObject__Call, int, void*) ```
void q_scilexerpo_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerPO_OnMetacall((QsciLexerPO*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPO* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerpo_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerPO_QBaseMetacall((QsciLexerPO*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexerpo_tr(const char* s) {
    libqt_string _str = QsciLexerPO_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpo.html#language)
///
/// ``` QsciLexerPO* self ```
const char* q_scilexerpo_language(void* self) {
    return QsciLexerPO_Language((QsciLexerPO*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpo.html#lexer)
///
/// ``` QsciLexerPO* self ```
const char* q_scilexerpo_lexer(void* self) {
    return QsciLexerPO_Lexer((QsciLexerPO*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpo.html#defaultColor)
///
/// ``` QsciLexerPO* self, int style ```
QColor* q_scilexerpo_default_color(void* self, int style) {
    return QsciLexerPO_DefaultColor((QsciLexerPO*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpo.html#defaultFont)
///
/// ``` QsciLexerPO* self, int style ```
QFont* q_scilexerpo_default_font(void* self, int style) {
    return QsciLexerPO_DefaultFont((QsciLexerPO*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpo.html#description)
///
/// ``` QsciLexerPO* self, int style ```
const char* q_scilexerpo_description(void* self, int style) {
    libqt_string _str = QsciLexerPO_Description((QsciLexerPO*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpo.html#refreshProperties)
///
/// ``` QsciLexerPO* self ```
void q_scilexerpo_refresh_properties(void* self) {
    QsciLexerPO_RefreshProperties((QsciLexerPO*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpo.html#foldComments)
///
/// ``` QsciLexerPO* self ```
bool q_scilexerpo_fold_comments(void* self) {
    return QsciLexerPO_FoldComments((QsciLexerPO*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpo.html#foldCompact)
///
/// ``` QsciLexerPO* self ```
bool q_scilexerpo_fold_compact(void* self) {
    return QsciLexerPO_FoldCompact((QsciLexerPO*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpo.html#setFoldComments)
///
/// ``` QsciLexerPO* self, bool fold ```
void q_scilexerpo_set_fold_comments(void* self, bool fold) {
    QsciLexerPO_SetFoldComments((QsciLexerPO*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexerPO*, bool) ```
void q_scilexerpo_on_set_fold_comments(void* self, void (*slot)(void*, bool)) {
    QsciLexerPO_OnSetFoldComments((QsciLexerPO*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPO* self, bool fold ```
void q_scilexerpo_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerPO_QBaseSetFoldComments((QsciLexerPO*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpo.html#setFoldCompact)
///
/// ``` QsciLexerPO* self, bool fold ```
void q_scilexerpo_set_fold_compact(void* self, bool fold) {
    QsciLexerPO_SetFoldCompact((QsciLexerPO*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexerPO*, bool) ```
void q_scilexerpo_on_set_fold_compact(void* self, void (*slot)(void*, bool)) {
    QsciLexerPO_OnSetFoldCompact((QsciLexerPO*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPO* self, bool fold ```
void q_scilexerpo_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerPO_QBaseSetFoldCompact((QsciLexerPO*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpo.html#readProperties)
///
/// ``` QsciLexerPO* self, QSettings* qs, const char* prefix ```
bool q_scilexerpo_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPO_ReadProperties((QsciLexerPO*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPO* self, bool (*slot)(QsciLexerPO*, QSettings*, const char*) ```
void q_scilexerpo_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerPO_OnReadProperties((QsciLexerPO*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPO* self, QSettings* qs, const char* prefix ```
bool q_scilexerpo_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPO_QBaseReadProperties((QsciLexerPO*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpo.html#writeProperties)
///
/// ``` QsciLexerPO* self, QSettings* qs, const char* prefix ```
bool q_scilexerpo_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPO_WriteProperties((QsciLexerPO*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPO* self, bool (*slot)(QsciLexerPO*, QSettings*, const char*) ```
void q_scilexerpo_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerPO_OnWriteProperties((QsciLexerPO*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPO* self, QSettings* qs, const char* prefix ```
bool q_scilexerpo_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPO_QBaseWriteProperties((QsciLexerPO*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexerpo_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerPO_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexerpo_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerPO_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerPO* self ```
QsciAbstractAPIs* q_scilexerpo_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerPO* self ```
int32_t q_scilexerpo_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// ``` QsciLexerPO* self ```
QColor* q_scilexerpo_default_paper(void* self) {
    return QsciLexer_DefaultPaper((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerPO* self ```
QsciScintilla* q_scilexerpo_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerPO* self, QsciAbstractAPIs* apis ```
void q_scilexerpo_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerPO* self, QColor* c ```
void q_scilexerpo_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerPO* self, QFont* f ```
void q_scilexerpo_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerPO* self, QColor* c ```
void q_scilexerpo_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerPO* self, QSettings* qs ```
bool q_scilexerpo_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerPO* self, QSettings* qs ```
bool q_scilexerpo_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerPO* self, QColor* c, int style ```
void q_scilexerpo_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerpo_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerPO* self, bool eolfilled, int style ```
void q_scilexerpo_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexerpo_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerPO* self, QFont* f, int style ```
void q_scilexerpo_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexerpo_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerPO* self, QColor* c, int style ```
void q_scilexerpo_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerpo_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerPO* self, const char* prop, const char* val ```
void q_scilexerpo_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexerpo_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerPO* self, QSettings* qs, const char* prefix ```
bool q_scilexerpo_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerPO* self, QSettings* qs, const char* prefix ```
bool q_scilexerpo_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerPO* self ```
const char* q_scilexerpo_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerPO* self, const char* name ```
void q_scilexerpo_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerPO* self ```
bool q_scilexerpo_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerPO* self ```
bool q_scilexerpo_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerPO* self ```
bool q_scilexerpo_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerPO* self ```
bool q_scilexerpo_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerPO* self, bool b ```
bool q_scilexerpo_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerPO* self ```
QThread* q_scilexerpo_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerPO* self, QThread* thread ```
void q_scilexerpo_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerPO* self, int interval ```
int32_t q_scilexerpo_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerPO* self, int id ```
void q_scilexerpo_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerPO* self ```
libqt_list /* of QObject* */ q_scilexerpo_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerPO* self, QObject* parent ```
void q_scilexerpo_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerPO* self, QObject* filterObj ```
void q_scilexerpo_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerPO* self, QObject* obj ```
void q_scilexerpo_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexerpo_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerPO* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexerpo_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexerpo_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexerpo_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerPO* self ```
void q_scilexerpo_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerPO* self ```
void q_scilexerpo_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerPO* self, const char* name, QVariant* value ```
bool q_scilexerpo_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerPO* self, const char* name ```
QVariant* q_scilexerpo_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerPO* self ```
const char** q_scilexerpo_dynamic_property_names(void* self) {
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
/// ``` QsciLexerPO* self ```
QBindingStorage* q_scilexerpo_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerPO* self ```
QBindingStorage* q_scilexerpo_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerPO* self ```
void q_scilexerpo_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexerPO* self, void (*slot)(QObject*) ```
void q_scilexerpo_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerPO* self ```
QObject* q_scilexerpo_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerPO* self, const char* classname ```
bool q_scilexerpo_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerPO* self ```
void q_scilexerpo_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerPO* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexerpo_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerpo_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerPO* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerpo_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerPO* self, QObject* param1 ```
void q_scilexerpo_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexerPO* self, void (*slot)(QObject*, QObject*) ```
void q_scilexerpo_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self ```
int32_t q_scilexerpo_lexer_id(void* self) {
    return QsciLexerPO_LexerId((QsciLexerPO*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self ```
int32_t q_scilexerpo_qbase_lexer_id(void* self) {
    return QsciLexerPO_QBaseLexerId((QsciLexerPO*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, int32_t (*slot)() ```
void q_scilexerpo_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerPO_OnLexerId((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self ```
const char* q_scilexerpo_auto_completion_fillups(void* self) {
    return QsciLexerPO_AutoCompletionFillups((QsciLexerPO*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self ```
const char* q_scilexerpo_qbase_auto_completion_fillups(void* self) {
    return QsciLexerPO_QBaseAutoCompletionFillups((QsciLexerPO*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, const char* (*slot)() ```
void q_scilexerpo_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerPO_OnAutoCompletionFillups((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self ```
const char** q_scilexerpo_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerPO_AutoCompletionWordSeparators((QsciLexerPO*)self);
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
/// ``` QsciLexerPO* self ```
const char** q_scilexerpo_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerPO_QBaseAutoCompletionWordSeparators((QsciLexerPO*)self);
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
/// ``` QsciLexerPO* self, const char** (*slot)() ```
void q_scilexerpo_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerPO_OnAutoCompletionWordSeparators((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, int* style ```
const char* q_scilexerpo_block_end(void* self, int* style) {
    return QsciLexerPO_BlockEnd((QsciLexerPO*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, int* style ```
const char* q_scilexerpo_qbase_block_end(void* self, int* style) {
    return QsciLexerPO_QBaseBlockEnd((QsciLexerPO*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, const char* (*slot)(QsciLexerPO*, int*) ```
void q_scilexerpo_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerPO_OnBlockEnd((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self ```
int32_t q_scilexerpo_block_lookback(void* self) {
    return QsciLexerPO_BlockLookback((QsciLexerPO*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self ```
int32_t q_scilexerpo_qbase_block_lookback(void* self) {
    return QsciLexerPO_QBaseBlockLookback((QsciLexerPO*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, int32_t (*slot)() ```
void q_scilexerpo_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerPO_OnBlockLookback((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, int* style ```
const char* q_scilexerpo_block_start(void* self, int* style) {
    return QsciLexerPO_BlockStart((QsciLexerPO*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, int* style ```
const char* q_scilexerpo_qbase_block_start(void* self, int* style) {
    return QsciLexerPO_QBaseBlockStart((QsciLexerPO*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, const char* (*slot)(QsciLexerPO*, int*) ```
void q_scilexerpo_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerPO_OnBlockStart((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, int* style ```
const char* q_scilexerpo_block_start_keyword(void* self, int* style) {
    return QsciLexerPO_BlockStartKeyword((QsciLexerPO*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, int* style ```
const char* q_scilexerpo_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerPO_QBaseBlockStartKeyword((QsciLexerPO*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, const char* (*slot)(QsciLexerPO*, int*) ```
void q_scilexerpo_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerPO_OnBlockStartKeyword((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#braceStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self ```
int32_t q_scilexerpo_brace_style(void* self) {
    return QsciLexerPO_BraceStyle((QsciLexerPO*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self ```
int32_t q_scilexerpo_qbase_brace_style(void* self) {
    return QsciLexerPO_QBaseBraceStyle((QsciLexerPO*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, int32_t (*slot)() ```
void q_scilexerpo_on_brace_style(void* self, int32_t (*slot)()) {
    QsciLexerPO_OnBraceStyle((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self ```
bool q_scilexerpo_case_sensitive(void* self) {
    return QsciLexerPO_CaseSensitive((QsciLexerPO*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self ```
bool q_scilexerpo_qbase_case_sensitive(void* self) {
    return QsciLexerPO_QBaseCaseSensitive((QsciLexerPO*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, bool (*slot)() ```
void q_scilexerpo_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerPO_OnCaseSensitive((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
QColor* q_scilexerpo_color(void* self, int style) {
    return QsciLexerPO_Color((QsciLexerPO*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
QColor* q_scilexerpo_qbase_color(void* self, int style) {
    return QsciLexerPO_QBaseColor((QsciLexerPO*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, QColor* (*slot)(QsciLexerPO*, int) ```
void q_scilexerpo_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerPO_OnColor((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
bool q_scilexerpo_eol_fill(void* self, int style) {
    return QsciLexerPO_EolFill((QsciLexerPO*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
bool q_scilexerpo_qbase_eol_fill(void* self, int style) {
    return QsciLexerPO_QBaseEolFill((QsciLexerPO*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, bool (*slot)(QsciLexerPO*, int) ```
void q_scilexerpo_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerPO_OnEolFill((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
QFont* q_scilexerpo_font(void* self, int style) {
    return QsciLexerPO_Font((QsciLexerPO*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
QFont* q_scilexerpo_qbase_font(void* self, int style) {
    return QsciLexerPO_QBaseFont((QsciLexerPO*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, QFont* (*slot)(QsciLexerPO*, int) ```
void q_scilexerpo_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerPO_OnFont((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self ```
int32_t q_scilexerpo_indentation_guide_view(void* self) {
    return QsciLexerPO_IndentationGuideView((QsciLexerPO*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self ```
int32_t q_scilexerpo_qbase_indentation_guide_view(void* self) {
    return QsciLexerPO_QBaseIndentationGuideView((QsciLexerPO*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, int32_t (*slot)() ```
void q_scilexerpo_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerPO_OnIndentationGuideView((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#keywords)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, int set ```
const char* q_scilexerpo_keywords(void* self, int set) {
    return QsciLexerPO_Keywords((QsciLexerPO*)self, set);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, int set ```
const char* q_scilexerpo_qbase_keywords(void* self, int set) {
    return QsciLexerPO_QBaseKeywords((QsciLexerPO*)self, set);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, const char* (*slot)(QsciLexerPO*, int) ```
void q_scilexerpo_on_keywords(void* self, const char* (*slot)(void*, int)) {
    QsciLexerPO_OnKeywords((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self ```
int32_t q_scilexerpo_default_style(void* self) {
    return QsciLexerPO_DefaultStyle((QsciLexerPO*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self ```
int32_t q_scilexerpo_qbase_default_style(void* self) {
    return QsciLexerPO_QBaseDefaultStyle((QsciLexerPO*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, int32_t (*slot)() ```
void q_scilexerpo_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerPO_OnDefaultStyle((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
QColor* q_scilexerpo_paper(void* self, int style) {
    return QsciLexerPO_Paper((QsciLexerPO*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
QColor* q_scilexerpo_qbase_paper(void* self, int style) {
    return QsciLexerPO_QBasePaper((QsciLexerPO*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, QColor* (*slot)(QsciLexerPO*, int) ```
void q_scilexerpo_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerPO_OnPaper((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
QColor* q_scilexerpo_default_color_with_style(void* self, int style) {
    return QsciLexerPO_DefaultColorWithStyle((QsciLexerPO*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
QColor* q_scilexerpo_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerPO_QBaseDefaultColorWithStyle((QsciLexerPO*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, QColor* (*slot)(QsciLexerPO*, int) ```
void q_scilexerpo_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerPO_OnDefaultColorWithStyle((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
bool q_scilexerpo_default_eol_fill(void* self, int style) {
    return QsciLexerPO_DefaultEolFill((QsciLexerPO*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
bool q_scilexerpo_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerPO_QBaseDefaultEolFill((QsciLexerPO*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, bool (*slot)(QsciLexerPO*, int) ```
void q_scilexerpo_on_default_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerPO_OnDefaultEolFill((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
QFont* q_scilexerpo_default_font_with_style(void* self, int style) {
    return QsciLexerPO_DefaultFontWithStyle((QsciLexerPO*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
QFont* q_scilexerpo_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerPO_QBaseDefaultFontWithStyle((QsciLexerPO*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, QFont* (*slot)(QsciLexerPO*, int) ```
void q_scilexerpo_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerPO_OnDefaultFontWithStyle((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
QColor* q_scilexerpo_default_paper_with_style(void* self, int style) {
    return QsciLexerPO_DefaultPaperWithStyle((QsciLexerPO*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
QColor* q_scilexerpo_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerPO_QBaseDefaultPaperWithStyle((QsciLexerPO*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, QColor* (*slot)(QsciLexerPO*, int) ```
void q_scilexerpo_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerPO_OnDefaultPaperWithStyle((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, QsciScintilla* editor ```
void q_scilexerpo_set_editor(void* self, void* editor) {
    QsciLexerPO_SetEditor((QsciLexerPO*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, QsciScintilla* editor ```
void q_scilexerpo_qbase_set_editor(void* self, void* editor) {
    QsciLexerPO_QBaseSetEditor((QsciLexerPO*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexerPO*, QsciScintilla*) ```
void q_scilexerpo_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerPO_OnSetEditor((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self ```
int32_t q_scilexerpo_style_bits_needed(void* self) {
    return QsciLexerPO_StyleBitsNeeded((QsciLexerPO*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self ```
int32_t q_scilexerpo_qbase_style_bits_needed(void* self) {
    return QsciLexerPO_QBaseStyleBitsNeeded((QsciLexerPO*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, int32_t (*slot)() ```
void q_scilexerpo_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerPO_OnStyleBitsNeeded((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self ```
const char* q_scilexerpo_word_characters(void* self) {
    return QsciLexerPO_WordCharacters((QsciLexerPO*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self ```
const char* q_scilexerpo_qbase_word_characters(void* self) {
    return QsciLexerPO_QBaseWordCharacters((QsciLexerPO*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, const char* (*slot)() ```
void q_scilexerpo_on_word_characters(void* self, const char* (*slot)()) {
    QsciLexerPO_OnWordCharacters((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, int autoindentstyle ```
void q_scilexerpo_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerPO_SetAutoIndentStyle((QsciLexerPO*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, int autoindentstyle ```
void q_scilexerpo_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerPO_QBaseSetAutoIndentStyle((QsciLexerPO*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexerPO*, int) ```
void q_scilexerpo_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerPO_OnSetAutoIndentStyle((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, QColor* c, int style ```
void q_scilexerpo_set_color(void* self, void* c, int style) {
    QsciLexerPO_SetColor((QsciLexerPO*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, QColor* c, int style ```
void q_scilexerpo_qbase_set_color(void* self, void* c, int style) {
    QsciLexerPO_QBaseSetColor((QsciLexerPO*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexerPO*, QColor*, int) ```
void q_scilexerpo_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerPO_OnSetColor((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, bool eoffill, int style ```
void q_scilexerpo_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerPO_SetEolFill((QsciLexerPO*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, bool eoffill, int style ```
void q_scilexerpo_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerPO_QBaseSetEolFill((QsciLexerPO*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexerPO*, bool, int) ```
void q_scilexerpo_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerPO_OnSetEolFill((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, QFont* f, int style ```
void q_scilexerpo_set_font(void* self, void* f, int style) {
    QsciLexerPO_SetFont((QsciLexerPO*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, QFont* f, int style ```
void q_scilexerpo_qbase_set_font(void* self, void* f, int style) {
    QsciLexerPO_QBaseSetFont((QsciLexerPO*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexerPO*, QFont*, int) ```
void q_scilexerpo_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerPO_OnSetFont((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, QColor* c, int style ```
void q_scilexerpo_set_paper(void* self, void* c, int style) {
    QsciLexerPO_SetPaper((QsciLexerPO*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, QColor* c, int style ```
void q_scilexerpo_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerPO_QBaseSetPaper((QsciLexerPO*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexerPO*, QColor*, int) ```
void q_scilexerpo_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerPO_OnSetPaper((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, QEvent* event ```
bool q_scilexerpo_event(void* self, void* event) {
    return QsciLexerPO_Event((QsciLexerPO*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, QEvent* event ```
bool q_scilexerpo_qbase_event(void* self, void* event) {
    return QsciLexerPO_QBaseEvent((QsciLexerPO*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, bool (*slot)(QsciLexerPO*, QEvent*) ```
void q_scilexerpo_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerPO_OnEvent((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, QObject* watched, QEvent* event ```
bool q_scilexerpo_event_filter(void* self, void* watched, void* event) {
    return QsciLexerPO_EventFilter((QsciLexerPO*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, QObject* watched, QEvent* event ```
bool q_scilexerpo_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerPO_QBaseEventFilter((QsciLexerPO*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, bool (*slot)(QsciLexerPO*, QObject*, QEvent*) ```
void q_scilexerpo_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerPO_OnEventFilter((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, QTimerEvent* event ```
void q_scilexerpo_timer_event(void* self, void* event) {
    QsciLexerPO_TimerEvent((QsciLexerPO*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, QTimerEvent* event ```
void q_scilexerpo_qbase_timer_event(void* self, void* event) {
    QsciLexerPO_QBaseTimerEvent((QsciLexerPO*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexerPO*, QTimerEvent*) ```
void q_scilexerpo_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerPO_OnTimerEvent((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, QChildEvent* event ```
void q_scilexerpo_child_event(void* self, void* event) {
    QsciLexerPO_ChildEvent((QsciLexerPO*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, QChildEvent* event ```
void q_scilexerpo_qbase_child_event(void* self, void* event) {
    QsciLexerPO_QBaseChildEvent((QsciLexerPO*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexerPO*, QChildEvent*) ```
void q_scilexerpo_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerPO_OnChildEvent((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, QEvent* event ```
void q_scilexerpo_custom_event(void* self, void* event) {
    QsciLexerPO_CustomEvent((QsciLexerPO*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, QEvent* event ```
void q_scilexerpo_qbase_custom_event(void* self, void* event) {
    QsciLexerPO_QBaseCustomEvent((QsciLexerPO*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexerPO*, QEvent*) ```
void q_scilexerpo_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerPO_OnCustomEvent((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, QMetaMethod* signal ```
void q_scilexerpo_connect_notify(void* self, void* signal) {
    QsciLexerPO_ConnectNotify((QsciLexerPO*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, QMetaMethod* signal ```
void q_scilexerpo_qbase_connect_notify(void* self, void* signal) {
    QsciLexerPO_QBaseConnectNotify((QsciLexerPO*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexerPO*, QMetaMethod*) ```
void q_scilexerpo_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerPO_OnConnectNotify((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, QMetaMethod* signal ```
void q_scilexerpo_disconnect_notify(void* self, void* signal) {
    QsciLexerPO_DisconnectNotify((QsciLexerPO*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, QMetaMethod* signal ```
void q_scilexerpo_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerPO_QBaseDisconnectNotify((QsciLexerPO*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexerPO*, QMetaMethod*) ```
void q_scilexerpo_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerPO_OnDisconnectNotify((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self ```
QObject* q_scilexerpo_sender(void* self) {
    return QsciLexerPO_Sender((QsciLexerPO*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self ```
QObject* q_scilexerpo_qbase_sender(void* self) {
    return QsciLexerPO_QBaseSender((QsciLexerPO*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, QObject* (*slot)() ```
void q_scilexerpo_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerPO_OnSender((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self ```
int32_t q_scilexerpo_sender_signal_index(void* self) {
    return QsciLexerPO_SenderSignalIndex((QsciLexerPO*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self ```
int32_t q_scilexerpo_qbase_sender_signal_index(void* self) {
    return QsciLexerPO_QBaseSenderSignalIndex((QsciLexerPO*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, int32_t (*slot)() ```
void q_scilexerpo_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerPO_OnSenderSignalIndex((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, const char* signal ```
int32_t q_scilexerpo_receivers(void* self, const char* signal) {
    return QsciLexerPO_Receivers((QsciLexerPO*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, const char* signal ```
int32_t q_scilexerpo_qbase_receivers(void* self, const char* signal) {
    return QsciLexerPO_QBaseReceivers((QsciLexerPO*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, int32_t (*slot)(QsciLexerPO*, const char*) ```
void q_scilexerpo_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerPO_OnReceivers((QsciLexerPO*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, QMetaMethod* signal ```
bool q_scilexerpo_is_signal_connected(void* self, void* signal) {
    return QsciLexerPO_IsSignalConnected((QsciLexerPO*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, QMetaMethod* signal ```
bool q_scilexerpo_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerPO_QBaseIsSignalConnected((QsciLexerPO*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, bool (*slot)(QsciLexerPO*, QMetaMethod*) ```
void q_scilexerpo_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerPO_OnIsSignalConnected((QsciLexerPO*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexerPO* self ```
void q_scilexerpo_delete(void* self) {
    QsciLexerPO_Delete((QsciLexerPO*)(self));
}