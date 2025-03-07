#include "libqabstractbutton.hpp"
#include "libqaction.hpp"
#include "libqevent.hpp"
#include "libqanystringview.hpp"
#include "libqbackingstore.hpp"
#include "libqbindingstorage.hpp"
#include "libqbitmap.hpp"
#include "libqbuttongroup.hpp"
#include "libqcursor.hpp"
#include "libqfont.hpp"
#include "libqfontinfo.hpp"
#include "libqfontmetrics.hpp"
#include "libqgraphicseffect.hpp"
#include "libqgraphicsproxywidget.hpp"
#include "libqicon.hpp"
#include "libqkeysequence.hpp"
#include "libqlayout.hpp"
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
#include "libqcheckbox.hpp"
#include "libqcheckbox.h"

/// https://doc.qt.io/qt-6/qcheckbox.html

/// q_checkbox_new constructs a new QCheckBox object.
///
/// ``` QWidget* parent ```
QCheckBox* q_checkbox_new(void* parent) {
    return QCheckBox_new((QWidget*)parent);
}

/// q_checkbox_new2 constructs a new QCheckBox object.
///
///
QCheckBox* q_checkbox_new2() {
    return QCheckBox_new2();
}

/// q_checkbox_new3 constructs a new QCheckBox object.
///
/// ``` const char* text ```
QCheckBox* q_checkbox_new3(const char* text) {
    return QCheckBox_new3(qstring(text));
}

