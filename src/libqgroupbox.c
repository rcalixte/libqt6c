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
#include "libqgroupbox.hpp"
#include "libqgroupbox.h"

/// https://doc.qt.io/qt-6/qgroupbox.html

/// q_groupbox_new constructs a new QGroupBox object.
///
/// ``` QWidget* parent ```
QGroupBox* q_groupbox_new(void* parent) {
    return QGroupBox_new((QWidget*)parent);
}

/// q_groupbox_new2 constructs a new QGroupBox object.
///
///
QGroupBox* q_groupbox_new2() {
    return QGroupBox_new2();
}

/// q_groupbox_new3 constructs a new QGroupBox object.
///
/// ``` const char* title ```
QGroupBox* q_groupbox_new3(const char* title) {
    return QGroupBox_new3(qstring(title));
}

/// q_groupbox_new4 constructs a new QGroupBox object.
///
/// ``` const char* title, QWidget* parent ```
QGroupBox* q_groupbox_new4(const char* title, void* parent) {
    return QGroupBox_new4(qstring(title), (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGroupBox* self ```
QMetaObject* q_groupbox_meta_object(void* self) {
    return QGroupBox_MetaObject((QGroupBox*)self);
}

/// ``` QGroupBox* self, const char* param1 ```
void* q_groupbox_metacast(void* self, const char* param1) {
    return QGroupBox_Metacast((QGroupBox*)self, param1);
}

/// ``` QGroupBox* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_groupbox_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGroupBox_Metacall((QGroupBox*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QGroupBox* self, int32_t (*slot)(QGroupBox*, enum QMetaObject__Call, int, void*) ```
void q_groupbox_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QGroupBox_OnMetacall((QGroupBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGroupBox* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_groupbox_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGroupBox_QBaseMetacall((QGroupBox*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_groupbox_tr(const char* s) {
    libqt_string _str = QGroupBox_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#title)
///
/// ``` QGroupBox* self ```
const char* q_groupbox_title(void* self) {
    libqt_string _str = QGroupBox_Title((QGroupBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#setTitle)
///
/// ``` QGroupBox* self, const char* title ```
void q_groupbox_set_title(void* self, const char* title) {
    QGroupBox_SetTitle((QGroupBox*)self, qstring(title));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#alignment)
///
/// ``` QGroupBox* self ```
int64_t q_groupbox_alignment(void* self) {
    return QGroupBox_Alignment((QGroupBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#setAlignment)
///
/// ``` QGroupBox* self, int alignment ```
void q_groupbox_set_alignment(void* self, int alignment) {
    QGroupBox_SetAlignment((QGroupBox*)self, alignment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#minimumSizeHint)
///
/// ``` QGroupBox* self ```
QSize* q_groupbox_minimum_size_hint(void* self) {
    return QGroupBox_MinimumSizeHint((QGroupBox*)self);
}

/// Allows for overriding the related default method
///
/// ``` QGroupBox* self, QSize* (*slot)() ```
void q_groupbox_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QGroupBox_OnMinimumSizeHint((QGroupBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGroupBox* self ```
QSize* q_groupbox_qbase_minimum_size_hint(void* self) {
    return QGroupBox_QBaseMinimumSizeHint((QGroupBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#isFlat)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_flat(void* self) {
    return QGroupBox_IsFlat((QGroupBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#setFlat)
///
/// ``` QGroupBox* self, bool flat ```
void q_groupbox_set_flat(void* self, bool flat) {
    QGroupBox_SetFlat((QGroupBox*)self, flat);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#isCheckable)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_checkable(void* self) {
    return QGroupBox_IsCheckable((QGroupBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#setCheckable)
///
/// ``` QGroupBox* self, bool checkable ```
void q_groupbox_set_checkable(void* self, bool checkable) {
    QGroupBox_SetCheckable((QGroupBox*)self, checkable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#isChecked)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_checked(void* self) {
    return QGroupBox_IsChecked((QGroupBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#setChecked)
///
/// ``` QGroupBox* self, bool checked ```
void q_groupbox_set_checked(void* self, bool checked) {
    QGroupBox_SetChecked((QGroupBox*)self, checked);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#clicked)
///
/// ``` QGroupBox* self ```
void q_groupbox_clicked(void* self) {
    QGroupBox_Clicked((QGroupBox*)self);
}

/// ``` QGroupBox* self, void (*slot)(QGroupBox*) ```
void q_groupbox_on_clicked(void* self, void (*slot)(void*)) {
    QGroupBox_Connect_Clicked((QGroupBox*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#toggled)
///
/// ``` QGroupBox* self, bool param1 ```
void q_groupbox_toggled(void* self, bool param1) {
    QGroupBox_Toggled((QGroupBox*)self, param1);
}

/// ``` QGroupBox* self, void (*slot)(QGroupBox*, bool) ```
void q_groupbox_on_toggled(void* self, void (*slot)(void*, bool)) {
    QGroupBox_Connect_Toggled((QGroupBox*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#event)
///
/// ``` QGroupBox* self, QEvent* event ```
bool q_groupbox_event(void* self, void* event) {
    return QGroupBox_Event((QGroupBox*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGroupBox* self, bool (*slot)(QGroupBox*, QEvent*) ```
void q_groupbox_on_event(void* self, bool (*slot)(void*, void*)) {
    QGroupBox_OnEvent((QGroupBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGroupBox* self, QEvent* event ```
bool q_groupbox_qbase_event(void* self, void* event) {
    return QGroupBox_QBaseEvent((QGroupBox*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#childEvent)
///
/// ``` QGroupBox* self, QChildEvent* event ```
void q_groupbox_child_event(void* self, void* event) {
    QGroupBox_ChildEvent((QGroupBox*)self, (QChildEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QChildEvent*) ```
void q_groupbox_on_child_event(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnChildEvent((QGroupBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGroupBox* self, QChildEvent* event ```
void q_groupbox_qbase_child_event(void* self, void* event) {
    QGroupBox_QBaseChildEvent((QGroupBox*)self, (QChildEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#resizeEvent)
///
/// ``` QGroupBox* self, QResizeEvent* event ```
void q_groupbox_resize_event(void* self, void* event) {
    QGroupBox_ResizeEvent((QGroupBox*)self, (QResizeEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QResizeEvent*) ```
void q_groupbox_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnResizeEvent((QGroupBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGroupBox* self, QResizeEvent* event ```
void q_groupbox_qbase_resize_event(void* self, void* event) {
    QGroupBox_QBaseResizeEvent((QGroupBox*)self, (QResizeEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#paintEvent)
///
/// ``` QGroupBox* self, QPaintEvent* event ```
void q_groupbox_paint_event(void* self, void* event) {
    QGroupBox_PaintEvent((QGroupBox*)self, (QPaintEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QPaintEvent*) ```
void q_groupbox_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnPaintEvent((QGroupBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGroupBox* self, QPaintEvent* event ```
void q_groupbox_qbase_paint_event(void* self, void* event) {
    QGroupBox_QBasePaintEvent((QGroupBox*)self, (QPaintEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#focusInEvent)
///
/// ``` QGroupBox* self, QFocusEvent* event ```
void q_groupbox_focus_in_event(void* self, void* event) {
    QGroupBox_FocusInEvent((QGroupBox*)self, (QFocusEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QFocusEvent*) ```
void q_groupbox_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnFocusInEvent((QGroupBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGroupBox* self, QFocusEvent* event ```
void q_groupbox_qbase_focus_in_event(void* self, void* event) {
    QGroupBox_QBaseFocusInEvent((QGroupBox*)self, (QFocusEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#changeEvent)
///
/// ``` QGroupBox* self, QEvent* event ```
void q_groupbox_change_event(void* self, void* event) {
    QGroupBox_ChangeEvent((QGroupBox*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QEvent*) ```
void q_groupbox_on_change_event(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnChangeEvent((QGroupBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGroupBox* self, QEvent* event ```
void q_groupbox_qbase_change_event(void* self, void* event) {
    QGroupBox_QBaseChangeEvent((QGroupBox*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#mousePressEvent)
///
/// ``` QGroupBox* self, QMouseEvent* event ```
void q_groupbox_mouse_press_event(void* self, void* event) {
    QGroupBox_MousePressEvent((QGroupBox*)self, (QMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QMouseEvent*) ```
void q_groupbox_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnMousePressEvent((QGroupBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGroupBox* self, QMouseEvent* event ```
void q_groupbox_qbase_mouse_press_event(void* self, void* event) {
    QGroupBox_QBaseMousePressEvent((QGroupBox*)self, (QMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#mouseMoveEvent)
///
/// ``` QGroupBox* self, QMouseEvent* event ```
void q_groupbox_mouse_move_event(void* self, void* event) {
    QGroupBox_MouseMoveEvent((QGroupBox*)self, (QMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QMouseEvent*) ```
void q_groupbox_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnMouseMoveEvent((QGroupBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGroupBox* self, QMouseEvent* event ```
void q_groupbox_qbase_mouse_move_event(void* self, void* event) {
    QGroupBox_QBaseMouseMoveEvent((QGroupBox*)self, (QMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#mouseReleaseEvent)
///
/// ``` QGroupBox* self, QMouseEvent* event ```
void q_groupbox_mouse_release_event(void* self, void* event) {
    QGroupBox_MouseReleaseEvent((QGroupBox*)self, (QMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QMouseEvent*) ```
void q_groupbox_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnMouseReleaseEvent((QGroupBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGroupBox* self, QMouseEvent* event ```
void q_groupbox_qbase_mouse_release_event(void* self, void* event) {
    QGroupBox_QBaseMouseReleaseEvent((QGroupBox*)self, (QMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#initStyleOption)
///
/// ``` QGroupBox* self, QStyleOptionGroupBox* option ```
void q_groupbox_init_style_option(void* self, void* option) {
    QGroupBox_InitStyleOption((QGroupBox*)self, (QStyleOptionGroupBox*)option);
}

/// Allows for overriding the related default method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QStyleOptionGroupBox*) ```
void q_groupbox_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnInitStyleOption((QGroupBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGroupBox* self, QStyleOptionGroupBox* option ```
void q_groupbox_qbase_init_style_option(void* self, void* option) {
    QGroupBox_QBaseInitStyleOption((QGroupBox*)self, (QStyleOptionGroupBox*)option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_groupbox_tr2(const char* s, const char* c) {
    libqt_string _str = QGroupBox_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_groupbox_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QGroupBox_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#clicked)
///
/// ``` QGroupBox* self, bool checked ```
void q_groupbox_clicked1(void* self, bool checked) {
    QGroupBox_Clicked1((QGroupBox*)self, checked);
}

/// ``` QGroupBox* self, void (*slot)(QGroupBox*, bool) ```
void q_groupbox_on_clicked1(void* self, void (*slot)(void*, bool)) {
    QGroupBox_Connect_Clicked1((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QGroupBox* self ```
uintptr_t q_groupbox_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QGroupBox* self ```
void q_groupbox_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QGroupBox* self ```
uintptr_t q_groupbox_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QGroupBox* self ```
uintptr_t q_groupbox_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QGroupBox* self ```
QStyle* q_groupbox_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QGroupBox* self, QStyle* style ```
void q_groupbox_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QGroupBox* self ```
int64_t q_groupbox_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QGroupBox* self, enum Qt__WindowModality windowModality ```
void q_groupbox_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QGroupBox* self, QWidget* param1 ```
bool q_groupbox_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QGroupBox* self, bool enabled ```
void q_groupbox_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QGroupBox* self, bool disabled ```
void q_groupbox_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QGroupBox* self, bool windowModified ```
void q_groupbox_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QGroupBox* self ```
QRect* q_groupbox_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QGroupBox* self ```
QRect* q_groupbox_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QGroupBox* self ```
QRect* q_groupbox_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QGroupBox* self ```
QPoint* q_groupbox_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QGroupBox* self ```
QSize* q_groupbox_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QGroupBox* self ```
QSize* q_groupbox_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QGroupBox* self ```
QRect* q_groupbox_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QGroupBox* self ```
QRect* q_groupbox_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QGroupBox* self ```
QRegion* q_groupbox_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QGroupBox* self ```
QSize* q_groupbox_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QGroupBox* self ```
QSize* q_groupbox_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QGroupBox* self, QSize* minimumSize ```
void q_groupbox_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QGroupBox* self, int minw, int minh ```
void q_groupbox_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QGroupBox* self, QSize* maximumSize ```
void q_groupbox_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QGroupBox* self, int maxw, int maxh ```
void q_groupbox_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QGroupBox* self, int minw ```
void q_groupbox_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QGroupBox* self, int minh ```
void q_groupbox_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QGroupBox* self, int maxw ```
void q_groupbox_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QGroupBox* self, int maxh ```
void q_groupbox_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QGroupBox* self ```
QSize* q_groupbox_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QGroupBox* self, QSize* sizeIncrement ```
void q_groupbox_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QGroupBox* self, int w, int h ```
void q_groupbox_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QGroupBox* self ```
QSize* q_groupbox_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QGroupBox* self, QSize* baseSize ```
void q_groupbox_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QGroupBox* self, int basew, int baseh ```
void q_groupbox_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QGroupBox* self, QSize* fixedSize ```
void q_groupbox_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QGroupBox* self, int w, int h ```
void q_groupbox_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QGroupBox* self, int w ```
void q_groupbox_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QGroupBox* self, int h ```
void q_groupbox_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QGroupBox* self, QPointF* param1 ```
QPointF* q_groupbox_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QGroupBox* self, QPoint* param1 ```
QPoint* q_groupbox_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QGroupBox* self, QPointF* param1 ```
QPointF* q_groupbox_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QGroupBox* self, QPoint* param1 ```
QPoint* q_groupbox_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QGroupBox* self, QPointF* param1 ```
QPointF* q_groupbox_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QGroupBox* self, QPoint* param1 ```
QPoint* q_groupbox_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QGroupBox* self, QPointF* param1 ```
QPointF* q_groupbox_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QGroupBox* self, QPoint* param1 ```
QPoint* q_groupbox_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QGroupBox* self, QWidget* param1, QPointF* param2 ```
QPointF* q_groupbox_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QGroupBox* self, QWidget* param1, QPoint* param2 ```
QPoint* q_groupbox_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QGroupBox* self, QWidget* param1, QPointF* param2 ```
QPointF* q_groupbox_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QGroupBox* self, QWidget* param1, QPoint* param2 ```
QPoint* q_groupbox_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QGroupBox* self ```
QWidget* q_groupbox_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QGroupBox* self ```
QWidget* q_groupbox_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QGroupBox* self ```
QWidget* q_groupbox_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QGroupBox* self ```
QPalette* q_groupbox_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QGroupBox* self, QPalette* palette ```
void q_groupbox_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QGroupBox* self, enum QPalette__ColorRole backgroundRole ```
void q_groupbox_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QGroupBox* self ```
int64_t q_groupbox_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QGroupBox* self, enum QPalette__ColorRole foregroundRole ```
void q_groupbox_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QGroupBox* self ```
int64_t q_groupbox_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QGroupBox* self ```
QFont* q_groupbox_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QGroupBox* self, QFont* font ```
void q_groupbox_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QGroupBox* self ```
QFontMetrics* q_groupbox_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QGroupBox* self ```
QFontInfo* q_groupbox_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QGroupBox* self ```
QCursor* q_groupbox_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QGroupBox* self, QCursor* cursor ```
void q_groupbox_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QGroupBox* self ```
void q_groupbox_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QGroupBox* self, bool enable ```
void q_groupbox_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QGroupBox* self ```
bool q_groupbox_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QGroupBox* self ```
bool q_groupbox_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QGroupBox* self, bool enable ```
void q_groupbox_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QGroupBox* self ```
bool q_groupbox_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QGroupBox* self, QBitmap* mask ```
void q_groupbox_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QGroupBox* self, QRegion* mask ```
void q_groupbox_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QGroupBox* self ```
QRegion* q_groupbox_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QGroupBox* self ```
void q_groupbox_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QGroupBox* self, QPaintDevice* target ```
void q_groupbox_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QGroupBox* self, QPainter* painter ```
void q_groupbox_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QGroupBox* self ```
QPixmap* q_groupbox_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QGroupBox* self ```
QGraphicsEffect* q_groupbox_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QGroupBox* self, QGraphicsEffect* effect ```
void q_groupbox_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QGroupBox* self, enum Qt__GestureType typeVal ```
void q_groupbox_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QGroupBox* self, enum Qt__GestureType typeVal ```
void q_groupbox_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QGroupBox* self, const char* windowTitle ```
void q_groupbox_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QGroupBox* self, const char* styleSheet ```
void q_groupbox_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QGroupBox* self ```
const char* q_groupbox_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QGroupBox* self ```
const char* q_groupbox_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QGroupBox* self, QIcon* icon ```
void q_groupbox_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QGroupBox* self ```
QIcon* q_groupbox_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QGroupBox* self, const char* windowIconText ```
void q_groupbox_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QGroupBox* self ```
const char* q_groupbox_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QGroupBox* self, const char* windowRole ```
void q_groupbox_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QGroupBox* self ```
const char* q_groupbox_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QGroupBox* self, const char* filePath ```
void q_groupbox_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QGroupBox* self ```
const char* q_groupbox_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QGroupBox* self, double level ```
void q_groupbox_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QGroupBox* self ```
double q_groupbox_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QGroupBox* self, const char* toolTip ```
void q_groupbox_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QGroupBox* self ```
const char* q_groupbox_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QGroupBox* self, int msec ```
void q_groupbox_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QGroupBox* self, const char* statusTip ```
void q_groupbox_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QGroupBox* self ```
const char* q_groupbox_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QGroupBox* self, const char* whatsThis ```
void q_groupbox_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QGroupBox* self ```
const char* q_groupbox_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QGroupBox* self ```
const char* q_groupbox_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QGroupBox* self, const char* name ```
void q_groupbox_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QGroupBox* self ```
const char* q_groupbox_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QGroupBox* self, const char* description ```
void q_groupbox_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QGroupBox* self, enum Qt__LayoutDirection direction ```
void q_groupbox_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QGroupBox* self ```
int64_t q_groupbox_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QGroupBox* self ```
void q_groupbox_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QGroupBox* self, QLocale* locale ```
void q_groupbox_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QGroupBox* self ```
QLocale* q_groupbox_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QGroupBox* self ```
void q_groupbox_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QGroupBox* self ```
void q_groupbox_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QGroupBox* self ```
void q_groupbox_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QGroupBox* self ```
void q_groupbox_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QGroupBox* self, enum Qt__FocusReason reason ```
void q_groupbox_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QGroupBox* self ```
int64_t q_groupbox_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QGroupBox* self, enum Qt__FocusPolicy policy ```
void q_groupbox_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QGroupBox* self ```
bool q_groupbox_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_groupbox_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QGroupBox* self, QWidget* focusProxy ```
void q_groupbox_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QGroupBox* self ```
QWidget* q_groupbox_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QGroupBox* self ```
int64_t q_groupbox_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QGroupBox* self, enum Qt__ContextMenuPolicy policy ```
void q_groupbox_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QGroupBox* self ```
void q_groupbox_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QGroupBox* self, QCursor* param1 ```
void q_groupbox_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QGroupBox* self ```
void q_groupbox_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QGroupBox* self ```
void q_groupbox_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QGroupBox* self ```
void q_groupbox_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QGroupBox* self, QKeySequence* key ```
int32_t q_groupbox_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QGroupBox* self, int id ```
void q_groupbox_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QGroupBox* self, int id ```
void q_groupbox_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QGroupBox* self, int id ```
void q_groupbox_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_groupbox_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_groupbox_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QGroupBox* self ```
bool q_groupbox_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QGroupBox* self, bool enable ```
void q_groupbox_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QGroupBox* self ```
QGraphicsProxyWidget* q_groupbox_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QGroupBox* self ```
void q_groupbox_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QGroupBox* self ```
void q_groupbox_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QGroupBox* self, int x, int y, int w, int h ```
void q_groupbox_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QGroupBox* self, QRect* param1 ```
void q_groupbox_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QGroupBox* self, QRegion* param1 ```
void q_groupbox_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QGroupBox* self, int x, int y, int w, int h ```
void q_groupbox_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QGroupBox* self, QRect* param1 ```
void q_groupbox_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QGroupBox* self, QRegion* param1 ```
void q_groupbox_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QGroupBox* self, bool hidden ```
void q_groupbox_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QGroupBox* self ```
void q_groupbox_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QGroupBox* self ```
void q_groupbox_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QGroupBox* self ```
void q_groupbox_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QGroupBox* self ```
void q_groupbox_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QGroupBox* self ```
void q_groupbox_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QGroupBox* self ```
void q_groupbox_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QGroupBox* self ```
bool q_groupbox_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QGroupBox* self ```
void q_groupbox_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QGroupBox* self ```
void q_groupbox_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QGroupBox* self, QWidget* param1 ```
void q_groupbox_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QGroupBox* self, int x, int y ```
void q_groupbox_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QGroupBox* self, QPoint* param1 ```
void q_groupbox_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QGroupBox* self, int w, int h ```
void q_groupbox_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QGroupBox* self, QSize* param1 ```
void q_groupbox_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QGroupBox* self, int x, int y, int w, int h ```
void q_groupbox_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QGroupBox* self, QRect* geometry ```
void q_groupbox_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QGroupBox* self ```
char* q_groupbox_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QGroupBox* self, const char* geometry ```
bool q_groupbox_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QGroupBox* self ```
void q_groupbox_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QGroupBox* self, QWidget* param1 ```
bool q_groupbox_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QGroupBox* self ```
int64_t q_groupbox_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QGroupBox* self, int state ```
void q_groupbox_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QGroupBox* self, int state ```
void q_groupbox_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QGroupBox* self ```
QSizePolicy* q_groupbox_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QGroupBox* self, QSizePolicy* sizePolicy ```
void q_groupbox_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QGroupBox* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_groupbox_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QGroupBox* self ```
QRegion* q_groupbox_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QGroupBox* self, int left, int top, int right, int bottom ```
void q_groupbox_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QGroupBox* self, QMargins* margins ```
void q_groupbox_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QGroupBox* self ```
QMargins* q_groupbox_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QGroupBox* self ```
QRect* q_groupbox_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QGroupBox* self ```
QLayout* q_groupbox_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QGroupBox* self, QLayout* layout ```
void q_groupbox_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QGroupBox* self ```
void q_groupbox_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QGroupBox* self, QWidget* parent ```
void q_groupbox_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QGroupBox* self, QWidget* parent, int f ```
void q_groupbox_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QGroupBox* self, int dx, int dy ```
void q_groupbox_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QGroupBox* self, int dx, int dy, QRect* param3 ```
void q_groupbox_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QGroupBox* self ```
QWidget* q_groupbox_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QGroupBox* self ```
QWidget* q_groupbox_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QGroupBox* self ```
QWidget* q_groupbox_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QGroupBox* self ```
bool q_groupbox_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QGroupBox* self, bool on ```
void q_groupbox_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QGroupBox* self, QAction* action ```
void q_groupbox_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QGroupBox* self, QAction* actions[] ```
void q_groupbox_add_actions(void* self, void* actions[]) {
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
/// ``` QGroupBox* self, QAction* before, QAction* actions[] ```
void q_groupbox_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QGroupBox* self, QAction* before, QAction* action ```
void q_groupbox_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QGroupBox* self, QAction* action ```
void q_groupbox_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QGroupBox* self ```
libqt_list /* of QAction* */ q_groupbox_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QGroupBox* self, const char* text ```
QAction* q_groupbox_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QGroupBox* self, QIcon* icon, const char* text ```
QAction* q_groupbox_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QGroupBox* self, const char* text, QKeySequence* shortcut ```
QAction* q_groupbox_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QGroupBox* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_groupbox_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QGroupBox* self ```
QWidget* q_groupbox_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QGroupBox* self, int typeVal ```
void q_groupbox_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QGroupBox* self ```
int64_t q_groupbox_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QGroupBox* self, enum Qt__WindowType param1 ```
void q_groupbox_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QGroupBox* self, int typeVal ```
void q_groupbox_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QGroupBox* self ```
int64_t q_groupbox_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_groupbox_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QGroupBox* self, int x, int y ```
QWidget* q_groupbox_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QGroupBox* self, QPoint* p ```
QWidget* q_groupbox_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QGroupBox* self, enum Qt__WidgetAttribute param1 ```
void q_groupbox_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QGroupBox* self, enum Qt__WidgetAttribute param1 ```
bool q_groupbox_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QGroupBox* self ```
void q_groupbox_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QGroupBox* self, QWidget* child ```
bool q_groupbox_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QGroupBox* self ```
bool q_groupbox_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QGroupBox* self, bool enabled ```
void q_groupbox_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QGroupBox* self ```
QBackingStore* q_groupbox_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QGroupBox* self ```
QWindow* q_groupbox_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QGroupBox* self ```
QScreen* q_groupbox_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QGroupBox* self, QScreen* screen ```
void q_groupbox_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_groupbox_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QGroupBox* self, const char* title ```
void q_groupbox_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QGroupBox* self, void (*slot)(QWidget*, const char*) ```
void q_groupbox_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QGroupBox* self, QIcon* icon ```
void q_groupbox_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QGroupBox* self, void (*slot)(QWidget*, QIcon*) ```
void q_groupbox_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QGroupBox* self, const char* iconText ```
void q_groupbox_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QGroupBox* self, void (*slot)(QWidget*, const char*) ```
void q_groupbox_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QGroupBox* self, QPoint* pos ```
void q_groupbox_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QGroupBox* self, void (*slot)(QWidget*, QPoint*) ```
void q_groupbox_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QGroupBox* self ```
int64_t q_groupbox_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QGroupBox* self, int hints ```
void q_groupbox_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QGroupBox* self, QPaintDevice* target, QPoint* targetOffset ```
void q_groupbox_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QGroupBox* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_groupbox_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QGroupBox* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_groupbox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QGroupBox* self, QPainter* painter, QPoint* targetOffset ```
void q_groupbox_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QGroupBox* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_groupbox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QGroupBox* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_groupbox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QGroupBox* self, QRect* rectangle ```
QPixmap* q_groupbox_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QGroupBox* self, enum Qt__GestureType typeVal, int flags ```
void q_groupbox_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QGroupBox* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_groupbox_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QGroupBox* self, int id, bool enable ```
void q_groupbox_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QGroupBox* self, int id, bool enable ```
void q_groupbox_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QGroupBox* self, enum Qt__WindowType param1, bool on ```
void q_groupbox_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QGroupBox* self, enum Qt__WidgetAttribute param1, bool on ```
void q_groupbox_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_groupbox_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_groupbox_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGroupBox* self ```
const char* q_groupbox_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGroupBox* self, const char* name ```
void q_groupbox_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGroupBox* self ```
bool q_groupbox_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGroupBox* self, bool b ```
bool q_groupbox_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGroupBox* self ```
QThread* q_groupbox_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGroupBox* self, QThread* thread ```
void q_groupbox_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGroupBox* self, int interval ```
int32_t q_groupbox_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGroupBox* self, int id ```
void q_groupbox_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGroupBox* self ```
libqt_list /* of QObject* */ q_groupbox_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGroupBox* self, QObject* filterObj ```
void q_groupbox_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGroupBox* self, QObject* obj ```
void q_groupbox_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_groupbox_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGroupBox* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_groupbox_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_groupbox_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_groupbox_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGroupBox* self ```
void q_groupbox_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGroupBox* self ```
void q_groupbox_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGroupBox* self, const char* name, QVariant* value ```
bool q_groupbox_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGroupBox* self, const char* name ```
QVariant* q_groupbox_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGroupBox* self ```
const char** q_groupbox_dynamic_property_names(void* self) {
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
/// ``` QGroupBox* self ```
QBindingStorage* q_groupbox_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGroupBox* self ```
QBindingStorage* q_groupbox_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGroupBox* self ```
void q_groupbox_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QGroupBox* self, void (*slot)(QObject*) ```
void q_groupbox_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGroupBox* self ```
QObject* q_groupbox_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGroupBox* self, const char* classname ```
bool q_groupbox_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGroupBox* self ```
void q_groupbox_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGroupBox* self, int interval, enum Qt__TimerType timerType ```
int32_t q_groupbox_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_groupbox_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGroupBox* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_groupbox_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGroupBox* self, QObject* param1 ```
void q_groupbox_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QGroupBox* self, void (*slot)(QObject*, QObject*) ```
void q_groupbox_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QGroupBox* self ```
bool q_groupbox_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QGroupBox* self ```
double q_groupbox_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QGroupBox* self ```
double q_groupbox_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_groupbox_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_dev_type(void* self) {
    return QGroupBox_DevType((QGroupBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_qbase_dev_type(void* self) {
    return QGroupBox_QBaseDevType((QGroupBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, int32_t (*slot)() ```
void q_groupbox_on_dev_type(void* self, int32_t (*slot)()) {
    QGroupBox_OnDevType((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, bool visible ```
void q_groupbox_set_visible(void* self, bool visible) {
    QGroupBox_SetVisible((QGroupBox*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, bool visible ```
void q_groupbox_qbase_set_visible(void* self, bool visible) {
    QGroupBox_QBaseSetVisible((QGroupBox*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, bool) ```
void q_groupbox_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QGroupBox_OnSetVisible((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self ```
QSize* q_groupbox_size_hint(void* self) {
    return QGroupBox_SizeHint((QGroupBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self ```
QSize* q_groupbox_qbase_size_hint(void* self) {
    return QGroupBox_QBaseSizeHint((QGroupBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, QSize* (*slot)() ```
void q_groupbox_on_size_hint(void* self, QSize* (*slot)()) {
    QGroupBox_OnSizeHint((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, int param1 ```
int32_t q_groupbox_height_for_width(void* self, int param1) {
    return QGroupBox_HeightForWidth((QGroupBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, int param1 ```
int32_t q_groupbox_qbase_height_for_width(void* self, int param1) {
    return QGroupBox_QBaseHeightForWidth((QGroupBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, int32_t (*slot)(QGroupBox*, int) ```
void q_groupbox_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QGroupBox_OnHeightForWidth((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self ```
bool q_groupbox_has_height_for_width(void* self) {
    return QGroupBox_HasHeightForWidth((QGroupBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self ```
bool q_groupbox_qbase_has_height_for_width(void* self) {
    return QGroupBox_QBaseHasHeightForWidth((QGroupBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, bool (*slot)() ```
void q_groupbox_on_has_height_for_width(void* self, bool (*slot)()) {
    QGroupBox_OnHasHeightForWidth((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self ```
QPaintEngine* q_groupbox_paint_engine(void* self) {
    return QGroupBox_PaintEngine((QGroupBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self ```
QPaintEngine* q_groupbox_qbase_paint_engine(void* self) {
    return QGroupBox_QBasePaintEngine((QGroupBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, QPaintEngine* (*slot)() ```
void q_groupbox_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QGroupBox_OnPaintEngine((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QMouseEvent* event ```
void q_groupbox_mouse_double_click_event(void* self, void* event) {
    QGroupBox_MouseDoubleClickEvent((QGroupBox*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QMouseEvent* event ```
void q_groupbox_qbase_mouse_double_click_event(void* self, void* event) {
    QGroupBox_QBaseMouseDoubleClickEvent((QGroupBox*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QMouseEvent*) ```
void q_groupbox_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnMouseDoubleClickEvent((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QWheelEvent* event ```
void q_groupbox_wheel_event(void* self, void* event) {
    QGroupBox_WheelEvent((QGroupBox*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QWheelEvent* event ```
void q_groupbox_qbase_wheel_event(void* self, void* event) {
    QGroupBox_QBaseWheelEvent((QGroupBox*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QWheelEvent*) ```
void q_groupbox_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnWheelEvent((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QKeyEvent* event ```
void q_groupbox_key_press_event(void* self, void* event) {
    QGroupBox_KeyPressEvent((QGroupBox*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QKeyEvent* event ```
void q_groupbox_qbase_key_press_event(void* self, void* event) {
    QGroupBox_QBaseKeyPressEvent((QGroupBox*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QKeyEvent*) ```
void q_groupbox_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnKeyPressEvent((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QKeyEvent* event ```
void q_groupbox_key_release_event(void* self, void* event) {
    QGroupBox_KeyReleaseEvent((QGroupBox*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QKeyEvent* event ```
void q_groupbox_qbase_key_release_event(void* self, void* event) {
    QGroupBox_QBaseKeyReleaseEvent((QGroupBox*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QKeyEvent*) ```
void q_groupbox_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnKeyReleaseEvent((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QFocusEvent* event ```
void q_groupbox_focus_out_event(void* self, void* event) {
    QGroupBox_FocusOutEvent((QGroupBox*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QFocusEvent* event ```
void q_groupbox_qbase_focus_out_event(void* self, void* event) {
    QGroupBox_QBaseFocusOutEvent((QGroupBox*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QFocusEvent*) ```
void q_groupbox_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnFocusOutEvent((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QEnterEvent* event ```
void q_groupbox_enter_event(void* self, void* event) {
    QGroupBox_EnterEvent((QGroupBox*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QEnterEvent* event ```
void q_groupbox_qbase_enter_event(void* self, void* event) {
    QGroupBox_QBaseEnterEvent((QGroupBox*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QEnterEvent*) ```
void q_groupbox_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnEnterEvent((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QEvent* event ```
void q_groupbox_leave_event(void* self, void* event) {
    QGroupBox_LeaveEvent((QGroupBox*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QEvent* event ```
void q_groupbox_qbase_leave_event(void* self, void* event) {
    QGroupBox_QBaseLeaveEvent((QGroupBox*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QEvent*) ```
void q_groupbox_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnLeaveEvent((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QMoveEvent* event ```
void q_groupbox_move_event(void* self, void* event) {
    QGroupBox_MoveEvent((QGroupBox*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QMoveEvent* event ```
void q_groupbox_qbase_move_event(void* self, void* event) {
    QGroupBox_QBaseMoveEvent((QGroupBox*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QMoveEvent*) ```
void q_groupbox_on_move_event(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnMoveEvent((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QCloseEvent* event ```
void q_groupbox_close_event(void* self, void* event) {
    QGroupBox_CloseEvent((QGroupBox*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QCloseEvent* event ```
void q_groupbox_qbase_close_event(void* self, void* event) {
    QGroupBox_QBaseCloseEvent((QGroupBox*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QCloseEvent*) ```
void q_groupbox_on_close_event(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnCloseEvent((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QContextMenuEvent* event ```
void q_groupbox_context_menu_event(void* self, void* event) {
    QGroupBox_ContextMenuEvent((QGroupBox*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QContextMenuEvent* event ```
void q_groupbox_qbase_context_menu_event(void* self, void* event) {
    QGroupBox_QBaseContextMenuEvent((QGroupBox*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QContextMenuEvent*) ```
void q_groupbox_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnContextMenuEvent((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QTabletEvent* event ```
void q_groupbox_tablet_event(void* self, void* event) {
    QGroupBox_TabletEvent((QGroupBox*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QTabletEvent* event ```
void q_groupbox_qbase_tablet_event(void* self, void* event) {
    QGroupBox_QBaseTabletEvent((QGroupBox*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QTabletEvent*) ```
void q_groupbox_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnTabletEvent((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QActionEvent* event ```
void q_groupbox_action_event(void* self, void* event) {
    QGroupBox_ActionEvent((QGroupBox*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QActionEvent* event ```
void q_groupbox_qbase_action_event(void* self, void* event) {
    QGroupBox_QBaseActionEvent((QGroupBox*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QActionEvent*) ```
void q_groupbox_on_action_event(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnActionEvent((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QDragEnterEvent* event ```
void q_groupbox_drag_enter_event(void* self, void* event) {
    QGroupBox_DragEnterEvent((QGroupBox*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QDragEnterEvent* event ```
void q_groupbox_qbase_drag_enter_event(void* self, void* event) {
    QGroupBox_QBaseDragEnterEvent((QGroupBox*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QDragEnterEvent*) ```
void q_groupbox_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnDragEnterEvent((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QDragMoveEvent* event ```
void q_groupbox_drag_move_event(void* self, void* event) {
    QGroupBox_DragMoveEvent((QGroupBox*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QDragMoveEvent* event ```
void q_groupbox_qbase_drag_move_event(void* self, void* event) {
    QGroupBox_QBaseDragMoveEvent((QGroupBox*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QDragMoveEvent*) ```
void q_groupbox_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnDragMoveEvent((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QDragLeaveEvent* event ```
void q_groupbox_drag_leave_event(void* self, void* event) {
    QGroupBox_DragLeaveEvent((QGroupBox*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QDragLeaveEvent* event ```
void q_groupbox_qbase_drag_leave_event(void* self, void* event) {
    QGroupBox_QBaseDragLeaveEvent((QGroupBox*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QDragLeaveEvent*) ```
void q_groupbox_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnDragLeaveEvent((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QDropEvent* event ```
void q_groupbox_drop_event(void* self, void* event) {
    QGroupBox_DropEvent((QGroupBox*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QDropEvent* event ```
void q_groupbox_qbase_drop_event(void* self, void* event) {
    QGroupBox_QBaseDropEvent((QGroupBox*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QDropEvent*) ```
void q_groupbox_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnDropEvent((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QShowEvent* event ```
void q_groupbox_show_event(void* self, void* event) {
    QGroupBox_ShowEvent((QGroupBox*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QShowEvent* event ```
void q_groupbox_qbase_show_event(void* self, void* event) {
    QGroupBox_QBaseShowEvent((QGroupBox*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QShowEvent*) ```
void q_groupbox_on_show_event(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnShowEvent((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QHideEvent* event ```
void q_groupbox_hide_event(void* self, void* event) {
    QGroupBox_HideEvent((QGroupBox*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QHideEvent* event ```
void q_groupbox_qbase_hide_event(void* self, void* event) {
    QGroupBox_QBaseHideEvent((QGroupBox*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QHideEvent*) ```
void q_groupbox_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnHideEvent((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, const char* eventType, void* message, intptr_t* result ```
bool q_groupbox_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QGroupBox_NativeEvent((QGroupBox*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, const char* eventType, void* message, intptr_t* result ```
bool q_groupbox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QGroupBox_QBaseNativeEvent((QGroupBox*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, bool (*slot)(QGroupBox*, const char*, void*, intptr_t*) ```
void q_groupbox_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QGroupBox_OnNativeEvent((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_groupbox_metric(void* self, int64_t param1) {
    return QGroupBox_Metric((QGroupBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_groupbox_qbase_metric(void* self, int64_t param1) {
    return QGroupBox_QBaseMetric((QGroupBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, int32_t (*slot)(QGroupBox*, enum QPaintDevice__PaintDeviceMetric) ```
void q_groupbox_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QGroupBox_OnMetric((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QPainter* painter ```
void q_groupbox_init_painter(void* self, void* painter) {
    QGroupBox_InitPainter((QGroupBox*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QPainter* painter ```
void q_groupbox_qbase_init_painter(void* self, void* painter) {
    QGroupBox_QBaseInitPainter((QGroupBox*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QPainter*) ```
void q_groupbox_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnInitPainter((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QPoint* offset ```
QPaintDevice* q_groupbox_redirected(void* self, void* offset) {
    return QGroupBox_Redirected((QGroupBox*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QPoint* offset ```
QPaintDevice* q_groupbox_qbase_redirected(void* self, void* offset) {
    return QGroupBox_QBaseRedirected((QGroupBox*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, QPaintDevice* (*slot)(QGroupBox*, QPoint*) ```
void q_groupbox_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QGroupBox_OnRedirected((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self ```
QPainter* q_groupbox_shared_painter(void* self) {
    return QGroupBox_SharedPainter((QGroupBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self ```
QPainter* q_groupbox_qbase_shared_painter(void* self) {
    return QGroupBox_QBaseSharedPainter((QGroupBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, QPainter* (*slot)() ```
void q_groupbox_on_shared_painter(void* self, QPainter* (*slot)()) {
    QGroupBox_OnSharedPainter((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QInputMethodEvent* param1 ```
void q_groupbox_input_method_event(void* self, void* param1) {
    QGroupBox_InputMethodEvent((QGroupBox*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QInputMethodEvent* param1 ```
void q_groupbox_qbase_input_method_event(void* self, void* param1) {
    QGroupBox_QBaseInputMethodEvent((QGroupBox*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QInputMethodEvent*) ```
void q_groupbox_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnInputMethodEvent((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_groupbox_input_method_query(void* self, int64_t param1) {
    return QGroupBox_InputMethodQuery((QGroupBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_groupbox_qbase_input_method_query(void* self, int64_t param1) {
    return QGroupBox_QBaseInputMethodQuery((QGroupBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, QVariant* (*slot)(QGroupBox*, enum Qt__InputMethodQuery) ```
void q_groupbox_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QGroupBox_OnInputMethodQuery((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, bool next ```
bool q_groupbox_focus_next_prev_child(void* self, bool next) {
    return QGroupBox_FocusNextPrevChild((QGroupBox*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, bool next ```
bool q_groupbox_qbase_focus_next_prev_child(void* self, bool next) {
    return QGroupBox_QBaseFocusNextPrevChild((QGroupBox*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, bool (*slot)(QGroupBox*, bool) ```
void q_groupbox_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QGroupBox_OnFocusNextPrevChild((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QObject* watched, QEvent* event ```
bool q_groupbox_event_filter(void* self, void* watched, void* event) {
    return QGroupBox_EventFilter((QGroupBox*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QObject* watched, QEvent* event ```
bool q_groupbox_qbase_event_filter(void* self, void* watched, void* event) {
    return QGroupBox_QBaseEventFilter((QGroupBox*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, bool (*slot)(QGroupBox*, QObject*, QEvent*) ```
void q_groupbox_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGroupBox_OnEventFilter((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QTimerEvent* event ```
void q_groupbox_timer_event(void* self, void* event) {
    QGroupBox_TimerEvent((QGroupBox*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QTimerEvent* event ```
void q_groupbox_qbase_timer_event(void* self, void* event) {
    QGroupBox_QBaseTimerEvent((QGroupBox*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QTimerEvent*) ```
void q_groupbox_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnTimerEvent((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QEvent* event ```
void q_groupbox_custom_event(void* self, void* event) {
    QGroupBox_CustomEvent((QGroupBox*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QEvent* event ```
void q_groupbox_qbase_custom_event(void* self, void* event) {
    QGroupBox_QBaseCustomEvent((QGroupBox*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QEvent*) ```
void q_groupbox_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnCustomEvent((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QMetaMethod* signal ```
void q_groupbox_connect_notify(void* self, void* signal) {
    QGroupBox_ConnectNotify((QGroupBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QMetaMethod* signal ```
void q_groupbox_qbase_connect_notify(void* self, void* signal) {
    QGroupBox_QBaseConnectNotify((QGroupBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QMetaMethod*) ```
void q_groupbox_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnConnectNotify((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QMetaMethod* signal ```
void q_groupbox_disconnect_notify(void* self, void* signal) {
    QGroupBox_DisconnectNotify((QGroupBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QMetaMethod* signal ```
void q_groupbox_qbase_disconnect_notify(void* self, void* signal) {
    QGroupBox_QBaseDisconnectNotify((QGroupBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QMetaMethod*) ```
void q_groupbox_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QGroupBox_OnDisconnectNotify((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self ```
void q_groupbox_update_micro_focus(void* self) {
    QGroupBox_UpdateMicroFocus((QGroupBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self ```
void q_groupbox_qbase_update_micro_focus(void* self) {
    QGroupBox_QBaseUpdateMicroFocus((QGroupBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)() ```
void q_groupbox_on_update_micro_focus(void* self, void (*slot)()) {
    QGroupBox_OnUpdateMicroFocus((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self ```
void q_groupbox_create(void* self) {
    QGroupBox_Create((QGroupBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self ```
void q_groupbox_qbase_create(void* self) {
    QGroupBox_QBaseCreate((QGroupBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)() ```
void q_groupbox_on_create(void* self, void (*slot)()) {
    QGroupBox_OnCreate((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self ```
void q_groupbox_destroy(void* self) {
    QGroupBox_Destroy((QGroupBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self ```
void q_groupbox_qbase_destroy(void* self) {
    QGroupBox_QBaseDestroy((QGroupBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)() ```
void q_groupbox_on_destroy(void* self, void (*slot)()) {
    QGroupBox_OnDestroy((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self ```
bool q_groupbox_focus_next_child(void* self) {
    return QGroupBox_FocusNextChild((QGroupBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self ```
bool q_groupbox_qbase_focus_next_child(void* self) {
    return QGroupBox_QBaseFocusNextChild((QGroupBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, bool (*slot)() ```
void q_groupbox_on_focus_next_child(void* self, bool (*slot)()) {
    QGroupBox_OnFocusNextChild((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self ```
bool q_groupbox_focus_previous_child(void* self) {
    return QGroupBox_FocusPreviousChild((QGroupBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self ```
bool q_groupbox_qbase_focus_previous_child(void* self) {
    return QGroupBox_QBaseFocusPreviousChild((QGroupBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, bool (*slot)() ```
void q_groupbox_on_focus_previous_child(void* self, bool (*slot)()) {
    QGroupBox_OnFocusPreviousChild((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self ```
QObject* q_groupbox_sender(void* self) {
    return QGroupBox_Sender((QGroupBox*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self ```
QObject* q_groupbox_qbase_sender(void* self) {
    return QGroupBox_QBaseSender((QGroupBox*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, QObject* (*slot)() ```
void q_groupbox_on_sender(void* self, QObject* (*slot)()) {
    QGroupBox_OnSender((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_sender_signal_index(void* self) {
    return QGroupBox_SenderSignalIndex((QGroupBox*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_qbase_sender_signal_index(void* self) {
    return QGroupBox_QBaseSenderSignalIndex((QGroupBox*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, int32_t (*slot)() ```
void q_groupbox_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QGroupBox_OnSenderSignalIndex((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, const char* signal ```
int32_t q_groupbox_receivers(void* self, const char* signal) {
    return QGroupBox_Receivers((QGroupBox*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, const char* signal ```
int32_t q_groupbox_qbase_receivers(void* self, const char* signal) {
    return QGroupBox_QBaseReceivers((QGroupBox*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, int32_t (*slot)(QGroupBox*, const char*) ```
void q_groupbox_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QGroupBox_OnReceivers((QGroupBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QMetaMethod* signal ```
bool q_groupbox_is_signal_connected(void* self, void* signal) {
    return QGroupBox_IsSignalConnected((QGroupBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QMetaMethod* signal ```
bool q_groupbox_qbase_is_signal_connected(void* self, void* signal) {
    return QGroupBox_QBaseIsSignalConnected((QGroupBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, bool (*slot)(QGroupBox*, QMetaMethod*) ```
void q_groupbox_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QGroupBox_OnIsSignalConnected((QGroupBox*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QGroupBox* self ```
void q_groupbox_delete(void* self) {
    QGroupBox_Delete((QGroupBox*)(self));
}