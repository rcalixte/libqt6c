#include "../libqaction.hpp"
#include "../libqevent.hpp"
#include "../libqanystringview.hpp"
#include "../libqbackingstore.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqbitmap.hpp"
#include "../libqcursor.hpp"
#include "../libqdialog.hpp"
#include "../libqfont.hpp"
#include "../libqfontinfo.hpp"
#include "../libqfontmetrics.hpp"
#include "../libqgraphicseffect.hpp"
#include "../libqgraphicsproxywidget.hpp"
#include "../libqicon.hpp"
#include "../libqkeysequence.hpp"
#include "../libqlayout.hpp"
#include "../libqlocale.hpp"
#include "../libqmargins.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpalette.hpp"
#include "../libqpixmap.hpp"
#include "../libqpoint.hpp"
#include "libqprinter.hpp"
#include "../libqrect.hpp"
#include "../libqregion.hpp"
#include "../libqscreen.hpp"
#include "../libqsize.hpp"
#include "../libqsizepolicy.hpp"
#include <string.h>
#include "../libqstyle.hpp"
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "../libqwindow.hpp"
#include "../libqcoreevent.hpp"
#include "libqpagesetupdialog.hpp"
#include "libqpagesetupdialog.h"

/// https://doc.qt.io/qt-6/qpagesetupdialog.html

/// q_pagesetupdialog_new constructs a new QPageSetupDialog object.
///
/// ``` QWidget* parent ```
QPageSetupDialog* q_pagesetupdialog_new(void* parent) {
    return QPageSetupDialog_new((QWidget*)parent);
}

/// q_pagesetupdialog_new2 constructs a new QPageSetupDialog object.
///
/// ``` QPrinter* printer ```
QPageSetupDialog* q_pagesetupdialog_new2(void* printer) {
    return QPageSetupDialog_new2((QPrinter*)printer);
}

/// q_pagesetupdialog_new3 constructs a new QPageSetupDialog object.
///
///
QPageSetupDialog* q_pagesetupdialog_new3() {
    return QPageSetupDialog_new3();
}

