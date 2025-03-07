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
#include "libqpushbutton.hpp"
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
#include "libqcommandlinkbutton.hpp"
#include "libqcommandlinkbutton.h"

/// https://doc.qt.io/qt-6/qcommandlinkbutton.html

/// q_commandlinkbutton_new constructs a new QCommandLinkButton object.
///
/// ``` QWidget* parent ```
QCommandLinkButton* q_commandlinkbutton_new(void* parent) {
    return QCommandLinkButton_new((QWidget*)parent);
}

/// q_commandlinkbutton_new2 constructs a new QCommandLinkButton object.
///
///
QCommandLinkButton* q_commandlinkbutton_new2() {
    return QCommandLinkButton_new2();
}

/// q_commandlinkbutton_new3 constructs a new QCommandLinkButton object.
///
/// ``` const char* text ```
QCommandLinkButton* q_commandlinkbutton_new3(const char* text) {
    return QCommandLinkButton_new3(qstring(text));
}

/// q_commandlinkbutton_new4 constructs a new QCommandLinkButton object.
///
/// ``` const char* text, const char* description ```
QCommandLinkButton* q_commandlinkbutton_new4(const char* text, const char* description) {
    return QCommandLinkButton_new4(qstring(text), qstring(description));
}

/// q_commandlinkbutton_new5 constructs a new QCommandLinkButton object.
///
/// ``` const char* text, QWidget* parent ```
QCommandLinkButton* q_commandlinkbutton_new5(const char* text, void* parent) {
    return QCommandLinkButton_new5(qstring(text), (QWidget*)parent);
}

