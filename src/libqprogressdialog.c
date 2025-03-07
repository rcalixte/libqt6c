#include "libqaction.hpp"
#include "libqevent.hpp"
#include "libqanystringview.hpp"
#include "libqbackingstore.hpp"
#include "libqbindingstorage.hpp"
#include "libqbitmap.hpp"
#include "libqcursor.hpp"
#include "libqdialog.hpp"
#include "libqfont.hpp"
#include "libqfontinfo.hpp"
#include "libqfontmetrics.hpp"
#include "libqgraphicseffect.hpp"
#include "libqgraphicsproxywidget.hpp"
#include "libqicon.hpp"
#include "libqkeysequence.hpp"
#include "libqlabel.hpp"
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
#include "libqprogressbar.hpp"
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
#include "libqprogressdialog.hpp"
#include "libqprogressdialog.h"

/// https://doc.qt.io/qt-6/qprogressdialog.html

/// q_progressdialog_new constructs a new QProgressDialog object.
///
/// ``` QWidget* parent ```
QProgressDialog* q_progressdialog_new(void* parent) {
    return QProgressDialog_new((QWidget*)parent);
}

/// q_progressdialog_new2 constructs a new QProgressDialog object.
///
///
QProgressDialog* q_progressdialog_new2() {
    return QProgressDialog_new2();
}

/// q_progressdialog_new3 constructs a new QProgressDialog object.
///
/// ``` const char* labelText, const char* cancelButtonText, int minimum, int maximum ```
QProgressDialog* q_progressdialog_new3(const char* labelText, const char* cancelButtonText, int minimum, int maximum) {
    return QProgressDialog_new3(qstring(labelText), qstring(cancelButtonText), minimum, maximum);
}

/// q_progressdialog_new4 constructs a new QProgressDialog object.
///
/// ``` QWidget* parent, int flags ```
QProgressDialog* q_progressdialog_new4(void* parent, int64_t flags) {
    return QProgressDialog_new4((QWidget*)parent, flags);
}

/// q_progressdialog_new5 constructs a new QProgressDialog object.
///
/// ``` const char* labelText, const char* cancelButtonText, int minimum, int maximum, QWidget* parent ```
QProgressDialog* q_progressdialog_new5(const char* labelText, const char* cancelButtonText, int minimum, int maximum, void* parent) {
    return QProgressDialog_new5(qstring(labelText), qstring(cancelButtonText), minimum, maximum, (QWidget*)parent);
}

