#include "libqabstractprintdialog.hpp"
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
#include "libqprintdialog.hpp"
#include "libqprintdialog.h"

/// https://doc.qt.io/qt-6/qprintdialog.html

/// q_printdialog_new constructs a new QPrintDialog object.
///
/// ``` QWidget* parent ```
QPrintDialog* q_printdialog_new(void* parent) {
    return QPrintDialog_new((QWidget*)parent);
}

/// q_printdialog_new2 constructs a new QPrintDialog object.
///
/// ``` QPrinter* printer ```
QPrintDialog* q_printdialog_new2(void* printer) {
    return QPrintDialog_new2((QPrinter*)printer);
}

/// q_printdialog_new3 constructs a new QPrintDialog object.
///
///
QPrintDialog* q_printdialog_new3() {
    return QPrintDialog_new3();
}

/// q_printdialog_new4 constructs a new QPrintDialog object.
///
/// ``` QPrinter* printer, QWidget* parent ```
QPrintDialog* q_printdialog_new4(void* printer, void* parent) {
    return QPrintDialog_new4((QPrinter*)printer, (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPrintDialog* self ```
QMetaObject* q_printdialog_meta_object(void* self) {
    return QPrintDialog_MetaObject((QPrintDialog*)self);
}

/// ``` QPrintDialog* self, const char* param1 ```
void* q_printdialog_metacast(void* self, const char* param1) {
    return QPrintDialog_Metacast((QPrintDialog*)self, param1);
}

/// ``` QPrintDialog* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_printdialog_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPrintDialog_Metacall((QPrintDialog*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QPrintDialog* self, int32_t (*slot)(QPrintDialog*, enum QMetaObject__Call, int, void*) ```
void q_printdialog_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QPrintDialog_OnMetacall((QPrintDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPrintDialog* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_printdialog_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPrintDialog_QBaseMetacall((QPrintDialog*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_printdialog_tr(const char* s) {
    libqt_string _str = QPrintDialog_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintdialog.html#exec)
///
/// ``` QPrintDialog* self ```
int32_t q_printdialog_exec(void* self) {
    return QPrintDialog_Exec((QPrintDialog*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPrintDialog* self, int32_t (*slot)() ```
void q_printdialog_on_exec(void* self, int32_t (*slot)()) {
    QPrintDialog_OnExec((QPrintDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPrintDialog* self ```
int32_t q_printdialog_qbase_exec(void* self) {
    return QPrintDialog_QBaseExec((QPrintDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintdialog.html#accept)
///
/// ``` QPrintDialog* self ```
void q_printdialog_accept(void* self) {
    QPrintDialog_Accept((QPrintDialog*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPrintDialog* self, void (*slot)() ```
void q_printdialog_on_accept(void* self, void (*slot)()) {
    QPrintDialog_OnAccept((QPrintDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPrintDialog* self ```
void q_printdialog_qbase_accept(void* self) {
    QPrintDialog_QBaseAccept((QPrintDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintdialog.html#done)
///
/// ``` QPrintDialog* self, int result ```
void q_printdialog_done(void* self, int result) {
    QPrintDialog_Done((QPrintDialog*)self, result);
}

/// Allows for overriding the related default method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, int) ```
void q_printdialog_on_done(void* self, void (*slot)(void*, int)) {
    QPrintDialog_OnDone((QPrintDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPrintDialog* self, int result ```
void q_printdialog_qbase_done(void* self, int result) {
    QPrintDialog_QBaseDone((QPrintDialog*)self, result);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintdialog.html#setOption)
///
/// ``` QPrintDialog* self, enum QAbstractPrintDialog__PrintDialogOption option ```
void q_printdialog_set_option(void* self, int64_t option) {
    QPrintDialog_SetOption((QPrintDialog*)self, option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintdialog.html#testOption)
///
/// ``` QPrintDialog* self, enum QAbstractPrintDialog__PrintDialogOption option ```
bool q_printdialog_test_option(void* self, int64_t option) {
    return QPrintDialog_TestOption((QPrintDialog*)self, option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintdialog.html#setOptions)
///
/// ``` QPrintDialog* self, int options ```
void q_printdialog_set_options(void* self, int64_t options) {
    QPrintDialog_SetOptions((QPrintDialog*)self, options);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintdialog.html#options)
///
/// ``` QPrintDialog* self ```
int64_t q_printdialog_options(void* self) {
    return QPrintDialog_Options((QPrintDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintdialog.html#setVisible)
///
/// ``` QPrintDialog* self, bool visible ```
void q_printdialog_set_visible(void* self, bool visible) {
    QPrintDialog_SetVisible((QPrintDialog*)self, visible);
}

/// Allows for overriding the related default method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, bool) ```
void q_printdialog_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QPrintDialog_OnSetVisible((QPrintDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPrintDialog* self, bool visible ```
void q_printdialog_qbase_set_visible(void* self, bool visible) {
    QPrintDialog_QBaseSetVisible((QPrintDialog*)self, visible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintdialog.html#accepted)
///
/// ``` QPrintDialog* self, QPrinter* printer ```
void q_printdialog_accepted(void* self, void* printer) {
    QPrintDialog_Accepted((QPrintDialog*)self, (QPrinter*)printer);
}

/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QPrinter*) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_printdialog_tr2(const char* s, const char* c) {
    libqt_string _str = QPrintDialog_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_printdialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QPrintDialog_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintdialog.html#setOption)
///
/// ``` QPrintDialog* self, enum QAbstractPrintDialog__PrintDialogOption option, bool on ```
void q_printdialog_set_option2(void* self, int64_t option, bool on) {
    QPrintDialog_SetOption2((QPrintDialog*)self, option, on);
}

/// Inherited from QAbstractPrintDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractprintdialog.html#setOptionTabs)
///
/// ``` QPrintDialog* self, QWidget* tabs[] ```
void q_printdialog_set_option_tabs(void* self, void* tabs[]) {
    QWidget** tabs_arr = (QWidget**)tabs;
    size_t tabs_len = 0;
    while (tabs_arr[tabs_len] != NULL) {
        tabs_len++;
    }
    libqt_list tabs_list = {
        .len = tabs_len,
        .data = {(QWidget*)tabs},
    };
    QAbstractPrintDialog_SetOptionTabs((QAbstractPrintDialog*)self, tabs_list);
}

/// Inherited from QAbstractPrintDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractprintdialog.html#setPrintRange)
///
/// ``` QPrintDialog* self, enum QAbstractPrintDialog__PrintRange range ```
void q_printdialog_set_print_range(void* self, int64_t range) {
    QAbstractPrintDialog_SetPrintRange((QAbstractPrintDialog*)self, range);
}

/// Inherited from QAbstractPrintDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractprintdialog.html#printRange)
///
/// ``` QPrintDialog* self ```
int64_t q_printdialog_print_range(void* self) {
    return QAbstractPrintDialog_PrintRange((QAbstractPrintDialog*)self);
}

/// Inherited from QAbstractPrintDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractprintdialog.html#setMinMax)
///
/// ``` QPrintDialog* self, int min, int max ```
void q_printdialog_set_min_max(void* self, int min, int max) {
    QAbstractPrintDialog_SetMinMax((QAbstractPrintDialog*)self, min, max);
}

/// Inherited from QAbstractPrintDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractprintdialog.html#minPage)
///
/// ``` QPrintDialog* self ```
int32_t q_printdialog_min_page(void* self) {
    return QAbstractPrintDialog_MinPage((QAbstractPrintDialog*)self);
}

/// Inherited from QAbstractPrintDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractprintdialog.html#maxPage)
///
/// ``` QPrintDialog* self ```
int32_t q_printdialog_max_page(void* self) {
    return QAbstractPrintDialog_MaxPage((QAbstractPrintDialog*)self);
}

/// Inherited from QAbstractPrintDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractprintdialog.html#setFromTo)
///
/// ``` QPrintDialog* self, int fromPage, int toPage ```
void q_printdialog_set_from_to(void* self, int fromPage, int toPage) {
    QAbstractPrintDialog_SetFromTo((QAbstractPrintDialog*)self, fromPage, toPage);
}

/// Inherited from QAbstractPrintDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractprintdialog.html#fromPage)
///
/// ``` QPrintDialog* self ```
int32_t q_printdialog_from_page(void* self) {
    return QAbstractPrintDialog_FromPage((QAbstractPrintDialog*)self);
}

/// Inherited from QAbstractPrintDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractprintdialog.html#toPage)
///
/// ``` QPrintDialog* self ```
int32_t q_printdialog_to_page(void* self) {
    return QAbstractPrintDialog_ToPage((QAbstractPrintDialog*)self);
}

/// Inherited from QAbstractPrintDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractprintdialog.html#printer)
///
/// ``` QPrintDialog* self ```
QPrinter* q_printdialog_printer(void* self) {
    return QAbstractPrintDialog_Printer((QAbstractPrintDialog*)self);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// ``` QPrintDialog* self ```
int32_t q_printdialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// ``` QPrintDialog* self, bool sizeGripEnabled ```
void q_printdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// ``` QPrintDialog* self ```
bool q_printdialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// ``` QPrintDialog* self, bool modal ```
void q_printdialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// ``` QPrintDialog* self, int r ```
void q_printdialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// ``` QPrintDialog* self, int result ```
void q_printdialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

/// Inherited from QDialog
///
/// ``` QPrintDialog* self, void (*slot)(QDialog*, int) ```
void q_printdialog_on_finished(void* self, void (*slot)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// ``` QPrintDialog* self ```
void q_printdialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

/// Inherited from QDialog
///
/// ``` QPrintDialog* self, void (*slot)(QDialog*) ```
void q_printdialog_on_rejected(void* self, void (*slot)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QPrintDialog* self ```
uintptr_t q_printdialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QPrintDialog* self ```
void q_printdialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QPrintDialog* self ```
uintptr_t q_printdialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QPrintDialog* self ```
uintptr_t q_printdialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QPrintDialog* self ```
QStyle* q_printdialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QPrintDialog* self, QStyle* style ```
void q_printdialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QPrintDialog* self ```
bool q_printdialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QPrintDialog* self ```
bool q_printdialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QPrintDialog* self ```
bool q_printdialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QPrintDialog* self ```
int64_t q_printdialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QPrintDialog* self, enum Qt__WindowModality windowModality ```
void q_printdialog_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QPrintDialog* self ```
bool q_printdialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QPrintDialog* self, QWidget* param1 ```
bool q_printdialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QPrintDialog* self, bool enabled ```
void q_printdialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QPrintDialog* self, bool disabled ```
void q_printdialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QPrintDialog* self, bool windowModified ```
void q_printdialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QPrintDialog* self ```
QRect* q_printdialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QPrintDialog* self ```
QRect* q_printdialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QPrintDialog* self ```
QRect* q_printdialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QPrintDialog* self ```
int32_t q_printdialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QPrintDialog* self ```
int32_t q_printdialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QPrintDialog* self ```
QPoint* q_printdialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QPrintDialog* self ```
QSize* q_printdialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QPrintDialog* self ```
QSize* q_printdialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QPrintDialog* self ```
int32_t q_printdialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QPrintDialog* self ```
int32_t q_printdialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QPrintDialog* self ```
QRect* q_printdialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QPrintDialog* self ```
QRect* q_printdialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QPrintDialog* self ```
QRegion* q_printdialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QPrintDialog* self ```
QSize* q_printdialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QPrintDialog* self ```
QSize* q_printdialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QPrintDialog* self ```
int32_t q_printdialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QPrintDialog* self ```
int32_t q_printdialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QPrintDialog* self ```
int32_t q_printdialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QPrintDialog* self ```
int32_t q_printdialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QPrintDialog* self, QSize* minimumSize ```
void q_printdialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QPrintDialog* self, int minw, int minh ```
void q_printdialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QPrintDialog* self, QSize* maximumSize ```
void q_printdialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QPrintDialog* self, int maxw, int maxh ```
void q_printdialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QPrintDialog* self, int minw ```
void q_printdialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QPrintDialog* self, int minh ```
void q_printdialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QPrintDialog* self, int maxw ```
void q_printdialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QPrintDialog* self, int maxh ```
void q_printdialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QPrintDialog* self ```
QSize* q_printdialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QPrintDialog* self, QSize* sizeIncrement ```
void q_printdialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QPrintDialog* self, int w, int h ```
void q_printdialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QPrintDialog* self ```
QSize* q_printdialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QPrintDialog* self, QSize* baseSize ```
void q_printdialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QPrintDialog* self, int basew, int baseh ```
void q_printdialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QPrintDialog* self, QSize* fixedSize ```
void q_printdialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QPrintDialog* self, int w, int h ```
void q_printdialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QPrintDialog* self, int w ```
void q_printdialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QPrintDialog* self, int h ```
void q_printdialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QPrintDialog* self, QPointF* param1 ```
QPointF* q_printdialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QPrintDialog* self, QPoint* param1 ```
QPoint* q_printdialog_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QPrintDialog* self, QPointF* param1 ```
QPointF* q_printdialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QPrintDialog* self, QPoint* param1 ```
QPoint* q_printdialog_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QPrintDialog* self, QPointF* param1 ```
QPointF* q_printdialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QPrintDialog* self, QPoint* param1 ```
QPoint* q_printdialog_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QPrintDialog* self, QPointF* param1 ```
QPointF* q_printdialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QPrintDialog* self, QPoint* param1 ```
QPoint* q_printdialog_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QPrintDialog* self, QWidget* param1, QPointF* param2 ```
QPointF* q_printdialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QPrintDialog* self, QWidget* param1, QPoint* param2 ```
QPoint* q_printdialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QPrintDialog* self, QWidget* param1, QPointF* param2 ```
QPointF* q_printdialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QPrintDialog* self, QWidget* param1, QPoint* param2 ```
QPoint* q_printdialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QPrintDialog* self ```
QWidget* q_printdialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QPrintDialog* self ```
QWidget* q_printdialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QPrintDialog* self ```
QWidget* q_printdialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QPrintDialog* self ```
QPalette* q_printdialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QPrintDialog* self, QPalette* palette ```
void q_printdialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QPrintDialog* self, enum QPalette__ColorRole backgroundRole ```
void q_printdialog_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QPrintDialog* self ```
int64_t q_printdialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QPrintDialog* self, enum QPalette__ColorRole foregroundRole ```
void q_printdialog_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QPrintDialog* self ```
int64_t q_printdialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QPrintDialog* self ```
QFont* q_printdialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QPrintDialog* self, QFont* font ```
void q_printdialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QPrintDialog* self ```
QFontMetrics* q_printdialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QPrintDialog* self ```
QFontInfo* q_printdialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QPrintDialog* self ```
QCursor* q_printdialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QPrintDialog* self, QCursor* cursor ```
void q_printdialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QPrintDialog* self ```
void q_printdialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QPrintDialog* self, bool enable ```
void q_printdialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QPrintDialog* self ```
bool q_printdialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QPrintDialog* self ```
bool q_printdialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QPrintDialog* self, bool enable ```
void q_printdialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QPrintDialog* self ```
bool q_printdialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QPrintDialog* self, QBitmap* mask ```
void q_printdialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QPrintDialog* self, QRegion* mask ```
void q_printdialog_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QPrintDialog* self ```
QRegion* q_printdialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QPrintDialog* self ```
void q_printdialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintDialog* self, QPaintDevice* target ```
void q_printdialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintDialog* self, QPainter* painter ```
void q_printdialog_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QPrintDialog* self ```
QPixmap* q_printdialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QPrintDialog* self ```
QGraphicsEffect* q_printdialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QPrintDialog* self, QGraphicsEffect* effect ```
void q_printdialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QPrintDialog* self, enum Qt__GestureType typeVal ```
void q_printdialog_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QPrintDialog* self, enum Qt__GestureType typeVal ```
void q_printdialog_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QPrintDialog* self, const char* windowTitle ```
void q_printdialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QPrintDialog* self, const char* styleSheet ```
void q_printdialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QPrintDialog* self ```
const char* q_printdialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QPrintDialog* self ```
const char* q_printdialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QPrintDialog* self, QIcon* icon ```
void q_printdialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QPrintDialog* self ```
QIcon* q_printdialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QPrintDialog* self, const char* windowIconText ```
void q_printdialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QPrintDialog* self ```
const char* q_printdialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QPrintDialog* self, const char* windowRole ```
void q_printdialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QPrintDialog* self ```
const char* q_printdialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QPrintDialog* self, const char* filePath ```
void q_printdialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QPrintDialog* self ```
const char* q_printdialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QPrintDialog* self, double level ```
void q_printdialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QPrintDialog* self ```
double q_printdialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QPrintDialog* self ```
bool q_printdialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QPrintDialog* self, const char* toolTip ```
void q_printdialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QPrintDialog* self ```
const char* q_printdialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QPrintDialog* self, int msec ```
void q_printdialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QPrintDialog* self ```
int32_t q_printdialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QPrintDialog* self, const char* statusTip ```
void q_printdialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QPrintDialog* self ```
const char* q_printdialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QPrintDialog* self, const char* whatsThis ```
void q_printdialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QPrintDialog* self ```
const char* q_printdialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QPrintDialog* self ```
const char* q_printdialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QPrintDialog* self, const char* name ```
void q_printdialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QPrintDialog* self ```
const char* q_printdialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QPrintDialog* self, const char* description ```
void q_printdialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QPrintDialog* self, enum Qt__LayoutDirection direction ```
void q_printdialog_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QPrintDialog* self ```
int64_t q_printdialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QPrintDialog* self ```
void q_printdialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QPrintDialog* self, QLocale* locale ```
void q_printdialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QPrintDialog* self ```
QLocale* q_printdialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QPrintDialog* self ```
void q_printdialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QPrintDialog* self ```
bool q_printdialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QPrintDialog* self ```
bool q_printdialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QPrintDialog* self ```
void q_printdialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QPrintDialog* self ```
bool q_printdialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QPrintDialog* self ```
void q_printdialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QPrintDialog* self ```
void q_printdialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QPrintDialog* self, enum Qt__FocusReason reason ```
void q_printdialog_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QPrintDialog* self ```
int64_t q_printdialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QPrintDialog* self, enum Qt__FocusPolicy policy ```
void q_printdialog_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QPrintDialog* self ```
bool q_printdialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_printdialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QPrintDialog* self, QWidget* focusProxy ```
void q_printdialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QPrintDialog* self ```
QWidget* q_printdialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QPrintDialog* self ```
int64_t q_printdialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QPrintDialog* self, enum Qt__ContextMenuPolicy policy ```
void q_printdialog_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QPrintDialog* self ```
void q_printdialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QPrintDialog* self, QCursor* param1 ```
void q_printdialog_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QPrintDialog* self ```
void q_printdialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QPrintDialog* self ```
void q_printdialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QPrintDialog* self ```
void q_printdialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QPrintDialog* self, QKeySequence* key ```
int32_t q_printdialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QPrintDialog* self, int id ```
void q_printdialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QPrintDialog* self, int id ```
void q_printdialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QPrintDialog* self, int id ```
void q_printdialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_printdialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_printdialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QPrintDialog* self ```
bool q_printdialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QPrintDialog* self, bool enable ```
void q_printdialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QPrintDialog* self ```
QGraphicsProxyWidget* q_printdialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPrintDialog* self ```
void q_printdialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPrintDialog* self ```
void q_printdialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPrintDialog* self, int x, int y, int w, int h ```
void q_printdialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPrintDialog* self, QRect* param1 ```
void q_printdialog_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPrintDialog* self, QRegion* param1 ```
void q_printdialog_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPrintDialog* self, int x, int y, int w, int h ```
void q_printdialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPrintDialog* self, QRect* param1 ```
void q_printdialog_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPrintDialog* self, QRegion* param1 ```
void q_printdialog_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QPrintDialog* self, bool hidden ```
void q_printdialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QPrintDialog* self ```
void q_printdialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QPrintDialog* self ```
void q_printdialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QPrintDialog* self ```
void q_printdialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QPrintDialog* self ```
void q_printdialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QPrintDialog* self ```
void q_printdialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QPrintDialog* self ```
void q_printdialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QPrintDialog* self ```
bool q_printdialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QPrintDialog* self ```
void q_printdialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QPrintDialog* self ```
void q_printdialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QPrintDialog* self, QWidget* param1 ```
void q_printdialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QPrintDialog* self, int x, int y ```
void q_printdialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QPrintDialog* self, QPoint* param1 ```
void q_printdialog_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QPrintDialog* self, int w, int h ```
void q_printdialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QPrintDialog* self, QSize* param1 ```
void q_printdialog_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QPrintDialog* self, int x, int y, int w, int h ```
void q_printdialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QPrintDialog* self, QRect* geometry ```
void q_printdialog_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QPrintDialog* self ```
char* q_printdialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QPrintDialog* self, const char* geometry ```
bool q_printdialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QPrintDialog* self ```
void q_printdialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QPrintDialog* self ```
bool q_printdialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QPrintDialog* self, QWidget* param1 ```
bool q_printdialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QPrintDialog* self ```
bool q_printdialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QPrintDialog* self ```
bool q_printdialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QPrintDialog* self ```
bool q_printdialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QPrintDialog* self ```
bool q_printdialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QPrintDialog* self ```
int64_t q_printdialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QPrintDialog* self, int state ```
void q_printdialog_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QPrintDialog* self, int state ```
void q_printdialog_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QPrintDialog* self ```
QSizePolicy* q_printdialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QPrintDialog* self, QSizePolicy* sizePolicy ```
void q_printdialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QPrintDialog* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_printdialog_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QPrintDialog* self ```
QRegion* q_printdialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QPrintDialog* self, int left, int top, int right, int bottom ```
void q_printdialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QPrintDialog* self, QMargins* margins ```
void q_printdialog_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QPrintDialog* self ```
QMargins* q_printdialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QPrintDialog* self ```
QRect* q_printdialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QPrintDialog* self ```
QLayout* q_printdialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QPrintDialog* self, QLayout* layout ```
void q_printdialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QPrintDialog* self ```
void q_printdialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QPrintDialog* self, QWidget* parent ```
void q_printdialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QPrintDialog* self, QWidget* parent, int f ```
void q_printdialog_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QPrintDialog* self, int dx, int dy ```
void q_printdialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QPrintDialog* self, int dx, int dy, QRect* param3 ```
void q_printdialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QPrintDialog* self ```
QWidget* q_printdialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QPrintDialog* self ```
QWidget* q_printdialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QPrintDialog* self ```
QWidget* q_printdialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QPrintDialog* self ```
bool q_printdialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QPrintDialog* self, bool on ```
void q_printdialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPrintDialog* self, QAction* action ```
void q_printdialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QPrintDialog* self, QAction* actions[] ```
void q_printdialog_add_actions(void* self, void* actions[]) {
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
/// ``` QPrintDialog* self, QAction* before, QAction* actions[] ```
void q_printdialog_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QPrintDialog* self, QAction* before, QAction* action ```
void q_printdialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QPrintDialog* self, QAction* action ```
void q_printdialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QPrintDialog* self ```
libqt_list /* of QAction* */ q_printdialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPrintDialog* self, const char* text ```
QAction* q_printdialog_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPrintDialog* self, QIcon* icon, const char* text ```
QAction* q_printdialog_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPrintDialog* self, const char* text, QKeySequence* shortcut ```
QAction* q_printdialog_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPrintDialog* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_printdialog_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QPrintDialog* self ```
QWidget* q_printdialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QPrintDialog* self, int typeVal ```
void q_printdialog_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QPrintDialog* self ```
int64_t q_printdialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QPrintDialog* self, enum Qt__WindowType param1 ```
void q_printdialog_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QPrintDialog* self, int typeVal ```
void q_printdialog_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QPrintDialog* self ```
int64_t q_printdialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_printdialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QPrintDialog* self, int x, int y ```
QWidget* q_printdialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QPrintDialog* self, QPoint* p ```
QWidget* q_printdialog_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QPrintDialog* self, enum Qt__WidgetAttribute param1 ```
void q_printdialog_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QPrintDialog* self, enum Qt__WidgetAttribute param1 ```
bool q_printdialog_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QPrintDialog* self ```
void q_printdialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QPrintDialog* self, QWidget* child ```
bool q_printdialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QPrintDialog* self ```
bool q_printdialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QPrintDialog* self, bool enabled ```
void q_printdialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QPrintDialog* self ```
QBackingStore* q_printdialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QPrintDialog* self ```
QWindow* q_printdialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QPrintDialog* self ```
QScreen* q_printdialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QPrintDialog* self, QScreen* screen ```
void q_printdialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_printdialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QPrintDialog* self, const char* title ```
void q_printdialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QPrintDialog* self, void (*slot)(QWidget*, const char*) ```
void q_printdialog_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QPrintDialog* self, QIcon* icon ```
void q_printdialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QPrintDialog* self, void (*slot)(QWidget*, QIcon*) ```
void q_printdialog_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QPrintDialog* self, const char* iconText ```
void q_printdialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QPrintDialog* self, void (*slot)(QWidget*, const char*) ```
void q_printdialog_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QPrintDialog* self, QPoint* pos ```
void q_printdialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QPrintDialog* self, void (*slot)(QWidget*, QPoint*) ```
void q_printdialog_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QPrintDialog* self ```
int64_t q_printdialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QPrintDialog* self, int hints ```
void q_printdialog_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintDialog* self, QPaintDevice* target, QPoint* targetOffset ```
void q_printdialog_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintDialog* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_printdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintDialog* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_printdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintDialog* self, QPainter* painter, QPoint* targetOffset ```
void q_printdialog_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintDialog* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_printdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintDialog* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_printdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QPrintDialog* self, QRect* rectangle ```
QPixmap* q_printdialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QPrintDialog* self, enum Qt__GestureType typeVal, int flags ```
void q_printdialog_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QPrintDialog* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_printdialog_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QPrintDialog* self, int id, bool enable ```
void q_printdialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QPrintDialog* self, int id, bool enable ```
void q_printdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QPrintDialog* self, enum Qt__WindowType param1, bool on ```
void q_printdialog_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QPrintDialog* self, enum Qt__WidgetAttribute param1, bool on ```
void q_printdialog_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_printdialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_printdialog_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPrintDialog* self ```
const char* q_printdialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPrintDialog* self, const char* name ```
void q_printdialog_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPrintDialog* self ```
bool q_printdialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPrintDialog* self ```
bool q_printdialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPrintDialog* self ```
bool q_printdialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPrintDialog* self ```
bool q_printdialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPrintDialog* self, bool b ```
bool q_printdialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPrintDialog* self ```
QThread* q_printdialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPrintDialog* self, QThread* thread ```
void q_printdialog_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPrintDialog* self, int interval ```
int32_t q_printdialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPrintDialog* self, int id ```
void q_printdialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPrintDialog* self ```
libqt_list /* of QObject* */ q_printdialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPrintDialog* self, QObject* filterObj ```
void q_printdialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPrintDialog* self, QObject* obj ```
void q_printdialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_printdialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPrintDialog* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_printdialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_printdialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_printdialog_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPrintDialog* self ```
void q_printdialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPrintDialog* self ```
void q_printdialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPrintDialog* self, const char* name, QVariant* value ```
bool q_printdialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPrintDialog* self, const char* name ```
QVariant* q_printdialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPrintDialog* self ```
const char** q_printdialog_dynamic_property_names(void* self) {
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
/// ``` QPrintDialog* self ```
QBindingStorage* q_printdialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPrintDialog* self ```
QBindingStorage* q_printdialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPrintDialog* self ```
void q_printdialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QPrintDialog* self, void (*slot)(QObject*) ```
void q_printdialog_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPrintDialog* self ```
QObject* q_printdialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPrintDialog* self, const char* classname ```
bool q_printdialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPrintDialog* self ```
void q_printdialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPrintDialog* self, int interval, enum Qt__TimerType timerType ```
int32_t q_printdialog_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_printdialog_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPrintDialog* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_printdialog_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPrintDialog* self, QObject* param1 ```
void q_printdialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QPrintDialog* self, void (*slot)(QObject*, QObject*) ```
void q_printdialog_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QPrintDialog* self ```
bool q_printdialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QPrintDialog* self ```
int32_t q_printdialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QPrintDialog* self ```
int32_t q_printdialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QPrintDialog* self ```
int32_t q_printdialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QPrintDialog* self ```
int32_t q_printdialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QPrintDialog* self ```
int32_t q_printdialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QPrintDialog* self ```
int32_t q_printdialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QPrintDialog* self ```
double q_printdialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QPrintDialog* self ```
double q_printdialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QPrintDialog* self ```
int32_t q_printdialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QPrintDialog* self ```
int32_t q_printdialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_printdialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self ```
QSize* q_printdialog_size_hint(void* self) {
    return QPrintDialog_SizeHint((QPrintDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self ```
QSize* q_printdialog_qbase_size_hint(void* self) {
    return QPrintDialog_QBaseSizeHint((QPrintDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, QSize* (*slot)() ```
void q_printdialog_on_size_hint(void* self, QSize* (*slot)()) {
    QPrintDialog_OnSizeHint((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self ```
QSize* q_printdialog_minimum_size_hint(void* self) {
    return QPrintDialog_MinimumSizeHint((QPrintDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self ```
QSize* q_printdialog_qbase_minimum_size_hint(void* self) {
    return QPrintDialog_QBaseMinimumSizeHint((QPrintDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, QSize* (*slot)() ```
void q_printdialog_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QPrintDialog_OnMinimumSizeHint((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self ```
void q_printdialog_open(void* self) {
    QPrintDialog_Open((QPrintDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self ```
void q_printdialog_qbase_open(void* self) {
    QPrintDialog_QBaseOpen((QPrintDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)() ```
void q_printdialog_on_open(void* self, void (*slot)()) {
    QPrintDialog_OnOpen((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self ```
void q_printdialog_reject(void* self) {
    QPrintDialog_Reject((QPrintDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self ```
void q_printdialog_qbase_reject(void* self) {
    QPrintDialog_QBaseReject((QPrintDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)() ```
void q_printdialog_on_reject(void* self, void (*slot)()) {
    QPrintDialog_OnReject((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QKeyEvent* param1 ```
void q_printdialog_key_press_event(void* self, void* param1) {
    QPrintDialog_KeyPressEvent((QPrintDialog*)self, (QKeyEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QKeyEvent* param1 ```
void q_printdialog_qbase_key_press_event(void* self, void* param1) {
    QPrintDialog_QBaseKeyPressEvent((QPrintDialog*)self, (QKeyEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QKeyEvent*) ```
void q_printdialog_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnKeyPressEvent((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QCloseEvent* param1 ```
void q_printdialog_close_event(void* self, void* param1) {
    QPrintDialog_CloseEvent((QPrintDialog*)self, (QCloseEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QCloseEvent* param1 ```
void q_printdialog_qbase_close_event(void* self, void* param1) {
    QPrintDialog_QBaseCloseEvent((QPrintDialog*)self, (QCloseEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QCloseEvent*) ```
void q_printdialog_on_close_event(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnCloseEvent((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QShowEvent* param1 ```
void q_printdialog_show_event(void* self, void* param1) {
    QPrintDialog_ShowEvent((QPrintDialog*)self, (QShowEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QShowEvent* param1 ```
void q_printdialog_qbase_show_event(void* self, void* param1) {
    QPrintDialog_QBaseShowEvent((QPrintDialog*)self, (QShowEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QShowEvent*) ```
void q_printdialog_on_show_event(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnShowEvent((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QResizeEvent* param1 ```
void q_printdialog_resize_event(void* self, void* param1) {
    QPrintDialog_ResizeEvent((QPrintDialog*)self, (QResizeEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QResizeEvent* param1 ```
void q_printdialog_qbase_resize_event(void* self, void* param1) {
    QPrintDialog_QBaseResizeEvent((QPrintDialog*)self, (QResizeEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QResizeEvent*) ```
void q_printdialog_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnResizeEvent((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QContextMenuEvent* param1 ```
void q_printdialog_context_menu_event(void* self, void* param1) {
    QPrintDialog_ContextMenuEvent((QPrintDialog*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QContextMenuEvent* param1 ```
void q_printdialog_qbase_context_menu_event(void* self, void* param1) {
    QPrintDialog_QBaseContextMenuEvent((QPrintDialog*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QContextMenuEvent*) ```
void q_printdialog_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnContextMenuEvent((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QObject* param1, QEvent* param2 ```
bool q_printdialog_event_filter(void* self, void* param1, void* param2) {
    return QPrintDialog_EventFilter((QPrintDialog*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QObject* param1, QEvent* param2 ```
bool q_printdialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return QPrintDialog_QBaseEventFilter((QPrintDialog*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, bool (*slot)(QPrintDialog*, QObject*, QEvent*) ```
void q_printdialog_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QPrintDialog_OnEventFilter((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self ```
int32_t q_printdialog_dev_type(void* self) {
    return QPrintDialog_DevType((QPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self ```
int32_t q_printdialog_qbase_dev_type(void* self) {
    return QPrintDialog_QBaseDevType((QPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, int32_t (*slot)() ```
void q_printdialog_on_dev_type(void* self, int32_t (*slot)()) {
    QPrintDialog_OnDevType((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, int param1 ```
int32_t q_printdialog_height_for_width(void* self, int param1) {
    return QPrintDialog_HeightForWidth((QPrintDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, int param1 ```
int32_t q_printdialog_qbase_height_for_width(void* self, int param1) {
    return QPrintDialog_QBaseHeightForWidth((QPrintDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, int32_t (*slot)(QPrintDialog*, int) ```
void q_printdialog_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QPrintDialog_OnHeightForWidth((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self ```
bool q_printdialog_has_height_for_width(void* self) {
    return QPrintDialog_HasHeightForWidth((QPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self ```
bool q_printdialog_qbase_has_height_for_width(void* self) {
    return QPrintDialog_QBaseHasHeightForWidth((QPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, bool (*slot)() ```
void q_printdialog_on_has_height_for_width(void* self, bool (*slot)()) {
    QPrintDialog_OnHasHeightForWidth((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self ```
QPaintEngine* q_printdialog_paint_engine(void* self) {
    return QPrintDialog_PaintEngine((QPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self ```
QPaintEngine* q_printdialog_qbase_paint_engine(void* self) {
    return QPrintDialog_QBasePaintEngine((QPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, QPaintEngine* (*slot)() ```
void q_printdialog_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QPrintDialog_OnPaintEngine((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QEvent* event ```
bool q_printdialog_event(void* self, void* event) {
    return QPrintDialog_Event((QPrintDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QEvent* event ```
bool q_printdialog_qbase_event(void* self, void* event) {
    return QPrintDialog_QBaseEvent((QPrintDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, bool (*slot)(QPrintDialog*, QEvent*) ```
void q_printdialog_on_event(void* self, bool (*slot)(void*, void*)) {
    QPrintDialog_OnEvent((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QMouseEvent* event ```
void q_printdialog_mouse_press_event(void* self, void* event) {
    QPrintDialog_MousePressEvent((QPrintDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QMouseEvent* event ```
void q_printdialog_qbase_mouse_press_event(void* self, void* event) {
    QPrintDialog_QBaseMousePressEvent((QPrintDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QMouseEvent*) ```
void q_printdialog_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnMousePressEvent((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QMouseEvent* event ```
void q_printdialog_mouse_release_event(void* self, void* event) {
    QPrintDialog_MouseReleaseEvent((QPrintDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QMouseEvent* event ```
void q_printdialog_qbase_mouse_release_event(void* self, void* event) {
    QPrintDialog_QBaseMouseReleaseEvent((QPrintDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QMouseEvent*) ```
void q_printdialog_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnMouseReleaseEvent((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QMouseEvent* event ```
void q_printdialog_mouse_double_click_event(void* self, void* event) {
    QPrintDialog_MouseDoubleClickEvent((QPrintDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QMouseEvent* event ```
void q_printdialog_qbase_mouse_double_click_event(void* self, void* event) {
    QPrintDialog_QBaseMouseDoubleClickEvent((QPrintDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QMouseEvent*) ```
void q_printdialog_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnMouseDoubleClickEvent((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QMouseEvent* event ```
void q_printdialog_mouse_move_event(void* self, void* event) {
    QPrintDialog_MouseMoveEvent((QPrintDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QMouseEvent* event ```
void q_printdialog_qbase_mouse_move_event(void* self, void* event) {
    QPrintDialog_QBaseMouseMoveEvent((QPrintDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QMouseEvent*) ```
void q_printdialog_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnMouseMoveEvent((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QWheelEvent* event ```
void q_printdialog_wheel_event(void* self, void* event) {
    QPrintDialog_WheelEvent((QPrintDialog*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QWheelEvent* event ```
void q_printdialog_qbase_wheel_event(void* self, void* event) {
    QPrintDialog_QBaseWheelEvent((QPrintDialog*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QWheelEvent*) ```
void q_printdialog_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnWheelEvent((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QKeyEvent* event ```
void q_printdialog_key_release_event(void* self, void* event) {
    QPrintDialog_KeyReleaseEvent((QPrintDialog*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QKeyEvent* event ```
void q_printdialog_qbase_key_release_event(void* self, void* event) {
    QPrintDialog_QBaseKeyReleaseEvent((QPrintDialog*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QKeyEvent*) ```
void q_printdialog_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnKeyReleaseEvent((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QFocusEvent* event ```
void q_printdialog_focus_in_event(void* self, void* event) {
    QPrintDialog_FocusInEvent((QPrintDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QFocusEvent* event ```
void q_printdialog_qbase_focus_in_event(void* self, void* event) {
    QPrintDialog_QBaseFocusInEvent((QPrintDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QFocusEvent*) ```
void q_printdialog_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnFocusInEvent((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QFocusEvent* event ```
void q_printdialog_focus_out_event(void* self, void* event) {
    QPrintDialog_FocusOutEvent((QPrintDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QFocusEvent* event ```
void q_printdialog_qbase_focus_out_event(void* self, void* event) {
    QPrintDialog_QBaseFocusOutEvent((QPrintDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QFocusEvent*) ```
void q_printdialog_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnFocusOutEvent((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QEnterEvent* event ```
void q_printdialog_enter_event(void* self, void* event) {
    QPrintDialog_EnterEvent((QPrintDialog*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QEnterEvent* event ```
void q_printdialog_qbase_enter_event(void* self, void* event) {
    QPrintDialog_QBaseEnterEvent((QPrintDialog*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QEnterEvent*) ```
void q_printdialog_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnEnterEvent((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QEvent* event ```
void q_printdialog_leave_event(void* self, void* event) {
    QPrintDialog_LeaveEvent((QPrintDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QEvent* event ```
void q_printdialog_qbase_leave_event(void* self, void* event) {
    QPrintDialog_QBaseLeaveEvent((QPrintDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QEvent*) ```
void q_printdialog_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnLeaveEvent((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QPaintEvent* event ```
void q_printdialog_paint_event(void* self, void* event) {
    QPrintDialog_PaintEvent((QPrintDialog*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QPaintEvent* event ```
void q_printdialog_qbase_paint_event(void* self, void* event) {
    QPrintDialog_QBasePaintEvent((QPrintDialog*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QPaintEvent*) ```
void q_printdialog_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnPaintEvent((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QMoveEvent* event ```
void q_printdialog_move_event(void* self, void* event) {
    QPrintDialog_MoveEvent((QPrintDialog*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QMoveEvent* event ```
void q_printdialog_qbase_move_event(void* self, void* event) {
    QPrintDialog_QBaseMoveEvent((QPrintDialog*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QMoveEvent*) ```
void q_printdialog_on_move_event(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnMoveEvent((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QTabletEvent* event ```
void q_printdialog_tablet_event(void* self, void* event) {
    QPrintDialog_TabletEvent((QPrintDialog*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QTabletEvent* event ```
void q_printdialog_qbase_tablet_event(void* self, void* event) {
    QPrintDialog_QBaseTabletEvent((QPrintDialog*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QTabletEvent*) ```
void q_printdialog_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnTabletEvent((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QActionEvent* event ```
void q_printdialog_action_event(void* self, void* event) {
    QPrintDialog_ActionEvent((QPrintDialog*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QActionEvent* event ```
void q_printdialog_qbase_action_event(void* self, void* event) {
    QPrintDialog_QBaseActionEvent((QPrintDialog*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QActionEvent*) ```
void q_printdialog_on_action_event(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnActionEvent((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QDragEnterEvent* event ```
void q_printdialog_drag_enter_event(void* self, void* event) {
    QPrintDialog_DragEnterEvent((QPrintDialog*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QDragEnterEvent* event ```
void q_printdialog_qbase_drag_enter_event(void* self, void* event) {
    QPrintDialog_QBaseDragEnterEvent((QPrintDialog*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QDragEnterEvent*) ```
void q_printdialog_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnDragEnterEvent((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QDragMoveEvent* event ```
void q_printdialog_drag_move_event(void* self, void* event) {
    QPrintDialog_DragMoveEvent((QPrintDialog*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QDragMoveEvent* event ```
void q_printdialog_qbase_drag_move_event(void* self, void* event) {
    QPrintDialog_QBaseDragMoveEvent((QPrintDialog*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QDragMoveEvent*) ```
void q_printdialog_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnDragMoveEvent((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QDragLeaveEvent* event ```
void q_printdialog_drag_leave_event(void* self, void* event) {
    QPrintDialog_DragLeaveEvent((QPrintDialog*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QDragLeaveEvent* event ```
void q_printdialog_qbase_drag_leave_event(void* self, void* event) {
    QPrintDialog_QBaseDragLeaveEvent((QPrintDialog*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QDragLeaveEvent*) ```
void q_printdialog_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnDragLeaveEvent((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QDropEvent* event ```
void q_printdialog_drop_event(void* self, void* event) {
    QPrintDialog_DropEvent((QPrintDialog*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QDropEvent* event ```
void q_printdialog_qbase_drop_event(void* self, void* event) {
    QPrintDialog_QBaseDropEvent((QPrintDialog*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QDropEvent*) ```
void q_printdialog_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnDropEvent((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QHideEvent* event ```
void q_printdialog_hide_event(void* self, void* event) {
    QPrintDialog_HideEvent((QPrintDialog*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QHideEvent* event ```
void q_printdialog_qbase_hide_event(void* self, void* event) {
    QPrintDialog_QBaseHideEvent((QPrintDialog*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QHideEvent*) ```
void q_printdialog_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnHideEvent((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, const char* eventType, void* message, intptr_t* result ```
bool q_printdialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QPrintDialog_NativeEvent((QPrintDialog*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, const char* eventType, void* message, intptr_t* result ```
bool q_printdialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QPrintDialog_QBaseNativeEvent((QPrintDialog*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, bool (*slot)(QPrintDialog*, const char*, void*, intptr_t*) ```
void q_printdialog_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QPrintDialog_OnNativeEvent((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QEvent* param1 ```
void q_printdialog_change_event(void* self, void* param1) {
    QPrintDialog_ChangeEvent((QPrintDialog*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QEvent* param1 ```
void q_printdialog_qbase_change_event(void* self, void* param1) {
    QPrintDialog_QBaseChangeEvent((QPrintDialog*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QEvent*) ```
void q_printdialog_on_change_event(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnChangeEvent((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_printdialog_metric(void* self, int64_t param1) {
    return QPrintDialog_Metric((QPrintDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_printdialog_qbase_metric(void* self, int64_t param1) {
    return QPrintDialog_QBaseMetric((QPrintDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, int32_t (*slot)(QPrintDialog*, enum QPaintDevice__PaintDeviceMetric) ```
void q_printdialog_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QPrintDialog_OnMetric((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QPainter* painter ```
void q_printdialog_init_painter(void* self, void* painter) {
    QPrintDialog_InitPainter((QPrintDialog*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QPainter* painter ```
void q_printdialog_qbase_init_painter(void* self, void* painter) {
    QPrintDialog_QBaseInitPainter((QPrintDialog*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QPainter*) ```
void q_printdialog_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnInitPainter((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QPoint* offset ```
QPaintDevice* q_printdialog_redirected(void* self, void* offset) {
    return QPrintDialog_Redirected((QPrintDialog*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QPoint* offset ```
QPaintDevice* q_printdialog_qbase_redirected(void* self, void* offset) {
    return QPrintDialog_QBaseRedirected((QPrintDialog*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, QPaintDevice* (*slot)(QPrintDialog*, QPoint*) ```
void q_printdialog_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QPrintDialog_OnRedirected((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self ```
QPainter* q_printdialog_shared_painter(void* self) {
    return QPrintDialog_SharedPainter((QPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self ```
QPainter* q_printdialog_qbase_shared_painter(void* self) {
    return QPrintDialog_QBaseSharedPainter((QPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, QPainter* (*slot)() ```
void q_printdialog_on_shared_painter(void* self, QPainter* (*slot)()) {
    QPrintDialog_OnSharedPainter((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QInputMethodEvent* param1 ```
void q_printdialog_input_method_event(void* self, void* param1) {
    QPrintDialog_InputMethodEvent((QPrintDialog*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QInputMethodEvent* param1 ```
void q_printdialog_qbase_input_method_event(void* self, void* param1) {
    QPrintDialog_QBaseInputMethodEvent((QPrintDialog*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QInputMethodEvent*) ```
void q_printdialog_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnInputMethodEvent((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_printdialog_input_method_query(void* self, int64_t param1) {
    return QPrintDialog_InputMethodQuery((QPrintDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_printdialog_qbase_input_method_query(void* self, int64_t param1) {
    return QPrintDialog_QBaseInputMethodQuery((QPrintDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, QVariant* (*slot)(QPrintDialog*, enum Qt__InputMethodQuery) ```
void q_printdialog_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QPrintDialog_OnInputMethodQuery((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, bool next ```
bool q_printdialog_focus_next_prev_child(void* self, bool next) {
    return QPrintDialog_FocusNextPrevChild((QPrintDialog*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, bool next ```
bool q_printdialog_qbase_focus_next_prev_child(void* self, bool next) {
    return QPrintDialog_QBaseFocusNextPrevChild((QPrintDialog*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, bool (*slot)(QPrintDialog*, bool) ```
void q_printdialog_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QPrintDialog_OnFocusNextPrevChild((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QTimerEvent* event ```
void q_printdialog_timer_event(void* self, void* event) {
    QPrintDialog_TimerEvent((QPrintDialog*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QTimerEvent* event ```
void q_printdialog_qbase_timer_event(void* self, void* event) {
    QPrintDialog_QBaseTimerEvent((QPrintDialog*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QTimerEvent*) ```
void q_printdialog_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnTimerEvent((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QChildEvent* event ```
void q_printdialog_child_event(void* self, void* event) {
    QPrintDialog_ChildEvent((QPrintDialog*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QChildEvent* event ```
void q_printdialog_qbase_child_event(void* self, void* event) {
    QPrintDialog_QBaseChildEvent((QPrintDialog*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QChildEvent*) ```
void q_printdialog_on_child_event(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnChildEvent((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QEvent* event ```
void q_printdialog_custom_event(void* self, void* event) {
    QPrintDialog_CustomEvent((QPrintDialog*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QEvent* event ```
void q_printdialog_qbase_custom_event(void* self, void* event) {
    QPrintDialog_QBaseCustomEvent((QPrintDialog*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QEvent*) ```
void q_printdialog_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnCustomEvent((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QMetaMethod* signal ```
void q_printdialog_connect_notify(void* self, void* signal) {
    QPrintDialog_ConnectNotify((QPrintDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QMetaMethod* signal ```
void q_printdialog_qbase_connect_notify(void* self, void* signal) {
    QPrintDialog_QBaseConnectNotify((QPrintDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QMetaMethod*) ```
void q_printdialog_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnConnectNotify((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QMetaMethod* signal ```
void q_printdialog_disconnect_notify(void* self, void* signal) {
    QPrintDialog_DisconnectNotify((QPrintDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QMetaMethod* signal ```
void q_printdialog_qbase_disconnect_notify(void* self, void* signal) {
    QPrintDialog_QBaseDisconnectNotify((QPrintDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QMetaMethod*) ```
void q_printdialog_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnDisconnectNotify((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QWidget* param1 ```
void q_printdialog_adjust_position(void* self, void* param1) {
    QPrintDialog_AdjustPosition((QPrintDialog*)self, (QWidget*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QWidget* param1 ```
void q_printdialog_qbase_adjust_position(void* self, void* param1) {
    QPrintDialog_QBaseAdjustPosition((QPrintDialog*)self, (QWidget*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)(QPrintDialog*, QWidget*) ```
void q_printdialog_on_adjust_position(void* self, void (*slot)(void*, void*)) {
    QPrintDialog_OnAdjustPosition((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self ```
void q_printdialog_update_micro_focus(void* self) {
    QPrintDialog_UpdateMicroFocus((QPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self ```
void q_printdialog_qbase_update_micro_focus(void* self) {
    QPrintDialog_QBaseUpdateMicroFocus((QPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)() ```
void q_printdialog_on_update_micro_focus(void* self, void (*slot)()) {
    QPrintDialog_OnUpdateMicroFocus((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self ```
void q_printdialog_create(void* self) {
    QPrintDialog_Create((QPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self ```
void q_printdialog_qbase_create(void* self) {
    QPrintDialog_QBaseCreate((QPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)() ```
void q_printdialog_on_create(void* self, void (*slot)()) {
    QPrintDialog_OnCreate((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self ```
void q_printdialog_destroy(void* self) {
    QPrintDialog_Destroy((QPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self ```
void q_printdialog_qbase_destroy(void* self) {
    QPrintDialog_QBaseDestroy((QPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, void (*slot)() ```
void q_printdialog_on_destroy(void* self, void (*slot)()) {
    QPrintDialog_OnDestroy((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self ```
bool q_printdialog_focus_next_child(void* self) {
    return QPrintDialog_FocusNextChild((QPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self ```
bool q_printdialog_qbase_focus_next_child(void* self) {
    return QPrintDialog_QBaseFocusNextChild((QPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, bool (*slot)() ```
void q_printdialog_on_focus_next_child(void* self, bool (*slot)()) {
    QPrintDialog_OnFocusNextChild((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self ```
bool q_printdialog_focus_previous_child(void* self) {
    return QPrintDialog_FocusPreviousChild((QPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self ```
bool q_printdialog_qbase_focus_previous_child(void* self) {
    return QPrintDialog_QBaseFocusPreviousChild((QPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, bool (*slot)() ```
void q_printdialog_on_focus_previous_child(void* self, bool (*slot)()) {
    QPrintDialog_OnFocusPreviousChild((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self ```
QObject* q_printdialog_sender(void* self) {
    return QPrintDialog_Sender((QPrintDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self ```
QObject* q_printdialog_qbase_sender(void* self) {
    return QPrintDialog_QBaseSender((QPrintDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, QObject* (*slot)() ```
void q_printdialog_on_sender(void* self, QObject* (*slot)()) {
    QPrintDialog_OnSender((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self ```
int32_t q_printdialog_sender_signal_index(void* self) {
    return QPrintDialog_SenderSignalIndex((QPrintDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self ```
int32_t q_printdialog_qbase_sender_signal_index(void* self) {
    return QPrintDialog_QBaseSenderSignalIndex((QPrintDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, int32_t (*slot)() ```
void q_printdialog_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QPrintDialog_OnSenderSignalIndex((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, const char* signal ```
int32_t q_printdialog_receivers(void* self, const char* signal) {
    return QPrintDialog_Receivers((QPrintDialog*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, const char* signal ```
int32_t q_printdialog_qbase_receivers(void* self, const char* signal) {
    return QPrintDialog_QBaseReceivers((QPrintDialog*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, int32_t (*slot)(QPrintDialog*, const char*) ```
void q_printdialog_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QPrintDialog_OnReceivers((QPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintDialog* self, QMetaMethod* signal ```
bool q_printdialog_is_signal_connected(void* self, void* signal) {
    return QPrintDialog_IsSignalConnected((QPrintDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintDialog* self, QMetaMethod* signal ```
bool q_printdialog_qbase_is_signal_connected(void* self, void* signal) {
    return QPrintDialog_QBaseIsSignalConnected((QPrintDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintDialog* self, bool (*slot)(QPrintDialog*, QMetaMethod*) ```
void q_printdialog_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QPrintDialog_OnIsSignalConnected((QPrintDialog*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QPrintDialog* self ```
void q_printdialog_delete(void* self) {
    QPrintDialog_Delete((QPrintDialog*)(self));
}