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
#include "libqframe.hpp"
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
#include "libqtoolbox.hpp"
#include "libqtoolbox.h"

/// https://doc.qt.io/qt-6/qtoolbox.html

/// q_toolbox_new constructs a new QToolBox object.
///
/// ``` QWidget* parent ```
QToolBox* q_toolbox_new(void* parent) {
    return QToolBox_new((QWidget*)parent);
}

/// q_toolbox_new2 constructs a new QToolBox object.
///
///
QToolBox* q_toolbox_new2() {
    return QToolBox_new2();
}

/// q_toolbox_new3 constructs a new QToolBox object.
///
/// ``` QWidget* parent, int f ```
QToolBox* q_toolbox_new3(void* parent, int64_t f) {
    return QToolBox_new3((QWidget*)parent, f);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QToolBox* self ```
QMetaObject* q_toolbox_meta_object(void* self) {
    return QToolBox_MetaObject((QToolBox*)self);
}

/// ``` QToolBox* self, const char* param1 ```
void* q_toolbox_metacast(void* self, const char* param1) {
    return QToolBox_Metacast((QToolBox*)self, param1);
}

/// ``` QToolBox* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_toolbox_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QToolBox_Metacall((QToolBox*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QToolBox* self, int32_t (*slot)(QToolBox*, enum QMetaObject__Call, int, void*) ```
void q_toolbox_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QToolBox_OnMetacall((QToolBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QToolBox* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_toolbox_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QToolBox_QBaseMetacall((QToolBox*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_toolbox_tr(const char* s) {
    libqt_string _str = QToolBox_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbox.html#addItem)
///
/// ``` QToolBox* self, QWidget* widget, const char* text ```
int32_t q_toolbox_add_item(void* self, void* widget, const char* text) {
    return QToolBox_AddItem((QToolBox*)self, (QWidget*)widget, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbox.html#addItem)
///
/// ``` QToolBox* self, QWidget* widget, QIcon* icon, const char* text ```
int32_t q_toolbox_add_item2(void* self, void* widget, void* icon, const char* text) {
    return QToolBox_AddItem2((QToolBox*)self, (QWidget*)widget, (QIcon*)icon, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbox.html#insertItem)
///
/// ``` QToolBox* self, int index, QWidget* widget, const char* text ```
int32_t q_toolbox_insert_item(void* self, int index, void* widget, const char* text) {
    return QToolBox_InsertItem((QToolBox*)self, index, (QWidget*)widget, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbox.html#insertItem)
///
/// ``` QToolBox* self, int index, QWidget* widget, QIcon* icon, const char* text ```
int32_t q_toolbox_insert_item2(void* self, int index, void* widget, void* icon, const char* text) {
    return QToolBox_InsertItem2((QToolBox*)self, index, (QWidget*)widget, (QIcon*)icon, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbox.html#removeItem)
///
/// ``` QToolBox* self, int index ```
void q_toolbox_remove_item(void* self, int index) {
    QToolBox_RemoveItem((QToolBox*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbox.html#setItemEnabled)
///
/// ``` QToolBox* self, int index, bool enabled ```
void q_toolbox_set_item_enabled(void* self, int index, bool enabled) {
    QToolBox_SetItemEnabled((QToolBox*)self, index, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbox.html#isItemEnabled)
///
/// ``` QToolBox* self, int index ```
bool q_toolbox_is_item_enabled(void* self, int index) {
    return QToolBox_IsItemEnabled((QToolBox*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbox.html#setItemText)
///
/// ``` QToolBox* self, int index, const char* text ```
void q_toolbox_set_item_text(void* self, int index, const char* text) {
    QToolBox_SetItemText((QToolBox*)self, index, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbox.html#itemText)
///
/// ``` QToolBox* self, int index ```
const char* q_toolbox_item_text(void* self, int index) {
    libqt_string _str = QToolBox_ItemText((QToolBox*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbox.html#setItemIcon)
///
/// ``` QToolBox* self, int index, QIcon* icon ```
void q_toolbox_set_item_icon(void* self, int index, void* icon) {
    QToolBox_SetItemIcon((QToolBox*)self, index, (QIcon*)icon);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbox.html#itemIcon)
///
/// ``` QToolBox* self, int index ```
QIcon* q_toolbox_item_icon(void* self, int index) {
    return QToolBox_ItemIcon((QToolBox*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbox.html#setItemToolTip)
///
/// ``` QToolBox* self, int index, const char* toolTip ```
void q_toolbox_set_item_tool_tip(void* self, int index, const char* toolTip) {
    QToolBox_SetItemToolTip((QToolBox*)self, index, qstring(toolTip));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbox.html#itemToolTip)
///
/// ``` QToolBox* self, int index ```
const char* q_toolbox_item_tool_tip(void* self, int index) {
    libqt_string _str = QToolBox_ItemToolTip((QToolBox*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbox.html#currentIndex)
///
/// ``` QToolBox* self ```
int32_t q_toolbox_current_index(void* self) {
    return QToolBox_CurrentIndex((QToolBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbox.html#currentWidget)
///
/// ``` QToolBox* self ```
QWidget* q_toolbox_current_widget(void* self) {
    return QToolBox_CurrentWidget((QToolBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbox.html#widget)
///
/// ``` QToolBox* self, int index ```
QWidget* q_toolbox_widget(void* self, int index) {
    return QToolBox_Widget((QToolBox*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbox.html#indexOf)
///
/// ``` QToolBox* self, QWidget* widget ```
int32_t q_toolbox_index_of(void* self, void* widget) {
    return QToolBox_IndexOf((QToolBox*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbox.html#count)
///
/// ``` QToolBox* self ```
int32_t q_toolbox_count(void* self) {
    return QToolBox_Count((QToolBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbox.html#setCurrentIndex)
///
/// ``` QToolBox* self, int index ```
void q_toolbox_set_current_index(void* self, int index) {
    QToolBox_SetCurrentIndex((QToolBox*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbox.html#setCurrentWidget)
///
/// ``` QToolBox* self, QWidget* widget ```
void q_toolbox_set_current_widget(void* self, void* widget) {
    QToolBox_SetCurrentWidget((QToolBox*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbox.html#currentChanged)
///
/// ``` QToolBox* self, int index ```
void q_toolbox_current_changed(void* self, int index) {
    QToolBox_CurrentChanged((QToolBox*)self, index);
}

/// ``` QToolBox* self, void (*slot)(QToolBox*, int) ```
void q_toolbox_on_current_changed(void* self, void (*slot)(void*, int)) {
    QToolBox_Connect_CurrentChanged((QToolBox*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbox.html#event)
///
/// ``` QToolBox* self, QEvent* e ```
bool q_toolbox_event(void* self, void* e) {
    return QToolBox_Event((QToolBox*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QToolBox* self, bool (*slot)(QToolBox*, QEvent*) ```
void q_toolbox_on_event(void* self, bool (*slot)(void*, void*)) {
    QToolBox_OnEvent((QToolBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QToolBox* self, QEvent* e ```
bool q_toolbox_qbase_event(void* self, void* e) {
    return QToolBox_QBaseEvent((QToolBox*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbox.html#itemInserted)
///
/// ``` QToolBox* self, int index ```
void q_toolbox_item_inserted(void* self, int index) {
    QToolBox_ItemInserted((QToolBox*)self, index);
}

/// Allows for overriding the related default method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, int) ```
void q_toolbox_on_item_inserted(void* self, void (*slot)(void*, int)) {
    QToolBox_OnItemInserted((QToolBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QToolBox* self, int index ```
void q_toolbox_qbase_item_inserted(void* self, int index) {
    QToolBox_QBaseItemInserted((QToolBox*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbox.html#itemRemoved)
///
/// ``` QToolBox* self, int index ```
void q_toolbox_item_removed(void* self, int index) {
    QToolBox_ItemRemoved((QToolBox*)self, index);
}

/// Allows for overriding the related default method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, int) ```
void q_toolbox_on_item_removed(void* self, void (*slot)(void*, int)) {
    QToolBox_OnItemRemoved((QToolBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QToolBox* self, int index ```
void q_toolbox_qbase_item_removed(void* self, int index) {
    QToolBox_QBaseItemRemoved((QToolBox*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbox.html#showEvent)
///
/// ``` QToolBox* self, QShowEvent* e ```
void q_toolbox_show_event(void* self, void* e) {
    QToolBox_ShowEvent((QToolBox*)self, (QShowEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QShowEvent*) ```
void q_toolbox_on_show_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnShowEvent((QToolBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QToolBox* self, QShowEvent* e ```
void q_toolbox_qbase_show_event(void* self, void* e) {
    QToolBox_QBaseShowEvent((QToolBox*)self, (QShowEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbox.html#changeEvent)
///
/// ``` QToolBox* self, QEvent* param1 ```
void q_toolbox_change_event(void* self, void* param1) {
    QToolBox_ChangeEvent((QToolBox*)self, (QEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QEvent*) ```
void q_toolbox_on_change_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnChangeEvent((QToolBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QToolBox* self, QEvent* param1 ```
void q_toolbox_qbase_change_event(void* self, void* param1) {
    QToolBox_QBaseChangeEvent((QToolBox*)self, (QEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_toolbox_tr2(const char* s, const char* c) {
    libqt_string _str = QToolBox_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_toolbox_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QToolBox_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QToolBox* self ```
int32_t q_toolbox_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QToolBox* self, int frameStyle ```
void q_toolbox_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QToolBox* self ```
int32_t q_toolbox_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QToolBox* self ```
int64_t q_toolbox_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QToolBox* self, enum QFrame__Shape frameShape ```
void q_toolbox_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QToolBox* self ```
int64_t q_toolbox_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QToolBox* self, enum QFrame__Shadow frameShadow ```
void q_toolbox_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QToolBox* self ```
int32_t q_toolbox_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QToolBox* self, int lineWidth ```
void q_toolbox_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QToolBox* self ```
int32_t q_toolbox_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QToolBox* self, int midLineWidth ```
void q_toolbox_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QToolBox* self ```
QRect* q_toolbox_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QToolBox* self, QRect* frameRect ```
void q_toolbox_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QToolBox* self ```
uintptr_t q_toolbox_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QToolBox* self ```
void q_toolbox_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QToolBox* self ```
uintptr_t q_toolbox_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QToolBox* self ```
uintptr_t q_toolbox_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QToolBox* self ```
QStyle* q_toolbox_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QToolBox* self, QStyle* style ```
void q_toolbox_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QToolBox* self ```
bool q_toolbox_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QToolBox* self ```
bool q_toolbox_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QToolBox* self ```
bool q_toolbox_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QToolBox* self ```
int64_t q_toolbox_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QToolBox* self, enum Qt__WindowModality windowModality ```
void q_toolbox_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QToolBox* self ```
bool q_toolbox_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QToolBox* self, QWidget* param1 ```
bool q_toolbox_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QToolBox* self, bool enabled ```
void q_toolbox_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QToolBox* self, bool disabled ```
void q_toolbox_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QToolBox* self, bool windowModified ```
void q_toolbox_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QToolBox* self ```
QRect* q_toolbox_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QToolBox* self ```
QRect* q_toolbox_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QToolBox* self ```
QRect* q_toolbox_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QToolBox* self ```
int32_t q_toolbox_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QToolBox* self ```
int32_t q_toolbox_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QToolBox* self ```
QPoint* q_toolbox_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QToolBox* self ```
QSize* q_toolbox_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QToolBox* self ```
QSize* q_toolbox_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QToolBox* self ```
int32_t q_toolbox_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QToolBox* self ```
int32_t q_toolbox_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QToolBox* self ```
QRect* q_toolbox_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QToolBox* self ```
QRect* q_toolbox_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QToolBox* self ```
QRegion* q_toolbox_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QToolBox* self ```
QSize* q_toolbox_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QToolBox* self ```
QSize* q_toolbox_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QToolBox* self ```
int32_t q_toolbox_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QToolBox* self ```
int32_t q_toolbox_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QToolBox* self ```
int32_t q_toolbox_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QToolBox* self ```
int32_t q_toolbox_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QToolBox* self, QSize* minimumSize ```
void q_toolbox_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QToolBox* self, int minw, int minh ```
void q_toolbox_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QToolBox* self, QSize* maximumSize ```
void q_toolbox_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QToolBox* self, int maxw, int maxh ```
void q_toolbox_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QToolBox* self, int minw ```
void q_toolbox_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QToolBox* self, int minh ```
void q_toolbox_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QToolBox* self, int maxw ```
void q_toolbox_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QToolBox* self, int maxh ```
void q_toolbox_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QToolBox* self ```
QSize* q_toolbox_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QToolBox* self, QSize* sizeIncrement ```
void q_toolbox_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QToolBox* self, int w, int h ```
void q_toolbox_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QToolBox* self ```
QSize* q_toolbox_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QToolBox* self, QSize* baseSize ```
void q_toolbox_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QToolBox* self, int basew, int baseh ```
void q_toolbox_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QToolBox* self, QSize* fixedSize ```
void q_toolbox_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QToolBox* self, int w, int h ```
void q_toolbox_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QToolBox* self, int w ```
void q_toolbox_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QToolBox* self, int h ```
void q_toolbox_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QToolBox* self, QPointF* param1 ```
QPointF* q_toolbox_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QToolBox* self, QPoint* param1 ```
QPoint* q_toolbox_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QToolBox* self, QPointF* param1 ```
QPointF* q_toolbox_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QToolBox* self, QPoint* param1 ```
QPoint* q_toolbox_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QToolBox* self, QPointF* param1 ```
QPointF* q_toolbox_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QToolBox* self, QPoint* param1 ```
QPoint* q_toolbox_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QToolBox* self, QPointF* param1 ```
QPointF* q_toolbox_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QToolBox* self, QPoint* param1 ```
QPoint* q_toolbox_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QToolBox* self, QWidget* param1, QPointF* param2 ```
QPointF* q_toolbox_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QToolBox* self, QWidget* param1, QPoint* param2 ```
QPoint* q_toolbox_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QToolBox* self, QWidget* param1, QPointF* param2 ```
QPointF* q_toolbox_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QToolBox* self, QWidget* param1, QPoint* param2 ```
QPoint* q_toolbox_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QToolBox* self ```
QWidget* q_toolbox_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QToolBox* self ```
QWidget* q_toolbox_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QToolBox* self ```
QWidget* q_toolbox_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QToolBox* self ```
QPalette* q_toolbox_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QToolBox* self, QPalette* palette ```
void q_toolbox_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QToolBox* self, enum QPalette__ColorRole backgroundRole ```
void q_toolbox_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QToolBox* self ```
int64_t q_toolbox_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QToolBox* self, enum QPalette__ColorRole foregroundRole ```
void q_toolbox_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QToolBox* self ```
int64_t q_toolbox_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QToolBox* self ```
QFont* q_toolbox_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QToolBox* self, QFont* font ```
void q_toolbox_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QToolBox* self ```
QFontMetrics* q_toolbox_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QToolBox* self ```
QFontInfo* q_toolbox_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QToolBox* self ```
QCursor* q_toolbox_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QToolBox* self, QCursor* cursor ```
void q_toolbox_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QToolBox* self ```
void q_toolbox_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QToolBox* self, bool enable ```
void q_toolbox_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QToolBox* self ```
bool q_toolbox_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QToolBox* self ```
bool q_toolbox_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QToolBox* self, bool enable ```
void q_toolbox_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QToolBox* self ```
bool q_toolbox_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QToolBox* self, QBitmap* mask ```
void q_toolbox_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QToolBox* self, QRegion* mask ```
void q_toolbox_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QToolBox* self ```
QRegion* q_toolbox_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QToolBox* self ```
void q_toolbox_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QToolBox* self, QPaintDevice* target ```
void q_toolbox_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QToolBox* self, QPainter* painter ```
void q_toolbox_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QToolBox* self ```
QPixmap* q_toolbox_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QToolBox* self ```
QGraphicsEffect* q_toolbox_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QToolBox* self, QGraphicsEffect* effect ```
void q_toolbox_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QToolBox* self, enum Qt__GestureType typeVal ```
void q_toolbox_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QToolBox* self, enum Qt__GestureType typeVal ```
void q_toolbox_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QToolBox* self, const char* windowTitle ```
void q_toolbox_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QToolBox* self, const char* styleSheet ```
void q_toolbox_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QToolBox* self ```
const char* q_toolbox_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QToolBox* self ```
const char* q_toolbox_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QToolBox* self, QIcon* icon ```
void q_toolbox_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QToolBox* self ```
QIcon* q_toolbox_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QToolBox* self, const char* windowIconText ```
void q_toolbox_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QToolBox* self ```
const char* q_toolbox_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QToolBox* self, const char* windowRole ```
void q_toolbox_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QToolBox* self ```
const char* q_toolbox_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QToolBox* self, const char* filePath ```
void q_toolbox_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QToolBox* self ```
const char* q_toolbox_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QToolBox* self, double level ```
void q_toolbox_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QToolBox* self ```
double q_toolbox_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QToolBox* self ```
bool q_toolbox_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QToolBox* self, const char* toolTip ```
void q_toolbox_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QToolBox* self ```
const char* q_toolbox_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QToolBox* self, int msec ```
void q_toolbox_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QToolBox* self ```
int32_t q_toolbox_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QToolBox* self, const char* statusTip ```
void q_toolbox_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QToolBox* self ```
const char* q_toolbox_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QToolBox* self, const char* whatsThis ```
void q_toolbox_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QToolBox* self ```
const char* q_toolbox_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QToolBox* self ```
const char* q_toolbox_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QToolBox* self, const char* name ```
void q_toolbox_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QToolBox* self ```
const char* q_toolbox_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QToolBox* self, const char* description ```
void q_toolbox_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QToolBox* self, enum Qt__LayoutDirection direction ```
void q_toolbox_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QToolBox* self ```
int64_t q_toolbox_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QToolBox* self ```
void q_toolbox_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QToolBox* self, QLocale* locale ```
void q_toolbox_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QToolBox* self ```
QLocale* q_toolbox_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QToolBox* self ```
void q_toolbox_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QToolBox* self ```
bool q_toolbox_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QToolBox* self ```
bool q_toolbox_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QToolBox* self ```
void q_toolbox_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QToolBox* self ```
bool q_toolbox_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QToolBox* self ```
void q_toolbox_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QToolBox* self ```
void q_toolbox_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QToolBox* self, enum Qt__FocusReason reason ```
void q_toolbox_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QToolBox* self ```
int64_t q_toolbox_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QToolBox* self, enum Qt__FocusPolicy policy ```
void q_toolbox_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QToolBox* self ```
bool q_toolbox_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_toolbox_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QToolBox* self, QWidget* focusProxy ```
void q_toolbox_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QToolBox* self ```
QWidget* q_toolbox_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QToolBox* self ```
int64_t q_toolbox_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QToolBox* self, enum Qt__ContextMenuPolicy policy ```
void q_toolbox_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QToolBox* self ```
void q_toolbox_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QToolBox* self, QCursor* param1 ```
void q_toolbox_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QToolBox* self ```
void q_toolbox_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QToolBox* self ```
void q_toolbox_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QToolBox* self ```
void q_toolbox_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QToolBox* self, QKeySequence* key ```
int32_t q_toolbox_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QToolBox* self, int id ```
void q_toolbox_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QToolBox* self, int id ```
void q_toolbox_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QToolBox* self, int id ```
void q_toolbox_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_toolbox_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_toolbox_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QToolBox* self ```
bool q_toolbox_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QToolBox* self, bool enable ```
void q_toolbox_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QToolBox* self ```
QGraphicsProxyWidget* q_toolbox_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QToolBox* self ```
void q_toolbox_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QToolBox* self ```
void q_toolbox_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QToolBox* self, int x, int y, int w, int h ```
void q_toolbox_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QToolBox* self, QRect* param1 ```
void q_toolbox_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QToolBox* self, QRegion* param1 ```
void q_toolbox_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QToolBox* self, int x, int y, int w, int h ```
void q_toolbox_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QToolBox* self, QRect* param1 ```
void q_toolbox_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QToolBox* self, QRegion* param1 ```
void q_toolbox_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QToolBox* self, bool hidden ```
void q_toolbox_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QToolBox* self ```
void q_toolbox_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QToolBox* self ```
void q_toolbox_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QToolBox* self ```
void q_toolbox_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QToolBox* self ```
void q_toolbox_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QToolBox* self ```
void q_toolbox_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QToolBox* self ```
void q_toolbox_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QToolBox* self ```
bool q_toolbox_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QToolBox* self ```
void q_toolbox_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QToolBox* self ```
void q_toolbox_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QToolBox* self, QWidget* param1 ```
void q_toolbox_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QToolBox* self, int x, int y ```
void q_toolbox_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QToolBox* self, QPoint* param1 ```
void q_toolbox_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QToolBox* self, int w, int h ```
void q_toolbox_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QToolBox* self, QSize* param1 ```
void q_toolbox_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QToolBox* self, int x, int y, int w, int h ```
void q_toolbox_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QToolBox* self, QRect* geometry ```
void q_toolbox_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QToolBox* self ```
char* q_toolbox_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QToolBox* self, const char* geometry ```
bool q_toolbox_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QToolBox* self ```
void q_toolbox_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QToolBox* self ```
bool q_toolbox_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QToolBox* self, QWidget* param1 ```
bool q_toolbox_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QToolBox* self ```
bool q_toolbox_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QToolBox* self ```
bool q_toolbox_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QToolBox* self ```
bool q_toolbox_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QToolBox* self ```
bool q_toolbox_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QToolBox* self ```
int64_t q_toolbox_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QToolBox* self, int state ```
void q_toolbox_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QToolBox* self, int state ```
void q_toolbox_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QToolBox* self ```
QSizePolicy* q_toolbox_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QToolBox* self, QSizePolicy* sizePolicy ```
void q_toolbox_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QToolBox* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_toolbox_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QToolBox* self ```
QRegion* q_toolbox_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QToolBox* self, int left, int top, int right, int bottom ```
void q_toolbox_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QToolBox* self, QMargins* margins ```
void q_toolbox_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QToolBox* self ```
QMargins* q_toolbox_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QToolBox* self ```
QRect* q_toolbox_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QToolBox* self ```
QLayout* q_toolbox_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QToolBox* self, QLayout* layout ```
void q_toolbox_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QToolBox* self ```
void q_toolbox_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QToolBox* self, QWidget* parent ```
void q_toolbox_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QToolBox* self, QWidget* parent, int f ```
void q_toolbox_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QToolBox* self, int dx, int dy ```
void q_toolbox_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QToolBox* self, int dx, int dy, QRect* param3 ```
void q_toolbox_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QToolBox* self ```
QWidget* q_toolbox_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QToolBox* self ```
QWidget* q_toolbox_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QToolBox* self ```
QWidget* q_toolbox_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QToolBox* self ```
bool q_toolbox_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QToolBox* self, bool on ```
void q_toolbox_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QToolBox* self, QAction* action ```
void q_toolbox_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QToolBox* self, QAction* actions[] ```
void q_toolbox_add_actions(void* self, void* actions[]) {
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
/// ``` QToolBox* self, QAction* before, QAction* actions[] ```
void q_toolbox_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QToolBox* self, QAction* before, QAction* action ```
void q_toolbox_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QToolBox* self, QAction* action ```
void q_toolbox_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QToolBox* self ```
libqt_list /* of QAction* */ q_toolbox_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QToolBox* self, const char* text ```
QAction* q_toolbox_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QToolBox* self, QIcon* icon, const char* text ```
QAction* q_toolbox_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QToolBox* self, const char* text, QKeySequence* shortcut ```
QAction* q_toolbox_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QToolBox* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_toolbox_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QToolBox* self ```
QWidget* q_toolbox_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QToolBox* self, int typeVal ```
void q_toolbox_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QToolBox* self ```
int64_t q_toolbox_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QToolBox* self, enum Qt__WindowType param1 ```
void q_toolbox_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QToolBox* self, int typeVal ```
void q_toolbox_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QToolBox* self ```
int64_t q_toolbox_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_toolbox_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QToolBox* self, int x, int y ```
QWidget* q_toolbox_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QToolBox* self, QPoint* p ```
QWidget* q_toolbox_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QToolBox* self, enum Qt__WidgetAttribute param1 ```
void q_toolbox_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QToolBox* self, enum Qt__WidgetAttribute param1 ```
bool q_toolbox_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QToolBox* self ```
void q_toolbox_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QToolBox* self, QWidget* child ```
bool q_toolbox_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QToolBox* self ```
bool q_toolbox_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QToolBox* self, bool enabled ```
void q_toolbox_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QToolBox* self ```
QBackingStore* q_toolbox_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QToolBox* self ```
QWindow* q_toolbox_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QToolBox* self ```
QScreen* q_toolbox_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QToolBox* self, QScreen* screen ```
void q_toolbox_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_toolbox_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QToolBox* self, const char* title ```
void q_toolbox_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QToolBox* self, void (*slot)(QWidget*, const char*) ```
void q_toolbox_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QToolBox* self, QIcon* icon ```
void q_toolbox_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QToolBox* self, void (*slot)(QWidget*, QIcon*) ```
void q_toolbox_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QToolBox* self, const char* iconText ```
void q_toolbox_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QToolBox* self, void (*slot)(QWidget*, const char*) ```
void q_toolbox_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QToolBox* self, QPoint* pos ```
void q_toolbox_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QToolBox* self, void (*slot)(QWidget*, QPoint*) ```
void q_toolbox_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QToolBox* self ```
int64_t q_toolbox_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QToolBox* self, int hints ```
void q_toolbox_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QToolBox* self, QPaintDevice* target, QPoint* targetOffset ```
void q_toolbox_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QToolBox* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_toolbox_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QToolBox* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_toolbox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QToolBox* self, QPainter* painter, QPoint* targetOffset ```
void q_toolbox_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QToolBox* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_toolbox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QToolBox* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_toolbox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QToolBox* self, QRect* rectangle ```
QPixmap* q_toolbox_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QToolBox* self, enum Qt__GestureType typeVal, int flags ```
void q_toolbox_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QToolBox* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_toolbox_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QToolBox* self, int id, bool enable ```
void q_toolbox_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QToolBox* self, int id, bool enable ```
void q_toolbox_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QToolBox* self, enum Qt__WindowType param1, bool on ```
void q_toolbox_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QToolBox* self, enum Qt__WidgetAttribute param1, bool on ```
void q_toolbox_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_toolbox_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_toolbox_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QToolBox* self ```
const char* q_toolbox_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QToolBox* self, const char* name ```
void q_toolbox_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QToolBox* self ```
bool q_toolbox_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QToolBox* self ```
bool q_toolbox_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QToolBox* self ```
bool q_toolbox_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QToolBox* self ```
bool q_toolbox_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QToolBox* self, bool b ```
bool q_toolbox_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QToolBox* self ```
QThread* q_toolbox_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QToolBox* self, QThread* thread ```
void q_toolbox_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QToolBox* self, int interval ```
int32_t q_toolbox_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QToolBox* self, int id ```
void q_toolbox_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QToolBox* self ```
libqt_list /* of QObject* */ q_toolbox_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QToolBox* self, QObject* filterObj ```
void q_toolbox_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QToolBox* self, QObject* obj ```
void q_toolbox_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_toolbox_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QToolBox* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_toolbox_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_toolbox_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_toolbox_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QToolBox* self ```
void q_toolbox_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QToolBox* self ```
void q_toolbox_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QToolBox* self, const char* name, QVariant* value ```
bool q_toolbox_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QToolBox* self, const char* name ```
QVariant* q_toolbox_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QToolBox* self ```
const char** q_toolbox_dynamic_property_names(void* self) {
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
/// ``` QToolBox* self ```
QBindingStorage* q_toolbox_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QToolBox* self ```
QBindingStorage* q_toolbox_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QToolBox* self ```
void q_toolbox_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QToolBox* self, void (*slot)(QObject*) ```
void q_toolbox_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QToolBox* self ```
QObject* q_toolbox_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QToolBox* self, const char* classname ```
bool q_toolbox_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QToolBox* self ```
void q_toolbox_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QToolBox* self, int interval, enum Qt__TimerType timerType ```
int32_t q_toolbox_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_toolbox_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QToolBox* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_toolbox_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QToolBox* self, QObject* param1 ```
void q_toolbox_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QToolBox* self, void (*slot)(QObject*, QObject*) ```
void q_toolbox_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QToolBox* self ```
bool q_toolbox_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QToolBox* self ```
int32_t q_toolbox_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QToolBox* self ```
int32_t q_toolbox_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QToolBox* self ```
int32_t q_toolbox_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QToolBox* self ```
int32_t q_toolbox_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QToolBox* self ```
int32_t q_toolbox_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QToolBox* self ```
int32_t q_toolbox_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QToolBox* self ```
double q_toolbox_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QToolBox* self ```
double q_toolbox_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QToolBox* self ```
int32_t q_toolbox_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QToolBox* self ```
int32_t q_toolbox_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_toolbox_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self ```
QSize* q_toolbox_size_hint(void* self) {
    return QToolBox_SizeHint((QToolBox*)self);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self ```
QSize* q_toolbox_qbase_size_hint(void* self) {
    return QToolBox_QBaseSizeHint((QToolBox*)self);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, QSize* (*slot)() ```
void q_toolbox_on_size_hint(void* self, QSize* (*slot)()) {
    QToolBox_OnSizeHint((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QPaintEvent* param1 ```
void q_toolbox_paint_event(void* self, void* param1) {
    QToolBox_PaintEvent((QToolBox*)self, (QPaintEvent*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QPaintEvent* param1 ```
void q_toolbox_qbase_paint_event(void* self, void* param1) {
    QToolBox_QBasePaintEvent((QToolBox*)self, (QPaintEvent*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QPaintEvent*) ```
void q_toolbox_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnPaintEvent((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QStyleOptionFrame* option ```
void q_toolbox_init_style_option(void* self, void* option) {
    QToolBox_InitStyleOption((QToolBox*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QStyleOptionFrame* option ```
void q_toolbox_qbase_init_style_option(void* self, void* option) {
    QToolBox_QBaseInitStyleOption((QToolBox*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QStyleOptionFrame*) ```
void q_toolbox_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnInitStyleOption((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self ```
int32_t q_toolbox_dev_type(void* self) {
    return QToolBox_DevType((QToolBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self ```
int32_t q_toolbox_qbase_dev_type(void* self) {
    return QToolBox_QBaseDevType((QToolBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, int32_t (*slot)() ```
void q_toolbox_on_dev_type(void* self, int32_t (*slot)()) {
    QToolBox_OnDevType((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, bool visible ```
void q_toolbox_set_visible(void* self, bool visible) {
    QToolBox_SetVisible((QToolBox*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, bool visible ```
void q_toolbox_qbase_set_visible(void* self, bool visible) {
    QToolBox_QBaseSetVisible((QToolBox*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, bool) ```
void q_toolbox_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QToolBox_OnSetVisible((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self ```
QSize* q_toolbox_minimum_size_hint(void* self) {
    return QToolBox_MinimumSizeHint((QToolBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self ```
QSize* q_toolbox_qbase_minimum_size_hint(void* self) {
    return QToolBox_QBaseMinimumSizeHint((QToolBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, QSize* (*slot)() ```
void q_toolbox_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QToolBox_OnMinimumSizeHint((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, int param1 ```
int32_t q_toolbox_height_for_width(void* self, int param1) {
    return QToolBox_HeightForWidth((QToolBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, int param1 ```
int32_t q_toolbox_qbase_height_for_width(void* self, int param1) {
    return QToolBox_QBaseHeightForWidth((QToolBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, int32_t (*slot)(QToolBox*, int) ```
void q_toolbox_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QToolBox_OnHeightForWidth((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self ```
bool q_toolbox_has_height_for_width(void* self) {
    return QToolBox_HasHeightForWidth((QToolBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self ```
bool q_toolbox_qbase_has_height_for_width(void* self) {
    return QToolBox_QBaseHasHeightForWidth((QToolBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, bool (*slot)() ```
void q_toolbox_on_has_height_for_width(void* self, bool (*slot)()) {
    QToolBox_OnHasHeightForWidth((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self ```
QPaintEngine* q_toolbox_paint_engine(void* self) {
    return QToolBox_PaintEngine((QToolBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self ```
QPaintEngine* q_toolbox_qbase_paint_engine(void* self) {
    return QToolBox_QBasePaintEngine((QToolBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, QPaintEngine* (*slot)() ```
void q_toolbox_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QToolBox_OnPaintEngine((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QMouseEvent* event ```
void q_toolbox_mouse_press_event(void* self, void* event) {
    QToolBox_MousePressEvent((QToolBox*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QMouseEvent* event ```
void q_toolbox_qbase_mouse_press_event(void* self, void* event) {
    QToolBox_QBaseMousePressEvent((QToolBox*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QMouseEvent*) ```
void q_toolbox_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnMousePressEvent((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QMouseEvent* event ```
void q_toolbox_mouse_release_event(void* self, void* event) {
    QToolBox_MouseReleaseEvent((QToolBox*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QMouseEvent* event ```
void q_toolbox_qbase_mouse_release_event(void* self, void* event) {
    QToolBox_QBaseMouseReleaseEvent((QToolBox*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QMouseEvent*) ```
void q_toolbox_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnMouseReleaseEvent((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QMouseEvent* event ```
void q_toolbox_mouse_double_click_event(void* self, void* event) {
    QToolBox_MouseDoubleClickEvent((QToolBox*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QMouseEvent* event ```
void q_toolbox_qbase_mouse_double_click_event(void* self, void* event) {
    QToolBox_QBaseMouseDoubleClickEvent((QToolBox*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QMouseEvent*) ```
void q_toolbox_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnMouseDoubleClickEvent((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QMouseEvent* event ```
void q_toolbox_mouse_move_event(void* self, void* event) {
    QToolBox_MouseMoveEvent((QToolBox*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QMouseEvent* event ```
void q_toolbox_qbase_mouse_move_event(void* self, void* event) {
    QToolBox_QBaseMouseMoveEvent((QToolBox*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QMouseEvent*) ```
void q_toolbox_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnMouseMoveEvent((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QWheelEvent* event ```
void q_toolbox_wheel_event(void* self, void* event) {
    QToolBox_WheelEvent((QToolBox*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QWheelEvent* event ```
void q_toolbox_qbase_wheel_event(void* self, void* event) {
    QToolBox_QBaseWheelEvent((QToolBox*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QWheelEvent*) ```
void q_toolbox_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnWheelEvent((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QKeyEvent* event ```
void q_toolbox_key_press_event(void* self, void* event) {
    QToolBox_KeyPressEvent((QToolBox*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QKeyEvent* event ```
void q_toolbox_qbase_key_press_event(void* self, void* event) {
    QToolBox_QBaseKeyPressEvent((QToolBox*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QKeyEvent*) ```
void q_toolbox_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnKeyPressEvent((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QKeyEvent* event ```
void q_toolbox_key_release_event(void* self, void* event) {
    QToolBox_KeyReleaseEvent((QToolBox*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QKeyEvent* event ```
void q_toolbox_qbase_key_release_event(void* self, void* event) {
    QToolBox_QBaseKeyReleaseEvent((QToolBox*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QKeyEvent*) ```
void q_toolbox_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnKeyReleaseEvent((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QFocusEvent* event ```
void q_toolbox_focus_in_event(void* self, void* event) {
    QToolBox_FocusInEvent((QToolBox*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QFocusEvent* event ```
void q_toolbox_qbase_focus_in_event(void* self, void* event) {
    QToolBox_QBaseFocusInEvent((QToolBox*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QFocusEvent*) ```
void q_toolbox_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnFocusInEvent((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QFocusEvent* event ```
void q_toolbox_focus_out_event(void* self, void* event) {
    QToolBox_FocusOutEvent((QToolBox*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QFocusEvent* event ```
void q_toolbox_qbase_focus_out_event(void* self, void* event) {
    QToolBox_QBaseFocusOutEvent((QToolBox*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QFocusEvent*) ```
void q_toolbox_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnFocusOutEvent((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QEnterEvent* event ```
void q_toolbox_enter_event(void* self, void* event) {
    QToolBox_EnterEvent((QToolBox*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QEnterEvent* event ```
void q_toolbox_qbase_enter_event(void* self, void* event) {
    QToolBox_QBaseEnterEvent((QToolBox*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QEnterEvent*) ```
void q_toolbox_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnEnterEvent((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QEvent* event ```
void q_toolbox_leave_event(void* self, void* event) {
    QToolBox_LeaveEvent((QToolBox*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QEvent* event ```
void q_toolbox_qbase_leave_event(void* self, void* event) {
    QToolBox_QBaseLeaveEvent((QToolBox*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QEvent*) ```
void q_toolbox_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnLeaveEvent((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QMoveEvent* event ```
void q_toolbox_move_event(void* self, void* event) {
    QToolBox_MoveEvent((QToolBox*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QMoveEvent* event ```
void q_toolbox_qbase_move_event(void* self, void* event) {
    QToolBox_QBaseMoveEvent((QToolBox*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QMoveEvent*) ```
void q_toolbox_on_move_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnMoveEvent((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QResizeEvent* event ```
void q_toolbox_resize_event(void* self, void* event) {
    QToolBox_ResizeEvent((QToolBox*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QResizeEvent* event ```
void q_toolbox_qbase_resize_event(void* self, void* event) {
    QToolBox_QBaseResizeEvent((QToolBox*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QResizeEvent*) ```
void q_toolbox_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnResizeEvent((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QCloseEvent* event ```
void q_toolbox_close_event(void* self, void* event) {
    QToolBox_CloseEvent((QToolBox*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QCloseEvent* event ```
void q_toolbox_qbase_close_event(void* self, void* event) {
    QToolBox_QBaseCloseEvent((QToolBox*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QCloseEvent*) ```
void q_toolbox_on_close_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnCloseEvent((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QContextMenuEvent* event ```
void q_toolbox_context_menu_event(void* self, void* event) {
    QToolBox_ContextMenuEvent((QToolBox*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QContextMenuEvent* event ```
void q_toolbox_qbase_context_menu_event(void* self, void* event) {
    QToolBox_QBaseContextMenuEvent((QToolBox*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QContextMenuEvent*) ```
void q_toolbox_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnContextMenuEvent((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QTabletEvent* event ```
void q_toolbox_tablet_event(void* self, void* event) {
    QToolBox_TabletEvent((QToolBox*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QTabletEvent* event ```
void q_toolbox_qbase_tablet_event(void* self, void* event) {
    QToolBox_QBaseTabletEvent((QToolBox*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QTabletEvent*) ```
void q_toolbox_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnTabletEvent((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QActionEvent* event ```
void q_toolbox_action_event(void* self, void* event) {
    QToolBox_ActionEvent((QToolBox*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QActionEvent* event ```
void q_toolbox_qbase_action_event(void* self, void* event) {
    QToolBox_QBaseActionEvent((QToolBox*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QActionEvent*) ```
void q_toolbox_on_action_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnActionEvent((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QDragEnterEvent* event ```
void q_toolbox_drag_enter_event(void* self, void* event) {
    QToolBox_DragEnterEvent((QToolBox*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QDragEnterEvent* event ```
void q_toolbox_qbase_drag_enter_event(void* self, void* event) {
    QToolBox_QBaseDragEnterEvent((QToolBox*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QDragEnterEvent*) ```
void q_toolbox_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnDragEnterEvent((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QDragMoveEvent* event ```
void q_toolbox_drag_move_event(void* self, void* event) {
    QToolBox_DragMoveEvent((QToolBox*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QDragMoveEvent* event ```
void q_toolbox_qbase_drag_move_event(void* self, void* event) {
    QToolBox_QBaseDragMoveEvent((QToolBox*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QDragMoveEvent*) ```
void q_toolbox_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnDragMoveEvent((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QDragLeaveEvent* event ```
void q_toolbox_drag_leave_event(void* self, void* event) {
    QToolBox_DragLeaveEvent((QToolBox*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QDragLeaveEvent* event ```
void q_toolbox_qbase_drag_leave_event(void* self, void* event) {
    QToolBox_QBaseDragLeaveEvent((QToolBox*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QDragLeaveEvent*) ```
void q_toolbox_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnDragLeaveEvent((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QDropEvent* event ```
void q_toolbox_drop_event(void* self, void* event) {
    QToolBox_DropEvent((QToolBox*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QDropEvent* event ```
void q_toolbox_qbase_drop_event(void* self, void* event) {
    QToolBox_QBaseDropEvent((QToolBox*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QDropEvent*) ```
void q_toolbox_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnDropEvent((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QHideEvent* event ```
void q_toolbox_hide_event(void* self, void* event) {
    QToolBox_HideEvent((QToolBox*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QHideEvent* event ```
void q_toolbox_qbase_hide_event(void* self, void* event) {
    QToolBox_QBaseHideEvent((QToolBox*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QHideEvent*) ```
void q_toolbox_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnHideEvent((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, const char* eventType, void* message, intptr_t* result ```
bool q_toolbox_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QToolBox_NativeEvent((QToolBox*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, const char* eventType, void* message, intptr_t* result ```
bool q_toolbox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QToolBox_QBaseNativeEvent((QToolBox*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, bool (*slot)(QToolBox*, const char*, void*, intptr_t*) ```
void q_toolbox_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QToolBox_OnNativeEvent((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_toolbox_metric(void* self, int64_t param1) {
    return QToolBox_Metric((QToolBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_toolbox_qbase_metric(void* self, int64_t param1) {
    return QToolBox_QBaseMetric((QToolBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, int32_t (*slot)(QToolBox*, enum QPaintDevice__PaintDeviceMetric) ```
void q_toolbox_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QToolBox_OnMetric((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QPainter* painter ```
void q_toolbox_init_painter(void* self, void* painter) {
    QToolBox_InitPainter((QToolBox*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QPainter* painter ```
void q_toolbox_qbase_init_painter(void* self, void* painter) {
    QToolBox_QBaseInitPainter((QToolBox*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QPainter*) ```
void q_toolbox_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnInitPainter((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QPoint* offset ```
QPaintDevice* q_toolbox_redirected(void* self, void* offset) {
    return QToolBox_Redirected((QToolBox*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QPoint* offset ```
QPaintDevice* q_toolbox_qbase_redirected(void* self, void* offset) {
    return QToolBox_QBaseRedirected((QToolBox*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, QPaintDevice* (*slot)(QToolBox*, QPoint*) ```
void q_toolbox_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QToolBox_OnRedirected((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self ```
QPainter* q_toolbox_shared_painter(void* self) {
    return QToolBox_SharedPainter((QToolBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self ```
QPainter* q_toolbox_qbase_shared_painter(void* self) {
    return QToolBox_QBaseSharedPainter((QToolBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, QPainter* (*slot)() ```
void q_toolbox_on_shared_painter(void* self, QPainter* (*slot)()) {
    QToolBox_OnSharedPainter((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QInputMethodEvent* param1 ```
void q_toolbox_input_method_event(void* self, void* param1) {
    QToolBox_InputMethodEvent((QToolBox*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QInputMethodEvent* param1 ```
void q_toolbox_qbase_input_method_event(void* self, void* param1) {
    QToolBox_QBaseInputMethodEvent((QToolBox*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QInputMethodEvent*) ```
void q_toolbox_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnInputMethodEvent((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_toolbox_input_method_query(void* self, int64_t param1) {
    return QToolBox_InputMethodQuery((QToolBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_toolbox_qbase_input_method_query(void* self, int64_t param1) {
    return QToolBox_QBaseInputMethodQuery((QToolBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, QVariant* (*slot)(QToolBox*, enum Qt__InputMethodQuery) ```
void q_toolbox_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QToolBox_OnInputMethodQuery((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, bool next ```
bool q_toolbox_focus_next_prev_child(void* self, bool next) {
    return QToolBox_FocusNextPrevChild((QToolBox*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, bool next ```
bool q_toolbox_qbase_focus_next_prev_child(void* self, bool next) {
    return QToolBox_QBaseFocusNextPrevChild((QToolBox*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, bool (*slot)(QToolBox*, bool) ```
void q_toolbox_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QToolBox_OnFocusNextPrevChild((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QObject* watched, QEvent* event ```
bool q_toolbox_event_filter(void* self, void* watched, void* event) {
    return QToolBox_EventFilter((QToolBox*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QObject* watched, QEvent* event ```
bool q_toolbox_qbase_event_filter(void* self, void* watched, void* event) {
    return QToolBox_QBaseEventFilter((QToolBox*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, bool (*slot)(QToolBox*, QObject*, QEvent*) ```
void q_toolbox_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QToolBox_OnEventFilter((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QTimerEvent* event ```
void q_toolbox_timer_event(void* self, void* event) {
    QToolBox_TimerEvent((QToolBox*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QTimerEvent* event ```
void q_toolbox_qbase_timer_event(void* self, void* event) {
    QToolBox_QBaseTimerEvent((QToolBox*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QTimerEvent*) ```
void q_toolbox_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnTimerEvent((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QChildEvent* event ```
void q_toolbox_child_event(void* self, void* event) {
    QToolBox_ChildEvent((QToolBox*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QChildEvent* event ```
void q_toolbox_qbase_child_event(void* self, void* event) {
    QToolBox_QBaseChildEvent((QToolBox*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QChildEvent*) ```
void q_toolbox_on_child_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnChildEvent((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QEvent* event ```
void q_toolbox_custom_event(void* self, void* event) {
    QToolBox_CustomEvent((QToolBox*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QEvent* event ```
void q_toolbox_qbase_custom_event(void* self, void* event) {
    QToolBox_QBaseCustomEvent((QToolBox*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QEvent*) ```
void q_toolbox_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnCustomEvent((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QMetaMethod* signal ```
void q_toolbox_connect_notify(void* self, void* signal) {
    QToolBox_ConnectNotify((QToolBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QMetaMethod* signal ```
void q_toolbox_qbase_connect_notify(void* self, void* signal) {
    QToolBox_QBaseConnectNotify((QToolBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QMetaMethod*) ```
void q_toolbox_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnConnectNotify((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QMetaMethod* signal ```
void q_toolbox_disconnect_notify(void* self, void* signal) {
    QToolBox_DisconnectNotify((QToolBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QMetaMethod* signal ```
void q_toolbox_qbase_disconnect_notify(void* self, void* signal) {
    QToolBox_QBaseDisconnectNotify((QToolBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QMetaMethod*) ```
void q_toolbox_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnDisconnectNotify((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QPainter* param1 ```
void q_toolbox_draw_frame(void* self, void* param1) {
    QToolBox_DrawFrame((QToolBox*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QPainter* param1 ```
void q_toolbox_qbase_draw_frame(void* self, void* param1) {
    QToolBox_QBaseDrawFrame((QToolBox*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)(QToolBox*, QPainter*) ```
void q_toolbox_on_draw_frame(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnDrawFrame((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self ```
void q_toolbox_update_micro_focus(void* self) {
    QToolBox_UpdateMicroFocus((QToolBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self ```
void q_toolbox_qbase_update_micro_focus(void* self) {
    QToolBox_QBaseUpdateMicroFocus((QToolBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)() ```
void q_toolbox_on_update_micro_focus(void* self, void (*slot)()) {
    QToolBox_OnUpdateMicroFocus((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self ```
void q_toolbox_create(void* self) {
    QToolBox_Create((QToolBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self ```
void q_toolbox_qbase_create(void* self) {
    QToolBox_QBaseCreate((QToolBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)() ```
void q_toolbox_on_create(void* self, void (*slot)()) {
    QToolBox_OnCreate((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self ```
void q_toolbox_destroy(void* self) {
    QToolBox_Destroy((QToolBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self ```
void q_toolbox_qbase_destroy(void* self) {
    QToolBox_QBaseDestroy((QToolBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, void (*slot)() ```
void q_toolbox_on_destroy(void* self, void (*slot)()) {
    QToolBox_OnDestroy((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self ```
bool q_toolbox_focus_next_child(void* self) {
    return QToolBox_FocusNextChild((QToolBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self ```
bool q_toolbox_qbase_focus_next_child(void* self) {
    return QToolBox_QBaseFocusNextChild((QToolBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, bool (*slot)() ```
void q_toolbox_on_focus_next_child(void* self, bool (*slot)()) {
    QToolBox_OnFocusNextChild((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self ```
bool q_toolbox_focus_previous_child(void* self) {
    return QToolBox_FocusPreviousChild((QToolBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self ```
bool q_toolbox_qbase_focus_previous_child(void* self) {
    return QToolBox_QBaseFocusPreviousChild((QToolBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, bool (*slot)() ```
void q_toolbox_on_focus_previous_child(void* self, bool (*slot)()) {
    QToolBox_OnFocusPreviousChild((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self ```
QObject* q_toolbox_sender(void* self) {
    return QToolBox_Sender((QToolBox*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self ```
QObject* q_toolbox_qbase_sender(void* self) {
    return QToolBox_QBaseSender((QToolBox*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, QObject* (*slot)() ```
void q_toolbox_on_sender(void* self, QObject* (*slot)()) {
    QToolBox_OnSender((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self ```
int32_t q_toolbox_sender_signal_index(void* self) {
    return QToolBox_SenderSignalIndex((QToolBox*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self ```
int32_t q_toolbox_qbase_sender_signal_index(void* self) {
    return QToolBox_QBaseSenderSignalIndex((QToolBox*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, int32_t (*slot)() ```
void q_toolbox_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QToolBox_OnSenderSignalIndex((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, const char* signal ```
int32_t q_toolbox_receivers(void* self, const char* signal) {
    return QToolBox_Receivers((QToolBox*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, const char* signal ```
int32_t q_toolbox_qbase_receivers(void* self, const char* signal) {
    return QToolBox_QBaseReceivers((QToolBox*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, int32_t (*slot)(QToolBox*, const char*) ```
void q_toolbox_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QToolBox_OnReceivers((QToolBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBox* self, QMetaMethod* signal ```
bool q_toolbox_is_signal_connected(void* self, void* signal) {
    return QToolBox_IsSignalConnected((QToolBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBox* self, QMetaMethod* signal ```
bool q_toolbox_qbase_is_signal_connected(void* self, void* signal) {
    return QToolBox_QBaseIsSignalConnected((QToolBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBox* self, bool (*slot)(QToolBox*, QMetaMethod*) ```
void q_toolbox_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QToolBox_OnIsSignalConnected((QToolBox*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QToolBox* self ```
void q_toolbox_delete(void* self) {
    QToolBox_Delete((QToolBox*)(self));
}