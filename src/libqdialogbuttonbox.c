#include "libqabstractbutton.hpp"
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
#include "libqpushbutton.hpp"
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
#include "libqdialogbuttonbox.hpp"
#include "libqdialogbuttonbox.h"

/// https://doc.qt.io/qt-6/qdialogbuttonbox.html

/// q_dialogbuttonbox_new constructs a new QDialogButtonBox object.
///
/// ``` QWidget* parent ```
QDialogButtonBox* q_dialogbuttonbox_new(void* parent) {
    return QDialogButtonBox_new((QWidget*)parent);
}

/// q_dialogbuttonbox_new2 constructs a new QDialogButtonBox object.
///
///
QDialogButtonBox* q_dialogbuttonbox_new2() {
    return QDialogButtonBox_new2();
}

/// q_dialogbuttonbox_new3 constructs a new QDialogButtonBox object.
///
/// ``` enum Qt__Orientation orientation ```
QDialogButtonBox* q_dialogbuttonbox_new3(int64_t orientation) {
    return QDialogButtonBox_new3(orientation);
}

/// q_dialogbuttonbox_new4 constructs a new QDialogButtonBox object.
///
/// ``` int buttons ```
QDialogButtonBox* q_dialogbuttonbox_new4(int64_t buttons) {
    return QDialogButtonBox_new4(buttons);
}

/// q_dialogbuttonbox_new5 constructs a new QDialogButtonBox object.
///
/// ``` int buttons, enum Qt__Orientation orientation ```
QDialogButtonBox* q_dialogbuttonbox_new5(int64_t buttons, int64_t orientation) {
    return QDialogButtonBox_new5(buttons, orientation);
}

/// q_dialogbuttonbox_new6 constructs a new QDialogButtonBox object.
///
/// ``` enum Qt__Orientation orientation, QWidget* parent ```
QDialogButtonBox* q_dialogbuttonbox_new6(int64_t orientation, void* parent) {
    return QDialogButtonBox_new6(orientation, (QWidget*)parent);
}

/// q_dialogbuttonbox_new7 constructs a new QDialogButtonBox object.
///
/// ``` int buttons, QWidget* parent ```
QDialogButtonBox* q_dialogbuttonbox_new7(int64_t buttons, void* parent) {
    return QDialogButtonBox_new7(buttons, (QWidget*)parent);
}