/// q_commandlinkbutton_new6 constructs a new QCommandLinkButton object.
///
/// ``` const char* text, const char* description, QWidget* parent ```
QCommandLinkButton* q_commandlinkbutton_new6(const char* text, const char* description, void* parent) {
    return QCommandLinkButton_new6(qstring(text), qstring(description), (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QCommandLinkButton* self ```
QMetaObject* q_commandlinkbutton_meta_object(void* self) {
    return QCommandLinkButton_MetaObject((QCommandLinkButton*)self);
}

/// ``` QCommandLinkButton* self, const char* param1 ```
void* q_commandlinkbutton_metacast(void* self, const char* param1) {
    return QCommandLinkButton_Metacast((QCommandLinkButton*)self, param1);
}

/// ``` QCommandLinkButton* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_commandlinkbutton_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCommandLinkButton_Metacall((QCommandLinkButton*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QCommandLinkButton* self, int32_t (*slot)(QCommandLinkButton*, enum QMetaObject__Call, int, void*) ```
void q_commandlinkbutton_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QCommandLinkButton_OnMetacall((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCommandLinkButton* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_commandlinkbutton_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCommandLinkButton_QBaseMetacall((QCommandLinkButton*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_commandlinkbutton_tr(const char* s) {
    libqt_string _str = QCommandLinkButton_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlinkbutton.html#description)
///
/// ``` QCommandLinkButton* self ```
const char* q_commandlinkbutton_description(void* self) {
    libqt_string _str = QCommandLinkButton_Description((QCommandLinkButton*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlinkbutton.html#setDescription)
///
/// ``` QCommandLinkButton* self, const char* description ```
void q_commandlinkbutton_set_description(void* self, const char* description) {
    QCommandLinkButton_SetDescription((QCommandLinkButton*)self, qstring(description));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlinkbutton.html#sizeHint)
///
/// ``` QCommandLinkButton* self ```
QSize* q_commandlinkbutton_size_hint(void* self) {
    return QCommandLinkButton_SizeHint((QCommandLinkButton*)self);
}

/// Allows for overriding the related default method
///
/// ``` QCommandLinkButton* self, QSize* (*slot)() ```
void q_commandlinkbutton_on_size_hint(void* self, QSize* (*slot)()) {
    QCommandLinkButton_OnSizeHint((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCommandLinkButton* self ```
QSize* q_commandlinkbutton_qbase_size_hint(void* self) {
    return QCommandLinkButton_QBaseSizeHint((QCommandLinkButton*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlinkbutton.html#heightForWidth)
///
/// ``` QCommandLinkButton* self, int param1 ```
int32_t q_commandlinkbutton_height_for_width(void* self, int param1) {
    return QCommandLinkButton_HeightForWidth((QCommandLinkButton*)self, param1);
}

/// Allows for overriding the related default method
///
/// ``` QCommandLinkButton* self, int32_t (*slot)(QCommandLinkButton*, int) ```
void q_commandlinkbutton_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QCommandLinkButton_OnHeightForWidth((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCommandLinkButton* self, int param1 ```
int32_t q_commandlinkbutton_qbase_height_for_width(void* self, int param1) {
    return QCommandLinkButton_QBaseHeightForWidth((QCommandLinkButton*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlinkbutton.html#minimumSizeHint)
///
/// ``` QCommandLinkButton* self ```
QSize* q_commandlinkbutton_minimum_size_hint(void* self) {
    return QCommandLinkButton_MinimumSizeHint((QCommandLinkButton*)self);
}

/// Allows for overriding the related default method
///
/// ``` QCommandLinkButton* self, QSize* (*slot)() ```
void q_commandlinkbutton_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QCommandLinkButton_OnMinimumSizeHint((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCommandLinkButton* self ```
QSize* q_commandlinkbutton_qbase_minimum_size_hint(void* self) {
    return QCommandLinkButton_QBaseMinimumSizeHint((QCommandLinkButton*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlinkbutton.html#initStyleOption)
///
/// ``` QCommandLinkButton* self, QStyleOptionButton* option ```
void q_commandlinkbutton_init_style_option(void* self, void* option) {
    QCommandLinkButton_InitStyleOption((QCommandLinkButton*)self, (QStyleOptionButton*)option);
}

/// Allows for overriding the related default method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QStyleOptionButton*) ```
void q_commandlinkbutton_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnInitStyleOption((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCommandLinkButton* self, QStyleOptionButton* option ```
void q_commandlinkbutton_qbase_init_style_option(void* self, void* option) {
    QCommandLinkButton_QBaseInitStyleOption((QCommandLinkButton*)self, (QStyleOptionButton*)option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlinkbutton.html#event)
///
/// ``` QCommandLinkButton* self, QEvent* e ```
bool q_commandlinkbutton_event(void* self, void* e) {
    return QCommandLinkButton_Event((QCommandLinkButton*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QCommandLinkButton* self, bool (*slot)(QCommandLinkButton*, QEvent*) ```
void q_commandlinkbutton_on_event(void* self, bool (*slot)(void*, void*)) {
    QCommandLinkButton_OnEvent((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCommandLinkButton* self, QEvent* e ```
bool q_commandlinkbutton_qbase_event(void* self, void* e) {
    return QCommandLinkButton_QBaseEvent((QCommandLinkButton*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlinkbutton.html#paintEvent)
///
/// ``` QCommandLinkButton* self, QPaintEvent* param1 ```
void q_commandlinkbutton_paint_event(void* self, void* param1) {
    QCommandLinkButton_PaintEvent((QCommandLinkButton*)self, (QPaintEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QPaintEvent*) ```
void q_commandlinkbutton_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnPaintEvent((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCommandLinkButton* self, QPaintEvent* param1 ```
void q_commandlinkbutton_qbase_paint_event(void* self, void* param1) {
    QCommandLinkButton_QBasePaintEvent((QCommandLinkButton*)self, (QPaintEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_commandlinkbutton_tr2(const char* s, const char* c) {
    libqt_string _str = QCommandLinkButton_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_commandlinkbutton_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QCommandLinkButton_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QPushButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#autoDefault)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_auto_default(void* self) {
    return QPushButton_AutoDefault((QPushButton*)self);
}

/// Inherited from QPushButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#setAutoDefault)
///
/// ``` QCommandLinkButton* self, bool autoDefault ```
void q_commandlinkbutton_set_auto_default(void* self, bool autoDefault) {
    QPushButton_SetAutoDefault((QPushButton*)self, autoDefault);
}

/// Inherited from QPushButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#isDefault)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_is_default(void* self) {
    return QPushButton_IsDefault((QPushButton*)self);
}

/// Inherited from QPushButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#setDefault)
///
/// ``` QCommandLinkButton* self, bool defaultVal ```
void q_commandlinkbutton_set_default(void* self, bool defaultVal) {
    QPushButton_SetDefault((QPushButton*)self, defaultVal);
}

/// Inherited from QPushButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#setMenu)
///
/// ``` QCommandLinkButton* self, QMenu* menu ```
void q_commandlinkbutton_set_menu(void* self, void* menu) {
    QPushButton_SetMenu((QPushButton*)self, (QMenu*)menu);
}

/// Inherited from QPushButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#menu)
///
/// ``` QCommandLinkButton* self ```
QMenu* q_commandlinkbutton_menu(void* self) {
    return QPushButton_Menu((QPushButton*)self);
}

/// Inherited from QPushButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#setFlat)
///
/// ``` QCommandLinkButton* self, bool flat ```
void q_commandlinkbutton_set_flat(void* self, bool flat) {
    QPushButton_SetFlat((QPushButton*)self, flat);
}

/// Inherited from QPushButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#isFlat)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_is_flat(void* self) {
    return QPushButton_IsFlat((QPushButton*)self);
}

/// Inherited from QPushButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#showMenu)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_show_menu(void* self) {
    QPushButton_ShowMenu((QPushButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setText)
///
/// ``` QCommandLinkButton* self, const char* text ```
void q_commandlinkbutton_set_text(void* self, const char* text) {
    QAbstractButton_SetText((QAbstractButton*)self, qstring(text));
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#text)
///
/// ``` QCommandLinkButton* self ```
const char* q_commandlinkbutton_text(void* self) {
    libqt_string _str = QAbstractButton_Text((QAbstractButton*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setIcon)
///
/// ``` QCommandLinkButton* self, QIcon* icon ```
void q_commandlinkbutton_set_icon(void* self, void* icon) {
    QAbstractButton_SetIcon((QAbstractButton*)self, (QIcon*)icon);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#icon)
///
/// ``` QCommandLinkButton* self ```
QIcon* q_commandlinkbutton_icon(void* self) {
    return QAbstractButton_Icon((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#iconSize)
///
/// ``` QCommandLinkButton* self ```
QSize* q_commandlinkbutton_icon_size(void* self) {
    return QAbstractButton_IconSize((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setShortcut)
///
/// ``` QCommandLinkButton* self, QKeySequence* key ```
void q_commandlinkbutton_set_shortcut(void* self, void* key) {
    QAbstractButton_SetShortcut((QAbstractButton*)self, (QKeySequence*)key);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#shortcut)
///
/// ``` QCommandLinkButton* self ```
QKeySequence* q_commandlinkbutton_shortcut(void* self) {
    return QAbstractButton_Shortcut((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setCheckable)
///
/// ``` QCommandLinkButton* self, bool checkable ```
void q_commandlinkbutton_set_checkable(void* self, bool checkable) {
    QAbstractButton_SetCheckable((QAbstractButton*)self, checkable);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#isCheckable)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_is_checkable(void* self) {
    return QAbstractButton_IsCheckable((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#isChecked)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_is_checked(void* self) {
    return QAbstractButton_IsChecked((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setDown)
///
/// ``` QCommandLinkButton* self, bool down ```
void q_commandlinkbutton_set_down(void* self, bool down) {
    QAbstractButton_SetDown((QAbstractButton*)self, down);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#isDown)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_is_down(void* self) {
    return QAbstractButton_IsDown((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeat)
///
/// ``` QCommandLinkButton* self, bool autoRepeat ```
void q_commandlinkbutton_set_auto_repeat(void* self, bool autoRepeat) {
    QAbstractButton_SetAutoRepeat((QAbstractButton*)self, autoRepeat);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeat)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_auto_repeat(void* self) {
    return QAbstractButton_AutoRepeat((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeatDelay)
///
/// ``` QCommandLinkButton* self, int autoRepeatDelay ```
void q_commandlinkbutton_set_auto_repeat_delay(void* self, int autoRepeatDelay) {
    QAbstractButton_SetAutoRepeatDelay((QAbstractButton*)self, autoRepeatDelay);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeatDelay)
///
/// ``` QCommandLinkButton* self ```
int32_t q_commandlinkbutton_auto_repeat_delay(void* self) {
    return QAbstractButton_AutoRepeatDelay((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeatInterval)
///
/// ``` QCommandLinkButton* self, int autoRepeatInterval ```
void q_commandlinkbutton_set_auto_repeat_interval(void* self, int autoRepeatInterval) {
    QAbstractButton_SetAutoRepeatInterval((QAbstractButton*)self, autoRepeatInterval);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeatInterval)
///
/// ``` QCommandLinkButton* self ```
int32_t q_commandlinkbutton_auto_repeat_interval(void* self) {
    return QAbstractButton_AutoRepeatInterval((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoExclusive)
///
/// ``` QCommandLinkButton* self, bool autoExclusive ```
void q_commandlinkbutton_set_auto_exclusive(void* self, bool autoExclusive) {
    QAbstractButton_SetAutoExclusive((QAbstractButton*)self, autoExclusive);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#autoExclusive)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_auto_exclusive(void* self) {
    return QAbstractButton_AutoExclusive((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#group)
///
/// ``` QCommandLinkButton* self ```
QButtonGroup* q_commandlinkbutton_group(void* self) {
    return QAbstractButton_Group((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setIconSize)
///
/// ``` QCommandLinkButton* self, QSize* size ```
void q_commandlinkbutton_set_icon_size(void* self, void* size) {
    QAbstractButton_SetIconSize((QAbstractButton*)self, (QSize*)size);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#animateClick)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_animate_click(void* self) {
    QAbstractButton_AnimateClick((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#click)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_click(void* self) {
    QAbstractButton_Click((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#toggle)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_toggle(void* self) {
    QAbstractButton_Toggle((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setChecked)
///
/// ``` QCommandLinkButton* self, bool checked ```
void q_commandlinkbutton_set_checked(void* self, bool checked) {
    QAbstractButton_SetChecked((QAbstractButton*)self, checked);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#pressed)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_pressed(void* self) {
    QAbstractButton_Pressed((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// ``` QCommandLinkButton* self, void (*slot)(QAbstractButton*) ```
void q_commandlinkbutton_on_pressed(void* self, void (*slot)(void*)) {
    QAbstractButton_Connect_Pressed((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#released)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_released(void* self) {
    QAbstractButton_Released((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// ``` QCommandLinkButton* self, void (*slot)(QAbstractButton*) ```
void q_commandlinkbutton_on_released(void* self, void (*slot)(void*)) {
    QAbstractButton_Connect_Released((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_clicked(void* self) {
    QAbstractButton_Clicked((QAbstractButton*)self);
}

/// Inherited from QAbstractButton
///
/// ``` QCommandLinkButton* self, void (*slot)(QAbstractButton*) ```
void q_commandlinkbutton_on_clicked(void* self, void (*slot)(void*)) {
    QAbstractButton_Connect_Clicked((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#toggled)
///
/// ``` QCommandLinkButton* self, bool checked ```
void q_commandlinkbutton_toggled(void* self, bool checked) {
    QAbstractButton_Toggled((QAbstractButton*)self, checked);
}

/// Inherited from QAbstractButton
///
/// ``` QCommandLinkButton* self, void (*slot)(QAbstractButton*, bool) ```
void q_commandlinkbutton_on_toggled(void* self, void (*slot)(void*, bool)) {
    QAbstractButton_Connect_Toggled((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// ``` QCommandLinkButton* self, bool checked ```
void q_commandlinkbutton_clicked1(void* self, bool checked) {
    QAbstractButton_Clicked1((QAbstractButton*)self, checked);
}

/// Inherited from QAbstractButton
///
/// ``` QCommandLinkButton* self, void (*slot)(QAbstractButton*, bool) ```
void q_commandlinkbutton_on_clicked1(void* self, void (*slot)(void*, bool)) {
    QAbstractButton_Connect_Clicked1((QAbstractButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QCommandLinkButton* self ```
uintptr_t q_commandlinkbutton_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QCommandLinkButton* self ```
uintptr_t q_commandlinkbutton_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QCommandLinkButton* self ```
uintptr_t q_commandlinkbutton_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QCommandLinkButton* self ```
QStyle* q_commandlinkbutton_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QCommandLinkButton* self, QStyle* style ```
void q_commandlinkbutton_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QCommandLinkButton* self ```
int64_t q_commandlinkbutton_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QCommandLinkButton* self, enum Qt__WindowModality windowModality ```
void q_commandlinkbutton_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QCommandLinkButton* self, QWidget* param1 ```
bool q_commandlinkbutton_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QCommandLinkButton* self, bool enabled ```
void q_commandlinkbutton_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QCommandLinkButton* self, bool disabled ```
void q_commandlinkbutton_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QCommandLinkButton* self, bool windowModified ```
void q_commandlinkbutton_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QCommandLinkButton* self ```
QRect* q_commandlinkbutton_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QCommandLinkButton* self ```
QRect* q_commandlinkbutton_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QCommandLinkButton* self ```
QRect* q_commandlinkbutton_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QCommandLinkButton* self ```
int32_t q_commandlinkbutton_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QCommandLinkButton* self ```
int32_t q_commandlinkbutton_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QCommandLinkButton* self ```
QPoint* q_commandlinkbutton_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QCommandLinkButton* self ```
QSize* q_commandlinkbutton_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QCommandLinkButton* self ```
QSize* q_commandlinkbutton_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QCommandLinkButton* self ```
int32_t q_commandlinkbutton_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QCommandLinkButton* self ```
int32_t q_commandlinkbutton_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QCommandLinkButton* self ```
QRect* q_commandlinkbutton_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QCommandLinkButton* self ```
QRect* q_commandlinkbutton_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QCommandLinkButton* self ```
QRegion* q_commandlinkbutton_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QCommandLinkButton* self ```
QSize* q_commandlinkbutton_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QCommandLinkButton* self ```
QSize* q_commandlinkbutton_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QCommandLinkButton* self ```
int32_t q_commandlinkbutton_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QCommandLinkButton* self ```
int32_t q_commandlinkbutton_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QCommandLinkButton* self ```
int32_t q_commandlinkbutton_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QCommandLinkButton* self ```
int32_t q_commandlinkbutton_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QCommandLinkButton* self, QSize* minimumSize ```
void q_commandlinkbutton_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QCommandLinkButton* self, int minw, int minh ```
void q_commandlinkbutton_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QCommandLinkButton* self, QSize* maximumSize ```
void q_commandlinkbutton_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QCommandLinkButton* self, int maxw, int maxh ```
void q_commandlinkbutton_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QCommandLinkButton* self, int minw ```
void q_commandlinkbutton_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QCommandLinkButton* self, int minh ```
void q_commandlinkbutton_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QCommandLinkButton* self, int maxw ```
void q_commandlinkbutton_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QCommandLinkButton* self, int maxh ```
void q_commandlinkbutton_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QCommandLinkButton* self ```
QSize* q_commandlinkbutton_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QCommandLinkButton* self, QSize* sizeIncrement ```
void q_commandlinkbutton_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QCommandLinkButton* self, int w, int h ```
void q_commandlinkbutton_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QCommandLinkButton* self ```
QSize* q_commandlinkbutton_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QCommandLinkButton* self, QSize* baseSize ```
void q_commandlinkbutton_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QCommandLinkButton* self, int basew, int baseh ```
void q_commandlinkbutton_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QCommandLinkButton* self, QSize* fixedSize ```
void q_commandlinkbutton_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QCommandLinkButton* self, int w, int h ```
void q_commandlinkbutton_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QCommandLinkButton* self, int w ```
void q_commandlinkbutton_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QCommandLinkButton* self, int h ```
void q_commandlinkbutton_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QCommandLinkButton* self, QPointF* param1 ```
QPointF* q_commandlinkbutton_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QCommandLinkButton* self, QPoint* param1 ```
QPoint* q_commandlinkbutton_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QCommandLinkButton* self, QPointF* param1 ```
QPointF* q_commandlinkbutton_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QCommandLinkButton* self, QPoint* param1 ```
QPoint* q_commandlinkbutton_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QCommandLinkButton* self, QPointF* param1 ```
QPointF* q_commandlinkbutton_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QCommandLinkButton* self, QPoint* param1 ```
QPoint* q_commandlinkbutton_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QCommandLinkButton* self, QPointF* param1 ```
QPointF* q_commandlinkbutton_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QCommandLinkButton* self, QPoint* param1 ```
QPoint* q_commandlinkbutton_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QCommandLinkButton* self, QWidget* param1, QPointF* param2 ```
QPointF* q_commandlinkbutton_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QCommandLinkButton* self, QWidget* param1, QPoint* param2 ```
QPoint* q_commandlinkbutton_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QCommandLinkButton* self, QWidget* param1, QPointF* param2 ```
QPointF* q_commandlinkbutton_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QCommandLinkButton* self, QWidget* param1, QPoint* param2 ```
QPoint* q_commandlinkbutton_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QCommandLinkButton* self ```
QWidget* q_commandlinkbutton_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QCommandLinkButton* self ```
QWidget* q_commandlinkbutton_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QCommandLinkButton* self ```
QWidget* q_commandlinkbutton_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QCommandLinkButton* self ```
QPalette* q_commandlinkbutton_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QCommandLinkButton* self, QPalette* palette ```
void q_commandlinkbutton_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QCommandLinkButton* self, enum QPalette__ColorRole backgroundRole ```
void q_commandlinkbutton_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QCommandLinkButton* self ```
int64_t q_commandlinkbutton_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QCommandLinkButton* self, enum QPalette__ColorRole foregroundRole ```
void q_commandlinkbutton_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QCommandLinkButton* self ```
int64_t q_commandlinkbutton_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QCommandLinkButton* self ```
QFont* q_commandlinkbutton_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QCommandLinkButton* self, QFont* font ```
void q_commandlinkbutton_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QCommandLinkButton* self ```
QFontMetrics* q_commandlinkbutton_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QCommandLinkButton* self ```
QFontInfo* q_commandlinkbutton_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QCommandLinkButton* self ```
QCursor* q_commandlinkbutton_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QCommandLinkButton* self, QCursor* cursor ```
void q_commandlinkbutton_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QCommandLinkButton* self, bool enable ```
void q_commandlinkbutton_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QCommandLinkButton* self, bool enable ```
void q_commandlinkbutton_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QCommandLinkButton* self, QBitmap* mask ```
void q_commandlinkbutton_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QCommandLinkButton* self, QRegion* mask ```
void q_commandlinkbutton_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QCommandLinkButton* self ```
QRegion* q_commandlinkbutton_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCommandLinkButton* self, QPaintDevice* target ```
void q_commandlinkbutton_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCommandLinkButton* self, QPainter* painter ```
void q_commandlinkbutton_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QCommandLinkButton* self ```
QPixmap* q_commandlinkbutton_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QCommandLinkButton* self ```
QGraphicsEffect* q_commandlinkbutton_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QCommandLinkButton* self, QGraphicsEffect* effect ```
void q_commandlinkbutton_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QCommandLinkButton* self, enum Qt__GestureType typeVal ```
void q_commandlinkbutton_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QCommandLinkButton* self, enum Qt__GestureType typeVal ```
void q_commandlinkbutton_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QCommandLinkButton* self, const char* windowTitle ```
void q_commandlinkbutton_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QCommandLinkButton* self, const char* styleSheet ```
void q_commandlinkbutton_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QCommandLinkButton* self ```
const char* q_commandlinkbutton_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QCommandLinkButton* self ```
const char* q_commandlinkbutton_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QCommandLinkButton* self, QIcon* icon ```
void q_commandlinkbutton_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QCommandLinkButton* self ```
QIcon* q_commandlinkbutton_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QCommandLinkButton* self, const char* windowIconText ```
void q_commandlinkbutton_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QCommandLinkButton* self ```
const char* q_commandlinkbutton_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QCommandLinkButton* self, const char* windowRole ```
void q_commandlinkbutton_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QCommandLinkButton* self ```
const char* q_commandlinkbutton_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QCommandLinkButton* self, const char* filePath ```
void q_commandlinkbutton_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QCommandLinkButton* self ```
const char* q_commandlinkbutton_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QCommandLinkButton* self, double level ```
void q_commandlinkbutton_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QCommandLinkButton* self ```
double q_commandlinkbutton_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QCommandLinkButton* self, const char* toolTip ```
void q_commandlinkbutton_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QCommandLinkButton* self ```
const char* q_commandlinkbutton_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QCommandLinkButton* self, int msec ```
void q_commandlinkbutton_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QCommandLinkButton* self ```
int32_t q_commandlinkbutton_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QCommandLinkButton* self, const char* statusTip ```
void q_commandlinkbutton_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QCommandLinkButton* self ```
const char* q_commandlinkbutton_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QCommandLinkButton* self, const char* whatsThis ```
void q_commandlinkbutton_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QCommandLinkButton* self ```
const char* q_commandlinkbutton_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QCommandLinkButton* self ```
const char* q_commandlinkbutton_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QCommandLinkButton* self, const char* name ```
void q_commandlinkbutton_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QCommandLinkButton* self ```
const char* q_commandlinkbutton_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QCommandLinkButton* self, const char* description ```
void q_commandlinkbutton_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QCommandLinkButton* self, enum Qt__LayoutDirection direction ```
void q_commandlinkbutton_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QCommandLinkButton* self ```
int64_t q_commandlinkbutton_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QCommandLinkButton* self, QLocale* locale ```
void q_commandlinkbutton_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QCommandLinkButton* self ```
QLocale* q_commandlinkbutton_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QCommandLinkButton* self, enum Qt__FocusReason reason ```
void q_commandlinkbutton_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QCommandLinkButton* self ```
int64_t q_commandlinkbutton_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QCommandLinkButton* self, enum Qt__FocusPolicy policy ```
void q_commandlinkbutton_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_commandlinkbutton_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QCommandLinkButton* self, QWidget* focusProxy ```
void q_commandlinkbutton_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QCommandLinkButton* self ```
QWidget* q_commandlinkbutton_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QCommandLinkButton* self ```
int64_t q_commandlinkbutton_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QCommandLinkButton* self, enum Qt__ContextMenuPolicy policy ```
void q_commandlinkbutton_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QCommandLinkButton* self, QCursor* param1 ```
void q_commandlinkbutton_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QCommandLinkButton* self, QKeySequence* key ```
int32_t q_commandlinkbutton_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QCommandLinkButton* self, int id ```
void q_commandlinkbutton_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QCommandLinkButton* self, int id ```
void q_commandlinkbutton_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QCommandLinkButton* self, int id ```
void q_commandlinkbutton_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_commandlinkbutton_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_commandlinkbutton_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QCommandLinkButton* self, bool enable ```
void q_commandlinkbutton_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QCommandLinkButton* self ```
QGraphicsProxyWidget* q_commandlinkbutton_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QCommandLinkButton* self, int x, int y, int w, int h ```
void q_commandlinkbutton_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QCommandLinkButton* self, QRect* param1 ```
void q_commandlinkbutton_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QCommandLinkButton* self, QRegion* param1 ```
void q_commandlinkbutton_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QCommandLinkButton* self, int x, int y, int w, int h ```
void q_commandlinkbutton_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QCommandLinkButton* self, QRect* param1 ```
void q_commandlinkbutton_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QCommandLinkButton* self, QRegion* param1 ```
void q_commandlinkbutton_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QCommandLinkButton* self, bool hidden ```
void q_commandlinkbutton_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QCommandLinkButton* self, QWidget* param1 ```
void q_commandlinkbutton_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QCommandLinkButton* self, int x, int y ```
void q_commandlinkbutton_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QCommandLinkButton* self, QPoint* param1 ```
void q_commandlinkbutton_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QCommandLinkButton* self, int w, int h ```
void q_commandlinkbutton_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QCommandLinkButton* self, QSize* param1 ```
void q_commandlinkbutton_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QCommandLinkButton* self, int x, int y, int w, int h ```
void q_commandlinkbutton_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QCommandLinkButton* self, QRect* geometry ```
void q_commandlinkbutton_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QCommandLinkButton* self ```
char* q_commandlinkbutton_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QCommandLinkButton* self, const char* geometry ```
bool q_commandlinkbutton_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QCommandLinkButton* self, QWidget* param1 ```
bool q_commandlinkbutton_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QCommandLinkButton* self ```
int64_t q_commandlinkbutton_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QCommandLinkButton* self, int state ```
void q_commandlinkbutton_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QCommandLinkButton* self, int state ```
void q_commandlinkbutton_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QCommandLinkButton* self ```
QSizePolicy* q_commandlinkbutton_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QCommandLinkButton* self, QSizePolicy* sizePolicy ```
void q_commandlinkbutton_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QCommandLinkButton* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_commandlinkbutton_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QCommandLinkButton* self ```
QRegion* q_commandlinkbutton_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QCommandLinkButton* self, int left, int top, int right, int bottom ```
void q_commandlinkbutton_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QCommandLinkButton* self, QMargins* margins ```
void q_commandlinkbutton_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QCommandLinkButton* self ```
QMargins* q_commandlinkbutton_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QCommandLinkButton* self ```
QRect* q_commandlinkbutton_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QCommandLinkButton* self ```
QLayout* q_commandlinkbutton_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QCommandLinkButton* self, QLayout* layout ```
void q_commandlinkbutton_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QCommandLinkButton* self, QWidget* parent ```
void q_commandlinkbutton_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QCommandLinkButton* self, QWidget* parent, int f ```
void q_commandlinkbutton_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QCommandLinkButton* self, int dx, int dy ```
void q_commandlinkbutton_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QCommandLinkButton* self, int dx, int dy, QRect* param3 ```
void q_commandlinkbutton_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QCommandLinkButton* self ```
QWidget* q_commandlinkbutton_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QCommandLinkButton* self ```
QWidget* q_commandlinkbutton_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QCommandLinkButton* self ```
QWidget* q_commandlinkbutton_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QCommandLinkButton* self, bool on ```
void q_commandlinkbutton_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QCommandLinkButton* self, QAction* action ```
void q_commandlinkbutton_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QCommandLinkButton* self, QAction* actions[] ```
void q_commandlinkbutton_add_actions(void* self, void* actions[]) {
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
/// ``` QCommandLinkButton* self, QAction* before, QAction* actions[] ```
void q_commandlinkbutton_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QCommandLinkButton* self, QAction* before, QAction* action ```
void q_commandlinkbutton_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QCommandLinkButton* self, QAction* action ```
void q_commandlinkbutton_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QCommandLinkButton* self ```
libqt_list /* of QAction* */ q_commandlinkbutton_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QCommandLinkButton* self, const char* text ```
QAction* q_commandlinkbutton_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QCommandLinkButton* self, QIcon* icon, const char* text ```
QAction* q_commandlinkbutton_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QCommandLinkButton* self, const char* text, QKeySequence* shortcut ```
QAction* q_commandlinkbutton_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QCommandLinkButton* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_commandlinkbutton_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QCommandLinkButton* self ```
QWidget* q_commandlinkbutton_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QCommandLinkButton* self, int typeVal ```
void q_commandlinkbutton_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QCommandLinkButton* self ```
int64_t q_commandlinkbutton_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QCommandLinkButton* self, enum Qt__WindowType param1 ```
void q_commandlinkbutton_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QCommandLinkButton* self, int typeVal ```
void q_commandlinkbutton_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QCommandLinkButton* self ```
int64_t q_commandlinkbutton_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_commandlinkbutton_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QCommandLinkButton* self, int x, int y ```
QWidget* q_commandlinkbutton_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QCommandLinkButton* self, QPoint* p ```
QWidget* q_commandlinkbutton_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QCommandLinkButton* self, enum Qt__WidgetAttribute param1 ```
void q_commandlinkbutton_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QCommandLinkButton* self, enum Qt__WidgetAttribute param1 ```
bool q_commandlinkbutton_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QCommandLinkButton* self, QWidget* child ```
bool q_commandlinkbutton_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QCommandLinkButton* self, bool enabled ```
void q_commandlinkbutton_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QCommandLinkButton* self ```
QBackingStore* q_commandlinkbutton_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QCommandLinkButton* self ```
QWindow* q_commandlinkbutton_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QCommandLinkButton* self ```
QScreen* q_commandlinkbutton_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QCommandLinkButton* self, QScreen* screen ```
void q_commandlinkbutton_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_commandlinkbutton_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QCommandLinkButton* self, const char* title ```
void q_commandlinkbutton_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QCommandLinkButton* self, void (*slot)(QWidget*, const char*) ```
void q_commandlinkbutton_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QCommandLinkButton* self, QIcon* icon ```
void q_commandlinkbutton_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QCommandLinkButton* self, void (*slot)(QWidget*, QIcon*) ```
void q_commandlinkbutton_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QCommandLinkButton* self, const char* iconText ```
void q_commandlinkbutton_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QCommandLinkButton* self, void (*slot)(QWidget*, const char*) ```
void q_commandlinkbutton_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QCommandLinkButton* self, QPoint* pos ```
void q_commandlinkbutton_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QCommandLinkButton* self, void (*slot)(QWidget*, QPoint*) ```
void q_commandlinkbutton_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QCommandLinkButton* self ```
int64_t q_commandlinkbutton_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QCommandLinkButton* self, int hints ```
void q_commandlinkbutton_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCommandLinkButton* self, QPaintDevice* target, QPoint* targetOffset ```
void q_commandlinkbutton_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCommandLinkButton* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_commandlinkbutton_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCommandLinkButton* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_commandlinkbutton_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCommandLinkButton* self, QPainter* painter, QPoint* targetOffset ```
void q_commandlinkbutton_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCommandLinkButton* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_commandlinkbutton_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCommandLinkButton* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_commandlinkbutton_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QCommandLinkButton* self, QRect* rectangle ```
QPixmap* q_commandlinkbutton_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QCommandLinkButton* self, enum Qt__GestureType typeVal, int flags ```
void q_commandlinkbutton_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QCommandLinkButton* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_commandlinkbutton_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QCommandLinkButton* self, int id, bool enable ```
void q_commandlinkbutton_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QCommandLinkButton* self, int id, bool enable ```
void q_commandlinkbutton_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QCommandLinkButton* self, enum Qt__WindowType param1, bool on ```
void q_commandlinkbutton_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QCommandLinkButton* self, enum Qt__WidgetAttribute param1, bool on ```
void q_commandlinkbutton_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_commandlinkbutton_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_commandlinkbutton_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QCommandLinkButton* self ```
const char* q_commandlinkbutton_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QCommandLinkButton* self, const char* name ```
void q_commandlinkbutton_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QCommandLinkButton* self, bool b ```
bool q_commandlinkbutton_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QCommandLinkButton* self ```
QThread* q_commandlinkbutton_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QCommandLinkButton* self, QThread* thread ```
void q_commandlinkbutton_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCommandLinkButton* self, int interval ```
int32_t q_commandlinkbutton_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QCommandLinkButton* self, int id ```
void q_commandlinkbutton_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QCommandLinkButton* self ```
libqt_list /* of QObject* */ q_commandlinkbutton_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QCommandLinkButton* self, QObject* filterObj ```
void q_commandlinkbutton_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QCommandLinkButton* self, QObject* obj ```
void q_commandlinkbutton_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_commandlinkbutton_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCommandLinkButton* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_commandlinkbutton_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_commandlinkbutton_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_commandlinkbutton_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QCommandLinkButton* self, const char* name, QVariant* value ```
bool q_commandlinkbutton_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QCommandLinkButton* self, const char* name ```
QVariant* q_commandlinkbutton_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QCommandLinkButton* self ```
const char** q_commandlinkbutton_dynamic_property_names(void* self) {
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
/// ``` QCommandLinkButton* self ```
QBindingStorage* q_commandlinkbutton_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QCommandLinkButton* self ```
QBindingStorage* q_commandlinkbutton_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QCommandLinkButton* self, void (*slot)(QObject*) ```
void q_commandlinkbutton_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QCommandLinkButton* self ```
QObject* q_commandlinkbutton_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QCommandLinkButton* self, const char* classname ```
bool q_commandlinkbutton_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCommandLinkButton* self, int interval, enum Qt__TimerType timerType ```
int32_t q_commandlinkbutton_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_commandlinkbutton_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCommandLinkButton* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_commandlinkbutton_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCommandLinkButton* self, QObject* param1 ```
void q_commandlinkbutton_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QCommandLinkButton* self, void (*slot)(QObject*, QObject*) ```
void q_commandlinkbutton_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QCommandLinkButton* self ```
int32_t q_commandlinkbutton_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QCommandLinkButton* self ```
int32_t q_commandlinkbutton_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QCommandLinkButton* self ```
int32_t q_commandlinkbutton_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QCommandLinkButton* self ```
int32_t q_commandlinkbutton_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QCommandLinkButton* self ```
int32_t q_commandlinkbutton_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QCommandLinkButton* self ```
int32_t q_commandlinkbutton_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QCommandLinkButton* self ```
double q_commandlinkbutton_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QCommandLinkButton* self ```
double q_commandlinkbutton_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QCommandLinkButton* self ```
int32_t q_commandlinkbutton_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QCommandLinkButton* self ```
int32_t q_commandlinkbutton_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_commandlinkbutton_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QPushButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QKeyEvent* param1 ```
void q_commandlinkbutton_key_press_event(void* self, void* param1) {
    QCommandLinkButton_KeyPressEvent((QCommandLinkButton*)self, (QKeyEvent*)param1);
}

/// Inherited from QPushButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QKeyEvent* param1 ```
void q_commandlinkbutton_qbase_key_press_event(void* self, void* param1) {
    QCommandLinkButton_QBaseKeyPressEvent((QCommandLinkButton*)self, (QKeyEvent*)param1);
}

/// Inherited from QPushButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QKeyEvent*) ```
void q_commandlinkbutton_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnKeyPressEvent((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QPushButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QFocusEvent* param1 ```
void q_commandlinkbutton_focus_in_event(void* self, void* param1) {
    QCommandLinkButton_FocusInEvent((QCommandLinkButton*)self, (QFocusEvent*)param1);
}

/// Inherited from QPushButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QFocusEvent* param1 ```
void q_commandlinkbutton_qbase_focus_in_event(void* self, void* param1) {
    QCommandLinkButton_QBaseFocusInEvent((QCommandLinkButton*)self, (QFocusEvent*)param1);
}

/// Inherited from QPushButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QFocusEvent*) ```
void q_commandlinkbutton_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnFocusInEvent((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QPushButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QFocusEvent* param1 ```
void q_commandlinkbutton_focus_out_event(void* self, void* param1) {
    QCommandLinkButton_FocusOutEvent((QCommandLinkButton*)self, (QFocusEvent*)param1);
}

/// Inherited from QPushButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QFocusEvent* param1 ```
void q_commandlinkbutton_qbase_focus_out_event(void* self, void* param1) {
    QCommandLinkButton_QBaseFocusOutEvent((QCommandLinkButton*)self, (QFocusEvent*)param1);
}

/// Inherited from QPushButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QFocusEvent*) ```
void q_commandlinkbutton_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnFocusOutEvent((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QPushButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QMouseEvent* param1 ```
void q_commandlinkbutton_mouse_move_event(void* self, void* param1) {
    QCommandLinkButton_MouseMoveEvent((QCommandLinkButton*)self, (QMouseEvent*)param1);
}

/// Inherited from QPushButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QMouseEvent* param1 ```
void q_commandlinkbutton_qbase_mouse_move_event(void* self, void* param1) {
    QCommandLinkButton_QBaseMouseMoveEvent((QCommandLinkButton*)self, (QMouseEvent*)param1);
}

/// Inherited from QPushButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QMouseEvent*) ```
void q_commandlinkbutton_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnMouseMoveEvent((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QPushButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpushbutton.html#hitButton)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QPoint* pos ```
bool q_commandlinkbutton_hit_button(void* self, void* pos) {
    return QCommandLinkButton_HitButton((QCommandLinkButton*)self, (QPoint*)pos);
}

/// Inherited from QPushButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QPoint* pos ```
bool q_commandlinkbutton_qbase_hit_button(void* self, void* pos) {
    return QCommandLinkButton_QBaseHitButton((QCommandLinkButton*)self, (QPoint*)pos);
}

/// Inherited from QPushButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, bool (*slot)(QCommandLinkButton*, QPoint*) ```
void q_commandlinkbutton_on_hit_button(void* self, bool (*slot)(void*, void*)) {
    QCommandLinkButton_OnHitButton((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#checkStateSet)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_check_state_set(void* self) {
    QCommandLinkButton_CheckStateSet((QCommandLinkButton*)self);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_qbase_check_state_set(void* self) {
    QCommandLinkButton_QBaseCheckStateSet((QCommandLinkButton*)self);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)() ```
void q_commandlinkbutton_on_check_state_set(void* self, void (*slot)()) {
    QCommandLinkButton_OnCheckStateSet((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#nextCheckState)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_next_check_state(void* self) {
    QCommandLinkButton_NextCheckState((QCommandLinkButton*)self);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_qbase_next_check_state(void* self) {
    QCommandLinkButton_QBaseNextCheckState((QCommandLinkButton*)self);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)() ```
void q_commandlinkbutton_on_next_check_state(void* self, void (*slot)()) {
    QCommandLinkButton_OnNextCheckState((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QKeyEvent* e ```
void q_commandlinkbutton_key_release_event(void* self, void* e) {
    QCommandLinkButton_KeyReleaseEvent((QCommandLinkButton*)self, (QKeyEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QKeyEvent* e ```
void q_commandlinkbutton_qbase_key_release_event(void* self, void* e) {
    QCommandLinkButton_QBaseKeyReleaseEvent((QCommandLinkButton*)self, (QKeyEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QKeyEvent*) ```
void q_commandlinkbutton_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnKeyReleaseEvent((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QMouseEvent* e ```
void q_commandlinkbutton_mouse_press_event(void* self, void* e) {
    QCommandLinkButton_MousePressEvent((QCommandLinkButton*)self, (QMouseEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QMouseEvent* e ```
void q_commandlinkbutton_qbase_mouse_press_event(void* self, void* e) {
    QCommandLinkButton_QBaseMousePressEvent((QCommandLinkButton*)self, (QMouseEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QMouseEvent*) ```
void q_commandlinkbutton_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnMousePressEvent((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QMouseEvent* e ```
void q_commandlinkbutton_mouse_release_event(void* self, void* e) {
    QCommandLinkButton_MouseReleaseEvent((QCommandLinkButton*)self, (QMouseEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QMouseEvent* e ```
void q_commandlinkbutton_qbase_mouse_release_event(void* self, void* e) {
    QCommandLinkButton_QBaseMouseReleaseEvent((QCommandLinkButton*)self, (QMouseEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QMouseEvent*) ```
void q_commandlinkbutton_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnMouseReleaseEvent((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QEvent* e ```
void q_commandlinkbutton_change_event(void* self, void* e) {
    QCommandLinkButton_ChangeEvent((QCommandLinkButton*)self, (QEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QEvent* e ```
void q_commandlinkbutton_qbase_change_event(void* self, void* e) {
    QCommandLinkButton_QBaseChangeEvent((QCommandLinkButton*)self, (QEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QEvent*) ```
void q_commandlinkbutton_on_change_event(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnChangeEvent((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QTimerEvent* e ```
void q_commandlinkbutton_timer_event(void* self, void* e) {
    QCommandLinkButton_TimerEvent((QCommandLinkButton*)self, (QTimerEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QTimerEvent* e ```
void q_commandlinkbutton_qbase_timer_event(void* self, void* e) {
    QCommandLinkButton_QBaseTimerEvent((QCommandLinkButton*)self, (QTimerEvent*)e);
}

/// Inherited from QAbstractButton
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QTimerEvent*) ```
void q_commandlinkbutton_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnTimerEvent((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self ```
int32_t q_commandlinkbutton_dev_type(void* self) {
    return QCommandLinkButton_DevType((QCommandLinkButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self ```
int32_t q_commandlinkbutton_qbase_dev_type(void* self) {
    return QCommandLinkButton_QBaseDevType((QCommandLinkButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, int32_t (*slot)() ```
void q_commandlinkbutton_on_dev_type(void* self, int32_t (*slot)()) {
    QCommandLinkButton_OnDevType((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, bool visible ```
void q_commandlinkbutton_set_visible(void* self, bool visible) {
    QCommandLinkButton_SetVisible((QCommandLinkButton*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, bool visible ```
void q_commandlinkbutton_qbase_set_visible(void* self, bool visible) {
    QCommandLinkButton_QBaseSetVisible((QCommandLinkButton*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, bool) ```
void q_commandlinkbutton_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QCommandLinkButton_OnSetVisible((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_has_height_for_width(void* self) {
    return QCommandLinkButton_HasHeightForWidth((QCommandLinkButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_qbase_has_height_for_width(void* self) {
    return QCommandLinkButton_QBaseHasHeightForWidth((QCommandLinkButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, bool (*slot)() ```
void q_commandlinkbutton_on_has_height_for_width(void* self, bool (*slot)()) {
    QCommandLinkButton_OnHasHeightForWidth((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self ```
QPaintEngine* q_commandlinkbutton_paint_engine(void* self) {
    return QCommandLinkButton_PaintEngine((QCommandLinkButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self ```
QPaintEngine* q_commandlinkbutton_qbase_paint_engine(void* self) {
    return QCommandLinkButton_QBasePaintEngine((QCommandLinkButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QPaintEngine* (*slot)() ```
void q_commandlinkbutton_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QCommandLinkButton_OnPaintEngine((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QMouseEvent* event ```
void q_commandlinkbutton_mouse_double_click_event(void* self, void* event) {
    QCommandLinkButton_MouseDoubleClickEvent((QCommandLinkButton*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QMouseEvent* event ```
void q_commandlinkbutton_qbase_mouse_double_click_event(void* self, void* event) {
    QCommandLinkButton_QBaseMouseDoubleClickEvent((QCommandLinkButton*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QMouseEvent*) ```
void q_commandlinkbutton_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnMouseDoubleClickEvent((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QWheelEvent* event ```
void q_commandlinkbutton_wheel_event(void* self, void* event) {
    QCommandLinkButton_WheelEvent((QCommandLinkButton*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QWheelEvent* event ```
void q_commandlinkbutton_qbase_wheel_event(void* self, void* event) {
    QCommandLinkButton_QBaseWheelEvent((QCommandLinkButton*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QWheelEvent*) ```
void q_commandlinkbutton_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnWheelEvent((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QEnterEvent* event ```
void q_commandlinkbutton_enter_event(void* self, void* event) {
    QCommandLinkButton_EnterEvent((QCommandLinkButton*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QEnterEvent* event ```
void q_commandlinkbutton_qbase_enter_event(void* self, void* event) {
    QCommandLinkButton_QBaseEnterEvent((QCommandLinkButton*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QEnterEvent*) ```
void q_commandlinkbutton_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnEnterEvent((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QEvent* event ```
void q_commandlinkbutton_leave_event(void* self, void* event) {
    QCommandLinkButton_LeaveEvent((QCommandLinkButton*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QEvent* event ```
void q_commandlinkbutton_qbase_leave_event(void* self, void* event) {
    QCommandLinkButton_QBaseLeaveEvent((QCommandLinkButton*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QEvent*) ```
void q_commandlinkbutton_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnLeaveEvent((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QMoveEvent* event ```
void q_commandlinkbutton_move_event(void* self, void* event) {
    QCommandLinkButton_MoveEvent((QCommandLinkButton*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QMoveEvent* event ```
void q_commandlinkbutton_qbase_move_event(void* self, void* event) {
    QCommandLinkButton_QBaseMoveEvent((QCommandLinkButton*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QMoveEvent*) ```
void q_commandlinkbutton_on_move_event(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnMoveEvent((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QResizeEvent* event ```
void q_commandlinkbutton_resize_event(void* self, void* event) {
    QCommandLinkButton_ResizeEvent((QCommandLinkButton*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QResizeEvent* event ```
void q_commandlinkbutton_qbase_resize_event(void* self, void* event) {
    QCommandLinkButton_QBaseResizeEvent((QCommandLinkButton*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QResizeEvent*) ```
void q_commandlinkbutton_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnResizeEvent((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QCloseEvent* event ```
void q_commandlinkbutton_close_event(void* self, void* event) {
    QCommandLinkButton_CloseEvent((QCommandLinkButton*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QCloseEvent* event ```
void q_commandlinkbutton_qbase_close_event(void* self, void* event) {
    QCommandLinkButton_QBaseCloseEvent((QCommandLinkButton*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QCloseEvent*) ```
void q_commandlinkbutton_on_close_event(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnCloseEvent((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QContextMenuEvent* event ```
void q_commandlinkbutton_context_menu_event(void* self, void* event) {
    QCommandLinkButton_ContextMenuEvent((QCommandLinkButton*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QContextMenuEvent* event ```
void q_commandlinkbutton_qbase_context_menu_event(void* self, void* event) {
    QCommandLinkButton_QBaseContextMenuEvent((QCommandLinkButton*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QContextMenuEvent*) ```
void q_commandlinkbutton_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnContextMenuEvent((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QTabletEvent* event ```
void q_commandlinkbutton_tablet_event(void* self, void* event) {
    QCommandLinkButton_TabletEvent((QCommandLinkButton*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QTabletEvent* event ```
void q_commandlinkbutton_qbase_tablet_event(void* self, void* event) {
    QCommandLinkButton_QBaseTabletEvent((QCommandLinkButton*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QTabletEvent*) ```
void q_commandlinkbutton_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnTabletEvent((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QActionEvent* event ```
void q_commandlinkbutton_action_event(void* self, void* event) {
    QCommandLinkButton_ActionEvent((QCommandLinkButton*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QActionEvent* event ```
void q_commandlinkbutton_qbase_action_event(void* self, void* event) {
    QCommandLinkButton_QBaseActionEvent((QCommandLinkButton*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QActionEvent*) ```
void q_commandlinkbutton_on_action_event(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnActionEvent((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QDragEnterEvent* event ```
void q_commandlinkbutton_drag_enter_event(void* self, void* event) {
    QCommandLinkButton_DragEnterEvent((QCommandLinkButton*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QDragEnterEvent* event ```
void q_commandlinkbutton_qbase_drag_enter_event(void* self, void* event) {
    QCommandLinkButton_QBaseDragEnterEvent((QCommandLinkButton*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QDragEnterEvent*) ```
void q_commandlinkbutton_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnDragEnterEvent((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QDragMoveEvent* event ```
void q_commandlinkbutton_drag_move_event(void* self, void* event) {
    QCommandLinkButton_DragMoveEvent((QCommandLinkButton*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QDragMoveEvent* event ```
void q_commandlinkbutton_qbase_drag_move_event(void* self, void* event) {
    QCommandLinkButton_QBaseDragMoveEvent((QCommandLinkButton*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QDragMoveEvent*) ```
void q_commandlinkbutton_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnDragMoveEvent((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QDragLeaveEvent* event ```
void q_commandlinkbutton_drag_leave_event(void* self, void* event) {
    QCommandLinkButton_DragLeaveEvent((QCommandLinkButton*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QDragLeaveEvent* event ```
void q_commandlinkbutton_qbase_drag_leave_event(void* self, void* event) {
    QCommandLinkButton_QBaseDragLeaveEvent((QCommandLinkButton*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QDragLeaveEvent*) ```
void q_commandlinkbutton_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnDragLeaveEvent((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QDropEvent* event ```
void q_commandlinkbutton_drop_event(void* self, void* event) {
    QCommandLinkButton_DropEvent((QCommandLinkButton*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QDropEvent* event ```
void q_commandlinkbutton_qbase_drop_event(void* self, void* event) {
    QCommandLinkButton_QBaseDropEvent((QCommandLinkButton*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QDropEvent*) ```
void q_commandlinkbutton_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnDropEvent((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QShowEvent* event ```
void q_commandlinkbutton_show_event(void* self, void* event) {
    QCommandLinkButton_ShowEvent((QCommandLinkButton*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QShowEvent* event ```
void q_commandlinkbutton_qbase_show_event(void* self, void* event) {
    QCommandLinkButton_QBaseShowEvent((QCommandLinkButton*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QShowEvent*) ```
void q_commandlinkbutton_on_show_event(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnShowEvent((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QHideEvent* event ```
void q_commandlinkbutton_hide_event(void* self, void* event) {
    QCommandLinkButton_HideEvent((QCommandLinkButton*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QHideEvent* event ```
void q_commandlinkbutton_qbase_hide_event(void* self, void* event) {
    QCommandLinkButton_QBaseHideEvent((QCommandLinkButton*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QHideEvent*) ```
void q_commandlinkbutton_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnHideEvent((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, const char* eventType, void* message, intptr_t* result ```
bool q_commandlinkbutton_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QCommandLinkButton_NativeEvent((QCommandLinkButton*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, const char* eventType, void* message, intptr_t* result ```
bool q_commandlinkbutton_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QCommandLinkButton_QBaseNativeEvent((QCommandLinkButton*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, bool (*slot)(QCommandLinkButton*, const char*, void*, intptr_t*) ```
void q_commandlinkbutton_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QCommandLinkButton_OnNativeEvent((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_commandlinkbutton_metric(void* self, int64_t param1) {
    return QCommandLinkButton_Metric((QCommandLinkButton*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_commandlinkbutton_qbase_metric(void* self, int64_t param1) {
    return QCommandLinkButton_QBaseMetric((QCommandLinkButton*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, int32_t (*slot)(QCommandLinkButton*, enum QPaintDevice__PaintDeviceMetric) ```
void q_commandlinkbutton_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QCommandLinkButton_OnMetric((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QPainter* painter ```
void q_commandlinkbutton_init_painter(void* self, void* painter) {
    QCommandLinkButton_InitPainter((QCommandLinkButton*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QPainter* painter ```
void q_commandlinkbutton_qbase_init_painter(void* self, void* painter) {
    QCommandLinkButton_QBaseInitPainter((QCommandLinkButton*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QPainter*) ```
void q_commandlinkbutton_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnInitPainter((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QPoint* offset ```
QPaintDevice* q_commandlinkbutton_redirected(void* self, void* offset) {
    return QCommandLinkButton_Redirected((QCommandLinkButton*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QPoint* offset ```
QPaintDevice* q_commandlinkbutton_qbase_redirected(void* self, void* offset) {
    return QCommandLinkButton_QBaseRedirected((QCommandLinkButton*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QPaintDevice* (*slot)(QCommandLinkButton*, QPoint*) ```
void q_commandlinkbutton_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QCommandLinkButton_OnRedirected((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self ```
QPainter* q_commandlinkbutton_shared_painter(void* self) {
    return QCommandLinkButton_SharedPainter((QCommandLinkButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self ```
QPainter* q_commandlinkbutton_qbase_shared_painter(void* self) {
    return QCommandLinkButton_QBaseSharedPainter((QCommandLinkButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QPainter* (*slot)() ```
void q_commandlinkbutton_on_shared_painter(void* self, QPainter* (*slot)()) {
    QCommandLinkButton_OnSharedPainter((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QInputMethodEvent* param1 ```
void q_commandlinkbutton_input_method_event(void* self, void* param1) {
    QCommandLinkButton_InputMethodEvent((QCommandLinkButton*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QInputMethodEvent* param1 ```
void q_commandlinkbutton_qbase_input_method_event(void* self, void* param1) {
    QCommandLinkButton_QBaseInputMethodEvent((QCommandLinkButton*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QInputMethodEvent*) ```
void q_commandlinkbutton_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnInputMethodEvent((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_commandlinkbutton_input_method_query(void* self, int64_t param1) {
    return QCommandLinkButton_InputMethodQuery((QCommandLinkButton*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_commandlinkbutton_qbase_input_method_query(void* self, int64_t param1) {
    return QCommandLinkButton_QBaseInputMethodQuery((QCommandLinkButton*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QVariant* (*slot)(QCommandLinkButton*, enum Qt__InputMethodQuery) ```
void q_commandlinkbutton_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QCommandLinkButton_OnInputMethodQuery((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, bool next ```
bool q_commandlinkbutton_focus_next_prev_child(void* self, bool next) {
    return QCommandLinkButton_FocusNextPrevChild((QCommandLinkButton*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, bool next ```
bool q_commandlinkbutton_qbase_focus_next_prev_child(void* self, bool next) {
    return QCommandLinkButton_QBaseFocusNextPrevChild((QCommandLinkButton*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, bool (*slot)(QCommandLinkButton*, bool) ```
void q_commandlinkbutton_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QCommandLinkButton_OnFocusNextPrevChild((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QObject* watched, QEvent* event ```
bool q_commandlinkbutton_event_filter(void* self, void* watched, void* event) {
    return QCommandLinkButton_EventFilter((QCommandLinkButton*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QObject* watched, QEvent* event ```
bool q_commandlinkbutton_qbase_event_filter(void* self, void* watched, void* event) {
    return QCommandLinkButton_QBaseEventFilter((QCommandLinkButton*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, bool (*slot)(QCommandLinkButton*, QObject*, QEvent*) ```
void q_commandlinkbutton_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QCommandLinkButton_OnEventFilter((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QChildEvent* event ```
void q_commandlinkbutton_child_event(void* self, void* event) {
    QCommandLinkButton_ChildEvent((QCommandLinkButton*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QChildEvent* event ```
void q_commandlinkbutton_qbase_child_event(void* self, void* event) {
    QCommandLinkButton_QBaseChildEvent((QCommandLinkButton*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QChildEvent*) ```
void q_commandlinkbutton_on_child_event(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnChildEvent((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QEvent* event ```
void q_commandlinkbutton_custom_event(void* self, void* event) {
    QCommandLinkButton_CustomEvent((QCommandLinkButton*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QEvent* event ```
void q_commandlinkbutton_qbase_custom_event(void* self, void* event) {
    QCommandLinkButton_QBaseCustomEvent((QCommandLinkButton*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QEvent*) ```
void q_commandlinkbutton_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnCustomEvent((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QMetaMethod* signal ```
void q_commandlinkbutton_connect_notify(void* self, void* signal) {
    QCommandLinkButton_ConnectNotify((QCommandLinkButton*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QMetaMethod* signal ```
void q_commandlinkbutton_qbase_connect_notify(void* self, void* signal) {
    QCommandLinkButton_QBaseConnectNotify((QCommandLinkButton*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QMetaMethod*) ```
void q_commandlinkbutton_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnConnectNotify((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QMetaMethod* signal ```
void q_commandlinkbutton_disconnect_notify(void* self, void* signal) {
    QCommandLinkButton_DisconnectNotify((QCommandLinkButton*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QMetaMethod* signal ```
void q_commandlinkbutton_qbase_disconnect_notify(void* self, void* signal) {
    QCommandLinkButton_QBaseDisconnectNotify((QCommandLinkButton*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)(QCommandLinkButton*, QMetaMethod*) ```
void q_commandlinkbutton_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QCommandLinkButton_OnDisconnectNotify((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_update_micro_focus(void* self) {
    QCommandLinkButton_UpdateMicroFocus((QCommandLinkButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_qbase_update_micro_focus(void* self) {
    QCommandLinkButton_QBaseUpdateMicroFocus((QCommandLinkButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)() ```
void q_commandlinkbutton_on_update_micro_focus(void* self, void (*slot)()) {
    QCommandLinkButton_OnUpdateMicroFocus((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_create(void* self) {
    QCommandLinkButton_Create((QCommandLinkButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_qbase_create(void* self) {
    QCommandLinkButton_QBaseCreate((QCommandLinkButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)() ```
void q_commandlinkbutton_on_create(void* self, void (*slot)()) {
    QCommandLinkButton_OnCreate((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_destroy(void* self) {
    QCommandLinkButton_Destroy((QCommandLinkButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_qbase_destroy(void* self) {
    QCommandLinkButton_QBaseDestroy((QCommandLinkButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, void (*slot)() ```
void q_commandlinkbutton_on_destroy(void* self, void (*slot)()) {
    QCommandLinkButton_OnDestroy((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_focus_next_child(void* self) {
    return QCommandLinkButton_FocusNextChild((QCommandLinkButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_qbase_focus_next_child(void* self) {
    return QCommandLinkButton_QBaseFocusNextChild((QCommandLinkButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, bool (*slot)() ```
void q_commandlinkbutton_on_focus_next_child(void* self, bool (*slot)()) {
    QCommandLinkButton_OnFocusNextChild((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_focus_previous_child(void* self) {
    return QCommandLinkButton_FocusPreviousChild((QCommandLinkButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self ```
bool q_commandlinkbutton_qbase_focus_previous_child(void* self) {
    return QCommandLinkButton_QBaseFocusPreviousChild((QCommandLinkButton*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, bool (*slot)() ```
void q_commandlinkbutton_on_focus_previous_child(void* self, bool (*slot)()) {
    QCommandLinkButton_OnFocusPreviousChild((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self ```
QObject* q_commandlinkbutton_sender(void* self) {
    return QCommandLinkButton_Sender((QCommandLinkButton*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self ```
QObject* q_commandlinkbutton_qbase_sender(void* self) {
    return QCommandLinkButton_QBaseSender((QCommandLinkButton*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QObject* (*slot)() ```
void q_commandlinkbutton_on_sender(void* self, QObject* (*slot)()) {
    QCommandLinkButton_OnSender((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self ```
int32_t q_commandlinkbutton_sender_signal_index(void* self) {
    return QCommandLinkButton_SenderSignalIndex((QCommandLinkButton*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self ```
int32_t q_commandlinkbutton_qbase_sender_signal_index(void* self) {
    return QCommandLinkButton_QBaseSenderSignalIndex((QCommandLinkButton*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, int32_t (*slot)() ```
void q_commandlinkbutton_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QCommandLinkButton_OnSenderSignalIndex((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, const char* signal ```
int32_t q_commandlinkbutton_receivers(void* self, const char* signal) {
    return QCommandLinkButton_Receivers((QCommandLinkButton*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, const char* signal ```
int32_t q_commandlinkbutton_qbase_receivers(void* self, const char* signal) {
    return QCommandLinkButton_QBaseReceivers((QCommandLinkButton*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, int32_t (*slot)(QCommandLinkButton*, const char*) ```
void q_commandlinkbutton_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QCommandLinkButton_OnReceivers((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommandLinkButton* self, QMetaMethod* signal ```
bool q_commandlinkbutton_is_signal_connected(void* self, void* signal) {
    return QCommandLinkButton_IsSignalConnected((QCommandLinkButton*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommandLinkButton* self, QMetaMethod* signal ```
bool q_commandlinkbutton_qbase_is_signal_connected(void* self, void* signal) {
    return QCommandLinkButton_QBaseIsSignalConnected((QCommandLinkButton*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommandLinkButton* self, bool (*slot)(QCommandLinkButton*, QMetaMethod*) ```
void q_commandlinkbutton_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QCommandLinkButton_OnIsSignalConnected((QCommandLinkButton*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QCommandLinkButton* self ```
void q_commandlinkbutton_delete(void* self) {
    QCommandLinkButton_Delete((QCommandLinkButton*)(self));
}