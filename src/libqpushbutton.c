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
#include "libqmenu.hpp"
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
#include "libqpushbutton.hpp"
#include "libqpushbutton.h"

/// https://doc.qt.io/qt-6/qpushbutton.html

/// q_pushbutton_new constructs a new QPushButton object.
///
/// ``` QWidget* parent ```
QPushButton* q_pushbutton_new(void* parent) {
    return QPushButton_new((QWidget*)parent);
}

/// q_pushbutton_new2 constructs a new QPushButton object.
///
///
QPushButton* q_pushbutton_new2() {
    return QPushButton_new2();
}

/// q_pushbutton_new3 constructs a new QPushButton object.
///
/// ``` const char* text ```
QPushButton* q_pushbutton_new3(const char* text) {
    return QPushButton_new3(qstring(text));
}

/// q_pushbutton_new4 constructs a new QPushButton object.
///
/// ``` QIcon* icon, const char* text ```
QPushButton* q_pushbutton_new4(void* icon, const char* text) {
    return QPushButton_new4((QIcon*)icon, qstring(text));
}

/// q_pushbutton_new5 constructs a new QPushButton object.
///
/// ``` const char* text, QWidget* parent ```
QPushButton* q_pushbutton_new5(const char* text, void* parent) {
    return QPushButton_new5(qstring(text), (QWidget*)parent);
}

