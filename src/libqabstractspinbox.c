#include "libqaction.hpp"
#include "libqevent.hpp"
#include "libqanystringview.hpp"
#include "libqbackingstore.hpp"
#include "libqbindingstorage.hpp"
#include "libqbitmap.hpp"
#include "libqcursor.hpp"
#include "libqfont.hpp"
#include "libqfontinfo.hpp"
#include "libqfontmetrics.hpp"
#include "libqgraphicseffect.hpp"
#include "libqgraphicsproxywidget.hpp"
#include "libqicon.hpp"
#include "libqkeysequence.hpp"
#include "libqlayout.hpp"
#include "libqlineedit.hpp"
#include "libqlocale.hpp"
#include "libqmargins.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpalette.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqscreen.hpp"
#include "libqsize.hpp"
#include "libqsizepolicy.hpp"
#include <string.h>
#include "libqstyle.hpp"
#include "libqstyleoption.hpp"
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqabstractspinbox.hpp"
#include "libqabstractspinbox.h"

/// https://doc.qt.io/qt-6/qabstractspinbox.html

/// q_abstractspinbox_new constructs a new QAbstractSpinBox object.
///
/// ``` QWidget* parent ```
QAbstractSpinBox* q_abstractspinbox_new(void* parent) {
    return QAbstractSpinBox_new((QWidget*)parent);
}