/// q_dialogbuttonbox_new8 constructs a new QDialogButtonBox object.
///
/// ``` int buttons, enum Qt__Orientation orientation, QWidget* parent ```
QDialogButtonBox* q_dialogbuttonbox_new8(int64_t buttons, int64_t orientation, void* parent) {
    return QDialogButtonBox_new8(buttons, orientation, (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QDialogButtonBox* self ```
QMetaObject* q_dialogbuttonbox_meta_object(void* self) {
    return QDialogButtonBox_MetaObject((QDialogButtonBox*)self);
}

/// ``` QDialogButtonBox* self, const char* param1 ```
void* q_dialogbuttonbox_metacast(void* self, const char* param1) {
    return QDialogButtonBox_Metacast((QDialogButtonBox*)self, param1);
}

/// ``` QDialogButtonBox* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_dialogbuttonbox_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QDialogButtonBox_Metacall((QDialogButtonBox*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QDialogButtonBox* self, int32_t (*slot)(QDialogButtonBox*, enum QMetaObject__Call, int, void*) ```
void q_dialogbuttonbox_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QDialogButtonBox_OnMetacall((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDialogButtonBox* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_dialogbuttonbox_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QDialogButtonBox_QBaseMetacall((QDialogButtonBox*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_dialogbuttonbox_tr(const char* s) {
    libqt_string _str = QDialogButtonBox_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#setOrientation)
///
/// ``` QDialogButtonBox* self, enum Qt__Orientation orientation ```
void q_dialogbuttonbox_set_orientation(void* self, int64_t orientation) {
    QDialogButtonBox_SetOrientation((QDialogButtonBox*)self, orientation);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#orientation)
///
/// ``` QDialogButtonBox* self ```
int64_t q_dialogbuttonbox_orientation(void* self) {
    return QDialogButtonBox_Orientation((QDialogButtonBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#addButton)
///
/// ``` QDialogButtonBox* self, QAbstractButton* button, enum QDialogButtonBox__ButtonRole role ```
void q_dialogbuttonbox_add_button(void* self, void* button, int64_t role) {
    QDialogButtonBox_AddButton((QDialogButtonBox*)self, (QAbstractButton*)button, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#addButton)
///
/// ``` QDialogButtonBox* self, const char* text, enum QDialogButtonBox__ButtonRole role ```
QPushButton* q_dialogbuttonbox_add_button2(void* self, const char* text, int64_t role) {
    return QDialogButtonBox_AddButton2((QDialogButtonBox*)self, qstring(text), role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#addButton)
///
/// ``` QDialogButtonBox* self, enum QDialogButtonBox__StandardButton button ```
QPushButton* q_dialogbuttonbox_add_button_with_button(void* self, int64_t button) {
    return QDialogButtonBox_AddButtonWithButton((QDialogButtonBox*)self, button);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#removeButton)
///
/// ``` QDialogButtonBox* self, QAbstractButton* button ```
void q_dialogbuttonbox_remove_button(void* self, void* button) {
    QDialogButtonBox_RemoveButton((QDialogButtonBox*)self, (QAbstractButton*)button);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#clear)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_clear(void* self) {
    QDialogButtonBox_Clear((QDialogButtonBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#buttons)
///
/// ``` QDialogButtonBox* self ```
libqt_list /* of QAbstractButton* */ q_dialogbuttonbox_buttons(void* self) {
    libqt_list _arr = QDialogButtonBox_Buttons((QDialogButtonBox*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#buttonRole)
///
/// ``` QDialogButtonBox* self, QAbstractButton* button ```
int64_t q_dialogbuttonbox_button_role(void* self, void* button) {
    return QDialogButtonBox_ButtonRole((QDialogButtonBox*)self, (QAbstractButton*)button);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#setStandardButtons)
///
/// ``` QDialogButtonBox* self, int buttons ```
void q_dialogbuttonbox_set_standard_buttons(void* self, int64_t buttons) {
    QDialogButtonBox_SetStandardButtons((QDialogButtonBox*)self, buttons);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#standardButtons)
///
/// ``` QDialogButtonBox* self ```
int64_t q_dialogbuttonbox_standard_buttons(void* self) {
    return QDialogButtonBox_StandardButtons((QDialogButtonBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#standardButton)
///
/// ``` QDialogButtonBox* self, QAbstractButton* button ```
int64_t q_dialogbuttonbox_standard_button(void* self, void* button) {
    return QDialogButtonBox_StandardButton((QDialogButtonBox*)self, (QAbstractButton*)button);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#button)
///
/// ``` QDialogButtonBox* self, enum QDialogButtonBox__StandardButton which ```
QPushButton* q_dialogbuttonbox_button(void* self, int64_t which) {
    return QDialogButtonBox_Button((QDialogButtonBox*)self, which);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#setCenterButtons)
///
/// ``` QDialogButtonBox* self, bool center ```
void q_dialogbuttonbox_set_center_buttons(void* self, bool center) {
    QDialogButtonBox_SetCenterButtons((QDialogButtonBox*)self, center);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#centerButtons)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_center_buttons(void* self) {
    return QDialogButtonBox_CenterButtons((QDialogButtonBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#clicked)
///
/// ``` QDialogButtonBox* self, QAbstractButton* button ```
void q_dialogbuttonbox_clicked(void* self, void* button) {
    QDialogButtonBox_Clicked((QDialogButtonBox*)self, (QAbstractButton*)button);
}

/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QAbstractButton*) ```
void q_dialogbuttonbox_on_clicked(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_Connect_Clicked((QDialogButtonBox*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#accepted)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_accepted(void* self) {
    QDialogButtonBox_Accepted((QDialogButtonBox*)self);
}

/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*) ```
void q_dialogbuttonbox_on_accepted(void* self, void (*slot)(void*)) {
    QDialogButtonBox_Connect_Accepted((QDialogButtonBox*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#helpRequested)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_help_requested(void* self) {
    QDialogButtonBox_HelpRequested((QDialogButtonBox*)self);
}

/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*) ```
void q_dialogbuttonbox_on_help_requested(void* self, void (*slot)(void*)) {
    QDialogButtonBox_Connect_HelpRequested((QDialogButtonBox*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#rejected)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_rejected(void* self) {
    QDialogButtonBox_Rejected((QDialogButtonBox*)self);
}

/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*) ```
void q_dialogbuttonbox_on_rejected(void* self, void (*slot)(void*)) {
    QDialogButtonBox_Connect_Rejected((QDialogButtonBox*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#changeEvent)
///
/// ``` QDialogButtonBox* self, QEvent* event ```
void q_dialogbuttonbox_change_event(void* self, void* event) {
    QDialogButtonBox_ChangeEvent((QDialogButtonBox*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QEvent*) ```
void q_dialogbuttonbox_on_change_event(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnChangeEvent((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDialogButtonBox* self, QEvent* event ```
void q_dialogbuttonbox_qbase_change_event(void* self, void* event) {
    QDialogButtonBox_QBaseChangeEvent((QDialogButtonBox*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#event)
///
/// ``` QDialogButtonBox* self, QEvent* event ```
bool q_dialogbuttonbox_event(void* self, void* event) {
    return QDialogButtonBox_Event((QDialogButtonBox*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QDialogButtonBox* self, bool (*slot)(QDialogButtonBox*, QEvent*) ```
void q_dialogbuttonbox_on_event(void* self, bool (*slot)(void*, void*)) {
    QDialogButtonBox_OnEvent((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDialogButtonBox* self, QEvent* event ```
bool q_dialogbuttonbox_qbase_event(void* self, void* event) {
    return QDialogButtonBox_QBaseEvent((QDialogButtonBox*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_dialogbuttonbox_tr2(const char* s, const char* c) {
    libqt_string _str = QDialogButtonBox_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_dialogbuttonbox_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QDialogButtonBox_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QDialogButtonBox* self ```
uintptr_t q_dialogbuttonbox_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QDialogButtonBox* self ```
uintptr_t q_dialogbuttonbox_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QDialogButtonBox* self ```
uintptr_t q_dialogbuttonbox_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QDialogButtonBox* self ```
QStyle* q_dialogbuttonbox_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QDialogButtonBox* self, QStyle* style ```
void q_dialogbuttonbox_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QDialogButtonBox* self ```
int64_t q_dialogbuttonbox_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QDialogButtonBox* self, enum Qt__WindowModality windowModality ```
void q_dialogbuttonbox_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QDialogButtonBox* self, QWidget* param1 ```
bool q_dialogbuttonbox_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QDialogButtonBox* self, bool enabled ```
void q_dialogbuttonbox_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QDialogButtonBox* self, bool disabled ```
void q_dialogbuttonbox_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QDialogButtonBox* self, bool windowModified ```
void q_dialogbuttonbox_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QDialogButtonBox* self ```
QRect* q_dialogbuttonbox_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QDialogButtonBox* self ```
QRect* q_dialogbuttonbox_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QDialogButtonBox* self ```
QRect* q_dialogbuttonbox_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QDialogButtonBox* self ```
QPoint* q_dialogbuttonbox_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QDialogButtonBox* self ```
QSize* q_dialogbuttonbox_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QDialogButtonBox* self ```
QSize* q_dialogbuttonbox_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QDialogButtonBox* self ```
QRect* q_dialogbuttonbox_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QDialogButtonBox* self ```
QRect* q_dialogbuttonbox_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QDialogButtonBox* self ```
QRegion* q_dialogbuttonbox_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QDialogButtonBox* self ```
QSize* q_dialogbuttonbox_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QDialogButtonBox* self ```
QSize* q_dialogbuttonbox_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QDialogButtonBox* self, QSize* minimumSize ```
void q_dialogbuttonbox_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QDialogButtonBox* self, int minw, int minh ```
void q_dialogbuttonbox_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QDialogButtonBox* self, QSize* maximumSize ```
void q_dialogbuttonbox_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QDialogButtonBox* self, int maxw, int maxh ```
void q_dialogbuttonbox_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QDialogButtonBox* self, int minw ```
void q_dialogbuttonbox_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QDialogButtonBox* self, int minh ```
void q_dialogbuttonbox_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QDialogButtonBox* self, int maxw ```
void q_dialogbuttonbox_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QDialogButtonBox* self, int maxh ```
void q_dialogbuttonbox_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QDialogButtonBox* self ```
QSize* q_dialogbuttonbox_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QDialogButtonBox* self, QSize* sizeIncrement ```
void q_dialogbuttonbox_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QDialogButtonBox* self, int w, int h ```
void q_dialogbuttonbox_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QDialogButtonBox* self ```
QSize* q_dialogbuttonbox_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QDialogButtonBox* self, QSize* baseSize ```
void q_dialogbuttonbox_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QDialogButtonBox* self, int basew, int baseh ```
void q_dialogbuttonbox_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QDialogButtonBox* self, QSize* fixedSize ```
void q_dialogbuttonbox_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QDialogButtonBox* self, int w, int h ```
void q_dialogbuttonbox_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QDialogButtonBox* self, int w ```
void q_dialogbuttonbox_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QDialogButtonBox* self, int h ```
void q_dialogbuttonbox_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QDialogButtonBox* self, QPointF* param1 ```
QPointF* q_dialogbuttonbox_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QDialogButtonBox* self, QPoint* param1 ```
QPoint* q_dialogbuttonbox_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QDialogButtonBox* self, QPointF* param1 ```
QPointF* q_dialogbuttonbox_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QDialogButtonBox* self, QPoint* param1 ```
QPoint* q_dialogbuttonbox_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QDialogButtonBox* self, QPointF* param1 ```
QPointF* q_dialogbuttonbox_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QDialogButtonBox* self, QPoint* param1 ```
QPoint* q_dialogbuttonbox_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QDialogButtonBox* self, QPointF* param1 ```
QPointF* q_dialogbuttonbox_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QDialogButtonBox* self, QPoint* param1 ```
QPoint* q_dialogbuttonbox_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QDialogButtonBox* self, QWidget* param1, QPointF* param2 ```
QPointF* q_dialogbuttonbox_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QDialogButtonBox* self, QWidget* param1, QPoint* param2 ```
QPoint* q_dialogbuttonbox_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QDialogButtonBox* self, QWidget* param1, QPointF* param2 ```
QPointF* q_dialogbuttonbox_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QDialogButtonBox* self, QWidget* param1, QPoint* param2 ```
QPoint* q_dialogbuttonbox_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QDialogButtonBox* self ```
QWidget* q_dialogbuttonbox_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QDialogButtonBox* self ```
QWidget* q_dialogbuttonbox_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QDialogButtonBox* self ```
QWidget* q_dialogbuttonbox_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QDialogButtonBox* self ```
QPalette* q_dialogbuttonbox_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QDialogButtonBox* self, QPalette* palette ```
void q_dialogbuttonbox_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QDialogButtonBox* self, enum QPalette__ColorRole backgroundRole ```
void q_dialogbuttonbox_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QDialogButtonBox* self ```
int64_t q_dialogbuttonbox_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QDialogButtonBox* self, enum QPalette__ColorRole foregroundRole ```
void q_dialogbuttonbox_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QDialogButtonBox* self ```
int64_t q_dialogbuttonbox_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QDialogButtonBox* self ```
QFont* q_dialogbuttonbox_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QDialogButtonBox* self, QFont* font ```
void q_dialogbuttonbox_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QDialogButtonBox* self ```
QFontMetrics* q_dialogbuttonbox_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QDialogButtonBox* self ```
QFontInfo* q_dialogbuttonbox_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QDialogButtonBox* self ```
QCursor* q_dialogbuttonbox_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QDialogButtonBox* self, QCursor* cursor ```
void q_dialogbuttonbox_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QDialogButtonBox* self, bool enable ```
void q_dialogbuttonbox_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QDialogButtonBox* self, bool enable ```
void q_dialogbuttonbox_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QDialogButtonBox* self, QBitmap* mask ```
void q_dialogbuttonbox_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QDialogButtonBox* self, QRegion* mask ```
void q_dialogbuttonbox_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QDialogButtonBox* self ```
QRegion* q_dialogbuttonbox_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDialogButtonBox* self, QPaintDevice* target ```
void q_dialogbuttonbox_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDialogButtonBox* self, QPainter* painter ```
void q_dialogbuttonbox_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QDialogButtonBox* self ```
QPixmap* q_dialogbuttonbox_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QDialogButtonBox* self ```
QGraphicsEffect* q_dialogbuttonbox_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QDialogButtonBox* self, QGraphicsEffect* effect ```
void q_dialogbuttonbox_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QDialogButtonBox* self, enum Qt__GestureType typeVal ```
void q_dialogbuttonbox_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QDialogButtonBox* self, enum Qt__GestureType typeVal ```
void q_dialogbuttonbox_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QDialogButtonBox* self, const char* windowTitle ```
void q_dialogbuttonbox_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QDialogButtonBox* self, const char* styleSheet ```
void q_dialogbuttonbox_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QDialogButtonBox* self ```
const char* q_dialogbuttonbox_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QDialogButtonBox* self ```
const char* q_dialogbuttonbox_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QDialogButtonBox* self, QIcon* icon ```
void q_dialogbuttonbox_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QDialogButtonBox* self ```
QIcon* q_dialogbuttonbox_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QDialogButtonBox* self, const char* windowIconText ```
void q_dialogbuttonbox_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QDialogButtonBox* self ```
const char* q_dialogbuttonbox_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QDialogButtonBox* self, const char* windowRole ```
void q_dialogbuttonbox_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QDialogButtonBox* self ```
const char* q_dialogbuttonbox_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QDialogButtonBox* self, const char* filePath ```
void q_dialogbuttonbox_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QDialogButtonBox* self ```
const char* q_dialogbuttonbox_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QDialogButtonBox* self, double level ```
void q_dialogbuttonbox_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QDialogButtonBox* self ```
double q_dialogbuttonbox_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QDialogButtonBox* self, const char* toolTip ```
void q_dialogbuttonbox_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QDialogButtonBox* self ```
const char* q_dialogbuttonbox_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QDialogButtonBox* self, int msec ```
void q_dialogbuttonbox_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QDialogButtonBox* self, const char* statusTip ```
void q_dialogbuttonbox_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QDialogButtonBox* self ```
const char* q_dialogbuttonbox_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QDialogButtonBox* self, const char* whatsThis ```
void q_dialogbuttonbox_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QDialogButtonBox* self ```
const char* q_dialogbuttonbox_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QDialogButtonBox* self ```
const char* q_dialogbuttonbox_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QDialogButtonBox* self, const char* name ```
void q_dialogbuttonbox_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QDialogButtonBox* self ```
const char* q_dialogbuttonbox_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QDialogButtonBox* self, const char* description ```
void q_dialogbuttonbox_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QDialogButtonBox* self, enum Qt__LayoutDirection direction ```
void q_dialogbuttonbox_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QDialogButtonBox* self ```
int64_t q_dialogbuttonbox_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QDialogButtonBox* self, QLocale* locale ```
void q_dialogbuttonbox_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QDialogButtonBox* self ```
QLocale* q_dialogbuttonbox_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QDialogButtonBox* self, enum Qt__FocusReason reason ```
void q_dialogbuttonbox_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QDialogButtonBox* self ```
int64_t q_dialogbuttonbox_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QDialogButtonBox* self, enum Qt__FocusPolicy policy ```
void q_dialogbuttonbox_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_dialogbuttonbox_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QDialogButtonBox* self, QWidget* focusProxy ```
void q_dialogbuttonbox_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QDialogButtonBox* self ```
QWidget* q_dialogbuttonbox_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QDialogButtonBox* self ```
int64_t q_dialogbuttonbox_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QDialogButtonBox* self, enum Qt__ContextMenuPolicy policy ```
void q_dialogbuttonbox_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QDialogButtonBox* self, QCursor* param1 ```
void q_dialogbuttonbox_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QDialogButtonBox* self, QKeySequence* key ```
int32_t q_dialogbuttonbox_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QDialogButtonBox* self, int id ```
void q_dialogbuttonbox_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QDialogButtonBox* self, int id ```
void q_dialogbuttonbox_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QDialogButtonBox* self, int id ```
void q_dialogbuttonbox_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_dialogbuttonbox_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_dialogbuttonbox_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QDialogButtonBox* self, bool enable ```
void q_dialogbuttonbox_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QDialogButtonBox* self ```
QGraphicsProxyWidget* q_dialogbuttonbox_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QDialogButtonBox* self, int x, int y, int w, int h ```
void q_dialogbuttonbox_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QDialogButtonBox* self, QRect* param1 ```
void q_dialogbuttonbox_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QDialogButtonBox* self, QRegion* param1 ```
void q_dialogbuttonbox_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QDialogButtonBox* self, int x, int y, int w, int h ```
void q_dialogbuttonbox_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QDialogButtonBox* self, QRect* param1 ```
void q_dialogbuttonbox_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QDialogButtonBox* self, QRegion* param1 ```
void q_dialogbuttonbox_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QDialogButtonBox* self, bool hidden ```
void q_dialogbuttonbox_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QDialogButtonBox* self, QWidget* param1 ```
void q_dialogbuttonbox_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QDialogButtonBox* self, int x, int y ```
void q_dialogbuttonbox_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QDialogButtonBox* self, QPoint* param1 ```
void q_dialogbuttonbox_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QDialogButtonBox* self, int w, int h ```
void q_dialogbuttonbox_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QDialogButtonBox* self, QSize* param1 ```
void q_dialogbuttonbox_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QDialogButtonBox* self, int x, int y, int w, int h ```
void q_dialogbuttonbox_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QDialogButtonBox* self, QRect* geometry ```
void q_dialogbuttonbox_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QDialogButtonBox* self ```
char* q_dialogbuttonbox_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QDialogButtonBox* self, const char* geometry ```
bool q_dialogbuttonbox_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QDialogButtonBox* self, QWidget* param1 ```
bool q_dialogbuttonbox_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QDialogButtonBox* self ```
int64_t q_dialogbuttonbox_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QDialogButtonBox* self, int state ```
void q_dialogbuttonbox_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QDialogButtonBox* self, int state ```
void q_dialogbuttonbox_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QDialogButtonBox* self ```
QSizePolicy* q_dialogbuttonbox_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QDialogButtonBox* self, QSizePolicy* sizePolicy ```
void q_dialogbuttonbox_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QDialogButtonBox* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_dialogbuttonbox_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QDialogButtonBox* self ```
QRegion* q_dialogbuttonbox_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QDialogButtonBox* self, int left, int top, int right, int bottom ```
void q_dialogbuttonbox_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QDialogButtonBox* self, QMargins* margins ```
void q_dialogbuttonbox_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QDialogButtonBox* self ```
QMargins* q_dialogbuttonbox_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QDialogButtonBox* self ```
QRect* q_dialogbuttonbox_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QDialogButtonBox* self ```
QLayout* q_dialogbuttonbox_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QDialogButtonBox* self, QLayout* layout ```
void q_dialogbuttonbox_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QDialogButtonBox* self, QWidget* parent ```
void q_dialogbuttonbox_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QDialogButtonBox* self, QWidget* parent, int f ```
void q_dialogbuttonbox_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QDialogButtonBox* self, int dx, int dy ```
void q_dialogbuttonbox_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QDialogButtonBox* self, int dx, int dy, QRect* param3 ```
void q_dialogbuttonbox_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QDialogButtonBox* self ```
QWidget* q_dialogbuttonbox_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QDialogButtonBox* self ```
QWidget* q_dialogbuttonbox_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QDialogButtonBox* self ```
QWidget* q_dialogbuttonbox_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QDialogButtonBox* self, bool on ```
void q_dialogbuttonbox_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDialogButtonBox* self, QAction* action ```
void q_dialogbuttonbox_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QDialogButtonBox* self, QAction* actions[] ```
void q_dialogbuttonbox_add_actions(void* self, void* actions[]) {
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
/// ``` QDialogButtonBox* self, QAction* before, QAction* actions[] ```
void q_dialogbuttonbox_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QDialogButtonBox* self, QAction* before, QAction* action ```
void q_dialogbuttonbox_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QDialogButtonBox* self, QAction* action ```
void q_dialogbuttonbox_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QDialogButtonBox* self ```
libqt_list /* of QAction* */ q_dialogbuttonbox_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDialogButtonBox* self, const char* text ```
QAction* q_dialogbuttonbox_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDialogButtonBox* self, QIcon* icon, const char* text ```
QAction* q_dialogbuttonbox_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDialogButtonBox* self, const char* text, QKeySequence* shortcut ```
QAction* q_dialogbuttonbox_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDialogButtonBox* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_dialogbuttonbox_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QDialogButtonBox* self ```
QWidget* q_dialogbuttonbox_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QDialogButtonBox* self, int typeVal ```
void q_dialogbuttonbox_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QDialogButtonBox* self ```
int64_t q_dialogbuttonbox_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QDialogButtonBox* self, enum Qt__WindowType param1 ```
void q_dialogbuttonbox_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QDialogButtonBox* self, int typeVal ```
void q_dialogbuttonbox_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QDialogButtonBox* self ```
int64_t q_dialogbuttonbox_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_dialogbuttonbox_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QDialogButtonBox* self, int x, int y ```
QWidget* q_dialogbuttonbox_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QDialogButtonBox* self, QPoint* p ```
QWidget* q_dialogbuttonbox_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QDialogButtonBox* self, enum Qt__WidgetAttribute param1 ```
void q_dialogbuttonbox_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QDialogButtonBox* self, enum Qt__WidgetAttribute param1 ```
bool q_dialogbuttonbox_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QDialogButtonBox* self, QWidget* child ```
bool q_dialogbuttonbox_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QDialogButtonBox* self, bool enabled ```
void q_dialogbuttonbox_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QDialogButtonBox* self ```
QBackingStore* q_dialogbuttonbox_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QDialogButtonBox* self ```
QWindow* q_dialogbuttonbox_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QDialogButtonBox* self ```
QScreen* q_dialogbuttonbox_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QDialogButtonBox* self, QScreen* screen ```
void q_dialogbuttonbox_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_dialogbuttonbox_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QDialogButtonBox* self, const char* title ```
void q_dialogbuttonbox_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QDialogButtonBox* self, void (*slot)(QWidget*, const char*) ```
void q_dialogbuttonbox_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QDialogButtonBox* self, QIcon* icon ```
void q_dialogbuttonbox_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QDialogButtonBox* self, void (*slot)(QWidget*, QIcon*) ```
void q_dialogbuttonbox_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QDialogButtonBox* self, const char* iconText ```
void q_dialogbuttonbox_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QDialogButtonBox* self, void (*slot)(QWidget*, const char*) ```
void q_dialogbuttonbox_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QDialogButtonBox* self, QPoint* pos ```
void q_dialogbuttonbox_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QDialogButtonBox* self, void (*slot)(QWidget*, QPoint*) ```
void q_dialogbuttonbox_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QDialogButtonBox* self ```
int64_t q_dialogbuttonbox_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QDialogButtonBox* self, int hints ```
void q_dialogbuttonbox_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDialogButtonBox* self, QPaintDevice* target, QPoint* targetOffset ```
void q_dialogbuttonbox_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDialogButtonBox* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_dialogbuttonbox_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDialogButtonBox* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_dialogbuttonbox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDialogButtonBox* self, QPainter* painter, QPoint* targetOffset ```
void q_dialogbuttonbox_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDialogButtonBox* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_dialogbuttonbox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDialogButtonBox* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_dialogbuttonbox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QDialogButtonBox* self, QRect* rectangle ```
QPixmap* q_dialogbuttonbox_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QDialogButtonBox* self, enum Qt__GestureType typeVal, int flags ```
void q_dialogbuttonbox_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QDialogButtonBox* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_dialogbuttonbox_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QDialogButtonBox* self, int id, bool enable ```
void q_dialogbuttonbox_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QDialogButtonBox* self, int id, bool enable ```
void q_dialogbuttonbox_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QDialogButtonBox* self, enum Qt__WindowType param1, bool on ```
void q_dialogbuttonbox_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QDialogButtonBox* self, enum Qt__WidgetAttribute param1, bool on ```
void q_dialogbuttonbox_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_dialogbuttonbox_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_dialogbuttonbox_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QDialogButtonBox* self ```
const char* q_dialogbuttonbox_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QDialogButtonBox* self, const char* name ```
void q_dialogbuttonbox_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QDialogButtonBox* self, bool b ```
bool q_dialogbuttonbox_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QDialogButtonBox* self ```
QThread* q_dialogbuttonbox_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QDialogButtonBox* self, QThread* thread ```
void q_dialogbuttonbox_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDialogButtonBox* self, int interval ```
int32_t q_dialogbuttonbox_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QDialogButtonBox* self, int id ```
void q_dialogbuttonbox_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QDialogButtonBox* self ```
libqt_list /* of QObject* */ q_dialogbuttonbox_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QDialogButtonBox* self, QObject* filterObj ```
void q_dialogbuttonbox_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QDialogButtonBox* self, QObject* obj ```
void q_dialogbuttonbox_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_dialogbuttonbox_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDialogButtonBox* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_dialogbuttonbox_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_dialogbuttonbox_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_dialogbuttonbox_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QDialogButtonBox* self, const char* name, QVariant* value ```
bool q_dialogbuttonbox_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QDialogButtonBox* self, const char* name ```
QVariant* q_dialogbuttonbox_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QDialogButtonBox* self ```
const char** q_dialogbuttonbox_dynamic_property_names(void* self) {
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
/// ``` QDialogButtonBox* self ```
QBindingStorage* q_dialogbuttonbox_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDialogButtonBox* self ```
QBindingStorage* q_dialogbuttonbox_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QDialogButtonBox* self, void (*slot)(QObject*) ```
void q_dialogbuttonbox_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QDialogButtonBox* self ```
QObject* q_dialogbuttonbox_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QDialogButtonBox* self, const char* classname ```
bool q_dialogbuttonbox_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDialogButtonBox* self, int interval, enum Qt__TimerType timerType ```
int32_t q_dialogbuttonbox_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_dialogbuttonbox_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDialogButtonBox* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_dialogbuttonbox_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDialogButtonBox* self, QObject* param1 ```
void q_dialogbuttonbox_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QDialogButtonBox* self, void (*slot)(QObject*, QObject*) ```
void q_dialogbuttonbox_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QDialogButtonBox* self ```
double q_dialogbuttonbox_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QDialogButtonBox* self ```
double q_dialogbuttonbox_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_dialogbuttonbox_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_dev_type(void* self) {
    return QDialogButtonBox_DevType((QDialogButtonBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_qbase_dev_type(void* self) {
    return QDialogButtonBox_QBaseDevType((QDialogButtonBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, int32_t (*slot)() ```
void q_dialogbuttonbox_on_dev_type(void* self, int32_t (*slot)()) {
    QDialogButtonBox_OnDevType((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, bool visible ```
void q_dialogbuttonbox_set_visible(void* self, bool visible) {
    QDialogButtonBox_SetVisible((QDialogButtonBox*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, bool visible ```
void q_dialogbuttonbox_qbase_set_visible(void* self, bool visible) {
    QDialogButtonBox_QBaseSetVisible((QDialogButtonBox*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, bool) ```
void q_dialogbuttonbox_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QDialogButtonBox_OnSetVisible((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self ```
QSize* q_dialogbuttonbox_size_hint(void* self) {
    return QDialogButtonBox_SizeHint((QDialogButtonBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self ```
QSize* q_dialogbuttonbox_qbase_size_hint(void* self) {
    return QDialogButtonBox_QBaseSizeHint((QDialogButtonBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QSize* (*slot)() ```
void q_dialogbuttonbox_on_size_hint(void* self, QSize* (*slot)()) {
    QDialogButtonBox_OnSizeHint((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self ```
QSize* q_dialogbuttonbox_minimum_size_hint(void* self) {
    return QDialogButtonBox_MinimumSizeHint((QDialogButtonBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self ```
QSize* q_dialogbuttonbox_qbase_minimum_size_hint(void* self) {
    return QDialogButtonBox_QBaseMinimumSizeHint((QDialogButtonBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QSize* (*slot)() ```
void q_dialogbuttonbox_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QDialogButtonBox_OnMinimumSizeHint((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, int param1 ```
int32_t q_dialogbuttonbox_height_for_width(void* self, int param1) {
    return QDialogButtonBox_HeightForWidth((QDialogButtonBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, int param1 ```
int32_t q_dialogbuttonbox_qbase_height_for_width(void* self, int param1) {
    return QDialogButtonBox_QBaseHeightForWidth((QDialogButtonBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, int32_t (*slot)(QDialogButtonBox*, int) ```
void q_dialogbuttonbox_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QDialogButtonBox_OnHeightForWidth((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_has_height_for_width(void* self) {
    return QDialogButtonBox_HasHeightForWidth((QDialogButtonBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_qbase_has_height_for_width(void* self) {
    return QDialogButtonBox_QBaseHasHeightForWidth((QDialogButtonBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, bool (*slot)() ```
void q_dialogbuttonbox_on_has_height_for_width(void* self, bool (*slot)()) {
    QDialogButtonBox_OnHasHeightForWidth((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self ```
QPaintEngine* q_dialogbuttonbox_paint_engine(void* self) {
    return QDialogButtonBox_PaintEngine((QDialogButtonBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self ```
QPaintEngine* q_dialogbuttonbox_qbase_paint_engine(void* self) {
    return QDialogButtonBox_QBasePaintEngine((QDialogButtonBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QPaintEngine* (*slot)() ```
void q_dialogbuttonbox_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QDialogButtonBox_OnPaintEngine((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QMouseEvent* event ```
void q_dialogbuttonbox_mouse_press_event(void* self, void* event) {
    QDialogButtonBox_MousePressEvent((QDialogButtonBox*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QMouseEvent* event ```
void q_dialogbuttonbox_qbase_mouse_press_event(void* self, void* event) {
    QDialogButtonBox_QBaseMousePressEvent((QDialogButtonBox*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QMouseEvent*) ```
void q_dialogbuttonbox_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnMousePressEvent((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QMouseEvent* event ```
void q_dialogbuttonbox_mouse_release_event(void* self, void* event) {
    QDialogButtonBox_MouseReleaseEvent((QDialogButtonBox*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QMouseEvent* event ```
void q_dialogbuttonbox_qbase_mouse_release_event(void* self, void* event) {
    QDialogButtonBox_QBaseMouseReleaseEvent((QDialogButtonBox*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QMouseEvent*) ```
void q_dialogbuttonbox_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnMouseReleaseEvent((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QMouseEvent* event ```
void q_dialogbuttonbox_mouse_double_click_event(void* self, void* event) {
    QDialogButtonBox_MouseDoubleClickEvent((QDialogButtonBox*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QMouseEvent* event ```
void q_dialogbuttonbox_qbase_mouse_double_click_event(void* self, void* event) {
    QDialogButtonBox_QBaseMouseDoubleClickEvent((QDialogButtonBox*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QMouseEvent*) ```
void q_dialogbuttonbox_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnMouseDoubleClickEvent((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QMouseEvent* event ```
void q_dialogbuttonbox_mouse_move_event(void* self, void* event) {
    QDialogButtonBox_MouseMoveEvent((QDialogButtonBox*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QMouseEvent* event ```
void q_dialogbuttonbox_qbase_mouse_move_event(void* self, void* event) {
    QDialogButtonBox_QBaseMouseMoveEvent((QDialogButtonBox*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QMouseEvent*) ```
void q_dialogbuttonbox_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnMouseMoveEvent((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QWheelEvent* event ```
void q_dialogbuttonbox_wheel_event(void* self, void* event) {
    QDialogButtonBox_WheelEvent((QDialogButtonBox*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QWheelEvent* event ```
void q_dialogbuttonbox_qbase_wheel_event(void* self, void* event) {
    QDialogButtonBox_QBaseWheelEvent((QDialogButtonBox*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QWheelEvent*) ```
void q_dialogbuttonbox_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnWheelEvent((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QKeyEvent* event ```
void q_dialogbuttonbox_key_press_event(void* self, void* event) {
    QDialogButtonBox_KeyPressEvent((QDialogButtonBox*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QKeyEvent* event ```
void q_dialogbuttonbox_qbase_key_press_event(void* self, void* event) {
    QDialogButtonBox_QBaseKeyPressEvent((QDialogButtonBox*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QKeyEvent*) ```
void q_dialogbuttonbox_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnKeyPressEvent((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QKeyEvent* event ```
void q_dialogbuttonbox_key_release_event(void* self, void* event) {
    QDialogButtonBox_KeyReleaseEvent((QDialogButtonBox*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QKeyEvent* event ```
void q_dialogbuttonbox_qbase_key_release_event(void* self, void* event) {
    QDialogButtonBox_QBaseKeyReleaseEvent((QDialogButtonBox*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QKeyEvent*) ```
void q_dialogbuttonbox_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnKeyReleaseEvent((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QFocusEvent* event ```
void q_dialogbuttonbox_focus_in_event(void* self, void* event) {
    QDialogButtonBox_FocusInEvent((QDialogButtonBox*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QFocusEvent* event ```
void q_dialogbuttonbox_qbase_focus_in_event(void* self, void* event) {
    QDialogButtonBox_QBaseFocusInEvent((QDialogButtonBox*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QFocusEvent*) ```
void q_dialogbuttonbox_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnFocusInEvent((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QFocusEvent* event ```
void q_dialogbuttonbox_focus_out_event(void* self, void* event) {
    QDialogButtonBox_FocusOutEvent((QDialogButtonBox*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QFocusEvent* event ```
void q_dialogbuttonbox_qbase_focus_out_event(void* self, void* event) {
    QDialogButtonBox_QBaseFocusOutEvent((QDialogButtonBox*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QFocusEvent*) ```
void q_dialogbuttonbox_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnFocusOutEvent((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QEnterEvent* event ```
void q_dialogbuttonbox_enter_event(void* self, void* event) {
    QDialogButtonBox_EnterEvent((QDialogButtonBox*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QEnterEvent* event ```
void q_dialogbuttonbox_qbase_enter_event(void* self, void* event) {
    QDialogButtonBox_QBaseEnterEvent((QDialogButtonBox*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QEnterEvent*) ```
void q_dialogbuttonbox_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnEnterEvent((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QEvent* event ```
void q_dialogbuttonbox_leave_event(void* self, void* event) {
    QDialogButtonBox_LeaveEvent((QDialogButtonBox*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QEvent* event ```
void q_dialogbuttonbox_qbase_leave_event(void* self, void* event) {
    QDialogButtonBox_QBaseLeaveEvent((QDialogButtonBox*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QEvent*) ```
void q_dialogbuttonbox_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnLeaveEvent((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QPaintEvent* event ```
void q_dialogbuttonbox_paint_event(void* self, void* event) {
    QDialogButtonBox_PaintEvent((QDialogButtonBox*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QPaintEvent* event ```
void q_dialogbuttonbox_qbase_paint_event(void* self, void* event) {
    QDialogButtonBox_QBasePaintEvent((QDialogButtonBox*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QPaintEvent*) ```
void q_dialogbuttonbox_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnPaintEvent((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QMoveEvent* event ```
void q_dialogbuttonbox_move_event(void* self, void* event) {
    QDialogButtonBox_MoveEvent((QDialogButtonBox*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QMoveEvent* event ```
void q_dialogbuttonbox_qbase_move_event(void* self, void* event) {
    QDialogButtonBox_QBaseMoveEvent((QDialogButtonBox*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QMoveEvent*) ```
void q_dialogbuttonbox_on_move_event(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnMoveEvent((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QResizeEvent* event ```
void q_dialogbuttonbox_resize_event(void* self, void* event) {
    QDialogButtonBox_ResizeEvent((QDialogButtonBox*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QResizeEvent* event ```
void q_dialogbuttonbox_qbase_resize_event(void* self, void* event) {
    QDialogButtonBox_QBaseResizeEvent((QDialogButtonBox*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QResizeEvent*) ```
void q_dialogbuttonbox_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnResizeEvent((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QCloseEvent* event ```
void q_dialogbuttonbox_close_event(void* self, void* event) {
    QDialogButtonBox_CloseEvent((QDialogButtonBox*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QCloseEvent* event ```
void q_dialogbuttonbox_qbase_close_event(void* self, void* event) {
    QDialogButtonBox_QBaseCloseEvent((QDialogButtonBox*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QCloseEvent*) ```
void q_dialogbuttonbox_on_close_event(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnCloseEvent((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QContextMenuEvent* event ```
void q_dialogbuttonbox_context_menu_event(void* self, void* event) {
    QDialogButtonBox_ContextMenuEvent((QDialogButtonBox*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QContextMenuEvent* event ```
void q_dialogbuttonbox_qbase_context_menu_event(void* self, void* event) {
    QDialogButtonBox_QBaseContextMenuEvent((QDialogButtonBox*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QContextMenuEvent*) ```
void q_dialogbuttonbox_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnContextMenuEvent((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QTabletEvent* event ```
void q_dialogbuttonbox_tablet_event(void* self, void* event) {
    QDialogButtonBox_TabletEvent((QDialogButtonBox*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QTabletEvent* event ```
void q_dialogbuttonbox_qbase_tablet_event(void* self, void* event) {
    QDialogButtonBox_QBaseTabletEvent((QDialogButtonBox*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QTabletEvent*) ```
void q_dialogbuttonbox_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnTabletEvent((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QActionEvent* event ```
void q_dialogbuttonbox_action_event(void* self, void* event) {
    QDialogButtonBox_ActionEvent((QDialogButtonBox*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QActionEvent* event ```
void q_dialogbuttonbox_qbase_action_event(void* self, void* event) {
    QDialogButtonBox_QBaseActionEvent((QDialogButtonBox*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QActionEvent*) ```
void q_dialogbuttonbox_on_action_event(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnActionEvent((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QDragEnterEvent* event ```
void q_dialogbuttonbox_drag_enter_event(void* self, void* event) {
    QDialogButtonBox_DragEnterEvent((QDialogButtonBox*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QDragEnterEvent* event ```
void q_dialogbuttonbox_qbase_drag_enter_event(void* self, void* event) {
    QDialogButtonBox_QBaseDragEnterEvent((QDialogButtonBox*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QDragEnterEvent*) ```
void q_dialogbuttonbox_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnDragEnterEvent((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QDragMoveEvent* event ```
void q_dialogbuttonbox_drag_move_event(void* self, void* event) {
    QDialogButtonBox_DragMoveEvent((QDialogButtonBox*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QDragMoveEvent* event ```
void q_dialogbuttonbox_qbase_drag_move_event(void* self, void* event) {
    QDialogButtonBox_QBaseDragMoveEvent((QDialogButtonBox*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QDragMoveEvent*) ```
void q_dialogbuttonbox_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnDragMoveEvent((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QDragLeaveEvent* event ```
void q_dialogbuttonbox_drag_leave_event(void* self, void* event) {
    QDialogButtonBox_DragLeaveEvent((QDialogButtonBox*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QDragLeaveEvent* event ```
void q_dialogbuttonbox_qbase_drag_leave_event(void* self, void* event) {
    QDialogButtonBox_QBaseDragLeaveEvent((QDialogButtonBox*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QDragLeaveEvent*) ```
void q_dialogbuttonbox_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnDragLeaveEvent((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QDropEvent* event ```
void q_dialogbuttonbox_drop_event(void* self, void* event) {
    QDialogButtonBox_DropEvent((QDialogButtonBox*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QDropEvent* event ```
void q_dialogbuttonbox_qbase_drop_event(void* self, void* event) {
    QDialogButtonBox_QBaseDropEvent((QDialogButtonBox*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QDropEvent*) ```
void q_dialogbuttonbox_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnDropEvent((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QShowEvent* event ```
void q_dialogbuttonbox_show_event(void* self, void* event) {
    QDialogButtonBox_ShowEvent((QDialogButtonBox*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QShowEvent* event ```
void q_dialogbuttonbox_qbase_show_event(void* self, void* event) {
    QDialogButtonBox_QBaseShowEvent((QDialogButtonBox*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QShowEvent*) ```
void q_dialogbuttonbox_on_show_event(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnShowEvent((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QHideEvent* event ```
void q_dialogbuttonbox_hide_event(void* self, void* event) {
    QDialogButtonBox_HideEvent((QDialogButtonBox*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QHideEvent* event ```
void q_dialogbuttonbox_qbase_hide_event(void* self, void* event) {
    QDialogButtonBox_QBaseHideEvent((QDialogButtonBox*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QHideEvent*) ```
void q_dialogbuttonbox_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnHideEvent((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, const char* eventType, void* message, intptr_t* result ```
bool q_dialogbuttonbox_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QDialogButtonBox_NativeEvent((QDialogButtonBox*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, const char* eventType, void* message, intptr_t* result ```
bool q_dialogbuttonbox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QDialogButtonBox_QBaseNativeEvent((QDialogButtonBox*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, bool (*slot)(QDialogButtonBox*, const char*, void*, intptr_t*) ```
void q_dialogbuttonbox_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QDialogButtonBox_OnNativeEvent((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_dialogbuttonbox_metric(void* self, int64_t param1) {
    return QDialogButtonBox_Metric((QDialogButtonBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_dialogbuttonbox_qbase_metric(void* self, int64_t param1) {
    return QDialogButtonBox_QBaseMetric((QDialogButtonBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, int32_t (*slot)(QDialogButtonBox*, enum QPaintDevice__PaintDeviceMetric) ```
void q_dialogbuttonbox_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QDialogButtonBox_OnMetric((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QPainter* painter ```
void q_dialogbuttonbox_init_painter(void* self, void* painter) {
    QDialogButtonBox_InitPainter((QDialogButtonBox*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QPainter* painter ```
void q_dialogbuttonbox_qbase_init_painter(void* self, void* painter) {
    QDialogButtonBox_QBaseInitPainter((QDialogButtonBox*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QPainter*) ```
void q_dialogbuttonbox_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnInitPainter((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QPoint* offset ```
QPaintDevice* q_dialogbuttonbox_redirected(void* self, void* offset) {
    return QDialogButtonBox_Redirected((QDialogButtonBox*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QPoint* offset ```
QPaintDevice* q_dialogbuttonbox_qbase_redirected(void* self, void* offset) {
    return QDialogButtonBox_QBaseRedirected((QDialogButtonBox*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QPaintDevice* (*slot)(QDialogButtonBox*, QPoint*) ```
void q_dialogbuttonbox_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QDialogButtonBox_OnRedirected((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self ```
QPainter* q_dialogbuttonbox_shared_painter(void* self) {
    return QDialogButtonBox_SharedPainter((QDialogButtonBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self ```
QPainter* q_dialogbuttonbox_qbase_shared_painter(void* self) {
    return QDialogButtonBox_QBaseSharedPainter((QDialogButtonBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QPainter* (*slot)() ```
void q_dialogbuttonbox_on_shared_painter(void* self, QPainter* (*slot)()) {
    QDialogButtonBox_OnSharedPainter((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QInputMethodEvent* param1 ```
void q_dialogbuttonbox_input_method_event(void* self, void* param1) {
    QDialogButtonBox_InputMethodEvent((QDialogButtonBox*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QInputMethodEvent* param1 ```
void q_dialogbuttonbox_qbase_input_method_event(void* self, void* param1) {
    QDialogButtonBox_QBaseInputMethodEvent((QDialogButtonBox*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QInputMethodEvent*) ```
void q_dialogbuttonbox_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnInputMethodEvent((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_dialogbuttonbox_input_method_query(void* self, int64_t param1) {
    return QDialogButtonBox_InputMethodQuery((QDialogButtonBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_dialogbuttonbox_qbase_input_method_query(void* self, int64_t param1) {
    return QDialogButtonBox_QBaseInputMethodQuery((QDialogButtonBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QVariant* (*slot)(QDialogButtonBox*, enum Qt__InputMethodQuery) ```
void q_dialogbuttonbox_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QDialogButtonBox_OnInputMethodQuery((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, bool next ```
bool q_dialogbuttonbox_focus_next_prev_child(void* self, bool next) {
    return QDialogButtonBox_FocusNextPrevChild((QDialogButtonBox*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, bool next ```
bool q_dialogbuttonbox_qbase_focus_next_prev_child(void* self, bool next) {
    return QDialogButtonBox_QBaseFocusNextPrevChild((QDialogButtonBox*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, bool (*slot)(QDialogButtonBox*, bool) ```
void q_dialogbuttonbox_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QDialogButtonBox_OnFocusNextPrevChild((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QObject* watched, QEvent* event ```
bool q_dialogbuttonbox_event_filter(void* self, void* watched, void* event) {
    return QDialogButtonBox_EventFilter((QDialogButtonBox*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QObject* watched, QEvent* event ```
bool q_dialogbuttonbox_qbase_event_filter(void* self, void* watched, void* event) {
    return QDialogButtonBox_QBaseEventFilter((QDialogButtonBox*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, bool (*slot)(QDialogButtonBox*, QObject*, QEvent*) ```
void q_dialogbuttonbox_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QDialogButtonBox_OnEventFilter((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QTimerEvent* event ```
void q_dialogbuttonbox_timer_event(void* self, void* event) {
    QDialogButtonBox_TimerEvent((QDialogButtonBox*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QTimerEvent* event ```
void q_dialogbuttonbox_qbase_timer_event(void* self, void* event) {
    QDialogButtonBox_QBaseTimerEvent((QDialogButtonBox*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QTimerEvent*) ```
void q_dialogbuttonbox_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnTimerEvent((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QChildEvent* event ```
void q_dialogbuttonbox_child_event(void* self, void* event) {
    QDialogButtonBox_ChildEvent((QDialogButtonBox*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QChildEvent* event ```
void q_dialogbuttonbox_qbase_child_event(void* self, void* event) {
    QDialogButtonBox_QBaseChildEvent((QDialogButtonBox*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QChildEvent*) ```
void q_dialogbuttonbox_on_child_event(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnChildEvent((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QEvent* event ```
void q_dialogbuttonbox_custom_event(void* self, void* event) {
    QDialogButtonBox_CustomEvent((QDialogButtonBox*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QEvent* event ```
void q_dialogbuttonbox_qbase_custom_event(void* self, void* event) {
    QDialogButtonBox_QBaseCustomEvent((QDialogButtonBox*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QEvent*) ```
void q_dialogbuttonbox_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnCustomEvent((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QMetaMethod* signal ```
void q_dialogbuttonbox_connect_notify(void* self, void* signal) {
    QDialogButtonBox_ConnectNotify((QDialogButtonBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QMetaMethod* signal ```
void q_dialogbuttonbox_qbase_connect_notify(void* self, void* signal) {
    QDialogButtonBox_QBaseConnectNotify((QDialogButtonBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QMetaMethod*) ```
void q_dialogbuttonbox_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnConnectNotify((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QMetaMethod* signal ```
void q_dialogbuttonbox_disconnect_notify(void* self, void* signal) {
    QDialogButtonBox_DisconnectNotify((QDialogButtonBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QMetaMethod* signal ```
void q_dialogbuttonbox_qbase_disconnect_notify(void* self, void* signal) {
    QDialogButtonBox_QBaseDisconnectNotify((QDialogButtonBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QMetaMethod*) ```
void q_dialogbuttonbox_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QDialogButtonBox_OnDisconnectNotify((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_update_micro_focus(void* self) {
    QDialogButtonBox_UpdateMicroFocus((QDialogButtonBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_qbase_update_micro_focus(void* self) {
    QDialogButtonBox_QBaseUpdateMicroFocus((QDialogButtonBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)() ```
void q_dialogbuttonbox_on_update_micro_focus(void* self, void (*slot)()) {
    QDialogButtonBox_OnUpdateMicroFocus((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_create(void* self) {
    QDialogButtonBox_Create((QDialogButtonBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_qbase_create(void* self) {
    QDialogButtonBox_QBaseCreate((QDialogButtonBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)() ```
void q_dialogbuttonbox_on_create(void* self, void (*slot)()) {
    QDialogButtonBox_OnCreate((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_destroy(void* self) {
    QDialogButtonBox_Destroy((QDialogButtonBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_qbase_destroy(void* self) {
    QDialogButtonBox_QBaseDestroy((QDialogButtonBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)() ```
void q_dialogbuttonbox_on_destroy(void* self, void (*slot)()) {
    QDialogButtonBox_OnDestroy((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_focus_next_child(void* self) {
    return QDialogButtonBox_FocusNextChild((QDialogButtonBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_qbase_focus_next_child(void* self) {
    return QDialogButtonBox_QBaseFocusNextChild((QDialogButtonBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, bool (*slot)() ```
void q_dialogbuttonbox_on_focus_next_child(void* self, bool (*slot)()) {
    QDialogButtonBox_OnFocusNextChild((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_focus_previous_child(void* self) {
    return QDialogButtonBox_FocusPreviousChild((QDialogButtonBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_qbase_focus_previous_child(void* self) {
    return QDialogButtonBox_QBaseFocusPreviousChild((QDialogButtonBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, bool (*slot)() ```
void q_dialogbuttonbox_on_focus_previous_child(void* self, bool (*slot)()) {
    QDialogButtonBox_OnFocusPreviousChild((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self ```
QObject* q_dialogbuttonbox_sender(void* self) {
    return QDialogButtonBox_Sender((QDialogButtonBox*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self ```
QObject* q_dialogbuttonbox_qbase_sender(void* self) {
    return QDialogButtonBox_QBaseSender((QDialogButtonBox*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QObject* (*slot)() ```
void q_dialogbuttonbox_on_sender(void* self, QObject* (*slot)()) {
    QDialogButtonBox_OnSender((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_sender_signal_index(void* self) {
    return QDialogButtonBox_SenderSignalIndex((QDialogButtonBox*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_qbase_sender_signal_index(void* self) {
    return QDialogButtonBox_QBaseSenderSignalIndex((QDialogButtonBox*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, int32_t (*slot)() ```
void q_dialogbuttonbox_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QDialogButtonBox_OnSenderSignalIndex((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, const char* signal ```
int32_t q_dialogbuttonbox_receivers(void* self, const char* signal) {
    return QDialogButtonBox_Receivers((QDialogButtonBox*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, const char* signal ```
int32_t q_dialogbuttonbox_qbase_receivers(void* self, const char* signal) {
    return QDialogButtonBox_QBaseReceivers((QDialogButtonBox*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, int32_t (*slot)(QDialogButtonBox*, const char*) ```
void q_dialogbuttonbox_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QDialogButtonBox_OnReceivers((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QMetaMethod* signal ```
bool q_dialogbuttonbox_is_signal_connected(void* self, void* signal) {
    return QDialogButtonBox_IsSignalConnected((QDialogButtonBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QMetaMethod* signal ```
bool q_dialogbuttonbox_qbase_is_signal_connected(void* self, void* signal) {
    return QDialogButtonBox_QBaseIsSignalConnected((QDialogButtonBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, bool (*slot)(QDialogButtonBox*, QMetaMethod*) ```
void q_dialogbuttonbox_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QDialogButtonBox_OnIsSignalConnected((QDialogButtonBox*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_delete(void* self) {
    QDialogButtonBox_Delete((QDialogButtonBox*)(self));
}