/// q_pagesetupdialog_new4 constructs a new QPageSetupDialog object.
///
/// ``` QPrinter* printer, QWidget* parent ```
QPageSetupDialog* q_pagesetupdialog_new4(void* printer, void* parent) {
    return QPageSetupDialog_new4((QPrinter*)printer, (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPageSetupDialog* self ```
QMetaObject* q_pagesetupdialog_meta_object(void* self) {
    return QPageSetupDialog_MetaObject((QPageSetupDialog*)self);
}

/// ``` QPageSetupDialog* self, const char* param1 ```
void* q_pagesetupdialog_metacast(void* self, const char* param1) {
    return QPageSetupDialog_Metacast((QPageSetupDialog*)self, param1);
}

/// ``` QPageSetupDialog* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pagesetupdialog_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPageSetupDialog_Metacall((QPageSetupDialog*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QPageSetupDialog* self, int32_t (*slot)(QPageSetupDialog*, enum QMetaObject__Call, int, void*) ```
void q_pagesetupdialog_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QPageSetupDialog_OnMetacall((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPageSetupDialog* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pagesetupdialog_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPageSetupDialog_QBaseMetacall((QPageSetupDialog*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_pagesetupdialog_tr(const char* s) {
    libqt_string _str = QPageSetupDialog_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesetupdialog.html#exec)
///
/// ``` QPageSetupDialog* self ```
int32_t q_pagesetupdialog_exec(void* self) {
    return QPageSetupDialog_Exec((QPageSetupDialog*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPageSetupDialog* self, int32_t (*slot)() ```
void q_pagesetupdialog_on_exec(void* self, int32_t (*slot)()) {
    QPageSetupDialog_OnExec((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPageSetupDialog* self ```
int32_t q_pagesetupdialog_qbase_exec(void* self) {
    return QPageSetupDialog_QBaseExec((QPageSetupDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesetupdialog.html#done)
///
/// ``` QPageSetupDialog* self, int result ```
void q_pagesetupdialog_done(void* self, int result) {
    QPageSetupDialog_Done((QPageSetupDialog*)self, result);
}

/// Allows for overriding the related default method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, int) ```
void q_pagesetupdialog_on_done(void* self, void (*slot)(void*, int)) {
    QPageSetupDialog_OnDone((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPageSetupDialog* self, int result ```
void q_pagesetupdialog_qbase_done(void* self, int result) {
    QPageSetupDialog_QBaseDone((QPageSetupDialog*)self, result);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesetupdialog.html#printer)
///
/// ``` QPageSetupDialog* self ```
QPrinter* q_pagesetupdialog_printer(void* self) {
    return QPageSetupDialog_Printer((QPageSetupDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_pagesetupdialog_tr2(const char* s, const char* c) {
    libqt_string _str = QPageSetupDialog_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_pagesetupdialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QPageSetupDialog_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// ``` QPageSetupDialog* self ```
int32_t q_pagesetupdialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// ``` QPageSetupDialog* self, bool sizeGripEnabled ```
void q_pagesetupdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// ``` QPageSetupDialog* self, bool modal ```
void q_pagesetupdialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// ``` QPageSetupDialog* self, int r ```
void q_pagesetupdialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// ``` QPageSetupDialog* self, int result ```
void q_pagesetupdialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

/// Inherited from QDialog
///
/// ``` QPageSetupDialog* self, void (*slot)(QDialog*, int) ```
void q_pagesetupdialog_on_finished(void* self, void (*slot)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

/// Inherited from QDialog
///
/// ``` QPageSetupDialog* self, void (*slot)(QDialog*) ```
void q_pagesetupdialog_on_accepted(void* self, void (*slot)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

/// Inherited from QDialog
///
/// ``` QPageSetupDialog* self, void (*slot)(QDialog*) ```
void q_pagesetupdialog_on_rejected(void* self, void (*slot)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QPageSetupDialog* self ```
uintptr_t q_pagesetupdialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QPageSetupDialog* self ```
uintptr_t q_pagesetupdialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QPageSetupDialog* self ```
uintptr_t q_pagesetupdialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QPageSetupDialog* self ```
QStyle* q_pagesetupdialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QPageSetupDialog* self, QStyle* style ```
void q_pagesetupdialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QPageSetupDialog* self ```
int64_t q_pagesetupdialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QPageSetupDialog* self, enum Qt__WindowModality windowModality ```
void q_pagesetupdialog_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QPageSetupDialog* self, QWidget* param1 ```
bool q_pagesetupdialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QPageSetupDialog* self, bool enabled ```
void q_pagesetupdialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QPageSetupDialog* self, bool disabled ```
void q_pagesetupdialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QPageSetupDialog* self, bool windowModified ```
void q_pagesetupdialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QPageSetupDialog* self ```
QRect* q_pagesetupdialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QPageSetupDialog* self ```
QRect* q_pagesetupdialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QPageSetupDialog* self ```
QRect* q_pagesetupdialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QPageSetupDialog* self ```
int32_t q_pagesetupdialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QPageSetupDialog* self ```
int32_t q_pagesetupdialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QPageSetupDialog* self ```
QPoint* q_pagesetupdialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QPageSetupDialog* self ```
QSize* q_pagesetupdialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QPageSetupDialog* self ```
QSize* q_pagesetupdialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QPageSetupDialog* self ```
int32_t q_pagesetupdialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QPageSetupDialog* self ```
int32_t q_pagesetupdialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QPageSetupDialog* self ```
QRect* q_pagesetupdialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QPageSetupDialog* self ```
QRect* q_pagesetupdialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QPageSetupDialog* self ```
QRegion* q_pagesetupdialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QPageSetupDialog* self ```
QSize* q_pagesetupdialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QPageSetupDialog* self ```
QSize* q_pagesetupdialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QPageSetupDialog* self ```
int32_t q_pagesetupdialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QPageSetupDialog* self ```
int32_t q_pagesetupdialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QPageSetupDialog* self ```
int32_t q_pagesetupdialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QPageSetupDialog* self ```
int32_t q_pagesetupdialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QPageSetupDialog* self, QSize* minimumSize ```
void q_pagesetupdialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QPageSetupDialog* self, int minw, int minh ```
void q_pagesetupdialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QPageSetupDialog* self, QSize* maximumSize ```
void q_pagesetupdialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QPageSetupDialog* self, int maxw, int maxh ```
void q_pagesetupdialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QPageSetupDialog* self, int minw ```
void q_pagesetupdialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QPageSetupDialog* self, int minh ```
void q_pagesetupdialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QPageSetupDialog* self, int maxw ```
void q_pagesetupdialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QPageSetupDialog* self, int maxh ```
void q_pagesetupdialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QPageSetupDialog* self ```
QSize* q_pagesetupdialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QPageSetupDialog* self, QSize* sizeIncrement ```
void q_pagesetupdialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QPageSetupDialog* self, int w, int h ```
void q_pagesetupdialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QPageSetupDialog* self ```
QSize* q_pagesetupdialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QPageSetupDialog* self, QSize* baseSize ```
void q_pagesetupdialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QPageSetupDialog* self, int basew, int baseh ```
void q_pagesetupdialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QPageSetupDialog* self, QSize* fixedSize ```
void q_pagesetupdialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QPageSetupDialog* self, int w, int h ```
void q_pagesetupdialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QPageSetupDialog* self, int w ```
void q_pagesetupdialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QPageSetupDialog* self, int h ```
void q_pagesetupdialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QPageSetupDialog* self, QPointF* param1 ```
QPointF* q_pagesetupdialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QPageSetupDialog* self, QPoint* param1 ```
QPoint* q_pagesetupdialog_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QPageSetupDialog* self, QPointF* param1 ```
QPointF* q_pagesetupdialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QPageSetupDialog* self, QPoint* param1 ```
QPoint* q_pagesetupdialog_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QPageSetupDialog* self, QPointF* param1 ```
QPointF* q_pagesetupdialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QPageSetupDialog* self, QPoint* param1 ```
QPoint* q_pagesetupdialog_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QPageSetupDialog* self, QPointF* param1 ```
QPointF* q_pagesetupdialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QPageSetupDialog* self, QPoint* param1 ```
QPoint* q_pagesetupdialog_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QPageSetupDialog* self, QWidget* param1, QPointF* param2 ```
QPointF* q_pagesetupdialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QPageSetupDialog* self, QWidget* param1, QPoint* param2 ```
QPoint* q_pagesetupdialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QPageSetupDialog* self, QWidget* param1, QPointF* param2 ```
QPointF* q_pagesetupdialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QPageSetupDialog* self, QWidget* param1, QPoint* param2 ```
QPoint* q_pagesetupdialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QPageSetupDialog* self ```
QWidget* q_pagesetupdialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QPageSetupDialog* self ```
QWidget* q_pagesetupdialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QPageSetupDialog* self ```
QWidget* q_pagesetupdialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QPageSetupDialog* self ```
QPalette* q_pagesetupdialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QPageSetupDialog* self, QPalette* palette ```
void q_pagesetupdialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QPageSetupDialog* self, enum QPalette__ColorRole backgroundRole ```
void q_pagesetupdialog_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QPageSetupDialog* self ```
int64_t q_pagesetupdialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QPageSetupDialog* self, enum QPalette__ColorRole foregroundRole ```
void q_pagesetupdialog_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QPageSetupDialog* self ```
int64_t q_pagesetupdialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QPageSetupDialog* self ```
QFont* q_pagesetupdialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QPageSetupDialog* self, QFont* font ```
void q_pagesetupdialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QPageSetupDialog* self ```
QFontMetrics* q_pagesetupdialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QPageSetupDialog* self ```
QFontInfo* q_pagesetupdialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QPageSetupDialog* self ```
QCursor* q_pagesetupdialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QPageSetupDialog* self, QCursor* cursor ```
void q_pagesetupdialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QPageSetupDialog* self, bool enable ```
void q_pagesetupdialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QPageSetupDialog* self, bool enable ```
void q_pagesetupdialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QPageSetupDialog* self, QBitmap* mask ```
void q_pagesetupdialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QPageSetupDialog* self, QRegion* mask ```
void q_pagesetupdialog_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QPageSetupDialog* self ```
QRegion* q_pagesetupdialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPageSetupDialog* self, QPaintDevice* target ```
void q_pagesetupdialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPageSetupDialog* self, QPainter* painter ```
void q_pagesetupdialog_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QPageSetupDialog* self ```
QPixmap* q_pagesetupdialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QPageSetupDialog* self ```
QGraphicsEffect* q_pagesetupdialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QPageSetupDialog* self, QGraphicsEffect* effect ```
void q_pagesetupdialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QPageSetupDialog* self, enum Qt__GestureType typeVal ```
void q_pagesetupdialog_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QPageSetupDialog* self, enum Qt__GestureType typeVal ```
void q_pagesetupdialog_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QPageSetupDialog* self, const char* windowTitle ```
void q_pagesetupdialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QPageSetupDialog* self, const char* styleSheet ```
void q_pagesetupdialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QPageSetupDialog* self ```
const char* q_pagesetupdialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QPageSetupDialog* self ```
const char* q_pagesetupdialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QPageSetupDialog* self, QIcon* icon ```
void q_pagesetupdialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QPageSetupDialog* self ```
QIcon* q_pagesetupdialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QPageSetupDialog* self, const char* windowIconText ```
void q_pagesetupdialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QPageSetupDialog* self ```
const char* q_pagesetupdialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QPageSetupDialog* self, const char* windowRole ```
void q_pagesetupdialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QPageSetupDialog* self ```
const char* q_pagesetupdialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QPageSetupDialog* self, const char* filePath ```
void q_pagesetupdialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QPageSetupDialog* self ```
const char* q_pagesetupdialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QPageSetupDialog* self, double level ```
void q_pagesetupdialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QPageSetupDialog* self ```
double q_pagesetupdialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QPageSetupDialog* self, const char* toolTip ```
void q_pagesetupdialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QPageSetupDialog* self ```
const char* q_pagesetupdialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QPageSetupDialog* self, int msec ```
void q_pagesetupdialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QPageSetupDialog* self ```
int32_t q_pagesetupdialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QPageSetupDialog* self, const char* statusTip ```
void q_pagesetupdialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QPageSetupDialog* self ```
const char* q_pagesetupdialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QPageSetupDialog* self, const char* whatsThis ```
void q_pagesetupdialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QPageSetupDialog* self ```
const char* q_pagesetupdialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QPageSetupDialog* self ```
const char* q_pagesetupdialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QPageSetupDialog* self, const char* name ```
void q_pagesetupdialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QPageSetupDialog* self ```
const char* q_pagesetupdialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QPageSetupDialog* self, const char* description ```
void q_pagesetupdialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QPageSetupDialog* self, enum Qt__LayoutDirection direction ```
void q_pagesetupdialog_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QPageSetupDialog* self ```
int64_t q_pagesetupdialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QPageSetupDialog* self, QLocale* locale ```
void q_pagesetupdialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QPageSetupDialog* self ```
QLocale* q_pagesetupdialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QPageSetupDialog* self, enum Qt__FocusReason reason ```
void q_pagesetupdialog_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QPageSetupDialog* self ```
int64_t q_pagesetupdialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QPageSetupDialog* self, enum Qt__FocusPolicy policy ```
void q_pagesetupdialog_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_pagesetupdialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QPageSetupDialog* self, QWidget* focusProxy ```
void q_pagesetupdialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QPageSetupDialog* self ```
QWidget* q_pagesetupdialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QPageSetupDialog* self ```
int64_t q_pagesetupdialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QPageSetupDialog* self, enum Qt__ContextMenuPolicy policy ```
void q_pagesetupdialog_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QPageSetupDialog* self, QCursor* param1 ```
void q_pagesetupdialog_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QPageSetupDialog* self, QKeySequence* key ```
int32_t q_pagesetupdialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QPageSetupDialog* self, int id ```
void q_pagesetupdialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QPageSetupDialog* self, int id ```
void q_pagesetupdialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QPageSetupDialog* self, int id ```
void q_pagesetupdialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_pagesetupdialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_pagesetupdialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QPageSetupDialog* self, bool enable ```
void q_pagesetupdialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QPageSetupDialog* self ```
QGraphicsProxyWidget* q_pagesetupdialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPageSetupDialog* self, int x, int y, int w, int h ```
void q_pagesetupdialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPageSetupDialog* self, QRect* param1 ```
void q_pagesetupdialog_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPageSetupDialog* self, QRegion* param1 ```
void q_pagesetupdialog_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPageSetupDialog* self, int x, int y, int w, int h ```
void q_pagesetupdialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPageSetupDialog* self, QRect* param1 ```
void q_pagesetupdialog_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPageSetupDialog* self, QRegion* param1 ```
void q_pagesetupdialog_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QPageSetupDialog* self, bool hidden ```
void q_pagesetupdialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QPageSetupDialog* self, QWidget* param1 ```
void q_pagesetupdialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QPageSetupDialog* self, int x, int y ```
void q_pagesetupdialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QPageSetupDialog* self, QPoint* param1 ```
void q_pagesetupdialog_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QPageSetupDialog* self, int w, int h ```
void q_pagesetupdialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QPageSetupDialog* self, QSize* param1 ```
void q_pagesetupdialog_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QPageSetupDialog* self, int x, int y, int w, int h ```
void q_pagesetupdialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QPageSetupDialog* self, QRect* geometry ```
void q_pagesetupdialog_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QPageSetupDialog* self ```
char* q_pagesetupdialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QPageSetupDialog* self, const char* geometry ```
bool q_pagesetupdialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QPageSetupDialog* self, QWidget* param1 ```
bool q_pagesetupdialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QPageSetupDialog* self ```
int64_t q_pagesetupdialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QPageSetupDialog* self, int state ```
void q_pagesetupdialog_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QPageSetupDialog* self, int state ```
void q_pagesetupdialog_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QPageSetupDialog* self ```
QSizePolicy* q_pagesetupdialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QPageSetupDialog* self, QSizePolicy* sizePolicy ```
void q_pagesetupdialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QPageSetupDialog* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_pagesetupdialog_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QPageSetupDialog* self ```
QRegion* q_pagesetupdialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QPageSetupDialog* self, int left, int top, int right, int bottom ```
void q_pagesetupdialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QPageSetupDialog* self, QMargins* margins ```
void q_pagesetupdialog_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QPageSetupDialog* self ```
QMargins* q_pagesetupdialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QPageSetupDialog* self ```
QRect* q_pagesetupdialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QPageSetupDialog* self ```
QLayout* q_pagesetupdialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QPageSetupDialog* self, QLayout* layout ```
void q_pagesetupdialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QPageSetupDialog* self, QWidget* parent ```
void q_pagesetupdialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QPageSetupDialog* self, QWidget* parent, int f ```
void q_pagesetupdialog_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QPageSetupDialog* self, int dx, int dy ```
void q_pagesetupdialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QPageSetupDialog* self, int dx, int dy, QRect* param3 ```
void q_pagesetupdialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QPageSetupDialog* self ```
QWidget* q_pagesetupdialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QPageSetupDialog* self ```
QWidget* q_pagesetupdialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QPageSetupDialog* self ```
QWidget* q_pagesetupdialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QPageSetupDialog* self, bool on ```
void q_pagesetupdialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPageSetupDialog* self, QAction* action ```
void q_pagesetupdialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QPageSetupDialog* self, QAction* actions[] ```
void q_pagesetupdialog_add_actions(void* self, void* actions[]) {
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
/// ``` QPageSetupDialog* self, QAction* before, QAction* actions[] ```
void q_pagesetupdialog_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QPageSetupDialog* self, QAction* before, QAction* action ```
void q_pagesetupdialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QPageSetupDialog* self, QAction* action ```
void q_pagesetupdialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QPageSetupDialog* self ```
libqt_list /* of QAction* */ q_pagesetupdialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPageSetupDialog* self, const char* text ```
QAction* q_pagesetupdialog_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPageSetupDialog* self, QIcon* icon, const char* text ```
QAction* q_pagesetupdialog_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPageSetupDialog* self, const char* text, QKeySequence* shortcut ```
QAction* q_pagesetupdialog_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPageSetupDialog* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_pagesetupdialog_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QPageSetupDialog* self ```
QWidget* q_pagesetupdialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QPageSetupDialog* self, int typeVal ```
void q_pagesetupdialog_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QPageSetupDialog* self ```
int64_t q_pagesetupdialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QPageSetupDialog* self, enum Qt__WindowType param1 ```
void q_pagesetupdialog_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QPageSetupDialog* self, int typeVal ```
void q_pagesetupdialog_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QPageSetupDialog* self ```
int64_t q_pagesetupdialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_pagesetupdialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QPageSetupDialog* self, int x, int y ```
QWidget* q_pagesetupdialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QPageSetupDialog* self, QPoint* p ```
QWidget* q_pagesetupdialog_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QPageSetupDialog* self, enum Qt__WidgetAttribute param1 ```
void q_pagesetupdialog_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QPageSetupDialog* self, enum Qt__WidgetAttribute param1 ```
bool q_pagesetupdialog_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QPageSetupDialog* self, QWidget* child ```
bool q_pagesetupdialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QPageSetupDialog* self, bool enabled ```
void q_pagesetupdialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QPageSetupDialog* self ```
QBackingStore* q_pagesetupdialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QPageSetupDialog* self ```
QWindow* q_pagesetupdialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QPageSetupDialog* self ```
QScreen* q_pagesetupdialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QPageSetupDialog* self, QScreen* screen ```
void q_pagesetupdialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_pagesetupdialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QPageSetupDialog* self, const char* title ```
void q_pagesetupdialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QPageSetupDialog* self, void (*slot)(QWidget*, const char*) ```
void q_pagesetupdialog_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QPageSetupDialog* self, QIcon* icon ```
void q_pagesetupdialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QPageSetupDialog* self, void (*slot)(QWidget*, QIcon*) ```
void q_pagesetupdialog_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QPageSetupDialog* self, const char* iconText ```
void q_pagesetupdialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QPageSetupDialog* self, void (*slot)(QWidget*, const char*) ```
void q_pagesetupdialog_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QPageSetupDialog* self, QPoint* pos ```
void q_pagesetupdialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QPageSetupDialog* self, void (*slot)(QWidget*, QPoint*) ```
void q_pagesetupdialog_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QPageSetupDialog* self ```
int64_t q_pagesetupdialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QPageSetupDialog* self, int hints ```
void q_pagesetupdialog_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPageSetupDialog* self, QPaintDevice* target, QPoint* targetOffset ```
void q_pagesetupdialog_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPageSetupDialog* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_pagesetupdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPageSetupDialog* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_pagesetupdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPageSetupDialog* self, QPainter* painter, QPoint* targetOffset ```
void q_pagesetupdialog_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPageSetupDialog* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_pagesetupdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPageSetupDialog* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_pagesetupdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QPageSetupDialog* self, QRect* rectangle ```
QPixmap* q_pagesetupdialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QPageSetupDialog* self, enum Qt__GestureType typeVal, int flags ```
void q_pagesetupdialog_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QPageSetupDialog* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_pagesetupdialog_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QPageSetupDialog* self, int id, bool enable ```
void q_pagesetupdialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QPageSetupDialog* self, int id, bool enable ```
void q_pagesetupdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QPageSetupDialog* self, enum Qt__WindowType param1, bool on ```
void q_pagesetupdialog_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QPageSetupDialog* self, enum Qt__WidgetAttribute param1, bool on ```
void q_pagesetupdialog_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_pagesetupdialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_pagesetupdialog_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPageSetupDialog* self ```
const char* q_pagesetupdialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPageSetupDialog* self, const char* name ```
void q_pagesetupdialog_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPageSetupDialog* self, bool b ```
bool q_pagesetupdialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPageSetupDialog* self ```
QThread* q_pagesetupdialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPageSetupDialog* self, QThread* thread ```
void q_pagesetupdialog_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPageSetupDialog* self, int interval ```
int32_t q_pagesetupdialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPageSetupDialog* self, int id ```
void q_pagesetupdialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPageSetupDialog* self ```
libqt_list /* of QObject* */ q_pagesetupdialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPageSetupDialog* self, QObject* filterObj ```
void q_pagesetupdialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPageSetupDialog* self, QObject* obj ```
void q_pagesetupdialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_pagesetupdialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPageSetupDialog* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_pagesetupdialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_pagesetupdialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_pagesetupdialog_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPageSetupDialog* self, const char* name, QVariant* value ```
bool q_pagesetupdialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPageSetupDialog* self, const char* name ```
QVariant* q_pagesetupdialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPageSetupDialog* self ```
const char** q_pagesetupdialog_dynamic_property_names(void* self) {
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
/// ``` QPageSetupDialog* self ```
QBindingStorage* q_pagesetupdialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPageSetupDialog* self ```
QBindingStorage* q_pagesetupdialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QPageSetupDialog* self, void (*slot)(QObject*) ```
void q_pagesetupdialog_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPageSetupDialog* self ```
QObject* q_pagesetupdialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPageSetupDialog* self, const char* classname ```
bool q_pagesetupdialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPageSetupDialog* self, int interval, enum Qt__TimerType timerType ```
int32_t q_pagesetupdialog_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pagesetupdialog_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPageSetupDialog* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pagesetupdialog_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPageSetupDialog* self, QObject* param1 ```
void q_pagesetupdialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QPageSetupDialog* self, void (*slot)(QObject*, QObject*) ```
void q_pagesetupdialog_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QPageSetupDialog* self ```
int32_t q_pagesetupdialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QPageSetupDialog* self ```
int32_t q_pagesetupdialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QPageSetupDialog* self ```
int32_t q_pagesetupdialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QPageSetupDialog* self ```
int32_t q_pagesetupdialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QPageSetupDialog* self ```
int32_t q_pagesetupdialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QPageSetupDialog* self ```
int32_t q_pagesetupdialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QPageSetupDialog* self ```
double q_pagesetupdialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QPageSetupDialog* self ```
double q_pagesetupdialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QPageSetupDialog* self ```
int32_t q_pagesetupdialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QPageSetupDialog* self ```
int32_t q_pagesetupdialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_pagesetupdialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, bool visible ```
void q_pagesetupdialog_set_visible(void* self, bool visible) {
    QPageSetupDialog_SetVisible((QPageSetupDialog*)self, visible);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, bool visible ```
void q_pagesetupdialog_qbase_set_visible(void* self, bool visible) {
    QPageSetupDialog_QBaseSetVisible((QPageSetupDialog*)self, visible);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, bool) ```
void q_pagesetupdialog_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QPageSetupDialog_OnSetVisible((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self ```
QSize* q_pagesetupdialog_size_hint(void* self) {
    return QPageSetupDialog_SizeHint((QPageSetupDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self ```
QSize* q_pagesetupdialog_qbase_size_hint(void* self) {
    return QPageSetupDialog_QBaseSizeHint((QPageSetupDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QSize* (*slot)() ```
void q_pagesetupdialog_on_size_hint(void* self, QSize* (*slot)()) {
    QPageSetupDialog_OnSizeHint((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self ```
QSize* q_pagesetupdialog_minimum_size_hint(void* self) {
    return QPageSetupDialog_MinimumSizeHint((QPageSetupDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self ```
QSize* q_pagesetupdialog_qbase_minimum_size_hint(void* self) {
    return QPageSetupDialog_QBaseMinimumSizeHint((QPageSetupDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QSize* (*slot)() ```
void q_pagesetupdialog_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QPageSetupDialog_OnMinimumSizeHint((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_open(void* self) {
    QPageSetupDialog_Open((QPageSetupDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_qbase_open(void* self) {
    QPageSetupDialog_QBaseOpen((QPageSetupDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)() ```
void q_pagesetupdialog_on_open(void* self, void (*slot)()) {
    QPageSetupDialog_OnOpen((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_accept(void* self) {
    QPageSetupDialog_Accept((QPageSetupDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_qbase_accept(void* self) {
    QPageSetupDialog_QBaseAccept((QPageSetupDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)() ```
void q_pagesetupdialog_on_accept(void* self, void (*slot)()) {
    QPageSetupDialog_OnAccept((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_reject(void* self) {
    QPageSetupDialog_Reject((QPageSetupDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_qbase_reject(void* self) {
    QPageSetupDialog_QBaseReject((QPageSetupDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)() ```
void q_pagesetupdialog_on_reject(void* self, void (*slot)()) {
    QPageSetupDialog_OnReject((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QKeyEvent* param1 ```
void q_pagesetupdialog_key_press_event(void* self, void* param1) {
    QPageSetupDialog_KeyPressEvent((QPageSetupDialog*)self, (QKeyEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QKeyEvent* param1 ```
void q_pagesetupdialog_qbase_key_press_event(void* self, void* param1) {
    QPageSetupDialog_QBaseKeyPressEvent((QPageSetupDialog*)self, (QKeyEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QKeyEvent*) ```
void q_pagesetupdialog_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnKeyPressEvent((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QCloseEvent* param1 ```
void q_pagesetupdialog_close_event(void* self, void* param1) {
    QPageSetupDialog_CloseEvent((QPageSetupDialog*)self, (QCloseEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QCloseEvent* param1 ```
void q_pagesetupdialog_qbase_close_event(void* self, void* param1) {
    QPageSetupDialog_QBaseCloseEvent((QPageSetupDialog*)self, (QCloseEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QCloseEvent*) ```
void q_pagesetupdialog_on_close_event(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnCloseEvent((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QShowEvent* param1 ```
void q_pagesetupdialog_show_event(void* self, void* param1) {
    QPageSetupDialog_ShowEvent((QPageSetupDialog*)self, (QShowEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QShowEvent* param1 ```
void q_pagesetupdialog_qbase_show_event(void* self, void* param1) {
    QPageSetupDialog_QBaseShowEvent((QPageSetupDialog*)self, (QShowEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QShowEvent*) ```
void q_pagesetupdialog_on_show_event(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnShowEvent((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QResizeEvent* param1 ```
void q_pagesetupdialog_resize_event(void* self, void* param1) {
    QPageSetupDialog_ResizeEvent((QPageSetupDialog*)self, (QResizeEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QResizeEvent* param1 ```
void q_pagesetupdialog_qbase_resize_event(void* self, void* param1) {
    QPageSetupDialog_QBaseResizeEvent((QPageSetupDialog*)self, (QResizeEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QResizeEvent*) ```
void q_pagesetupdialog_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnResizeEvent((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QContextMenuEvent* param1 ```
void q_pagesetupdialog_context_menu_event(void* self, void* param1) {
    QPageSetupDialog_ContextMenuEvent((QPageSetupDialog*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QContextMenuEvent* param1 ```
void q_pagesetupdialog_qbase_context_menu_event(void* self, void* param1) {
    QPageSetupDialog_QBaseContextMenuEvent((QPageSetupDialog*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QContextMenuEvent*) ```
void q_pagesetupdialog_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnContextMenuEvent((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QObject* param1, QEvent* param2 ```
bool q_pagesetupdialog_event_filter(void* self, void* param1, void* param2) {
    return QPageSetupDialog_EventFilter((QPageSetupDialog*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QObject* param1, QEvent* param2 ```
bool q_pagesetupdialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return QPageSetupDialog_QBaseEventFilter((QPageSetupDialog*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, bool (*slot)(QPageSetupDialog*, QObject*, QEvent*) ```
void q_pagesetupdialog_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QPageSetupDialog_OnEventFilter((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self ```
int32_t q_pagesetupdialog_dev_type(void* self) {
    return QPageSetupDialog_DevType((QPageSetupDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self ```
int32_t q_pagesetupdialog_qbase_dev_type(void* self) {
    return QPageSetupDialog_QBaseDevType((QPageSetupDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, int32_t (*slot)() ```
void q_pagesetupdialog_on_dev_type(void* self, int32_t (*slot)()) {
    QPageSetupDialog_OnDevType((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, int param1 ```
int32_t q_pagesetupdialog_height_for_width(void* self, int param1) {
    return QPageSetupDialog_HeightForWidth((QPageSetupDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, int param1 ```
int32_t q_pagesetupdialog_qbase_height_for_width(void* self, int param1) {
    return QPageSetupDialog_QBaseHeightForWidth((QPageSetupDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, int32_t (*slot)(QPageSetupDialog*, int) ```
void q_pagesetupdialog_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QPageSetupDialog_OnHeightForWidth((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_has_height_for_width(void* self) {
    return QPageSetupDialog_HasHeightForWidth((QPageSetupDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_qbase_has_height_for_width(void* self) {
    return QPageSetupDialog_QBaseHasHeightForWidth((QPageSetupDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, bool (*slot)() ```
void q_pagesetupdialog_on_has_height_for_width(void* self, bool (*slot)()) {
    QPageSetupDialog_OnHasHeightForWidth((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self ```
QPaintEngine* q_pagesetupdialog_paint_engine(void* self) {
    return QPageSetupDialog_PaintEngine((QPageSetupDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self ```
QPaintEngine* q_pagesetupdialog_qbase_paint_engine(void* self) {
    return QPageSetupDialog_QBasePaintEngine((QPageSetupDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QPaintEngine* (*slot)() ```
void q_pagesetupdialog_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QPageSetupDialog_OnPaintEngine((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QEvent* event ```
bool q_pagesetupdialog_event(void* self, void* event) {
    return QPageSetupDialog_Event((QPageSetupDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QEvent* event ```
bool q_pagesetupdialog_qbase_event(void* self, void* event) {
    return QPageSetupDialog_QBaseEvent((QPageSetupDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, bool (*slot)(QPageSetupDialog*, QEvent*) ```
void q_pagesetupdialog_on_event(void* self, bool (*slot)(void*, void*)) {
    QPageSetupDialog_OnEvent((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QMouseEvent* event ```
void q_pagesetupdialog_mouse_press_event(void* self, void* event) {
    QPageSetupDialog_MousePressEvent((QPageSetupDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QMouseEvent* event ```
void q_pagesetupdialog_qbase_mouse_press_event(void* self, void* event) {
    QPageSetupDialog_QBaseMousePressEvent((QPageSetupDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QMouseEvent*) ```
void q_pagesetupdialog_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnMousePressEvent((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QMouseEvent* event ```
void q_pagesetupdialog_mouse_release_event(void* self, void* event) {
    QPageSetupDialog_MouseReleaseEvent((QPageSetupDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QMouseEvent* event ```
void q_pagesetupdialog_qbase_mouse_release_event(void* self, void* event) {
    QPageSetupDialog_QBaseMouseReleaseEvent((QPageSetupDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QMouseEvent*) ```
void q_pagesetupdialog_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnMouseReleaseEvent((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QMouseEvent* event ```
void q_pagesetupdialog_mouse_double_click_event(void* self, void* event) {
    QPageSetupDialog_MouseDoubleClickEvent((QPageSetupDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QMouseEvent* event ```
void q_pagesetupdialog_qbase_mouse_double_click_event(void* self, void* event) {
    QPageSetupDialog_QBaseMouseDoubleClickEvent((QPageSetupDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QMouseEvent*) ```
void q_pagesetupdialog_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnMouseDoubleClickEvent((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QMouseEvent* event ```
void q_pagesetupdialog_mouse_move_event(void* self, void* event) {
    QPageSetupDialog_MouseMoveEvent((QPageSetupDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QMouseEvent* event ```
void q_pagesetupdialog_qbase_mouse_move_event(void* self, void* event) {
    QPageSetupDialog_QBaseMouseMoveEvent((QPageSetupDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QMouseEvent*) ```
void q_pagesetupdialog_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnMouseMoveEvent((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QWheelEvent* event ```
void q_pagesetupdialog_wheel_event(void* self, void* event) {
    QPageSetupDialog_WheelEvent((QPageSetupDialog*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QWheelEvent* event ```
void q_pagesetupdialog_qbase_wheel_event(void* self, void* event) {
    QPageSetupDialog_QBaseWheelEvent((QPageSetupDialog*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QWheelEvent*) ```
void q_pagesetupdialog_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnWheelEvent((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QKeyEvent* event ```
void q_pagesetupdialog_key_release_event(void* self, void* event) {
    QPageSetupDialog_KeyReleaseEvent((QPageSetupDialog*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QKeyEvent* event ```
void q_pagesetupdialog_qbase_key_release_event(void* self, void* event) {
    QPageSetupDialog_QBaseKeyReleaseEvent((QPageSetupDialog*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QKeyEvent*) ```
void q_pagesetupdialog_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnKeyReleaseEvent((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QFocusEvent* event ```
void q_pagesetupdialog_focus_in_event(void* self, void* event) {
    QPageSetupDialog_FocusInEvent((QPageSetupDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QFocusEvent* event ```
void q_pagesetupdialog_qbase_focus_in_event(void* self, void* event) {
    QPageSetupDialog_QBaseFocusInEvent((QPageSetupDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QFocusEvent*) ```
void q_pagesetupdialog_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnFocusInEvent((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QFocusEvent* event ```
void q_pagesetupdialog_focus_out_event(void* self, void* event) {
    QPageSetupDialog_FocusOutEvent((QPageSetupDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QFocusEvent* event ```
void q_pagesetupdialog_qbase_focus_out_event(void* self, void* event) {
    QPageSetupDialog_QBaseFocusOutEvent((QPageSetupDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QFocusEvent*) ```
void q_pagesetupdialog_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnFocusOutEvent((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QEnterEvent* event ```
void q_pagesetupdialog_enter_event(void* self, void* event) {
    QPageSetupDialog_EnterEvent((QPageSetupDialog*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QEnterEvent* event ```
void q_pagesetupdialog_qbase_enter_event(void* self, void* event) {
    QPageSetupDialog_QBaseEnterEvent((QPageSetupDialog*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QEnterEvent*) ```
void q_pagesetupdialog_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnEnterEvent((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QEvent* event ```
void q_pagesetupdialog_leave_event(void* self, void* event) {
    QPageSetupDialog_LeaveEvent((QPageSetupDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QEvent* event ```
void q_pagesetupdialog_qbase_leave_event(void* self, void* event) {
    QPageSetupDialog_QBaseLeaveEvent((QPageSetupDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QEvent*) ```
void q_pagesetupdialog_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnLeaveEvent((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QPaintEvent* event ```
void q_pagesetupdialog_paint_event(void* self, void* event) {
    QPageSetupDialog_PaintEvent((QPageSetupDialog*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QPaintEvent* event ```
void q_pagesetupdialog_qbase_paint_event(void* self, void* event) {
    QPageSetupDialog_QBasePaintEvent((QPageSetupDialog*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QPaintEvent*) ```
void q_pagesetupdialog_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnPaintEvent((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QMoveEvent* event ```
void q_pagesetupdialog_move_event(void* self, void* event) {
    QPageSetupDialog_MoveEvent((QPageSetupDialog*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QMoveEvent* event ```
void q_pagesetupdialog_qbase_move_event(void* self, void* event) {
    QPageSetupDialog_QBaseMoveEvent((QPageSetupDialog*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QMoveEvent*) ```
void q_pagesetupdialog_on_move_event(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnMoveEvent((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QTabletEvent* event ```
void q_pagesetupdialog_tablet_event(void* self, void* event) {
    QPageSetupDialog_TabletEvent((QPageSetupDialog*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QTabletEvent* event ```
void q_pagesetupdialog_qbase_tablet_event(void* self, void* event) {
    QPageSetupDialog_QBaseTabletEvent((QPageSetupDialog*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QTabletEvent*) ```
void q_pagesetupdialog_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnTabletEvent((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QActionEvent* event ```
void q_pagesetupdialog_action_event(void* self, void* event) {
    QPageSetupDialog_ActionEvent((QPageSetupDialog*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QActionEvent* event ```
void q_pagesetupdialog_qbase_action_event(void* self, void* event) {
    QPageSetupDialog_QBaseActionEvent((QPageSetupDialog*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QActionEvent*) ```
void q_pagesetupdialog_on_action_event(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnActionEvent((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QDragEnterEvent* event ```
void q_pagesetupdialog_drag_enter_event(void* self, void* event) {
    QPageSetupDialog_DragEnterEvent((QPageSetupDialog*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QDragEnterEvent* event ```
void q_pagesetupdialog_qbase_drag_enter_event(void* self, void* event) {
    QPageSetupDialog_QBaseDragEnterEvent((QPageSetupDialog*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QDragEnterEvent*) ```
void q_pagesetupdialog_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnDragEnterEvent((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QDragMoveEvent* event ```
void q_pagesetupdialog_drag_move_event(void* self, void* event) {
    QPageSetupDialog_DragMoveEvent((QPageSetupDialog*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QDragMoveEvent* event ```
void q_pagesetupdialog_qbase_drag_move_event(void* self, void* event) {
    QPageSetupDialog_QBaseDragMoveEvent((QPageSetupDialog*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QDragMoveEvent*) ```
void q_pagesetupdialog_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnDragMoveEvent((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QDragLeaveEvent* event ```
void q_pagesetupdialog_drag_leave_event(void* self, void* event) {
    QPageSetupDialog_DragLeaveEvent((QPageSetupDialog*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QDragLeaveEvent* event ```
void q_pagesetupdialog_qbase_drag_leave_event(void* self, void* event) {
    QPageSetupDialog_QBaseDragLeaveEvent((QPageSetupDialog*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QDragLeaveEvent*) ```
void q_pagesetupdialog_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnDragLeaveEvent((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QDropEvent* event ```
void q_pagesetupdialog_drop_event(void* self, void* event) {
    QPageSetupDialog_DropEvent((QPageSetupDialog*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QDropEvent* event ```
void q_pagesetupdialog_qbase_drop_event(void* self, void* event) {
    QPageSetupDialog_QBaseDropEvent((QPageSetupDialog*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QDropEvent*) ```
void q_pagesetupdialog_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnDropEvent((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QHideEvent* event ```
void q_pagesetupdialog_hide_event(void* self, void* event) {
    QPageSetupDialog_HideEvent((QPageSetupDialog*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QHideEvent* event ```
void q_pagesetupdialog_qbase_hide_event(void* self, void* event) {
    QPageSetupDialog_QBaseHideEvent((QPageSetupDialog*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QHideEvent*) ```
void q_pagesetupdialog_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnHideEvent((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, const char* eventType, void* message, intptr_t* result ```
bool q_pagesetupdialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QPageSetupDialog_NativeEvent((QPageSetupDialog*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, const char* eventType, void* message, intptr_t* result ```
bool q_pagesetupdialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QPageSetupDialog_QBaseNativeEvent((QPageSetupDialog*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, bool (*slot)(QPageSetupDialog*, const char*, void*, intptr_t*) ```
void q_pagesetupdialog_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QPageSetupDialog_OnNativeEvent((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QEvent* param1 ```
void q_pagesetupdialog_change_event(void* self, void* param1) {
    QPageSetupDialog_ChangeEvent((QPageSetupDialog*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QEvent* param1 ```
void q_pagesetupdialog_qbase_change_event(void* self, void* param1) {
    QPageSetupDialog_QBaseChangeEvent((QPageSetupDialog*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QEvent*) ```
void q_pagesetupdialog_on_change_event(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnChangeEvent((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_pagesetupdialog_metric(void* self, int64_t param1) {
    return QPageSetupDialog_Metric((QPageSetupDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_pagesetupdialog_qbase_metric(void* self, int64_t param1) {
    return QPageSetupDialog_QBaseMetric((QPageSetupDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, int32_t (*slot)(QPageSetupDialog*, enum QPaintDevice__PaintDeviceMetric) ```
void q_pagesetupdialog_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QPageSetupDialog_OnMetric((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QPainter* painter ```
void q_pagesetupdialog_init_painter(void* self, void* painter) {
    QPageSetupDialog_InitPainter((QPageSetupDialog*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QPainter* painter ```
void q_pagesetupdialog_qbase_init_painter(void* self, void* painter) {
    QPageSetupDialog_QBaseInitPainter((QPageSetupDialog*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QPainter*) ```
void q_pagesetupdialog_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnInitPainter((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QPoint* offset ```
QPaintDevice* q_pagesetupdialog_redirected(void* self, void* offset) {
    return QPageSetupDialog_Redirected((QPageSetupDialog*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QPoint* offset ```
QPaintDevice* q_pagesetupdialog_qbase_redirected(void* self, void* offset) {
    return QPageSetupDialog_QBaseRedirected((QPageSetupDialog*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QPaintDevice* (*slot)(QPageSetupDialog*, QPoint*) ```
void q_pagesetupdialog_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QPageSetupDialog_OnRedirected((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self ```
QPainter* q_pagesetupdialog_shared_painter(void* self) {
    return QPageSetupDialog_SharedPainter((QPageSetupDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self ```
QPainter* q_pagesetupdialog_qbase_shared_painter(void* self) {
    return QPageSetupDialog_QBaseSharedPainter((QPageSetupDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QPainter* (*slot)() ```
void q_pagesetupdialog_on_shared_painter(void* self, QPainter* (*slot)()) {
    QPageSetupDialog_OnSharedPainter((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QInputMethodEvent* param1 ```
void q_pagesetupdialog_input_method_event(void* self, void* param1) {
    QPageSetupDialog_InputMethodEvent((QPageSetupDialog*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QInputMethodEvent* param1 ```
void q_pagesetupdialog_qbase_input_method_event(void* self, void* param1) {
    QPageSetupDialog_QBaseInputMethodEvent((QPageSetupDialog*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QInputMethodEvent*) ```
void q_pagesetupdialog_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnInputMethodEvent((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_pagesetupdialog_input_method_query(void* self, int64_t param1) {
    return QPageSetupDialog_InputMethodQuery((QPageSetupDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_pagesetupdialog_qbase_input_method_query(void* self, int64_t param1) {
    return QPageSetupDialog_QBaseInputMethodQuery((QPageSetupDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QVariant* (*slot)(QPageSetupDialog*, enum Qt__InputMethodQuery) ```
void q_pagesetupdialog_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QPageSetupDialog_OnInputMethodQuery((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, bool next ```
bool q_pagesetupdialog_focus_next_prev_child(void* self, bool next) {
    return QPageSetupDialog_FocusNextPrevChild((QPageSetupDialog*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, bool next ```
bool q_pagesetupdialog_qbase_focus_next_prev_child(void* self, bool next) {
    return QPageSetupDialog_QBaseFocusNextPrevChild((QPageSetupDialog*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, bool (*slot)(QPageSetupDialog*, bool) ```
void q_pagesetupdialog_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QPageSetupDialog_OnFocusNextPrevChild((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QTimerEvent* event ```
void q_pagesetupdialog_timer_event(void* self, void* event) {
    QPageSetupDialog_TimerEvent((QPageSetupDialog*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QTimerEvent* event ```
void q_pagesetupdialog_qbase_timer_event(void* self, void* event) {
    QPageSetupDialog_QBaseTimerEvent((QPageSetupDialog*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QTimerEvent*) ```
void q_pagesetupdialog_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnTimerEvent((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QChildEvent* event ```
void q_pagesetupdialog_child_event(void* self, void* event) {
    QPageSetupDialog_ChildEvent((QPageSetupDialog*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QChildEvent* event ```
void q_pagesetupdialog_qbase_child_event(void* self, void* event) {
    QPageSetupDialog_QBaseChildEvent((QPageSetupDialog*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QChildEvent*) ```
void q_pagesetupdialog_on_child_event(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnChildEvent((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QEvent* event ```
void q_pagesetupdialog_custom_event(void* self, void* event) {
    QPageSetupDialog_CustomEvent((QPageSetupDialog*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QEvent* event ```
void q_pagesetupdialog_qbase_custom_event(void* self, void* event) {
    QPageSetupDialog_QBaseCustomEvent((QPageSetupDialog*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QEvent*) ```
void q_pagesetupdialog_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnCustomEvent((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QMetaMethod* signal ```
void q_pagesetupdialog_connect_notify(void* self, void* signal) {
    QPageSetupDialog_ConnectNotify((QPageSetupDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QMetaMethod* signal ```
void q_pagesetupdialog_qbase_connect_notify(void* self, void* signal) {
    QPageSetupDialog_QBaseConnectNotify((QPageSetupDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QMetaMethod*) ```
void q_pagesetupdialog_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnConnectNotify((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QMetaMethod* signal ```
void q_pagesetupdialog_disconnect_notify(void* self, void* signal) {
    QPageSetupDialog_DisconnectNotify((QPageSetupDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QMetaMethod* signal ```
void q_pagesetupdialog_qbase_disconnect_notify(void* self, void* signal) {
    QPageSetupDialog_QBaseDisconnectNotify((QPageSetupDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QMetaMethod*) ```
void q_pagesetupdialog_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnDisconnectNotify((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QWidget* param1 ```
void q_pagesetupdialog_adjust_position(void* self, void* param1) {
    QPageSetupDialog_AdjustPosition((QPageSetupDialog*)self, (QWidget*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QWidget* param1 ```
void q_pagesetupdialog_qbase_adjust_position(void* self, void* param1) {
    QPageSetupDialog_QBaseAdjustPosition((QPageSetupDialog*)self, (QWidget*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)(QPageSetupDialog*, QWidget*) ```
void q_pagesetupdialog_on_adjust_position(void* self, void (*slot)(void*, void*)) {
    QPageSetupDialog_OnAdjustPosition((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_update_micro_focus(void* self) {
    QPageSetupDialog_UpdateMicroFocus((QPageSetupDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_qbase_update_micro_focus(void* self) {
    QPageSetupDialog_QBaseUpdateMicroFocus((QPageSetupDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)() ```
void q_pagesetupdialog_on_update_micro_focus(void* self, void (*slot)()) {
    QPageSetupDialog_OnUpdateMicroFocus((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_create(void* self) {
    QPageSetupDialog_Create((QPageSetupDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_qbase_create(void* self) {
    QPageSetupDialog_QBaseCreate((QPageSetupDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)() ```
void q_pagesetupdialog_on_create(void* self, void (*slot)()) {
    QPageSetupDialog_OnCreate((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_destroy(void* self) {
    QPageSetupDialog_Destroy((QPageSetupDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_qbase_destroy(void* self) {
    QPageSetupDialog_QBaseDestroy((QPageSetupDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, void (*slot)() ```
void q_pagesetupdialog_on_destroy(void* self, void (*slot)()) {
    QPageSetupDialog_OnDestroy((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_focus_next_child(void* self) {
    return QPageSetupDialog_FocusNextChild((QPageSetupDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_qbase_focus_next_child(void* self) {
    return QPageSetupDialog_QBaseFocusNextChild((QPageSetupDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, bool (*slot)() ```
void q_pagesetupdialog_on_focus_next_child(void* self, bool (*slot)()) {
    QPageSetupDialog_OnFocusNextChild((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_focus_previous_child(void* self) {
    return QPageSetupDialog_FocusPreviousChild((QPageSetupDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self ```
bool q_pagesetupdialog_qbase_focus_previous_child(void* self) {
    return QPageSetupDialog_QBaseFocusPreviousChild((QPageSetupDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, bool (*slot)() ```
void q_pagesetupdialog_on_focus_previous_child(void* self, bool (*slot)()) {
    QPageSetupDialog_OnFocusPreviousChild((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self ```
QObject* q_pagesetupdialog_sender(void* self) {
    return QPageSetupDialog_Sender((QPageSetupDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self ```
QObject* q_pagesetupdialog_qbase_sender(void* self) {
    return QPageSetupDialog_QBaseSender((QPageSetupDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QObject* (*slot)() ```
void q_pagesetupdialog_on_sender(void* self, QObject* (*slot)()) {
    QPageSetupDialog_OnSender((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self ```
int32_t q_pagesetupdialog_sender_signal_index(void* self) {
    return QPageSetupDialog_SenderSignalIndex((QPageSetupDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self ```
int32_t q_pagesetupdialog_qbase_sender_signal_index(void* self) {
    return QPageSetupDialog_QBaseSenderSignalIndex((QPageSetupDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, int32_t (*slot)() ```
void q_pagesetupdialog_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QPageSetupDialog_OnSenderSignalIndex((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, const char* signal ```
int32_t q_pagesetupdialog_receivers(void* self, const char* signal) {
    return QPageSetupDialog_Receivers((QPageSetupDialog*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, const char* signal ```
int32_t q_pagesetupdialog_qbase_receivers(void* self, const char* signal) {
    return QPageSetupDialog_QBaseReceivers((QPageSetupDialog*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, int32_t (*slot)(QPageSetupDialog*, const char*) ```
void q_pagesetupdialog_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QPageSetupDialog_OnReceivers((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPageSetupDialog* self, QMetaMethod* signal ```
bool q_pagesetupdialog_is_signal_connected(void* self, void* signal) {
    return QPageSetupDialog_IsSignalConnected((QPageSetupDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPageSetupDialog* self, QMetaMethod* signal ```
bool q_pagesetupdialog_qbase_is_signal_connected(void* self, void* signal) {
    return QPageSetupDialog_QBaseIsSignalConnected((QPageSetupDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPageSetupDialog* self, bool (*slot)(QPageSetupDialog*, QMetaMethod*) ```
void q_pagesetupdialog_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QPageSetupDialog_OnIsSignalConnected((QPageSetupDialog*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QPageSetupDialog* self ```
void q_pagesetupdialog_delete(void* self) {
    QPageSetupDialog_Delete((QPageSetupDialog*)(self));
}