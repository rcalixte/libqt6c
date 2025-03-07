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
#include "libqradiobutton.hpp"
#include "libqradiobutton.h"

/// https://doc.qt.io/qt-6/qradiobutton.html

/// q_radiobutton_new constructs a new QRadioButton object.
///
/// ``` QWidget* parent ```
QRadioButton* q_radiobutton_new(void* parent) {
    return QRadioButton_new((QWidget*)parent);
}

/// q_radiobutton_new2 constructs a new QRadioButton object.
///
///
QRadioButton* q_radiobutton_new2() {
    return QRadioButton_new2();
}

/// q_radiobutton_new3 constructs a new QRadioButton object.
///
/// ``` const char* text ```
QRadioButton* q_radiobutton_new3(const char* text) {
    return QRadioButton_new3(qstring(text));
}

/// q_radiobutton_new4 constructs a new QRadioButton object.
///
/// ``` const char* text, QWidget* parent ```
QRadioButton* q_radiobutton_new4(const char* text, void* parent) {
    return QRadioButton_new4(qstring(text), (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QRadioButton* self ```
QMetaObject* q_radiobutton_meta_object(void* self) {
    return QRadioButton_MetaObject((QRadioButton*)self);
}

/// ``` QRadioButton* self, const char* param1 ```
void* q_radiobutton_metacast(void* self, const char* param1) {
    return QRadioButton_Metacast((QRadioButton*)self, param1);
}

/// ``` QRadioButton* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_radiobutton_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QRadioButton_Metacall((QRadioButton*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QRadioButton* self, int32_t (*slot)(QRadioButton*, enum QMetaObject__Call, int, void*) ```
void q_radiobutton_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QRadioButton_OnMetacall((QRadioButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QRadioButton* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_radiobutton_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QRadioButton_QBaseMetacall((QRadioButton*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_radiobutton_tr(const char* s) {
    libqt_string _str = QRadioButton_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qradiobutton.html#sizeHint)
///
/// ``` QRadioButton* self ```
QSize* q_radiobutton_size_hint(void* self) {
    return QRadioButton_SizeHint((QRadioButton*)self);
}

/// Allows for overriding the related default method
///
/// ``` QRadioButton* self, QSize* (*slot)() ```
void q_radiobutton_on_size_hint(void* self, QSize* (*slot)()) {
    QRadioButton_OnSizeHint((QRadioButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QRadioButton* self ```
QSize* q_radiobutton_qbase_size_hint(void* self) {
    return QRadioButton_QBaseSizeHint((QRadioButton*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qradiobutton.html#minimumSizeHint)
///
/// ``` QRadioButton* self ```
QSize* q_radiobutton_minimum_size_hint(void* self) {
    return QRadioButton_MinimumSizeHint((QRadioButton*)self);
}

/// Allows for overriding the related default method
///
/// ``` QRadioButton* self, QSize* (*slot)() ```
void q_radiobutton_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QRadioButton_OnMinimumSizeHint((QRadioButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QRadioButton* self ```
QSize* q_radiobutton_qbase_minimum_size_hint(void* self) {
    return QRadioButton_QBaseMinimumSizeHint((QRadioButton*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qradiobutton.html#event)
///
/// ``` QRadioButton* self, QEvent* e ```
bool q_radiobutton_event(void* self, void* e) {
    return QRadioButton_Event((QRadioButton*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QRadioButton* self, bool (*slot)(QRadioButton*, QEvent*) ```
void q_radiobutton_on_event(void* self, bool (*slot)(void*, void*)) {
    QRadioButton_OnEvent((QRadioButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QRadioButton* self, QEvent* e ```
bool q_radiobutton_qbase_event(void* self, void* e) {
    return QRadioButton_QBaseEvent((QRadioButton*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qradiobutton.html#hitButton)
///
/// ``` QRadioButton* self, QPoint* param1 ```
bool q_radiobutton_hit_button(void* self, void* param1) {
    return QRadioButton_HitButton((QRadioButton*)self, (QPoint*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QRadioButton* self, bool (*slot)(QRadioButton*, QPoint*) ```
void q_radiobutton_on_hit_button(void* self, bool (*slot)(void*, void*)) {
    QRadioButton_OnHitButton((QRadioButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QRadioButton* self, QPoint* param1 ```
bool q_radiobutton_qbase_hit_button(void* self, void* param1) {
    return QRadioButton_QBaseHitButton((QRadioButton*)self, (QPoint*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qradiobutton.html#paintEvent)
///
/// ``` QRadioButton* self, QPaintEvent* param1 ```
void q_radiobutton_paint_event(void* self, void* param1) {
    QRadioButton_PaintEvent((QRadioButton*)self, (QPaintEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QPaintEvent*) ```
void q_radiobutton_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnPaintEvent((QRadioButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QRadioButton* self, QPaintEvent* param1 ```
void q_radiobutton_qbase_paint_event(void* self, void* param1) {
    QRadioButton_QBasePaintEvent((QRadioButton*)self, (QPaintEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qradiobutton.html#mouseMoveEvent)
///
/// ``` QRadioButton* self, QMouseEvent* param1 ```
void q_radiobutton_mouse_move_event(void* self, void* param1) {
    QRadioButton_MouseMoveEvent((QRadioButton*)self, (QMouseEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QMouseEvent*) ```
void q_radiobutton_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnMouseMoveEvent((QRadioButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QRadioButton* self, QMouseEvent* param1 ```
void q_radiobutton_qbase_mouse_move_event(void* self, void* param1) {
    QRadioButton_QBaseMouseMoveEvent((QRadioButton*)self, (QMouseEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qradiobutton.html#initStyleOption)
///
/// ``` QRadioButton* self, QStyleOptionButton* button ```
void q_radiobutton_init_style_option(void* self, void* button) {
    QRadioButton_InitStyleOption((QRadioButton*)self, (QStyleOptionButton*)button);
}

/// Allows for overriding the related default method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QStyleOptionButton*) ```
void q_radiobutton_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnInitStyleOption((QRadioButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QRadioButton* self, QStyleOptionButton* button ```
void q_radiobutton_qbase_init_style_option(void* self, void* button) {
    QRadioButton_QBaseInitStyleOption((QRadioButton*)self, (QStyleOptionButton*)button);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_radiobutton_tr2(const char* s, const char* c) {
    libqt_string _str = QRadioButton_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_radiobutton_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QRadioButton_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setText)
///
/// ``` QRadioButton* self, const char* text ```
void q_radiobutton_set_text(void* self, const char* text) {
    QAbstractButton_SetText((QAbstractButton*)self, qstring(text));
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#text)
///
/// ``` QRadioButton* self ```
const char* q_radiobutton_text(void* self) {
    libqt_string _str = QAbstractButton_Text((QAbstractButton*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setIcon)
///
/// ``` QRadioButton* self, QIcon* icon ```
void q_radiobutton_set_icon(void* self, void* icon) {
    QAbstractButton_SetIcon((QAbstractButton*)self, (QIcon*)icon);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#icon)
///
/// ``` QRadioButton* self ```
QIcon* q_radiobutton_icon(void* self) {
    return QAbstractButton_Icon((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#iconSize)
///
/// ``` QRadioButton* self ```
QSize* q_radiobutton_icon_size(void* self) {
    return QAbstractButton_IconSize((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setShortcut)
///
/// ``` QRadioButton* self, QKeySequence* key ```
void q_radiobutton_set_shortcut(void* self, void* key) {
    QAbstractButton_SetShortcut((QAbstractButton*)self, (QKeySequence*)key);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#shortcut)
///
/// ``` QRadioButton* self ```
QKeySequence* q_radiobutton_shortcut(void* self) {
    return QAbstractButton_Shortcut((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setCheckable)
///
/// ``` QRadioButton* self, bool checkable ```
void q_radiobutton_set_checkable(void* self, bool checkable) {
    QAbstractButton_SetCheckable((QAbstractButton*)self, checkable);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#isCheckable)
///
/// ``` QRadioButton* self ```
bool q_radiobutton_is_checkable(void* self) {
    return QAbstractButton_IsCheckable((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#isChecked)
///
/// ``` QRadioButton* self ```
bool q_radiobutton_is_checked(void* self) {
    return QAbstractButton_IsChecked((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setDown)
///
/// ``` QRadioButton* self, bool down ```
void q_radiobutton_set_down(void* self, bool down) {
    QAbstractButton_SetDown((QAbstractButton*)self, down);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#isDown)
///
/// ``` QRadioButton* self ```
bool q_radiobutton_is_down(void* self) {
    return QAbstractButton_IsDown((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeat)
///
/// ``` QRadioButton* self, bool autoRepeat ```
void q_radiobutton_set_auto_repeat(void* self, bool autoRepeat) {
    QAbstractButton_SetAutoRepeat((QAbstractButton*)self, autoRepeat);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeat)
///
/// ``` QRadioButton* self ```
bool q_radiobutton_auto_repeat(void* self) {
    return QAbstractButton_AutoRepeat((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeatDelay)
///
/// ``` QRadioButton* self, int autoRepeatDelay ```
void q_radiobutton_set_auto_repeat_delay(void* self, int autoRepeatDelay) {
    QAbstractButton_SetAutoRepeatDelay((QAbstractButton*)self, autoRepeatDelay);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeatDelay)
///
/// ``` QRadioButton* self ```
int32_t q_radiobutton_auto_repeat_delay(void* self) {
    return QAbstractButton_AutoRepeatDelay((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeatInterval)
///
/// ``` QRadioButton* self, int autoRepeatInterval ```
void q_radiobutton_set_auto_repeat_interval(void* self, int autoRepeatInterval) {
    QAbstractButton_SetAutoRepeatInterval((QAbstractButton*)self, autoRepeatInterval);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeatInterval)
///
/// ``` QRadioButton* self ```
int32_t q_radiobutton_auto_repeat_interval(void* self) {
    return QAbstractButton_AutoRepeatInterval((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoExclusive)
///
/// ``` QRadioButton* self, bool autoExclusive ```
void q_radiobutton_set_auto_exclusive(void* self, bool autoExclusive) {
    QAbstractButton_SetAutoExclusive((QAbstractButton*)self, autoExclusive);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#autoExclusive)
///
/// ``` QRadioButton* self ```
bool q_radiobutton_auto_exclusive(void* self) {
    return QAbstractButton_AutoExclusive((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#group)
///
/// ``` QRadioButton* self ```
QButtonGroup* q_radiobutton_group(void* self) {
    return QAbstractButton_Group((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setIconSize)
///
/// ``` QRadioButton* self, QSize* size ```
void q_radiobutton_set_icon_size(void* self, void* size) {
    QAbstractButton_SetIconSize((QAbstractButton*)self, (QSize*)size);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#animateClick)
///
/// ``` QRadioButton* self ```
void q_radiobutton_animate_click(void* self) {
    QAbstractButton_AnimateClick((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#click)
///
/// ``` QRadioButton* self ```
void q_radiobutton_click(void* self) {
    QAbstractButton_Click((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#toggle)
///
/// ``` QRadioButton* self ```
void q_radiobutton_toggle(void* self) {
    QAbstractButton_Toggle((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setChecked)
///
/// ``` QRadioButton* self, bool checked ```
void q_radiobutton_set_checked(void* self, bool checked) {
    QAbstractButton_SetChecked((QAbstractButton*)self, checked);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#pressed)
///
/// ``` QRadioButton* self ```
void q_radiobutton_pressed(void* self) {
    QAbstractButton_Pressed((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// ``` QRadioButton* self, void (*slot)(QAbstractButton*) ```
void q_radiobutton_on_pressed(void* self, void (*slot)(void*)) {
    QAbstractButton_Connect_Pressed((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#released)
///
/// ``` QRadioButton* self ```
void q_radiobutton_released(void* self) {
    QAbstractButton_Released((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// ``` QRadioButton* self, void (*slot)(QAbstractButton*) ```
void q_radiobutton_on_released(void* self, void (*slot)(void*)) {
    QAbstractButton_Connect_Released((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// ``` QRadioButton* self ```
void q_radiobutton_clicked(void* self) {
    QAbstractButton_Clicked((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// ``` QRadioButton* self, void (*slot)(QAbstractButton*) ```
void q_radiobutton_on_clicked(void* self, void (*slot)(void*)) {
    QAbstractButton_Connect_Clicked((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#toggled)
///
/// ``` QRadioButton* self, bool checked ```
void q_radiobutton_toggled(void* self, bool checked) {
    QAbstractButton_Toggled((QAbstractButton*)self, checked);
}

/// Inherited from QAbstractButton
///
/// ``` QRadioButton* self, void (*slot)(QAbstractButton*, bool) ```
void q_radiobutton_on_toggled(void* self, void (*slot)(void*, bool)) {
    QAbstractButton_Connect_Toggled((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// ``` QRadioButton* self, bool checked ```
void q_radiobutton_clicked1(void* self, bool checked) {
    QAbstractButton_Clicked1((QAbstractButton*)self, checked);
}

/// Inherited from QAbstractButton
///
/// ``` QRadioButton* self, void (*slot)(QAbstractButton*, bool) ```
void q_radiobutton_on_clicked1(void* self, void (*slot)(void*, bool)) {
    QAbstractButton_Connect_Clicked1((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QRadioButton* self ```
uintptr_t q_radiobutton_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QRadioButton* self ```
void q_radiobutton_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QRadioButton* self ```
uintptr_t q_radiobutton_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QRadioButton* self ```
uintptr_t q_radiobutton_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QRadioButton* self ```
QStyle* q_radiobutton_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QRadioButton* self, QStyle* style ```
void q_radiobutton_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QRadioButton* self ```
bool q_radiobutton_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QRadioButton* self ```
bool q_radiobutton_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QRadioButton* self ```
bool q_radiobutton_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QRadioButton* self ```
int64_t q_radiobutton_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QRadioButton* self, enum Qt__WindowModality windowModality ```
void q_radiobutton_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QRadioButton* self ```
bool q_radiobutton_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QRadioButton* self, QWidget* param1 ```
bool q_radiobutton_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QRadioButton* self, bool enabled ```
void q_radiobutton_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QRadioButton* self, bool disabled ```
void q_radiobutton_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QRadioButton* self, bool windowModified ```
void q_radiobutton_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QRadioButton* self ```
QRect* q_radiobutton_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QRadioButton* self ```
QRect* q_radiobutton_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QRadioButton* self ```
QRect* q_radiobutton_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QRadioButton* self ```
int32_t q_radiobutton_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QRadioButton* self ```
int32_t q_radiobutton_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QRadioButton* self ```
QPoint* q_radiobutton_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QRadioButton* self ```
QSize* q_radiobutton_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QRadioButton* self ```
QSize* q_radiobutton_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QRadioButton* self ```
int32_t q_radiobutton_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QRadioButton* self ```
int32_t q_radiobutton_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QRadioButton* self ```
QRect* q_radiobutton_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QRadioButton* self ```
QRect* q_radiobutton_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QRadioButton* self ```
QRegion* q_radiobutton_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QRadioButton* self ```
QSize* q_radiobutton_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QRadioButton* self ```
QSize* q_radiobutton_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QRadioButton* self ```
int32_t q_radiobutton_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QRadioButton* self ```
int32_t q_radiobutton_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QRadioButton* self ```
int32_t q_radiobutton_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QRadioButton* self ```
int32_t q_radiobutton_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QRadioButton* self, QSize* minimumSize ```
void q_radiobutton_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QRadioButton* self, int minw, int minh ```
void q_radiobutton_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QRadioButton* self, QSize* maximumSize ```
void q_radiobutton_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QRadioButton* self, int maxw, int maxh ```
void q_radiobutton_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QRadioButton* self, int minw ```
void q_radiobutton_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QRadioButton* self, int minh ```
void q_radiobutton_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QRadioButton* self, int maxw ```
void q_radiobutton_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QRadioButton* self, int maxh ```
void q_radiobutton_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QRadioButton* self ```
QSize* q_radiobutton_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QRadioButton* self, QSize* sizeIncrement ```
void q_radiobutton_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QRadioButton* self, int w, int h ```
void q_radiobutton_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QRadioButton* self ```
QSize* q_radiobutton_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QRadioButton* self, QSize* baseSize ```
void q_radiobutton_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QRadioButton* self, int basew, int baseh ```
void q_radiobutton_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QRadioButton* self, QSize* fixedSize ```
void q_radiobutton_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QRadioButton* self, int w, int h ```
void q_radiobutton_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QRadioButton* self, int w ```
void q_radiobutton_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QRadioButton* self, int h ```
void q_radiobutton_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QRadioButton* self, QPointF* param1 ```
QPointF* q_radiobutton_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QRadioButton* self, QPoint* param1 ```
QPoint* q_radiobutton_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QRadioButton* self, QPointF* param1 ```
QPointF* q_radiobutton_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QRadioButton* self, QPoint* param1 ```
QPoint* q_radiobutton_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QRadioButton* self, QPointF* param1 ```
QPointF* q_radiobutton_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QRadioButton* self, QPoint* param1 ```
QPoint* q_radiobutton_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QRadioButton* self, QPointF* param1 ```
QPointF* q_radiobutton_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QRadioButton* self, QPoint* param1 ```
QPoint* q_radiobutton_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QRadioButton* self, QWidget* param1, QPointF* param2 ```
QPointF* q_radiobutton_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QRadioButton* self, QWidget* param1, QPoint* param2 ```
QPoint* q_radiobutton_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QRadioButton* self, QWidget* param1, QPointF* param2 ```
QPointF* q_radiobutton_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QRadioButton* self, QWidget* param1, QPoint* param2 ```
QPoint* q_radiobutton_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QRadioButton* self ```
QWidget* q_radiobutton_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QRadioButton* self ```
QWidget* q_radiobutton_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QRadioButton* self ```
QWidget* q_radiobutton_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QRadioButton* self ```
QPalette* q_radiobutton_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QRadioButton* self, QPalette* palette ```
void q_radiobutton_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QRadioButton* self, enum QPalette__ColorRole backgroundRole ```
void q_radiobutton_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QRadioButton* self ```
int64_t q_radiobutton_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QRadioButton* self, enum QPalette__ColorRole foregroundRole ```
void q_radiobutton_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QRadioButton* self ```
int64_t q_radiobutton_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QRadioButton* self ```
QFont* q_radiobutton_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QRadioButton* self, QFont* font ```
void q_radiobutton_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QRadioButton* self ```
QFontMetrics* q_radiobutton_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QRadioButton* self ```
QFontInfo* q_radiobutton_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QRadioButton* self ```
QCursor* q_radiobutton_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QRadioButton* self, QCursor* cursor ```
void q_radiobutton_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QRadioButton* self ```
void q_radiobutton_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QRadioButton* self, bool enable ```
void q_radiobutton_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QRadioButton* self ```
bool q_radiobutton_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QRadioButton* self ```
bool q_radiobutton_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QRadioButton* self, bool enable ```
void q_radiobutton_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QRadioButton* self ```
bool q_radiobutton_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QRadioButton* self, QBitmap* mask ```
void q_radiobutton_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QRadioButton* self, QRegion* mask ```
void q_radiobutton_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QRadioButton* self ```
QRegion* q_radiobutton_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QRadioButton* self ```
void q_radiobutton_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QRadioButton* self, QPaintDevice* target ```
void q_radiobutton_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QRadioButton* self, QPainter* painter ```
void q_radiobutton_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QRadioButton* self ```
QPixmap* q_radiobutton_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QRadioButton* self ```
QGraphicsEffect* q_radiobutton_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QRadioButton* self, QGraphicsEffect* effect ```
void q_radiobutton_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QRadioButton* self, enum Qt__GestureType typeVal ```
void q_radiobutton_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QRadioButton* self, enum Qt__GestureType typeVal ```
void q_radiobutton_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QRadioButton* self, const char* windowTitle ```
void q_radiobutton_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QRadioButton* self, const char* styleSheet ```
void q_radiobutton_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QRadioButton* self ```
const char* q_radiobutton_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QRadioButton* self ```
const char* q_radiobutton_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QRadioButton* self, QIcon* icon ```
void q_radiobutton_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QRadioButton* self ```
QIcon* q_radiobutton_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QRadioButton* self, const char* windowIconText ```
void q_radiobutton_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QRadioButton* self ```
const char* q_radiobutton_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QRadioButton* self, const char* windowRole ```
void q_radiobutton_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QRadioButton* self ```
const char* q_radiobutton_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QRadioButton* self, const char* filePath ```
void q_radiobutton_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QRadioButton* self ```
const char* q_radiobutton_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QRadioButton* self, double level ```
void q_radiobutton_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QRadioButton* self ```
double q_radiobutton_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QRadioButton* self ```
bool q_radiobutton_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QRadioButton* self, const char* toolTip ```
void q_radiobutton_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QRadioButton* self ```
const char* q_radiobutton_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QRadioButton* self, int msec ```
void q_radiobutton_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QRadioButton* self ```
int32_t q_radiobutton_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QRadioButton* self, const char* statusTip ```
void q_radiobutton_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QRadioButton* self ```
const char* q_radiobutton_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QRadioButton* self, const char* whatsThis ```
void q_radiobutton_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QRadioButton* self ```
const char* q_radiobutton_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QRadioButton* self ```
const char* q_radiobutton_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QRadioButton* self, const char* name ```
void q_radiobutton_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QRadioButton* self ```
const char* q_radiobutton_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QRadioButton* self, const char* description ```
void q_radiobutton_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QRadioButton* self, enum Qt__LayoutDirection direction ```
void q_radiobutton_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QRadioButton* self ```
int64_t q_radiobutton_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QRadioButton* self ```
void q_radiobutton_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QRadioButton* self, QLocale* locale ```
void q_radiobutton_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QRadioButton* self ```
QLocale* q_radiobutton_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QRadioButton* self ```
void q_radiobutton_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QRadioButton* self ```
bool q_radiobutton_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QRadioButton* self ```
bool q_radiobutton_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QRadioButton* self ```
void q_radiobutton_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QRadioButton* self ```
bool q_radiobutton_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QRadioButton* self ```
void q_radiobutton_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QRadioButton* self ```
void q_radiobutton_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QRadioButton* self, enum Qt__FocusReason reason ```
void q_radiobutton_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QRadioButton* self ```
int64_t q_radiobutton_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QRadioButton* self, enum Qt__FocusPolicy policy ```
void q_radiobutton_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QRadioButton* self ```
bool q_radiobutton_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_radiobutton_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QRadioButton* self, QWidget* focusProxy ```
void q_radiobutton_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QRadioButton* self ```
QWidget* q_radiobutton_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QRadioButton* self ```
int64_t q_radiobutton_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QRadioButton* self, enum Qt__ContextMenuPolicy policy ```
void q_radiobutton_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QRadioButton* self ```
void q_radiobutton_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QRadioButton* self, QCursor* param1 ```
void q_radiobutton_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QRadioButton* self ```
void q_radiobutton_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QRadioButton* self ```
void q_radiobutton_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QRadioButton* self ```
void q_radiobutton_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QRadioButton* self, QKeySequence* key ```
int32_t q_radiobutton_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QRadioButton* self, int id ```
void q_radiobutton_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QRadioButton* self, int id ```
void q_radiobutton_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QRadioButton* self, int id ```
void q_radiobutton_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_radiobutton_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_radiobutton_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QRadioButton* self ```
bool q_radiobutton_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QRadioButton* self, bool enable ```
void q_radiobutton_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QRadioButton* self ```
QGraphicsProxyWidget* q_radiobutton_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QRadioButton* self ```
void q_radiobutton_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QRadioButton* self ```
void q_radiobutton_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QRadioButton* self, int x, int y, int w, int h ```
void q_radiobutton_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QRadioButton* self, QRect* param1 ```
void q_radiobutton_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QRadioButton* self, QRegion* param1 ```
void q_radiobutton_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QRadioButton* self, int x, int y, int w, int h ```
void q_radiobutton_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QRadioButton* self, QRect* param1 ```
void q_radiobutton_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QRadioButton* self, QRegion* param1 ```
void q_radiobutton_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QRadioButton* self, bool hidden ```
void q_radiobutton_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QRadioButton* self ```
void q_radiobutton_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QRadioButton* self ```
void q_radiobutton_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QRadioButton* self ```
void q_radiobutton_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QRadioButton* self ```
void q_radiobutton_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QRadioButton* self ```
void q_radiobutton_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QRadioButton* self ```
void q_radiobutton_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QRadioButton* self ```
bool q_radiobutton_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QRadioButton* self ```
void q_radiobutton_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QRadioButton* self ```
void q_radiobutton_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QRadioButton* self, QWidget* param1 ```
void q_radiobutton_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QRadioButton* self, int x, int y ```
void q_radiobutton_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QRadioButton* self, QPoint* param1 ```
void q_radiobutton_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QRadioButton* self, int w, int h ```
void q_radiobutton_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QRadioButton* self, QSize* param1 ```
void q_radiobutton_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QRadioButton* self, int x, int y, int w, int h ```
void q_radiobutton_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QRadioButton* self, QRect* geometry ```
void q_radiobutton_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QRadioButton* self ```
char* q_radiobutton_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QRadioButton* self, const char* geometry ```
bool q_radiobutton_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QRadioButton* self ```
void q_radiobutton_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QRadioButton* self ```
bool q_radiobutton_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QRadioButton* self, QWidget* param1 ```
bool q_radiobutton_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QRadioButton* self ```
bool q_radiobutton_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QRadioButton* self ```
bool q_radiobutton_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QRadioButton* self ```
bool q_radiobutton_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QRadioButton* self ```
bool q_radiobutton_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QRadioButton* self ```
int64_t q_radiobutton_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QRadioButton* self, int state ```
void q_radiobutton_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QRadioButton* self, int state ```
void q_radiobutton_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QRadioButton* self ```
QSizePolicy* q_radiobutton_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QRadioButton* self, QSizePolicy* sizePolicy ```
void q_radiobutton_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QRadioButton* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_radiobutton_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QRadioButton* self ```
QRegion* q_radiobutton_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QRadioButton* self, int left, int top, int right, int bottom ```
void q_radiobutton_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QRadioButton* self, QMargins* margins ```
void q_radiobutton_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QRadioButton* self ```
QMargins* q_radiobutton_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QRadioButton* self ```
QRect* q_radiobutton_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QRadioButton* self ```
QLayout* q_radiobutton_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QRadioButton* self, QLayout* layout ```
void q_radiobutton_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QRadioButton* self ```
void q_radiobutton_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QRadioButton* self, QWidget* parent ```
void q_radiobutton_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QRadioButton* self, QWidget* parent, int f ```
void q_radiobutton_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QRadioButton* self, int dx, int dy ```
void q_radiobutton_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QRadioButton* self, int dx, int dy, QRect* param3 ```
void q_radiobutton_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QRadioButton* self ```
QWidget* q_radiobutton_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QRadioButton* self ```
QWidget* q_radiobutton_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QRadioButton* self ```
QWidget* q_radiobutton_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QRadioButton* self ```
bool q_radiobutton_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QRadioButton* self, bool on ```
void q_radiobutton_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QRadioButton* self, QAction* action ```
void q_radiobutton_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QRadioButton* self, QAction* actions[] ```
void q_radiobutton_add_actions(void* self, void* actions[]) {
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
/// ``` QRadioButton* self, QAction* before, QAction* actions[] ```
void q_radiobutton_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QRadioButton* self, QAction* before, QAction* action ```
void q_radiobutton_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QRadioButton* self, QAction* action ```
void q_radiobutton_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QRadioButton* self ```
libqt_list /* of QAction* */ q_radiobutton_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QRadioButton* self, const char* text ```
QAction* q_radiobutton_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QRadioButton* self, QIcon* icon, const char* text ```
QAction* q_radiobutton_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QRadioButton* self, const char* text, QKeySequence* shortcut ```
QAction* q_radiobutton_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QRadioButton* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_radiobutton_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QRadioButton* self ```
QWidget* q_radiobutton_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QRadioButton* self, int typeVal ```
void q_radiobutton_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QRadioButton* self ```
int64_t q_radiobutton_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QRadioButton* self, enum Qt__WindowType param1 ```
void q_radiobutton_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QRadioButton* self, int typeVal ```
void q_radiobutton_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QRadioButton* self ```
int64_t q_radiobutton_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_radiobutton_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QRadioButton* self, int x, int y ```
QWidget* q_radiobutton_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QRadioButton* self, QPoint* p ```
QWidget* q_radiobutton_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QRadioButton* self, enum Qt__WidgetAttribute param1 ```
void q_radiobutton_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QRadioButton* self, enum Qt__WidgetAttribute param1 ```
bool q_radiobutton_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QRadioButton* self ```
void q_radiobutton_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QRadioButton* self, QWidget* child ```
bool q_radiobutton_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QRadioButton* self ```
bool q_radiobutton_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QRadioButton* self, bool enabled ```
void q_radiobutton_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QRadioButton* self ```
QBackingStore* q_radiobutton_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QRadioButton* self ```
QWindow* q_radiobutton_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QRadioButton* self ```
QScreen* q_radiobutton_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QRadioButton* self, QScreen* screen ```
void q_radiobutton_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_radiobutton_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QRadioButton* self, const char* title ```
void q_radiobutton_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QRadioButton* self, void (*slot)(QWidget*, const char*) ```
void q_radiobutton_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QRadioButton* self, QIcon* icon ```
void q_radiobutton_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QRadioButton* self, void (*slot)(QWidget*, QIcon*) ```
void q_radiobutton_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QRadioButton* self, const char* iconText ```
void q_radiobutton_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QRadioButton* self, void (*slot)(QWidget*, const char*) ```
void q_radiobutton_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QRadioButton* self, QPoint* pos ```
void q_radiobutton_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QRadioButton* self, void (*slot)(QWidget*, QPoint*) ```
void q_radiobutton_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QRadioButton* self ```
int64_t q_radiobutton_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QRadioButton* self, int hints ```
void q_radiobutton_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QRadioButton* self, QPaintDevice* target, QPoint* targetOffset ```
void q_radiobutton_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QRadioButton* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_radiobutton_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QRadioButton* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_radiobutton_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QRadioButton* self, QPainter* painter, QPoint* targetOffset ```
void q_radiobutton_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QRadioButton* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_radiobutton_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QRadioButton* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_radiobutton_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QRadioButton* self, QRect* rectangle ```
QPixmap* q_radiobutton_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QRadioButton* self, enum Qt__GestureType typeVal, int flags ```
void q_radiobutton_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QRadioButton* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_radiobutton_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QRadioButton* self, int id, bool enable ```
void q_radiobutton_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QRadioButton* self, int id, bool enable ```
void q_radiobutton_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QRadioButton* self, enum Qt__WindowType param1, bool on ```
void q_radiobutton_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QRadioButton* self, enum Qt__WidgetAttribute param1, bool on ```
void q_radiobutton_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_radiobutton_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_radiobutton_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QRadioButton* self ```
const char* q_radiobutton_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QRadioButton* self, const char* name ```
void q_radiobutton_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QRadioButton* self ```
bool q_radiobutton_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QRadioButton* self ```
bool q_radiobutton_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QRadioButton* self ```
bool q_radiobutton_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QRadioButton* self ```
bool q_radiobutton_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QRadioButton* self, bool b ```
bool q_radiobutton_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QRadioButton* self ```
QThread* q_radiobutton_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QRadioButton* self, QThread* thread ```
void q_radiobutton_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QRadioButton* self, int interval ```
int32_t q_radiobutton_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QRadioButton* self, int id ```
void q_radiobutton_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QRadioButton* self ```
libqt_list /* of QObject* */ q_radiobutton_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QRadioButton* self, QObject* filterObj ```
void q_radiobutton_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QRadioButton* self, QObject* obj ```
void q_radiobutton_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_radiobutton_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QRadioButton* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_radiobutton_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_radiobutton_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_radiobutton_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QRadioButton* self ```
void q_radiobutton_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QRadioButton* self ```
void q_radiobutton_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QRadioButton* self, const char* name, QVariant* value ```
bool q_radiobutton_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QRadioButton* self, const char* name ```
QVariant* q_radiobutton_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QRadioButton* self ```
const char** q_radiobutton_dynamic_property_names(void* self) {
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
/// ``` QRadioButton* self ```
QBindingStorage* q_radiobutton_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QRadioButton* self ```
QBindingStorage* q_radiobutton_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QRadioButton* self ```
void q_radiobutton_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QRadioButton* self, void (*slot)(QObject*) ```
void q_radiobutton_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QRadioButton* self ```
QObject* q_radiobutton_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QRadioButton* self, const char* classname ```
bool q_radiobutton_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QRadioButton* self ```
void q_radiobutton_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QRadioButton* self, int interval, enum Qt__TimerType timerType ```
int32_t q_radiobutton_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_radiobutton_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QRadioButton* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_radiobutton_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QRadioButton* self, QObject* param1 ```
void q_radiobutton_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QRadioButton* self, void (*slot)(QObject*, QObject*) ```
void q_radiobutton_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QRadioButton* self ```
bool q_radiobutton_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QRadioButton* self ```
int32_t q_radiobutton_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QRadioButton* self ```
int32_t q_radiobutton_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QRadioButton* self ```
int32_t q_radiobutton_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QRadioButton* self ```
int32_t q_radiobutton_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QRadioButton* self ```
int32_t q_radiobutton_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QRadioButton* self ```
int32_t q_radiobutton_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QRadioButton* self ```
double q_radiobutton_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QRadioButton* self ```
double q_radiobutton_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QRadioButton* self ```
int32_t q_radiobutton_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QRadioButton* self ```
int32_t q_radiobutton_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_radiobutton_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#checkStateSet)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self ```
void q_radiobutton_check_state_set(void* self) {
    QRadioButton_CheckStateSet((QRadioButton*)self);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self ```
void q_radiobutton_qbase_check_state_set(void* self) {
    QRadioButton_QBaseCheckStateSet((QRadioButton*)self);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)() ```
void q_radiobutton_on_check_state_set(void* self, void (*slot)()) {
    QRadioButton_OnCheckStateSet((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#nextCheckState)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self ```
void q_radiobutton_next_check_state(void* self) {
    QRadioButton_NextCheckState((QRadioButton*)self);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self ```
void q_radiobutton_qbase_next_check_state(void* self) {
    QRadioButton_QBaseNextCheckState((QRadioButton*)self);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)() ```
void q_radiobutton_on_next_check_state(void* self, void (*slot)()) {
    QRadioButton_OnNextCheckState((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QKeyEvent* e ```
void q_radiobutton_key_press_event(void* self, void* e) {
    QRadioButton_KeyPressEvent((QRadioButton*)self, (QKeyEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QKeyEvent* e ```
void q_radiobutton_qbase_key_press_event(void* self, void* e) {
    QRadioButton_QBaseKeyPressEvent((QRadioButton*)self, (QKeyEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QKeyEvent*) ```
void q_radiobutton_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnKeyPressEvent((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QKeyEvent* e ```
void q_radiobutton_key_release_event(void* self, void* e) {
    QRadioButton_KeyReleaseEvent((QRadioButton*)self, (QKeyEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QKeyEvent* e ```
void q_radiobutton_qbase_key_release_event(void* self, void* e) {
    QRadioButton_QBaseKeyReleaseEvent((QRadioButton*)self, (QKeyEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QKeyEvent*) ```
void q_radiobutton_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnKeyReleaseEvent((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QMouseEvent* e ```
void q_radiobutton_mouse_press_event(void* self, void* e) {
    QRadioButton_MousePressEvent((QRadioButton*)self, (QMouseEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QMouseEvent* e ```
void q_radiobutton_qbase_mouse_press_event(void* self, void* e) {
    QRadioButton_QBaseMousePressEvent((QRadioButton*)self, (QMouseEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QMouseEvent*) ```
void q_radiobutton_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnMousePressEvent((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QMouseEvent* e ```
void q_radiobutton_mouse_release_event(void* self, void* e) {
    QRadioButton_MouseReleaseEvent((QRadioButton*)self, (QMouseEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QMouseEvent* e ```
void q_radiobutton_qbase_mouse_release_event(void* self, void* e) {
    QRadioButton_QBaseMouseReleaseEvent((QRadioButton*)self, (QMouseEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QMouseEvent*) ```
void q_radiobutton_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnMouseReleaseEvent((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QFocusEvent* e ```
void q_radiobutton_focus_in_event(void* self, void* e) {
    QRadioButton_FocusInEvent((QRadioButton*)self, (QFocusEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QFocusEvent* e ```
void q_radiobutton_qbase_focus_in_event(void* self, void* e) {
    QRadioButton_QBaseFocusInEvent((QRadioButton*)self, (QFocusEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QFocusEvent*) ```
void q_radiobutton_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnFocusInEvent((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QFocusEvent* e ```
void q_radiobutton_focus_out_event(void* self, void* e) {
    QRadioButton_FocusOutEvent((QRadioButton*)self, (QFocusEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QFocusEvent* e ```
void q_radiobutton_qbase_focus_out_event(void* self, void* e) {
    QRadioButton_QBaseFocusOutEvent((QRadioButton*)self, (QFocusEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QFocusEvent*) ```
void q_radiobutton_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnFocusOutEvent((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QEvent* e ```
void q_radiobutton_change_event(void* self, void* e) {
    QRadioButton_ChangeEvent((QRadioButton*)self, (QEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QEvent* e ```
void q_radiobutton_qbase_change_event(void* self, void* e) {
    QRadioButton_QBaseChangeEvent((QRadioButton*)self, (QEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QEvent*) ```
void q_radiobutton_on_change_event(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnChangeEvent((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QTimerEvent* e ```
void q_radiobutton_timer_event(void* self, void* e) {
    QRadioButton_TimerEvent((QRadioButton*)self, (QTimerEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QTimerEvent* e ```
void q_radiobutton_qbase_timer_event(void* self, void* e) {
    QRadioButton_QBaseTimerEvent((QRadioButton*)self, (QTimerEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QTimerEvent*) ```
void q_radiobutton_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnTimerEvent((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self ```
int32_t q_radiobutton_dev_type(void* self) {
    return QRadioButton_DevType((QRadioButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self ```
int32_t q_radiobutton_qbase_dev_type(void* self) {
    return QRadioButton_QBaseDevType((QRadioButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, int32_t (*slot)() ```
void q_radiobutton_on_dev_type(void* self, int32_t (*slot)()) {
    QRadioButton_OnDevType((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, bool visible ```
void q_radiobutton_set_visible(void* self, bool visible) {
    QRadioButton_SetVisible((QRadioButton*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, bool visible ```
void q_radiobutton_qbase_set_visible(void* self, bool visible) {
    QRadioButton_QBaseSetVisible((QRadioButton*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, bool) ```
void q_radiobutton_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QRadioButton_OnSetVisible((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, int param1 ```
int32_t q_radiobutton_height_for_width(void* self, int param1) {
    return QRadioButton_HeightForWidth((QRadioButton*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, int param1 ```
int32_t q_radiobutton_qbase_height_for_width(void* self, int param1) {
    return QRadioButton_QBaseHeightForWidth((QRadioButton*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, int32_t (*slot)(QRadioButton*, int) ```
void q_radiobutton_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QRadioButton_OnHeightForWidth((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self ```
bool q_radiobutton_has_height_for_width(void* self) {
    return QRadioButton_HasHeightForWidth((QRadioButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self ```
bool q_radiobutton_qbase_has_height_for_width(void* self) {
    return QRadioButton_QBaseHasHeightForWidth((QRadioButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, bool (*slot)() ```
void q_radiobutton_on_has_height_for_width(void* self, bool (*slot)()) {
    QRadioButton_OnHasHeightForWidth((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self ```
QPaintEngine* q_radiobutton_paint_engine(void* self) {
    return QRadioButton_PaintEngine((QRadioButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self ```
QPaintEngine* q_radiobutton_qbase_paint_engine(void* self) {
    return QRadioButton_QBasePaintEngine((QRadioButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, QPaintEngine* (*slot)() ```
void q_radiobutton_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QRadioButton_OnPaintEngine((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QMouseEvent* event ```
void q_radiobutton_mouse_double_click_event(void* self, void* event) {
    QRadioButton_MouseDoubleClickEvent((QRadioButton*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QMouseEvent* event ```
void q_radiobutton_qbase_mouse_double_click_event(void* self, void* event) {
    QRadioButton_QBaseMouseDoubleClickEvent((QRadioButton*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QMouseEvent*) ```
void q_radiobutton_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnMouseDoubleClickEvent((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QWheelEvent* event ```
void q_radiobutton_wheel_event(void* self, void* event) {
    QRadioButton_WheelEvent((QRadioButton*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QWheelEvent* event ```
void q_radiobutton_qbase_wheel_event(void* self, void* event) {
    QRadioButton_QBaseWheelEvent((QRadioButton*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QWheelEvent*) ```
void q_radiobutton_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnWheelEvent((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QEnterEvent* event ```
void q_radiobutton_enter_event(void* self, void* event) {
    QRadioButton_EnterEvent((QRadioButton*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QEnterEvent* event ```
void q_radiobutton_qbase_enter_event(void* self, void* event) {
    QRadioButton_QBaseEnterEvent((QRadioButton*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QEnterEvent*) ```
void q_radiobutton_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnEnterEvent((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QEvent* event ```
void q_radiobutton_leave_event(void* self, void* event) {
    QRadioButton_LeaveEvent((QRadioButton*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QEvent* event ```
void q_radiobutton_qbase_leave_event(void* self, void* event) {
    QRadioButton_QBaseLeaveEvent((QRadioButton*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QEvent*) ```
void q_radiobutton_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnLeaveEvent((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QMoveEvent* event ```
void q_radiobutton_move_event(void* self, void* event) {
    QRadioButton_MoveEvent((QRadioButton*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QMoveEvent* event ```
void q_radiobutton_qbase_move_event(void* self, void* event) {
    QRadioButton_QBaseMoveEvent((QRadioButton*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QMoveEvent*) ```
void q_radiobutton_on_move_event(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnMoveEvent((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QResizeEvent* event ```
void q_radiobutton_resize_event(void* self, void* event) {
    QRadioButton_ResizeEvent((QRadioButton*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QResizeEvent* event ```
void q_radiobutton_qbase_resize_event(void* self, void* event) {
    QRadioButton_QBaseResizeEvent((QRadioButton*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QResizeEvent*) ```
void q_radiobutton_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnResizeEvent((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QCloseEvent* event ```
void q_radiobutton_close_event(void* self, void* event) {
    QRadioButton_CloseEvent((QRadioButton*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QCloseEvent* event ```
void q_radiobutton_qbase_close_event(void* self, void* event) {
    QRadioButton_QBaseCloseEvent((QRadioButton*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QCloseEvent*) ```
void q_radiobutton_on_close_event(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnCloseEvent((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QContextMenuEvent* event ```
void q_radiobutton_context_menu_event(void* self, void* event) {
    QRadioButton_ContextMenuEvent((QRadioButton*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QContextMenuEvent* event ```
void q_radiobutton_qbase_context_menu_event(void* self, void* event) {
    QRadioButton_QBaseContextMenuEvent((QRadioButton*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QContextMenuEvent*) ```
void q_radiobutton_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnContextMenuEvent((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QTabletEvent* event ```
void q_radiobutton_tablet_event(void* self, void* event) {
    QRadioButton_TabletEvent((QRadioButton*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QTabletEvent* event ```
void q_radiobutton_qbase_tablet_event(void* self, void* event) {
    QRadioButton_QBaseTabletEvent((QRadioButton*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QTabletEvent*) ```
void q_radiobutton_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnTabletEvent((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QActionEvent* event ```
void q_radiobutton_action_event(void* self, void* event) {
    QRadioButton_ActionEvent((QRadioButton*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QActionEvent* event ```
void q_radiobutton_qbase_action_event(void* self, void* event) {
    QRadioButton_QBaseActionEvent((QRadioButton*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QActionEvent*) ```
void q_radiobutton_on_action_event(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnActionEvent((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QDragEnterEvent* event ```
void q_radiobutton_drag_enter_event(void* self, void* event) {
    QRadioButton_DragEnterEvent((QRadioButton*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QDragEnterEvent* event ```
void q_radiobutton_qbase_drag_enter_event(void* self, void* event) {
    QRadioButton_QBaseDragEnterEvent((QRadioButton*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QDragEnterEvent*) ```
void q_radiobutton_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnDragEnterEvent((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QDragMoveEvent* event ```
void q_radiobutton_drag_move_event(void* self, void* event) {
    QRadioButton_DragMoveEvent((QRadioButton*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QDragMoveEvent* event ```
void q_radiobutton_qbase_drag_move_event(void* self, void* event) {
    QRadioButton_QBaseDragMoveEvent((QRadioButton*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QDragMoveEvent*) ```
void q_radiobutton_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnDragMoveEvent((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QDragLeaveEvent* event ```
void q_radiobutton_drag_leave_event(void* self, void* event) {
    QRadioButton_DragLeaveEvent((QRadioButton*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QDragLeaveEvent* event ```
void q_radiobutton_qbase_drag_leave_event(void* self, void* event) {
    QRadioButton_QBaseDragLeaveEvent((QRadioButton*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QDragLeaveEvent*) ```
void q_radiobutton_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnDragLeaveEvent((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QDropEvent* event ```
void q_radiobutton_drop_event(void* self, void* event) {
    QRadioButton_DropEvent((QRadioButton*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QDropEvent* event ```
void q_radiobutton_qbase_drop_event(void* self, void* event) {
    QRadioButton_QBaseDropEvent((QRadioButton*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QDropEvent*) ```
void q_radiobutton_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnDropEvent((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QShowEvent* event ```
void q_radiobutton_show_event(void* self, void* event) {
    QRadioButton_ShowEvent((QRadioButton*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QShowEvent* event ```
void q_radiobutton_qbase_show_event(void* self, void* event) {
    QRadioButton_QBaseShowEvent((QRadioButton*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QShowEvent*) ```
void q_radiobutton_on_show_event(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnShowEvent((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QHideEvent* event ```
void q_radiobutton_hide_event(void* self, void* event) {
    QRadioButton_HideEvent((QRadioButton*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QHideEvent* event ```
void q_radiobutton_qbase_hide_event(void* self, void* event) {
    QRadioButton_QBaseHideEvent((QRadioButton*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QHideEvent*) ```
void q_radiobutton_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnHideEvent((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, const char* eventType, void* message, intptr_t* result ```
bool q_radiobutton_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QRadioButton_NativeEvent((QRadioButton*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, const char* eventType, void* message, intptr_t* result ```
bool q_radiobutton_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QRadioButton_QBaseNativeEvent((QRadioButton*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, bool (*slot)(QRadioButton*, const char*, void*, intptr_t*) ```
void q_radiobutton_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QRadioButton_OnNativeEvent((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_radiobutton_metric(void* self, int64_t param1) {
    return QRadioButton_Metric((QRadioButton*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_radiobutton_qbase_metric(void* self, int64_t param1) {
    return QRadioButton_QBaseMetric((QRadioButton*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, int32_t (*slot)(QRadioButton*, enum QPaintDevice__PaintDeviceMetric) ```
void q_radiobutton_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QRadioButton_OnMetric((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QPainter* painter ```
void q_radiobutton_init_painter(void* self, void* painter) {
    QRadioButton_InitPainter((QRadioButton*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QPainter* painter ```
void q_radiobutton_qbase_init_painter(void* self, void* painter) {
    QRadioButton_QBaseInitPainter((QRadioButton*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QPainter*) ```
void q_radiobutton_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnInitPainter((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QPoint* offset ```
QPaintDevice* q_radiobutton_redirected(void* self, void* offset) {
    return QRadioButton_Redirected((QRadioButton*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QPoint* offset ```
QPaintDevice* q_radiobutton_qbase_redirected(void* self, void* offset) {
    return QRadioButton_QBaseRedirected((QRadioButton*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, QPaintDevice* (*slot)(QRadioButton*, QPoint*) ```
void q_radiobutton_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QRadioButton_OnRedirected((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self ```
QPainter* q_radiobutton_shared_painter(void* self) {
    return QRadioButton_SharedPainter((QRadioButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self ```
QPainter* q_radiobutton_qbase_shared_painter(void* self) {
    return QRadioButton_QBaseSharedPainter((QRadioButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, QPainter* (*slot)() ```
void q_radiobutton_on_shared_painter(void* self, QPainter* (*slot)()) {
    QRadioButton_OnSharedPainter((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QInputMethodEvent* param1 ```
void q_radiobutton_input_method_event(void* self, void* param1) {
    QRadioButton_InputMethodEvent((QRadioButton*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QInputMethodEvent* param1 ```
void q_radiobutton_qbase_input_method_event(void* self, void* param1) {
    QRadioButton_QBaseInputMethodEvent((QRadioButton*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QInputMethodEvent*) ```
void q_radiobutton_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnInputMethodEvent((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_radiobutton_input_method_query(void* self, int64_t param1) {
    return QRadioButton_InputMethodQuery((QRadioButton*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_radiobutton_qbase_input_method_query(void* self, int64_t param1) {
    return QRadioButton_QBaseInputMethodQuery((QRadioButton*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, QVariant* (*slot)(QRadioButton*, enum Qt__InputMethodQuery) ```
void q_radiobutton_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QRadioButton_OnInputMethodQuery((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, bool next ```
bool q_radiobutton_focus_next_prev_child(void* self, bool next) {
    return QRadioButton_FocusNextPrevChild((QRadioButton*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, bool next ```
bool q_radiobutton_qbase_focus_next_prev_child(void* self, bool next) {
    return QRadioButton_QBaseFocusNextPrevChild((QRadioButton*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, bool (*slot)(QRadioButton*, bool) ```
void q_radiobutton_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QRadioButton_OnFocusNextPrevChild((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QObject* watched, QEvent* event ```
bool q_radiobutton_event_filter(void* self, void* watched, void* event) {
    return QRadioButton_EventFilter((QRadioButton*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QObject* watched, QEvent* event ```
bool q_radiobutton_qbase_event_filter(void* self, void* watched, void* event) {
    return QRadioButton_QBaseEventFilter((QRadioButton*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, bool (*slot)(QRadioButton*, QObject*, QEvent*) ```
void q_radiobutton_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QRadioButton_OnEventFilter((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QChildEvent* event ```
void q_radiobutton_child_event(void* self, void* event) {
    QRadioButton_ChildEvent((QRadioButton*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QChildEvent* event ```
void q_radiobutton_qbase_child_event(void* self, void* event) {
    QRadioButton_QBaseChildEvent((QRadioButton*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QChildEvent*) ```
void q_radiobutton_on_child_event(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnChildEvent((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QEvent* event ```
void q_radiobutton_custom_event(void* self, void* event) {
    QRadioButton_CustomEvent((QRadioButton*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QEvent* event ```
void q_radiobutton_qbase_custom_event(void* self, void* event) {
    QRadioButton_QBaseCustomEvent((QRadioButton*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QEvent*) ```
void q_radiobutton_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnCustomEvent((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QMetaMethod* signal ```
void q_radiobutton_connect_notify(void* self, void* signal) {
    QRadioButton_ConnectNotify((QRadioButton*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QMetaMethod* signal ```
void q_radiobutton_qbase_connect_notify(void* self, void* signal) {
    QRadioButton_QBaseConnectNotify((QRadioButton*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QMetaMethod*) ```
void q_radiobutton_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnConnectNotify((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QMetaMethod* signal ```
void q_radiobutton_disconnect_notify(void* self, void* signal) {
    QRadioButton_DisconnectNotify((QRadioButton*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QMetaMethod* signal ```
void q_radiobutton_qbase_disconnect_notify(void* self, void* signal) {
    QRadioButton_QBaseDisconnectNotify((QRadioButton*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)(QRadioButton*, QMetaMethod*) ```
void q_radiobutton_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QRadioButton_OnDisconnectNotify((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self ```
void q_radiobutton_update_micro_focus(void* self) {
    QRadioButton_UpdateMicroFocus((QRadioButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self ```
void q_radiobutton_qbase_update_micro_focus(void* self) {
    QRadioButton_QBaseUpdateMicroFocus((QRadioButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)() ```
void q_radiobutton_on_update_micro_focus(void* self, void (*slot)()) {
    QRadioButton_OnUpdateMicroFocus((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self ```
void q_radiobutton_create(void* self) {
    QRadioButton_Create((QRadioButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self ```
void q_radiobutton_qbase_create(void* self) {
    QRadioButton_QBaseCreate((QRadioButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)() ```
void q_radiobutton_on_create(void* self, void (*slot)()) {
    QRadioButton_OnCreate((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self ```
void q_radiobutton_destroy(void* self) {
    QRadioButton_Destroy((QRadioButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self ```
void q_radiobutton_qbase_destroy(void* self) {
    QRadioButton_QBaseDestroy((QRadioButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, void (*slot)() ```
void q_radiobutton_on_destroy(void* self, void (*slot)()) {
    QRadioButton_OnDestroy((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self ```
bool q_radiobutton_focus_next_child(void* self) {
    return QRadioButton_FocusNextChild((QRadioButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self ```
bool q_radiobutton_qbase_focus_next_child(void* self) {
    return QRadioButton_QBaseFocusNextChild((QRadioButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, bool (*slot)() ```
void q_radiobutton_on_focus_next_child(void* self, bool (*slot)()) {
    QRadioButton_OnFocusNextChild((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self ```
bool q_radiobutton_focus_previous_child(void* self) {
    return QRadioButton_FocusPreviousChild((QRadioButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self ```
bool q_radiobutton_qbase_focus_previous_child(void* self) {
    return QRadioButton_QBaseFocusPreviousChild((QRadioButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, bool (*slot)() ```
void q_radiobutton_on_focus_previous_child(void* self, bool (*slot)()) {
    QRadioButton_OnFocusPreviousChild((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self ```
QObject* q_radiobutton_sender(void* self) {
    return QRadioButton_Sender((QRadioButton*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self ```
QObject* q_radiobutton_qbase_sender(void* self) {
    return QRadioButton_QBaseSender((QRadioButton*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, QObject* (*slot)() ```
void q_radiobutton_on_sender(void* self, QObject* (*slot)()) {
    QRadioButton_OnSender((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self ```
int32_t q_radiobutton_sender_signal_index(void* self) {
    return QRadioButton_SenderSignalIndex((QRadioButton*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self ```
int32_t q_radiobutton_qbase_sender_signal_index(void* self) {
    return QRadioButton_QBaseSenderSignalIndex((QRadioButton*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, int32_t (*slot)() ```
void q_radiobutton_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QRadioButton_OnSenderSignalIndex((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, const char* signal ```
int32_t q_radiobutton_receivers(void* self, const char* signal) {
    return QRadioButton_Receivers((QRadioButton*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, const char* signal ```
int32_t q_radiobutton_qbase_receivers(void* self, const char* signal) {
    return QRadioButton_QBaseReceivers((QRadioButton*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, int32_t (*slot)(QRadioButton*, const char*) ```
void q_radiobutton_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QRadioButton_OnReceivers((QRadioButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRadioButton* self, QMetaMethod* signal ```
bool q_radiobutton_is_signal_connected(void* self, void* signal) {
    return QRadioButton_IsSignalConnected((QRadioButton*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRadioButton* self, QMetaMethod* signal ```
bool q_radiobutton_qbase_is_signal_connected(void* self, void* signal) {
    return QRadioButton_QBaseIsSignalConnected((QRadioButton*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRadioButton* self, bool (*slot)(QRadioButton*, QMetaMethod*) ```
void q_radiobutton_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QRadioButton_OnIsSignalConnected((QRadioButton*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QRadioButton* self ```
void q_radiobutton_delete(void* self) {
    QRadioButton_Delete((QRadioButton*)(self));
}