/// q_checkbox_new4 constructs a new QCheckBox object.
///
/// ``` const char* text, QWidget* parent ```
QCheckBox* q_checkbox_new4(const char* text, void* parent) {
    return QCheckBox_new4(qstring(text), (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QCheckBox* self ```
QMetaObject* q_checkbox_meta_object(void* self) {
    return QCheckBox_MetaObject((QCheckBox*)self);
}

/// ``` QCheckBox* self, const char* param1 ```
void* q_checkbox_metacast(void* self, const char* param1) {
    return QCheckBox_Metacast((QCheckBox*)self, param1);
}

/// ``` QCheckBox* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_checkbox_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCheckBox_Metacall((QCheckBox*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QCheckBox* self, int32_t (*slot)(QCheckBox*, enum QMetaObject__Call, int, void*) ```
void q_checkbox_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QCheckBox_OnMetacall((QCheckBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCheckBox* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_checkbox_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCheckBox_QBaseMetacall((QCheckBox*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_checkbox_tr(const char* s) {
    libqt_string _str = QCheckBox_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcheckbox.html#sizeHint)
///
/// ``` QCheckBox* self ```
QSize* q_checkbox_size_hint(void* self) {
    return QCheckBox_SizeHint((QCheckBox*)self);
}

/// Allows for overriding the related default method
///
/// ``` QCheckBox* self, QSize* (*slot)() ```
void q_checkbox_on_size_hint(void* self, QSize* (*slot)()) {
    QCheckBox_OnSizeHint((QCheckBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCheckBox* self ```
QSize* q_checkbox_qbase_size_hint(void* self) {
    return QCheckBox_QBaseSizeHint((QCheckBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcheckbox.html#minimumSizeHint)
///
/// ``` QCheckBox* self ```
QSize* q_checkbox_minimum_size_hint(void* self) {
    return QCheckBox_MinimumSizeHint((QCheckBox*)self);
}

/// Allows for overriding the related default method
///
/// ``` QCheckBox* self, QSize* (*slot)() ```
void q_checkbox_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QCheckBox_OnMinimumSizeHint((QCheckBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCheckBox* self ```
QSize* q_checkbox_qbase_minimum_size_hint(void* self) {
    return QCheckBox_QBaseMinimumSizeHint((QCheckBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcheckbox.html#setTristate)
///
/// ``` QCheckBox* self ```
void q_checkbox_set_tristate(void* self) {
    QCheckBox_SetTristate((QCheckBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcheckbox.html#isTristate)
///
/// ``` QCheckBox* self ```
bool q_checkbox_is_tristate(void* self) {
    return QCheckBox_IsTristate((QCheckBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcheckbox.html#checkState)
///
/// ``` QCheckBox* self ```
int64_t q_checkbox_check_state(void* self) {
    return QCheckBox_CheckState((QCheckBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcheckbox.html#setCheckState)
///
/// ``` QCheckBox* self, enum Qt__CheckState state ```
void q_checkbox_set_check_state(void* self, int64_t state) {
    QCheckBox_SetCheckState((QCheckBox*)self, state);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcheckbox.html#stateChanged)
///
/// ``` QCheckBox* self, int param1 ```
void q_checkbox_state_changed(void* self, int param1) {
    QCheckBox_StateChanged((QCheckBox*)self, param1);
}

/// ``` QCheckBox* self, void (*slot)(QCheckBox*, int) ```
void q_checkbox_on_state_changed(void* self, void (*slot)(void*, int)) {
    QCheckBox_Connect_StateChanged((QCheckBox*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcheckbox.html#event)
///
/// ``` QCheckBox* self, QEvent* e ```
bool q_checkbox_event(void* self, void* e) {
    return QCheckBox_Event((QCheckBox*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QCheckBox* self, bool (*slot)(QCheckBox*, QEvent*) ```
void q_checkbox_on_event(void* self, bool (*slot)(void*, void*)) {
    QCheckBox_OnEvent((QCheckBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCheckBox* self, QEvent* e ```
bool q_checkbox_qbase_event(void* self, void* e) {
    return QCheckBox_QBaseEvent((QCheckBox*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcheckbox.html#hitButton)
///
/// ``` QCheckBox* self, QPoint* pos ```
bool q_checkbox_hit_button(void* self, void* pos) {
    return QCheckBox_HitButton((QCheckBox*)self, (QPoint*)pos);
}

/// Allows for overriding the related default method
///
/// ``` QCheckBox* self, bool (*slot)(QCheckBox*, QPoint*) ```
void q_checkbox_on_hit_button(void* self, bool (*slot)(void*, void*)) {
    QCheckBox_OnHitButton((QCheckBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCheckBox* self, QPoint* pos ```
bool q_checkbox_qbase_hit_button(void* self, void* pos) {
    return QCheckBox_QBaseHitButton((QCheckBox*)self, (QPoint*)pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcheckbox.html#checkStateSet)
///
/// ``` QCheckBox* self ```
void q_checkbox_check_state_set(void* self) {
    QCheckBox_CheckStateSet((QCheckBox*)self);
}

/// Allows for overriding the related default method
///
/// ``` QCheckBox* self, void (*slot)() ```
void q_checkbox_on_check_state_set(void* self, void (*slot)()) {
    QCheckBox_OnCheckStateSet((QCheckBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCheckBox* self ```
void q_checkbox_qbase_check_state_set(void* self) {
    QCheckBox_QBaseCheckStateSet((QCheckBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcheckbox.html#nextCheckState)
///
/// ``` QCheckBox* self ```
void q_checkbox_next_check_state(void* self) {
    QCheckBox_NextCheckState((QCheckBox*)self);
}

/// Allows for overriding the related default method
///
/// ``` QCheckBox* self, void (*slot)() ```
void q_checkbox_on_next_check_state(void* self, void (*slot)()) {
    QCheckBox_OnNextCheckState((QCheckBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCheckBox* self ```
void q_checkbox_qbase_next_check_state(void* self) {
    QCheckBox_QBaseNextCheckState((QCheckBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcheckbox.html#paintEvent)
///
/// ``` QCheckBox* self, QPaintEvent* param1 ```
void q_checkbox_paint_event(void* self, void* param1) {
    QCheckBox_PaintEvent((QCheckBox*)self, (QPaintEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QPaintEvent*) ```
void q_checkbox_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnPaintEvent((QCheckBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCheckBox* self, QPaintEvent* param1 ```
void q_checkbox_qbase_paint_event(void* self, void* param1) {
    QCheckBox_QBasePaintEvent((QCheckBox*)self, (QPaintEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcheckbox.html#mouseMoveEvent)
///
/// ``` QCheckBox* self, QMouseEvent* param1 ```
void q_checkbox_mouse_move_event(void* self, void* param1) {
    QCheckBox_MouseMoveEvent((QCheckBox*)self, (QMouseEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QMouseEvent*) ```
void q_checkbox_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnMouseMoveEvent((QCheckBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCheckBox* self, QMouseEvent* param1 ```
void q_checkbox_qbase_mouse_move_event(void* self, void* param1) {
    QCheckBox_QBaseMouseMoveEvent((QCheckBox*)self, (QMouseEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcheckbox.html#initStyleOption)
///
/// ``` QCheckBox* self, QStyleOptionButton* option ```
void q_checkbox_init_style_option(void* self, void* option) {
    QCheckBox_InitStyleOption((QCheckBox*)self, (QStyleOptionButton*)option);
}

/// Allows for overriding the related default method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QStyleOptionButton*) ```
void q_checkbox_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnInitStyleOption((QCheckBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCheckBox* self, QStyleOptionButton* option ```
void q_checkbox_qbase_init_style_option(void* self, void* option) {
    QCheckBox_QBaseInitStyleOption((QCheckBox*)self, (QStyleOptionButton*)option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_checkbox_tr2(const char* s, const char* c) {
    libqt_string _str = QCheckBox_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_checkbox_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QCheckBox_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcheckbox.html#setTristate)
///
/// ``` QCheckBox* self, bool y ```
void q_checkbox_set_tristate1(void* self, bool y) {
    QCheckBox_SetTristate1((QCheckBox*)self, y);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setText)
///
/// ``` QCheckBox* self, const char* text ```
void q_checkbox_set_text(void* self, const char* text) {
    QAbstractButton_SetText((QAbstractButton*)self, qstring(text));
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#text)
///
/// ``` QCheckBox* self ```
const char* q_checkbox_text(void* self) {
    libqt_string _str = QAbstractButton_Text((QAbstractButton*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setIcon)
///
/// ``` QCheckBox* self, QIcon* icon ```
void q_checkbox_set_icon(void* self, void* icon) {
    QAbstractButton_SetIcon((QAbstractButton*)self, (QIcon*)icon);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#icon)
///
/// ``` QCheckBox* self ```
QIcon* q_checkbox_icon(void* self) {
    return QAbstractButton_Icon((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#iconSize)
///
/// ``` QCheckBox* self ```
QSize* q_checkbox_icon_size(void* self) {
    return QAbstractButton_IconSize((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setShortcut)
///
/// ``` QCheckBox* self, QKeySequence* key ```
void q_checkbox_set_shortcut(void* self, void* key) {
    QAbstractButton_SetShortcut((QAbstractButton*)self, (QKeySequence*)key);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#shortcut)
///
/// ``` QCheckBox* self ```
QKeySequence* q_checkbox_shortcut(void* self) {
    return QAbstractButton_Shortcut((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setCheckable)
///
/// ``` QCheckBox* self, bool checkable ```
void q_checkbox_set_checkable(void* self, bool checkable) {
    QAbstractButton_SetCheckable((QAbstractButton*)self, checkable);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#isCheckable)
///
/// ``` QCheckBox* self ```
bool q_checkbox_is_checkable(void* self) {
    return QAbstractButton_IsCheckable((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#isChecked)
///
/// ``` QCheckBox* self ```
bool q_checkbox_is_checked(void* self) {
    return QAbstractButton_IsChecked((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setDown)
///
/// ``` QCheckBox* self, bool down ```
void q_checkbox_set_down(void* self, bool down) {
    QAbstractButton_SetDown((QAbstractButton*)self, down);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#isDown)
///
/// ``` QCheckBox* self ```
bool q_checkbox_is_down(void* self) {
    return QAbstractButton_IsDown((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeat)
///
/// ``` QCheckBox* self, bool autoRepeat ```
void q_checkbox_set_auto_repeat(void* self, bool autoRepeat) {
    QAbstractButton_SetAutoRepeat((QAbstractButton*)self, autoRepeat);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeat)
///
/// ``` QCheckBox* self ```
bool q_checkbox_auto_repeat(void* self) {
    return QAbstractButton_AutoRepeat((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeatDelay)
///
/// ``` QCheckBox* self, int autoRepeatDelay ```
void q_checkbox_set_auto_repeat_delay(void* self, int autoRepeatDelay) {
    QAbstractButton_SetAutoRepeatDelay((QAbstractButton*)self, autoRepeatDelay);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeatDelay)
///
/// ``` QCheckBox* self ```
int32_t q_checkbox_auto_repeat_delay(void* self) {
    return QAbstractButton_AutoRepeatDelay((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeatInterval)
///
/// ``` QCheckBox* self, int autoRepeatInterval ```
void q_checkbox_set_auto_repeat_interval(void* self, int autoRepeatInterval) {
    QAbstractButton_SetAutoRepeatInterval((QAbstractButton*)self, autoRepeatInterval);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeatInterval)
///
/// ``` QCheckBox* self ```
int32_t q_checkbox_auto_repeat_interval(void* self) {
    return QAbstractButton_AutoRepeatInterval((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoExclusive)
///
/// ``` QCheckBox* self, bool autoExclusive ```
void q_checkbox_set_auto_exclusive(void* self, bool autoExclusive) {
    QAbstractButton_SetAutoExclusive((QAbstractButton*)self, autoExclusive);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#autoExclusive)
///
/// ``` QCheckBox* self ```
bool q_checkbox_auto_exclusive(void* self) {
    return QAbstractButton_AutoExclusive((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#group)
///
/// ``` QCheckBox* self ```
QButtonGroup* q_checkbox_group(void* self) {
    return QAbstractButton_Group((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setIconSize)
///
/// ``` QCheckBox* self, QSize* size ```
void q_checkbox_set_icon_size(void* self, void* size) {
    QAbstractButton_SetIconSize((QAbstractButton*)self, (QSize*)size);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#animateClick)
///
/// ``` QCheckBox* self ```
void q_checkbox_animate_click(void* self) {
    QAbstractButton_AnimateClick((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#click)
///
/// ``` QCheckBox* self ```
void q_checkbox_click(void* self) {
    QAbstractButton_Click((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#toggle)
///
/// ``` QCheckBox* self ```
void q_checkbox_toggle(void* self) {
    QAbstractButton_Toggle((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setChecked)
///
/// ``` QCheckBox* self, bool checked ```
void q_checkbox_set_checked(void* self, bool checked) {
    QAbstractButton_SetChecked((QAbstractButton*)self, checked);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#pressed)
///
/// ``` QCheckBox* self ```
void q_checkbox_pressed(void* self) {
    QAbstractButton_Pressed((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// ``` QCheckBox* self, void (*slot)(QAbstractButton*) ```
void q_checkbox_on_pressed(void* self, void (*slot)(void*)) {
    QAbstractButton_Connect_Pressed((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#released)
///
/// ``` QCheckBox* self ```
void q_checkbox_released(void* self) {
    QAbstractButton_Released((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// ``` QCheckBox* self, void (*slot)(QAbstractButton*) ```
void q_checkbox_on_released(void* self, void (*slot)(void*)) {
    QAbstractButton_Connect_Released((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// ``` QCheckBox* self ```
void q_checkbox_clicked(void* self) {
    QAbstractButton_Clicked((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// ``` QCheckBox* self, void (*slot)(QAbstractButton*) ```
void q_checkbox_on_clicked(void* self, void (*slot)(void*)) {
    QAbstractButton_Connect_Clicked((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#toggled)
///
/// ``` QCheckBox* self, bool checked ```
void q_checkbox_toggled(void* self, bool checked) {
    QAbstractButton_Toggled((QAbstractButton*)self, checked);
}

/// Inherited from QAbstractButton
///
/// ``` QCheckBox* self, void (*slot)(QAbstractButton*, bool) ```
void q_checkbox_on_toggled(void* self, void (*slot)(void*, bool)) {
    QAbstractButton_Connect_Toggled((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// ``` QCheckBox* self, bool checked ```
void q_checkbox_clicked1(void* self, bool checked) {
    QAbstractButton_Clicked1((QAbstractButton*)self, checked);
}

/// Inherited from QAbstractButton
///
/// ``` QCheckBox* self, void (*slot)(QAbstractButton*, bool) ```
void q_checkbox_on_clicked1(void* self, void (*slot)(void*, bool)) {
    QAbstractButton_Connect_Clicked1((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QCheckBox* self ```
uintptr_t q_checkbox_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QCheckBox* self ```
void q_checkbox_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QCheckBox* self ```
uintptr_t q_checkbox_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QCheckBox* self ```
uintptr_t q_checkbox_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QCheckBox* self ```
QStyle* q_checkbox_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QCheckBox* self, QStyle* style ```
void q_checkbox_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QCheckBox* self ```
bool q_checkbox_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QCheckBox* self ```
bool q_checkbox_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QCheckBox* self ```
bool q_checkbox_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QCheckBox* self ```
int64_t q_checkbox_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QCheckBox* self, enum Qt__WindowModality windowModality ```
void q_checkbox_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QCheckBox* self ```
bool q_checkbox_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QCheckBox* self, QWidget* param1 ```
bool q_checkbox_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QCheckBox* self, bool enabled ```
void q_checkbox_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QCheckBox* self, bool disabled ```
void q_checkbox_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QCheckBox* self, bool windowModified ```
void q_checkbox_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QCheckBox* self ```
QRect* q_checkbox_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QCheckBox* self ```
QRect* q_checkbox_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QCheckBox* self ```
QRect* q_checkbox_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QCheckBox* self ```
int32_t q_checkbox_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QCheckBox* self ```
int32_t q_checkbox_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QCheckBox* self ```
QPoint* q_checkbox_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QCheckBox* self ```
QSize* q_checkbox_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QCheckBox* self ```
QSize* q_checkbox_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QCheckBox* self ```
int32_t q_checkbox_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QCheckBox* self ```
int32_t q_checkbox_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QCheckBox* self ```
QRect* q_checkbox_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QCheckBox* self ```
QRect* q_checkbox_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QCheckBox* self ```
QRegion* q_checkbox_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QCheckBox* self ```
QSize* q_checkbox_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QCheckBox* self ```
QSize* q_checkbox_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QCheckBox* self ```
int32_t q_checkbox_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QCheckBox* self ```
int32_t q_checkbox_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QCheckBox* self ```
int32_t q_checkbox_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QCheckBox* self ```
int32_t q_checkbox_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QCheckBox* self, QSize* minimumSize ```
void q_checkbox_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QCheckBox* self, int minw, int minh ```
void q_checkbox_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QCheckBox* self, QSize* maximumSize ```
void q_checkbox_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QCheckBox* self, int maxw, int maxh ```
void q_checkbox_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QCheckBox* self, int minw ```
void q_checkbox_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QCheckBox* self, int minh ```
void q_checkbox_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QCheckBox* self, int maxw ```
void q_checkbox_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QCheckBox* self, int maxh ```
void q_checkbox_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QCheckBox* self ```
QSize* q_checkbox_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QCheckBox* self, QSize* sizeIncrement ```
void q_checkbox_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QCheckBox* self, int w, int h ```
void q_checkbox_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QCheckBox* self ```
QSize* q_checkbox_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QCheckBox* self, QSize* baseSize ```
void q_checkbox_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QCheckBox* self, int basew, int baseh ```
void q_checkbox_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QCheckBox* self, QSize* fixedSize ```
void q_checkbox_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QCheckBox* self, int w, int h ```
void q_checkbox_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QCheckBox* self, int w ```
void q_checkbox_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QCheckBox* self, int h ```
void q_checkbox_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QCheckBox* self, QPointF* param1 ```
QPointF* q_checkbox_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QCheckBox* self, QPoint* param1 ```
QPoint* q_checkbox_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QCheckBox* self, QPointF* param1 ```
QPointF* q_checkbox_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QCheckBox* self, QPoint* param1 ```
QPoint* q_checkbox_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QCheckBox* self, QPointF* param1 ```
QPointF* q_checkbox_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QCheckBox* self, QPoint* param1 ```
QPoint* q_checkbox_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QCheckBox* self, QPointF* param1 ```
QPointF* q_checkbox_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QCheckBox* self, QPoint* param1 ```
QPoint* q_checkbox_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QCheckBox* self, QWidget* param1, QPointF* param2 ```
QPointF* q_checkbox_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QCheckBox* self, QWidget* param1, QPoint* param2 ```
QPoint* q_checkbox_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QCheckBox* self, QWidget* param1, QPointF* param2 ```
QPointF* q_checkbox_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QCheckBox* self, QWidget* param1, QPoint* param2 ```
QPoint* q_checkbox_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QCheckBox* self ```
QWidget* q_checkbox_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QCheckBox* self ```
QWidget* q_checkbox_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QCheckBox* self ```
QWidget* q_checkbox_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QCheckBox* self ```
QPalette* q_checkbox_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QCheckBox* self, QPalette* palette ```
void q_checkbox_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QCheckBox* self, enum QPalette__ColorRole backgroundRole ```
void q_checkbox_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QCheckBox* self ```
int64_t q_checkbox_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QCheckBox* self, enum QPalette__ColorRole foregroundRole ```
void q_checkbox_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QCheckBox* self ```
int64_t q_checkbox_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QCheckBox* self ```
QFont* q_checkbox_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QCheckBox* self, QFont* font ```
void q_checkbox_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QCheckBox* self ```
QFontMetrics* q_checkbox_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QCheckBox* self ```
QFontInfo* q_checkbox_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QCheckBox* self ```
QCursor* q_checkbox_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QCheckBox* self, QCursor* cursor ```
void q_checkbox_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QCheckBox* self ```
void q_checkbox_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QCheckBox* self, bool enable ```
void q_checkbox_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QCheckBox* self ```
bool q_checkbox_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QCheckBox* self ```
bool q_checkbox_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QCheckBox* self, bool enable ```
void q_checkbox_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QCheckBox* self ```
bool q_checkbox_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QCheckBox* self, QBitmap* mask ```
void q_checkbox_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QCheckBox* self, QRegion* mask ```
void q_checkbox_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QCheckBox* self ```
QRegion* q_checkbox_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QCheckBox* self ```
void q_checkbox_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCheckBox* self, QPaintDevice* target ```
void q_checkbox_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCheckBox* self, QPainter* painter ```
void q_checkbox_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QCheckBox* self ```
QPixmap* q_checkbox_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QCheckBox* self ```
QGraphicsEffect* q_checkbox_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QCheckBox* self, QGraphicsEffect* effect ```
void q_checkbox_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QCheckBox* self, enum Qt__GestureType typeVal ```
void q_checkbox_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QCheckBox* self, enum Qt__GestureType typeVal ```
void q_checkbox_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QCheckBox* self, const char* windowTitle ```
void q_checkbox_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QCheckBox* self, const char* styleSheet ```
void q_checkbox_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QCheckBox* self ```
const char* q_checkbox_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QCheckBox* self ```
const char* q_checkbox_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QCheckBox* self, QIcon* icon ```
void q_checkbox_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QCheckBox* self ```
QIcon* q_checkbox_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QCheckBox* self, const char* windowIconText ```
void q_checkbox_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QCheckBox* self ```
const char* q_checkbox_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QCheckBox* self, const char* windowRole ```
void q_checkbox_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QCheckBox* self ```
const char* q_checkbox_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QCheckBox* self, const char* filePath ```
void q_checkbox_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QCheckBox* self ```
const char* q_checkbox_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QCheckBox* self, double level ```
void q_checkbox_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QCheckBox* self ```
double q_checkbox_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QCheckBox* self ```
bool q_checkbox_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QCheckBox* self, const char* toolTip ```
void q_checkbox_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QCheckBox* self ```
const char* q_checkbox_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QCheckBox* self, int msec ```
void q_checkbox_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QCheckBox* self ```
int32_t q_checkbox_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QCheckBox* self, const char* statusTip ```
void q_checkbox_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QCheckBox* self ```
const char* q_checkbox_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QCheckBox* self, const char* whatsThis ```
void q_checkbox_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QCheckBox* self ```
const char* q_checkbox_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QCheckBox* self ```
const char* q_checkbox_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QCheckBox* self, const char* name ```
void q_checkbox_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QCheckBox* self ```
const char* q_checkbox_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QCheckBox* self, const char* description ```
void q_checkbox_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QCheckBox* self, enum Qt__LayoutDirection direction ```
void q_checkbox_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QCheckBox* self ```
int64_t q_checkbox_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QCheckBox* self ```
void q_checkbox_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QCheckBox* self, QLocale* locale ```
void q_checkbox_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QCheckBox* self ```
QLocale* q_checkbox_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QCheckBox* self ```
void q_checkbox_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QCheckBox* self ```
bool q_checkbox_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QCheckBox* self ```
bool q_checkbox_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QCheckBox* self ```
void q_checkbox_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QCheckBox* self ```
bool q_checkbox_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QCheckBox* self ```
void q_checkbox_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QCheckBox* self ```
void q_checkbox_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QCheckBox* self, enum Qt__FocusReason reason ```
void q_checkbox_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QCheckBox* self ```
int64_t q_checkbox_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QCheckBox* self, enum Qt__FocusPolicy policy ```
void q_checkbox_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QCheckBox* self ```
bool q_checkbox_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_checkbox_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QCheckBox* self, QWidget* focusProxy ```
void q_checkbox_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QCheckBox* self ```
QWidget* q_checkbox_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QCheckBox* self ```
int64_t q_checkbox_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QCheckBox* self, enum Qt__ContextMenuPolicy policy ```
void q_checkbox_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QCheckBox* self ```
void q_checkbox_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QCheckBox* self, QCursor* param1 ```
void q_checkbox_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QCheckBox* self ```
void q_checkbox_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QCheckBox* self ```
void q_checkbox_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QCheckBox* self ```
void q_checkbox_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QCheckBox* self, QKeySequence* key ```
int32_t q_checkbox_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QCheckBox* self, int id ```
void q_checkbox_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QCheckBox* self, int id ```
void q_checkbox_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QCheckBox* self, int id ```
void q_checkbox_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_checkbox_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_checkbox_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QCheckBox* self ```
bool q_checkbox_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QCheckBox* self, bool enable ```
void q_checkbox_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QCheckBox* self ```
QGraphicsProxyWidget* q_checkbox_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QCheckBox* self ```
void q_checkbox_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QCheckBox* self ```
void q_checkbox_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QCheckBox* self, int x, int y, int w, int h ```
void q_checkbox_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QCheckBox* self, QRect* param1 ```
void q_checkbox_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QCheckBox* self, QRegion* param1 ```
void q_checkbox_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QCheckBox* self, int x, int y, int w, int h ```
void q_checkbox_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QCheckBox* self, QRect* param1 ```
void q_checkbox_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QCheckBox* self, QRegion* param1 ```
void q_checkbox_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QCheckBox* self, bool hidden ```
void q_checkbox_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QCheckBox* self ```
void q_checkbox_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QCheckBox* self ```
void q_checkbox_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QCheckBox* self ```
void q_checkbox_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QCheckBox* self ```
void q_checkbox_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QCheckBox* self ```
void q_checkbox_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QCheckBox* self ```
void q_checkbox_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QCheckBox* self ```
bool q_checkbox_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QCheckBox* self ```
void q_checkbox_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QCheckBox* self ```
void q_checkbox_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QCheckBox* self, QWidget* param1 ```
void q_checkbox_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QCheckBox* self, int x, int y ```
void q_checkbox_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QCheckBox* self, QPoint* param1 ```
void q_checkbox_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QCheckBox* self, int w, int h ```
void q_checkbox_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QCheckBox* self, QSize* param1 ```
void q_checkbox_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QCheckBox* self, int x, int y, int w, int h ```
void q_checkbox_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QCheckBox* self, QRect* geometry ```
void q_checkbox_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QCheckBox* self ```
char* q_checkbox_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QCheckBox* self, const char* geometry ```
bool q_checkbox_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QCheckBox* self ```
void q_checkbox_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QCheckBox* self ```
bool q_checkbox_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QCheckBox* self, QWidget* param1 ```
bool q_checkbox_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QCheckBox* self ```
bool q_checkbox_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QCheckBox* self ```
bool q_checkbox_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QCheckBox* self ```
bool q_checkbox_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QCheckBox* self ```
bool q_checkbox_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QCheckBox* self ```
int64_t q_checkbox_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QCheckBox* self, int state ```
void q_checkbox_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QCheckBox* self, int state ```
void q_checkbox_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QCheckBox* self ```
QSizePolicy* q_checkbox_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QCheckBox* self, QSizePolicy* sizePolicy ```
void q_checkbox_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QCheckBox* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_checkbox_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QCheckBox* self ```
QRegion* q_checkbox_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QCheckBox* self, int left, int top, int right, int bottom ```
void q_checkbox_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QCheckBox* self, QMargins* margins ```
void q_checkbox_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QCheckBox* self ```
QMargins* q_checkbox_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QCheckBox* self ```
QRect* q_checkbox_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QCheckBox* self ```
QLayout* q_checkbox_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QCheckBox* self, QLayout* layout ```
void q_checkbox_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QCheckBox* self ```
void q_checkbox_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QCheckBox* self, QWidget* parent ```
void q_checkbox_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QCheckBox* self, QWidget* parent, int f ```
void q_checkbox_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QCheckBox* self, int dx, int dy ```
void q_checkbox_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QCheckBox* self, int dx, int dy, QRect* param3 ```
void q_checkbox_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QCheckBox* self ```
QWidget* q_checkbox_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QCheckBox* self ```
QWidget* q_checkbox_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QCheckBox* self ```
QWidget* q_checkbox_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QCheckBox* self ```
bool q_checkbox_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QCheckBox* self, bool on ```
void q_checkbox_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QCheckBox* self, QAction* action ```
void q_checkbox_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QCheckBox* self, QAction* actions[] ```
void q_checkbox_add_actions(void* self, void* actions[]) {
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
/// ``` QCheckBox* self, QAction* before, QAction* actions[] ```
void q_checkbox_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QCheckBox* self, QAction* before, QAction* action ```
void q_checkbox_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QCheckBox* self, QAction* action ```
void q_checkbox_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QCheckBox* self ```
libqt_list /* of QAction* */ q_checkbox_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QCheckBox* self, const char* text ```
QAction* q_checkbox_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QCheckBox* self, QIcon* icon, const char* text ```
QAction* q_checkbox_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QCheckBox* self, const char* text, QKeySequence* shortcut ```
QAction* q_checkbox_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QCheckBox* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_checkbox_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QCheckBox* self ```
QWidget* q_checkbox_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QCheckBox* self, int typeVal ```
void q_checkbox_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QCheckBox* self ```
int64_t q_checkbox_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QCheckBox* self, enum Qt__WindowType param1 ```
void q_checkbox_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QCheckBox* self, int typeVal ```
void q_checkbox_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QCheckBox* self ```
int64_t q_checkbox_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_checkbox_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QCheckBox* self, int x, int y ```
QWidget* q_checkbox_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QCheckBox* self, QPoint* p ```
QWidget* q_checkbox_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QCheckBox* self, enum Qt__WidgetAttribute param1 ```
void q_checkbox_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QCheckBox* self, enum Qt__WidgetAttribute param1 ```
bool q_checkbox_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QCheckBox* self ```
void q_checkbox_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QCheckBox* self, QWidget* child ```
bool q_checkbox_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QCheckBox* self ```
bool q_checkbox_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QCheckBox* self, bool enabled ```
void q_checkbox_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QCheckBox* self ```
QBackingStore* q_checkbox_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QCheckBox* self ```
QWindow* q_checkbox_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QCheckBox* self ```
QScreen* q_checkbox_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QCheckBox* self, QScreen* screen ```
void q_checkbox_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_checkbox_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QCheckBox* self, const char* title ```
void q_checkbox_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QCheckBox* self, void (*slot)(QWidget*, const char*) ```
void q_checkbox_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QCheckBox* self, QIcon* icon ```
void q_checkbox_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QCheckBox* self, void (*slot)(QWidget*, QIcon*) ```
void q_checkbox_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QCheckBox* self, const char* iconText ```
void q_checkbox_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QCheckBox* self, void (*slot)(QWidget*, const char*) ```
void q_checkbox_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QCheckBox* self, QPoint* pos ```
void q_checkbox_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QCheckBox* self, void (*slot)(QWidget*, QPoint*) ```
void q_checkbox_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QCheckBox* self ```
int64_t q_checkbox_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QCheckBox* self, int hints ```
void q_checkbox_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCheckBox* self, QPaintDevice* target, QPoint* targetOffset ```
void q_checkbox_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCheckBox* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_checkbox_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCheckBox* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_checkbox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCheckBox* self, QPainter* painter, QPoint* targetOffset ```
void q_checkbox_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCheckBox* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_checkbox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCheckBox* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_checkbox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QCheckBox* self, QRect* rectangle ```
QPixmap* q_checkbox_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QCheckBox* self, enum Qt__GestureType typeVal, int flags ```
void q_checkbox_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QCheckBox* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_checkbox_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QCheckBox* self, int id, bool enable ```
void q_checkbox_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QCheckBox* self, int id, bool enable ```
void q_checkbox_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QCheckBox* self, enum Qt__WindowType param1, bool on ```
void q_checkbox_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QCheckBox* self, enum Qt__WidgetAttribute param1, bool on ```
void q_checkbox_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_checkbox_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_checkbox_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QCheckBox* self ```
const char* q_checkbox_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QCheckBox* self, const char* name ```
void q_checkbox_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QCheckBox* self ```
bool q_checkbox_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QCheckBox* self ```
bool q_checkbox_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QCheckBox* self ```
bool q_checkbox_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QCheckBox* self ```
bool q_checkbox_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QCheckBox* self, bool b ```
bool q_checkbox_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QCheckBox* self ```
QThread* q_checkbox_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QCheckBox* self, QThread* thread ```
void q_checkbox_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCheckBox* self, int interval ```
int32_t q_checkbox_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QCheckBox* self, int id ```
void q_checkbox_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QCheckBox* self ```
libqt_list /* of QObject* */ q_checkbox_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QCheckBox* self, QObject* filterObj ```
void q_checkbox_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QCheckBox* self, QObject* obj ```
void q_checkbox_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_checkbox_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCheckBox* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_checkbox_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_checkbox_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_checkbox_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QCheckBox* self ```
void q_checkbox_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QCheckBox* self ```
void q_checkbox_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QCheckBox* self, const char* name, QVariant* value ```
bool q_checkbox_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QCheckBox* self, const char* name ```
QVariant* q_checkbox_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QCheckBox* self ```
const char** q_checkbox_dynamic_property_names(void* self) {
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
/// ``` QCheckBox* self ```
QBindingStorage* q_checkbox_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QCheckBox* self ```
QBindingStorage* q_checkbox_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCheckBox* self ```
void q_checkbox_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QCheckBox* self, void (*slot)(QObject*) ```
void q_checkbox_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QCheckBox* self ```
QObject* q_checkbox_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QCheckBox* self, const char* classname ```
bool q_checkbox_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QCheckBox* self ```
void q_checkbox_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCheckBox* self, int interval, enum Qt__TimerType timerType ```
int32_t q_checkbox_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_checkbox_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCheckBox* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_checkbox_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCheckBox* self, QObject* param1 ```
void q_checkbox_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QCheckBox* self, void (*slot)(QObject*, QObject*) ```
void q_checkbox_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QCheckBox* self ```
bool q_checkbox_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QCheckBox* self ```
int32_t q_checkbox_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QCheckBox* self ```
int32_t q_checkbox_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QCheckBox* self ```
int32_t q_checkbox_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QCheckBox* self ```
int32_t q_checkbox_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QCheckBox* self ```
int32_t q_checkbox_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QCheckBox* self ```
int32_t q_checkbox_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QCheckBox* self ```
double q_checkbox_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QCheckBox* self ```
double q_checkbox_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QCheckBox* self ```
int32_t q_checkbox_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QCheckBox* self ```
int32_t q_checkbox_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_checkbox_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QKeyEvent* e ```
void q_checkbox_key_press_event(void* self, void* e) {
    QCheckBox_KeyPressEvent((QCheckBox*)self, (QKeyEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QKeyEvent* e ```
void q_checkbox_qbase_key_press_event(void* self, void* e) {
    QCheckBox_QBaseKeyPressEvent((QCheckBox*)self, (QKeyEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QKeyEvent*) ```
void q_checkbox_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnKeyPressEvent((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QKeyEvent* e ```
void q_checkbox_key_release_event(void* self, void* e) {
    QCheckBox_KeyReleaseEvent((QCheckBox*)self, (QKeyEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QKeyEvent* e ```
void q_checkbox_qbase_key_release_event(void* self, void* e) {
    QCheckBox_QBaseKeyReleaseEvent((QCheckBox*)self, (QKeyEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QKeyEvent*) ```
void q_checkbox_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnKeyReleaseEvent((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QMouseEvent* e ```
void q_checkbox_mouse_press_event(void* self, void* e) {
    QCheckBox_MousePressEvent((QCheckBox*)self, (QMouseEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QMouseEvent* e ```
void q_checkbox_qbase_mouse_press_event(void* self, void* e) {
    QCheckBox_QBaseMousePressEvent((QCheckBox*)self, (QMouseEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QMouseEvent*) ```
void q_checkbox_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnMousePressEvent((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QMouseEvent* e ```
void q_checkbox_mouse_release_event(void* self, void* e) {
    QCheckBox_MouseReleaseEvent((QCheckBox*)self, (QMouseEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QMouseEvent* e ```
void q_checkbox_qbase_mouse_release_event(void* self, void* e) {
    QCheckBox_QBaseMouseReleaseEvent((QCheckBox*)self, (QMouseEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QMouseEvent*) ```
void q_checkbox_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnMouseReleaseEvent((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QFocusEvent* e ```
void q_checkbox_focus_in_event(void* self, void* e) {
    QCheckBox_FocusInEvent((QCheckBox*)self, (QFocusEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QFocusEvent* e ```
void q_checkbox_qbase_focus_in_event(void* self, void* e) {
    QCheckBox_QBaseFocusInEvent((QCheckBox*)self, (QFocusEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QFocusEvent*) ```
void q_checkbox_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnFocusInEvent((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QFocusEvent* e ```
void q_checkbox_focus_out_event(void* self, void* e) {
    QCheckBox_FocusOutEvent((QCheckBox*)self, (QFocusEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QFocusEvent* e ```
void q_checkbox_qbase_focus_out_event(void* self, void* e) {
    QCheckBox_QBaseFocusOutEvent((QCheckBox*)self, (QFocusEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QFocusEvent*) ```
void q_checkbox_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnFocusOutEvent((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QEvent* e ```
void q_checkbox_change_event(void* self, void* e) {
    QCheckBox_ChangeEvent((QCheckBox*)self, (QEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QEvent* e ```
void q_checkbox_qbase_change_event(void* self, void* e) {
    QCheckBox_QBaseChangeEvent((QCheckBox*)self, (QEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QEvent*) ```
void q_checkbox_on_change_event(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnChangeEvent((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QTimerEvent* e ```
void q_checkbox_timer_event(void* self, void* e) {
    QCheckBox_TimerEvent((QCheckBox*)self, (QTimerEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QTimerEvent* e ```
void q_checkbox_qbase_timer_event(void* self, void* e) {
    QCheckBox_QBaseTimerEvent((QCheckBox*)self, (QTimerEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QTimerEvent*) ```
void q_checkbox_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnTimerEvent((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self ```
int32_t q_checkbox_dev_type(void* self) {
    return QCheckBox_DevType((QCheckBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self ```
int32_t q_checkbox_qbase_dev_type(void* self) {
    return QCheckBox_QBaseDevType((QCheckBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, int32_t (*slot)() ```
void q_checkbox_on_dev_type(void* self, int32_t (*slot)()) {
    QCheckBox_OnDevType((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, bool visible ```
void q_checkbox_set_visible(void* self, bool visible) {
    QCheckBox_SetVisible((QCheckBox*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, bool visible ```
void q_checkbox_qbase_set_visible(void* self, bool visible) {
    QCheckBox_QBaseSetVisible((QCheckBox*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, bool) ```
void q_checkbox_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QCheckBox_OnSetVisible((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, int param1 ```
int32_t q_checkbox_height_for_width(void* self, int param1) {
    return QCheckBox_HeightForWidth((QCheckBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, int param1 ```
int32_t q_checkbox_qbase_height_for_width(void* self, int param1) {
    return QCheckBox_QBaseHeightForWidth((QCheckBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, int32_t (*slot)(QCheckBox*, int) ```
void q_checkbox_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QCheckBox_OnHeightForWidth((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self ```
bool q_checkbox_has_height_for_width(void* self) {
    return QCheckBox_HasHeightForWidth((QCheckBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self ```
bool q_checkbox_qbase_has_height_for_width(void* self) {
    return QCheckBox_QBaseHasHeightForWidth((QCheckBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, bool (*slot)() ```
void q_checkbox_on_has_height_for_width(void* self, bool (*slot)()) {
    QCheckBox_OnHasHeightForWidth((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self ```
QPaintEngine* q_checkbox_paint_engine(void* self) {
    return QCheckBox_PaintEngine((QCheckBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self ```
QPaintEngine* q_checkbox_qbase_paint_engine(void* self) {
    return QCheckBox_QBasePaintEngine((QCheckBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, QPaintEngine* (*slot)() ```
void q_checkbox_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QCheckBox_OnPaintEngine((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QMouseEvent* event ```
void q_checkbox_mouse_double_click_event(void* self, void* event) {
    QCheckBox_MouseDoubleClickEvent((QCheckBox*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QMouseEvent* event ```
void q_checkbox_qbase_mouse_double_click_event(void* self, void* event) {
    QCheckBox_QBaseMouseDoubleClickEvent((QCheckBox*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QMouseEvent*) ```
void q_checkbox_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnMouseDoubleClickEvent((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QWheelEvent* event ```
void q_checkbox_wheel_event(void* self, void* event) {
    QCheckBox_WheelEvent((QCheckBox*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QWheelEvent* event ```
void q_checkbox_qbase_wheel_event(void* self, void* event) {
    QCheckBox_QBaseWheelEvent((QCheckBox*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QWheelEvent*) ```
void q_checkbox_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnWheelEvent((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QEnterEvent* event ```
void q_checkbox_enter_event(void* self, void* event) {
    QCheckBox_EnterEvent((QCheckBox*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QEnterEvent* event ```
void q_checkbox_qbase_enter_event(void* self, void* event) {
    QCheckBox_QBaseEnterEvent((QCheckBox*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QEnterEvent*) ```
void q_checkbox_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnEnterEvent((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QEvent* event ```
void q_checkbox_leave_event(void* self, void* event) {
    QCheckBox_LeaveEvent((QCheckBox*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QEvent* event ```
void q_checkbox_qbase_leave_event(void* self, void* event) {
    QCheckBox_QBaseLeaveEvent((QCheckBox*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QEvent*) ```
void q_checkbox_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnLeaveEvent((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QMoveEvent* event ```
void q_checkbox_move_event(void* self, void* event) {
    QCheckBox_MoveEvent((QCheckBox*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QMoveEvent* event ```
void q_checkbox_qbase_move_event(void* self, void* event) {
    QCheckBox_QBaseMoveEvent((QCheckBox*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QMoveEvent*) ```
void q_checkbox_on_move_event(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnMoveEvent((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QResizeEvent* event ```
void q_checkbox_resize_event(void* self, void* event) {
    QCheckBox_ResizeEvent((QCheckBox*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QResizeEvent* event ```
void q_checkbox_qbase_resize_event(void* self, void* event) {
    QCheckBox_QBaseResizeEvent((QCheckBox*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QResizeEvent*) ```
void q_checkbox_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnResizeEvent((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QCloseEvent* event ```
void q_checkbox_close_event(void* self, void* event) {
    QCheckBox_CloseEvent((QCheckBox*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QCloseEvent* event ```
void q_checkbox_qbase_close_event(void* self, void* event) {
    QCheckBox_QBaseCloseEvent((QCheckBox*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QCloseEvent*) ```
void q_checkbox_on_close_event(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnCloseEvent((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QContextMenuEvent* event ```
void q_checkbox_context_menu_event(void* self, void* event) {
    QCheckBox_ContextMenuEvent((QCheckBox*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QContextMenuEvent* event ```
void q_checkbox_qbase_context_menu_event(void* self, void* event) {
    QCheckBox_QBaseContextMenuEvent((QCheckBox*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QContextMenuEvent*) ```
void q_checkbox_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnContextMenuEvent((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QTabletEvent* event ```
void q_checkbox_tablet_event(void* self, void* event) {
    QCheckBox_TabletEvent((QCheckBox*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QTabletEvent* event ```
void q_checkbox_qbase_tablet_event(void* self, void* event) {
    QCheckBox_QBaseTabletEvent((QCheckBox*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QTabletEvent*) ```
void q_checkbox_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnTabletEvent((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QActionEvent* event ```
void q_checkbox_action_event(void* self, void* event) {
    QCheckBox_ActionEvent((QCheckBox*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QActionEvent* event ```
void q_checkbox_qbase_action_event(void* self, void* event) {
    QCheckBox_QBaseActionEvent((QCheckBox*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QActionEvent*) ```
void q_checkbox_on_action_event(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnActionEvent((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QDragEnterEvent* event ```
void q_checkbox_drag_enter_event(void* self, void* event) {
    QCheckBox_DragEnterEvent((QCheckBox*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QDragEnterEvent* event ```
void q_checkbox_qbase_drag_enter_event(void* self, void* event) {
    QCheckBox_QBaseDragEnterEvent((QCheckBox*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QDragEnterEvent*) ```
void q_checkbox_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnDragEnterEvent((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QDragMoveEvent* event ```
void q_checkbox_drag_move_event(void* self, void* event) {
    QCheckBox_DragMoveEvent((QCheckBox*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QDragMoveEvent* event ```
void q_checkbox_qbase_drag_move_event(void* self, void* event) {
    QCheckBox_QBaseDragMoveEvent((QCheckBox*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QDragMoveEvent*) ```
void q_checkbox_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnDragMoveEvent((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QDragLeaveEvent* event ```
void q_checkbox_drag_leave_event(void* self, void* event) {
    QCheckBox_DragLeaveEvent((QCheckBox*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QDragLeaveEvent* event ```
void q_checkbox_qbase_drag_leave_event(void* self, void* event) {
    QCheckBox_QBaseDragLeaveEvent((QCheckBox*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QDragLeaveEvent*) ```
void q_checkbox_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnDragLeaveEvent((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QDropEvent* event ```
void q_checkbox_drop_event(void* self, void* event) {
    QCheckBox_DropEvent((QCheckBox*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QDropEvent* event ```
void q_checkbox_qbase_drop_event(void* self, void* event) {
    QCheckBox_QBaseDropEvent((QCheckBox*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QDropEvent*) ```
void q_checkbox_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnDropEvent((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QShowEvent* event ```
void q_checkbox_show_event(void* self, void* event) {
    QCheckBox_ShowEvent((QCheckBox*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QShowEvent* event ```
void q_checkbox_qbase_show_event(void* self, void* event) {
    QCheckBox_QBaseShowEvent((QCheckBox*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QShowEvent*) ```
void q_checkbox_on_show_event(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnShowEvent((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QHideEvent* event ```
void q_checkbox_hide_event(void* self, void* event) {
    QCheckBox_HideEvent((QCheckBox*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QHideEvent* event ```
void q_checkbox_qbase_hide_event(void* self, void* event) {
    QCheckBox_QBaseHideEvent((QCheckBox*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QHideEvent*) ```
void q_checkbox_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnHideEvent((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, const char* eventType, void* message, intptr_t* result ```
bool q_checkbox_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QCheckBox_NativeEvent((QCheckBox*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, const char* eventType, void* message, intptr_t* result ```
bool q_checkbox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QCheckBox_QBaseNativeEvent((QCheckBox*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, bool (*slot)(QCheckBox*, const char*, void*, intptr_t*) ```
void q_checkbox_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QCheckBox_OnNativeEvent((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_checkbox_metric(void* self, int64_t param1) {
    return QCheckBox_Metric((QCheckBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_checkbox_qbase_metric(void* self, int64_t param1) {
    return QCheckBox_QBaseMetric((QCheckBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, int32_t (*slot)(QCheckBox*, enum QPaintDevice__PaintDeviceMetric) ```
void q_checkbox_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QCheckBox_OnMetric((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QPainter* painter ```
void q_checkbox_init_painter(void* self, void* painter) {
    QCheckBox_InitPainter((QCheckBox*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QPainter* painter ```
void q_checkbox_qbase_init_painter(void* self, void* painter) {
    QCheckBox_QBaseInitPainter((QCheckBox*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QPainter*) ```
void q_checkbox_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnInitPainter((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QPoint* offset ```
QPaintDevice* q_checkbox_redirected(void* self, void* offset) {
    return QCheckBox_Redirected((QCheckBox*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QPoint* offset ```
QPaintDevice* q_checkbox_qbase_redirected(void* self, void* offset) {
    return QCheckBox_QBaseRedirected((QCheckBox*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, QPaintDevice* (*slot)(QCheckBox*, QPoint*) ```
void q_checkbox_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QCheckBox_OnRedirected((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self ```
QPainter* q_checkbox_shared_painter(void* self) {
    return QCheckBox_SharedPainter((QCheckBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self ```
QPainter* q_checkbox_qbase_shared_painter(void* self) {
    return QCheckBox_QBaseSharedPainter((QCheckBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, QPainter* (*slot)() ```
void q_checkbox_on_shared_painter(void* self, QPainter* (*slot)()) {
    QCheckBox_OnSharedPainter((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QInputMethodEvent* param1 ```
void q_checkbox_input_method_event(void* self, void* param1) {
    QCheckBox_InputMethodEvent((QCheckBox*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QInputMethodEvent* param1 ```
void q_checkbox_qbase_input_method_event(void* self, void* param1) {
    QCheckBox_QBaseInputMethodEvent((QCheckBox*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QInputMethodEvent*) ```
void q_checkbox_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnInputMethodEvent((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_checkbox_input_method_query(void* self, int64_t param1) {
    return QCheckBox_InputMethodQuery((QCheckBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_checkbox_qbase_input_method_query(void* self, int64_t param1) {
    return QCheckBox_QBaseInputMethodQuery((QCheckBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, QVariant* (*slot)(QCheckBox*, enum Qt__InputMethodQuery) ```
void q_checkbox_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QCheckBox_OnInputMethodQuery((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, bool next ```
bool q_checkbox_focus_next_prev_child(void* self, bool next) {
    return QCheckBox_FocusNextPrevChild((QCheckBox*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, bool next ```
bool q_checkbox_qbase_focus_next_prev_child(void* self, bool next) {
    return QCheckBox_QBaseFocusNextPrevChild((QCheckBox*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, bool (*slot)(QCheckBox*, bool) ```
void q_checkbox_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QCheckBox_OnFocusNextPrevChild((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QObject* watched, QEvent* event ```
bool q_checkbox_event_filter(void* self, void* watched, void* event) {
    return QCheckBox_EventFilter((QCheckBox*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QObject* watched, QEvent* event ```
bool q_checkbox_qbase_event_filter(void* self, void* watched, void* event) {
    return QCheckBox_QBaseEventFilter((QCheckBox*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, bool (*slot)(QCheckBox*, QObject*, QEvent*) ```
void q_checkbox_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QCheckBox_OnEventFilter((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QChildEvent* event ```
void q_checkbox_child_event(void* self, void* event) {
    QCheckBox_ChildEvent((QCheckBox*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QChildEvent* event ```
void q_checkbox_qbase_child_event(void* self, void* event) {
    QCheckBox_QBaseChildEvent((QCheckBox*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QChildEvent*) ```
void q_checkbox_on_child_event(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnChildEvent((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QEvent* event ```
void q_checkbox_custom_event(void* self, void* event) {
    QCheckBox_CustomEvent((QCheckBox*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QEvent* event ```
void q_checkbox_qbase_custom_event(void* self, void* event) {
    QCheckBox_QBaseCustomEvent((QCheckBox*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QEvent*) ```
void q_checkbox_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnCustomEvent((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QMetaMethod* signal ```
void q_checkbox_connect_notify(void* self, void* signal) {
    QCheckBox_ConnectNotify((QCheckBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QMetaMethod* signal ```
void q_checkbox_qbase_connect_notify(void* self, void* signal) {
    QCheckBox_QBaseConnectNotify((QCheckBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QMetaMethod*) ```
void q_checkbox_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnConnectNotify((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QMetaMethod* signal ```
void q_checkbox_disconnect_notify(void* self, void* signal) {
    QCheckBox_DisconnectNotify((QCheckBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QMetaMethod* signal ```
void q_checkbox_qbase_disconnect_notify(void* self, void* signal) {
    QCheckBox_QBaseDisconnectNotify((QCheckBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)(QCheckBox*, QMetaMethod*) ```
void q_checkbox_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QCheckBox_OnDisconnectNotify((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self ```
void q_checkbox_update_micro_focus(void* self) {
    QCheckBox_UpdateMicroFocus((QCheckBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self ```
void q_checkbox_qbase_update_micro_focus(void* self) {
    QCheckBox_QBaseUpdateMicroFocus((QCheckBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)() ```
void q_checkbox_on_update_micro_focus(void* self, void (*slot)()) {
    QCheckBox_OnUpdateMicroFocus((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self ```
void q_checkbox_create(void* self) {
    QCheckBox_Create((QCheckBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self ```
void q_checkbox_qbase_create(void* self) {
    QCheckBox_QBaseCreate((QCheckBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)() ```
void q_checkbox_on_create(void* self, void (*slot)()) {
    QCheckBox_OnCreate((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self ```
void q_checkbox_destroy(void* self) {
    QCheckBox_Destroy((QCheckBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self ```
void q_checkbox_qbase_destroy(void* self) {
    QCheckBox_QBaseDestroy((QCheckBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, void (*slot)() ```
void q_checkbox_on_destroy(void* self, void (*slot)()) {
    QCheckBox_OnDestroy((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self ```
bool q_checkbox_focus_next_child(void* self) {
    return QCheckBox_FocusNextChild((QCheckBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self ```
bool q_checkbox_qbase_focus_next_child(void* self) {
    return QCheckBox_QBaseFocusNextChild((QCheckBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, bool (*slot)() ```
void q_checkbox_on_focus_next_child(void* self, bool (*slot)()) {
    QCheckBox_OnFocusNextChild((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self ```
bool q_checkbox_focus_previous_child(void* self) {
    return QCheckBox_FocusPreviousChild((QCheckBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self ```
bool q_checkbox_qbase_focus_previous_child(void* self) {
    return QCheckBox_QBaseFocusPreviousChild((QCheckBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, bool (*slot)() ```
void q_checkbox_on_focus_previous_child(void* self, bool (*slot)()) {
    QCheckBox_OnFocusPreviousChild((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self ```
QObject* q_checkbox_sender(void* self) {
    return QCheckBox_Sender((QCheckBox*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self ```
QObject* q_checkbox_qbase_sender(void* self) {
    return QCheckBox_QBaseSender((QCheckBox*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, QObject* (*slot)() ```
void q_checkbox_on_sender(void* self, QObject* (*slot)()) {
    QCheckBox_OnSender((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self ```
int32_t q_checkbox_sender_signal_index(void* self) {
    return QCheckBox_SenderSignalIndex((QCheckBox*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self ```
int32_t q_checkbox_qbase_sender_signal_index(void* self) {
    return QCheckBox_QBaseSenderSignalIndex((QCheckBox*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, int32_t (*slot)() ```
void q_checkbox_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QCheckBox_OnSenderSignalIndex((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, const char* signal ```
int32_t q_checkbox_receivers(void* self, const char* signal) {
    return QCheckBox_Receivers((QCheckBox*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, const char* signal ```
int32_t q_checkbox_qbase_receivers(void* self, const char* signal) {
    return QCheckBox_QBaseReceivers((QCheckBox*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, int32_t (*slot)(QCheckBox*, const char*) ```
void q_checkbox_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QCheckBox_OnReceivers((QCheckBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCheckBox* self, QMetaMethod* signal ```
bool q_checkbox_is_signal_connected(void* self, void* signal) {
    return QCheckBox_IsSignalConnected((QCheckBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCheckBox* self, QMetaMethod* signal ```
bool q_checkbox_qbase_is_signal_connected(void* self, void* signal) {
    return QCheckBox_QBaseIsSignalConnected((QCheckBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCheckBox* self, bool (*slot)(QCheckBox*, QMetaMethod*) ```
void q_checkbox_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QCheckBox_OnIsSignalConnected((QCheckBox*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QCheckBox* self ```
void q_checkbox_delete(void* self) {
    QCheckBox_Delete((QCheckBox*)(self));
}