/// q_abstractspinbox_new2 constructs a new QAbstractSpinBox object.
///
///
QAbstractSpinBox* q_abstractspinbox_new2() {
    return QAbstractSpinBox_new2();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAbstractSpinBox* self ```
QMetaObject* q_abstractspinbox_meta_object(void* self) {
    return QAbstractSpinBox_MetaObject((QAbstractSpinBox*)self);
}

/// ``` QAbstractSpinBox* self, const char* param1 ```
void* q_abstractspinbox_metacast(void* self, const char* param1) {
    return QAbstractSpinBox_Metacast((QAbstractSpinBox*)self, param1);
}

/// ``` QAbstractSpinBox* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractspinbox_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractSpinBox_Metacall((QAbstractSpinBox*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSpinBox* self, int32_t (*slot)(QAbstractSpinBox*, enum QMetaObject__Call, int, void*) ```
void q_abstractspinbox_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAbstractSpinBox_OnMetacall((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSpinBox* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractspinbox_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractSpinBox_QBaseMetacall((QAbstractSpinBox*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_abstractspinbox_tr(const char* s) {
    libqt_string _str = QAbstractSpinBox_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#buttonSymbols)
///
/// ``` QAbstractSpinBox* self ```
int64_t q_abstractspinbox_button_symbols(void* self) {
    return QAbstractSpinBox_ButtonSymbols((QAbstractSpinBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setButtonSymbols)
///
/// ``` QAbstractSpinBox* self, enum QAbstractSpinBox__ButtonSymbols bs ```
void q_abstractspinbox_set_button_symbols(void* self, int64_t bs) {
    QAbstractSpinBox_SetButtonSymbols((QAbstractSpinBox*)self, bs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setCorrectionMode)
///
/// ``` QAbstractSpinBox* self, enum QAbstractSpinBox__CorrectionMode cm ```
void q_abstractspinbox_set_correction_mode(void* self, int64_t cm) {
    QAbstractSpinBox_SetCorrectionMode((QAbstractSpinBox*)self, cm);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#correctionMode)
///
/// ``` QAbstractSpinBox* self ```
int64_t q_abstractspinbox_correction_mode(void* self) {
    return QAbstractSpinBox_CorrectionMode((QAbstractSpinBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#hasAcceptableInput)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_has_acceptable_input(void* self) {
    return QAbstractSpinBox_HasAcceptableInput((QAbstractSpinBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#text)
///
/// ``` QAbstractSpinBox* self ```
const char* q_abstractspinbox_text(void* self) {
    libqt_string _str = QAbstractSpinBox_Text((QAbstractSpinBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#specialValueText)
///
/// ``` QAbstractSpinBox* self ```
const char* q_abstractspinbox_special_value_text(void* self) {
    libqt_string _str = QAbstractSpinBox_SpecialValueText((QAbstractSpinBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setSpecialValueText)
///
/// ``` QAbstractSpinBox* self, const char* txt ```
void q_abstractspinbox_set_special_value_text(void* self, const char* txt) {
    QAbstractSpinBox_SetSpecialValueText((QAbstractSpinBox*)self, qstring(txt));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#wrapping)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_wrapping(void* self) {
    return QAbstractSpinBox_Wrapping((QAbstractSpinBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setWrapping)
///
/// ``` QAbstractSpinBox* self, bool w ```
void q_abstractspinbox_set_wrapping(void* self, bool w) {
    QAbstractSpinBox_SetWrapping((QAbstractSpinBox*)self, w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setReadOnly)
///
/// ``` QAbstractSpinBox* self, bool r ```
void q_abstractspinbox_set_read_only(void* self, bool r) {
    QAbstractSpinBox_SetReadOnly((QAbstractSpinBox*)self, r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#isReadOnly)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_is_read_only(void* self) {
    return QAbstractSpinBox_IsReadOnly((QAbstractSpinBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setKeyboardTracking)
///
/// ``` QAbstractSpinBox* self, bool kt ```
void q_abstractspinbox_set_keyboard_tracking(void* self, bool kt) {
    QAbstractSpinBox_SetKeyboardTracking((QAbstractSpinBox*)self, kt);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#keyboardTracking)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_keyboard_tracking(void* self) {
    return QAbstractSpinBox_KeyboardTracking((QAbstractSpinBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setAlignment)
///
/// ``` QAbstractSpinBox* self, int flag ```
void q_abstractspinbox_set_alignment(void* self, int64_t flag) {
    QAbstractSpinBox_SetAlignment((QAbstractSpinBox*)self, flag);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#alignment)
///
/// ``` QAbstractSpinBox* self ```
int64_t q_abstractspinbox_alignment(void* self) {
    return QAbstractSpinBox_Alignment((QAbstractSpinBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setFrame)
///
/// ``` QAbstractSpinBox* self, bool frame ```
void q_abstractspinbox_set_frame(void* self, bool frame) {
    QAbstractSpinBox_SetFrame((QAbstractSpinBox*)self, frame);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#hasFrame)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_has_frame(void* self) {
    return QAbstractSpinBox_HasFrame((QAbstractSpinBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setAccelerated)
///
/// ``` QAbstractSpinBox* self, bool on ```
void q_abstractspinbox_set_accelerated(void* self, bool on) {
    QAbstractSpinBox_SetAccelerated((QAbstractSpinBox*)self, on);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#isAccelerated)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_is_accelerated(void* self) {
    return QAbstractSpinBox_IsAccelerated((QAbstractSpinBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setGroupSeparatorShown)
///
/// ``` QAbstractSpinBox* self, bool shown ```
void q_abstractspinbox_set_group_separator_shown(void* self, bool shown) {
    QAbstractSpinBox_SetGroupSeparatorShown((QAbstractSpinBox*)self, shown);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#isGroupSeparatorShown)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_is_group_separator_shown(void* self) {
    return QAbstractSpinBox_IsGroupSeparatorShown((QAbstractSpinBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
///
/// ``` QAbstractSpinBox* self ```
QSize* q_abstractspinbox_size_hint(void* self) {
    return QAbstractSpinBox_SizeHint((QAbstractSpinBox*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSpinBox* self, QSize* (*slot)() ```
void q_abstractspinbox_on_size_hint(void* self, QSize* (*slot)()) {
    QAbstractSpinBox_OnSizeHint((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSpinBox* self ```
QSize* q_abstractspinbox_qbase_size_hint(void* self) {
    return QAbstractSpinBox_QBaseSizeHint((QAbstractSpinBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// ``` QAbstractSpinBox* self ```
QSize* q_abstractspinbox_minimum_size_hint(void* self) {
    return QAbstractSpinBox_MinimumSizeHint((QAbstractSpinBox*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSpinBox* self, QSize* (*slot)() ```
void q_abstractspinbox_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QAbstractSpinBox_OnMinimumSizeHint((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSpinBox* self ```
QSize* q_abstractspinbox_qbase_minimum_size_hint(void* self) {
    return QAbstractSpinBox_QBaseMinimumSizeHint((QAbstractSpinBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#interpretText)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_interpret_text(void* self) {
    QAbstractSpinBox_InterpretText((QAbstractSpinBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#event)
///
/// ``` QAbstractSpinBox* self, QEvent* event ```
bool q_abstractspinbox_event(void* self, void* event) {
    return QAbstractSpinBox_Event((QAbstractSpinBox*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSpinBox* self, bool (*slot)(QAbstractSpinBox*, QEvent*) ```
void q_abstractspinbox_on_event(void* self, bool (*slot)(void*, void*)) {
    QAbstractSpinBox_OnEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSpinBox* self, QEvent* event ```
bool q_abstractspinbox_qbase_event(void* self, void* event) {
    return QAbstractSpinBox_QBaseEvent((QAbstractSpinBox*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// ``` QAbstractSpinBox* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_abstractspinbox_input_method_query(void* self, int64_t param1) {
    return QAbstractSpinBox_InputMethodQuery((QAbstractSpinBox*)self, param1);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSpinBox* self, QVariant* (*slot)(QAbstractSpinBox*, enum Qt__InputMethodQuery) ```
void q_abstractspinbox_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QAbstractSpinBox_OnInputMethodQuery((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSpinBox* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_abstractspinbox_qbase_input_method_query(void* self, int64_t param1) {
    return QAbstractSpinBox_QBaseInputMethodQuery((QAbstractSpinBox*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#validate)
///
/// ``` QAbstractSpinBox* self, const char* input, int* pos ```
int64_t q_abstractspinbox_validate(void* self, const char* input, int* pos) {
    return QAbstractSpinBox_Validate((QAbstractSpinBox*)self, qstring(input), pos);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSpinBox* self, int64_t (*slot)(QAbstractSpinBox*, const char*, int*) ```
void q_abstractspinbox_on_validate(void* self, int64_t (*slot)(void*, const char*, int*)) {
    QAbstractSpinBox_OnValidate((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSpinBox* self, const char* input, int* pos ```
int64_t q_abstractspinbox_qbase_validate(void* self, const char* input, int* pos) {
    return QAbstractSpinBox_QBaseValidate((QAbstractSpinBox*)self, qstring(input), pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#fixup)
///
/// ``` QAbstractSpinBox* self, const char* input ```
void q_abstractspinbox_fixup(void* self, const char* input) {
    QAbstractSpinBox_Fixup((QAbstractSpinBox*)self, qstring(input));
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, const char*) ```
void q_abstractspinbox_on_fixup(void* self, void (*slot)(void*, const char*)) {
    QAbstractSpinBox_OnFixup((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSpinBox* self, const char* input ```
void q_abstractspinbox_qbase_fixup(void* self, const char* input) {
    QAbstractSpinBox_QBaseFixup((QAbstractSpinBox*)self, qstring(input));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepBy)
///
/// ``` QAbstractSpinBox* self, int steps ```
void q_abstractspinbox_step_by(void* self, int steps) {
    QAbstractSpinBox_StepBy((QAbstractSpinBox*)self, steps);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, int) ```
void q_abstractspinbox_on_step_by(void* self, void (*slot)(void*, int)) {
    QAbstractSpinBox_OnStepBy((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSpinBox* self, int steps ```
void q_abstractspinbox_qbase_step_by(void* self, int steps) {
    QAbstractSpinBox_QBaseStepBy((QAbstractSpinBox*)self, steps);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepUp)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_step_up(void* self) {
    QAbstractSpinBox_StepUp((QAbstractSpinBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepDown)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_step_down(void* self) {
    QAbstractSpinBox_StepDown((QAbstractSpinBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#selectAll)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_select_all(void* self) {
    QAbstractSpinBox_SelectAll((QAbstractSpinBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#clear)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_clear(void* self) {
    QAbstractSpinBox_Clear((QAbstractSpinBox*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSpinBox* self, void (*slot)() ```
void q_abstractspinbox_on_clear(void* self, void (*slot)()) {
    QAbstractSpinBox_OnClear((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_qbase_clear(void* self) {
    QAbstractSpinBox_QBaseClear((QAbstractSpinBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// ``` QAbstractSpinBox* self, QResizeEvent* event ```
void q_abstractspinbox_resize_event(void* self, void* event) {
    QAbstractSpinBox_ResizeEvent((QAbstractSpinBox*)self, (QResizeEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QResizeEvent*) ```
void q_abstractspinbox_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnResizeEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSpinBox* self, QResizeEvent* event ```
void q_abstractspinbox_qbase_resize_event(void* self, void* event) {
    QAbstractSpinBox_QBaseResizeEvent((QAbstractSpinBox*)self, (QResizeEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#keyPressEvent)
///
/// ``` QAbstractSpinBox* self, QKeyEvent* event ```
void q_abstractspinbox_key_press_event(void* self, void* event) {
    QAbstractSpinBox_KeyPressEvent((QAbstractSpinBox*)self, (QKeyEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QKeyEvent*) ```
void q_abstractspinbox_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnKeyPressEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSpinBox* self, QKeyEvent* event ```
void q_abstractspinbox_qbase_key_press_event(void* self, void* event) {
    QAbstractSpinBox_QBaseKeyPressEvent((QAbstractSpinBox*)self, (QKeyEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// ``` QAbstractSpinBox* self, QKeyEvent* event ```
void q_abstractspinbox_key_release_event(void* self, void* event) {
    QAbstractSpinBox_KeyReleaseEvent((QAbstractSpinBox*)self, (QKeyEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QKeyEvent*) ```
void q_abstractspinbox_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnKeyReleaseEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSpinBox* self, QKeyEvent* event ```
void q_abstractspinbox_qbase_key_release_event(void* self, void* event) {
    QAbstractSpinBox_QBaseKeyReleaseEvent((QAbstractSpinBox*)self, (QKeyEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#wheelEvent)
///
/// ``` QAbstractSpinBox* self, QWheelEvent* event ```
void q_abstractspinbox_wheel_event(void* self, void* event) {
    QAbstractSpinBox_WheelEvent((QAbstractSpinBox*)self, (QWheelEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QWheelEvent*) ```
void q_abstractspinbox_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnWheelEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSpinBox* self, QWheelEvent* event ```
void q_abstractspinbox_qbase_wheel_event(void* self, void* event) {
    QAbstractSpinBox_QBaseWheelEvent((QAbstractSpinBox*)self, (QWheelEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#focusInEvent)
///
/// ``` QAbstractSpinBox* self, QFocusEvent* event ```
void q_abstractspinbox_focus_in_event(void* self, void* event) {
    QAbstractSpinBox_FocusInEvent((QAbstractSpinBox*)self, (QFocusEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QFocusEvent*) ```
void q_abstractspinbox_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnFocusInEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSpinBox* self, QFocusEvent* event ```
void q_abstractspinbox_qbase_focus_in_event(void* self, void* event) {
    QAbstractSpinBox_QBaseFocusInEvent((QAbstractSpinBox*)self, (QFocusEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// ``` QAbstractSpinBox* self, QFocusEvent* event ```
void q_abstractspinbox_focus_out_event(void* self, void* event) {
    QAbstractSpinBox_FocusOutEvent((QAbstractSpinBox*)self, (QFocusEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QFocusEvent*) ```
void q_abstractspinbox_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnFocusOutEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSpinBox* self, QFocusEvent* event ```
void q_abstractspinbox_qbase_focus_out_event(void* self, void* event) {
    QAbstractSpinBox_QBaseFocusOutEvent((QAbstractSpinBox*)self, (QFocusEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// ``` QAbstractSpinBox* self, QContextMenuEvent* event ```
void q_abstractspinbox_context_menu_event(void* self, void* event) {
    QAbstractSpinBox_ContextMenuEvent((QAbstractSpinBox*)self, (QContextMenuEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QContextMenuEvent*) ```
void q_abstractspinbox_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnContextMenuEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSpinBox* self, QContextMenuEvent* event ```
void q_abstractspinbox_qbase_context_menu_event(void* self, void* event) {
    QAbstractSpinBox_QBaseContextMenuEvent((QAbstractSpinBox*)self, (QContextMenuEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// ``` QAbstractSpinBox* self, QEvent* event ```
void q_abstractspinbox_change_event(void* self, void* event) {
    QAbstractSpinBox_ChangeEvent((QAbstractSpinBox*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QEvent*) ```
void q_abstractspinbox_on_change_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnChangeEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSpinBox* self, QEvent* event ```
void q_abstractspinbox_qbase_change_event(void* self, void* event) {
    QAbstractSpinBox_QBaseChangeEvent((QAbstractSpinBox*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// ``` QAbstractSpinBox* self, QCloseEvent* event ```
void q_abstractspinbox_close_event(void* self, void* event) {
    QAbstractSpinBox_CloseEvent((QAbstractSpinBox*)self, (QCloseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QCloseEvent*) ```
void q_abstractspinbox_on_close_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnCloseEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSpinBox* self, QCloseEvent* event ```
void q_abstractspinbox_qbase_close_event(void* self, void* event) {
    QAbstractSpinBox_QBaseCloseEvent((QAbstractSpinBox*)self, (QCloseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// ``` QAbstractSpinBox* self, QHideEvent* event ```
void q_abstractspinbox_hide_event(void* self, void* event) {
    QAbstractSpinBox_HideEvent((QAbstractSpinBox*)self, (QHideEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QHideEvent*) ```
void q_abstractspinbox_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnHideEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSpinBox* self, QHideEvent* event ```
void q_abstractspinbox_qbase_hide_event(void* self, void* event) {
    QAbstractSpinBox_QBaseHideEvent((QAbstractSpinBox*)self, (QHideEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mousePressEvent)
///
/// ``` QAbstractSpinBox* self, QMouseEvent* event ```
void q_abstractspinbox_mouse_press_event(void* self, void* event) {
    QAbstractSpinBox_MousePressEvent((QAbstractSpinBox*)self, (QMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QMouseEvent*) ```
void q_abstractspinbox_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnMousePressEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSpinBox* self, QMouseEvent* event ```
void q_abstractspinbox_qbase_mouse_press_event(void* self, void* event) {
    QAbstractSpinBox_QBaseMousePressEvent((QAbstractSpinBox*)self, (QMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// ``` QAbstractSpinBox* self, QMouseEvent* event ```
void q_abstractspinbox_mouse_release_event(void* self, void* event) {
    QAbstractSpinBox_MouseReleaseEvent((QAbstractSpinBox*)self, (QMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QMouseEvent*) ```
void q_abstractspinbox_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnMouseReleaseEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSpinBox* self, QMouseEvent* event ```
void q_abstractspinbox_qbase_mouse_release_event(void* self, void* event) {
    QAbstractSpinBox_QBaseMouseReleaseEvent((QAbstractSpinBox*)self, (QMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// ``` QAbstractSpinBox* self, QMouseEvent* event ```
void q_abstractspinbox_mouse_move_event(void* self, void* event) {
    QAbstractSpinBox_MouseMoveEvent((QAbstractSpinBox*)self, (QMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QMouseEvent*) ```
void q_abstractspinbox_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnMouseMoveEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSpinBox* self, QMouseEvent* event ```
void q_abstractspinbox_qbase_mouse_move_event(void* self, void* event) {
    QAbstractSpinBox_QBaseMouseMoveEvent((QAbstractSpinBox*)self, (QMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// ``` QAbstractSpinBox* self, QTimerEvent* event ```
void q_abstractspinbox_timer_event(void* self, void* event) {
    QAbstractSpinBox_TimerEvent((QAbstractSpinBox*)self, (QTimerEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QTimerEvent*) ```
void q_abstractspinbox_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnTimerEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSpinBox* self, QTimerEvent* event ```
void q_abstractspinbox_qbase_timer_event(void* self, void* event) {
    QAbstractSpinBox_QBaseTimerEvent((QAbstractSpinBox*)self, (QTimerEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#paintEvent)
///
/// ``` QAbstractSpinBox* self, QPaintEvent* event ```
void q_abstractspinbox_paint_event(void* self, void* event) {
    QAbstractSpinBox_PaintEvent((QAbstractSpinBox*)self, (QPaintEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QPaintEvent*) ```
void q_abstractspinbox_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnPaintEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSpinBox* self, QPaintEvent* event ```
void q_abstractspinbox_qbase_paint_event(void* self, void* event) {
    QAbstractSpinBox_QBasePaintEvent((QAbstractSpinBox*)self, (QPaintEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// ``` QAbstractSpinBox* self, QShowEvent* event ```
void q_abstractspinbox_show_event(void* self, void* event) {
    QAbstractSpinBox_ShowEvent((QAbstractSpinBox*)self, (QShowEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QShowEvent*) ```
void q_abstractspinbox_on_show_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnShowEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSpinBox* self, QShowEvent* event ```
void q_abstractspinbox_qbase_show_event(void* self, void* event) {
    QAbstractSpinBox_QBaseShowEvent((QAbstractSpinBox*)self, (QShowEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
///
/// ``` QAbstractSpinBox* self, QStyleOptionSpinBox* option ```
void q_abstractspinbox_init_style_option(void* self, void* option) {
    QAbstractSpinBox_InitStyleOption((QAbstractSpinBox*)self, (QStyleOptionSpinBox*)option);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QStyleOptionSpinBox*) ```
void q_abstractspinbox_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnInitStyleOption((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSpinBox* self, QStyleOptionSpinBox* option ```
void q_abstractspinbox_qbase_init_style_option(void* self, void* option) {
    QAbstractSpinBox_QBaseInitStyleOption((QAbstractSpinBox*)self, (QStyleOptionSpinBox*)option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// ``` QAbstractSpinBox* self ```
QLineEdit* q_abstractspinbox_line_edit(void* self) {
    return QAbstractSpinBox_LineEdit((QAbstractSpinBox*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSpinBox* self, QLineEdit* (*slot)() ```
void q_abstractspinbox_on_line_edit(void* self, QLineEdit* (*slot)()) {
    QAbstractSpinBox_OnLineEdit((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSpinBox* self ```
QLineEdit* q_abstractspinbox_qbase_line_edit(void* self) {
    return QAbstractSpinBox_QBaseLineEdit((QAbstractSpinBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// ``` QAbstractSpinBox* self, QLineEdit* edit ```
void q_abstractspinbox_set_line_edit(void* self, void* edit) {
    QAbstractSpinBox_SetLineEdit((QAbstractSpinBox*)self, (QLineEdit*)edit);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QLineEdit*) ```
void q_abstractspinbox_on_set_line_edit(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnSetLineEdit((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSpinBox* self, QLineEdit* edit ```
void q_abstractspinbox_qbase_set_line_edit(void* self, void* edit) {
    QAbstractSpinBox_QBaseSetLineEdit((QAbstractSpinBox*)self, (QLineEdit*)edit);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
///
/// ``` QAbstractSpinBox* self ```
int64_t q_abstractspinbox_step_enabled(void* self) {
    return QAbstractSpinBox_StepEnabled((QAbstractSpinBox*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSpinBox* self, int64_t (*slot)() ```
void q_abstractspinbox_on_step_enabled(void* self, int64_t (*slot)()) {
    QAbstractSpinBox_OnStepEnabled((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSpinBox* self ```
int64_t q_abstractspinbox_qbase_step_enabled(void* self) {
    return QAbstractSpinBox_QBaseStepEnabled((QAbstractSpinBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_editing_finished(void* self) {
    QAbstractSpinBox_EditingFinished((QAbstractSpinBox*)self);
}

/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*) ```
void q_abstractspinbox_on_editing_finished(void* self, void (*slot)(void*)) {
    QAbstractSpinBox_Connect_EditingFinished((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_abstractspinbox_tr2(const char* s, const char* c) {
    libqt_string _str = QAbstractSpinBox_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_abstractspinbox_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAbstractSpinBox_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QAbstractSpinBox* self ```
uintptr_t q_abstractspinbox_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QAbstractSpinBox* self ```
uintptr_t q_abstractspinbox_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QAbstractSpinBox* self ```
uintptr_t q_abstractspinbox_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QAbstractSpinBox* self ```
QStyle* q_abstractspinbox_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QAbstractSpinBox* self, QStyle* style ```
void q_abstractspinbox_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QAbstractSpinBox* self ```
int64_t q_abstractspinbox_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QAbstractSpinBox* self, enum Qt__WindowModality windowModality ```
void q_abstractspinbox_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QAbstractSpinBox* self, QWidget* param1 ```
bool q_abstractspinbox_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QAbstractSpinBox* self, bool enabled ```
void q_abstractspinbox_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QAbstractSpinBox* self, bool disabled ```
void q_abstractspinbox_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QAbstractSpinBox* self, bool windowModified ```
void q_abstractspinbox_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QAbstractSpinBox* self ```
QRect* q_abstractspinbox_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QAbstractSpinBox* self ```
QRect* q_abstractspinbox_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QAbstractSpinBox* self ```
QRect* q_abstractspinbox_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QAbstractSpinBox* self ```
int32_t q_abstractspinbox_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QAbstractSpinBox* self ```
int32_t q_abstractspinbox_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QAbstractSpinBox* self ```
QPoint* q_abstractspinbox_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QAbstractSpinBox* self ```
QSize* q_abstractspinbox_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QAbstractSpinBox* self ```
QSize* q_abstractspinbox_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QAbstractSpinBox* self ```
int32_t q_abstractspinbox_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QAbstractSpinBox* self ```
int32_t q_abstractspinbox_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QAbstractSpinBox* self ```
QRect* q_abstractspinbox_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QAbstractSpinBox* self ```
QRect* q_abstractspinbox_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QAbstractSpinBox* self ```
QRegion* q_abstractspinbox_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QAbstractSpinBox* self ```
QSize* q_abstractspinbox_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QAbstractSpinBox* self ```
QSize* q_abstractspinbox_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QAbstractSpinBox* self ```
int32_t q_abstractspinbox_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QAbstractSpinBox* self ```
int32_t q_abstractspinbox_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QAbstractSpinBox* self ```
int32_t q_abstractspinbox_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QAbstractSpinBox* self ```
int32_t q_abstractspinbox_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QAbstractSpinBox* self, QSize* minimumSize ```
void q_abstractspinbox_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QAbstractSpinBox* self, int minw, int minh ```
void q_abstractspinbox_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QAbstractSpinBox* self, QSize* maximumSize ```
void q_abstractspinbox_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QAbstractSpinBox* self, int maxw, int maxh ```
void q_abstractspinbox_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QAbstractSpinBox* self, int minw ```
void q_abstractspinbox_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QAbstractSpinBox* self, int minh ```
void q_abstractspinbox_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QAbstractSpinBox* self, int maxw ```
void q_abstractspinbox_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QAbstractSpinBox* self, int maxh ```
void q_abstractspinbox_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QAbstractSpinBox* self ```
QSize* q_abstractspinbox_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QAbstractSpinBox* self, QSize* sizeIncrement ```
void q_abstractspinbox_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QAbstractSpinBox* self, int w, int h ```
void q_abstractspinbox_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QAbstractSpinBox* self ```
QSize* q_abstractspinbox_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QAbstractSpinBox* self, QSize* baseSize ```
void q_abstractspinbox_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QAbstractSpinBox* self, int basew, int baseh ```
void q_abstractspinbox_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QAbstractSpinBox* self, QSize* fixedSize ```
void q_abstractspinbox_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QAbstractSpinBox* self, int w, int h ```
void q_abstractspinbox_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QAbstractSpinBox* self, int w ```
void q_abstractspinbox_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QAbstractSpinBox* self, int h ```
void q_abstractspinbox_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QAbstractSpinBox* self, QPointF* param1 ```
QPointF* q_abstractspinbox_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QAbstractSpinBox* self, QPoint* param1 ```
QPoint* q_abstractspinbox_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QAbstractSpinBox* self, QPointF* param1 ```
QPointF* q_abstractspinbox_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QAbstractSpinBox* self, QPoint* param1 ```
QPoint* q_abstractspinbox_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QAbstractSpinBox* self, QPointF* param1 ```
QPointF* q_abstractspinbox_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QAbstractSpinBox* self, QPoint* param1 ```
QPoint* q_abstractspinbox_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QAbstractSpinBox* self, QPointF* param1 ```
QPointF* q_abstractspinbox_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QAbstractSpinBox* self, QPoint* param1 ```
QPoint* q_abstractspinbox_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QAbstractSpinBox* self, QWidget* param1, QPointF* param2 ```
QPointF* q_abstractspinbox_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QAbstractSpinBox* self, QWidget* param1, QPoint* param2 ```
QPoint* q_abstractspinbox_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QAbstractSpinBox* self, QWidget* param1, QPointF* param2 ```
QPointF* q_abstractspinbox_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QAbstractSpinBox* self, QWidget* param1, QPoint* param2 ```
QPoint* q_abstractspinbox_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QAbstractSpinBox* self ```
QWidget* q_abstractspinbox_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QAbstractSpinBox* self ```
QWidget* q_abstractspinbox_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QAbstractSpinBox* self ```
QWidget* q_abstractspinbox_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QAbstractSpinBox* self ```
QPalette* q_abstractspinbox_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QAbstractSpinBox* self, QPalette* palette ```
void q_abstractspinbox_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QAbstractSpinBox* self, enum QPalette__ColorRole backgroundRole ```
void q_abstractspinbox_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QAbstractSpinBox* self ```
int64_t q_abstractspinbox_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QAbstractSpinBox* self, enum QPalette__ColorRole foregroundRole ```
void q_abstractspinbox_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QAbstractSpinBox* self ```
int64_t q_abstractspinbox_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QAbstractSpinBox* self ```
QFont* q_abstractspinbox_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QAbstractSpinBox* self, QFont* font ```
void q_abstractspinbox_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QAbstractSpinBox* self ```
QFontMetrics* q_abstractspinbox_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QAbstractSpinBox* self ```
QFontInfo* q_abstractspinbox_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QAbstractSpinBox* self ```
QCursor* q_abstractspinbox_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QAbstractSpinBox* self, QCursor* cursor ```
void q_abstractspinbox_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QAbstractSpinBox* self, bool enable ```
void q_abstractspinbox_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QAbstractSpinBox* self, bool enable ```
void q_abstractspinbox_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QAbstractSpinBox* self, QBitmap* mask ```
void q_abstractspinbox_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QAbstractSpinBox* self, QRegion* mask ```
void q_abstractspinbox_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QAbstractSpinBox* self ```
QRegion* q_abstractspinbox_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractSpinBox* self, QPaintDevice* target ```
void q_abstractspinbox_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractSpinBox* self, QPainter* painter ```
void q_abstractspinbox_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QAbstractSpinBox* self ```
QPixmap* q_abstractspinbox_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QAbstractSpinBox* self ```
QGraphicsEffect* q_abstractspinbox_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QAbstractSpinBox* self, QGraphicsEffect* effect ```
void q_abstractspinbox_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QAbstractSpinBox* self, enum Qt__GestureType typeVal ```
void q_abstractspinbox_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QAbstractSpinBox* self, enum Qt__GestureType typeVal ```
void q_abstractspinbox_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QAbstractSpinBox* self, const char* windowTitle ```
void q_abstractspinbox_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QAbstractSpinBox* self, const char* styleSheet ```
void q_abstractspinbox_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QAbstractSpinBox* self ```
const char* q_abstractspinbox_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QAbstractSpinBox* self ```
const char* q_abstractspinbox_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QAbstractSpinBox* self, QIcon* icon ```
void q_abstractspinbox_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QAbstractSpinBox* self ```
QIcon* q_abstractspinbox_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QAbstractSpinBox* self, const char* windowIconText ```
void q_abstractspinbox_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QAbstractSpinBox* self ```
const char* q_abstractspinbox_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QAbstractSpinBox* self, const char* windowRole ```
void q_abstractspinbox_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QAbstractSpinBox* self ```
const char* q_abstractspinbox_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QAbstractSpinBox* self, const char* filePath ```
void q_abstractspinbox_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QAbstractSpinBox* self ```
const char* q_abstractspinbox_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QAbstractSpinBox* self, double level ```
void q_abstractspinbox_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QAbstractSpinBox* self ```
double q_abstractspinbox_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QAbstractSpinBox* self, const char* toolTip ```
void q_abstractspinbox_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QAbstractSpinBox* self ```
const char* q_abstractspinbox_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QAbstractSpinBox* self, int msec ```
void q_abstractspinbox_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QAbstractSpinBox* self ```
int32_t q_abstractspinbox_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QAbstractSpinBox* self, const char* statusTip ```
void q_abstractspinbox_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QAbstractSpinBox* self ```
const char* q_abstractspinbox_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QAbstractSpinBox* self, const char* whatsThis ```
void q_abstractspinbox_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QAbstractSpinBox* self ```
const char* q_abstractspinbox_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QAbstractSpinBox* self ```
const char* q_abstractspinbox_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QAbstractSpinBox* self, const char* name ```
void q_abstractspinbox_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QAbstractSpinBox* self ```
const char* q_abstractspinbox_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QAbstractSpinBox* self, const char* description ```
void q_abstractspinbox_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QAbstractSpinBox* self, enum Qt__LayoutDirection direction ```
void q_abstractspinbox_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QAbstractSpinBox* self ```
int64_t q_abstractspinbox_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QAbstractSpinBox* self, QLocale* locale ```
void q_abstractspinbox_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QAbstractSpinBox* self ```
QLocale* q_abstractspinbox_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QAbstractSpinBox* self, enum Qt__FocusReason reason ```
void q_abstractspinbox_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QAbstractSpinBox* self ```
int64_t q_abstractspinbox_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QAbstractSpinBox* self, enum Qt__FocusPolicy policy ```
void q_abstractspinbox_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_abstractspinbox_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QAbstractSpinBox* self, QWidget* focusProxy ```
void q_abstractspinbox_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QAbstractSpinBox* self ```
QWidget* q_abstractspinbox_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QAbstractSpinBox* self ```
int64_t q_abstractspinbox_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QAbstractSpinBox* self, enum Qt__ContextMenuPolicy policy ```
void q_abstractspinbox_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QAbstractSpinBox* self, QCursor* param1 ```
void q_abstractspinbox_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QAbstractSpinBox* self, QKeySequence* key ```
int32_t q_abstractspinbox_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QAbstractSpinBox* self, int id ```
void q_abstractspinbox_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QAbstractSpinBox* self, int id ```
void q_abstractspinbox_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QAbstractSpinBox* self, int id ```
void q_abstractspinbox_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_abstractspinbox_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_abstractspinbox_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QAbstractSpinBox* self, bool enable ```
void q_abstractspinbox_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QAbstractSpinBox* self ```
QGraphicsProxyWidget* q_abstractspinbox_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QAbstractSpinBox* self, int x, int y, int w, int h ```
void q_abstractspinbox_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QAbstractSpinBox* self, QRect* param1 ```
void q_abstractspinbox_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QAbstractSpinBox* self, QRegion* param1 ```
void q_abstractspinbox_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QAbstractSpinBox* self, int x, int y, int w, int h ```
void q_abstractspinbox_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QAbstractSpinBox* self, QRect* param1 ```
void q_abstractspinbox_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QAbstractSpinBox* self, QRegion* param1 ```
void q_abstractspinbox_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QAbstractSpinBox* self, bool hidden ```
void q_abstractspinbox_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QAbstractSpinBox* self, QWidget* param1 ```
void q_abstractspinbox_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QAbstractSpinBox* self, int x, int y ```
void q_abstractspinbox_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QAbstractSpinBox* self, QPoint* param1 ```
void q_abstractspinbox_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QAbstractSpinBox* self, int w, int h ```
void q_abstractspinbox_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QAbstractSpinBox* self, QSize* param1 ```
void q_abstractspinbox_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QAbstractSpinBox* self, int x, int y, int w, int h ```
void q_abstractspinbox_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QAbstractSpinBox* self, QRect* geometry ```
void q_abstractspinbox_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QAbstractSpinBox* self ```
char* q_abstractspinbox_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QAbstractSpinBox* self, const char* geometry ```
bool q_abstractspinbox_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QAbstractSpinBox* self, QWidget* param1 ```
bool q_abstractspinbox_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QAbstractSpinBox* self ```
int64_t q_abstractspinbox_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QAbstractSpinBox* self, int state ```
void q_abstractspinbox_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QAbstractSpinBox* self, int state ```
void q_abstractspinbox_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QAbstractSpinBox* self ```
QSizePolicy* q_abstractspinbox_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QAbstractSpinBox* self, QSizePolicy* sizePolicy ```
void q_abstractspinbox_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QAbstractSpinBox* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_abstractspinbox_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QAbstractSpinBox* self ```
QRegion* q_abstractspinbox_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QAbstractSpinBox* self, int left, int top, int right, int bottom ```
void q_abstractspinbox_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QAbstractSpinBox* self, QMargins* margins ```
void q_abstractspinbox_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QAbstractSpinBox* self ```
QMargins* q_abstractspinbox_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QAbstractSpinBox* self ```
QRect* q_abstractspinbox_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QAbstractSpinBox* self ```
QLayout* q_abstractspinbox_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QAbstractSpinBox* self, QLayout* layout ```
void q_abstractspinbox_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QAbstractSpinBox* self, QWidget* parent ```
void q_abstractspinbox_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QAbstractSpinBox* self, QWidget* parent, int f ```
void q_abstractspinbox_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QAbstractSpinBox* self, int dx, int dy ```
void q_abstractspinbox_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QAbstractSpinBox* self, int dx, int dy, QRect* param3 ```
void q_abstractspinbox_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QAbstractSpinBox* self ```
QWidget* q_abstractspinbox_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QAbstractSpinBox* self ```
QWidget* q_abstractspinbox_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QAbstractSpinBox* self ```
QWidget* q_abstractspinbox_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QAbstractSpinBox* self, bool on ```
void q_abstractspinbox_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QAbstractSpinBox* self, QAction* action ```
void q_abstractspinbox_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QAbstractSpinBox* self, QAction* actions[] ```
void q_abstractspinbox_add_actions(void* self, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_AddActions((QWidget*)self, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QAbstractSpinBox* self, QAction* before, QAction* actions[] ```
void q_abstractspinbox_insert_actions(void* self, void* before, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QAbstractSpinBox* self, QAction* before, QAction* action ```
void q_abstractspinbox_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QAbstractSpinBox* self, QAction* action ```
void q_abstractspinbox_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QAbstractSpinBox* self ```
libqt_list /* of QAction* */ q_abstractspinbox_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QAbstractSpinBox* self, const char* text ```
QAction* q_abstractspinbox_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QAbstractSpinBox* self, QIcon* icon, const char* text ```
QAction* q_abstractspinbox_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QAbstractSpinBox* self, const char* text, QKeySequence* shortcut ```
QAction* q_abstractspinbox_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QAbstractSpinBox* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_abstractspinbox_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QAbstractSpinBox* self ```
QWidget* q_abstractspinbox_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QAbstractSpinBox* self, int typeVal ```
void q_abstractspinbox_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QAbstractSpinBox* self ```
int64_t q_abstractspinbox_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QAbstractSpinBox* self, enum Qt__WindowType param1 ```
void q_abstractspinbox_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QAbstractSpinBox* self, int typeVal ```
void q_abstractspinbox_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QAbstractSpinBox* self ```
int64_t q_abstractspinbox_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_abstractspinbox_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QAbstractSpinBox* self, int x, int y ```
QWidget* q_abstractspinbox_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QAbstractSpinBox* self, QPoint* p ```
QWidget* q_abstractspinbox_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QAbstractSpinBox* self, enum Qt__WidgetAttribute param1 ```
void q_abstractspinbox_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QAbstractSpinBox* self, enum Qt__WidgetAttribute param1 ```
bool q_abstractspinbox_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QAbstractSpinBox* self, QWidget* child ```
bool q_abstractspinbox_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QAbstractSpinBox* self, bool enabled ```
void q_abstractspinbox_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QAbstractSpinBox* self ```
QBackingStore* q_abstractspinbox_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QAbstractSpinBox* self ```
QWindow* q_abstractspinbox_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QAbstractSpinBox* self ```
QScreen* q_abstractspinbox_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QAbstractSpinBox* self, QScreen* screen ```
void q_abstractspinbox_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_abstractspinbox_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QAbstractSpinBox* self, const char* title ```
void q_abstractspinbox_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QAbstractSpinBox* self, void (*slot)(QWidget*, const char*) ```
void q_abstractspinbox_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QAbstractSpinBox* self, QIcon* icon ```
void q_abstractspinbox_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QAbstractSpinBox* self, void (*slot)(QWidget*, QIcon*) ```
void q_abstractspinbox_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QAbstractSpinBox* self, const char* iconText ```
void q_abstractspinbox_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QAbstractSpinBox* self, void (*slot)(QWidget*, const char*) ```
void q_abstractspinbox_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QAbstractSpinBox* self, QPoint* pos ```
void q_abstractspinbox_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QAbstractSpinBox* self, void (*slot)(QWidget*, QPoint*) ```
void q_abstractspinbox_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QAbstractSpinBox* self ```
int64_t q_abstractspinbox_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QAbstractSpinBox* self, int hints ```
void q_abstractspinbox_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractSpinBox* self, QPaintDevice* target, QPoint* targetOffset ```
void q_abstractspinbox_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractSpinBox* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_abstractspinbox_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractSpinBox* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_abstractspinbox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractSpinBox* self, QPainter* painter, QPoint* targetOffset ```
void q_abstractspinbox_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractSpinBox* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_abstractspinbox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractSpinBox* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_abstractspinbox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QAbstractSpinBox* self, QRect* rectangle ```
QPixmap* q_abstractspinbox_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QAbstractSpinBox* self, enum Qt__GestureType typeVal, int flags ```
void q_abstractspinbox_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QAbstractSpinBox* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_abstractspinbox_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QAbstractSpinBox* self, int id, bool enable ```
void q_abstractspinbox_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QAbstractSpinBox* self, int id, bool enable ```
void q_abstractspinbox_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QAbstractSpinBox* self, enum Qt__WindowType param1, bool on ```
void q_abstractspinbox_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QAbstractSpinBox* self, enum Qt__WidgetAttribute param1, bool on ```
void q_abstractspinbox_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_abstractspinbox_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_abstractspinbox_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAbstractSpinBox* self ```
const char* q_abstractspinbox_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAbstractSpinBox* self, const char* name ```
void q_abstractspinbox_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAbstractSpinBox* self, bool b ```
bool q_abstractspinbox_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAbstractSpinBox* self ```
QThread* q_abstractspinbox_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractSpinBox* self, QThread* thread ```
void q_abstractspinbox_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractSpinBox* self, int interval ```
int32_t q_abstractspinbox_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractSpinBox* self, int id ```
void q_abstractspinbox_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAbstractSpinBox* self ```
libqt_list /* of QObject* */ q_abstractspinbox_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAbstractSpinBox* self, QObject* filterObj ```
void q_abstractspinbox_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAbstractSpinBox* self, QObject* obj ```
void q_abstractspinbox_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_abstractspinbox_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractSpinBox* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_abstractspinbox_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_abstractspinbox_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_abstractspinbox_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAbstractSpinBox* self, const char* name, QVariant* value ```
bool q_abstractspinbox_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAbstractSpinBox* self, const char* name ```
QVariant* q_abstractspinbox_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAbstractSpinBox* self ```
const char** q_abstractspinbox_dynamic_property_names(void* self) {
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
/// ``` QAbstractSpinBox* self ```
QBindingStorage* q_abstractspinbox_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractSpinBox* self ```
QBindingStorage* q_abstractspinbox_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QAbstractSpinBox* self, void (*slot)(QObject*) ```
void q_abstractspinbox_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAbstractSpinBox* self ```
QObject* q_abstractspinbox_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAbstractSpinBox* self, const char* classname ```
bool q_abstractspinbox_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractSpinBox* self, int interval, enum Qt__TimerType timerType ```
int32_t q_abstractspinbox_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractspinbox_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractSpinBox* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractspinbox_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractSpinBox* self, QObject* param1 ```
void q_abstractspinbox_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QAbstractSpinBox* self, void (*slot)(QObject*, QObject*) ```
void q_abstractspinbox_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QAbstractSpinBox* self ```
int32_t q_abstractspinbox_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QAbstractSpinBox* self ```
int32_t q_abstractspinbox_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QAbstractSpinBox* self ```
int32_t q_abstractspinbox_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QAbstractSpinBox* self ```
int32_t q_abstractspinbox_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QAbstractSpinBox* self ```
int32_t q_abstractspinbox_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QAbstractSpinBox* self ```
int32_t q_abstractspinbox_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QAbstractSpinBox* self ```
double q_abstractspinbox_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QAbstractSpinBox* self ```
double q_abstractspinbox_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QAbstractSpinBox* self ```
int32_t q_abstractspinbox_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QAbstractSpinBox* self ```
int32_t q_abstractspinbox_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_abstractspinbox_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self ```
int32_t q_abstractspinbox_dev_type(void* self) {
    return QAbstractSpinBox_DevType((QAbstractSpinBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self ```
int32_t q_abstractspinbox_qbase_dev_type(void* self) {
    return QAbstractSpinBox_QBaseDevType((QAbstractSpinBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, int32_t (*slot)() ```
void q_abstractspinbox_on_dev_type(void* self, int32_t (*slot)()) {
    QAbstractSpinBox_OnDevType((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self, bool visible ```
void q_abstractspinbox_set_visible(void* self, bool visible) {
    QAbstractSpinBox_SetVisible((QAbstractSpinBox*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, bool visible ```
void q_abstractspinbox_qbase_set_visible(void* self, bool visible) {
    QAbstractSpinBox_QBaseSetVisible((QAbstractSpinBox*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, bool) ```
void q_abstractspinbox_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QAbstractSpinBox_OnSetVisible((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self, int param1 ```
int32_t q_abstractspinbox_height_for_width(void* self, int param1) {
    return QAbstractSpinBox_HeightForWidth((QAbstractSpinBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, int param1 ```
int32_t q_abstractspinbox_qbase_height_for_width(void* self, int param1) {
    return QAbstractSpinBox_QBaseHeightForWidth((QAbstractSpinBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, int32_t (*slot)(QAbstractSpinBox*, int) ```
void q_abstractspinbox_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QAbstractSpinBox_OnHeightForWidth((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_has_height_for_width(void* self) {
    return QAbstractSpinBox_HasHeightForWidth((QAbstractSpinBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_qbase_has_height_for_width(void* self) {
    return QAbstractSpinBox_QBaseHasHeightForWidth((QAbstractSpinBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, bool (*slot)() ```
void q_abstractspinbox_on_has_height_for_width(void* self, bool (*slot)()) {
    QAbstractSpinBox_OnHasHeightForWidth((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self ```
QPaintEngine* q_abstractspinbox_paint_engine(void* self) {
    return QAbstractSpinBox_PaintEngine((QAbstractSpinBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self ```
QPaintEngine* q_abstractspinbox_qbase_paint_engine(void* self) {
    return QAbstractSpinBox_QBasePaintEngine((QAbstractSpinBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, QPaintEngine* (*slot)() ```
void q_abstractspinbox_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QAbstractSpinBox_OnPaintEngine((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self, QMouseEvent* event ```
void q_abstractspinbox_mouse_double_click_event(void* self, void* event) {
    QAbstractSpinBox_MouseDoubleClickEvent((QAbstractSpinBox*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, QMouseEvent* event ```
void q_abstractspinbox_qbase_mouse_double_click_event(void* self, void* event) {
    QAbstractSpinBox_QBaseMouseDoubleClickEvent((QAbstractSpinBox*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QMouseEvent*) ```
void q_abstractspinbox_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnMouseDoubleClickEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self, QEnterEvent* event ```
void q_abstractspinbox_enter_event(void* self, void* event) {
    QAbstractSpinBox_EnterEvent((QAbstractSpinBox*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, QEnterEvent* event ```
void q_abstractspinbox_qbase_enter_event(void* self, void* event) {
    QAbstractSpinBox_QBaseEnterEvent((QAbstractSpinBox*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QEnterEvent*) ```
void q_abstractspinbox_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnEnterEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self, QEvent* event ```
void q_abstractspinbox_leave_event(void* self, void* event) {
    QAbstractSpinBox_LeaveEvent((QAbstractSpinBox*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, QEvent* event ```
void q_abstractspinbox_qbase_leave_event(void* self, void* event) {
    QAbstractSpinBox_QBaseLeaveEvent((QAbstractSpinBox*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QEvent*) ```
void q_abstractspinbox_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnLeaveEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self, QMoveEvent* event ```
void q_abstractspinbox_move_event(void* self, void* event) {
    QAbstractSpinBox_MoveEvent((QAbstractSpinBox*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, QMoveEvent* event ```
void q_abstractspinbox_qbase_move_event(void* self, void* event) {
    QAbstractSpinBox_QBaseMoveEvent((QAbstractSpinBox*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QMoveEvent*) ```
void q_abstractspinbox_on_move_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnMoveEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self, QTabletEvent* event ```
void q_abstractspinbox_tablet_event(void* self, void* event) {
    QAbstractSpinBox_TabletEvent((QAbstractSpinBox*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, QTabletEvent* event ```
void q_abstractspinbox_qbase_tablet_event(void* self, void* event) {
    QAbstractSpinBox_QBaseTabletEvent((QAbstractSpinBox*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QTabletEvent*) ```
void q_abstractspinbox_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnTabletEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self, QActionEvent* event ```
void q_abstractspinbox_action_event(void* self, void* event) {
    QAbstractSpinBox_ActionEvent((QAbstractSpinBox*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, QActionEvent* event ```
void q_abstractspinbox_qbase_action_event(void* self, void* event) {
    QAbstractSpinBox_QBaseActionEvent((QAbstractSpinBox*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QActionEvent*) ```
void q_abstractspinbox_on_action_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnActionEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self, QDragEnterEvent* event ```
void q_abstractspinbox_drag_enter_event(void* self, void* event) {
    QAbstractSpinBox_DragEnterEvent((QAbstractSpinBox*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, QDragEnterEvent* event ```
void q_abstractspinbox_qbase_drag_enter_event(void* self, void* event) {
    QAbstractSpinBox_QBaseDragEnterEvent((QAbstractSpinBox*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QDragEnterEvent*) ```
void q_abstractspinbox_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnDragEnterEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self, QDragMoveEvent* event ```
void q_abstractspinbox_drag_move_event(void* self, void* event) {
    QAbstractSpinBox_DragMoveEvent((QAbstractSpinBox*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, QDragMoveEvent* event ```
void q_abstractspinbox_qbase_drag_move_event(void* self, void* event) {
    QAbstractSpinBox_QBaseDragMoveEvent((QAbstractSpinBox*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QDragMoveEvent*) ```
void q_abstractspinbox_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnDragMoveEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self, QDragLeaveEvent* event ```
void q_abstractspinbox_drag_leave_event(void* self, void* event) {
    QAbstractSpinBox_DragLeaveEvent((QAbstractSpinBox*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, QDragLeaveEvent* event ```
void q_abstractspinbox_qbase_drag_leave_event(void* self, void* event) {
    QAbstractSpinBox_QBaseDragLeaveEvent((QAbstractSpinBox*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QDragLeaveEvent*) ```
void q_abstractspinbox_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnDragLeaveEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self, QDropEvent* event ```
void q_abstractspinbox_drop_event(void* self, void* event) {
    QAbstractSpinBox_DropEvent((QAbstractSpinBox*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, QDropEvent* event ```
void q_abstractspinbox_qbase_drop_event(void* self, void* event) {
    QAbstractSpinBox_QBaseDropEvent((QAbstractSpinBox*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QDropEvent*) ```
void q_abstractspinbox_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnDropEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self, const char* eventType, void* message, intptr_t* result ```
bool q_abstractspinbox_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QAbstractSpinBox_NativeEvent((QAbstractSpinBox*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, const char* eventType, void* message, intptr_t* result ```
bool q_abstractspinbox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QAbstractSpinBox_QBaseNativeEvent((QAbstractSpinBox*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, bool (*slot)(QAbstractSpinBox*, const char*, void*, intptr_t*) ```
void q_abstractspinbox_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QAbstractSpinBox_OnNativeEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_abstractspinbox_metric(void* self, int64_t param1) {
    return QAbstractSpinBox_Metric((QAbstractSpinBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_abstractspinbox_qbase_metric(void* self, int64_t param1) {
    return QAbstractSpinBox_QBaseMetric((QAbstractSpinBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, int32_t (*slot)(QAbstractSpinBox*, enum QPaintDevice__PaintDeviceMetric) ```
void q_abstractspinbox_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QAbstractSpinBox_OnMetric((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self, QPainter* painter ```
void q_abstractspinbox_init_painter(void* self, void* painter) {
    QAbstractSpinBox_InitPainter((QAbstractSpinBox*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, QPainter* painter ```
void q_abstractspinbox_qbase_init_painter(void* self, void* painter) {
    QAbstractSpinBox_QBaseInitPainter((QAbstractSpinBox*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QPainter*) ```
void q_abstractspinbox_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnInitPainter((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self, QPoint* offset ```
QPaintDevice* q_abstractspinbox_redirected(void* self, void* offset) {
    return QAbstractSpinBox_Redirected((QAbstractSpinBox*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, QPoint* offset ```
QPaintDevice* q_abstractspinbox_qbase_redirected(void* self, void* offset) {
    return QAbstractSpinBox_QBaseRedirected((QAbstractSpinBox*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, QPaintDevice* (*slot)(QAbstractSpinBox*, QPoint*) ```
void q_abstractspinbox_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QAbstractSpinBox_OnRedirected((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self ```
QPainter* q_abstractspinbox_shared_painter(void* self) {
    return QAbstractSpinBox_SharedPainter((QAbstractSpinBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self ```
QPainter* q_abstractspinbox_qbase_shared_painter(void* self) {
    return QAbstractSpinBox_QBaseSharedPainter((QAbstractSpinBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, QPainter* (*slot)() ```
void q_abstractspinbox_on_shared_painter(void* self, QPainter* (*slot)()) {
    QAbstractSpinBox_OnSharedPainter((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self, QInputMethodEvent* param1 ```
void q_abstractspinbox_input_method_event(void* self, void* param1) {
    QAbstractSpinBox_InputMethodEvent((QAbstractSpinBox*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, QInputMethodEvent* param1 ```
void q_abstractspinbox_qbase_input_method_event(void* self, void* param1) {
    QAbstractSpinBox_QBaseInputMethodEvent((QAbstractSpinBox*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QInputMethodEvent*) ```
void q_abstractspinbox_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnInputMethodEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self, bool next ```
bool q_abstractspinbox_focus_next_prev_child(void* self, bool next) {
    return QAbstractSpinBox_FocusNextPrevChild((QAbstractSpinBox*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, bool next ```
bool q_abstractspinbox_qbase_focus_next_prev_child(void* self, bool next) {
    return QAbstractSpinBox_QBaseFocusNextPrevChild((QAbstractSpinBox*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, bool (*slot)(QAbstractSpinBox*, bool) ```
void q_abstractspinbox_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QAbstractSpinBox_OnFocusNextPrevChild((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self, QObject* watched, QEvent* event ```
bool q_abstractspinbox_event_filter(void* self, void* watched, void* event) {
    return QAbstractSpinBox_EventFilter((QAbstractSpinBox*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, QObject* watched, QEvent* event ```
bool q_abstractspinbox_qbase_event_filter(void* self, void* watched, void* event) {
    return QAbstractSpinBox_QBaseEventFilter((QAbstractSpinBox*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, bool (*slot)(QAbstractSpinBox*, QObject*, QEvent*) ```
void q_abstractspinbox_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAbstractSpinBox_OnEventFilter((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self, QChildEvent* event ```
void q_abstractspinbox_child_event(void* self, void* event) {
    QAbstractSpinBox_ChildEvent((QAbstractSpinBox*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, QChildEvent* event ```
void q_abstractspinbox_qbase_child_event(void* self, void* event) {
    QAbstractSpinBox_QBaseChildEvent((QAbstractSpinBox*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QChildEvent*) ```
void q_abstractspinbox_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnChildEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self, QEvent* event ```
void q_abstractspinbox_custom_event(void* self, void* event) {
    QAbstractSpinBox_CustomEvent((QAbstractSpinBox*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, QEvent* event ```
void q_abstractspinbox_qbase_custom_event(void* self, void* event) {
    QAbstractSpinBox_QBaseCustomEvent((QAbstractSpinBox*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QEvent*) ```
void q_abstractspinbox_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnCustomEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self, QMetaMethod* signal ```
void q_abstractspinbox_connect_notify(void* self, void* signal) {
    QAbstractSpinBox_ConnectNotify((QAbstractSpinBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, QMetaMethod* signal ```
void q_abstractspinbox_qbase_connect_notify(void* self, void* signal) {
    QAbstractSpinBox_QBaseConnectNotify((QAbstractSpinBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QMetaMethod*) ```
void q_abstractspinbox_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnConnectNotify((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self, QMetaMethod* signal ```
void q_abstractspinbox_disconnect_notify(void* self, void* signal) {
    QAbstractSpinBox_DisconnectNotify((QAbstractSpinBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, QMetaMethod* signal ```
void q_abstractspinbox_qbase_disconnect_notify(void* self, void* signal) {
    QAbstractSpinBox_QBaseDisconnectNotify((QAbstractSpinBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, void (*slot)(QAbstractSpinBox*, QMetaMethod*) ```
void q_abstractspinbox_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnDisconnectNotify((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_update_micro_focus(void* self) {
    QAbstractSpinBox_UpdateMicroFocus((QAbstractSpinBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_qbase_update_micro_focus(void* self) {
    QAbstractSpinBox_QBaseUpdateMicroFocus((QAbstractSpinBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, void (*slot)() ```
void q_abstractspinbox_on_update_micro_focus(void* self, void (*slot)()) {
    QAbstractSpinBox_OnUpdateMicroFocus((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_create(void* self) {
    QAbstractSpinBox_Create((QAbstractSpinBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_qbase_create(void* self) {
    QAbstractSpinBox_QBaseCreate((QAbstractSpinBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, void (*slot)() ```
void q_abstractspinbox_on_create(void* self, void (*slot)()) {
    QAbstractSpinBox_OnCreate((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_destroy(void* self) {
    QAbstractSpinBox_Destroy((QAbstractSpinBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_qbase_destroy(void* self) {
    QAbstractSpinBox_QBaseDestroy((QAbstractSpinBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, void (*slot)() ```
void q_abstractspinbox_on_destroy(void* self, void (*slot)()) {
    QAbstractSpinBox_OnDestroy((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_focus_next_child(void* self) {
    return QAbstractSpinBox_FocusNextChild((QAbstractSpinBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_qbase_focus_next_child(void* self) {
    return QAbstractSpinBox_QBaseFocusNextChild((QAbstractSpinBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, bool (*slot)() ```
void q_abstractspinbox_on_focus_next_child(void* self, bool (*slot)()) {
    QAbstractSpinBox_OnFocusNextChild((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_focus_previous_child(void* self) {
    return QAbstractSpinBox_FocusPreviousChild((QAbstractSpinBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self ```
bool q_abstractspinbox_qbase_focus_previous_child(void* self) {
    return QAbstractSpinBox_QBaseFocusPreviousChild((QAbstractSpinBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, bool (*slot)() ```
void q_abstractspinbox_on_focus_previous_child(void* self, bool (*slot)()) {
    QAbstractSpinBox_OnFocusPreviousChild((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self ```
QObject* q_abstractspinbox_sender(void* self) {
    return QAbstractSpinBox_Sender((QAbstractSpinBox*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self ```
QObject* q_abstractspinbox_qbase_sender(void* self) {
    return QAbstractSpinBox_QBaseSender((QAbstractSpinBox*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, QObject* (*slot)() ```
void q_abstractspinbox_on_sender(void* self, QObject* (*slot)()) {
    QAbstractSpinBox_OnSender((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self ```
int32_t q_abstractspinbox_sender_signal_index(void* self) {
    return QAbstractSpinBox_SenderSignalIndex((QAbstractSpinBox*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self ```
int32_t q_abstractspinbox_qbase_sender_signal_index(void* self) {
    return QAbstractSpinBox_QBaseSenderSignalIndex((QAbstractSpinBox*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, int32_t (*slot)() ```
void q_abstractspinbox_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAbstractSpinBox_OnSenderSignalIndex((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self, const char* signal ```
int32_t q_abstractspinbox_receivers(void* self, const char* signal) {
    return QAbstractSpinBox_Receivers((QAbstractSpinBox*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, const char* signal ```
int32_t q_abstractspinbox_qbase_receivers(void* self, const char* signal) {
    return QAbstractSpinBox_QBaseReceivers((QAbstractSpinBox*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, int32_t (*slot)(QAbstractSpinBox*, const char*) ```
void q_abstractspinbox_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAbstractSpinBox_OnReceivers((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSpinBox* self, QMetaMethod* signal ```
bool q_abstractspinbox_is_signal_connected(void* self, void* signal) {
    return QAbstractSpinBox_IsSignalConnected((QAbstractSpinBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, QMetaMethod* signal ```
bool q_abstractspinbox_qbase_is_signal_connected(void* self, void* signal) {
    return QAbstractSpinBox_QBaseIsSignalConnected((QAbstractSpinBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSpinBox* self, bool (*slot)(QAbstractSpinBox*, QMetaMethod*) ```
void q_abstractspinbox_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAbstractSpinBox_OnIsSignalConnected((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAbstractSpinBox* self ```
void q_abstractspinbox_delete(void* self) {
    QAbstractSpinBox_Delete((QAbstractSpinBox*)(self));
}