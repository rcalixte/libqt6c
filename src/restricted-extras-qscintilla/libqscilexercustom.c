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
#include "libqscilexercustom.hpp"
#include "libqscilexercustom.h"

/// https://doc.qt.io/qt-6/qscilexercustom.html

/// q_scilexercustom_new constructs a new QsciLexerCustom object.
///
///
QsciLexerCustom* q_scilexercustom_new() {
    return QsciLexerCustom_new();
}

/// q_scilexercustom_new2 constructs a new QsciLexerCustom object.
///
/// ``` QObject* parent ```
QsciLexerCustom* q_scilexercustom_new2(void* parent) {
    return QsciLexerCustom_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerCustom* self ```
QMetaObject* q_scilexercustom_meta_object(void* self) {
    return QsciLexerCustom_MetaObject((QsciLexerCustom*)self);
}

/// ``` QsciLexerCustom* self, const char* param1 ```
void* q_scilexercustom_metacast(void* self, const char* param1) {
    return QsciLexerCustom_Metacast((QsciLexerCustom*)self, param1);
}

/// ``` QsciLexerCustom* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexercustom_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerCustom_Metacall((QsciLexerCustom*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerCustom* self, int32_t (*slot)(QsciLexerCustom*, enum QMetaObject__Call, int, void*) ```
void q_scilexercustom_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerCustom_OnMetacall((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerCustom* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexercustom_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerCustom_QBaseMetacall((QsciLexerCustom*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexercustom_tr(const char* s) {
    libqt_string _str = QsciLexerCustom_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercustom.html#setStyling)
///
/// ``` QsciLexerCustom* self, int length, int style ```
void q_scilexercustom_set_styling(void* self, int length, int style) {
    QsciLexerCustom_SetStyling((QsciLexerCustom*)self, length, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercustom.html#setStyling)
///
/// ``` QsciLexerCustom* self, int length, QsciStyle* style ```
void q_scilexercustom_set_styling2(void* self, int length, void* style) {
    QsciLexerCustom_SetStyling2((QsciLexerCustom*)self, length, (QsciStyle*)style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercustom.html#startStyling)
///
/// ``` QsciLexerCustom* self, int pos ```
void q_scilexercustom_start_styling(void* self, int pos) {
    QsciLexerCustom_StartStyling((QsciLexerCustom*)self, pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercustom.html#styleText)
///
/// ``` QsciLexerCustom* self, int start, int end ```
void q_scilexercustom_style_text(void* self, int start, int end) {
    QsciLexerCustom_StyleText((QsciLexerCustom*)self, start, end);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerCustom* self, void (*slot)(QsciLexerCustom*, int, int) ```
void q_scilexercustom_on_style_text(void* self, void (*slot)(void*, int, int)) {
    QsciLexerCustom_OnStyleText((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerCustom* self, int start, int end ```
void q_scilexercustom_qbase_style_text(void* self, int start, int end) {
    QsciLexerCustom_QBaseStyleText((QsciLexerCustom*)self, start, end);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercustom.html#setEditor)
///
/// ``` QsciLexerCustom* self, QsciScintilla* editor ```
void q_scilexercustom_set_editor(void* self, void* editor) {
    QsciLexerCustom_SetEditor((QsciLexerCustom*)self, (QsciScintilla*)editor);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerCustom* self, void (*slot)(QsciLexerCustom*, QsciScintilla*) ```
void q_scilexercustom_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerCustom_OnSetEditor((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerCustom* self, QsciScintilla* editor ```
void q_scilexercustom_qbase_set_editor(void* self, void* editor) {
    QsciLexerCustom_QBaseSetEditor((QsciLexerCustom*)self, (QsciScintilla*)editor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercustom.html#styleBitsNeeded)
///
/// ``` QsciLexerCustom* self ```
int32_t q_scilexercustom_style_bits_needed(void* self) {
    return QsciLexerCustom_StyleBitsNeeded((QsciLexerCustom*)self);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerCustom* self, int32_t (*slot)() ```
void q_scilexercustom_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerCustom_OnStyleBitsNeeded((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerCustom* self ```
int32_t q_scilexercustom_qbase_style_bits_needed(void* self) {
    return QsciLexerCustom_QBaseStyleBitsNeeded((QsciLexerCustom*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexercustom_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerCustom_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexercustom_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerCustom_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercustom.html#startStyling)
///
/// ``` QsciLexerCustom* self, int pos, int styleBits ```
void q_scilexercustom_start_styling2(void* self, int pos, int styleBits) {
    QsciLexerCustom_StartStyling2((QsciLexerCustom*)self, pos, styleBits);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerCustom* self ```
QsciAbstractAPIs* q_scilexercustom_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerCustom* self ```
int32_t q_scilexercustom_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// ``` QsciLexerCustom* self ```
QColor* q_scilexercustom_default_color(void* self) {
    return QsciLexer_DefaultColor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// ``` QsciLexerCustom* self ```
QFont* q_scilexercustom_default_font(void* self) {
    return QsciLexer_DefaultFont((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// ``` QsciLexerCustom* self ```
QColor* q_scilexercustom_default_paper(void* self) {
    return QsciLexer_DefaultPaper((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerCustom* self ```
QsciScintilla* q_scilexercustom_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerCustom* self, QsciAbstractAPIs* apis ```
void q_scilexercustom_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerCustom* self, QColor* c ```
void q_scilexercustom_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerCustom* self, QFont* f ```
void q_scilexercustom_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerCustom* self, QColor* c ```
void q_scilexercustom_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerCustom* self, QSettings* qs ```
bool q_scilexercustom_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerCustom* self, QSettings* qs ```
bool q_scilexercustom_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerCustom* self, QColor* c, int style ```
void q_scilexercustom_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerCustom* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexercustom_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerCustom* self, bool eolfilled, int style ```
void q_scilexercustom_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerCustom* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexercustom_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerCustom* self, QFont* f, int style ```
void q_scilexercustom_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerCustom* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexercustom_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerCustom* self, QColor* c, int style ```
void q_scilexercustom_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerCustom* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexercustom_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerCustom* self, const char* prop, const char* val ```
void q_scilexercustom_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerCustom* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexercustom_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerCustom* self, QSettings* qs, const char* prefix ```
bool q_scilexercustom_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerCustom* self, QSettings* qs, const char* prefix ```
bool q_scilexercustom_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerCustom* self ```
const char* q_scilexercustom_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerCustom* self, const char* name ```
void q_scilexercustom_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerCustom* self ```
bool q_scilexercustom_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerCustom* self ```
bool q_scilexercustom_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerCustom* self ```
bool q_scilexercustom_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerCustom* self ```
bool q_scilexercustom_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerCustom* self, bool b ```
bool q_scilexercustom_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerCustom* self ```
QThread* q_scilexercustom_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerCustom* self, QThread* thread ```
void q_scilexercustom_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerCustom* self, int interval ```
int32_t q_scilexercustom_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerCustom* self, int id ```
void q_scilexercustom_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerCustom* self ```
libqt_list /* of QObject* */ q_scilexercustom_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerCustom* self, QObject* parent ```
void q_scilexercustom_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerCustom* self, QObject* filterObj ```
void q_scilexercustom_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerCustom* self, QObject* obj ```
void q_scilexercustom_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexercustom_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerCustom* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexercustom_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexercustom_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexercustom_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerCustom* self ```
void q_scilexercustom_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerCustom* self ```
void q_scilexercustom_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerCustom* self, const char* name, QVariant* value ```
bool q_scilexercustom_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerCustom* self, const char* name ```
QVariant* q_scilexercustom_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerCustom* self ```
const char** q_scilexercustom_dynamic_property_names(void* self) {
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
/// ``` QsciLexerCustom* self ```
QBindingStorage* q_scilexercustom_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerCustom* self ```
QBindingStorage* q_scilexercustom_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerCustom* self ```
void q_scilexercustom_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexerCustom* self, void (*slot)(QObject*) ```
void q_scilexercustom_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerCustom* self ```
QObject* q_scilexercustom_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerCustom* self, const char* classname ```
bool q_scilexercustom_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerCustom* self ```
void q_scilexercustom_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerCustom* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexercustom_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexercustom_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerCustom* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexercustom_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerCustom* self, QObject* param1 ```
void q_scilexercustom_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexerCustom* self, void (*slot)(QObject*, QObject*) ```
void q_scilexercustom_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#language)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self ```
const char* q_scilexercustom_language(void* self) {
    return QsciLexerCustom_Language((QsciLexerCustom*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self ```
const char* q_scilexercustom_qbase_language(void* self) {
    return QsciLexerCustom_QBaseLanguage((QsciLexerCustom*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, const char* (*slot)() ```
void q_scilexercustom_on_language(void* self, const char* (*slot)()) {
    QsciLexerCustom_OnLanguage((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexer)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self ```
const char* q_scilexercustom_lexer(void* self) {
    return QsciLexerCustom_Lexer((QsciLexerCustom*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self ```
const char* q_scilexercustom_qbase_lexer(void* self) {
    return QsciLexerCustom_QBaseLexer((QsciLexerCustom*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, const char* (*slot)() ```
void q_scilexercustom_on_lexer(void* self, const char* (*slot)()) {
    QsciLexerCustom_OnLexer((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self ```
int32_t q_scilexercustom_lexer_id(void* self) {
    return QsciLexerCustom_LexerId((QsciLexerCustom*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self ```
int32_t q_scilexercustom_qbase_lexer_id(void* self) {
    return QsciLexerCustom_QBaseLexerId((QsciLexerCustom*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, int32_t (*slot)() ```
void q_scilexercustom_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerCustom_OnLexerId((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self ```
const char* q_scilexercustom_auto_completion_fillups(void* self) {
    return QsciLexerCustom_AutoCompletionFillups((QsciLexerCustom*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self ```
const char* q_scilexercustom_qbase_auto_completion_fillups(void* self) {
    return QsciLexerCustom_QBaseAutoCompletionFillups((QsciLexerCustom*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, const char* (*slot)() ```
void q_scilexercustom_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerCustom_OnAutoCompletionFillups((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self ```
const char** q_scilexercustom_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerCustom_AutoCompletionWordSeparators((QsciLexerCustom*)self);
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
/// ``` QsciLexerCustom* self ```
const char** q_scilexercustom_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerCustom_QBaseAutoCompletionWordSeparators((QsciLexerCustom*)self);
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
/// ``` QsciLexerCustom* self, const char** (*slot)() ```
void q_scilexercustom_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerCustom_OnAutoCompletionWordSeparators((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self, int* style ```
const char* q_scilexercustom_block_end(void* self, int* style) {
    return QsciLexerCustom_BlockEnd((QsciLexerCustom*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self, int* style ```
const char* q_scilexercustom_qbase_block_end(void* self, int* style) {
    return QsciLexerCustom_QBaseBlockEnd((QsciLexerCustom*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, const char* (*slot)(QsciLexerCustom*, int*) ```
void q_scilexercustom_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerCustom_OnBlockEnd((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self ```
int32_t q_scilexercustom_block_lookback(void* self) {
    return QsciLexerCustom_BlockLookback((QsciLexerCustom*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self ```
int32_t q_scilexercustom_qbase_block_lookback(void* self) {
    return QsciLexerCustom_QBaseBlockLookback((QsciLexerCustom*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, int32_t (*slot)() ```
void q_scilexercustom_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerCustom_OnBlockLookback((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self, int* style ```
const char* q_scilexercustom_block_start(void* self, int* style) {
    return QsciLexerCustom_BlockStart((QsciLexerCustom*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self, int* style ```
const char* q_scilexercustom_qbase_block_start(void* self, int* style) {
    return QsciLexerCustom_QBaseBlockStart((QsciLexerCustom*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, const char* (*slot)(QsciLexerCustom*, int*) ```
void q_scilexercustom_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerCustom_OnBlockStart((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self, int* style ```
const char* q_scilexercustom_block_start_keyword(void* self, int* style) {
    return QsciLexerCustom_BlockStartKeyword((QsciLexerCustom*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self, int* style ```
const char* q_scilexercustom_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerCustom_QBaseBlockStartKeyword((QsciLexerCustom*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, const char* (*slot)(QsciLexerCustom*, int*) ```
void q_scilexercustom_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerCustom_OnBlockStartKeyword((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#braceStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self ```
int32_t q_scilexercustom_brace_style(void* self) {
    return QsciLexerCustom_BraceStyle((QsciLexerCustom*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self ```
int32_t q_scilexercustom_qbase_brace_style(void* self) {
    return QsciLexerCustom_QBaseBraceStyle((QsciLexerCustom*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, int32_t (*slot)() ```
void q_scilexercustom_on_brace_style(void* self, int32_t (*slot)()) {
    QsciLexerCustom_OnBraceStyle((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self ```
bool q_scilexercustom_case_sensitive(void* self) {
    return QsciLexerCustom_CaseSensitive((QsciLexerCustom*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self ```
bool q_scilexercustom_qbase_case_sensitive(void* self) {
    return QsciLexerCustom_QBaseCaseSensitive((QsciLexerCustom*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, bool (*slot)() ```
void q_scilexercustom_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerCustom_OnCaseSensitive((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self, int style ```
QColor* q_scilexercustom_color(void* self, int style) {
    return QsciLexerCustom_Color((QsciLexerCustom*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self, int style ```
QColor* q_scilexercustom_qbase_color(void* self, int style) {
    return QsciLexerCustom_QBaseColor((QsciLexerCustom*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, QColor* (*slot)(QsciLexerCustom*, int) ```
void q_scilexercustom_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerCustom_OnColor((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self, int style ```
bool q_scilexercustom_eol_fill(void* self, int style) {
    return QsciLexerCustom_EolFill((QsciLexerCustom*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self, int style ```
bool q_scilexercustom_qbase_eol_fill(void* self, int style) {
    return QsciLexerCustom_QBaseEolFill((QsciLexerCustom*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, bool (*slot)(QsciLexerCustom*, int) ```
void q_scilexercustom_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerCustom_OnEolFill((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self, int style ```
QFont* q_scilexercustom_font(void* self, int style) {
    return QsciLexerCustom_Font((QsciLexerCustom*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self, int style ```
QFont* q_scilexercustom_qbase_font(void* self, int style) {
    return QsciLexerCustom_QBaseFont((QsciLexerCustom*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, QFont* (*slot)(QsciLexerCustom*, int) ```
void q_scilexercustom_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerCustom_OnFont((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self ```
int32_t q_scilexercustom_indentation_guide_view(void* self) {
    return QsciLexerCustom_IndentationGuideView((QsciLexerCustom*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self ```
int32_t q_scilexercustom_qbase_indentation_guide_view(void* self) {
    return QsciLexerCustom_QBaseIndentationGuideView((QsciLexerCustom*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, int32_t (*slot)() ```
void q_scilexercustom_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerCustom_OnIndentationGuideView((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#keywords)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self, int set ```
const char* q_scilexercustom_keywords(void* self, int set) {
    return QsciLexerCustom_Keywords((QsciLexerCustom*)self, set);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self, int set ```
const char* q_scilexercustom_qbase_keywords(void* self, int set) {
    return QsciLexerCustom_QBaseKeywords((QsciLexerCustom*)self, set);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, const char* (*slot)(QsciLexerCustom*, int) ```
void q_scilexercustom_on_keywords(void* self, const char* (*slot)(void*, int)) {
    QsciLexerCustom_OnKeywords((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self ```
int32_t q_scilexercustom_default_style(void* self) {
    return QsciLexerCustom_DefaultStyle((QsciLexerCustom*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self ```
int32_t q_scilexercustom_qbase_default_style(void* self) {
    return QsciLexerCustom_QBaseDefaultStyle((QsciLexerCustom*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, int32_t (*slot)() ```
void q_scilexercustom_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerCustom_OnDefaultStyle((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#description)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self, int style ```
const char* q_scilexercustom_description(void* self, int style) {
    libqt_string _str = QsciLexerCustom_Description((QsciLexerCustom*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self, int style ```
const char* q_scilexercustom_qbase_description(void* self, int style) {
    libqt_string _str = QsciLexerCustom_QBaseDescription((QsciLexerCustom*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, const char* (*slot)(QsciLexerCustom*, int) ```
void q_scilexercustom_on_description(void* self, const char* (*slot)(void*, int)) {
    QsciLexerCustom_OnDescription((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self, int style ```
QColor* q_scilexercustom_paper(void* self, int style) {
    return QsciLexerCustom_Paper((QsciLexerCustom*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self, int style ```
QColor* q_scilexercustom_qbase_paper(void* self, int style) {
    return QsciLexerCustom_QBasePaper((QsciLexerCustom*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, QColor* (*slot)(QsciLexerCustom*, int) ```
void q_scilexercustom_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerCustom_OnPaper((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self, int style ```
QColor* q_scilexercustom_default_color_with_style(void* self, int style) {
    return QsciLexerCustom_DefaultColorWithStyle((QsciLexerCustom*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self, int style ```
QColor* q_scilexercustom_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerCustom_QBaseDefaultColorWithStyle((QsciLexerCustom*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, QColor* (*slot)(QsciLexerCustom*, int) ```
void q_scilexercustom_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerCustom_OnDefaultColorWithStyle((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self, int style ```
bool q_scilexercustom_default_eol_fill(void* self, int style) {
    return QsciLexerCustom_DefaultEolFill((QsciLexerCustom*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self, int style ```
bool q_scilexercustom_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerCustom_QBaseDefaultEolFill((QsciLexerCustom*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, bool (*slot)(QsciLexerCustom*, int) ```
void q_scilexercustom_on_default_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerCustom_OnDefaultEolFill((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self, int style ```
QFont* q_scilexercustom_default_font_with_style(void* self, int style) {
    return QsciLexerCustom_DefaultFontWithStyle((QsciLexerCustom*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self, int style ```
QFont* q_scilexercustom_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerCustom_QBaseDefaultFontWithStyle((QsciLexerCustom*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, QFont* (*slot)(QsciLexerCustom*, int) ```
void q_scilexercustom_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerCustom_OnDefaultFontWithStyle((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self, int style ```
QColor* q_scilexercustom_default_paper_with_style(void* self, int style) {
    return QsciLexerCustom_DefaultPaperWithStyle((QsciLexerCustom*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self, int style ```
QColor* q_scilexercustom_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerCustom_QBaseDefaultPaperWithStyle((QsciLexerCustom*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, QColor* (*slot)(QsciLexerCustom*, int) ```
void q_scilexercustom_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerCustom_OnDefaultPaperWithStyle((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#refreshProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self ```
void q_scilexercustom_refresh_properties(void* self) {
    QsciLexerCustom_RefreshProperties((QsciLexerCustom*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self ```
void q_scilexercustom_qbase_refresh_properties(void* self) {
    QsciLexerCustom_QBaseRefreshProperties((QsciLexerCustom*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, void (*slot)() ```
void q_scilexercustom_on_refresh_properties(void* self, void (*slot)()) {
    QsciLexerCustom_OnRefreshProperties((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self ```
const char* q_scilexercustom_word_characters(void* self) {
    return QsciLexerCustom_WordCharacters((QsciLexerCustom*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self ```
const char* q_scilexercustom_qbase_word_characters(void* self) {
    return QsciLexerCustom_QBaseWordCharacters((QsciLexerCustom*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, const char* (*slot)() ```
void q_scilexercustom_on_word_characters(void* self, const char* (*slot)()) {
    QsciLexerCustom_OnWordCharacters((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self, int autoindentstyle ```
void q_scilexercustom_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerCustom_SetAutoIndentStyle((QsciLexerCustom*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self, int autoindentstyle ```
void q_scilexercustom_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerCustom_QBaseSetAutoIndentStyle((QsciLexerCustom*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, void (*slot)(QsciLexerCustom*, int) ```
void q_scilexercustom_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerCustom_OnSetAutoIndentStyle((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self, QColor* c, int style ```
void q_scilexercustom_set_color(void* self, void* c, int style) {
    QsciLexerCustom_SetColor((QsciLexerCustom*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self, QColor* c, int style ```
void q_scilexercustom_qbase_set_color(void* self, void* c, int style) {
    QsciLexerCustom_QBaseSetColor((QsciLexerCustom*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, void (*slot)(QsciLexerCustom*, QColor*, int) ```
void q_scilexercustom_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerCustom_OnSetColor((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self, bool eoffill, int style ```
void q_scilexercustom_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerCustom_SetEolFill((QsciLexerCustom*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self, bool eoffill, int style ```
void q_scilexercustom_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerCustom_QBaseSetEolFill((QsciLexerCustom*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, void (*slot)(QsciLexerCustom*, bool, int) ```
void q_scilexercustom_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerCustom_OnSetEolFill((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self, QFont* f, int style ```
void q_scilexercustom_set_font(void* self, void* f, int style) {
    QsciLexerCustom_SetFont((QsciLexerCustom*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self, QFont* f, int style ```
void q_scilexercustom_qbase_set_font(void* self, void* f, int style) {
    QsciLexerCustom_QBaseSetFont((QsciLexerCustom*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, void (*slot)(QsciLexerCustom*, QFont*, int) ```
void q_scilexercustom_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerCustom_OnSetFont((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self, QColor* c, int style ```
void q_scilexercustom_set_paper(void* self, void* c, int style) {
    QsciLexerCustom_SetPaper((QsciLexerCustom*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self, QColor* c, int style ```
void q_scilexercustom_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerCustom_QBaseSetPaper((QsciLexerCustom*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, void (*slot)(QsciLexerCustom*, QColor*, int) ```
void q_scilexercustom_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerCustom_OnSetPaper((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self, QSettings* qs, const char* prefix ```
bool q_scilexercustom_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCustom_ReadProperties((QsciLexerCustom*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self, QSettings* qs, const char* prefix ```
bool q_scilexercustom_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCustom_QBaseReadProperties((QsciLexerCustom*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, bool (*slot)(QsciLexerCustom*, QSettings*, const char*) ```
void q_scilexercustom_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerCustom_OnReadProperties((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self, QSettings* qs, const char* prefix ```
bool q_scilexercustom_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCustom_WriteProperties((QsciLexerCustom*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self, QSettings* qs, const char* prefix ```
bool q_scilexercustom_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCustom_QBaseWriteProperties((QsciLexerCustom*)self, (QSettings*)qs, qstring(prefix));
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, bool (*slot)(QsciLexerCustom*, QSettings*, const char*) ```
void q_scilexercustom_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerCustom_OnWriteProperties((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self, QEvent* event ```
bool q_scilexercustom_event(void* self, void* event) {
    return QsciLexerCustom_Event((QsciLexerCustom*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self, QEvent* event ```
bool q_scilexercustom_qbase_event(void* self, void* event) {
    return QsciLexerCustom_QBaseEvent((QsciLexerCustom*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, bool (*slot)(QsciLexerCustom*, QEvent*) ```
void q_scilexercustom_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerCustom_OnEvent((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self, QObject* watched, QEvent* event ```
bool q_scilexercustom_event_filter(void* self, void* watched, void* event) {
    return QsciLexerCustom_EventFilter((QsciLexerCustom*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self, QObject* watched, QEvent* event ```
bool q_scilexercustom_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerCustom_QBaseEventFilter((QsciLexerCustom*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, bool (*slot)(QsciLexerCustom*, QObject*, QEvent*) ```
void q_scilexercustom_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerCustom_OnEventFilter((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self, QTimerEvent* event ```
void q_scilexercustom_timer_event(void* self, void* event) {
    QsciLexerCustom_TimerEvent((QsciLexerCustom*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self, QTimerEvent* event ```
void q_scilexercustom_qbase_timer_event(void* self, void* event) {
    QsciLexerCustom_QBaseTimerEvent((QsciLexerCustom*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, void (*slot)(QsciLexerCustom*, QTimerEvent*) ```
void q_scilexercustom_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerCustom_OnTimerEvent((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self, QChildEvent* event ```
void q_scilexercustom_child_event(void* self, void* event) {
    QsciLexerCustom_ChildEvent((QsciLexerCustom*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self, QChildEvent* event ```
void q_scilexercustom_qbase_child_event(void* self, void* event) {
    QsciLexerCustom_QBaseChildEvent((QsciLexerCustom*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, void (*slot)(QsciLexerCustom*, QChildEvent*) ```
void q_scilexercustom_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerCustom_OnChildEvent((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self, QEvent* event ```
void q_scilexercustom_custom_event(void* self, void* event) {
    QsciLexerCustom_CustomEvent((QsciLexerCustom*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self, QEvent* event ```
void q_scilexercustom_qbase_custom_event(void* self, void* event) {
    QsciLexerCustom_QBaseCustomEvent((QsciLexerCustom*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, void (*slot)(QsciLexerCustom*, QEvent*) ```
void q_scilexercustom_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerCustom_OnCustomEvent((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self, QMetaMethod* signal ```
void q_scilexercustom_connect_notify(void* self, void* signal) {
    QsciLexerCustom_ConnectNotify((QsciLexerCustom*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self, QMetaMethod* signal ```
void q_scilexercustom_qbase_connect_notify(void* self, void* signal) {
    QsciLexerCustom_QBaseConnectNotify((QsciLexerCustom*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, void (*slot)(QsciLexerCustom*, QMetaMethod*) ```
void q_scilexercustom_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerCustom_OnConnectNotify((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self, QMetaMethod* signal ```
void q_scilexercustom_disconnect_notify(void* self, void* signal) {
    QsciLexerCustom_DisconnectNotify((QsciLexerCustom*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self, QMetaMethod* signal ```
void q_scilexercustom_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerCustom_QBaseDisconnectNotify((QsciLexerCustom*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, void (*slot)(QsciLexerCustom*, QMetaMethod*) ```
void q_scilexercustom_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerCustom_OnDisconnectNotify((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self ```
QObject* q_scilexercustom_sender(void* self) {
    return QsciLexerCustom_Sender((QsciLexerCustom*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self ```
QObject* q_scilexercustom_qbase_sender(void* self) {
    return QsciLexerCustom_QBaseSender((QsciLexerCustom*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, QObject* (*slot)() ```
void q_scilexercustom_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerCustom_OnSender((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self ```
int32_t q_scilexercustom_sender_signal_index(void* self) {
    return QsciLexerCustom_SenderSignalIndex((QsciLexerCustom*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self ```
int32_t q_scilexercustom_qbase_sender_signal_index(void* self) {
    return QsciLexerCustom_QBaseSenderSignalIndex((QsciLexerCustom*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, int32_t (*slot)() ```
void q_scilexercustom_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerCustom_OnSenderSignalIndex((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self, const char* signal ```
int32_t q_scilexercustom_receivers(void* self, const char* signal) {
    return QsciLexerCustom_Receivers((QsciLexerCustom*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self, const char* signal ```
int32_t q_scilexercustom_qbase_receivers(void* self, const char* signal) {
    return QsciLexerCustom_QBaseReceivers((QsciLexerCustom*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, int32_t (*slot)(QsciLexerCustom*, const char*) ```
void q_scilexercustom_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerCustom_OnReceivers((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCustom* self, QMetaMethod* signal ```
bool q_scilexercustom_is_signal_connected(void* self, void* signal) {
    return QsciLexerCustom_IsSignalConnected((QsciLexerCustom*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCustom* self, QMetaMethod* signal ```
bool q_scilexercustom_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerCustom_QBaseIsSignalConnected((QsciLexerCustom*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCustom* self, bool (*slot)(QsciLexerCustom*, QMetaMethod*) ```
void q_scilexercustom_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerCustom_OnIsSignalConnected((QsciLexerCustom*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexerCustom* self ```
void q_scilexercustom_delete(void* self) {
    QsciLexerCustom_Delete((QsciLexerCustom*)(self));
}