/// q_pushbutton_new6 constructs a new QPushButton object.
///
/// ``` QIcon* icon, const char* text, QWidget* parent ```
QPushButton* q_pushbutton_new6(void* icon, const char* text, void* parent) {
    return QPushButton_new6((QIcon*)icon, qstring(text), (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPushButton* self ```
QMetaObject* q_pushbutton_meta_object(void* self) {
    return QPushButton_MetaObject((QPushButton*)self);
}

/// ``` QPushButton* self, const char* param1 ```
void* q_pushbutton_metacast(void* self, const char* param1) {
    return QPushButton_Metacast((QPushButton*)self, param1);
}

/// ``` QPushButton* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pushbutton_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPushButton_Metacall((QPushButton*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QPushButton* self, int32_t (*slot)(QPushButton*, enum QMetaObject__Call, int, void*) ```
void q_pushbutton_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QPushButton_OnMetacall((QPushButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPushButton* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pushbutton_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPushButton_QBaseMetacall((QPushButton*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_pushbutton_tr(const char* s) {
    libqt_string _str = QPushButton_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#sizeHint)
///
/// ``` QPushButton* self ```
QSize* q_pushbutton_size_hint(void* self) {
    return QPushButton_SizeHint((QPushButton*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPushButton* self, QSize* (*slot)() ```
void q_pushbutton_on_size_hint(void* self, QSize* (*slot)()) {
    QPushButton_OnSizeHint((QPushButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPushButton* self ```
QSize* q_pushbutton_qbase_size_hint(void* self) {
    return QPushButton_QBaseSizeHint((QPushButton*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#minimumSizeHint)
///
/// ``` QPushButton* self ```
QSize* q_pushbutton_minimum_size_hint(void* self) {
    return QPushButton_MinimumSizeHint((QPushButton*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPushButton* self, QSize* (*slot)() ```
void q_pushbutton_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QPushButton_OnMinimumSizeHint((QPushButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPushButton* self ```
QSize* q_pushbutton_qbase_minimum_size_hint(void* self) {
    return QPushButton_QBaseMinimumSizeHint((QPushButton*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#autoDefault)
///
/// ``` QPushButton* self ```
bool q_pushbutton_auto_default(void* self) {
    return QPushButton_AutoDefault((QPushButton*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#setAutoDefault)
///
/// ``` QPushButton* self, bool autoDefault ```
void q_pushbutton_set_auto_default(void* self, bool autoDefault) {
    QPushButton_SetAutoDefault((QPushButton*)self, autoDefault);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#isDefault)
///
/// ``` QPushButton* self ```
bool q_pushbutton_is_default(void* self) {
    return QPushButton_IsDefault((QPushButton*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#setDefault)
///
/// ``` QPushButton* self, bool defaultVal ```
void q_pushbutton_set_default(void* self, bool defaultVal) {
    QPushButton_SetDefault((QPushButton*)self, defaultVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#setMenu)
///
/// ``` QPushButton* self, QMenu* menu ```
void q_pushbutton_set_menu(void* self, void* menu) {
    QPushButton_SetMenu((QPushButton*)self, (QMenu*)menu);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#menu)
///
/// ``` QPushButton* self ```
QMenu* q_pushbutton_menu(void* self) {
    return QPushButton_Menu((QPushButton*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#setFlat)
///
/// ``` QPushButton* self, bool flat ```
void q_pushbutton_set_flat(void* self, bool flat) {
    QPushButton_SetFlat((QPushButton*)self, flat);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#isFlat)
///
/// ``` QPushButton* self ```
bool q_pushbutton_is_flat(void* self) {
    return QPushButton_IsFlat((QPushButton*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#showMenu)
///
/// ``` QPushButton* self ```
void q_pushbutton_show_menu(void* self) {
    QPushButton_ShowMenu((QPushButton*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#event)
///
/// ``` QPushButton* self, QEvent* e ```
bool q_pushbutton_event(void* self, void* e) {
    return QPushButton_Event((QPushButton*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QPushButton* self, bool (*slot)(QPushButton*, QEvent*) ```
void q_pushbutton_on_event(void* self, bool (*slot)(void*, void*)) {
    QPushButton_OnEvent((QPushButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPushButton* self, QEvent* e ```
bool q_pushbutton_qbase_event(void* self, void* e) {
    return QPushButton_QBaseEvent((QPushButton*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#paintEvent)
///
/// ``` QPushButton* self, QPaintEvent* param1 ```
void q_pushbutton_paint_event(void* self, void* param1) {
    QPushButton_PaintEvent((QPushButton*)self, (QPaintEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QPaintEvent*) ```
void q_pushbutton_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnPaintEvent((QPushButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPushButton* self, QPaintEvent* param1 ```
void q_pushbutton_qbase_paint_event(void* self, void* param1) {
    QPushButton_QBasePaintEvent((QPushButton*)self, (QPaintEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#keyPressEvent)
///
/// ``` QPushButton* self, QKeyEvent* param1 ```
void q_pushbutton_key_press_event(void* self, void* param1) {
    QPushButton_KeyPressEvent((QPushButton*)self, (QKeyEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QKeyEvent*) ```
void q_pushbutton_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnKeyPressEvent((QPushButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPushButton* self, QKeyEvent* param1 ```
void q_pushbutton_qbase_key_press_event(void* self, void* param1) {
    QPushButton_QBaseKeyPressEvent((QPushButton*)self, (QKeyEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#focusInEvent)
///
/// ``` QPushButton* self, QFocusEvent* param1 ```
void q_pushbutton_focus_in_event(void* self, void* param1) {
    QPushButton_FocusInEvent((QPushButton*)self, (QFocusEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QFocusEvent*) ```
void q_pushbutton_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnFocusInEvent((QPushButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPushButton* self, QFocusEvent* param1 ```
void q_pushbutton_qbase_focus_in_event(void* self, void* param1) {
    QPushButton_QBaseFocusInEvent((QPushButton*)self, (QFocusEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#focusOutEvent)
///
/// ``` QPushButton* self, QFocusEvent* param1 ```
void q_pushbutton_focus_out_event(void* self, void* param1) {
    QPushButton_FocusOutEvent((QPushButton*)self, (QFocusEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QFocusEvent*) ```
void q_pushbutton_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnFocusOutEvent((QPushButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPushButton* self, QFocusEvent* param1 ```
void q_pushbutton_qbase_focus_out_event(void* self, void* param1) {
    QPushButton_QBaseFocusOutEvent((QPushButton*)self, (QFocusEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#mouseMoveEvent)
///
/// ``` QPushButton* self, QMouseEvent* param1 ```
void q_pushbutton_mouse_move_event(void* self, void* param1) {
    QPushButton_MouseMoveEvent((QPushButton*)self, (QMouseEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QMouseEvent*) ```
void q_pushbutton_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnMouseMoveEvent((QPushButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPushButton* self, QMouseEvent* param1 ```
void q_pushbutton_qbase_mouse_move_event(void* self, void* param1) {
    QPushButton_QBaseMouseMoveEvent((QPushButton*)self, (QMouseEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#initStyleOption)
///
/// ``` QPushButton* self, QStyleOptionButton* option ```
void q_pushbutton_init_style_option(void* self, void* option) {
    QPushButton_InitStyleOption((QPushButton*)self, (QStyleOptionButton*)option);
}

/// Allows for overriding the related default method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QStyleOptionButton*) ```
void q_pushbutton_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnInitStyleOption((QPushButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPushButton* self, QStyleOptionButton* option ```
void q_pushbutton_qbase_init_style_option(void* self, void* option) {
    QPushButton_QBaseInitStyleOption((QPushButton*)self, (QStyleOptionButton*)option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#hitButton)
///
/// ``` QPushButton* self, QPoint* pos ```
bool q_pushbutton_hit_button(void* self, void* pos) {
    return QPushButton_HitButton((QPushButton*)self, (QPoint*)pos);
}

/// Allows for overriding the related default method
///
/// ``` QPushButton* self, bool (*slot)(QPushButton*, QPoint*) ```
void q_pushbutton_on_hit_button(void* self, bool (*slot)(void*, void*)) {
    QPushButton_OnHitButton((QPushButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPushButton* self, QPoint* pos ```
bool q_pushbutton_qbase_hit_button(void* self, void* pos) {
    return QPushButton_QBaseHitButton((QPushButton*)self, (QPoint*)pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_pushbutton_tr2(const char* s, const char* c) {
    libqt_string _str = QPushButton_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_pushbutton_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QPushButton_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setText)
///
/// ``` QPushButton* self, const char* text ```
void q_pushbutton_set_text(void* self, const char* text) {
    QAbstractButton_SetText((QAbstractButton*)self, qstring(text));
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#text)
///
/// ``` QPushButton* self ```
const char* q_pushbutton_text(void* self) {
    libqt_string _str = QAbstractButton_Text((QAbstractButton*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setIcon)
///
/// ``` QPushButton* self, QIcon* icon ```
void q_pushbutton_set_icon(void* self, void* icon) {
    QAbstractButton_SetIcon((QAbstractButton*)self, (QIcon*)icon);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#icon)
///
/// ``` QPushButton* self ```
QIcon* q_pushbutton_icon(void* self) {
    return QAbstractButton_Icon((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#iconSize)
///
/// ``` QPushButton* self ```
QSize* q_pushbutton_icon_size(void* self) {
    return QAbstractButton_IconSize((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setShortcut)
///
/// ``` QPushButton* self, QKeySequence* key ```
void q_pushbutton_set_shortcut(void* self, void* key) {
    QAbstractButton_SetShortcut((QAbstractButton*)self, (QKeySequence*)key);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#shortcut)
///
/// ``` QPushButton* self ```
QKeySequence* q_pushbutton_shortcut(void* self) {
    return QAbstractButton_Shortcut((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setCheckable)
///
/// ``` QPushButton* self, bool checkable ```
void q_pushbutton_set_checkable(void* self, bool checkable) {
    QAbstractButton_SetCheckable((QAbstractButton*)self, checkable);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#isCheckable)
///
/// ``` QPushButton* self ```
bool q_pushbutton_is_checkable(void* self) {
    return QAbstractButton_IsCheckable((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#isChecked)
///
/// ``` QPushButton* self ```
bool q_pushbutton_is_checked(void* self) {
    return QAbstractButton_IsChecked((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setDown)
///
/// ``` QPushButton* self, bool down ```
void q_pushbutton_set_down(void* self, bool down) {
    QAbstractButton_SetDown((QAbstractButton*)self, down);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#isDown)
///
/// ``` QPushButton* self ```
bool q_pushbutton_is_down(void* self) {
    return QAbstractButton_IsDown((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeat)
///
/// ``` QPushButton* self, bool autoRepeat ```
void q_pushbutton_set_auto_repeat(void* self, bool autoRepeat) {
    QAbstractButton_SetAutoRepeat((QAbstractButton*)self, autoRepeat);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeat)
///
/// ``` QPushButton* self ```
bool q_pushbutton_auto_repeat(void* self) {
    return QAbstractButton_AutoRepeat((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeatDelay)
///
/// ``` QPushButton* self, int autoRepeatDelay ```
void q_pushbutton_set_auto_repeat_delay(void* self, int autoRepeatDelay) {
    QAbstractButton_SetAutoRepeatDelay((QAbstractButton*)self, autoRepeatDelay);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeatDelay)
///
/// ``` QPushButton* self ```
int32_t q_pushbutton_auto_repeat_delay(void* self) {
    return QAbstractButton_AutoRepeatDelay((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeatInterval)
///
/// ``` QPushButton* self, int autoRepeatInterval ```
void q_pushbutton_set_auto_repeat_interval(void* self, int autoRepeatInterval) {
    QAbstractButton_SetAutoRepeatInterval((QAbstractButton*)self, autoRepeatInterval);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeatInterval)
///
/// ``` QPushButton* self ```
int32_t q_pushbutton_auto_repeat_interval(void* self) {
    return QAbstractButton_AutoRepeatInterval((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoExclusive)
///
/// ``` QPushButton* self, bool autoExclusive ```
void q_pushbutton_set_auto_exclusive(void* self, bool autoExclusive) {
    QAbstractButton_SetAutoExclusive((QAbstractButton*)self, autoExclusive);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#autoExclusive)
///
/// ``` QPushButton* self ```
bool q_pushbutton_auto_exclusive(void* self) {
    return QAbstractButton_AutoExclusive((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#group)
///
/// ``` QPushButton* self ```
QButtonGroup* q_pushbutton_group(void* self) {
    return QAbstractButton_Group((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setIconSize)
///
/// ``` QPushButton* self, QSize* size ```
void q_pushbutton_set_icon_size(void* self, void* size) {
    QAbstractButton_SetIconSize((QAbstractButton*)self, (QSize*)size);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#animateClick)
///
/// ``` QPushButton* self ```
void q_pushbutton_animate_click(void* self) {
    QAbstractButton_AnimateClick((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#click)
///
/// ``` QPushButton* self ```
void q_pushbutton_click(void* self) {
    QAbstractButton_Click((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#toggle)
///
/// ``` QPushButton* self ```
void q_pushbutton_toggle(void* self) {
    QAbstractButton_Toggle((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setChecked)
///
/// ``` QPushButton* self, bool checked ```
void q_pushbutton_set_checked(void* self, bool checked) {
    QAbstractButton_SetChecked((QAbstractButton*)self, checked);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#pressed)
///
/// ``` QPushButton* self ```
void q_pushbutton_pressed(void* self) {
    QAbstractButton_Pressed((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// ``` QPushButton* self, void (*slot)(QAbstractButton*) ```
void q_pushbutton_on_pressed(void* self, void (*slot)(void*)) {
    QAbstractButton_Connect_Pressed((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#released)
///
/// ``` QPushButton* self ```
void q_pushbutton_released(void* self) {
    QAbstractButton_Released((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// ``` QPushButton* self, void (*slot)(QAbstractButton*) ```
void q_pushbutton_on_released(void* self, void (*slot)(void*)) {
    QAbstractButton_Connect_Released((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// ``` QPushButton* self ```
void q_pushbutton_clicked(void* self) {
    QAbstractButton_Clicked((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// ``` QPushButton* self, void (*slot)(QAbstractButton*) ```
void q_pushbutton_on_clicked(void* self, void (*slot)(void*)) {
    QAbstractButton_Connect_Clicked((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#toggled)
///
/// ``` QPushButton* self, bool checked ```
void q_pushbutton_toggled(void* self, bool checked) {
    QAbstractButton_Toggled((QAbstractButton*)self, checked);
}

/// Inherited from QAbstractButton
///
/// ``` QPushButton* self, void (*slot)(QAbstractButton*, bool) ```
void q_pushbutton_on_toggled(void* self, void (*slot)(void*, bool)) {
    QAbstractButton_Connect_Toggled((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// ``` QPushButton* self, bool checked ```
void q_pushbutton_clicked1(void* self, bool checked) {
    QAbstractButton_Clicked1((QAbstractButton*)self, checked);
}

/// Inherited from QAbstractButton
///
/// ``` QPushButton* self, void (*slot)(QAbstractButton*, bool) ```
void q_pushbutton_on_clicked1(void* self, void (*slot)(void*, bool)) {
    QAbstractButton_Connect_Clicked1((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QPushButton* self ```
uintptr_t q_pushbutton_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QPushButton* self ```
void q_pushbutton_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QPushButton* self ```
uintptr_t q_pushbutton_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QPushButton* self ```
uintptr_t q_pushbutton_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QPushButton* self ```
QStyle* q_pushbutton_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QPushButton* self, QStyle* style ```
void q_pushbutton_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QPushButton* self ```
bool q_pushbutton_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QPushButton* self ```
bool q_pushbutton_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QPushButton* self ```
bool q_pushbutton_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QPushButton* self ```
int64_t q_pushbutton_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QPushButton* self, enum Qt__WindowModality windowModality ```
void q_pushbutton_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QPushButton* self ```
bool q_pushbutton_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QPushButton* self, QWidget* param1 ```
bool q_pushbutton_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QPushButton* self, bool enabled ```
void q_pushbutton_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QPushButton* self, bool disabled ```
void q_pushbutton_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QPushButton* self, bool windowModified ```
void q_pushbutton_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QPushButton* self ```
QRect* q_pushbutton_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QPushButton* self ```
QRect* q_pushbutton_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QPushButton* self ```
QRect* q_pushbutton_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QPushButton* self ```
int32_t q_pushbutton_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QPushButton* self ```
int32_t q_pushbutton_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QPushButton* self ```
QPoint* q_pushbutton_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QPushButton* self ```
QSize* q_pushbutton_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QPushButton* self ```
QSize* q_pushbutton_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QPushButton* self ```
int32_t q_pushbutton_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QPushButton* self ```
int32_t q_pushbutton_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QPushButton* self ```
QRect* q_pushbutton_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QPushButton* self ```
QRect* q_pushbutton_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QPushButton* self ```
QRegion* q_pushbutton_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QPushButton* self ```
QSize* q_pushbutton_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QPushButton* self ```
QSize* q_pushbutton_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QPushButton* self ```
int32_t q_pushbutton_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QPushButton* self ```
int32_t q_pushbutton_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QPushButton* self ```
int32_t q_pushbutton_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QPushButton* self ```
int32_t q_pushbutton_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QPushButton* self, QSize* minimumSize ```
void q_pushbutton_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QPushButton* self, int minw, int minh ```
void q_pushbutton_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QPushButton* self, QSize* maximumSize ```
void q_pushbutton_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QPushButton* self, int maxw, int maxh ```
void q_pushbutton_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QPushButton* self, int minw ```
void q_pushbutton_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QPushButton* self, int minh ```
void q_pushbutton_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QPushButton* self, int maxw ```
void q_pushbutton_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QPushButton* self, int maxh ```
void q_pushbutton_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QPushButton* self ```
QSize* q_pushbutton_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QPushButton* self, QSize* sizeIncrement ```
void q_pushbutton_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QPushButton* self, int w, int h ```
void q_pushbutton_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QPushButton* self ```
QSize* q_pushbutton_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QPushButton* self, QSize* baseSize ```
void q_pushbutton_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QPushButton* self, int basew, int baseh ```
void q_pushbutton_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QPushButton* self, QSize* fixedSize ```
void q_pushbutton_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QPushButton* self, int w, int h ```
void q_pushbutton_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QPushButton* self, int w ```
void q_pushbutton_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QPushButton* self, int h ```
void q_pushbutton_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QPushButton* self, QPointF* param1 ```
QPointF* q_pushbutton_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QPushButton* self, QPoint* param1 ```
QPoint* q_pushbutton_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QPushButton* self, QPointF* param1 ```
QPointF* q_pushbutton_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QPushButton* self, QPoint* param1 ```
QPoint* q_pushbutton_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QPushButton* self, QPointF* param1 ```
QPointF* q_pushbutton_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QPushButton* self, QPoint* param1 ```
QPoint* q_pushbutton_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QPushButton* self, QPointF* param1 ```
QPointF* q_pushbutton_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QPushButton* self, QPoint* param1 ```
QPoint* q_pushbutton_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QPushButton* self, QWidget* param1, QPointF* param2 ```
QPointF* q_pushbutton_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QPushButton* self, QWidget* param1, QPoint* param2 ```
QPoint* q_pushbutton_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QPushButton* self, QWidget* param1, QPointF* param2 ```
QPointF* q_pushbutton_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QPushButton* self, QWidget* param1, QPoint* param2 ```
QPoint* q_pushbutton_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QPushButton* self ```
QWidget* q_pushbutton_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QPushButton* self ```
QWidget* q_pushbutton_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QPushButton* self ```
QWidget* q_pushbutton_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QPushButton* self ```
QPalette* q_pushbutton_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QPushButton* self, QPalette* palette ```
void q_pushbutton_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QPushButton* self, enum QPalette__ColorRole backgroundRole ```
void q_pushbutton_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QPushButton* self ```
int64_t q_pushbutton_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QPushButton* self, enum QPalette__ColorRole foregroundRole ```
void q_pushbutton_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QPushButton* self ```
int64_t q_pushbutton_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QPushButton* self ```
QFont* q_pushbutton_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QPushButton* self, QFont* font ```
void q_pushbutton_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QPushButton* self ```
QFontMetrics* q_pushbutton_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QPushButton* self ```
QFontInfo* q_pushbutton_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QPushButton* self ```
QCursor* q_pushbutton_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QPushButton* self, QCursor* cursor ```
void q_pushbutton_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QPushButton* self ```
void q_pushbutton_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QPushButton* self, bool enable ```
void q_pushbutton_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QPushButton* self ```
bool q_pushbutton_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QPushButton* self ```
bool q_pushbutton_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QPushButton* self, bool enable ```
void q_pushbutton_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QPushButton* self ```
bool q_pushbutton_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QPushButton* self, QBitmap* mask ```
void q_pushbutton_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QPushButton* self, QRegion* mask ```
void q_pushbutton_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QPushButton* self ```
QRegion* q_pushbutton_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QPushButton* self ```
void q_pushbutton_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPushButton* self, QPaintDevice* target ```
void q_pushbutton_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPushButton* self, QPainter* painter ```
void q_pushbutton_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QPushButton* self ```
QPixmap* q_pushbutton_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QPushButton* self ```
QGraphicsEffect* q_pushbutton_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QPushButton* self, QGraphicsEffect* effect ```
void q_pushbutton_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QPushButton* self, enum Qt__GestureType typeVal ```
void q_pushbutton_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QPushButton* self, enum Qt__GestureType typeVal ```
void q_pushbutton_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QPushButton* self, const char* windowTitle ```
void q_pushbutton_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QPushButton* self, const char* styleSheet ```
void q_pushbutton_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QPushButton* self ```
const char* q_pushbutton_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QPushButton* self ```
const char* q_pushbutton_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QPushButton* self, QIcon* icon ```
void q_pushbutton_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QPushButton* self ```
QIcon* q_pushbutton_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QPushButton* self, const char* windowIconText ```
void q_pushbutton_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QPushButton* self ```
const char* q_pushbutton_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QPushButton* self, const char* windowRole ```
void q_pushbutton_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QPushButton* self ```
const char* q_pushbutton_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QPushButton* self, const char* filePath ```
void q_pushbutton_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QPushButton* self ```
const char* q_pushbutton_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QPushButton* self, double level ```
void q_pushbutton_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QPushButton* self ```
double q_pushbutton_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QPushButton* self ```
bool q_pushbutton_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QPushButton* self, const char* toolTip ```
void q_pushbutton_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QPushButton* self ```
const char* q_pushbutton_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QPushButton* self, int msec ```
void q_pushbutton_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QPushButton* self ```
int32_t q_pushbutton_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QPushButton* self, const char* statusTip ```
void q_pushbutton_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QPushButton* self ```
const char* q_pushbutton_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QPushButton* self, const char* whatsThis ```
void q_pushbutton_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QPushButton* self ```
const char* q_pushbutton_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QPushButton* self ```
const char* q_pushbutton_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QPushButton* self, const char* name ```
void q_pushbutton_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QPushButton* self ```
const char* q_pushbutton_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QPushButton* self, const char* description ```
void q_pushbutton_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QPushButton* self, enum Qt__LayoutDirection direction ```
void q_pushbutton_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QPushButton* self ```
int64_t q_pushbutton_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QPushButton* self ```
void q_pushbutton_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QPushButton* self, QLocale* locale ```
void q_pushbutton_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QPushButton* self ```
QLocale* q_pushbutton_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QPushButton* self ```
void q_pushbutton_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QPushButton* self ```
bool q_pushbutton_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QPushButton* self ```
bool q_pushbutton_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QPushButton* self ```
void q_pushbutton_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QPushButton* self ```
bool q_pushbutton_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QPushButton* self ```
void q_pushbutton_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QPushButton* self ```
void q_pushbutton_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QPushButton* self, enum Qt__FocusReason reason ```
void q_pushbutton_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QPushButton* self ```
int64_t q_pushbutton_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QPushButton* self, enum Qt__FocusPolicy policy ```
void q_pushbutton_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QPushButton* self ```
bool q_pushbutton_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_pushbutton_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QPushButton* self, QWidget* focusProxy ```
void q_pushbutton_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QPushButton* self ```
QWidget* q_pushbutton_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QPushButton* self ```
int64_t q_pushbutton_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QPushButton* self, enum Qt__ContextMenuPolicy policy ```
void q_pushbutton_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QPushButton* self ```
void q_pushbutton_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QPushButton* self, QCursor* param1 ```
void q_pushbutton_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QPushButton* self ```
void q_pushbutton_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QPushButton* self ```
void q_pushbutton_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QPushButton* self ```
void q_pushbutton_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QPushButton* self, QKeySequence* key ```
int32_t q_pushbutton_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QPushButton* self, int id ```
void q_pushbutton_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QPushButton* self, int id ```
void q_pushbutton_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QPushButton* self, int id ```
void q_pushbutton_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_pushbutton_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_pushbutton_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QPushButton* self ```
bool q_pushbutton_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QPushButton* self, bool enable ```
void q_pushbutton_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QPushButton* self ```
QGraphicsProxyWidget* q_pushbutton_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPushButton* self ```
void q_pushbutton_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPushButton* self ```
void q_pushbutton_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPushButton* self, int x, int y, int w, int h ```
void q_pushbutton_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPushButton* self, QRect* param1 ```
void q_pushbutton_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPushButton* self, QRegion* param1 ```
void q_pushbutton_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPushButton* self, int x, int y, int w, int h ```
void q_pushbutton_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPushButton* self, QRect* param1 ```
void q_pushbutton_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPushButton* self, QRegion* param1 ```
void q_pushbutton_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QPushButton* self, bool hidden ```
void q_pushbutton_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QPushButton* self ```
void q_pushbutton_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QPushButton* self ```
void q_pushbutton_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QPushButton* self ```
void q_pushbutton_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QPushButton* self ```
void q_pushbutton_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QPushButton* self ```
void q_pushbutton_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QPushButton* self ```
void q_pushbutton_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QPushButton* self ```
bool q_pushbutton_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QPushButton* self ```
void q_pushbutton_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QPushButton* self ```
void q_pushbutton_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QPushButton* self, QWidget* param1 ```
void q_pushbutton_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QPushButton* self, int x, int y ```
void q_pushbutton_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QPushButton* self, QPoint* param1 ```
void q_pushbutton_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QPushButton* self, int w, int h ```
void q_pushbutton_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QPushButton* self, QSize* param1 ```
void q_pushbutton_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QPushButton* self, int x, int y, int w, int h ```
void q_pushbutton_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QPushButton* self, QRect* geometry ```
void q_pushbutton_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QPushButton* self ```
char* q_pushbutton_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QPushButton* self, const char* geometry ```
bool q_pushbutton_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QPushButton* self ```
void q_pushbutton_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QPushButton* self ```
bool q_pushbutton_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QPushButton* self, QWidget* param1 ```
bool q_pushbutton_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QPushButton* self ```
bool q_pushbutton_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QPushButton* self ```
bool q_pushbutton_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QPushButton* self ```
bool q_pushbutton_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QPushButton* self ```
bool q_pushbutton_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QPushButton* self ```
int64_t q_pushbutton_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QPushButton* self, int state ```
void q_pushbutton_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QPushButton* self, int state ```
void q_pushbutton_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QPushButton* self ```
QSizePolicy* q_pushbutton_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QPushButton* self, QSizePolicy* sizePolicy ```
void q_pushbutton_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QPushButton* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_pushbutton_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QPushButton* self ```
QRegion* q_pushbutton_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QPushButton* self, int left, int top, int right, int bottom ```
void q_pushbutton_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QPushButton* self, QMargins* margins ```
void q_pushbutton_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QPushButton* self ```
QMargins* q_pushbutton_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QPushButton* self ```
QRect* q_pushbutton_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QPushButton* self ```
QLayout* q_pushbutton_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QPushButton* self, QLayout* layout ```
void q_pushbutton_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QPushButton* self ```
void q_pushbutton_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QPushButton* self, QWidget* parent ```
void q_pushbutton_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QPushButton* self, QWidget* parent, int f ```
void q_pushbutton_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QPushButton* self, int dx, int dy ```
void q_pushbutton_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QPushButton* self, int dx, int dy, QRect* param3 ```
void q_pushbutton_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QPushButton* self ```
QWidget* q_pushbutton_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QPushButton* self ```
QWidget* q_pushbutton_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QPushButton* self ```
QWidget* q_pushbutton_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QPushButton* self ```
bool q_pushbutton_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QPushButton* self, bool on ```
void q_pushbutton_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPushButton* self, QAction* action ```
void q_pushbutton_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QPushButton* self, QAction* actions[] ```
void q_pushbutton_add_actions(void* self, void* actions[]) {
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
/// ``` QPushButton* self, QAction* before, QAction* actions[] ```
void q_pushbutton_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QPushButton* self, QAction* before, QAction* action ```
void q_pushbutton_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QPushButton* self, QAction* action ```
void q_pushbutton_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QPushButton* self ```
libqt_list /* of QAction* */ q_pushbutton_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPushButton* self, const char* text ```
QAction* q_pushbutton_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPushButton* self, QIcon* icon, const char* text ```
QAction* q_pushbutton_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPushButton* self, const char* text, QKeySequence* shortcut ```
QAction* q_pushbutton_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPushButton* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_pushbutton_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QPushButton* self ```
QWidget* q_pushbutton_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QPushButton* self, int typeVal ```
void q_pushbutton_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QPushButton* self ```
int64_t q_pushbutton_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QPushButton* self, enum Qt__WindowType param1 ```
void q_pushbutton_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QPushButton* self, int typeVal ```
void q_pushbutton_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QPushButton* self ```
int64_t q_pushbutton_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_pushbutton_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QPushButton* self, int x, int y ```
QWidget* q_pushbutton_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QPushButton* self, QPoint* p ```
QWidget* q_pushbutton_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QPushButton* self, enum Qt__WidgetAttribute param1 ```
void q_pushbutton_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QPushButton* self, enum Qt__WidgetAttribute param1 ```
bool q_pushbutton_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QPushButton* self ```
void q_pushbutton_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QPushButton* self, QWidget* child ```
bool q_pushbutton_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QPushButton* self ```
bool q_pushbutton_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QPushButton* self, bool enabled ```
void q_pushbutton_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QPushButton* self ```
QBackingStore* q_pushbutton_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QPushButton* self ```
QWindow* q_pushbutton_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QPushButton* self ```
QScreen* q_pushbutton_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QPushButton* self, QScreen* screen ```
void q_pushbutton_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_pushbutton_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QPushButton* self, const char* title ```
void q_pushbutton_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QPushButton* self, void (*slot)(QWidget*, const char*) ```
void q_pushbutton_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QPushButton* self, QIcon* icon ```
void q_pushbutton_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QPushButton* self, void (*slot)(QWidget*, QIcon*) ```
void q_pushbutton_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QPushButton* self, const char* iconText ```
void q_pushbutton_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QPushButton* self, void (*slot)(QWidget*, const char*) ```
void q_pushbutton_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QPushButton* self, QPoint* pos ```
void q_pushbutton_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QPushButton* self, void (*slot)(QWidget*, QPoint*) ```
void q_pushbutton_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QPushButton* self ```
int64_t q_pushbutton_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QPushButton* self, int hints ```
void q_pushbutton_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPushButton* self, QPaintDevice* target, QPoint* targetOffset ```
void q_pushbutton_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPushButton* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_pushbutton_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPushButton* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_pushbutton_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPushButton* self, QPainter* painter, QPoint* targetOffset ```
void q_pushbutton_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPushButton* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_pushbutton_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPushButton* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_pushbutton_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QPushButton* self, QRect* rectangle ```
QPixmap* q_pushbutton_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QPushButton* self, enum Qt__GestureType typeVal, int flags ```
void q_pushbutton_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QPushButton* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_pushbutton_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QPushButton* self, int id, bool enable ```
void q_pushbutton_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QPushButton* self, int id, bool enable ```
void q_pushbutton_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QPushButton* self, enum Qt__WindowType param1, bool on ```
void q_pushbutton_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QPushButton* self, enum Qt__WidgetAttribute param1, bool on ```
void q_pushbutton_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_pushbutton_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_pushbutton_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPushButton* self ```
const char* q_pushbutton_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPushButton* self, const char* name ```
void q_pushbutton_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPushButton* self ```
bool q_pushbutton_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPushButton* self ```
bool q_pushbutton_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPushButton* self ```
bool q_pushbutton_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPushButton* self ```
bool q_pushbutton_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPushButton* self, bool b ```
bool q_pushbutton_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPushButton* self ```
QThread* q_pushbutton_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPushButton* self, QThread* thread ```
void q_pushbutton_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPushButton* self, int interval ```
int32_t q_pushbutton_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPushButton* self, int id ```
void q_pushbutton_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPushButton* self ```
libqt_list /* of QObject* */ q_pushbutton_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPushButton* self, QObject* filterObj ```
void q_pushbutton_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPushButton* self, QObject* obj ```
void q_pushbutton_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_pushbutton_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPushButton* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_pushbutton_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_pushbutton_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_pushbutton_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPushButton* self ```
void q_pushbutton_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPushButton* self ```
void q_pushbutton_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPushButton* self, const char* name, QVariant* value ```
bool q_pushbutton_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPushButton* self, const char* name ```
QVariant* q_pushbutton_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPushButton* self ```
const char** q_pushbutton_dynamic_property_names(void* self) {
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
/// ``` QPushButton* self ```
QBindingStorage* q_pushbutton_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPushButton* self ```
QBindingStorage* q_pushbutton_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPushButton* self ```
void q_pushbutton_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QPushButton* self, void (*slot)(QObject*) ```
void q_pushbutton_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPushButton* self ```
QObject* q_pushbutton_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPushButton* self, const char* classname ```
bool q_pushbutton_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPushButton* self ```
void q_pushbutton_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPushButton* self, int interval, enum Qt__TimerType timerType ```
int32_t q_pushbutton_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pushbutton_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPushButton* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pushbutton_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPushButton* self, QObject* param1 ```
void q_pushbutton_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QPushButton* self, void (*slot)(QObject*, QObject*) ```
void q_pushbutton_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QPushButton* self ```
bool q_pushbutton_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QPushButton* self ```
int32_t q_pushbutton_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QPushButton* self ```
int32_t q_pushbutton_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QPushButton* self ```
int32_t q_pushbutton_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QPushButton* self ```
int32_t q_pushbutton_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QPushButton* self ```
int32_t q_pushbutton_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QPushButton* self ```
int32_t q_pushbutton_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QPushButton* self ```
double q_pushbutton_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QPushButton* self ```
double q_pushbutton_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QPushButton* self ```
int32_t q_pushbutton_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QPushButton* self ```
int32_t q_pushbutton_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_pushbutton_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#checkStateSet)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self ```
void q_pushbutton_check_state_set(void* self) {
    QPushButton_CheckStateSet((QPushButton*)self);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self ```
void q_pushbutton_qbase_check_state_set(void* self) {
    QPushButton_QBaseCheckStateSet((QPushButton*)self);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)() ```
void q_pushbutton_on_check_state_set(void* self, void (*slot)()) {
    QPushButton_OnCheckStateSet((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#nextCheckState)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self ```
void q_pushbutton_next_check_state(void* self) {
    QPushButton_NextCheckState((QPushButton*)self);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self ```
void q_pushbutton_qbase_next_check_state(void* self) {
    QPushButton_QBaseNextCheckState((QPushButton*)self);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)() ```
void q_pushbutton_on_next_check_state(void* self, void (*slot)()) {
    QPushButton_OnNextCheckState((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, QKeyEvent* e ```
void q_pushbutton_key_release_event(void* self, void* e) {
    QPushButton_KeyReleaseEvent((QPushButton*)self, (QKeyEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, QKeyEvent* e ```
void q_pushbutton_qbase_key_release_event(void* self, void* e) {
    QPushButton_QBaseKeyReleaseEvent((QPushButton*)self, (QKeyEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QKeyEvent*) ```
void q_pushbutton_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnKeyReleaseEvent((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, QMouseEvent* e ```
void q_pushbutton_mouse_press_event(void* self, void* e) {
    QPushButton_MousePressEvent((QPushButton*)self, (QMouseEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, QMouseEvent* e ```
void q_pushbutton_qbase_mouse_press_event(void* self, void* e) {
    QPushButton_QBaseMousePressEvent((QPushButton*)self, (QMouseEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QMouseEvent*) ```
void q_pushbutton_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnMousePressEvent((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, QMouseEvent* e ```
void q_pushbutton_mouse_release_event(void* self, void* e) {
    QPushButton_MouseReleaseEvent((QPushButton*)self, (QMouseEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, QMouseEvent* e ```
void q_pushbutton_qbase_mouse_release_event(void* self, void* e) {
    QPushButton_QBaseMouseReleaseEvent((QPushButton*)self, (QMouseEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QMouseEvent*) ```
void q_pushbutton_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnMouseReleaseEvent((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, QEvent* e ```
void q_pushbutton_change_event(void* self, void* e) {
    QPushButton_ChangeEvent((QPushButton*)self, (QEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, QEvent* e ```
void q_pushbutton_qbase_change_event(void* self, void* e) {
    QPushButton_QBaseChangeEvent((QPushButton*)self, (QEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QEvent*) ```
void q_pushbutton_on_change_event(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnChangeEvent((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, QTimerEvent* e ```
void q_pushbutton_timer_event(void* self, void* e) {
    QPushButton_TimerEvent((QPushButton*)self, (QTimerEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, QTimerEvent* e ```
void q_pushbutton_qbase_timer_event(void* self, void* e) {
    QPushButton_QBaseTimerEvent((QPushButton*)self, (QTimerEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QTimerEvent*) ```
void q_pushbutton_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnTimerEvent((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self ```
int32_t q_pushbutton_dev_type(void* self) {
    return QPushButton_DevType((QPushButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self ```
int32_t q_pushbutton_qbase_dev_type(void* self) {
    return QPushButton_QBaseDevType((QPushButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, int32_t (*slot)() ```
void q_pushbutton_on_dev_type(void* self, int32_t (*slot)()) {
    QPushButton_OnDevType((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, bool visible ```
void q_pushbutton_set_visible(void* self, bool visible) {
    QPushButton_SetVisible((QPushButton*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, bool visible ```
void q_pushbutton_qbase_set_visible(void* self, bool visible) {
    QPushButton_QBaseSetVisible((QPushButton*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, bool) ```
void q_pushbutton_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QPushButton_OnSetVisible((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, int param1 ```
int32_t q_pushbutton_height_for_width(void* self, int param1) {
    return QPushButton_HeightForWidth((QPushButton*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, int param1 ```
int32_t q_pushbutton_qbase_height_for_width(void* self, int param1) {
    return QPushButton_QBaseHeightForWidth((QPushButton*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, int32_t (*slot)(QPushButton*, int) ```
void q_pushbutton_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QPushButton_OnHeightForWidth((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self ```
bool q_pushbutton_has_height_for_width(void* self) {
    return QPushButton_HasHeightForWidth((QPushButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self ```
bool q_pushbutton_qbase_has_height_for_width(void* self) {
    return QPushButton_QBaseHasHeightForWidth((QPushButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, bool (*slot)() ```
void q_pushbutton_on_has_height_for_width(void* self, bool (*slot)()) {
    QPushButton_OnHasHeightForWidth((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self ```
QPaintEngine* q_pushbutton_paint_engine(void* self) {
    return QPushButton_PaintEngine((QPushButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self ```
QPaintEngine* q_pushbutton_qbase_paint_engine(void* self) {
    return QPushButton_QBasePaintEngine((QPushButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, QPaintEngine* (*slot)() ```
void q_pushbutton_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QPushButton_OnPaintEngine((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, QMouseEvent* event ```
void q_pushbutton_mouse_double_click_event(void* self, void* event) {
    QPushButton_MouseDoubleClickEvent((QPushButton*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, QMouseEvent* event ```
void q_pushbutton_qbase_mouse_double_click_event(void* self, void* event) {
    QPushButton_QBaseMouseDoubleClickEvent((QPushButton*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QMouseEvent*) ```
void q_pushbutton_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnMouseDoubleClickEvent((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, QWheelEvent* event ```
void q_pushbutton_wheel_event(void* self, void* event) {
    QPushButton_WheelEvent((QPushButton*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, QWheelEvent* event ```
void q_pushbutton_qbase_wheel_event(void* self, void* event) {
    QPushButton_QBaseWheelEvent((QPushButton*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QWheelEvent*) ```
void q_pushbutton_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnWheelEvent((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, QEnterEvent* event ```
void q_pushbutton_enter_event(void* self, void* event) {
    QPushButton_EnterEvent((QPushButton*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, QEnterEvent* event ```
void q_pushbutton_qbase_enter_event(void* self, void* event) {
    QPushButton_QBaseEnterEvent((QPushButton*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QEnterEvent*) ```
void q_pushbutton_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnEnterEvent((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, QEvent* event ```
void q_pushbutton_leave_event(void* self, void* event) {
    QPushButton_LeaveEvent((QPushButton*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, QEvent* event ```
void q_pushbutton_qbase_leave_event(void* self, void* event) {
    QPushButton_QBaseLeaveEvent((QPushButton*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QEvent*) ```
void q_pushbutton_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnLeaveEvent((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, QMoveEvent* event ```
void q_pushbutton_move_event(void* self, void* event) {
    QPushButton_MoveEvent((QPushButton*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, QMoveEvent* event ```
void q_pushbutton_qbase_move_event(void* self, void* event) {
    QPushButton_QBaseMoveEvent((QPushButton*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QMoveEvent*) ```
void q_pushbutton_on_move_event(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnMoveEvent((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, QResizeEvent* event ```
void q_pushbutton_resize_event(void* self, void* event) {
    QPushButton_ResizeEvent((QPushButton*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, QResizeEvent* event ```
void q_pushbutton_qbase_resize_event(void* self, void* event) {
    QPushButton_QBaseResizeEvent((QPushButton*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QResizeEvent*) ```
void q_pushbutton_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnResizeEvent((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, QCloseEvent* event ```
void q_pushbutton_close_event(void* self, void* event) {
    QPushButton_CloseEvent((QPushButton*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, QCloseEvent* event ```
void q_pushbutton_qbase_close_event(void* self, void* event) {
    QPushButton_QBaseCloseEvent((QPushButton*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QCloseEvent*) ```
void q_pushbutton_on_close_event(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnCloseEvent((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, QContextMenuEvent* event ```
void q_pushbutton_context_menu_event(void* self, void* event) {
    QPushButton_ContextMenuEvent((QPushButton*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, QContextMenuEvent* event ```
void q_pushbutton_qbase_context_menu_event(void* self, void* event) {
    QPushButton_QBaseContextMenuEvent((QPushButton*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QContextMenuEvent*) ```
void q_pushbutton_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnContextMenuEvent((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, QTabletEvent* event ```
void q_pushbutton_tablet_event(void* self, void* event) {
    QPushButton_TabletEvent((QPushButton*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, QTabletEvent* event ```
void q_pushbutton_qbase_tablet_event(void* self, void* event) {
    QPushButton_QBaseTabletEvent((QPushButton*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QTabletEvent*) ```
void q_pushbutton_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnTabletEvent((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, QActionEvent* event ```
void q_pushbutton_action_event(void* self, void* event) {
    QPushButton_ActionEvent((QPushButton*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, QActionEvent* event ```
void q_pushbutton_qbase_action_event(void* self, void* event) {
    QPushButton_QBaseActionEvent((QPushButton*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QActionEvent*) ```
void q_pushbutton_on_action_event(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnActionEvent((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, QDragEnterEvent* event ```
void q_pushbutton_drag_enter_event(void* self, void* event) {
    QPushButton_DragEnterEvent((QPushButton*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, QDragEnterEvent* event ```
void q_pushbutton_qbase_drag_enter_event(void* self, void* event) {
    QPushButton_QBaseDragEnterEvent((QPushButton*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QDragEnterEvent*) ```
void q_pushbutton_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnDragEnterEvent((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, QDragMoveEvent* event ```
void q_pushbutton_drag_move_event(void* self, void* event) {
    QPushButton_DragMoveEvent((QPushButton*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, QDragMoveEvent* event ```
void q_pushbutton_qbase_drag_move_event(void* self, void* event) {
    QPushButton_QBaseDragMoveEvent((QPushButton*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QDragMoveEvent*) ```
void q_pushbutton_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnDragMoveEvent((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, QDragLeaveEvent* event ```
void q_pushbutton_drag_leave_event(void* self, void* event) {
    QPushButton_DragLeaveEvent((QPushButton*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, QDragLeaveEvent* event ```
void q_pushbutton_qbase_drag_leave_event(void* self, void* event) {
    QPushButton_QBaseDragLeaveEvent((QPushButton*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QDragLeaveEvent*) ```
void q_pushbutton_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnDragLeaveEvent((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, QDropEvent* event ```
void q_pushbutton_drop_event(void* self, void* event) {
    QPushButton_DropEvent((QPushButton*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, QDropEvent* event ```
void q_pushbutton_qbase_drop_event(void* self, void* event) {
    QPushButton_QBaseDropEvent((QPushButton*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QDropEvent*) ```
void q_pushbutton_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnDropEvent((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, QShowEvent* event ```
void q_pushbutton_show_event(void* self, void* event) {
    QPushButton_ShowEvent((QPushButton*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, QShowEvent* event ```
void q_pushbutton_qbase_show_event(void* self, void* event) {
    QPushButton_QBaseShowEvent((QPushButton*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QShowEvent*) ```
void q_pushbutton_on_show_event(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnShowEvent((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, QHideEvent* event ```
void q_pushbutton_hide_event(void* self, void* event) {
    QPushButton_HideEvent((QPushButton*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, QHideEvent* event ```
void q_pushbutton_qbase_hide_event(void* self, void* event) {
    QPushButton_QBaseHideEvent((QPushButton*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QHideEvent*) ```
void q_pushbutton_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnHideEvent((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, const char* eventType, void* message, intptr_t* result ```
bool q_pushbutton_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QPushButton_NativeEvent((QPushButton*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, const char* eventType, void* message, intptr_t* result ```
bool q_pushbutton_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QPushButton_QBaseNativeEvent((QPushButton*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, bool (*slot)(QPushButton*, const char*, void*, intptr_t*) ```
void q_pushbutton_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QPushButton_OnNativeEvent((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_pushbutton_metric(void* self, int64_t param1) {
    return QPushButton_Metric((QPushButton*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_pushbutton_qbase_metric(void* self, int64_t param1) {
    return QPushButton_QBaseMetric((QPushButton*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, int32_t (*slot)(QPushButton*, enum QPaintDevice__PaintDeviceMetric) ```
void q_pushbutton_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QPushButton_OnMetric((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, QPainter* painter ```
void q_pushbutton_init_painter(void* self, void* painter) {
    QPushButton_InitPainter((QPushButton*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, QPainter* painter ```
void q_pushbutton_qbase_init_painter(void* self, void* painter) {
    QPushButton_QBaseInitPainter((QPushButton*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QPainter*) ```
void q_pushbutton_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnInitPainter((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, QPoint* offset ```
QPaintDevice* q_pushbutton_redirected(void* self, void* offset) {
    return QPushButton_Redirected((QPushButton*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, QPoint* offset ```
QPaintDevice* q_pushbutton_qbase_redirected(void* self, void* offset) {
    return QPushButton_QBaseRedirected((QPushButton*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, QPaintDevice* (*slot)(QPushButton*, QPoint*) ```
void q_pushbutton_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QPushButton_OnRedirected((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self ```
QPainter* q_pushbutton_shared_painter(void* self) {
    return QPushButton_SharedPainter((QPushButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self ```
QPainter* q_pushbutton_qbase_shared_painter(void* self) {
    return QPushButton_QBaseSharedPainter((QPushButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, QPainter* (*slot)() ```
void q_pushbutton_on_shared_painter(void* self, QPainter* (*slot)()) {
    QPushButton_OnSharedPainter((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, QInputMethodEvent* param1 ```
void q_pushbutton_input_method_event(void* self, void* param1) {
    QPushButton_InputMethodEvent((QPushButton*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, QInputMethodEvent* param1 ```
void q_pushbutton_qbase_input_method_event(void* self, void* param1) {
    QPushButton_QBaseInputMethodEvent((QPushButton*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QInputMethodEvent*) ```
void q_pushbutton_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnInputMethodEvent((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_pushbutton_input_method_query(void* self, int64_t param1) {
    return QPushButton_InputMethodQuery((QPushButton*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_pushbutton_qbase_input_method_query(void* self, int64_t param1) {
    return QPushButton_QBaseInputMethodQuery((QPushButton*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, QVariant* (*slot)(QPushButton*, enum Qt__InputMethodQuery) ```
void q_pushbutton_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QPushButton_OnInputMethodQuery((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, bool next ```
bool q_pushbutton_focus_next_prev_child(void* self, bool next) {
    return QPushButton_FocusNextPrevChild((QPushButton*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, bool next ```
bool q_pushbutton_qbase_focus_next_prev_child(void* self, bool next) {
    return QPushButton_QBaseFocusNextPrevChild((QPushButton*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, bool (*slot)(QPushButton*, bool) ```
void q_pushbutton_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QPushButton_OnFocusNextPrevChild((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, QObject* watched, QEvent* event ```
bool q_pushbutton_event_filter(void* self, void* watched, void* event) {
    return QPushButton_EventFilter((QPushButton*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, QObject* watched, QEvent* event ```
bool q_pushbutton_qbase_event_filter(void* self, void* watched, void* event) {
    return QPushButton_QBaseEventFilter((QPushButton*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, bool (*slot)(QPushButton*, QObject*, QEvent*) ```
void q_pushbutton_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QPushButton_OnEventFilter((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, QChildEvent* event ```
void q_pushbutton_child_event(void* self, void* event) {
    QPushButton_ChildEvent((QPushButton*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, QChildEvent* event ```
void q_pushbutton_qbase_child_event(void* self, void* event) {
    QPushButton_QBaseChildEvent((QPushButton*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QChildEvent*) ```
void q_pushbutton_on_child_event(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnChildEvent((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, QEvent* event ```
void q_pushbutton_custom_event(void* self, void* event) {
    QPushButton_CustomEvent((QPushButton*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, QEvent* event ```
void q_pushbutton_qbase_custom_event(void* self, void* event) {
    QPushButton_QBaseCustomEvent((QPushButton*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QEvent*) ```
void q_pushbutton_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnCustomEvent((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, QMetaMethod* signal ```
void q_pushbutton_connect_notify(void* self, void* signal) {
    QPushButton_ConnectNotify((QPushButton*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, QMetaMethod* signal ```
void q_pushbutton_qbase_connect_notify(void* self, void* signal) {
    QPushButton_QBaseConnectNotify((QPushButton*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QMetaMethod*) ```
void q_pushbutton_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnConnectNotify((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, QMetaMethod* signal ```
void q_pushbutton_disconnect_notify(void* self, void* signal) {
    QPushButton_DisconnectNotify((QPushButton*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, QMetaMethod* signal ```
void q_pushbutton_qbase_disconnect_notify(void* self, void* signal) {
    QPushButton_QBaseDisconnectNotify((QPushButton*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)(QPushButton*, QMetaMethod*) ```
void q_pushbutton_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QPushButton_OnDisconnectNotify((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self ```
void q_pushbutton_update_micro_focus(void* self) {
    QPushButton_UpdateMicroFocus((QPushButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self ```
void q_pushbutton_qbase_update_micro_focus(void* self) {
    QPushButton_QBaseUpdateMicroFocus((QPushButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)() ```
void q_pushbutton_on_update_micro_focus(void* self, void (*slot)()) {
    QPushButton_OnUpdateMicroFocus((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self ```
void q_pushbutton_create(void* self) {
    QPushButton_Create((QPushButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self ```
void q_pushbutton_qbase_create(void* self) {
    QPushButton_QBaseCreate((QPushButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)() ```
void q_pushbutton_on_create(void* self, void (*slot)()) {
    QPushButton_OnCreate((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self ```
void q_pushbutton_destroy(void* self) {
    QPushButton_Destroy((QPushButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self ```
void q_pushbutton_qbase_destroy(void* self) {
    QPushButton_QBaseDestroy((QPushButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, void (*slot)() ```
void q_pushbutton_on_destroy(void* self, void (*slot)()) {
    QPushButton_OnDestroy((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self ```
bool q_pushbutton_focus_next_child(void* self) {
    return QPushButton_FocusNextChild((QPushButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self ```
bool q_pushbutton_qbase_focus_next_child(void* self) {
    return QPushButton_QBaseFocusNextChild((QPushButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, bool (*slot)() ```
void q_pushbutton_on_focus_next_child(void* self, bool (*slot)()) {
    QPushButton_OnFocusNextChild((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self ```
bool q_pushbutton_focus_previous_child(void* self) {
    return QPushButton_FocusPreviousChild((QPushButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self ```
bool q_pushbutton_qbase_focus_previous_child(void* self) {
    return QPushButton_QBaseFocusPreviousChild((QPushButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, bool (*slot)() ```
void q_pushbutton_on_focus_previous_child(void* self, bool (*slot)()) {
    QPushButton_OnFocusPreviousChild((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self ```
QObject* q_pushbutton_sender(void* self) {
    return QPushButton_Sender((QPushButton*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self ```
QObject* q_pushbutton_qbase_sender(void* self) {
    return QPushButton_QBaseSender((QPushButton*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, QObject* (*slot)() ```
void q_pushbutton_on_sender(void* self, QObject* (*slot)()) {
    QPushButton_OnSender((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self ```
int32_t q_pushbutton_sender_signal_index(void* self) {
    return QPushButton_SenderSignalIndex((QPushButton*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self ```
int32_t q_pushbutton_qbase_sender_signal_index(void* self) {
    return QPushButton_QBaseSenderSignalIndex((QPushButton*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, int32_t (*slot)() ```
void q_pushbutton_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QPushButton_OnSenderSignalIndex((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, const char* signal ```
int32_t q_pushbutton_receivers(void* self, const char* signal) {
    return QPushButton_Receivers((QPushButton*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, const char* signal ```
int32_t q_pushbutton_qbase_receivers(void* self, const char* signal) {
    return QPushButton_QBaseReceivers((QPushButton*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, int32_t (*slot)(QPushButton*, const char*) ```
void q_pushbutton_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QPushButton_OnReceivers((QPushButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPushButton* self, QMetaMethod* signal ```
bool q_pushbutton_is_signal_connected(void* self, void* signal) {
    return QPushButton_IsSignalConnected((QPushButton*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPushButton* self, QMetaMethod* signal ```
bool q_pushbutton_qbase_is_signal_connected(void* self, void* signal) {
    return QPushButton_QBaseIsSignalConnected((QPushButton*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPushButton* self, bool (*slot)(QPushButton*, QMetaMethod*) ```
void q_pushbutton_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QPushButton_OnIsSignalConnected((QPushButton*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QPushButton* self ```
void q_pushbutton_delete(void* self) {
    QPushButton_Delete((QPushButton*)(self));
}