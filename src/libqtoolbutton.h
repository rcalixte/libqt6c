#pragma once
#ifndef SRCQT6C_LIBQTOOLBUTTON_H
#define SRCQT6C_LIBQTOOLBUTTON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractbutton.h"
#include "libqaction.h"
#include "libqevent.h"
#include "libqmenu.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpaintdevice.h"
#include "libqpaintengine.h"
#include "libqpainter.h"
#include "libqpoint.h"
#include "libqsize.h"
#include <string.h>
#include "libqstyleoption.h"
#include "libqvariant.h"
#include "libqwidget.h"

/// https://doc.qt.io/qt-6/qtoolbutton.html

/// q_toolbutton_new constructs a new QToolButton object.
///
/// ``` QWidget* parent ```
QToolButton* q_toolbutton_new(void* parent);

/// q_toolbutton_new2 constructs a new QToolButton object.
///
///
QToolButton* q_toolbutton_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QToolButton* self ```
const QMetaObject* q_toolbutton_meta_object(void* self);

/// ``` QToolButton* self, const char* param1 ```
void* q_toolbutton_metacast(void* self, const char* param1);

/// ``` QToolButton* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_toolbutton_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QToolButton* self, int32_t (*slot)(QToolButton*, enum QMetaObject__Call, int, void*) ```
void q_toolbutton_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QToolButton* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_toolbutton_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_toolbutton_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#sizeHint)
///
/// ``` QToolButton* self ```
QSize* q_toolbutton_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QToolButton* self, QSize* (*slot)() ```
void q_toolbutton_on_size_hint(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#sizeHint)
///
/// Base class method implementation
///
/// ``` QToolButton* self ```
QSize* q_toolbutton_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#minimumSizeHint)
///
/// ``` QToolButton* self ```
QSize* q_toolbutton_minimum_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QToolButton* self, QSize* (*slot)() ```
void q_toolbutton_on_minimum_size_hint(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#minimumSizeHint)
///
/// Base class method implementation
///
/// ``` QToolButton* self ```
QSize* q_toolbutton_qbase_minimum_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#toolButtonStyle)
///
/// ``` QToolButton* self ```
int64_t q_toolbutton_tool_button_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#arrowType)
///
/// ``` QToolButton* self ```
int64_t q_toolbutton_arrow_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#setArrowType)
///
/// ``` QToolButton* self, enum Qt__ArrowType typeVal ```
void q_toolbutton_set_arrow_type(void* self, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#setMenu)
///
/// ``` QToolButton* self, QMenu* menu ```
void q_toolbutton_set_menu(void* self, void* menu);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#menu)
///
/// ``` QToolButton* self ```
QMenu* q_toolbutton_menu(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#setPopupMode)
///
/// ``` QToolButton* self, enum QToolButton__ToolButtonPopupMode mode ```
void q_toolbutton_set_popup_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#popupMode)
///
/// ``` QToolButton* self ```
int64_t q_toolbutton_popup_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#defaultAction)
///
/// ``` QToolButton* self ```
QAction* q_toolbutton_default_action(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#setAutoRaise)
///
/// ``` QToolButton* self, bool enable ```
void q_toolbutton_set_auto_raise(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#autoRaise)
///
/// ``` QToolButton* self ```
bool q_toolbutton_auto_raise(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#showMenu)
///
/// ``` QToolButton* self ```
void q_toolbutton_show_menu(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#setToolButtonStyle)
///
/// ``` QToolButton* self, enum Qt__ToolButtonStyle style ```
void q_toolbutton_set_tool_button_style(void* self, int64_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#setDefaultAction)
///
/// ``` QToolButton* self, QAction* defaultAction ```
void q_toolbutton_set_default_action(void* self, void* defaultAction);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#triggered)
///
/// ``` QToolButton* self, QAction* param1 ```
void q_toolbutton_triggered(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#triggered)
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QAction*) ```
void q_toolbutton_on_triggered(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#event)
///
/// ``` QToolButton* self, QEvent* e ```
bool q_toolbutton_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QToolButton* self, bool (*slot)(QToolButton*, QEvent*) ```
void q_toolbutton_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#event)
///
/// Base class method implementation
///
/// ``` QToolButton* self, QEvent* e ```
bool q_toolbutton_qbase_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#mousePressEvent)
///
/// ``` QToolButton* self, QMouseEvent* param1 ```
void q_toolbutton_mouse_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QMouseEvent*) ```
void q_toolbutton_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#mousePressEvent)
///
/// Base class method implementation
///
/// ``` QToolButton* self, QMouseEvent* param1 ```
void q_toolbutton_qbase_mouse_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#mouseReleaseEvent)
///
/// ``` QToolButton* self, QMouseEvent* param1 ```
void q_toolbutton_mouse_release_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QMouseEvent*) ```
void q_toolbutton_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// ``` QToolButton* self, QMouseEvent* param1 ```
void q_toolbutton_qbase_mouse_release_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#paintEvent)
///
/// ``` QToolButton* self, QPaintEvent* param1 ```
void q_toolbutton_paint_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QPaintEvent*) ```
void q_toolbutton_on_paint_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#paintEvent)
///
/// Base class method implementation
///
/// ``` QToolButton* self, QPaintEvent* param1 ```
void q_toolbutton_qbase_paint_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#actionEvent)
///
/// ``` QToolButton* self, QActionEvent* param1 ```
void q_toolbutton_action_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#actionEvent)
///
/// Allows for overriding the related default method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QActionEvent*) ```
void q_toolbutton_on_action_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#actionEvent)
///
/// Base class method implementation
///
/// ``` QToolButton* self, QActionEvent* param1 ```
void q_toolbutton_qbase_action_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#enterEvent)
///
/// ``` QToolButton* self, QEnterEvent* param1 ```
void q_toolbutton_enter_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#enterEvent)
///
/// Allows for overriding the related default method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QEnterEvent*) ```
void q_toolbutton_on_enter_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#enterEvent)
///
/// Base class method implementation
///
/// ``` QToolButton* self, QEnterEvent* param1 ```
void q_toolbutton_qbase_enter_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#leaveEvent)
///
/// ``` QToolButton* self, QEvent* param1 ```
void q_toolbutton_leave_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#leaveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QEvent*) ```
void q_toolbutton_on_leave_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#leaveEvent)
///
/// Base class method implementation
///
/// ``` QToolButton* self, QEvent* param1 ```
void q_toolbutton_qbase_leave_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#timerEvent)
///
/// ``` QToolButton* self, QTimerEvent* param1 ```
void q_toolbutton_timer_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QTimerEvent*) ```
void q_toolbutton_on_timer_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#timerEvent)
///
/// Base class method implementation
///
/// ``` QToolButton* self, QTimerEvent* param1 ```
void q_toolbutton_qbase_timer_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#changeEvent)
///
/// ``` QToolButton* self, QEvent* param1 ```
void q_toolbutton_change_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QEvent*) ```
void q_toolbutton_on_change_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#changeEvent)
///
/// Base class method implementation
///
/// ``` QToolButton* self, QEvent* param1 ```
void q_toolbutton_qbase_change_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#hitButton)
///
/// ``` QToolButton* self, QPoint* pos ```
bool q_toolbutton_hit_button(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#hitButton)
///
/// Allows for overriding the related default method
///
/// ``` QToolButton* self, bool (*slot)(QToolButton*, QPoint*) ```
void q_toolbutton_on_hit_button(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#hitButton)
///
/// Base class method implementation
///
/// ``` QToolButton* self, QPoint* pos ```
bool q_toolbutton_qbase_hit_button(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#checkStateSet)
///
/// ``` QToolButton* self ```
void q_toolbutton_check_state_set(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#checkStateSet)
///
/// Allows for overriding the related default method
///
/// ``` QToolButton* self, void (*slot)() ```
void q_toolbutton_on_check_state_set(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#checkStateSet)
///
/// Base class method implementation
///
/// ``` QToolButton* self ```
void q_toolbutton_qbase_check_state_set(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#nextCheckState)
///
/// ``` QToolButton* self ```
void q_toolbutton_next_check_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#nextCheckState)
///
/// Allows for overriding the related default method
///
/// ``` QToolButton* self, void (*slot)() ```
void q_toolbutton_on_next_check_state(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#nextCheckState)
///
/// Base class method implementation
///
/// ``` QToolButton* self ```
void q_toolbutton_qbase_next_check_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#initStyleOption)
///
/// ``` QToolButton* self, QStyleOptionToolButton* option ```
void q_toolbutton_init_style_option(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#initStyleOption)
///
/// Allows for overriding the related default method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QStyleOptionToolButton*) ```
void q_toolbutton_on_init_style_option(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#initStyleOption)
///
/// Base class method implementation
///
/// ``` QToolButton* self, QStyleOptionToolButton* option ```
void q_toolbutton_qbase_init_style_option(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_toolbutton_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_toolbutton_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setText)
///
/// ``` QToolButton* self, const char* text ```
void q_toolbutton_set_text(void* self, const char* text);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#text)
///
/// ``` QToolButton* self ```
const char* q_toolbutton_text(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setIcon)
///
/// ``` QToolButton* self, QIcon* icon ```
void q_toolbutton_set_icon(void* self, void* icon);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#icon)
///
/// ``` QToolButton* self ```
QIcon* q_toolbutton_icon(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#iconSize)
///
/// ``` QToolButton* self ```
QSize* q_toolbutton_icon_size(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setShortcut)
///
/// ``` QToolButton* self, QKeySequence* key ```
void q_toolbutton_set_shortcut(void* self, void* key);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#shortcut)
///
/// ``` QToolButton* self ```
QKeySequence* q_toolbutton_shortcut(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setCheckable)
///
/// ``` QToolButton* self, bool checkable ```
void q_toolbutton_set_checkable(void* self, bool checkable);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#isCheckable)
///
/// ``` QToolButton* self ```
bool q_toolbutton_is_checkable(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#isChecked)
///
/// ``` QToolButton* self ```
bool q_toolbutton_is_checked(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setDown)
///
/// ``` QToolButton* self, bool down ```
void q_toolbutton_set_down(void* self, bool down);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#isDown)
///
/// ``` QToolButton* self ```
bool q_toolbutton_is_down(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeat)
///
/// ``` QToolButton* self, bool autoRepeat ```
void q_toolbutton_set_auto_repeat(void* self, bool autoRepeat);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeat)
///
/// ``` QToolButton* self ```
bool q_toolbutton_auto_repeat(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeatDelay)
///
/// ``` QToolButton* self, int autoRepeatDelay ```
void q_toolbutton_set_auto_repeat_delay(void* self, int autoRepeatDelay);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeatDelay)
///
/// ``` QToolButton* self ```
int32_t q_toolbutton_auto_repeat_delay(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeatInterval)
///
/// ``` QToolButton* self, int autoRepeatInterval ```
void q_toolbutton_set_auto_repeat_interval(void* self, int autoRepeatInterval);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeatInterval)
///
/// ``` QToolButton* self ```
int32_t q_toolbutton_auto_repeat_interval(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoExclusive)
///
/// ``` QToolButton* self, bool autoExclusive ```
void q_toolbutton_set_auto_exclusive(void* self, bool autoExclusive);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#autoExclusive)
///
/// ``` QToolButton* self ```
bool q_toolbutton_auto_exclusive(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#group)
///
/// ``` QToolButton* self ```
QButtonGroup* q_toolbutton_group(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setIconSize)
///
/// ``` QToolButton* self, QSize* size ```
void q_toolbutton_set_icon_size(void* self, void* size);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#animateClick)
///
/// ``` QToolButton* self ```
void q_toolbutton_animate_click(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#click)
///
/// ``` QToolButton* self ```
void q_toolbutton_click(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#toggle)
///
/// ``` QToolButton* self ```
void q_toolbutton_toggle(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setChecked)
///
/// ``` QToolButton* self, bool checked ```
void q_toolbutton_set_checked(void* self, bool checked);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#pressed)
///
/// ``` QToolButton* self ```
void q_toolbutton_pressed(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#pressed)
///
/// ``` QToolButton* self, void (*slot)(QAbstractButton*) ```
void q_toolbutton_on_pressed(void* self, void (*slot)(void*));

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#released)
///
/// ``` QToolButton* self ```
void q_toolbutton_released(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#released)
///
/// ``` QToolButton* self, void (*slot)(QAbstractButton*) ```
void q_toolbutton_on_released(void* self, void (*slot)(void*));

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// ``` QToolButton* self ```
void q_toolbutton_clicked(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// ``` QToolButton* self, void (*slot)(QAbstractButton*) ```
void q_toolbutton_on_clicked(void* self, void (*slot)(void*));

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#toggled)
///
/// ``` QToolButton* self, bool checked ```
void q_toolbutton_toggled(void* self, bool checked);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#toggled)
///
/// ``` QToolButton* self, void (*slot)(QAbstractButton*, bool) ```
void q_toolbutton_on_toggled(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// ``` QToolButton* self, bool checked ```
void q_toolbutton_clicked1(void* self, bool checked);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// ``` QToolButton* self, void (*slot)(QAbstractButton*, bool) ```
void q_toolbutton_on_clicked1(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QToolButton* self ```
uintptr_t q_toolbutton_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QToolButton* self ```
void q_toolbutton_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QToolButton* self ```
uintptr_t q_toolbutton_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QToolButton* self ```
uintptr_t q_toolbutton_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QToolButton* self ```
QStyle* q_toolbutton_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QToolButton* self, QStyle* style ```
void q_toolbutton_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QToolButton* self ```
bool q_toolbutton_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QToolButton* self ```
bool q_toolbutton_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QToolButton* self ```
bool q_toolbutton_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QToolButton* self ```
int64_t q_toolbutton_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QToolButton* self, enum Qt__WindowModality windowModality ```
void q_toolbutton_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QToolButton* self ```
bool q_toolbutton_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QToolButton* self, QWidget* param1 ```
bool q_toolbutton_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QToolButton* self, bool enabled ```
void q_toolbutton_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QToolButton* self, bool disabled ```
void q_toolbutton_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QToolButton* self, bool windowModified ```
void q_toolbutton_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QToolButton* self ```
QRect* q_toolbutton_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QToolButton* self ```
const QRect* q_toolbutton_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QToolButton* self ```
QRect* q_toolbutton_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QToolButton* self ```
int32_t q_toolbutton_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QToolButton* self ```
int32_t q_toolbutton_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QToolButton* self ```
QPoint* q_toolbutton_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QToolButton* self ```
QSize* q_toolbutton_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QToolButton* self ```
QSize* q_toolbutton_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QToolButton* self ```
int32_t q_toolbutton_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QToolButton* self ```
int32_t q_toolbutton_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QToolButton* self ```
QRect* q_toolbutton_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QToolButton* self ```
QRect* q_toolbutton_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QToolButton* self ```
QRegion* q_toolbutton_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QToolButton* self ```
QSize* q_toolbutton_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QToolButton* self ```
QSize* q_toolbutton_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QToolButton* self ```
int32_t q_toolbutton_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QToolButton* self ```
int32_t q_toolbutton_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QToolButton* self ```
int32_t q_toolbutton_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QToolButton* self ```
int32_t q_toolbutton_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QToolButton* self, QSize* minimumSize ```
void q_toolbutton_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QToolButton* self, int minw, int minh ```
void q_toolbutton_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QToolButton* self, QSize* maximumSize ```
void q_toolbutton_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QToolButton* self, int maxw, int maxh ```
void q_toolbutton_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QToolButton* self, int minw ```
void q_toolbutton_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QToolButton* self, int minh ```
void q_toolbutton_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QToolButton* self, int maxw ```
void q_toolbutton_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QToolButton* self, int maxh ```
void q_toolbutton_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QToolButton* self ```
QSize* q_toolbutton_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QToolButton* self, QSize* sizeIncrement ```
void q_toolbutton_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QToolButton* self, int w, int h ```
void q_toolbutton_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QToolButton* self ```
QSize* q_toolbutton_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QToolButton* self, QSize* baseSize ```
void q_toolbutton_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QToolButton* self, int basew, int baseh ```
void q_toolbutton_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QToolButton* self, QSize* fixedSize ```
void q_toolbutton_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QToolButton* self, int w, int h ```
void q_toolbutton_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QToolButton* self, int w ```
void q_toolbutton_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QToolButton* self, int h ```
void q_toolbutton_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QToolButton* self, QPointF* param1 ```
QPointF* q_toolbutton_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QToolButton* self, QPoint* param1 ```
QPoint* q_toolbutton_map_to_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QToolButton* self, QPointF* param1 ```
QPointF* q_toolbutton_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QToolButton* self, QPoint* param1 ```
QPoint* q_toolbutton_map_from_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QToolButton* self, QPointF* param1 ```
QPointF* q_toolbutton_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QToolButton* self, QPoint* param1 ```
QPoint* q_toolbutton_map_to_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QToolButton* self, QPointF* param1 ```
QPointF* q_toolbutton_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QToolButton* self, QPoint* param1 ```
QPoint* q_toolbutton_map_from_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QToolButton* self, QWidget* param1, QPointF* param2 ```
QPointF* q_toolbutton_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QToolButton* self, QWidget* param1, QPoint* param2 ```
QPoint* q_toolbutton_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QToolButton* self, QWidget* param1, QPointF* param2 ```
QPointF* q_toolbutton_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QToolButton* self, QWidget* param1, QPoint* param2 ```
QPoint* q_toolbutton_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QToolButton* self ```
QWidget* q_toolbutton_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QToolButton* self ```
QWidget* q_toolbutton_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QToolButton* self ```
QWidget* q_toolbutton_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QToolButton* self ```
const QPalette* q_toolbutton_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QToolButton* self, QPalette* palette ```
void q_toolbutton_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QToolButton* self, enum QPalette__ColorRole backgroundRole ```
void q_toolbutton_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QToolButton* self ```
int64_t q_toolbutton_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QToolButton* self, enum QPalette__ColorRole foregroundRole ```
void q_toolbutton_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QToolButton* self ```
int64_t q_toolbutton_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QToolButton* self ```
const QFont* q_toolbutton_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QToolButton* self, QFont* font ```
void q_toolbutton_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QToolButton* self ```
QFontMetrics* q_toolbutton_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QToolButton* self ```
QFontInfo* q_toolbutton_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QToolButton* self ```
QCursor* q_toolbutton_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QToolButton* self, QCursor* cursor ```
void q_toolbutton_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QToolButton* self ```
void q_toolbutton_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QToolButton* self, bool enable ```
void q_toolbutton_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QToolButton* self ```
bool q_toolbutton_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QToolButton* self ```
bool q_toolbutton_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QToolButton* self, bool enable ```
void q_toolbutton_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QToolButton* self ```
bool q_toolbutton_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QToolButton* self, QBitmap* mask ```
void q_toolbutton_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QToolButton* self, QRegion* mask ```
void q_toolbutton_set_mask_with_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QToolButton* self ```
QRegion* q_toolbutton_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QToolButton* self ```
void q_toolbutton_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QToolButton* self, QPaintDevice* target ```
void q_toolbutton_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QToolButton* self, QPainter* painter ```
void q_toolbutton_render_with_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QToolButton* self ```
QPixmap* q_toolbutton_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QToolButton* self ```
QGraphicsEffect* q_toolbutton_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QToolButton* self, QGraphicsEffect* effect ```
void q_toolbutton_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QToolButton* self, enum Qt__GestureType typeVal ```
void q_toolbutton_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QToolButton* self, enum Qt__GestureType typeVal ```
void q_toolbutton_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QToolButton* self, const char* windowTitle ```
void q_toolbutton_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QToolButton* self, const char* styleSheet ```
void q_toolbutton_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QToolButton* self ```
const char* q_toolbutton_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QToolButton* self ```
const char* q_toolbutton_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QToolButton* self, QIcon* icon ```
void q_toolbutton_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QToolButton* self ```
QIcon* q_toolbutton_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QToolButton* self, const char* windowIconText ```
void q_toolbutton_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QToolButton* self ```
const char* q_toolbutton_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QToolButton* self, const char* windowRole ```
void q_toolbutton_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QToolButton* self ```
const char* q_toolbutton_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QToolButton* self, const char* filePath ```
void q_toolbutton_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QToolButton* self ```
const char* q_toolbutton_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QToolButton* self, double level ```
void q_toolbutton_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QToolButton* self ```
double q_toolbutton_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QToolButton* self ```
bool q_toolbutton_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QToolButton* self, const char* toolTip ```
void q_toolbutton_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QToolButton* self ```
const char* q_toolbutton_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QToolButton* self, int msec ```
void q_toolbutton_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QToolButton* self ```
int32_t q_toolbutton_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QToolButton* self, const char* statusTip ```
void q_toolbutton_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QToolButton* self ```
const char* q_toolbutton_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QToolButton* self, const char* whatsThis ```
void q_toolbutton_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QToolButton* self ```
const char* q_toolbutton_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QToolButton* self ```
const char* q_toolbutton_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QToolButton* self, const char* name ```
void q_toolbutton_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QToolButton* self ```
const char* q_toolbutton_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QToolButton* self, const char* description ```
void q_toolbutton_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QToolButton* self, enum Qt__LayoutDirection direction ```
void q_toolbutton_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QToolButton* self ```
int64_t q_toolbutton_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QToolButton* self ```
void q_toolbutton_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QToolButton* self, QLocale* locale ```
void q_toolbutton_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QToolButton* self ```
QLocale* q_toolbutton_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QToolButton* self ```
void q_toolbutton_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QToolButton* self ```
bool q_toolbutton_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QToolButton* self ```
bool q_toolbutton_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QToolButton* self ```
void q_toolbutton_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QToolButton* self ```
bool q_toolbutton_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QToolButton* self ```
void q_toolbutton_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QToolButton* self ```
void q_toolbutton_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QToolButton* self, enum Qt__FocusReason reason ```
void q_toolbutton_set_focus_with_reason(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QToolButton* self ```
int64_t q_toolbutton_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QToolButton* self, enum Qt__FocusPolicy policy ```
void q_toolbutton_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QToolButton* self ```
bool q_toolbutton_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_toolbutton_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QToolButton* self, QWidget* focusProxy ```
void q_toolbutton_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QToolButton* self ```
QWidget* q_toolbutton_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QToolButton* self ```
int64_t q_toolbutton_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QToolButton* self, enum Qt__ContextMenuPolicy policy ```
void q_toolbutton_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QToolButton* self ```
void q_toolbutton_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QToolButton* self, QCursor* param1 ```
void q_toolbutton_grab_mouse_with_q_cursor(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QToolButton* self ```
void q_toolbutton_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QToolButton* self ```
void q_toolbutton_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QToolButton* self ```
void q_toolbutton_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QToolButton* self, QKeySequence* key ```
int32_t q_toolbutton_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QToolButton* self, int id ```
void q_toolbutton_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QToolButton* self, int id ```
void q_toolbutton_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QToolButton* self, int id ```
void q_toolbutton_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_toolbutton_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_toolbutton_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QToolButton* self ```
bool q_toolbutton_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QToolButton* self, bool enable ```
void q_toolbutton_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QToolButton* self ```
QGraphicsProxyWidget* q_toolbutton_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QToolButton* self ```
void q_toolbutton_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QToolButton* self ```
void q_toolbutton_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QToolButton* self, int x, int y, int w, int h ```
void q_toolbutton_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QToolButton* self, QRect* param1 ```
void q_toolbutton_update_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QToolButton* self, QRegion* param1 ```
void q_toolbutton_update_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QToolButton* self, int x, int y, int w, int h ```
void q_toolbutton_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QToolButton* self, QRect* param1 ```
void q_toolbutton_repaint_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QToolButton* self, QRegion* param1 ```
void q_toolbutton_repaint_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QToolButton* self, bool hidden ```
void q_toolbutton_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QToolButton* self ```
void q_toolbutton_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QToolButton* self ```
void q_toolbutton_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QToolButton* self ```
void q_toolbutton_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QToolButton* self ```
void q_toolbutton_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QToolButton* self ```
void q_toolbutton_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QToolButton* self ```
void q_toolbutton_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QToolButton* self ```
bool q_toolbutton_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QToolButton* self ```
void q_toolbutton_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QToolButton* self ```
void q_toolbutton_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QToolButton* self, QWidget* param1 ```
void q_toolbutton_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QToolButton* self, int x, int y ```
void q_toolbutton_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QToolButton* self, QPoint* param1 ```
void q_toolbutton_move_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QToolButton* self, int w, int h ```
void q_toolbutton_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QToolButton* self, QSize* param1 ```
void q_toolbutton_resize_with_q_size(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QToolButton* self, int x, int y, int w, int h ```
void q_toolbutton_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QToolButton* self, QRect* geometry ```
void q_toolbutton_set_geometry_with_geometry(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QToolButton* self ```
char* q_toolbutton_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QToolButton* self, const char* geometry ```
bool q_toolbutton_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QToolButton* self ```
void q_toolbutton_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QToolButton* self ```
bool q_toolbutton_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QToolButton* self, QWidget* param1 ```
bool q_toolbutton_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QToolButton* self ```
bool q_toolbutton_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QToolButton* self ```
bool q_toolbutton_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QToolButton* self ```
bool q_toolbutton_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QToolButton* self ```
bool q_toolbutton_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QToolButton* self ```
int64_t q_toolbutton_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QToolButton* self, int state ```
void q_toolbutton_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QToolButton* self, int state ```
void q_toolbutton_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QToolButton* self ```
QSizePolicy* q_toolbutton_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QToolButton* self, QSizePolicy* sizePolicy ```
void q_toolbutton_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QToolButton* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_toolbutton_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QToolButton* self ```
QRegion* q_toolbutton_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QToolButton* self, int left, int top, int right, int bottom ```
void q_toolbutton_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QToolButton* self, QMargins* margins ```
void q_toolbutton_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QToolButton* self ```
QMargins* q_toolbutton_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QToolButton* self ```
QRect* q_toolbutton_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QToolButton* self ```
QLayout* q_toolbutton_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QToolButton* self, QLayout* layout ```
void q_toolbutton_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QToolButton* self ```
void q_toolbutton_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QToolButton* self, QWidget* parent ```
void q_toolbutton_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QToolButton* self, QWidget* parent, int f ```
void q_toolbutton_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QToolButton* self, int dx, int dy ```
void q_toolbutton_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QToolButton* self, int dx, int dy, QRect* param3 ```
void q_toolbutton_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QToolButton* self ```
QWidget* q_toolbutton_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QToolButton* self ```
QWidget* q_toolbutton_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QToolButton* self ```
QWidget* q_toolbutton_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QToolButton* self ```
bool q_toolbutton_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QToolButton* self, bool on ```
void q_toolbutton_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QToolButton* self, QAction* action ```
void q_toolbutton_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QToolButton* self, libqt_list /* of QAction* */ actions ```
void q_toolbutton_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QToolButton* self, QAction* before, libqt_list /* of QAction* */ actions ```
void q_toolbutton_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QToolButton* self, QAction* before, QAction* action ```
void q_toolbutton_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QToolButton* self, QAction* action ```
void q_toolbutton_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QToolButton* self ```
libqt_list /* of QAction* */ q_toolbutton_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QToolButton* self, const char* text ```
QAction* q_toolbutton_add_action_with_text(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QToolButton* self, QIcon* icon, const char* text ```
QAction* q_toolbutton_add_action2(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QToolButton* self, const char* text, QKeySequence* shortcut ```
QAction* q_toolbutton_add_action3(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QToolButton* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_toolbutton_add_action4(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QToolButton* self ```
QWidget* q_toolbutton_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QToolButton* self, int typeVal ```
void q_toolbutton_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QToolButton* self ```
int64_t q_toolbutton_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QToolButton* self, enum Qt__WindowType param1 ```
void q_toolbutton_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QToolButton* self, int typeVal ```
void q_toolbutton_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QToolButton* self ```
int64_t q_toolbutton_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_toolbutton_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QToolButton* self, int x, int y ```
QWidget* q_toolbutton_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QToolButton* self, QPoint* p ```
QWidget* q_toolbutton_child_at_with_q_point(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QToolButton* self, enum Qt__WidgetAttribute param1 ```
void q_toolbutton_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QToolButton* self, enum Qt__WidgetAttribute param1 ```
bool q_toolbutton_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QToolButton* self ```
void q_toolbutton_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QToolButton* self, QWidget* child ```
bool q_toolbutton_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QToolButton* self ```
bool q_toolbutton_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QToolButton* self, bool enabled ```
void q_toolbutton_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QToolButton* self ```
QBackingStore* q_toolbutton_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QToolButton* self ```
QWindow* q_toolbutton_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QToolButton* self ```
QScreen* q_toolbutton_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QToolButton* self, QScreen* screen ```
void q_toolbutton_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_toolbutton_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QToolButton* self, const char* title ```
void q_toolbutton_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QToolButton* self, void (*slot)(QWidget*, const char*) ```
void q_toolbutton_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QToolButton* self, QIcon* icon ```
void q_toolbutton_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QToolButton* self, void (*slot)(QWidget*, QIcon*) ```
void q_toolbutton_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QToolButton* self, const char* iconText ```
void q_toolbutton_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QToolButton* self, void (*slot)(QWidget*, const char*) ```
void q_toolbutton_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QToolButton* self, QPoint* pos ```
void q_toolbutton_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QToolButton* self, void (*slot)(QWidget*, QPoint*) ```
void q_toolbutton_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QToolButton* self ```
int64_t q_toolbutton_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QToolButton* self, int hints ```
void q_toolbutton_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QToolButton* self, QPaintDevice* target, QPoint* targetOffset ```
void q_toolbutton_render2(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QToolButton* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_toolbutton_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QToolButton* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_toolbutton_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QToolButton* self, QPainter* painter, QPoint* targetOffset ```
void q_toolbutton_render22(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QToolButton* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_toolbutton_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QToolButton* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_toolbutton_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QToolButton* self, QRect* rectangle ```
QPixmap* q_toolbutton_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QToolButton* self, enum Qt__GestureType typeVal, int flags ```
void q_toolbutton_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QToolButton* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_toolbutton_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QToolButton* self, int id, bool enable ```
void q_toolbutton_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QToolButton* self, int id, bool enable ```
void q_toolbutton_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QToolButton* self, enum Qt__WindowType param1, bool on ```
void q_toolbutton_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QToolButton* self, enum Qt__WidgetAttribute param1, bool on ```
void q_toolbutton_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_toolbutton_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_toolbutton_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QToolButton* self ```
const char* q_toolbutton_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QToolButton* self, char* name ```
void q_toolbutton_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QToolButton* self ```
bool q_toolbutton_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QToolButton* self ```
bool q_toolbutton_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QToolButton* self ```
bool q_toolbutton_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QToolButton* self ```
bool q_toolbutton_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QToolButton* self, bool b ```
bool q_toolbutton_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QToolButton* self ```
QThread* q_toolbutton_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QToolButton* self, QThread* thread ```
void q_toolbutton_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QToolButton* self, int interval ```
int32_t q_toolbutton_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QToolButton* self, int id ```
void q_toolbutton_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QToolButton* self ```
libqt_list /* of QObject* */ q_toolbutton_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QToolButton* self, QObject* filterObj ```
void q_toolbutton_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QToolButton* self, QObject* obj ```
void q_toolbutton_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_toolbutton_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QToolButton* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_toolbutton_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_toolbutton_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_toolbutton_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QToolButton* self ```
void q_toolbutton_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QToolButton* self ```
void q_toolbutton_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QToolButton* self, const char* name, QVariant* value ```
bool q_toolbutton_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QToolButton* self, const char* name ```
QVariant* q_toolbutton_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QToolButton* self ```
const char** q_toolbutton_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QToolButton* self ```
QBindingStorage* q_toolbutton_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QToolButton* self ```
const QBindingStorage* q_toolbutton_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QToolButton* self ```
void q_toolbutton_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QToolButton* self, void (*slot)(QObject*) ```
void q_toolbutton_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QToolButton* self ```
QObject* q_toolbutton_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QToolButton* self, const char* classname ```
bool q_toolbutton_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QToolButton* self ```
void q_toolbutton_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QToolButton* self, int interval, enum Qt__TimerType timerType ```
int32_t q_toolbutton_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_toolbutton_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QToolButton* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_toolbutton_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QToolButton* self, QObject* param1 ```
void q_toolbutton_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QToolButton* self, void (*slot)(QObject*, QObject*) ```
void q_toolbutton_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QToolButton* self ```
bool q_toolbutton_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QToolButton* self ```
int32_t q_toolbutton_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QToolButton* self ```
int32_t q_toolbutton_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QToolButton* self ```
int32_t q_toolbutton_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QToolButton* self ```
int32_t q_toolbutton_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QToolButton* self ```
int32_t q_toolbutton_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QToolButton* self ```
int32_t q_toolbutton_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QToolButton* self ```
double q_toolbutton_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QToolButton* self ```
double q_toolbutton_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QToolButton* self ```
int32_t q_toolbutton_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QToolButton* self ```
int32_t q_toolbutton_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_toolbutton_device_pixel_ratio_f_scale();

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, QKeyEvent* e ```
void q_toolbutton_key_press_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, QKeyEvent* e ```
void q_toolbutton_qbase_key_press_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QKeyEvent*) ```
void q_toolbutton_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, QKeyEvent* e ```
void q_toolbutton_key_release_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, QKeyEvent* e ```
void q_toolbutton_qbase_key_release_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QKeyEvent*) ```
void q_toolbutton_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, QMouseEvent* e ```
void q_toolbutton_mouse_move_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, QMouseEvent* e ```
void q_toolbutton_qbase_mouse_move_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QMouseEvent*) ```
void q_toolbutton_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, QFocusEvent* e ```
void q_toolbutton_focus_in_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, QFocusEvent* e ```
void q_toolbutton_qbase_focus_in_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QFocusEvent*) ```
void q_toolbutton_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, QFocusEvent* e ```
void q_toolbutton_focus_out_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, QFocusEvent* e ```
void q_toolbutton_qbase_focus_out_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QFocusEvent*) ```
void q_toolbutton_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self ```
int32_t q_toolbutton_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self ```
int32_t q_toolbutton_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, int32_t (*slot)() ```
void q_toolbutton_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, bool visible ```
void q_toolbutton_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, bool visible ```
void q_toolbutton_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, bool) ```
void q_toolbutton_on_set_visible(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, int param1 ```
int32_t q_toolbutton_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, int param1 ```
int32_t q_toolbutton_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, int32_t (*slot)(QToolButton*, int) ```
void q_toolbutton_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self ```
bool q_toolbutton_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self ```
bool q_toolbutton_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, bool (*slot)() ```
void q_toolbutton_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self ```
QPaintEngine* q_toolbutton_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self ```
QPaintEngine* q_toolbutton_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, QPaintEngine* (*slot)() ```
void q_toolbutton_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, QMouseEvent* event ```
void q_toolbutton_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, QMouseEvent* event ```
void q_toolbutton_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QMouseEvent*) ```
void q_toolbutton_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, QWheelEvent* event ```
void q_toolbutton_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, QWheelEvent* event ```
void q_toolbutton_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QWheelEvent*) ```
void q_toolbutton_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, QMoveEvent* event ```
void q_toolbutton_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, QMoveEvent* event ```
void q_toolbutton_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QMoveEvent*) ```
void q_toolbutton_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, QResizeEvent* event ```
void q_toolbutton_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, QResizeEvent* event ```
void q_toolbutton_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QResizeEvent*) ```
void q_toolbutton_on_resize_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, QCloseEvent* event ```
void q_toolbutton_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, QCloseEvent* event ```
void q_toolbutton_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QCloseEvent*) ```
void q_toolbutton_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, QContextMenuEvent* event ```
void q_toolbutton_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, QContextMenuEvent* event ```
void q_toolbutton_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QContextMenuEvent*) ```
void q_toolbutton_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, QTabletEvent* event ```
void q_toolbutton_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, QTabletEvent* event ```
void q_toolbutton_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QTabletEvent*) ```
void q_toolbutton_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, QDragEnterEvent* event ```
void q_toolbutton_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, QDragEnterEvent* event ```
void q_toolbutton_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QDragEnterEvent*) ```
void q_toolbutton_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, QDragMoveEvent* event ```
void q_toolbutton_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, QDragMoveEvent* event ```
void q_toolbutton_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QDragMoveEvent*) ```
void q_toolbutton_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, QDragLeaveEvent* event ```
void q_toolbutton_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, QDragLeaveEvent* event ```
void q_toolbutton_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QDragLeaveEvent*) ```
void q_toolbutton_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, QDropEvent* event ```
void q_toolbutton_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, QDropEvent* event ```
void q_toolbutton_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QDropEvent*) ```
void q_toolbutton_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, QShowEvent* event ```
void q_toolbutton_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, QShowEvent* event ```
void q_toolbutton_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QShowEvent*) ```
void q_toolbutton_on_show_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, QHideEvent* event ```
void q_toolbutton_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, QHideEvent* event ```
void q_toolbutton_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QHideEvent*) ```
void q_toolbutton_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, const char* eventType, void* message, intptr_t* result ```
bool q_toolbutton_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, const char* eventType, void* message, intptr_t* result ```
bool q_toolbutton_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, bool (*slot)(QToolButton*, const char*, void*, intptr_t*) ```
void q_toolbutton_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_toolbutton_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_toolbutton_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, int32_t (*slot)(QToolButton*, enum QPaintDevice__PaintDeviceMetric) ```
void q_toolbutton_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, QPainter* painter ```
void q_toolbutton_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, QPainter* painter ```
void q_toolbutton_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QPainter*) ```
void q_toolbutton_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, QPoint* offset ```
QPaintDevice* q_toolbutton_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, QPoint* offset ```
QPaintDevice* q_toolbutton_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, QPaintDevice* (*slot)(QToolButton*, QPoint*) ```
void q_toolbutton_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self ```
QPainter* q_toolbutton_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self ```
QPainter* q_toolbutton_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, QPainter* (*slot)() ```
void q_toolbutton_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, QInputMethodEvent* param1 ```
void q_toolbutton_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, QInputMethodEvent* param1 ```
void q_toolbutton_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QInputMethodEvent*) ```
void q_toolbutton_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_toolbutton_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_toolbutton_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, QVariant* (*slot)(QToolButton*, enum Qt__InputMethodQuery) ```
void q_toolbutton_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, bool next ```
bool q_toolbutton_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, bool next ```
bool q_toolbutton_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, bool (*slot)(QToolButton*, bool) ```
void q_toolbutton_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, QObject* watched, QEvent* event ```
bool q_toolbutton_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, QObject* watched, QEvent* event ```
bool q_toolbutton_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, bool (*slot)(QToolButton*, QObject*, QEvent*) ```
void q_toolbutton_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, QChildEvent* event ```
void q_toolbutton_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, QChildEvent* event ```
void q_toolbutton_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QChildEvent*) ```
void q_toolbutton_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, QEvent* event ```
void q_toolbutton_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, QEvent* event ```
void q_toolbutton_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QEvent*) ```
void q_toolbutton_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, QMetaMethod* signal ```
void q_toolbutton_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, QMetaMethod* signal ```
void q_toolbutton_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QMetaMethod*) ```
void q_toolbutton_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, QMetaMethod* signal ```
void q_toolbutton_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, QMetaMethod* signal ```
void q_toolbutton_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, void (*slot)(QToolButton*, QMetaMethod*) ```
void q_toolbutton_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self ```
void q_toolbutton_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self ```
void q_toolbutton_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, void (*slot)() ```
void q_toolbutton_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self ```
void q_toolbutton_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self ```
void q_toolbutton_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, void (*slot)() ```
void q_toolbutton_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self ```
void q_toolbutton_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self ```
void q_toolbutton_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, void (*slot)() ```
void q_toolbutton_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self ```
bool q_toolbutton_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self ```
bool q_toolbutton_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, bool (*slot)() ```
void q_toolbutton_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self ```
bool q_toolbutton_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self ```
bool q_toolbutton_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, bool (*slot)() ```
void q_toolbutton_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self ```
QObject* q_toolbutton_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self ```
QObject* q_toolbutton_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, QObject* (*slot)() ```
void q_toolbutton_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self ```
int32_t q_toolbutton_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self ```
int32_t q_toolbutton_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, int32_t (*slot)() ```
void q_toolbutton_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, const char* signal ```
int32_t q_toolbutton_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, const char* signal ```
int32_t q_toolbutton_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, int32_t (*slot)(QToolButton*, const char*) ```
void q_toolbutton_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolButton* self, QMetaMethod* signal ```
bool q_toolbutton_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolButton* self, QMetaMethod* signal ```
bool q_toolbutton_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolButton* self, bool (*slot)(QToolButton*, QMetaMethod*) ```
void q_toolbutton_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QToolButton* self, void (*slot)(QObject*, const char*) ```
void q_toolbutton_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#dtor.QToolButton)
///
/// Delete this object from C++ memory.
///
/// ``` QToolButton* self ```
void q_toolbutton_delete(void* self);

/// https://doc.qt.io/qt-6/qtoolbutton.html#types

typedef enum {
    QTOOLBUTTON_TOOLBUTTONPOPUPMODE_DELAYEDPOPUP = 0,
    QTOOLBUTTON_TOOLBUTTONPOPUPMODE_MENUBUTTONPOPUP = 1,
    QTOOLBUTTON_TOOLBUTTONPOPUPMODE_INSTANTPOPUP = 2
} QToolButton__ToolButtonPopupMode;

#endif
