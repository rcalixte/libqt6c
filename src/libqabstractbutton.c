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
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqabstractbutton.hpp"
#include "libqabstractbutton.h"

/// https://doc.qt.io/qt-6/qabstractbutton.html

/// q_abstractbutton_new constructs a new QAbstractButton object.
///
/// ``` QWidget* parent ```
QAbstractButton* q_abstractbutton_new(void* parent) {
    return QAbstractButton_new((QWidget*)parent);
}

/// q_abstractbutton_new2 constructs a new QAbstractButton object.
///
///
QAbstractButton* q_abstractbutton_new2() {
    return QAbstractButton_new2();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAbstractButton* self ```
QMetaObject* q_abstractbutton_meta_object(void* self) {
    return QAbstractButton_MetaObject((QAbstractButton*)self);
}

/// ``` QAbstractButton* self, const char* param1 ```
void* q_abstractbutton_metacast(void* self, const char* param1) {
    return QAbstractButton_Metacast((QAbstractButton*)self, param1);
}

/// ``` QAbstractButton* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractbutton_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractButton_Metacall((QAbstractButton*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractButton* self, int32_t (*slot)(QAbstractButton*, enum QMetaObject__Call, int, void*) ```
void q_abstractbutton_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAbstractButton_OnMetacall((QAbstractButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractButton* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractbutton_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractButton_QBaseMetacall((QAbstractButton*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_abstractbutton_tr(const char* s) {
    libqt_string _str = QAbstractButton_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setText)
///
/// ``` QAbstractButton* self, const char* text ```
void q_abstractbutton_set_text(void* self, const char* text) {
    QAbstractButton_SetText((QAbstractButton*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#text)
///
/// ``` QAbstractButton* self ```
const char* q_abstractbutton_text(void* self) {
    libqt_string _str = QAbstractButton_Text((QAbstractButton*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setIcon)
///
/// ``` QAbstractButton* self, QIcon* icon ```
void q_abstractbutton_set_icon(void* self, void* icon) {
    QAbstractButton_SetIcon((QAbstractButton*)self, (QIcon*)icon);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#icon)
///
/// ``` QAbstractButton* self ```
QIcon* q_abstractbutton_icon(void* self) {
    return QAbstractButton_Icon((QAbstractButton*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#iconSize)
///
/// ``` QAbstractButton* self ```
QSize* q_abstractbutton_icon_size(void* self) {
    return QAbstractButton_IconSize((QAbstractButton*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setShortcut)
///
/// ``` QAbstractButton* self, QKeySequence* key ```
void q_abstractbutton_set_shortcut(void* self, void* key) {
    QAbstractButton_SetShortcut((QAbstractButton*)self, (QKeySequence*)key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#shortcut)
///
/// ``` QAbstractButton* self ```
QKeySequence* q_abstractbutton_shortcut(void* self) {
    return QAbstractButton_Shortcut((QAbstractButton*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setCheckable)
///
/// ``` QAbstractButton* self, bool checkable ```
void q_abstractbutton_set_checkable(void* self, bool checkable) {
    QAbstractButton_SetCheckable((QAbstractButton*)self, checkable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#isCheckable)
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_is_checkable(void* self) {
    return QAbstractButton_IsCheckable((QAbstractButton*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#isChecked)
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_is_checked(void* self) {
    return QAbstractButton_IsChecked((QAbstractButton*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setDown)
///
/// ``` QAbstractButton* self, bool down ```
void q_abstractbutton_set_down(void* self, bool down) {
    QAbstractButton_SetDown((QAbstractButton*)self, down);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#isDown)
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_is_down(void* self) {
    return QAbstractButton_IsDown((QAbstractButton*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeat)
///
/// ``` QAbstractButton* self, bool autoRepeat ```
void q_abstractbutton_set_auto_repeat(void* self, bool autoRepeat) {
    QAbstractButton_SetAutoRepeat((QAbstractButton*)self, autoRepeat);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeat)
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_auto_repeat(void* self) {
    return QAbstractButton_AutoRepeat((QAbstractButton*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeatDelay)
///
/// ``` QAbstractButton* self, int autoRepeatDelay ```
void q_abstractbutton_set_auto_repeat_delay(void* self, int autoRepeatDelay) {
    QAbstractButton_SetAutoRepeatDelay((QAbstractButton*)self, autoRepeatDelay);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeatDelay)
///
/// ``` QAbstractButton* self ```
int32_t q_abstractbutton_auto_repeat_delay(void* self) {
    return QAbstractButton_AutoRepeatDelay((QAbstractButton*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeatInterval)
///
/// ``` QAbstractButton* self, int autoRepeatInterval ```
void q_abstractbutton_set_auto_repeat_interval(void* self, int autoRepeatInterval) {
    QAbstractButton_SetAutoRepeatInterval((QAbstractButton*)self, autoRepeatInterval);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeatInterval)
///
/// ``` QAbstractButton* self ```
int32_t q_abstractbutton_auto_repeat_interval(void* self) {
    return QAbstractButton_AutoRepeatInterval((QAbstractButton*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoExclusive)
///
/// ``` QAbstractButton* self, bool autoExclusive ```
void q_abstractbutton_set_auto_exclusive(void* self, bool autoExclusive) {
    QAbstractButton_SetAutoExclusive((QAbstractButton*)self, autoExclusive);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#autoExclusive)
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_auto_exclusive(void* self) {
    return QAbstractButton_AutoExclusive((QAbstractButton*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#group)
///
/// ``` QAbstractButton* self ```
QButtonGroup* q_abstractbutton_group(void* self) {
    return QAbstractButton_Group((QAbstractButton*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setIconSize)
///
/// ``` QAbstractButton* self, QSize* size ```
void q_abstractbutton_set_icon_size(void* self, void* size) {
    QAbstractButton_SetIconSize((QAbstractButton*)self, (QSize*)size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#animateClick)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_animate_click(void* self) {
    QAbstractButton_AnimateClick((QAbstractButton*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#click)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_click(void* self) {
    QAbstractButton_Click((QAbstractButton*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#toggle)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_toggle(void* self) {
    QAbstractButton_Toggle((QAbstractButton*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setChecked)
///
/// ``` QAbstractButton* self, bool checked ```
void q_abstractbutton_set_checked(void* self, bool checked) {
    QAbstractButton_SetChecked((QAbstractButton*)self, checked);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#pressed)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_pressed(void* self) {
    QAbstractButton_Pressed((QAbstractButton*)self);
}

/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*) ```
void q_abstractbutton_on_pressed(void* self, void (*slot)(void*)) {
    QAbstractButton_Connect_Pressed((QAbstractButton*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#released)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_released(void* self) {
    QAbstractButton_Released((QAbstractButton*)self);
}

/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*) ```
void q_abstractbutton_on_released(void* self, void (*slot)(void*)) {
    QAbstractButton_Connect_Released((QAbstractButton*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_clicked(void* self) {
    QAbstractButton_Clicked((QAbstractButton*)self);
}

/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*) ```
void q_abstractbutton_on_clicked(void* self, void (*slot)(void*)) {
    QAbstractButton_Connect_Clicked((QAbstractButton*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#toggled)
///
/// ``` QAbstractButton* self, bool checked ```
void q_abstractbutton_toggled(void* self, bool checked) {
    QAbstractButton_Toggled((QAbstractButton*)self, checked);
}

/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, bool) ```
void q_abstractbutton_on_toggled(void* self, void (*slot)(void*, bool)) {
    QAbstractButton_Connect_Toggled((QAbstractButton*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#paintEvent)
///
/// ``` QAbstractButton* self, QPaintEvent* e ```
void q_abstractbutton_paint_event(void* self, void* e) {
    QAbstractButton_PaintEvent((QAbstractButton*)self, (QPaintEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QPaintEvent*) ```
void q_abstractbutton_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnPaintEvent((QAbstractButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractButton* self, QPaintEvent* e ```
void q_abstractbutton_qbase_paint_event(void* self, void* e) {
    QAbstractButton_QBasePaintEvent((QAbstractButton*)self, (QPaintEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#hitButton)
///
/// ``` QAbstractButton* self, QPoint* pos ```
bool q_abstractbutton_hit_button(void* self, void* pos) {
    return QAbstractButton_HitButton((QAbstractButton*)self, (QPoint*)pos);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractButton* self, bool (*slot)(QAbstractButton*, QPoint*) ```
void q_abstractbutton_on_hit_button(void* self, bool (*slot)(void*, void*)) {
    QAbstractButton_OnHitButton((QAbstractButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractButton* self, QPoint* pos ```
bool q_abstractbutton_qbase_hit_button(void* self, void* pos) {
    return QAbstractButton_QBaseHitButton((QAbstractButton*)self, (QPoint*)pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#checkStateSet)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_check_state_set(void* self) {
    QAbstractButton_CheckStateSet((QAbstractButton*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractButton* self, void (*slot)() ```
void q_abstractbutton_on_check_state_set(void* self, void (*slot)()) {
    QAbstractButton_OnCheckStateSet((QAbstractButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_qbase_check_state_set(void* self) {
    QAbstractButton_QBaseCheckStateSet((QAbstractButton*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#nextCheckState)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_next_check_state(void* self) {
    QAbstractButton_NextCheckState((QAbstractButton*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractButton* self, void (*slot)() ```
void q_abstractbutton_on_next_check_state(void* self, void (*slot)()) {
    QAbstractButton_OnNextCheckState((QAbstractButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_qbase_next_check_state(void* self) {
    QAbstractButton_QBaseNextCheckState((QAbstractButton*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#event)
///
/// ``` QAbstractButton* self, QEvent* e ```
bool q_abstractbutton_event(void* self, void* e) {
    return QAbstractButton_Event((QAbstractButton*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractButton* self, bool (*slot)(QAbstractButton*, QEvent*) ```
void q_abstractbutton_on_event(void* self, bool (*slot)(void*, void*)) {
    QAbstractButton_OnEvent((QAbstractButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractButton* self, QEvent* e ```
bool q_abstractbutton_qbase_event(void* self, void* e) {
    return QAbstractButton_QBaseEvent((QAbstractButton*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#keyPressEvent)
///
/// ``` QAbstractButton* self, QKeyEvent* e ```
void q_abstractbutton_key_press_event(void* self, void* e) {
    QAbstractButton_KeyPressEvent((QAbstractButton*)self, (QKeyEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QKeyEvent*) ```
void q_abstractbutton_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnKeyPressEvent((QAbstractButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractButton* self, QKeyEvent* e ```
void q_abstractbutton_qbase_key_press_event(void* self, void* e) {
    QAbstractButton_QBaseKeyPressEvent((QAbstractButton*)self, (QKeyEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
///
/// ``` QAbstractButton* self, QKeyEvent* e ```
void q_abstractbutton_key_release_event(void* self, void* e) {
    QAbstractButton_KeyReleaseEvent((QAbstractButton*)self, (QKeyEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QKeyEvent*) ```
void q_abstractbutton_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnKeyReleaseEvent((QAbstractButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractButton* self, QKeyEvent* e ```
void q_abstractbutton_qbase_key_release_event(void* self, void* e) {
    QAbstractButton_QBaseKeyReleaseEvent((QAbstractButton*)self, (QKeyEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#mousePressEvent)
///
/// ``` QAbstractButton* self, QMouseEvent* e ```
void q_abstractbutton_mouse_press_event(void* self, void* e) {
    QAbstractButton_MousePressEvent((QAbstractButton*)self, (QMouseEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QMouseEvent*) ```
void q_abstractbutton_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnMousePressEvent((QAbstractButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractButton* self, QMouseEvent* e ```
void q_abstractbutton_qbase_mouse_press_event(void* self, void* e) {
    QAbstractButton_QBaseMousePressEvent((QAbstractButton*)self, (QMouseEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#mouseReleaseEvent)
///
/// ``` QAbstractButton* self, QMouseEvent* e ```
void q_abstractbutton_mouse_release_event(void* self, void* e) {
    QAbstractButton_MouseReleaseEvent((QAbstractButton*)self, (QMouseEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QMouseEvent*) ```
void q_abstractbutton_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnMouseReleaseEvent((QAbstractButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractButton* self, QMouseEvent* e ```
void q_abstractbutton_qbase_mouse_release_event(void* self, void* e) {
    QAbstractButton_QBaseMouseReleaseEvent((QAbstractButton*)self, (QMouseEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#mouseMoveEvent)
///
/// ``` QAbstractButton* self, QMouseEvent* e ```
void q_abstractbutton_mouse_move_event(void* self, void* e) {
    QAbstractButton_MouseMoveEvent((QAbstractButton*)self, (QMouseEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QMouseEvent*) ```
void q_abstractbutton_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnMouseMoveEvent((QAbstractButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractButton* self, QMouseEvent* e ```
void q_abstractbutton_qbase_mouse_move_event(void* self, void* e) {
    QAbstractButton_QBaseMouseMoveEvent((QAbstractButton*)self, (QMouseEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#focusInEvent)
///
/// ``` QAbstractButton* self, QFocusEvent* e ```
void q_abstractbutton_focus_in_event(void* self, void* e) {
    QAbstractButton_FocusInEvent((QAbstractButton*)self, (QFocusEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QFocusEvent*) ```
void q_abstractbutton_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnFocusInEvent((QAbstractButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractButton* self, QFocusEvent* e ```
void q_abstractbutton_qbase_focus_in_event(void* self, void* e) {
    QAbstractButton_QBaseFocusInEvent((QAbstractButton*)self, (QFocusEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#focusOutEvent)
///
/// ``` QAbstractButton* self, QFocusEvent* e ```
void q_abstractbutton_focus_out_event(void* self, void* e) {
    QAbstractButton_FocusOutEvent((QAbstractButton*)self, (QFocusEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QFocusEvent*) ```
void q_abstractbutton_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnFocusOutEvent((QAbstractButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractButton* self, QFocusEvent* e ```
void q_abstractbutton_qbase_focus_out_event(void* self, void* e) {
    QAbstractButton_QBaseFocusOutEvent((QAbstractButton*)self, (QFocusEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#changeEvent)
///
/// ``` QAbstractButton* self, QEvent* e ```
void q_abstractbutton_change_event(void* self, void* e) {
    QAbstractButton_ChangeEvent((QAbstractButton*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QEvent*) ```
void q_abstractbutton_on_change_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnChangeEvent((QAbstractButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractButton* self, QEvent* e ```
void q_abstractbutton_qbase_change_event(void* self, void* e) {
    QAbstractButton_QBaseChangeEvent((QAbstractButton*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#timerEvent)
///
/// ``` QAbstractButton* self, QTimerEvent* e ```
void q_abstractbutton_timer_event(void* self, void* e) {
    QAbstractButton_TimerEvent((QAbstractButton*)self, (QTimerEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QTimerEvent*) ```
void q_abstractbutton_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnTimerEvent((QAbstractButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractButton* self, QTimerEvent* e ```
void q_abstractbutton_qbase_timer_event(void* self, void* e) {
    QAbstractButton_QBaseTimerEvent((QAbstractButton*)self, (QTimerEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_abstractbutton_tr2(const char* s, const char* c) {
    libqt_string _str = QAbstractButton_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_abstractbutton_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAbstractButton_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// ``` QAbstractButton* self, bool checked ```
void q_abstractbutton_clicked1(void* self, bool checked) {
    QAbstractButton_Clicked1((QAbstractButton*)self, checked);
}

/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, bool) ```
void q_abstractbutton_on_clicked1(void* self, void (*slot)(void*, bool)) {
    QAbstractButton_Connect_Clicked1((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QAbstractButton* self ```
uintptr_t q_abstractbutton_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QAbstractButton* self ```
uintptr_t q_abstractbutton_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QAbstractButton* self ```
uintptr_t q_abstractbutton_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QAbstractButton* self ```
QStyle* q_abstractbutton_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QAbstractButton* self, QStyle* style ```
void q_abstractbutton_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QAbstractButton* self ```
int64_t q_abstractbutton_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QAbstractButton* self, enum Qt__WindowModality windowModality ```
void q_abstractbutton_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QAbstractButton* self, QWidget* param1 ```
bool q_abstractbutton_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QAbstractButton* self, bool enabled ```
void q_abstractbutton_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QAbstractButton* self, bool disabled ```
void q_abstractbutton_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QAbstractButton* self, bool windowModified ```
void q_abstractbutton_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QAbstractButton* self ```
QRect* q_abstractbutton_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QAbstractButton* self ```
QRect* q_abstractbutton_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QAbstractButton* self ```
QRect* q_abstractbutton_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QAbstractButton* self ```
int32_t q_abstractbutton_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QAbstractButton* self ```
int32_t q_abstractbutton_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QAbstractButton* self ```
QPoint* q_abstractbutton_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QAbstractButton* self ```
QSize* q_abstractbutton_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QAbstractButton* self ```
QSize* q_abstractbutton_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QAbstractButton* self ```
int32_t q_abstractbutton_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QAbstractButton* self ```
int32_t q_abstractbutton_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QAbstractButton* self ```
QRect* q_abstractbutton_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QAbstractButton* self ```
QRect* q_abstractbutton_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QAbstractButton* self ```
QRegion* q_abstractbutton_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QAbstractButton* self ```
QSize* q_abstractbutton_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QAbstractButton* self ```
QSize* q_abstractbutton_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QAbstractButton* self ```
int32_t q_abstractbutton_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QAbstractButton* self ```
int32_t q_abstractbutton_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QAbstractButton* self ```
int32_t q_abstractbutton_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QAbstractButton* self ```
int32_t q_abstractbutton_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QAbstractButton* self, QSize* minimumSize ```
void q_abstractbutton_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QAbstractButton* self, int minw, int minh ```
void q_abstractbutton_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QAbstractButton* self, QSize* maximumSize ```
void q_abstractbutton_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QAbstractButton* self, int maxw, int maxh ```
void q_abstractbutton_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QAbstractButton* self, int minw ```
void q_abstractbutton_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QAbstractButton* self, int minh ```
void q_abstractbutton_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QAbstractButton* self, int maxw ```
void q_abstractbutton_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QAbstractButton* self, int maxh ```
void q_abstractbutton_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QAbstractButton* self ```
QSize* q_abstractbutton_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QAbstractButton* self, QSize* sizeIncrement ```
void q_abstractbutton_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QAbstractButton* self, int w, int h ```
void q_abstractbutton_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QAbstractButton* self ```
QSize* q_abstractbutton_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QAbstractButton* self, QSize* baseSize ```
void q_abstractbutton_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QAbstractButton* self, int basew, int baseh ```
void q_abstractbutton_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QAbstractButton* self, QSize* fixedSize ```
void q_abstractbutton_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QAbstractButton* self, int w, int h ```
void q_abstractbutton_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QAbstractButton* self, int w ```
void q_abstractbutton_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QAbstractButton* self, int h ```
void q_abstractbutton_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QAbstractButton* self, QPointF* param1 ```
QPointF* q_abstractbutton_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QAbstractButton* self, QPoint* param1 ```
QPoint* q_abstractbutton_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QAbstractButton* self, QPointF* param1 ```
QPointF* q_abstractbutton_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QAbstractButton* self, QPoint* param1 ```
QPoint* q_abstractbutton_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QAbstractButton* self, QPointF* param1 ```
QPointF* q_abstractbutton_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QAbstractButton* self, QPoint* param1 ```
QPoint* q_abstractbutton_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QAbstractButton* self, QPointF* param1 ```
QPointF* q_abstractbutton_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QAbstractButton* self, QPoint* param1 ```
QPoint* q_abstractbutton_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QAbstractButton* self, QWidget* param1, QPointF* param2 ```
QPointF* q_abstractbutton_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QAbstractButton* self, QWidget* param1, QPoint* param2 ```
QPoint* q_abstractbutton_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QAbstractButton* self, QWidget* param1, QPointF* param2 ```
QPointF* q_abstractbutton_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QAbstractButton* self, QWidget* param1, QPoint* param2 ```
QPoint* q_abstractbutton_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QAbstractButton* self ```
QWidget* q_abstractbutton_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QAbstractButton* self ```
QWidget* q_abstractbutton_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QAbstractButton* self ```
QWidget* q_abstractbutton_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QAbstractButton* self ```
QPalette* q_abstractbutton_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QAbstractButton* self, QPalette* palette ```
void q_abstractbutton_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QAbstractButton* self, enum QPalette__ColorRole backgroundRole ```
void q_abstractbutton_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QAbstractButton* self ```
int64_t q_abstractbutton_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QAbstractButton* self, enum QPalette__ColorRole foregroundRole ```
void q_abstractbutton_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QAbstractButton* self ```
int64_t q_abstractbutton_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QAbstractButton* self ```
QFont* q_abstractbutton_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QAbstractButton* self, QFont* font ```
void q_abstractbutton_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QAbstractButton* self ```
QFontMetrics* q_abstractbutton_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QAbstractButton* self ```
QFontInfo* q_abstractbutton_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QAbstractButton* self ```
QCursor* q_abstractbutton_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QAbstractButton* self, QCursor* cursor ```
void q_abstractbutton_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QAbstractButton* self, bool enable ```
void q_abstractbutton_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QAbstractButton* self, bool enable ```
void q_abstractbutton_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QAbstractButton* self, QBitmap* mask ```
void q_abstractbutton_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QAbstractButton* self, QRegion* mask ```
void q_abstractbutton_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QAbstractButton* self ```
QRegion* q_abstractbutton_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractButton* self, QPaintDevice* target ```
void q_abstractbutton_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractButton* self, QPainter* painter ```
void q_abstractbutton_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QAbstractButton* self ```
QPixmap* q_abstractbutton_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QAbstractButton* self ```
QGraphicsEffect* q_abstractbutton_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QAbstractButton* self, QGraphicsEffect* effect ```
void q_abstractbutton_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QAbstractButton* self, enum Qt__GestureType typeVal ```
void q_abstractbutton_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QAbstractButton* self, enum Qt__GestureType typeVal ```
void q_abstractbutton_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QAbstractButton* self, const char* windowTitle ```
void q_abstractbutton_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QAbstractButton* self, const char* styleSheet ```
void q_abstractbutton_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QAbstractButton* self ```
const char* q_abstractbutton_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QAbstractButton* self ```
const char* q_abstractbutton_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QAbstractButton* self, QIcon* icon ```
void q_abstractbutton_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QAbstractButton* self ```
QIcon* q_abstractbutton_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QAbstractButton* self, const char* windowIconText ```
void q_abstractbutton_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QAbstractButton* self ```
const char* q_abstractbutton_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QAbstractButton* self, const char* windowRole ```
void q_abstractbutton_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QAbstractButton* self ```
const char* q_abstractbutton_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QAbstractButton* self, const char* filePath ```
void q_abstractbutton_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QAbstractButton* self ```
const char* q_abstractbutton_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QAbstractButton* self, double level ```
void q_abstractbutton_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QAbstractButton* self ```
double q_abstractbutton_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QAbstractButton* self, const char* toolTip ```
void q_abstractbutton_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QAbstractButton* self ```
const char* q_abstractbutton_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QAbstractButton* self, int msec ```
void q_abstractbutton_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QAbstractButton* self ```
int32_t q_abstractbutton_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QAbstractButton* self, const char* statusTip ```
void q_abstractbutton_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QAbstractButton* self ```
const char* q_abstractbutton_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QAbstractButton* self, const char* whatsThis ```
void q_abstractbutton_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QAbstractButton* self ```
const char* q_abstractbutton_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QAbstractButton* self ```
const char* q_abstractbutton_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QAbstractButton* self, const char* name ```
void q_abstractbutton_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QAbstractButton* self ```
const char* q_abstractbutton_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QAbstractButton* self, const char* description ```
void q_abstractbutton_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QAbstractButton* self, enum Qt__LayoutDirection direction ```
void q_abstractbutton_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QAbstractButton* self ```
int64_t q_abstractbutton_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QAbstractButton* self, QLocale* locale ```
void q_abstractbutton_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QAbstractButton* self ```
QLocale* q_abstractbutton_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QAbstractButton* self, enum Qt__FocusReason reason ```
void q_abstractbutton_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QAbstractButton* self ```
int64_t q_abstractbutton_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QAbstractButton* self, enum Qt__FocusPolicy policy ```
void q_abstractbutton_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_abstractbutton_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QAbstractButton* self, QWidget* focusProxy ```
void q_abstractbutton_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QAbstractButton* self ```
QWidget* q_abstractbutton_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QAbstractButton* self ```
int64_t q_abstractbutton_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QAbstractButton* self, enum Qt__ContextMenuPolicy policy ```
void q_abstractbutton_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QAbstractButton* self, QCursor* param1 ```
void q_abstractbutton_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QAbstractButton* self, QKeySequence* key ```
int32_t q_abstractbutton_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QAbstractButton* self, int id ```
void q_abstractbutton_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QAbstractButton* self, int id ```
void q_abstractbutton_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QAbstractButton* self, int id ```
void q_abstractbutton_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_abstractbutton_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_abstractbutton_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QAbstractButton* self, bool enable ```
void q_abstractbutton_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QAbstractButton* self ```
QGraphicsProxyWidget* q_abstractbutton_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QAbstractButton* self, int x, int y, int w, int h ```
void q_abstractbutton_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QAbstractButton* self, QRect* param1 ```
void q_abstractbutton_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QAbstractButton* self, QRegion* param1 ```
void q_abstractbutton_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QAbstractButton* self, int x, int y, int w, int h ```
void q_abstractbutton_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QAbstractButton* self, QRect* param1 ```
void q_abstractbutton_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QAbstractButton* self, QRegion* param1 ```
void q_abstractbutton_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QAbstractButton* self, bool hidden ```
void q_abstractbutton_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QAbstractButton* self, QWidget* param1 ```
void q_abstractbutton_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QAbstractButton* self, int x, int y ```
void q_abstractbutton_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QAbstractButton* self, QPoint* param1 ```
void q_abstractbutton_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QAbstractButton* self, int w, int h ```
void q_abstractbutton_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QAbstractButton* self, QSize* param1 ```
void q_abstractbutton_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QAbstractButton* self, int x, int y, int w, int h ```
void q_abstractbutton_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QAbstractButton* self, QRect* geometry ```
void q_abstractbutton_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QAbstractButton* self ```
char* q_abstractbutton_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QAbstractButton* self, const char* geometry ```
bool q_abstractbutton_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QAbstractButton* self, QWidget* param1 ```
bool q_abstractbutton_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QAbstractButton* self ```
int64_t q_abstractbutton_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QAbstractButton* self, int state ```
void q_abstractbutton_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QAbstractButton* self, int state ```
void q_abstractbutton_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QAbstractButton* self ```
QSizePolicy* q_abstractbutton_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QAbstractButton* self, QSizePolicy* sizePolicy ```
void q_abstractbutton_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QAbstractButton* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_abstractbutton_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QAbstractButton* self ```
QRegion* q_abstractbutton_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QAbstractButton* self, int left, int top, int right, int bottom ```
void q_abstractbutton_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QAbstractButton* self, QMargins* margins ```
void q_abstractbutton_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QAbstractButton* self ```
QMargins* q_abstractbutton_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QAbstractButton* self ```
QRect* q_abstractbutton_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QAbstractButton* self ```
QLayout* q_abstractbutton_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QAbstractButton* self, QLayout* layout ```
void q_abstractbutton_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QAbstractButton* self, QWidget* parent ```
void q_abstractbutton_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QAbstractButton* self, QWidget* parent, int f ```
void q_abstractbutton_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QAbstractButton* self, int dx, int dy ```
void q_abstractbutton_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QAbstractButton* self, int dx, int dy, QRect* param3 ```
void q_abstractbutton_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QAbstractButton* self ```
QWidget* q_abstractbutton_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QAbstractButton* self ```
QWidget* q_abstractbutton_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QAbstractButton* self ```
QWidget* q_abstractbutton_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QAbstractButton* self, bool on ```
void q_abstractbutton_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QAbstractButton* self, QAction* action ```
void q_abstractbutton_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QAbstractButton* self, QAction* actions[] ```
void q_abstractbutton_add_actions(void* self, void* actions[]) {
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
/// ``` QAbstractButton* self, QAction* before, QAction* actions[] ```
void q_abstractbutton_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QAbstractButton* self, QAction* before, QAction* action ```
void q_abstractbutton_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QAbstractButton* self, QAction* action ```
void q_abstractbutton_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QAbstractButton* self ```
libqt_list /* of QAction* */ q_abstractbutton_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QAbstractButton* self, const char* text ```
QAction* q_abstractbutton_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QAbstractButton* self, QIcon* icon, const char* text ```
QAction* q_abstractbutton_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QAbstractButton* self, const char* text, QKeySequence* shortcut ```
QAction* q_abstractbutton_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QAbstractButton* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_abstractbutton_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QAbstractButton* self ```
QWidget* q_abstractbutton_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QAbstractButton* self, int typeVal ```
void q_abstractbutton_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QAbstractButton* self ```
int64_t q_abstractbutton_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QAbstractButton* self, enum Qt__WindowType param1 ```
void q_abstractbutton_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QAbstractButton* self, int typeVal ```
void q_abstractbutton_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QAbstractButton* self ```
int64_t q_abstractbutton_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_abstractbutton_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QAbstractButton* self, int x, int y ```
QWidget* q_abstractbutton_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QAbstractButton* self, QPoint* p ```
QWidget* q_abstractbutton_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QAbstractButton* self, enum Qt__WidgetAttribute param1 ```
void q_abstractbutton_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QAbstractButton* self, enum Qt__WidgetAttribute param1 ```
bool q_abstractbutton_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QAbstractButton* self, QWidget* child ```
bool q_abstractbutton_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QAbstractButton* self, bool enabled ```
void q_abstractbutton_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QAbstractButton* self ```
QBackingStore* q_abstractbutton_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QAbstractButton* self ```
QWindow* q_abstractbutton_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QAbstractButton* self ```
QScreen* q_abstractbutton_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QAbstractButton* self, QScreen* screen ```
void q_abstractbutton_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_abstractbutton_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QAbstractButton* self, const char* title ```
void q_abstractbutton_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QAbstractButton* self, void (*slot)(QWidget*, const char*) ```
void q_abstractbutton_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QAbstractButton* self, QIcon* icon ```
void q_abstractbutton_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QAbstractButton* self, void (*slot)(QWidget*, QIcon*) ```
void q_abstractbutton_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QAbstractButton* self, const char* iconText ```
void q_abstractbutton_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QAbstractButton* self, void (*slot)(QWidget*, const char*) ```
void q_abstractbutton_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QAbstractButton* self, QPoint* pos ```
void q_abstractbutton_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QAbstractButton* self, void (*slot)(QWidget*, QPoint*) ```
void q_abstractbutton_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QAbstractButton* self ```
int64_t q_abstractbutton_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QAbstractButton* self, int hints ```
void q_abstractbutton_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractButton* self, QPaintDevice* target, QPoint* targetOffset ```
void q_abstractbutton_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractButton* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_abstractbutton_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractButton* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_abstractbutton_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractButton* self, QPainter* painter, QPoint* targetOffset ```
void q_abstractbutton_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractButton* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_abstractbutton_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractButton* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_abstractbutton_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QAbstractButton* self, QRect* rectangle ```
QPixmap* q_abstractbutton_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QAbstractButton* self, enum Qt__GestureType typeVal, int flags ```
void q_abstractbutton_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QAbstractButton* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_abstractbutton_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QAbstractButton* self, int id, bool enable ```
void q_abstractbutton_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QAbstractButton* self, int id, bool enable ```
void q_abstractbutton_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QAbstractButton* self, enum Qt__WindowType param1, bool on ```
void q_abstractbutton_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QAbstractButton* self, enum Qt__WidgetAttribute param1, bool on ```
void q_abstractbutton_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_abstractbutton_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_abstractbutton_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAbstractButton* self ```
const char* q_abstractbutton_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAbstractButton* self, const char* name ```
void q_abstractbutton_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAbstractButton* self, bool b ```
bool q_abstractbutton_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAbstractButton* self ```
QThread* q_abstractbutton_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractButton* self, QThread* thread ```
void q_abstractbutton_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractButton* self, int interval ```
int32_t q_abstractbutton_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractButton* self, int id ```
void q_abstractbutton_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAbstractButton* self ```
libqt_list /* of QObject* */ q_abstractbutton_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAbstractButton* self, QObject* filterObj ```
void q_abstractbutton_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAbstractButton* self, QObject* obj ```
void q_abstractbutton_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_abstractbutton_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractButton* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_abstractbutton_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_abstractbutton_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_abstractbutton_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAbstractButton* self, const char* name, QVariant* value ```
bool q_abstractbutton_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAbstractButton* self, const char* name ```
QVariant* q_abstractbutton_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAbstractButton* self ```
const char** q_abstractbutton_dynamic_property_names(void* self) {
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
/// ``` QAbstractButton* self ```
QBindingStorage* q_abstractbutton_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractButton* self ```
QBindingStorage* q_abstractbutton_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QAbstractButton* self, void (*slot)(QObject*) ```
void q_abstractbutton_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAbstractButton* self ```
QObject* q_abstractbutton_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAbstractButton* self, const char* classname ```
bool q_abstractbutton_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractButton* self, int interval, enum Qt__TimerType timerType ```
int32_t q_abstractbutton_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractbutton_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractButton* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractbutton_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractButton* self, QObject* param1 ```
void q_abstractbutton_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QAbstractButton* self, void (*slot)(QObject*, QObject*) ```
void q_abstractbutton_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QAbstractButton* self ```
int32_t q_abstractbutton_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QAbstractButton* self ```
int32_t q_abstractbutton_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QAbstractButton* self ```
int32_t q_abstractbutton_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QAbstractButton* self ```
int32_t q_abstractbutton_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QAbstractButton* self ```
int32_t q_abstractbutton_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QAbstractButton* self ```
int32_t q_abstractbutton_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QAbstractButton* self ```
double q_abstractbutton_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QAbstractButton* self ```
double q_abstractbutton_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QAbstractButton* self ```
int32_t q_abstractbutton_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QAbstractButton* self ```
int32_t q_abstractbutton_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_abstractbutton_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self ```
int32_t q_abstractbutton_dev_type(void* self) {
    return QAbstractButton_DevType((QAbstractButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self ```
int32_t q_abstractbutton_qbase_dev_type(void* self) {
    return QAbstractButton_QBaseDevType((QAbstractButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, int32_t (*slot)() ```
void q_abstractbutton_on_dev_type(void* self, int32_t (*slot)()) {
    QAbstractButton_OnDevType((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, bool visible ```
void q_abstractbutton_set_visible(void* self, bool visible) {
    QAbstractButton_SetVisible((QAbstractButton*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, bool visible ```
void q_abstractbutton_qbase_set_visible(void* self, bool visible) {
    QAbstractButton_QBaseSetVisible((QAbstractButton*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, bool) ```
void q_abstractbutton_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QAbstractButton_OnSetVisible((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self ```
QSize* q_abstractbutton_size_hint(void* self) {
    return QAbstractButton_SizeHint((QAbstractButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self ```
QSize* q_abstractbutton_qbase_size_hint(void* self) {
    return QAbstractButton_QBaseSizeHint((QAbstractButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, QSize* (*slot)() ```
void q_abstractbutton_on_size_hint(void* self, QSize* (*slot)()) {
    QAbstractButton_OnSizeHint((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self ```
QSize* q_abstractbutton_minimum_size_hint(void* self) {
    return QAbstractButton_MinimumSizeHint((QAbstractButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self ```
QSize* q_abstractbutton_qbase_minimum_size_hint(void* self) {
    return QAbstractButton_QBaseMinimumSizeHint((QAbstractButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, QSize* (*slot)() ```
void q_abstractbutton_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QAbstractButton_OnMinimumSizeHint((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, int param1 ```
int32_t q_abstractbutton_height_for_width(void* self, int param1) {
    return QAbstractButton_HeightForWidth((QAbstractButton*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, int param1 ```
int32_t q_abstractbutton_qbase_height_for_width(void* self, int param1) {
    return QAbstractButton_QBaseHeightForWidth((QAbstractButton*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, int32_t (*slot)(QAbstractButton*, int) ```
void q_abstractbutton_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QAbstractButton_OnHeightForWidth((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_has_height_for_width(void* self) {
    return QAbstractButton_HasHeightForWidth((QAbstractButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_qbase_has_height_for_width(void* self) {
    return QAbstractButton_QBaseHasHeightForWidth((QAbstractButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, bool (*slot)() ```
void q_abstractbutton_on_has_height_for_width(void* self, bool (*slot)()) {
    QAbstractButton_OnHasHeightForWidth((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self ```
QPaintEngine* q_abstractbutton_paint_engine(void* self) {
    return QAbstractButton_PaintEngine((QAbstractButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self ```
QPaintEngine* q_abstractbutton_qbase_paint_engine(void* self) {
    return QAbstractButton_QBasePaintEngine((QAbstractButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, QPaintEngine* (*slot)() ```
void q_abstractbutton_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QAbstractButton_OnPaintEngine((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, QMouseEvent* event ```
void q_abstractbutton_mouse_double_click_event(void* self, void* event) {
    QAbstractButton_MouseDoubleClickEvent((QAbstractButton*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, QMouseEvent* event ```
void q_abstractbutton_qbase_mouse_double_click_event(void* self, void* event) {
    QAbstractButton_QBaseMouseDoubleClickEvent((QAbstractButton*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QMouseEvent*) ```
void q_abstractbutton_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnMouseDoubleClickEvent((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, QWheelEvent* event ```
void q_abstractbutton_wheel_event(void* self, void* event) {
    QAbstractButton_WheelEvent((QAbstractButton*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, QWheelEvent* event ```
void q_abstractbutton_qbase_wheel_event(void* self, void* event) {
    QAbstractButton_QBaseWheelEvent((QAbstractButton*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QWheelEvent*) ```
void q_abstractbutton_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnWheelEvent((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, QEnterEvent* event ```
void q_abstractbutton_enter_event(void* self, void* event) {
    QAbstractButton_EnterEvent((QAbstractButton*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, QEnterEvent* event ```
void q_abstractbutton_qbase_enter_event(void* self, void* event) {
    QAbstractButton_QBaseEnterEvent((QAbstractButton*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QEnterEvent*) ```
void q_abstractbutton_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnEnterEvent((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, QEvent* event ```
void q_abstractbutton_leave_event(void* self, void* event) {
    QAbstractButton_LeaveEvent((QAbstractButton*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, QEvent* event ```
void q_abstractbutton_qbase_leave_event(void* self, void* event) {
    QAbstractButton_QBaseLeaveEvent((QAbstractButton*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QEvent*) ```
void q_abstractbutton_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnLeaveEvent((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, QMoveEvent* event ```
void q_abstractbutton_move_event(void* self, void* event) {
    QAbstractButton_MoveEvent((QAbstractButton*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, QMoveEvent* event ```
void q_abstractbutton_qbase_move_event(void* self, void* event) {
    QAbstractButton_QBaseMoveEvent((QAbstractButton*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QMoveEvent*) ```
void q_abstractbutton_on_move_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnMoveEvent((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, QResizeEvent* event ```
void q_abstractbutton_resize_event(void* self, void* event) {
    QAbstractButton_ResizeEvent((QAbstractButton*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, QResizeEvent* event ```
void q_abstractbutton_qbase_resize_event(void* self, void* event) {
    QAbstractButton_QBaseResizeEvent((QAbstractButton*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QResizeEvent*) ```
void q_abstractbutton_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnResizeEvent((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, QCloseEvent* event ```
void q_abstractbutton_close_event(void* self, void* event) {
    QAbstractButton_CloseEvent((QAbstractButton*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, QCloseEvent* event ```
void q_abstractbutton_qbase_close_event(void* self, void* event) {
    QAbstractButton_QBaseCloseEvent((QAbstractButton*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QCloseEvent*) ```
void q_abstractbutton_on_close_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnCloseEvent((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, QContextMenuEvent* event ```
void q_abstractbutton_context_menu_event(void* self, void* event) {
    QAbstractButton_ContextMenuEvent((QAbstractButton*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, QContextMenuEvent* event ```
void q_abstractbutton_qbase_context_menu_event(void* self, void* event) {
    QAbstractButton_QBaseContextMenuEvent((QAbstractButton*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QContextMenuEvent*) ```
void q_abstractbutton_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnContextMenuEvent((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, QTabletEvent* event ```
void q_abstractbutton_tablet_event(void* self, void* event) {
    QAbstractButton_TabletEvent((QAbstractButton*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, QTabletEvent* event ```
void q_abstractbutton_qbase_tablet_event(void* self, void* event) {
    QAbstractButton_QBaseTabletEvent((QAbstractButton*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QTabletEvent*) ```
void q_abstractbutton_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnTabletEvent((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, QActionEvent* event ```
void q_abstractbutton_action_event(void* self, void* event) {
    QAbstractButton_ActionEvent((QAbstractButton*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, QActionEvent* event ```
void q_abstractbutton_qbase_action_event(void* self, void* event) {
    QAbstractButton_QBaseActionEvent((QAbstractButton*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QActionEvent*) ```
void q_abstractbutton_on_action_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnActionEvent((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, QDragEnterEvent* event ```
void q_abstractbutton_drag_enter_event(void* self, void* event) {
    QAbstractButton_DragEnterEvent((QAbstractButton*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, QDragEnterEvent* event ```
void q_abstractbutton_qbase_drag_enter_event(void* self, void* event) {
    QAbstractButton_QBaseDragEnterEvent((QAbstractButton*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QDragEnterEvent*) ```
void q_abstractbutton_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnDragEnterEvent((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, QDragMoveEvent* event ```
void q_abstractbutton_drag_move_event(void* self, void* event) {
    QAbstractButton_DragMoveEvent((QAbstractButton*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, QDragMoveEvent* event ```
void q_abstractbutton_qbase_drag_move_event(void* self, void* event) {
    QAbstractButton_QBaseDragMoveEvent((QAbstractButton*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QDragMoveEvent*) ```
void q_abstractbutton_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnDragMoveEvent((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, QDragLeaveEvent* event ```
void q_abstractbutton_drag_leave_event(void* self, void* event) {
    QAbstractButton_DragLeaveEvent((QAbstractButton*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, QDragLeaveEvent* event ```
void q_abstractbutton_qbase_drag_leave_event(void* self, void* event) {
    QAbstractButton_QBaseDragLeaveEvent((QAbstractButton*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QDragLeaveEvent*) ```
void q_abstractbutton_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnDragLeaveEvent((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, QDropEvent* event ```
void q_abstractbutton_drop_event(void* self, void* event) {
    QAbstractButton_DropEvent((QAbstractButton*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, QDropEvent* event ```
void q_abstractbutton_qbase_drop_event(void* self, void* event) {
    QAbstractButton_QBaseDropEvent((QAbstractButton*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QDropEvent*) ```
void q_abstractbutton_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnDropEvent((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, QShowEvent* event ```
void q_abstractbutton_show_event(void* self, void* event) {
    QAbstractButton_ShowEvent((QAbstractButton*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, QShowEvent* event ```
void q_abstractbutton_qbase_show_event(void* self, void* event) {
    QAbstractButton_QBaseShowEvent((QAbstractButton*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QShowEvent*) ```
void q_abstractbutton_on_show_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnShowEvent((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, QHideEvent* event ```
void q_abstractbutton_hide_event(void* self, void* event) {
    QAbstractButton_HideEvent((QAbstractButton*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, QHideEvent* event ```
void q_abstractbutton_qbase_hide_event(void* self, void* event) {
    QAbstractButton_QBaseHideEvent((QAbstractButton*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QHideEvent*) ```
void q_abstractbutton_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnHideEvent((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, const char* eventType, void* message, intptr_t* result ```
bool q_abstractbutton_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QAbstractButton_NativeEvent((QAbstractButton*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, const char* eventType, void* message, intptr_t* result ```
bool q_abstractbutton_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QAbstractButton_QBaseNativeEvent((QAbstractButton*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, bool (*slot)(QAbstractButton*, const char*, void*, intptr_t*) ```
void q_abstractbutton_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QAbstractButton_OnNativeEvent((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_abstractbutton_metric(void* self, int64_t param1) {
    return QAbstractButton_Metric((QAbstractButton*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_abstractbutton_qbase_metric(void* self, int64_t param1) {
    return QAbstractButton_QBaseMetric((QAbstractButton*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, int32_t (*slot)(QAbstractButton*, enum QPaintDevice__PaintDeviceMetric) ```
void q_abstractbutton_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QAbstractButton_OnMetric((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, QPainter* painter ```
void q_abstractbutton_init_painter(void* self, void* painter) {
    QAbstractButton_InitPainter((QAbstractButton*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, QPainter* painter ```
void q_abstractbutton_qbase_init_painter(void* self, void* painter) {
    QAbstractButton_QBaseInitPainter((QAbstractButton*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QPainter*) ```
void q_abstractbutton_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnInitPainter((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, QPoint* offset ```
QPaintDevice* q_abstractbutton_redirected(void* self, void* offset) {
    return QAbstractButton_Redirected((QAbstractButton*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, QPoint* offset ```
QPaintDevice* q_abstractbutton_qbase_redirected(void* self, void* offset) {
    return QAbstractButton_QBaseRedirected((QAbstractButton*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, QPaintDevice* (*slot)(QAbstractButton*, QPoint*) ```
void q_abstractbutton_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QAbstractButton_OnRedirected((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self ```
QPainter* q_abstractbutton_shared_painter(void* self) {
    return QAbstractButton_SharedPainter((QAbstractButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self ```
QPainter* q_abstractbutton_qbase_shared_painter(void* self) {
    return QAbstractButton_QBaseSharedPainter((QAbstractButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, QPainter* (*slot)() ```
void q_abstractbutton_on_shared_painter(void* self, QPainter* (*slot)()) {
    QAbstractButton_OnSharedPainter((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, QInputMethodEvent* param1 ```
void q_abstractbutton_input_method_event(void* self, void* param1) {
    QAbstractButton_InputMethodEvent((QAbstractButton*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, QInputMethodEvent* param1 ```
void q_abstractbutton_qbase_input_method_event(void* self, void* param1) {
    QAbstractButton_QBaseInputMethodEvent((QAbstractButton*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QInputMethodEvent*) ```
void q_abstractbutton_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnInputMethodEvent((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_abstractbutton_input_method_query(void* self, int64_t param1) {
    return QAbstractButton_InputMethodQuery((QAbstractButton*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_abstractbutton_qbase_input_method_query(void* self, int64_t param1) {
    return QAbstractButton_QBaseInputMethodQuery((QAbstractButton*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, QVariant* (*slot)(QAbstractButton*, enum Qt__InputMethodQuery) ```
void q_abstractbutton_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QAbstractButton_OnInputMethodQuery((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, bool next ```
bool q_abstractbutton_focus_next_prev_child(void* self, bool next) {
    return QAbstractButton_FocusNextPrevChild((QAbstractButton*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, bool next ```
bool q_abstractbutton_qbase_focus_next_prev_child(void* self, bool next) {
    return QAbstractButton_QBaseFocusNextPrevChild((QAbstractButton*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, bool (*slot)(QAbstractButton*, bool) ```
void q_abstractbutton_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QAbstractButton_OnFocusNextPrevChild((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, QObject* watched, QEvent* event ```
bool q_abstractbutton_event_filter(void* self, void* watched, void* event) {
    return QAbstractButton_EventFilter((QAbstractButton*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, QObject* watched, QEvent* event ```
bool q_abstractbutton_qbase_event_filter(void* self, void* watched, void* event) {
    return QAbstractButton_QBaseEventFilter((QAbstractButton*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, bool (*slot)(QAbstractButton*, QObject*, QEvent*) ```
void q_abstractbutton_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAbstractButton_OnEventFilter((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, QChildEvent* event ```
void q_abstractbutton_child_event(void* self, void* event) {
    QAbstractButton_ChildEvent((QAbstractButton*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, QChildEvent* event ```
void q_abstractbutton_qbase_child_event(void* self, void* event) {
    QAbstractButton_QBaseChildEvent((QAbstractButton*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QChildEvent*) ```
void q_abstractbutton_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnChildEvent((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, QEvent* event ```
void q_abstractbutton_custom_event(void* self, void* event) {
    QAbstractButton_CustomEvent((QAbstractButton*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, QEvent* event ```
void q_abstractbutton_qbase_custom_event(void* self, void* event) {
    QAbstractButton_QBaseCustomEvent((QAbstractButton*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QEvent*) ```
void q_abstractbutton_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnCustomEvent((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, QMetaMethod* signal ```
void q_abstractbutton_connect_notify(void* self, void* signal) {
    QAbstractButton_ConnectNotify((QAbstractButton*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, QMetaMethod* signal ```
void q_abstractbutton_qbase_connect_notify(void* self, void* signal) {
    QAbstractButton_QBaseConnectNotify((QAbstractButton*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QMetaMethod*) ```
void q_abstractbutton_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnConnectNotify((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, QMetaMethod* signal ```
void q_abstractbutton_disconnect_notify(void* self, void* signal) {
    QAbstractButton_DisconnectNotify((QAbstractButton*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, QMetaMethod* signal ```
void q_abstractbutton_qbase_disconnect_notify(void* self, void* signal) {
    QAbstractButton_QBaseDisconnectNotify((QAbstractButton*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, void (*slot)(QAbstractButton*, QMetaMethod*) ```
void q_abstractbutton_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnDisconnectNotify((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_update_micro_focus(void* self) {
    QAbstractButton_UpdateMicroFocus((QAbstractButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_qbase_update_micro_focus(void* self) {
    QAbstractButton_QBaseUpdateMicroFocus((QAbstractButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, void (*slot)() ```
void q_abstractbutton_on_update_micro_focus(void* self, void (*slot)()) {
    QAbstractButton_OnUpdateMicroFocus((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_create(void* self) {
    QAbstractButton_Create((QAbstractButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_qbase_create(void* self) {
    QAbstractButton_QBaseCreate((QAbstractButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, void (*slot)() ```
void q_abstractbutton_on_create(void* self, void (*slot)()) {
    QAbstractButton_OnCreate((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_destroy(void* self) {
    QAbstractButton_Destroy((QAbstractButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_qbase_destroy(void* self) {
    QAbstractButton_QBaseDestroy((QAbstractButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, void (*slot)() ```
void q_abstractbutton_on_destroy(void* self, void (*slot)()) {
    QAbstractButton_OnDestroy((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_focus_next_child(void* self) {
    return QAbstractButton_FocusNextChild((QAbstractButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_qbase_focus_next_child(void* self) {
    return QAbstractButton_QBaseFocusNextChild((QAbstractButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, bool (*slot)() ```
void q_abstractbutton_on_focus_next_child(void* self, bool (*slot)()) {
    QAbstractButton_OnFocusNextChild((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_focus_previous_child(void* self) {
    return QAbstractButton_FocusPreviousChild((QAbstractButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self ```
bool q_abstractbutton_qbase_focus_previous_child(void* self) {
    return QAbstractButton_QBaseFocusPreviousChild((QAbstractButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, bool (*slot)() ```
void q_abstractbutton_on_focus_previous_child(void* self, bool (*slot)()) {
    QAbstractButton_OnFocusPreviousChild((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self ```
QObject* q_abstractbutton_sender(void* self) {
    return QAbstractButton_Sender((QAbstractButton*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self ```
QObject* q_abstractbutton_qbase_sender(void* self) {
    return QAbstractButton_QBaseSender((QAbstractButton*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, QObject* (*slot)() ```
void q_abstractbutton_on_sender(void* self, QObject* (*slot)()) {
    QAbstractButton_OnSender((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self ```
int32_t q_abstractbutton_sender_signal_index(void* self) {
    return QAbstractButton_SenderSignalIndex((QAbstractButton*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self ```
int32_t q_abstractbutton_qbase_sender_signal_index(void* self) {
    return QAbstractButton_QBaseSenderSignalIndex((QAbstractButton*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, int32_t (*slot)() ```
void q_abstractbutton_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAbstractButton_OnSenderSignalIndex((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, const char* signal ```
int32_t q_abstractbutton_receivers(void* self, const char* signal) {
    return QAbstractButton_Receivers((QAbstractButton*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, const char* signal ```
int32_t q_abstractbutton_qbase_receivers(void* self, const char* signal) {
    return QAbstractButton_QBaseReceivers((QAbstractButton*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, int32_t (*slot)(QAbstractButton*, const char*) ```
void q_abstractbutton_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAbstractButton_OnReceivers((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractButton* self, QMetaMethod* signal ```
bool q_abstractbutton_is_signal_connected(void* self, void* signal) {
    return QAbstractButton_IsSignalConnected((QAbstractButton*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractButton* self, QMetaMethod* signal ```
bool q_abstractbutton_qbase_is_signal_connected(void* self, void* signal) {
    return QAbstractButton_QBaseIsSignalConnected((QAbstractButton*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractButton* self, bool (*slot)(QAbstractButton*, QMetaMethod*) ```
void q_abstractbutton_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAbstractButton_OnIsSignalConnected((QAbstractButton*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAbstractButton* self ```
void q_abstractbutton_delete(void* self) {
    QAbstractButton_Delete((QAbstractButton*)(self));
}