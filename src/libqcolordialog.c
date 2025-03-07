#include "libqaction.hpp"
#include "libqevent.hpp"
#include "libqanystringview.hpp"
#include "libqbackingstore.hpp"
#include "libqbindingstorage.hpp"
#include "libqbitmap.hpp"
#include "libqcolor.hpp"
#include "libqcursor.hpp"
#include "libqdialog.hpp"
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
#include "libqcolordialog.hpp"
#include "libqcolordialog.h"

/// https://doc.qt.io/qt-6/qcolordialog.html

/// q_colordialog_new constructs a new QColorDialog object.
///
/// ``` QWidget* parent ```
QColorDialog* q_colordialog_new(void* parent) {
    return QColorDialog_new((QWidget*)parent);
}

/// q_colordialog_new2 constructs a new QColorDialog object.
///
///
QColorDialog* q_colordialog_new2() {
    return QColorDialog_new2();
}

/// q_colordialog_new3 constructs a new QColorDialog object.
///
/// ``` QColor* initial ```
QColorDialog* q_colordialog_new3(void* initial) {
    return QColorDialog_new3((QColor*)initial);
}

/// q_colordialog_new4 constructs a new QColorDialog object.
///
/// ``` QColor* initial, QWidget* parent ```
QColorDialog* q_colordialog_new4(void* initial, void* parent) {
    return QColorDialog_new4((QColor*)initial, (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QColorDialog* self ```
QMetaObject* q_colordialog_meta_object(void* self) {
    return QColorDialog_MetaObject((QColorDialog*)self);
}

/// ``` QColorDialog* self, const char* param1 ```
void* q_colordialog_metacast(void* self, const char* param1) {
    return QColorDialog_Metacast((QColorDialog*)self, param1);
}

/// ``` QColorDialog* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_colordialog_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QColorDialog_Metacall((QColorDialog*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QColorDialog* self, int32_t (*slot)(QColorDialog*, enum QMetaObject__Call, int, void*) ```
void q_colordialog_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QColorDialog_OnMetacall((QColorDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QColorDialog* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_colordialog_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QColorDialog_QBaseMetacall((QColorDialog*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_colordialog_tr(const char* s) {
    libqt_string _str = QColorDialog_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolordialog.html#setCurrentColor)
///
/// ``` QColorDialog* self, QColor* color ```
void q_colordialog_set_current_color(void* self, void* color) {
    QColorDialog_SetCurrentColor((QColorDialog*)self, (QColor*)color);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolordialog.html#currentColor)
///
/// ``` QColorDialog* self ```
QColor* q_colordialog_current_color(void* self) {
    return QColorDialog_CurrentColor((QColorDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolordialog.html#selectedColor)
///
/// ``` QColorDialog* self ```
QColor* q_colordialog_selected_color(void* self) {
    return QColorDialog_SelectedColor((QColorDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolordialog.html#setOption)
///
/// ``` QColorDialog* self, enum QColorDialog__ColorDialogOption option ```
void q_colordialog_set_option(void* self, int64_t option) {
    QColorDialog_SetOption((QColorDialog*)self, option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolordialog.html#testOption)
///
/// ``` QColorDialog* self, enum QColorDialog__ColorDialogOption option ```
bool q_colordialog_test_option(void* self, int64_t option) {
    return QColorDialog_TestOption((QColorDialog*)self, option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolordialog.html#setOptions)
///
/// ``` QColorDialog* self, int options ```
void q_colordialog_set_options(void* self, int64_t options) {
    QColorDialog_SetOptions((QColorDialog*)self, options);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolordialog.html#options)
///
/// ``` QColorDialog* self ```
int64_t q_colordialog_options(void* self) {
    return QColorDialog_Options((QColorDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolordialog.html#setVisible)
///
/// ``` QColorDialog* self, bool visible ```
void q_colordialog_set_visible(void* self, bool visible) {
    QColorDialog_SetVisible((QColorDialog*)self, visible);
}

/// Allows for overriding the related default method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, bool) ```
void q_colordialog_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QColorDialog_OnSetVisible((QColorDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QColorDialog* self, bool visible ```
void q_colordialog_qbase_set_visible(void* self, bool visible) {
    QColorDialog_QBaseSetVisible((QColorDialog*)self, visible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolordialog.html#getColor)
///
///
QColor* q_colordialog_get_color() {
    return QColorDialog_GetColor();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolordialog.html#customCount)
///
///
int32_t q_colordialog_custom_count() {
    return QColorDialog_CustomCount();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolordialog.html#customColor)
///
/// ``` int index ```
QColor* q_colordialog_custom_color(int index) {
    return QColorDialog_CustomColor(index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolordialog.html#setCustomColor)
///
/// ``` int index, QColor* color ```
void q_colordialog_set_custom_color(int index, void* color) {
    QColorDialog_SetCustomColor(index, (QColor*)color);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolordialog.html#standardColor)
///
/// ``` int index ```
QColor* q_colordialog_standard_color(int index) {
    return QColorDialog_StandardColor(index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolordialog.html#setStandardColor)
///
/// ``` int index, QColor* color ```
void q_colordialog_set_standard_color(int index, void* color) {
    QColorDialog_SetStandardColor(index, (QColor*)color);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolordialog.html#currentColorChanged)
///
/// ``` QColorDialog* self, QColor* color ```
void q_colordialog_current_color_changed(void* self, void* color) {
    QColorDialog_CurrentColorChanged((QColorDialog*)self, (QColor*)color);
}

/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QColor*) ```
void q_colordialog_on_current_color_changed(void* self, void (*slot)(void*, void*)) {
    QColorDialog_Connect_CurrentColorChanged((QColorDialog*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolordialog.html#colorSelected)
///
/// ``` QColorDialog* self, QColor* color ```
void q_colordialog_color_selected(void* self, void* color) {
    QColorDialog_ColorSelected((QColorDialog*)self, (QColor*)color);
}

/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QColor*) ```
void q_colordialog_on_color_selected(void* self, void (*slot)(void*, void*)) {
    QColorDialog_Connect_ColorSelected((QColorDialog*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolordialog.html#changeEvent)
///
/// ``` QColorDialog* self, QEvent* event ```
void q_colordialog_change_event(void* self, void* event) {
    QColorDialog_ChangeEvent((QColorDialog*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QEvent*) ```
void q_colordialog_on_change_event(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnChangeEvent((QColorDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QColorDialog* self, QEvent* event ```
void q_colordialog_qbase_change_event(void* self, void* event) {
    QColorDialog_QBaseChangeEvent((QColorDialog*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolordialog.html#done)
///
/// ``` QColorDialog* self, int result ```
void q_colordialog_done(void* self, int result) {
    QColorDialog_Done((QColorDialog*)self, result);
}

/// Allows for overriding the related default method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, int) ```
void q_colordialog_on_done(void* self, void (*slot)(void*, int)) {
    QColorDialog_OnDone((QColorDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QColorDialog* self, int result ```
void q_colordialog_qbase_done(void* self, int result) {
    QColorDialog_QBaseDone((QColorDialog*)self, result);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_colordialog_tr2(const char* s, const char* c) {
    libqt_string _str = QColorDialog_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_colordialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QColorDialog_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolordialog.html#setOption)
///
/// ``` QColorDialog* self, enum QColorDialog__ColorDialogOption option, bool on ```
void q_colordialog_set_option2(void* self, int64_t option, bool on) {
    QColorDialog_SetOption2((QColorDialog*)self, option, on);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolordialog.html#getColor)
///
/// ``` QColor* initial ```
QColor* q_colordialog_get_color1(void* initial) {
    return QColorDialog_GetColor1((QColor*)initial);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolordialog.html#getColor)
///
/// ``` QColor* initial, QWidget* parent ```
QColor* q_colordialog_get_color2(void* initial, void* parent) {
    return QColorDialog_GetColor2((QColor*)initial, (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolordialog.html#getColor)
///
/// ``` QColor* initial, QWidget* parent, const char* title ```
QColor* q_colordialog_get_color3(void* initial, void* parent, const char* title) {
    return QColorDialog_GetColor3((QColor*)initial, (QWidget*)parent, qstring(title));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolordialog.html#getColor)
///
/// ``` QColor* initial, QWidget* parent, const char* title, int options ```
QColor* q_colordialog_get_color4(void* initial, void* parent, const char* title, int64_t options) {
    return QColorDialog_GetColor4((QColor*)initial, (QWidget*)parent, qstring(title), options);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// ``` QColorDialog* self ```
int32_t q_colordialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// ``` QColorDialog* self, bool sizeGripEnabled ```
void q_colordialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// ``` QColorDialog* self ```
bool q_colordialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// ``` QColorDialog* self, bool modal ```
void q_colordialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// ``` QColorDialog* self, int r ```
void q_colordialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// ``` QColorDialog* self, int result ```
void q_colordialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

/// Inherited from QDialog
///
/// ``` QColorDialog* self, void (*slot)(QDialog*, int) ```
void q_colordialog_on_finished(void* self, void (*slot)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// ``` QColorDialog* self ```
void q_colordialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

/// Inherited from QDialog
///
/// ``` QColorDialog* self, void (*slot)(QDialog*) ```
void q_colordialog_on_accepted(void* self, void (*slot)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// ``` QColorDialog* self ```
void q_colordialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

/// Inherited from QDialog
///
/// ``` QColorDialog* self, void (*slot)(QDialog*) ```
void q_colordialog_on_rejected(void* self, void (*slot)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QColorDialog* self ```
uintptr_t q_colordialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QColorDialog* self ```
void q_colordialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QColorDialog* self ```
uintptr_t q_colordialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QColorDialog* self ```
uintptr_t q_colordialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QColorDialog* self ```
QStyle* q_colordialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QColorDialog* self, QStyle* style ```
void q_colordialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QColorDialog* self ```
bool q_colordialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QColorDialog* self ```
bool q_colordialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QColorDialog* self ```
bool q_colordialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QColorDialog* self ```
int64_t q_colordialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QColorDialog* self, enum Qt__WindowModality windowModality ```
void q_colordialog_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QColorDialog* self ```
bool q_colordialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QColorDialog* self, QWidget* param1 ```
bool q_colordialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QColorDialog* self, bool enabled ```
void q_colordialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QColorDialog* self, bool disabled ```
void q_colordialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QColorDialog* self, bool windowModified ```
void q_colordialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QColorDialog* self ```
QRect* q_colordialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QColorDialog* self ```
QRect* q_colordialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QColorDialog* self ```
QRect* q_colordialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QColorDialog* self ```
int32_t q_colordialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QColorDialog* self ```
int32_t q_colordialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QColorDialog* self ```
QPoint* q_colordialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QColorDialog* self ```
QSize* q_colordialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QColorDialog* self ```
QSize* q_colordialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QColorDialog* self ```
int32_t q_colordialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QColorDialog* self ```
int32_t q_colordialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QColorDialog* self ```
QRect* q_colordialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QColorDialog* self ```
QRect* q_colordialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QColorDialog* self ```
QRegion* q_colordialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QColorDialog* self ```
QSize* q_colordialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QColorDialog* self ```
QSize* q_colordialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QColorDialog* self ```
int32_t q_colordialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QColorDialog* self ```
int32_t q_colordialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QColorDialog* self ```
int32_t q_colordialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QColorDialog* self ```
int32_t q_colordialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QColorDialog* self, QSize* minimumSize ```
void q_colordialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QColorDialog* self, int minw, int minh ```
void q_colordialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QColorDialog* self, QSize* maximumSize ```
void q_colordialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QColorDialog* self, int maxw, int maxh ```
void q_colordialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QColorDialog* self, int minw ```
void q_colordialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QColorDialog* self, int minh ```
void q_colordialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QColorDialog* self, int maxw ```
void q_colordialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QColorDialog* self, int maxh ```
void q_colordialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QColorDialog* self ```
QSize* q_colordialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QColorDialog* self, QSize* sizeIncrement ```
void q_colordialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QColorDialog* self, int w, int h ```
void q_colordialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QColorDialog* self ```
QSize* q_colordialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QColorDialog* self, QSize* baseSize ```
void q_colordialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QColorDialog* self, int basew, int baseh ```
void q_colordialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QColorDialog* self, QSize* fixedSize ```
void q_colordialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QColorDialog* self, int w, int h ```
void q_colordialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QColorDialog* self, int w ```
void q_colordialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QColorDialog* self, int h ```
void q_colordialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QColorDialog* self, QPointF* param1 ```
QPointF* q_colordialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QColorDialog* self, QPoint* param1 ```
QPoint* q_colordialog_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QColorDialog* self, QPointF* param1 ```
QPointF* q_colordialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QColorDialog* self, QPoint* param1 ```
QPoint* q_colordialog_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QColorDialog* self, QPointF* param1 ```
QPointF* q_colordialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QColorDialog* self, QPoint* param1 ```
QPoint* q_colordialog_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QColorDialog* self, QPointF* param1 ```
QPointF* q_colordialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QColorDialog* self, QPoint* param1 ```
QPoint* q_colordialog_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QColorDialog* self, QWidget* param1, QPointF* param2 ```
QPointF* q_colordialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QColorDialog* self, QWidget* param1, QPoint* param2 ```
QPoint* q_colordialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QColorDialog* self, QWidget* param1, QPointF* param2 ```
QPointF* q_colordialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QColorDialog* self, QWidget* param1, QPoint* param2 ```
QPoint* q_colordialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QColorDialog* self ```
QWidget* q_colordialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QColorDialog* self ```
QWidget* q_colordialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QColorDialog* self ```
QWidget* q_colordialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QColorDialog* self ```
QPalette* q_colordialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QColorDialog* self, QPalette* palette ```
void q_colordialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QColorDialog* self, enum QPalette__ColorRole backgroundRole ```
void q_colordialog_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QColorDialog* self ```
int64_t q_colordialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QColorDialog* self, enum QPalette__ColorRole foregroundRole ```
void q_colordialog_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QColorDialog* self ```
int64_t q_colordialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QColorDialog* self ```
QFont* q_colordialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QColorDialog* self, QFont* font ```
void q_colordialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QColorDialog* self ```
QFontMetrics* q_colordialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QColorDialog* self ```
QFontInfo* q_colordialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QColorDialog* self ```
QCursor* q_colordialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QColorDialog* self, QCursor* cursor ```
void q_colordialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QColorDialog* self ```
void q_colordialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QColorDialog* self, bool enable ```
void q_colordialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QColorDialog* self ```
bool q_colordialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QColorDialog* self ```
bool q_colordialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QColorDialog* self, bool enable ```
void q_colordialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QColorDialog* self ```
bool q_colordialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QColorDialog* self, QBitmap* mask ```
void q_colordialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QColorDialog* self, QRegion* mask ```
void q_colordialog_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QColorDialog* self ```
QRegion* q_colordialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QColorDialog* self ```
void q_colordialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QColorDialog* self, QPaintDevice* target ```
void q_colordialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QColorDialog* self, QPainter* painter ```
void q_colordialog_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QColorDialog* self ```
QPixmap* q_colordialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QColorDialog* self ```
QGraphicsEffect* q_colordialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QColorDialog* self, QGraphicsEffect* effect ```
void q_colordialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QColorDialog* self, enum Qt__GestureType typeVal ```
void q_colordialog_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QColorDialog* self, enum Qt__GestureType typeVal ```
void q_colordialog_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QColorDialog* self, const char* windowTitle ```
void q_colordialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QColorDialog* self, const char* styleSheet ```
void q_colordialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QColorDialog* self ```
const char* q_colordialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QColorDialog* self ```
const char* q_colordialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QColorDialog* self, QIcon* icon ```
void q_colordialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QColorDialog* self ```
QIcon* q_colordialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QColorDialog* self, const char* windowIconText ```
void q_colordialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QColorDialog* self ```
const char* q_colordialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QColorDialog* self, const char* windowRole ```
void q_colordialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QColorDialog* self ```
const char* q_colordialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QColorDialog* self, const char* filePath ```
void q_colordialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QColorDialog* self ```
const char* q_colordialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QColorDialog* self, double level ```
void q_colordialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QColorDialog* self ```
double q_colordialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QColorDialog* self ```
bool q_colordialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QColorDialog* self, const char* toolTip ```
void q_colordialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QColorDialog* self ```
const char* q_colordialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QColorDialog* self, int msec ```
void q_colordialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QColorDialog* self ```
int32_t q_colordialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QColorDialog* self, const char* statusTip ```
void q_colordialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QColorDialog* self ```
const char* q_colordialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QColorDialog* self, const char* whatsThis ```
void q_colordialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QColorDialog* self ```
const char* q_colordialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QColorDialog* self ```
const char* q_colordialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QColorDialog* self, const char* name ```
void q_colordialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QColorDialog* self ```
const char* q_colordialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QColorDialog* self, const char* description ```
void q_colordialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QColorDialog* self, enum Qt__LayoutDirection direction ```
void q_colordialog_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QColorDialog* self ```
int64_t q_colordialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QColorDialog* self ```
void q_colordialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QColorDialog* self, QLocale* locale ```
void q_colordialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QColorDialog* self ```
QLocale* q_colordialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QColorDialog* self ```
void q_colordialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QColorDialog* self ```
bool q_colordialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QColorDialog* self ```
bool q_colordialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QColorDialog* self ```
void q_colordialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QColorDialog* self ```
bool q_colordialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QColorDialog* self ```
void q_colordialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QColorDialog* self ```
void q_colordialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QColorDialog* self, enum Qt__FocusReason reason ```
void q_colordialog_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QColorDialog* self ```
int64_t q_colordialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QColorDialog* self, enum Qt__FocusPolicy policy ```
void q_colordialog_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QColorDialog* self ```
bool q_colordialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_colordialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QColorDialog* self, QWidget* focusProxy ```
void q_colordialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QColorDialog* self ```
QWidget* q_colordialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QColorDialog* self ```
int64_t q_colordialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QColorDialog* self, enum Qt__ContextMenuPolicy policy ```
void q_colordialog_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QColorDialog* self ```
void q_colordialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QColorDialog* self, QCursor* param1 ```
void q_colordialog_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QColorDialog* self ```
void q_colordialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QColorDialog* self ```
void q_colordialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QColorDialog* self ```
void q_colordialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QColorDialog* self, QKeySequence* key ```
int32_t q_colordialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QColorDialog* self, int id ```
void q_colordialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QColorDialog* self, int id ```
void q_colordialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QColorDialog* self, int id ```
void q_colordialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_colordialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_colordialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QColorDialog* self ```
bool q_colordialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QColorDialog* self, bool enable ```
void q_colordialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QColorDialog* self ```
QGraphicsProxyWidget* q_colordialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QColorDialog* self ```
void q_colordialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QColorDialog* self ```
void q_colordialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QColorDialog* self, int x, int y, int w, int h ```
void q_colordialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QColorDialog* self, QRect* param1 ```
void q_colordialog_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QColorDialog* self, QRegion* param1 ```
void q_colordialog_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QColorDialog* self, int x, int y, int w, int h ```
void q_colordialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QColorDialog* self, QRect* param1 ```
void q_colordialog_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QColorDialog* self, QRegion* param1 ```
void q_colordialog_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QColorDialog* self, bool hidden ```
void q_colordialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QColorDialog* self ```
void q_colordialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QColorDialog* self ```
void q_colordialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QColorDialog* self ```
void q_colordialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QColorDialog* self ```
void q_colordialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QColorDialog* self ```
void q_colordialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QColorDialog* self ```
void q_colordialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QColorDialog* self ```
bool q_colordialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QColorDialog* self ```
void q_colordialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QColorDialog* self ```
void q_colordialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QColorDialog* self, QWidget* param1 ```
void q_colordialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QColorDialog* self, int x, int y ```
void q_colordialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QColorDialog* self, QPoint* param1 ```
void q_colordialog_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QColorDialog* self, int w, int h ```
void q_colordialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QColorDialog* self, QSize* param1 ```
void q_colordialog_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QColorDialog* self, int x, int y, int w, int h ```
void q_colordialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QColorDialog* self, QRect* geometry ```
void q_colordialog_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QColorDialog* self ```
char* q_colordialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QColorDialog* self, const char* geometry ```
bool q_colordialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QColorDialog* self ```
void q_colordialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QColorDialog* self ```
bool q_colordialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QColorDialog* self, QWidget* param1 ```
bool q_colordialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QColorDialog* self ```
bool q_colordialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QColorDialog* self ```
bool q_colordialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QColorDialog* self ```
bool q_colordialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QColorDialog* self ```
bool q_colordialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QColorDialog* self ```
int64_t q_colordialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QColorDialog* self, int state ```
void q_colordialog_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QColorDialog* self, int state ```
void q_colordialog_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QColorDialog* self ```
QSizePolicy* q_colordialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QColorDialog* self, QSizePolicy* sizePolicy ```
void q_colordialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QColorDialog* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_colordialog_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QColorDialog* self ```
QRegion* q_colordialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QColorDialog* self, int left, int top, int right, int bottom ```
void q_colordialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QColorDialog* self, QMargins* margins ```
void q_colordialog_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QColorDialog* self ```
QMargins* q_colordialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QColorDialog* self ```
QRect* q_colordialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QColorDialog* self ```
QLayout* q_colordialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QColorDialog* self, QLayout* layout ```
void q_colordialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QColorDialog* self ```
void q_colordialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QColorDialog* self, QWidget* parent ```
void q_colordialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QColorDialog* self, QWidget* parent, int f ```
void q_colordialog_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QColorDialog* self, int dx, int dy ```
void q_colordialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QColorDialog* self, int dx, int dy, QRect* param3 ```
void q_colordialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QColorDialog* self ```
QWidget* q_colordialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QColorDialog* self ```
QWidget* q_colordialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QColorDialog* self ```
QWidget* q_colordialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QColorDialog* self ```
bool q_colordialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QColorDialog* self, bool on ```
void q_colordialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QColorDialog* self, QAction* action ```
void q_colordialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QColorDialog* self, QAction* actions[] ```
void q_colordialog_add_actions(void* self, void* actions[]) {
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
/// ``` QColorDialog* self, QAction* before, QAction* actions[] ```
void q_colordialog_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QColorDialog* self, QAction* before, QAction* action ```
void q_colordialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QColorDialog* self, QAction* action ```
void q_colordialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QColorDialog* self ```
libqt_list /* of QAction* */ q_colordialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QColorDialog* self, const char* text ```
QAction* q_colordialog_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QColorDialog* self, QIcon* icon, const char* text ```
QAction* q_colordialog_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QColorDialog* self, const char* text, QKeySequence* shortcut ```
QAction* q_colordialog_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QColorDialog* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_colordialog_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QColorDialog* self ```
QWidget* q_colordialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QColorDialog* self, int typeVal ```
void q_colordialog_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QColorDialog* self ```
int64_t q_colordialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QColorDialog* self, enum Qt__WindowType param1 ```
void q_colordialog_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QColorDialog* self, int typeVal ```
void q_colordialog_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QColorDialog* self ```
int64_t q_colordialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_colordialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QColorDialog* self, int x, int y ```
QWidget* q_colordialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QColorDialog* self, QPoint* p ```
QWidget* q_colordialog_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QColorDialog* self, enum Qt__WidgetAttribute param1 ```
void q_colordialog_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QColorDialog* self, enum Qt__WidgetAttribute param1 ```
bool q_colordialog_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QColorDialog* self ```
void q_colordialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QColorDialog* self, QWidget* child ```
bool q_colordialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QColorDialog* self ```
bool q_colordialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QColorDialog* self, bool enabled ```
void q_colordialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QColorDialog* self ```
QBackingStore* q_colordialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QColorDialog* self ```
QWindow* q_colordialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QColorDialog* self ```
QScreen* q_colordialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QColorDialog* self, QScreen* screen ```
void q_colordialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_colordialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QColorDialog* self, const char* title ```
void q_colordialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QColorDialog* self, void (*slot)(QWidget*, const char*) ```
void q_colordialog_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QColorDialog* self, QIcon* icon ```
void q_colordialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QColorDialog* self, void (*slot)(QWidget*, QIcon*) ```
void q_colordialog_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QColorDialog* self, const char* iconText ```
void q_colordialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QColorDialog* self, void (*slot)(QWidget*, const char*) ```
void q_colordialog_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QColorDialog* self, QPoint* pos ```
void q_colordialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QColorDialog* self, void (*slot)(QWidget*, QPoint*) ```
void q_colordialog_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QColorDialog* self ```
int64_t q_colordialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QColorDialog* self, int hints ```
void q_colordialog_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QColorDialog* self, QPaintDevice* target, QPoint* targetOffset ```
void q_colordialog_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QColorDialog* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_colordialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QColorDialog* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_colordialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QColorDialog* self, QPainter* painter, QPoint* targetOffset ```
void q_colordialog_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QColorDialog* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_colordialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QColorDialog* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_colordialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QColorDialog* self, QRect* rectangle ```
QPixmap* q_colordialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QColorDialog* self, enum Qt__GestureType typeVal, int flags ```
void q_colordialog_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QColorDialog* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_colordialog_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QColorDialog* self, int id, bool enable ```
void q_colordialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QColorDialog* self, int id, bool enable ```
void q_colordialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QColorDialog* self, enum Qt__WindowType param1, bool on ```
void q_colordialog_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QColorDialog* self, enum Qt__WidgetAttribute param1, bool on ```
void q_colordialog_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_colordialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_colordialog_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QColorDialog* self ```
const char* q_colordialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QColorDialog* self, const char* name ```
void q_colordialog_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QColorDialog* self ```
bool q_colordialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QColorDialog* self ```
bool q_colordialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QColorDialog* self ```
bool q_colordialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QColorDialog* self ```
bool q_colordialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QColorDialog* self, bool b ```
bool q_colordialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QColorDialog* self ```
QThread* q_colordialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QColorDialog* self, QThread* thread ```
void q_colordialog_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QColorDialog* self, int interval ```
int32_t q_colordialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QColorDialog* self, int id ```
void q_colordialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QColorDialog* self ```
libqt_list /* of QObject* */ q_colordialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QColorDialog* self, QObject* filterObj ```
void q_colordialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QColorDialog* self, QObject* obj ```
void q_colordialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_colordialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QColorDialog* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_colordialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_colordialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_colordialog_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QColorDialog* self ```
void q_colordialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QColorDialog* self ```
void q_colordialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QColorDialog* self, const char* name, QVariant* value ```
bool q_colordialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QColorDialog* self, const char* name ```
QVariant* q_colordialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QColorDialog* self ```
const char** q_colordialog_dynamic_property_names(void* self) {
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
/// ``` QColorDialog* self ```
QBindingStorage* q_colordialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QColorDialog* self ```
QBindingStorage* q_colordialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QColorDialog* self ```
void q_colordialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QColorDialog* self, void (*slot)(QObject*) ```
void q_colordialog_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QColorDialog* self ```
QObject* q_colordialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QColorDialog* self, const char* classname ```
bool q_colordialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QColorDialog* self ```
void q_colordialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QColorDialog* self, int interval, enum Qt__TimerType timerType ```
int32_t q_colordialog_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_colordialog_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QColorDialog* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_colordialog_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QColorDialog* self, QObject* param1 ```
void q_colordialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QColorDialog* self, void (*slot)(QObject*, QObject*) ```
void q_colordialog_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QColorDialog* self ```
bool q_colordialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QColorDialog* self ```
int32_t q_colordialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QColorDialog* self ```
int32_t q_colordialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QColorDialog* self ```
int32_t q_colordialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QColorDialog* self ```
int32_t q_colordialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QColorDialog* self ```
int32_t q_colordialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QColorDialog* self ```
int32_t q_colordialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QColorDialog* self ```
double q_colordialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QColorDialog* self ```
double q_colordialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QColorDialog* self ```
int32_t q_colordialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QColorDialog* self ```
int32_t q_colordialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_colordialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self ```
QSize* q_colordialog_size_hint(void* self) {
    return QColorDialog_SizeHint((QColorDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self ```
QSize* q_colordialog_qbase_size_hint(void* self) {
    return QColorDialog_QBaseSizeHint((QColorDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, QSize* (*slot)() ```
void q_colordialog_on_size_hint(void* self, QSize* (*slot)()) {
    QColorDialog_OnSizeHint((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self ```
QSize* q_colordialog_minimum_size_hint(void* self) {
    return QColorDialog_MinimumSizeHint((QColorDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self ```
QSize* q_colordialog_qbase_minimum_size_hint(void* self) {
    return QColorDialog_QBaseMinimumSizeHint((QColorDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, QSize* (*slot)() ```
void q_colordialog_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QColorDialog_OnMinimumSizeHint((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self ```
void q_colordialog_open(void* self) {
    QColorDialog_Open((QColorDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self ```
void q_colordialog_qbase_open(void* self) {
    QColorDialog_QBaseOpen((QColorDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)() ```
void q_colordialog_on_open(void* self, void (*slot)()) {
    QColorDialog_OnOpen((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self ```
int32_t q_colordialog_exec(void* self) {
    return QColorDialog_Exec((QColorDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self ```
int32_t q_colordialog_qbase_exec(void* self) {
    return QColorDialog_QBaseExec((QColorDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, int32_t (*slot)() ```
void q_colordialog_on_exec(void* self, int32_t (*slot)()) {
    QColorDialog_OnExec((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self ```
void q_colordialog_accept(void* self) {
    QColorDialog_Accept((QColorDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self ```
void q_colordialog_qbase_accept(void* self) {
    QColorDialog_QBaseAccept((QColorDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)() ```
void q_colordialog_on_accept(void* self, void (*slot)()) {
    QColorDialog_OnAccept((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self ```
void q_colordialog_reject(void* self) {
    QColorDialog_Reject((QColorDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self ```
void q_colordialog_qbase_reject(void* self) {
    QColorDialog_QBaseReject((QColorDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)() ```
void q_colordialog_on_reject(void* self, void (*slot)()) {
    QColorDialog_OnReject((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QKeyEvent* param1 ```
void q_colordialog_key_press_event(void* self, void* param1) {
    QColorDialog_KeyPressEvent((QColorDialog*)self, (QKeyEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QKeyEvent* param1 ```
void q_colordialog_qbase_key_press_event(void* self, void* param1) {
    QColorDialog_QBaseKeyPressEvent((QColorDialog*)self, (QKeyEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QKeyEvent*) ```
void q_colordialog_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnKeyPressEvent((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QCloseEvent* param1 ```
void q_colordialog_close_event(void* self, void* param1) {
    QColorDialog_CloseEvent((QColorDialog*)self, (QCloseEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QCloseEvent* param1 ```
void q_colordialog_qbase_close_event(void* self, void* param1) {
    QColorDialog_QBaseCloseEvent((QColorDialog*)self, (QCloseEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QCloseEvent*) ```
void q_colordialog_on_close_event(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnCloseEvent((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QShowEvent* param1 ```
void q_colordialog_show_event(void* self, void* param1) {
    QColorDialog_ShowEvent((QColorDialog*)self, (QShowEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QShowEvent* param1 ```
void q_colordialog_qbase_show_event(void* self, void* param1) {
    QColorDialog_QBaseShowEvent((QColorDialog*)self, (QShowEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QShowEvent*) ```
void q_colordialog_on_show_event(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnShowEvent((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QResizeEvent* param1 ```
void q_colordialog_resize_event(void* self, void* param1) {
    QColorDialog_ResizeEvent((QColorDialog*)self, (QResizeEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QResizeEvent* param1 ```
void q_colordialog_qbase_resize_event(void* self, void* param1) {
    QColorDialog_QBaseResizeEvent((QColorDialog*)self, (QResizeEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QResizeEvent*) ```
void q_colordialog_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnResizeEvent((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QContextMenuEvent* param1 ```
void q_colordialog_context_menu_event(void* self, void* param1) {
    QColorDialog_ContextMenuEvent((QColorDialog*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QContextMenuEvent* param1 ```
void q_colordialog_qbase_context_menu_event(void* self, void* param1) {
    QColorDialog_QBaseContextMenuEvent((QColorDialog*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QContextMenuEvent*) ```
void q_colordialog_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnContextMenuEvent((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QObject* param1, QEvent* param2 ```
bool q_colordialog_event_filter(void* self, void* param1, void* param2) {
    return QColorDialog_EventFilter((QColorDialog*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QObject* param1, QEvent* param2 ```
bool q_colordialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return QColorDialog_QBaseEventFilter((QColorDialog*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, bool (*slot)(QColorDialog*, QObject*, QEvent*) ```
void q_colordialog_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QColorDialog_OnEventFilter((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self ```
int32_t q_colordialog_dev_type(void* self) {
    return QColorDialog_DevType((QColorDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self ```
int32_t q_colordialog_qbase_dev_type(void* self) {
    return QColorDialog_QBaseDevType((QColorDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, int32_t (*slot)() ```
void q_colordialog_on_dev_type(void* self, int32_t (*slot)()) {
    QColorDialog_OnDevType((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, int param1 ```
int32_t q_colordialog_height_for_width(void* self, int param1) {
    return QColorDialog_HeightForWidth((QColorDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, int param1 ```
int32_t q_colordialog_qbase_height_for_width(void* self, int param1) {
    return QColorDialog_QBaseHeightForWidth((QColorDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, int32_t (*slot)(QColorDialog*, int) ```
void q_colordialog_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QColorDialog_OnHeightForWidth((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self ```
bool q_colordialog_has_height_for_width(void* self) {
    return QColorDialog_HasHeightForWidth((QColorDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self ```
bool q_colordialog_qbase_has_height_for_width(void* self) {
    return QColorDialog_QBaseHasHeightForWidth((QColorDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, bool (*slot)() ```
void q_colordialog_on_has_height_for_width(void* self, bool (*slot)()) {
    QColorDialog_OnHasHeightForWidth((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self ```
QPaintEngine* q_colordialog_paint_engine(void* self) {
    return QColorDialog_PaintEngine((QColorDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self ```
QPaintEngine* q_colordialog_qbase_paint_engine(void* self) {
    return QColorDialog_QBasePaintEngine((QColorDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, QPaintEngine* (*slot)() ```
void q_colordialog_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QColorDialog_OnPaintEngine((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QEvent* event ```
bool q_colordialog_event(void* self, void* event) {
    return QColorDialog_Event((QColorDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QEvent* event ```
bool q_colordialog_qbase_event(void* self, void* event) {
    return QColorDialog_QBaseEvent((QColorDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, bool (*slot)(QColorDialog*, QEvent*) ```
void q_colordialog_on_event(void* self, bool (*slot)(void*, void*)) {
    QColorDialog_OnEvent((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QMouseEvent* event ```
void q_colordialog_mouse_press_event(void* self, void* event) {
    QColorDialog_MousePressEvent((QColorDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QMouseEvent* event ```
void q_colordialog_qbase_mouse_press_event(void* self, void* event) {
    QColorDialog_QBaseMousePressEvent((QColorDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QMouseEvent*) ```
void q_colordialog_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnMousePressEvent((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QMouseEvent* event ```
void q_colordialog_mouse_release_event(void* self, void* event) {
    QColorDialog_MouseReleaseEvent((QColorDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QMouseEvent* event ```
void q_colordialog_qbase_mouse_release_event(void* self, void* event) {
    QColorDialog_QBaseMouseReleaseEvent((QColorDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QMouseEvent*) ```
void q_colordialog_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnMouseReleaseEvent((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QMouseEvent* event ```
void q_colordialog_mouse_double_click_event(void* self, void* event) {
    QColorDialog_MouseDoubleClickEvent((QColorDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QMouseEvent* event ```
void q_colordialog_qbase_mouse_double_click_event(void* self, void* event) {
    QColorDialog_QBaseMouseDoubleClickEvent((QColorDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QMouseEvent*) ```
void q_colordialog_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnMouseDoubleClickEvent((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QMouseEvent* event ```
void q_colordialog_mouse_move_event(void* self, void* event) {
    QColorDialog_MouseMoveEvent((QColorDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QMouseEvent* event ```
void q_colordialog_qbase_mouse_move_event(void* self, void* event) {
    QColorDialog_QBaseMouseMoveEvent((QColorDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QMouseEvent*) ```
void q_colordialog_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnMouseMoveEvent((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QWheelEvent* event ```
void q_colordialog_wheel_event(void* self, void* event) {
    QColorDialog_WheelEvent((QColorDialog*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QWheelEvent* event ```
void q_colordialog_qbase_wheel_event(void* self, void* event) {
    QColorDialog_QBaseWheelEvent((QColorDialog*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QWheelEvent*) ```
void q_colordialog_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnWheelEvent((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QKeyEvent* event ```
void q_colordialog_key_release_event(void* self, void* event) {
    QColorDialog_KeyReleaseEvent((QColorDialog*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QKeyEvent* event ```
void q_colordialog_qbase_key_release_event(void* self, void* event) {
    QColorDialog_QBaseKeyReleaseEvent((QColorDialog*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QKeyEvent*) ```
void q_colordialog_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnKeyReleaseEvent((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QFocusEvent* event ```
void q_colordialog_focus_in_event(void* self, void* event) {
    QColorDialog_FocusInEvent((QColorDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QFocusEvent* event ```
void q_colordialog_qbase_focus_in_event(void* self, void* event) {
    QColorDialog_QBaseFocusInEvent((QColorDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QFocusEvent*) ```
void q_colordialog_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnFocusInEvent((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QFocusEvent* event ```
void q_colordialog_focus_out_event(void* self, void* event) {
    QColorDialog_FocusOutEvent((QColorDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QFocusEvent* event ```
void q_colordialog_qbase_focus_out_event(void* self, void* event) {
    QColorDialog_QBaseFocusOutEvent((QColorDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QFocusEvent*) ```
void q_colordialog_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnFocusOutEvent((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QEnterEvent* event ```
void q_colordialog_enter_event(void* self, void* event) {
    QColorDialog_EnterEvent((QColorDialog*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QEnterEvent* event ```
void q_colordialog_qbase_enter_event(void* self, void* event) {
    QColorDialog_QBaseEnterEvent((QColorDialog*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QEnterEvent*) ```
void q_colordialog_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnEnterEvent((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QEvent* event ```
void q_colordialog_leave_event(void* self, void* event) {
    QColorDialog_LeaveEvent((QColorDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QEvent* event ```
void q_colordialog_qbase_leave_event(void* self, void* event) {
    QColorDialog_QBaseLeaveEvent((QColorDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QEvent*) ```
void q_colordialog_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnLeaveEvent((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QPaintEvent* event ```
void q_colordialog_paint_event(void* self, void* event) {
    QColorDialog_PaintEvent((QColorDialog*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QPaintEvent* event ```
void q_colordialog_qbase_paint_event(void* self, void* event) {
    QColorDialog_QBasePaintEvent((QColorDialog*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QPaintEvent*) ```
void q_colordialog_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnPaintEvent((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QMoveEvent* event ```
void q_colordialog_move_event(void* self, void* event) {
    QColorDialog_MoveEvent((QColorDialog*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QMoveEvent* event ```
void q_colordialog_qbase_move_event(void* self, void* event) {
    QColorDialog_QBaseMoveEvent((QColorDialog*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QMoveEvent*) ```
void q_colordialog_on_move_event(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnMoveEvent((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QTabletEvent* event ```
void q_colordialog_tablet_event(void* self, void* event) {
    QColorDialog_TabletEvent((QColorDialog*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QTabletEvent* event ```
void q_colordialog_qbase_tablet_event(void* self, void* event) {
    QColorDialog_QBaseTabletEvent((QColorDialog*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QTabletEvent*) ```
void q_colordialog_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnTabletEvent((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QActionEvent* event ```
void q_colordialog_action_event(void* self, void* event) {
    QColorDialog_ActionEvent((QColorDialog*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QActionEvent* event ```
void q_colordialog_qbase_action_event(void* self, void* event) {
    QColorDialog_QBaseActionEvent((QColorDialog*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QActionEvent*) ```
void q_colordialog_on_action_event(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnActionEvent((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QDragEnterEvent* event ```
void q_colordialog_drag_enter_event(void* self, void* event) {
    QColorDialog_DragEnterEvent((QColorDialog*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QDragEnterEvent* event ```
void q_colordialog_qbase_drag_enter_event(void* self, void* event) {
    QColorDialog_QBaseDragEnterEvent((QColorDialog*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QDragEnterEvent*) ```
void q_colordialog_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnDragEnterEvent((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QDragMoveEvent* event ```
void q_colordialog_drag_move_event(void* self, void* event) {
    QColorDialog_DragMoveEvent((QColorDialog*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QDragMoveEvent* event ```
void q_colordialog_qbase_drag_move_event(void* self, void* event) {
    QColorDialog_QBaseDragMoveEvent((QColorDialog*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QDragMoveEvent*) ```
void q_colordialog_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnDragMoveEvent((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QDragLeaveEvent* event ```
void q_colordialog_drag_leave_event(void* self, void* event) {
    QColorDialog_DragLeaveEvent((QColorDialog*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QDragLeaveEvent* event ```
void q_colordialog_qbase_drag_leave_event(void* self, void* event) {
    QColorDialog_QBaseDragLeaveEvent((QColorDialog*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QDragLeaveEvent*) ```
void q_colordialog_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnDragLeaveEvent((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QDropEvent* event ```
void q_colordialog_drop_event(void* self, void* event) {
    QColorDialog_DropEvent((QColorDialog*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QDropEvent* event ```
void q_colordialog_qbase_drop_event(void* self, void* event) {
    QColorDialog_QBaseDropEvent((QColorDialog*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QDropEvent*) ```
void q_colordialog_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnDropEvent((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QHideEvent* event ```
void q_colordialog_hide_event(void* self, void* event) {
    QColorDialog_HideEvent((QColorDialog*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QHideEvent* event ```
void q_colordialog_qbase_hide_event(void* self, void* event) {
    QColorDialog_QBaseHideEvent((QColorDialog*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QHideEvent*) ```
void q_colordialog_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnHideEvent((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, const char* eventType, void* message, intptr_t* result ```
bool q_colordialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QColorDialog_NativeEvent((QColorDialog*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, const char* eventType, void* message, intptr_t* result ```
bool q_colordialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QColorDialog_QBaseNativeEvent((QColorDialog*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, bool (*slot)(QColorDialog*, const char*, void*, intptr_t*) ```
void q_colordialog_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QColorDialog_OnNativeEvent((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_colordialog_metric(void* self, int64_t param1) {
    return QColorDialog_Metric((QColorDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_colordialog_qbase_metric(void* self, int64_t param1) {
    return QColorDialog_QBaseMetric((QColorDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, int32_t (*slot)(QColorDialog*, enum QPaintDevice__PaintDeviceMetric) ```
void q_colordialog_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QColorDialog_OnMetric((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QPainter* painter ```
void q_colordialog_init_painter(void* self, void* painter) {
    QColorDialog_InitPainter((QColorDialog*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QPainter* painter ```
void q_colordialog_qbase_init_painter(void* self, void* painter) {
    QColorDialog_QBaseInitPainter((QColorDialog*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QPainter*) ```
void q_colordialog_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnInitPainter((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QPoint* offset ```
QPaintDevice* q_colordialog_redirected(void* self, void* offset) {
    return QColorDialog_Redirected((QColorDialog*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QPoint* offset ```
QPaintDevice* q_colordialog_qbase_redirected(void* self, void* offset) {
    return QColorDialog_QBaseRedirected((QColorDialog*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, QPaintDevice* (*slot)(QColorDialog*, QPoint*) ```
void q_colordialog_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QColorDialog_OnRedirected((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self ```
QPainter* q_colordialog_shared_painter(void* self) {
    return QColorDialog_SharedPainter((QColorDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self ```
QPainter* q_colordialog_qbase_shared_painter(void* self) {
    return QColorDialog_QBaseSharedPainter((QColorDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, QPainter* (*slot)() ```
void q_colordialog_on_shared_painter(void* self, QPainter* (*slot)()) {
    QColorDialog_OnSharedPainter((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QInputMethodEvent* param1 ```
void q_colordialog_input_method_event(void* self, void* param1) {
    QColorDialog_InputMethodEvent((QColorDialog*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QInputMethodEvent* param1 ```
void q_colordialog_qbase_input_method_event(void* self, void* param1) {
    QColorDialog_QBaseInputMethodEvent((QColorDialog*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QInputMethodEvent*) ```
void q_colordialog_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnInputMethodEvent((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_colordialog_input_method_query(void* self, int64_t param1) {
    return QColorDialog_InputMethodQuery((QColorDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_colordialog_qbase_input_method_query(void* self, int64_t param1) {
    return QColorDialog_QBaseInputMethodQuery((QColorDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, QVariant* (*slot)(QColorDialog*, enum Qt__InputMethodQuery) ```
void q_colordialog_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QColorDialog_OnInputMethodQuery((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, bool next ```
bool q_colordialog_focus_next_prev_child(void* self, bool next) {
    return QColorDialog_FocusNextPrevChild((QColorDialog*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, bool next ```
bool q_colordialog_qbase_focus_next_prev_child(void* self, bool next) {
    return QColorDialog_QBaseFocusNextPrevChild((QColorDialog*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, bool (*slot)(QColorDialog*, bool) ```
void q_colordialog_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QColorDialog_OnFocusNextPrevChild((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QTimerEvent* event ```
void q_colordialog_timer_event(void* self, void* event) {
    QColorDialog_TimerEvent((QColorDialog*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QTimerEvent* event ```
void q_colordialog_qbase_timer_event(void* self, void* event) {
    QColorDialog_QBaseTimerEvent((QColorDialog*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QTimerEvent*) ```
void q_colordialog_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnTimerEvent((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QChildEvent* event ```
void q_colordialog_child_event(void* self, void* event) {
    QColorDialog_ChildEvent((QColorDialog*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QChildEvent* event ```
void q_colordialog_qbase_child_event(void* self, void* event) {
    QColorDialog_QBaseChildEvent((QColorDialog*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QChildEvent*) ```
void q_colordialog_on_child_event(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnChildEvent((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QEvent* event ```
void q_colordialog_custom_event(void* self, void* event) {
    QColorDialog_CustomEvent((QColorDialog*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QEvent* event ```
void q_colordialog_qbase_custom_event(void* self, void* event) {
    QColorDialog_QBaseCustomEvent((QColorDialog*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QEvent*) ```
void q_colordialog_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnCustomEvent((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QMetaMethod* signal ```
void q_colordialog_connect_notify(void* self, void* signal) {
    QColorDialog_ConnectNotify((QColorDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QMetaMethod* signal ```
void q_colordialog_qbase_connect_notify(void* self, void* signal) {
    QColorDialog_QBaseConnectNotify((QColorDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QMetaMethod*) ```
void q_colordialog_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnConnectNotify((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QMetaMethod* signal ```
void q_colordialog_disconnect_notify(void* self, void* signal) {
    QColorDialog_DisconnectNotify((QColorDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QMetaMethod* signal ```
void q_colordialog_qbase_disconnect_notify(void* self, void* signal) {
    QColorDialog_QBaseDisconnectNotify((QColorDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QMetaMethod*) ```
void q_colordialog_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnDisconnectNotify((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QWidget* param1 ```
void q_colordialog_adjust_position(void* self, void* param1) {
    QColorDialog_AdjustPosition((QColorDialog*)self, (QWidget*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QWidget* param1 ```
void q_colordialog_qbase_adjust_position(void* self, void* param1) {
    QColorDialog_QBaseAdjustPosition((QColorDialog*)self, (QWidget*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)(QColorDialog*, QWidget*) ```
void q_colordialog_on_adjust_position(void* self, void (*slot)(void*, void*)) {
    QColorDialog_OnAdjustPosition((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self ```
void q_colordialog_update_micro_focus(void* self) {
    QColorDialog_UpdateMicroFocus((QColorDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self ```
void q_colordialog_qbase_update_micro_focus(void* self) {
    QColorDialog_QBaseUpdateMicroFocus((QColorDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)() ```
void q_colordialog_on_update_micro_focus(void* self, void (*slot)()) {
    QColorDialog_OnUpdateMicroFocus((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self ```
void q_colordialog_create(void* self) {
    QColorDialog_Create((QColorDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self ```
void q_colordialog_qbase_create(void* self) {
    QColorDialog_QBaseCreate((QColorDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)() ```
void q_colordialog_on_create(void* self, void (*slot)()) {
    QColorDialog_OnCreate((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self ```
void q_colordialog_destroy(void* self) {
    QColorDialog_Destroy((QColorDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self ```
void q_colordialog_qbase_destroy(void* self) {
    QColorDialog_QBaseDestroy((QColorDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, void (*slot)() ```
void q_colordialog_on_destroy(void* self, void (*slot)()) {
    QColorDialog_OnDestroy((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self ```
bool q_colordialog_focus_next_child(void* self) {
    return QColorDialog_FocusNextChild((QColorDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self ```
bool q_colordialog_qbase_focus_next_child(void* self) {
    return QColorDialog_QBaseFocusNextChild((QColorDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, bool (*slot)() ```
void q_colordialog_on_focus_next_child(void* self, bool (*slot)()) {
    QColorDialog_OnFocusNextChild((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self ```
bool q_colordialog_focus_previous_child(void* self) {
    return QColorDialog_FocusPreviousChild((QColorDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self ```
bool q_colordialog_qbase_focus_previous_child(void* self) {
    return QColorDialog_QBaseFocusPreviousChild((QColorDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, bool (*slot)() ```
void q_colordialog_on_focus_previous_child(void* self, bool (*slot)()) {
    QColorDialog_OnFocusPreviousChild((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self ```
QObject* q_colordialog_sender(void* self) {
    return QColorDialog_Sender((QColorDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self ```
QObject* q_colordialog_qbase_sender(void* self) {
    return QColorDialog_QBaseSender((QColorDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, QObject* (*slot)() ```
void q_colordialog_on_sender(void* self, QObject* (*slot)()) {
    QColorDialog_OnSender((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self ```
int32_t q_colordialog_sender_signal_index(void* self) {
    return QColorDialog_SenderSignalIndex((QColorDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self ```
int32_t q_colordialog_qbase_sender_signal_index(void* self) {
    return QColorDialog_QBaseSenderSignalIndex((QColorDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, int32_t (*slot)() ```
void q_colordialog_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QColorDialog_OnSenderSignalIndex((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, const char* signal ```
int32_t q_colordialog_receivers(void* self, const char* signal) {
    return QColorDialog_Receivers((QColorDialog*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, const char* signal ```
int32_t q_colordialog_qbase_receivers(void* self, const char* signal) {
    return QColorDialog_QBaseReceivers((QColorDialog*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, int32_t (*slot)(QColorDialog*, const char*) ```
void q_colordialog_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QColorDialog_OnReceivers((QColorDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorDialog* self, QMetaMethod* signal ```
bool q_colordialog_is_signal_connected(void* self, void* signal) {
    return QColorDialog_IsSignalConnected((QColorDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorDialog* self, QMetaMethod* signal ```
bool q_colordialog_qbase_is_signal_connected(void* self, void* signal) {
    return QColorDialog_QBaseIsSignalConnected((QColorDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorDialog* self, bool (*slot)(QColorDialog*, QMetaMethod*) ```
void q_colordialog_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QColorDialog_OnIsSignalConnected((QColorDialog*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QColorDialog* self ```
void q_colordialog_delete(void* self) {
    QColorDialog_Delete((QColorDialog*)(self));
}