/// q_progressdialog_new6 constructs a new QProgressDialog object.
///
/// ``` const char* labelText, const char* cancelButtonText, int minimum, int maximum, QWidget* parent, int flags ```
QProgressDialog* q_progressdialog_new6(const char* labelText, const char* cancelButtonText, int minimum, int maximum, void* parent, int64_t flags) {
    return QProgressDialog_new6(qstring(labelText), qstring(cancelButtonText), minimum, maximum, (QWidget*)parent, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QProgressDialog* self ```
QMetaObject* q_progressdialog_meta_object(void* self) {
    return QProgressDialog_MetaObject((QProgressDialog*)self);
}

/// ``` QProgressDialog* self, const char* param1 ```
void* q_progressdialog_metacast(void* self, const char* param1) {
    return QProgressDialog_Metacast((QProgressDialog*)self, param1);
}

/// ``` QProgressDialog* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_progressdialog_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QProgressDialog_Metacall((QProgressDialog*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QProgressDialog* self, int32_t (*slot)(QProgressDialog*, enum QMetaObject__Call, int, void*) ```
void q_progressdialog_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QProgressDialog_OnMetacall((QProgressDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProgressDialog* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_progressdialog_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QProgressDialog_QBaseMetacall((QProgressDialog*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_progressdialog_tr(const char* s) {
    libqt_string _str = QProgressDialog_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressdialog.html#setLabel)
///
/// ``` QProgressDialog* self, QLabel* label ```
void q_progressdialog_set_label(void* self, void* label) {
    QProgressDialog_SetLabel((QProgressDialog*)self, (QLabel*)label);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressdialog.html#setCancelButton)
///
/// ``` QProgressDialog* self, QPushButton* button ```
void q_progressdialog_set_cancel_button(void* self, void* button) {
    QProgressDialog_SetCancelButton((QProgressDialog*)self, (QPushButton*)button);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressdialog.html#setBar)
///
/// ``` QProgressDialog* self, QProgressBar* bar ```
void q_progressdialog_set_bar(void* self, void* bar) {
    QProgressDialog_SetBar((QProgressDialog*)self, (QProgressBar*)bar);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressdialog.html#wasCanceled)
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_was_canceled(void* self) {
    return QProgressDialog_WasCanceled((QProgressDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressdialog.html#minimum)
///
/// ``` QProgressDialog* self ```
int32_t q_progressdialog_minimum(void* self) {
    return QProgressDialog_Minimum((QProgressDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressdialog.html#maximum)
///
/// ``` QProgressDialog* self ```
int32_t q_progressdialog_maximum(void* self) {
    return QProgressDialog_Maximum((QProgressDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressdialog.html#value)
///
/// ``` QProgressDialog* self ```
int32_t q_progressdialog_value(void* self) {
    return QProgressDialog_Value((QProgressDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressdialog.html#sizeHint)
///
/// ``` QProgressDialog* self ```
QSize* q_progressdialog_size_hint(void* self) {
    return QProgressDialog_SizeHint((QProgressDialog*)self);
}

/// Allows for overriding the related default method
///
/// ``` QProgressDialog* self, QSize* (*slot)() ```
void q_progressdialog_on_size_hint(void* self, QSize* (*slot)()) {
    QProgressDialog_OnSizeHint((QProgressDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProgressDialog* self ```
QSize* q_progressdialog_qbase_size_hint(void* self) {
    return QProgressDialog_QBaseSizeHint((QProgressDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressdialog.html#labelText)
///
/// ``` QProgressDialog* self ```
const char* q_progressdialog_label_text(void* self) {
    libqt_string _str = QProgressDialog_LabelText((QProgressDialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressdialog.html#minimumDuration)
///
/// ``` QProgressDialog* self ```
int32_t q_progressdialog_minimum_duration(void* self) {
    return QProgressDialog_MinimumDuration((QProgressDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressdialog.html#setAutoReset)
///
/// ``` QProgressDialog* self, bool reset ```
void q_progressdialog_set_auto_reset(void* self, bool reset) {
    QProgressDialog_SetAutoReset((QProgressDialog*)self, reset);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressdialog.html#autoReset)
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_auto_reset(void* self) {
    return QProgressDialog_AutoReset((QProgressDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressdialog.html#setAutoClose)
///
/// ``` QProgressDialog* self, bool close ```
void q_progressdialog_set_auto_close(void* self, bool close) {
    QProgressDialog_SetAutoClose((QProgressDialog*)self, close);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressdialog.html#autoClose)
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_auto_close(void* self) {
    return QProgressDialog_AutoClose((QProgressDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressdialog.html#cancel)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_cancel(void* self) {
    QProgressDialog_Cancel((QProgressDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressdialog.html#reset)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_reset(void* self) {
    QProgressDialog_Reset((QProgressDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressdialog.html#setMaximum)
///
/// ``` QProgressDialog* self, int maximum ```
void q_progressdialog_set_maximum(void* self, int maximum) {
    QProgressDialog_SetMaximum((QProgressDialog*)self, maximum);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressdialog.html#setMinimum)
///
/// ``` QProgressDialog* self, int minimum ```
void q_progressdialog_set_minimum(void* self, int minimum) {
    QProgressDialog_SetMinimum((QProgressDialog*)self, minimum);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressdialog.html#setRange)
///
/// ``` QProgressDialog* self, int minimum, int maximum ```
void q_progressdialog_set_range(void* self, int minimum, int maximum) {
    QProgressDialog_SetRange((QProgressDialog*)self, minimum, maximum);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressdialog.html#setValue)
///
/// ``` QProgressDialog* self, int progress ```
void q_progressdialog_set_value(void* self, int progress) {
    QProgressDialog_SetValue((QProgressDialog*)self, progress);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressdialog.html#setLabelText)
///
/// ``` QProgressDialog* self, const char* text ```
void q_progressdialog_set_label_text(void* self, const char* text) {
    QProgressDialog_SetLabelText((QProgressDialog*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressdialog.html#setCancelButtonText)
///
/// ``` QProgressDialog* self, const char* text ```
void q_progressdialog_set_cancel_button_text(void* self, const char* text) {
    QProgressDialog_SetCancelButtonText((QProgressDialog*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressdialog.html#setMinimumDuration)
///
/// ``` QProgressDialog* self, int ms ```
void q_progressdialog_set_minimum_duration(void* self, int ms) {
    QProgressDialog_SetMinimumDuration((QProgressDialog*)self, ms);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressdialog.html#canceled)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_canceled(void* self) {
    QProgressDialog_Canceled((QProgressDialog*)self);
}

/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*) ```
void q_progressdialog_on_canceled(void* self, void (*slot)(void*)) {
    QProgressDialog_Connect_Canceled((QProgressDialog*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressdialog.html#resizeEvent)
///
/// ``` QProgressDialog* self, QResizeEvent* event ```
void q_progressdialog_resize_event(void* self, void* event) {
    QProgressDialog_ResizeEvent((QProgressDialog*)self, (QResizeEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QResizeEvent*) ```
void q_progressdialog_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnResizeEvent((QProgressDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProgressDialog* self, QResizeEvent* event ```
void q_progressdialog_qbase_resize_event(void* self, void* event) {
    QProgressDialog_QBaseResizeEvent((QProgressDialog*)self, (QResizeEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressdialog.html#closeEvent)
///
/// ``` QProgressDialog* self, QCloseEvent* event ```
void q_progressdialog_close_event(void* self, void* event) {
    QProgressDialog_CloseEvent((QProgressDialog*)self, (QCloseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QCloseEvent*) ```
void q_progressdialog_on_close_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnCloseEvent((QProgressDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProgressDialog* self, QCloseEvent* event ```
void q_progressdialog_qbase_close_event(void* self, void* event) {
    QProgressDialog_QBaseCloseEvent((QProgressDialog*)self, (QCloseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressdialog.html#changeEvent)
///
/// ``` QProgressDialog* self, QEvent* event ```
void q_progressdialog_change_event(void* self, void* event) {
    QProgressDialog_ChangeEvent((QProgressDialog*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QEvent*) ```
void q_progressdialog_on_change_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnChangeEvent((QProgressDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProgressDialog* self, QEvent* event ```
void q_progressdialog_qbase_change_event(void* self, void* event) {
    QProgressDialog_QBaseChangeEvent((QProgressDialog*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressdialog.html#showEvent)
///
/// ``` QProgressDialog* self, QShowEvent* event ```
void q_progressdialog_show_event(void* self, void* event) {
    QProgressDialog_ShowEvent((QProgressDialog*)self, (QShowEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QShowEvent*) ```
void q_progressdialog_on_show_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnShowEvent((QProgressDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProgressDialog* self, QShowEvent* event ```
void q_progressdialog_qbase_show_event(void* self, void* event) {
    QProgressDialog_QBaseShowEvent((QProgressDialog*)self, (QShowEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressdialog.html#forceShow)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_force_show(void* self) {
    QProgressDialog_ForceShow((QProgressDialog*)self);
}

/// Allows for overriding the related default method
///
/// ``` QProgressDialog* self, void (*slot)() ```
void q_progressdialog_on_force_show(void* self, void (*slot)()) {
    QProgressDialog_OnForceShow((QProgressDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProgressDialog* self ```
void q_progressdialog_qbase_force_show(void* self) {
    QProgressDialog_QBaseForceShow((QProgressDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_progressdialog_tr2(const char* s, const char* c) {
    libqt_string _str = QProgressDialog_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_progressdialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QProgressDialog_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// ``` QProgressDialog* self ```
int32_t q_progressdialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// ``` QProgressDialog* self, bool sizeGripEnabled ```
void q_progressdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// ``` QProgressDialog* self, bool modal ```
void q_progressdialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// ``` QProgressDialog* self, int r ```
void q_progressdialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// ``` QProgressDialog* self, int result ```
void q_progressdialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

/// Inherited from QDialog
///
/// ``` QProgressDialog* self, void (*slot)(QDialog*, int) ```
void q_progressdialog_on_finished(void* self, void (*slot)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

/// Inherited from QDialog
///
/// ``` QProgressDialog* self, void (*slot)(QDialog*) ```
void q_progressdialog_on_accepted(void* self, void (*slot)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

/// Inherited from QDialog
///
/// ``` QProgressDialog* self, void (*slot)(QDialog*) ```
void q_progressdialog_on_rejected(void* self, void (*slot)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QProgressDialog* self ```
uintptr_t q_progressdialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QProgressDialog* self ```
uintptr_t q_progressdialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QProgressDialog* self ```
uintptr_t q_progressdialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QProgressDialog* self ```
QStyle* q_progressdialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QProgressDialog* self, QStyle* style ```
void q_progressdialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QProgressDialog* self ```
int64_t q_progressdialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QProgressDialog* self, enum Qt__WindowModality windowModality ```
void q_progressdialog_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QProgressDialog* self, QWidget* param1 ```
bool q_progressdialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QProgressDialog* self, bool enabled ```
void q_progressdialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QProgressDialog* self, bool disabled ```
void q_progressdialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QProgressDialog* self, bool windowModified ```
void q_progressdialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QProgressDialog* self ```
QRect* q_progressdialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QProgressDialog* self ```
QRect* q_progressdialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QProgressDialog* self ```
QRect* q_progressdialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QProgressDialog* self ```
int32_t q_progressdialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QProgressDialog* self ```
int32_t q_progressdialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QProgressDialog* self ```
QPoint* q_progressdialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QProgressDialog* self ```
QSize* q_progressdialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QProgressDialog* self ```
QSize* q_progressdialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QProgressDialog* self ```
int32_t q_progressdialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QProgressDialog* self ```
int32_t q_progressdialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QProgressDialog* self ```
QRect* q_progressdialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QProgressDialog* self ```
QRect* q_progressdialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QProgressDialog* self ```
QRegion* q_progressdialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QProgressDialog* self ```
QSize* q_progressdialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QProgressDialog* self ```
QSize* q_progressdialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QProgressDialog* self ```
int32_t q_progressdialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QProgressDialog* self ```
int32_t q_progressdialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QProgressDialog* self ```
int32_t q_progressdialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QProgressDialog* self ```
int32_t q_progressdialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QProgressDialog* self, QSize* minimumSize ```
void q_progressdialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QProgressDialog* self, int minw, int minh ```
void q_progressdialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QProgressDialog* self, QSize* maximumSize ```
void q_progressdialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QProgressDialog* self, int maxw, int maxh ```
void q_progressdialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QProgressDialog* self, int minw ```
void q_progressdialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QProgressDialog* self, int minh ```
void q_progressdialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QProgressDialog* self, int maxw ```
void q_progressdialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QProgressDialog* self, int maxh ```
void q_progressdialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QProgressDialog* self ```
QSize* q_progressdialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QProgressDialog* self, QSize* sizeIncrement ```
void q_progressdialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QProgressDialog* self, int w, int h ```
void q_progressdialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QProgressDialog* self ```
QSize* q_progressdialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QProgressDialog* self, QSize* baseSize ```
void q_progressdialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QProgressDialog* self, int basew, int baseh ```
void q_progressdialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QProgressDialog* self, QSize* fixedSize ```
void q_progressdialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QProgressDialog* self, int w, int h ```
void q_progressdialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QProgressDialog* self, int w ```
void q_progressdialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QProgressDialog* self, int h ```
void q_progressdialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QProgressDialog* self, QPointF* param1 ```
QPointF* q_progressdialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QProgressDialog* self, QPoint* param1 ```
QPoint* q_progressdialog_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QProgressDialog* self, QPointF* param1 ```
QPointF* q_progressdialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QProgressDialog* self, QPoint* param1 ```
QPoint* q_progressdialog_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QProgressDialog* self, QPointF* param1 ```
QPointF* q_progressdialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QProgressDialog* self, QPoint* param1 ```
QPoint* q_progressdialog_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QProgressDialog* self, QPointF* param1 ```
QPointF* q_progressdialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QProgressDialog* self, QPoint* param1 ```
QPoint* q_progressdialog_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QProgressDialog* self, QWidget* param1, QPointF* param2 ```
QPointF* q_progressdialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QProgressDialog* self, QWidget* param1, QPoint* param2 ```
QPoint* q_progressdialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QProgressDialog* self, QWidget* param1, QPointF* param2 ```
QPointF* q_progressdialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QProgressDialog* self, QWidget* param1, QPoint* param2 ```
QPoint* q_progressdialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QProgressDialog* self ```
QWidget* q_progressdialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QProgressDialog* self ```
QWidget* q_progressdialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QProgressDialog* self ```
QWidget* q_progressdialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QProgressDialog* self ```
QPalette* q_progressdialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QProgressDialog* self, QPalette* palette ```
void q_progressdialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QProgressDialog* self, enum QPalette__ColorRole backgroundRole ```
void q_progressdialog_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QProgressDialog* self ```
int64_t q_progressdialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QProgressDialog* self, enum QPalette__ColorRole foregroundRole ```
void q_progressdialog_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QProgressDialog* self ```
int64_t q_progressdialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QProgressDialog* self ```
QFont* q_progressdialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QProgressDialog* self, QFont* font ```
void q_progressdialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QProgressDialog* self ```
QFontMetrics* q_progressdialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QProgressDialog* self ```
QFontInfo* q_progressdialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QProgressDialog* self ```
QCursor* q_progressdialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QProgressDialog* self, QCursor* cursor ```
void q_progressdialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QProgressDialog* self, bool enable ```
void q_progressdialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QProgressDialog* self, bool enable ```
void q_progressdialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QProgressDialog* self, QBitmap* mask ```
void q_progressdialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QProgressDialog* self, QRegion* mask ```
void q_progressdialog_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QProgressDialog* self ```
QRegion* q_progressdialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QProgressDialog* self, QPaintDevice* target ```
void q_progressdialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QProgressDialog* self, QPainter* painter ```
void q_progressdialog_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QProgressDialog* self ```
QPixmap* q_progressdialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QProgressDialog* self ```
QGraphicsEffect* q_progressdialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QProgressDialog* self, QGraphicsEffect* effect ```
void q_progressdialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QProgressDialog* self, enum Qt__GestureType typeVal ```
void q_progressdialog_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QProgressDialog* self, enum Qt__GestureType typeVal ```
void q_progressdialog_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QProgressDialog* self, const char* windowTitle ```
void q_progressdialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QProgressDialog* self, const char* styleSheet ```
void q_progressdialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QProgressDialog* self ```
const char* q_progressdialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QProgressDialog* self ```
const char* q_progressdialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QProgressDialog* self, QIcon* icon ```
void q_progressdialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QProgressDialog* self ```
QIcon* q_progressdialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QProgressDialog* self, const char* windowIconText ```
void q_progressdialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QProgressDialog* self ```
const char* q_progressdialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QProgressDialog* self, const char* windowRole ```
void q_progressdialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QProgressDialog* self ```
const char* q_progressdialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QProgressDialog* self, const char* filePath ```
void q_progressdialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QProgressDialog* self ```
const char* q_progressdialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QProgressDialog* self, double level ```
void q_progressdialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QProgressDialog* self ```
double q_progressdialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QProgressDialog* self, const char* toolTip ```
void q_progressdialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QProgressDialog* self ```
const char* q_progressdialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QProgressDialog* self, int msec ```
void q_progressdialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QProgressDialog* self ```
int32_t q_progressdialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QProgressDialog* self, const char* statusTip ```
void q_progressdialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QProgressDialog* self ```
const char* q_progressdialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QProgressDialog* self, const char* whatsThis ```
void q_progressdialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QProgressDialog* self ```
const char* q_progressdialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QProgressDialog* self ```
const char* q_progressdialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QProgressDialog* self, const char* name ```
void q_progressdialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QProgressDialog* self ```
const char* q_progressdialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QProgressDialog* self, const char* description ```
void q_progressdialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QProgressDialog* self, enum Qt__LayoutDirection direction ```
void q_progressdialog_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QProgressDialog* self ```
int64_t q_progressdialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QProgressDialog* self, QLocale* locale ```
void q_progressdialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QProgressDialog* self ```
QLocale* q_progressdialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QProgressDialog* self, enum Qt__FocusReason reason ```
void q_progressdialog_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QProgressDialog* self ```
int64_t q_progressdialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QProgressDialog* self, enum Qt__FocusPolicy policy ```
void q_progressdialog_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_progressdialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QProgressDialog* self, QWidget* focusProxy ```
void q_progressdialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QProgressDialog* self ```
QWidget* q_progressdialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QProgressDialog* self ```
int64_t q_progressdialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QProgressDialog* self, enum Qt__ContextMenuPolicy policy ```
void q_progressdialog_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QProgressDialog* self, QCursor* param1 ```
void q_progressdialog_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QProgressDialog* self, QKeySequence* key ```
int32_t q_progressdialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QProgressDialog* self, int id ```
void q_progressdialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QProgressDialog* self, int id ```
void q_progressdialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QProgressDialog* self, int id ```
void q_progressdialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_progressdialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_progressdialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QProgressDialog* self, bool enable ```
void q_progressdialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QProgressDialog* self ```
QGraphicsProxyWidget* q_progressdialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QProgressDialog* self, int x, int y, int w, int h ```
void q_progressdialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QProgressDialog* self, QRect* param1 ```
void q_progressdialog_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QProgressDialog* self, QRegion* param1 ```
void q_progressdialog_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QProgressDialog* self, int x, int y, int w, int h ```
void q_progressdialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QProgressDialog* self, QRect* param1 ```
void q_progressdialog_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QProgressDialog* self, QRegion* param1 ```
void q_progressdialog_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QProgressDialog* self, bool hidden ```
void q_progressdialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QProgressDialog* self, QWidget* param1 ```
void q_progressdialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QProgressDialog* self, int x, int y ```
void q_progressdialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QProgressDialog* self, QPoint* param1 ```
void q_progressdialog_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QProgressDialog* self, int w, int h ```
void q_progressdialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QProgressDialog* self, QSize* param1 ```
void q_progressdialog_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QProgressDialog* self, int x, int y, int w, int h ```
void q_progressdialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QProgressDialog* self, QRect* geometry ```
void q_progressdialog_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QProgressDialog* self ```
char* q_progressdialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QProgressDialog* self, const char* geometry ```
bool q_progressdialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QProgressDialog* self, QWidget* param1 ```
bool q_progressdialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QProgressDialog* self ```
int64_t q_progressdialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QProgressDialog* self, int state ```
void q_progressdialog_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QProgressDialog* self, int state ```
void q_progressdialog_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QProgressDialog* self ```
QSizePolicy* q_progressdialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QProgressDialog* self, QSizePolicy* sizePolicy ```
void q_progressdialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QProgressDialog* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_progressdialog_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QProgressDialog* self ```
QRegion* q_progressdialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QProgressDialog* self, int left, int top, int right, int bottom ```
void q_progressdialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QProgressDialog* self, QMargins* margins ```
void q_progressdialog_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QProgressDialog* self ```
QMargins* q_progressdialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QProgressDialog* self ```
QRect* q_progressdialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QProgressDialog* self ```
QLayout* q_progressdialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QProgressDialog* self, QLayout* layout ```
void q_progressdialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QProgressDialog* self, QWidget* parent ```
void q_progressdialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QProgressDialog* self, QWidget* parent, int f ```
void q_progressdialog_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QProgressDialog* self, int dx, int dy ```
void q_progressdialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QProgressDialog* self, int dx, int dy, QRect* param3 ```
void q_progressdialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QProgressDialog* self ```
QWidget* q_progressdialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QProgressDialog* self ```
QWidget* q_progressdialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QProgressDialog* self ```
QWidget* q_progressdialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QProgressDialog* self, bool on ```
void q_progressdialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QProgressDialog* self, QAction* action ```
void q_progressdialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QProgressDialog* self, QAction* actions[] ```
void q_progressdialog_add_actions(void* self, void* actions[]) {
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
/// ``` QProgressDialog* self, QAction* before, QAction* actions[] ```
void q_progressdialog_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QProgressDialog* self, QAction* before, QAction* action ```
void q_progressdialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QProgressDialog* self, QAction* action ```
void q_progressdialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QProgressDialog* self ```
libqt_list /* of QAction* */ q_progressdialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QProgressDialog* self, const char* text ```
QAction* q_progressdialog_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QProgressDialog* self, QIcon* icon, const char* text ```
QAction* q_progressdialog_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QProgressDialog* self, const char* text, QKeySequence* shortcut ```
QAction* q_progressdialog_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QProgressDialog* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_progressdialog_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QProgressDialog* self ```
QWidget* q_progressdialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QProgressDialog* self, int typeVal ```
void q_progressdialog_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QProgressDialog* self ```
int64_t q_progressdialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QProgressDialog* self, enum Qt__WindowType param1 ```
void q_progressdialog_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QProgressDialog* self, int typeVal ```
void q_progressdialog_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QProgressDialog* self ```
int64_t q_progressdialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_progressdialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QProgressDialog* self, int x, int y ```
QWidget* q_progressdialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QProgressDialog* self, QPoint* p ```
QWidget* q_progressdialog_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QProgressDialog* self, enum Qt__WidgetAttribute param1 ```
void q_progressdialog_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QProgressDialog* self, enum Qt__WidgetAttribute param1 ```
bool q_progressdialog_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QProgressDialog* self, QWidget* child ```
bool q_progressdialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QProgressDialog* self, bool enabled ```
void q_progressdialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QProgressDialog* self ```
QBackingStore* q_progressdialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QProgressDialog* self ```
QWindow* q_progressdialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QProgressDialog* self ```
QScreen* q_progressdialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QProgressDialog* self, QScreen* screen ```
void q_progressdialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_progressdialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QProgressDialog* self, const char* title ```
void q_progressdialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QProgressDialog* self, void (*slot)(QWidget*, const char*) ```
void q_progressdialog_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QProgressDialog* self, QIcon* icon ```
void q_progressdialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QProgressDialog* self, void (*slot)(QWidget*, QIcon*) ```
void q_progressdialog_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QProgressDialog* self, const char* iconText ```
void q_progressdialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QProgressDialog* self, void (*slot)(QWidget*, const char*) ```
void q_progressdialog_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QProgressDialog* self, QPoint* pos ```
void q_progressdialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QProgressDialog* self, void (*slot)(QWidget*, QPoint*) ```
void q_progressdialog_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QProgressDialog* self ```
int64_t q_progressdialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QProgressDialog* self, int hints ```
void q_progressdialog_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QProgressDialog* self, QPaintDevice* target, QPoint* targetOffset ```
void q_progressdialog_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QProgressDialog* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_progressdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QProgressDialog* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_progressdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QProgressDialog* self, QPainter* painter, QPoint* targetOffset ```
void q_progressdialog_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QProgressDialog* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_progressdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QProgressDialog* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_progressdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QProgressDialog* self, QRect* rectangle ```
QPixmap* q_progressdialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QProgressDialog* self, enum Qt__GestureType typeVal, int flags ```
void q_progressdialog_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QProgressDialog* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_progressdialog_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QProgressDialog* self, int id, bool enable ```
void q_progressdialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QProgressDialog* self, int id, bool enable ```
void q_progressdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QProgressDialog* self, enum Qt__WindowType param1, bool on ```
void q_progressdialog_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QProgressDialog* self, enum Qt__WidgetAttribute param1, bool on ```
void q_progressdialog_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_progressdialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_progressdialog_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QProgressDialog* self ```
const char* q_progressdialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QProgressDialog* self, const char* name ```
void q_progressdialog_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QProgressDialog* self, bool b ```
bool q_progressdialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QProgressDialog* self ```
QThread* q_progressdialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QProgressDialog* self, QThread* thread ```
void q_progressdialog_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QProgressDialog* self, int interval ```
int32_t q_progressdialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QProgressDialog* self, int id ```
void q_progressdialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QProgressDialog* self ```
libqt_list /* of QObject* */ q_progressdialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QProgressDialog* self, QObject* filterObj ```
void q_progressdialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QProgressDialog* self, QObject* obj ```
void q_progressdialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_progressdialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QProgressDialog* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_progressdialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_progressdialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_progressdialog_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QProgressDialog* self, const char* name, QVariant* value ```
bool q_progressdialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QProgressDialog* self, const char* name ```
QVariant* q_progressdialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QProgressDialog* self ```
const char** q_progressdialog_dynamic_property_names(void* self) {
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
/// ``` QProgressDialog* self ```
QBindingStorage* q_progressdialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QProgressDialog* self ```
QBindingStorage* q_progressdialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QProgressDialog* self, void (*slot)(QObject*) ```
void q_progressdialog_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QProgressDialog* self ```
QObject* q_progressdialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QProgressDialog* self, const char* classname ```
bool q_progressdialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QProgressDialog* self ```
void q_progressdialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QProgressDialog* self, int interval, enum Qt__TimerType timerType ```
int32_t q_progressdialog_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_progressdialog_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QProgressDialog* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_progressdialog_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QProgressDialog* self, QObject* param1 ```
void q_progressdialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QProgressDialog* self, void (*slot)(QObject*, QObject*) ```
void q_progressdialog_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QProgressDialog* self ```
int32_t q_progressdialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QProgressDialog* self ```
int32_t q_progressdialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QProgressDialog* self ```
int32_t q_progressdialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QProgressDialog* self ```
int32_t q_progressdialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QProgressDialog* self ```
int32_t q_progressdialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QProgressDialog* self ```
int32_t q_progressdialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QProgressDialog* self ```
double q_progressdialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QProgressDialog* self ```
double q_progressdialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QProgressDialog* self ```
int32_t q_progressdialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QProgressDialog* self ```
int32_t q_progressdialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_progressdialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, bool visible ```
void q_progressdialog_set_visible(void* self, bool visible) {
    QProgressDialog_SetVisible((QProgressDialog*)self, visible);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, bool visible ```
void q_progressdialog_qbase_set_visible(void* self, bool visible) {
    QProgressDialog_QBaseSetVisible((QProgressDialog*)self, visible);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, bool) ```
void q_progressdialog_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QProgressDialog_OnSetVisible((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self ```
QSize* q_progressdialog_minimum_size_hint(void* self) {
    return QProgressDialog_MinimumSizeHint((QProgressDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self ```
QSize* q_progressdialog_qbase_minimum_size_hint(void* self) {
    return QProgressDialog_QBaseMinimumSizeHint((QProgressDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, QSize* (*slot)() ```
void q_progressdialog_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QProgressDialog_OnMinimumSizeHint((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self ```
void q_progressdialog_open(void* self) {
    QProgressDialog_Open((QProgressDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self ```
void q_progressdialog_qbase_open(void* self) {
    QProgressDialog_QBaseOpen((QProgressDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)() ```
void q_progressdialog_on_open(void* self, void (*slot)()) {
    QProgressDialog_OnOpen((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self ```
int32_t q_progressdialog_exec(void* self) {
    return QProgressDialog_Exec((QProgressDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self ```
int32_t q_progressdialog_qbase_exec(void* self) {
    return QProgressDialog_QBaseExec((QProgressDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, int32_t (*slot)() ```
void q_progressdialog_on_exec(void* self, int32_t (*slot)()) {
    QProgressDialog_OnExec((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, int param1 ```
void q_progressdialog_done(void* self, int param1) {
    QProgressDialog_Done((QProgressDialog*)self, param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, int param1 ```
void q_progressdialog_qbase_done(void* self, int param1) {
    QProgressDialog_QBaseDone((QProgressDialog*)self, param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, int) ```
void q_progressdialog_on_done(void* self, void (*slot)(void*, int)) {
    QProgressDialog_OnDone((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self ```
void q_progressdialog_accept(void* self) {
    QProgressDialog_Accept((QProgressDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self ```
void q_progressdialog_qbase_accept(void* self) {
    QProgressDialog_QBaseAccept((QProgressDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)() ```
void q_progressdialog_on_accept(void* self, void (*slot)()) {
    QProgressDialog_OnAccept((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self ```
void q_progressdialog_reject(void* self) {
    QProgressDialog_Reject((QProgressDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self ```
void q_progressdialog_qbase_reject(void* self) {
    QProgressDialog_QBaseReject((QProgressDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)() ```
void q_progressdialog_on_reject(void* self, void (*slot)()) {
    QProgressDialog_OnReject((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QKeyEvent* param1 ```
void q_progressdialog_key_press_event(void* self, void* param1) {
    QProgressDialog_KeyPressEvent((QProgressDialog*)self, (QKeyEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QKeyEvent* param1 ```
void q_progressdialog_qbase_key_press_event(void* self, void* param1) {
    QProgressDialog_QBaseKeyPressEvent((QProgressDialog*)self, (QKeyEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QKeyEvent*) ```
void q_progressdialog_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnKeyPressEvent((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QContextMenuEvent* param1 ```
void q_progressdialog_context_menu_event(void* self, void* param1) {
    QProgressDialog_ContextMenuEvent((QProgressDialog*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QContextMenuEvent* param1 ```
void q_progressdialog_qbase_context_menu_event(void* self, void* param1) {
    QProgressDialog_QBaseContextMenuEvent((QProgressDialog*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QContextMenuEvent*) ```
void q_progressdialog_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnContextMenuEvent((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QObject* param1, QEvent* param2 ```
bool q_progressdialog_event_filter(void* self, void* param1, void* param2) {
    return QProgressDialog_EventFilter((QProgressDialog*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QObject* param1, QEvent* param2 ```
bool q_progressdialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return QProgressDialog_QBaseEventFilter((QProgressDialog*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, bool (*slot)(QProgressDialog*, QObject*, QEvent*) ```
void q_progressdialog_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QProgressDialog_OnEventFilter((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self ```
int32_t q_progressdialog_dev_type(void* self) {
    return QProgressDialog_DevType((QProgressDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self ```
int32_t q_progressdialog_qbase_dev_type(void* self) {
    return QProgressDialog_QBaseDevType((QProgressDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, int32_t (*slot)() ```
void q_progressdialog_on_dev_type(void* self, int32_t (*slot)()) {
    QProgressDialog_OnDevType((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, int param1 ```
int32_t q_progressdialog_height_for_width(void* self, int param1) {
    return QProgressDialog_HeightForWidth((QProgressDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, int param1 ```
int32_t q_progressdialog_qbase_height_for_width(void* self, int param1) {
    return QProgressDialog_QBaseHeightForWidth((QProgressDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, int32_t (*slot)(QProgressDialog*, int) ```
void q_progressdialog_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QProgressDialog_OnHeightForWidth((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_has_height_for_width(void* self) {
    return QProgressDialog_HasHeightForWidth((QProgressDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_qbase_has_height_for_width(void* self) {
    return QProgressDialog_QBaseHasHeightForWidth((QProgressDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, bool (*slot)() ```
void q_progressdialog_on_has_height_for_width(void* self, bool (*slot)()) {
    QProgressDialog_OnHasHeightForWidth((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self ```
QPaintEngine* q_progressdialog_paint_engine(void* self) {
    return QProgressDialog_PaintEngine((QProgressDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self ```
QPaintEngine* q_progressdialog_qbase_paint_engine(void* self) {
    return QProgressDialog_QBasePaintEngine((QProgressDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, QPaintEngine* (*slot)() ```
void q_progressdialog_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QProgressDialog_OnPaintEngine((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QEvent* event ```
bool q_progressdialog_event(void* self, void* event) {
    return QProgressDialog_Event((QProgressDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QEvent* event ```
bool q_progressdialog_qbase_event(void* self, void* event) {
    return QProgressDialog_QBaseEvent((QProgressDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, bool (*slot)(QProgressDialog*, QEvent*) ```
void q_progressdialog_on_event(void* self, bool (*slot)(void*, void*)) {
    QProgressDialog_OnEvent((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QMouseEvent* event ```
void q_progressdialog_mouse_press_event(void* self, void* event) {
    QProgressDialog_MousePressEvent((QProgressDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QMouseEvent* event ```
void q_progressdialog_qbase_mouse_press_event(void* self, void* event) {
    QProgressDialog_QBaseMousePressEvent((QProgressDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QMouseEvent*) ```
void q_progressdialog_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnMousePressEvent((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QMouseEvent* event ```
void q_progressdialog_mouse_release_event(void* self, void* event) {
    QProgressDialog_MouseReleaseEvent((QProgressDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QMouseEvent* event ```
void q_progressdialog_qbase_mouse_release_event(void* self, void* event) {
    QProgressDialog_QBaseMouseReleaseEvent((QProgressDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QMouseEvent*) ```
void q_progressdialog_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnMouseReleaseEvent((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QMouseEvent* event ```
void q_progressdialog_mouse_double_click_event(void* self, void* event) {
    QProgressDialog_MouseDoubleClickEvent((QProgressDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QMouseEvent* event ```
void q_progressdialog_qbase_mouse_double_click_event(void* self, void* event) {
    QProgressDialog_QBaseMouseDoubleClickEvent((QProgressDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QMouseEvent*) ```
void q_progressdialog_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnMouseDoubleClickEvent((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QMouseEvent* event ```
void q_progressdialog_mouse_move_event(void* self, void* event) {
    QProgressDialog_MouseMoveEvent((QProgressDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QMouseEvent* event ```
void q_progressdialog_qbase_mouse_move_event(void* self, void* event) {
    QProgressDialog_QBaseMouseMoveEvent((QProgressDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QMouseEvent*) ```
void q_progressdialog_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnMouseMoveEvent((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QWheelEvent* event ```
void q_progressdialog_wheel_event(void* self, void* event) {
    QProgressDialog_WheelEvent((QProgressDialog*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QWheelEvent* event ```
void q_progressdialog_qbase_wheel_event(void* self, void* event) {
    QProgressDialog_QBaseWheelEvent((QProgressDialog*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QWheelEvent*) ```
void q_progressdialog_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnWheelEvent((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QKeyEvent* event ```
void q_progressdialog_key_release_event(void* self, void* event) {
    QProgressDialog_KeyReleaseEvent((QProgressDialog*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QKeyEvent* event ```
void q_progressdialog_qbase_key_release_event(void* self, void* event) {
    QProgressDialog_QBaseKeyReleaseEvent((QProgressDialog*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QKeyEvent*) ```
void q_progressdialog_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnKeyReleaseEvent((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QFocusEvent* event ```
void q_progressdialog_focus_in_event(void* self, void* event) {
    QProgressDialog_FocusInEvent((QProgressDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QFocusEvent* event ```
void q_progressdialog_qbase_focus_in_event(void* self, void* event) {
    QProgressDialog_QBaseFocusInEvent((QProgressDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QFocusEvent*) ```
void q_progressdialog_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnFocusInEvent((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QFocusEvent* event ```
void q_progressdialog_focus_out_event(void* self, void* event) {
    QProgressDialog_FocusOutEvent((QProgressDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QFocusEvent* event ```
void q_progressdialog_qbase_focus_out_event(void* self, void* event) {
    QProgressDialog_QBaseFocusOutEvent((QProgressDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QFocusEvent*) ```
void q_progressdialog_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnFocusOutEvent((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QEnterEvent* event ```
void q_progressdialog_enter_event(void* self, void* event) {
    QProgressDialog_EnterEvent((QProgressDialog*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QEnterEvent* event ```
void q_progressdialog_qbase_enter_event(void* self, void* event) {
    QProgressDialog_QBaseEnterEvent((QProgressDialog*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QEnterEvent*) ```
void q_progressdialog_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnEnterEvent((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QEvent* event ```
void q_progressdialog_leave_event(void* self, void* event) {
    QProgressDialog_LeaveEvent((QProgressDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QEvent* event ```
void q_progressdialog_qbase_leave_event(void* self, void* event) {
    QProgressDialog_QBaseLeaveEvent((QProgressDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QEvent*) ```
void q_progressdialog_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnLeaveEvent((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QPaintEvent* event ```
void q_progressdialog_paint_event(void* self, void* event) {
    QProgressDialog_PaintEvent((QProgressDialog*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QPaintEvent* event ```
void q_progressdialog_qbase_paint_event(void* self, void* event) {
    QProgressDialog_QBasePaintEvent((QProgressDialog*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QPaintEvent*) ```
void q_progressdialog_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnPaintEvent((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QMoveEvent* event ```
void q_progressdialog_move_event(void* self, void* event) {
    QProgressDialog_MoveEvent((QProgressDialog*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QMoveEvent* event ```
void q_progressdialog_qbase_move_event(void* self, void* event) {
    QProgressDialog_QBaseMoveEvent((QProgressDialog*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QMoveEvent*) ```
void q_progressdialog_on_move_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnMoveEvent((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QTabletEvent* event ```
void q_progressdialog_tablet_event(void* self, void* event) {
    QProgressDialog_TabletEvent((QProgressDialog*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QTabletEvent* event ```
void q_progressdialog_qbase_tablet_event(void* self, void* event) {
    QProgressDialog_QBaseTabletEvent((QProgressDialog*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QTabletEvent*) ```
void q_progressdialog_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnTabletEvent((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QActionEvent* event ```
void q_progressdialog_action_event(void* self, void* event) {
    QProgressDialog_ActionEvent((QProgressDialog*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QActionEvent* event ```
void q_progressdialog_qbase_action_event(void* self, void* event) {
    QProgressDialog_QBaseActionEvent((QProgressDialog*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QActionEvent*) ```
void q_progressdialog_on_action_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnActionEvent((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QDragEnterEvent* event ```
void q_progressdialog_drag_enter_event(void* self, void* event) {
    QProgressDialog_DragEnterEvent((QProgressDialog*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QDragEnterEvent* event ```
void q_progressdialog_qbase_drag_enter_event(void* self, void* event) {
    QProgressDialog_QBaseDragEnterEvent((QProgressDialog*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QDragEnterEvent*) ```
void q_progressdialog_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnDragEnterEvent((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QDragMoveEvent* event ```
void q_progressdialog_drag_move_event(void* self, void* event) {
    QProgressDialog_DragMoveEvent((QProgressDialog*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QDragMoveEvent* event ```
void q_progressdialog_qbase_drag_move_event(void* self, void* event) {
    QProgressDialog_QBaseDragMoveEvent((QProgressDialog*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QDragMoveEvent*) ```
void q_progressdialog_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnDragMoveEvent((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QDragLeaveEvent* event ```
void q_progressdialog_drag_leave_event(void* self, void* event) {
    QProgressDialog_DragLeaveEvent((QProgressDialog*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QDragLeaveEvent* event ```
void q_progressdialog_qbase_drag_leave_event(void* self, void* event) {
    QProgressDialog_QBaseDragLeaveEvent((QProgressDialog*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QDragLeaveEvent*) ```
void q_progressdialog_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnDragLeaveEvent((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QDropEvent* event ```
void q_progressdialog_drop_event(void* self, void* event) {
    QProgressDialog_DropEvent((QProgressDialog*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QDropEvent* event ```
void q_progressdialog_qbase_drop_event(void* self, void* event) {
    QProgressDialog_QBaseDropEvent((QProgressDialog*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QDropEvent*) ```
void q_progressdialog_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnDropEvent((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QHideEvent* event ```
void q_progressdialog_hide_event(void* self, void* event) {
    QProgressDialog_HideEvent((QProgressDialog*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QHideEvent* event ```
void q_progressdialog_qbase_hide_event(void* self, void* event) {
    QProgressDialog_QBaseHideEvent((QProgressDialog*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QHideEvent*) ```
void q_progressdialog_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnHideEvent((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, const char* eventType, void* message, intptr_t* result ```
bool q_progressdialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QProgressDialog_NativeEvent((QProgressDialog*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, const char* eventType, void* message, intptr_t* result ```
bool q_progressdialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QProgressDialog_QBaseNativeEvent((QProgressDialog*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, bool (*slot)(QProgressDialog*, const char*, void*, intptr_t*) ```
void q_progressdialog_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QProgressDialog_OnNativeEvent((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_progressdialog_metric(void* self, int64_t param1) {
    return QProgressDialog_Metric((QProgressDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_progressdialog_qbase_metric(void* self, int64_t param1) {
    return QProgressDialog_QBaseMetric((QProgressDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, int32_t (*slot)(QProgressDialog*, enum QPaintDevice__PaintDeviceMetric) ```
void q_progressdialog_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QProgressDialog_OnMetric((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QPainter* painter ```
void q_progressdialog_init_painter(void* self, void* painter) {
    QProgressDialog_InitPainter((QProgressDialog*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QPainter* painter ```
void q_progressdialog_qbase_init_painter(void* self, void* painter) {
    QProgressDialog_QBaseInitPainter((QProgressDialog*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QPainter*) ```
void q_progressdialog_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnInitPainter((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QPoint* offset ```
QPaintDevice* q_progressdialog_redirected(void* self, void* offset) {
    return QProgressDialog_Redirected((QProgressDialog*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QPoint* offset ```
QPaintDevice* q_progressdialog_qbase_redirected(void* self, void* offset) {
    return QProgressDialog_QBaseRedirected((QProgressDialog*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, QPaintDevice* (*slot)(QProgressDialog*, QPoint*) ```
void q_progressdialog_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QProgressDialog_OnRedirected((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self ```
QPainter* q_progressdialog_shared_painter(void* self) {
    return QProgressDialog_SharedPainter((QProgressDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self ```
QPainter* q_progressdialog_qbase_shared_painter(void* self) {
    return QProgressDialog_QBaseSharedPainter((QProgressDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, QPainter* (*slot)() ```
void q_progressdialog_on_shared_painter(void* self, QPainter* (*slot)()) {
    QProgressDialog_OnSharedPainter((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QInputMethodEvent* param1 ```
void q_progressdialog_input_method_event(void* self, void* param1) {
    QProgressDialog_InputMethodEvent((QProgressDialog*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QInputMethodEvent* param1 ```
void q_progressdialog_qbase_input_method_event(void* self, void* param1) {
    QProgressDialog_QBaseInputMethodEvent((QProgressDialog*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QInputMethodEvent*) ```
void q_progressdialog_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnInputMethodEvent((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_progressdialog_input_method_query(void* self, int64_t param1) {
    return QProgressDialog_InputMethodQuery((QProgressDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_progressdialog_qbase_input_method_query(void* self, int64_t param1) {
    return QProgressDialog_QBaseInputMethodQuery((QProgressDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, QVariant* (*slot)(QProgressDialog*, enum Qt__InputMethodQuery) ```
void q_progressdialog_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QProgressDialog_OnInputMethodQuery((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, bool next ```
bool q_progressdialog_focus_next_prev_child(void* self, bool next) {
    return QProgressDialog_FocusNextPrevChild((QProgressDialog*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, bool next ```
bool q_progressdialog_qbase_focus_next_prev_child(void* self, bool next) {
    return QProgressDialog_QBaseFocusNextPrevChild((QProgressDialog*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, bool (*slot)(QProgressDialog*, bool) ```
void q_progressdialog_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QProgressDialog_OnFocusNextPrevChild((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QTimerEvent* event ```
void q_progressdialog_timer_event(void* self, void* event) {
    QProgressDialog_TimerEvent((QProgressDialog*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QTimerEvent* event ```
void q_progressdialog_qbase_timer_event(void* self, void* event) {
    QProgressDialog_QBaseTimerEvent((QProgressDialog*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QTimerEvent*) ```
void q_progressdialog_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnTimerEvent((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QChildEvent* event ```
void q_progressdialog_child_event(void* self, void* event) {
    QProgressDialog_ChildEvent((QProgressDialog*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QChildEvent* event ```
void q_progressdialog_qbase_child_event(void* self, void* event) {
    QProgressDialog_QBaseChildEvent((QProgressDialog*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QChildEvent*) ```
void q_progressdialog_on_child_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnChildEvent((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QEvent* event ```
void q_progressdialog_custom_event(void* self, void* event) {
    QProgressDialog_CustomEvent((QProgressDialog*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QEvent* event ```
void q_progressdialog_qbase_custom_event(void* self, void* event) {
    QProgressDialog_QBaseCustomEvent((QProgressDialog*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QEvent*) ```
void q_progressdialog_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnCustomEvent((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QMetaMethod* signal ```
void q_progressdialog_connect_notify(void* self, void* signal) {
    QProgressDialog_ConnectNotify((QProgressDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QMetaMethod* signal ```
void q_progressdialog_qbase_connect_notify(void* self, void* signal) {
    QProgressDialog_QBaseConnectNotify((QProgressDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QMetaMethod*) ```
void q_progressdialog_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnConnectNotify((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QMetaMethod* signal ```
void q_progressdialog_disconnect_notify(void* self, void* signal) {
    QProgressDialog_DisconnectNotify((QProgressDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QMetaMethod* signal ```
void q_progressdialog_qbase_disconnect_notify(void* self, void* signal) {
    QProgressDialog_QBaseDisconnectNotify((QProgressDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QMetaMethod*) ```
void q_progressdialog_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnDisconnectNotify((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QWidget* param1 ```
void q_progressdialog_adjust_position(void* self, void* param1) {
    QProgressDialog_AdjustPosition((QProgressDialog*)self, (QWidget*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QWidget* param1 ```
void q_progressdialog_qbase_adjust_position(void* self, void* param1) {
    QProgressDialog_QBaseAdjustPosition((QProgressDialog*)self, (QWidget*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)(QProgressDialog*, QWidget*) ```
void q_progressdialog_on_adjust_position(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnAdjustPosition((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self ```
void q_progressdialog_update_micro_focus(void* self) {
    QProgressDialog_UpdateMicroFocus((QProgressDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self ```
void q_progressdialog_qbase_update_micro_focus(void* self) {
    QProgressDialog_QBaseUpdateMicroFocus((QProgressDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)() ```
void q_progressdialog_on_update_micro_focus(void* self, void (*slot)()) {
    QProgressDialog_OnUpdateMicroFocus((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self ```
void q_progressdialog_create(void* self) {
    QProgressDialog_Create((QProgressDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self ```
void q_progressdialog_qbase_create(void* self) {
    QProgressDialog_QBaseCreate((QProgressDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)() ```
void q_progressdialog_on_create(void* self, void (*slot)()) {
    QProgressDialog_OnCreate((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self ```
void q_progressdialog_destroy(void* self) {
    QProgressDialog_Destroy((QProgressDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self ```
void q_progressdialog_qbase_destroy(void* self) {
    QProgressDialog_QBaseDestroy((QProgressDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, void (*slot)() ```
void q_progressdialog_on_destroy(void* self, void (*slot)()) {
    QProgressDialog_OnDestroy((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_focus_next_child(void* self) {
    return QProgressDialog_FocusNextChild((QProgressDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_qbase_focus_next_child(void* self) {
    return QProgressDialog_QBaseFocusNextChild((QProgressDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, bool (*slot)() ```
void q_progressdialog_on_focus_next_child(void* self, bool (*slot)()) {
    QProgressDialog_OnFocusNextChild((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_focus_previous_child(void* self) {
    return QProgressDialog_FocusPreviousChild((QProgressDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self ```
bool q_progressdialog_qbase_focus_previous_child(void* self) {
    return QProgressDialog_QBaseFocusPreviousChild((QProgressDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, bool (*slot)() ```
void q_progressdialog_on_focus_previous_child(void* self, bool (*slot)()) {
    QProgressDialog_OnFocusPreviousChild((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self ```
QObject* q_progressdialog_sender(void* self) {
    return QProgressDialog_Sender((QProgressDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self ```
QObject* q_progressdialog_qbase_sender(void* self) {
    return QProgressDialog_QBaseSender((QProgressDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, QObject* (*slot)() ```
void q_progressdialog_on_sender(void* self, QObject* (*slot)()) {
    QProgressDialog_OnSender((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self ```
int32_t q_progressdialog_sender_signal_index(void* self) {
    return QProgressDialog_SenderSignalIndex((QProgressDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self ```
int32_t q_progressdialog_qbase_sender_signal_index(void* self) {
    return QProgressDialog_QBaseSenderSignalIndex((QProgressDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, int32_t (*slot)() ```
void q_progressdialog_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QProgressDialog_OnSenderSignalIndex((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, const char* signal ```
int32_t q_progressdialog_receivers(void* self, const char* signal) {
    return QProgressDialog_Receivers((QProgressDialog*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, const char* signal ```
int32_t q_progressdialog_qbase_receivers(void* self, const char* signal) {
    return QProgressDialog_QBaseReceivers((QProgressDialog*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, int32_t (*slot)(QProgressDialog*, const char*) ```
void q_progressdialog_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QProgressDialog_OnReceivers((QProgressDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressDialog* self, QMetaMethod* signal ```
bool q_progressdialog_is_signal_connected(void* self, void* signal) {
    return QProgressDialog_IsSignalConnected((QProgressDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressDialog* self, QMetaMethod* signal ```
bool q_progressdialog_qbase_is_signal_connected(void* self, void* signal) {
    return QProgressDialog_QBaseIsSignalConnected((QProgressDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressDialog* self, bool (*slot)(QProgressDialog*, QMetaMethod*) ```
void q_progressdialog_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QProgressDialog_OnIsSignalConnected((QProgressDialog*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QProgressDialog* self ```
void q_progressdialog_delete(void* self) {
    QProgressDialog_Delete((QProgressDialog*)(self));
}