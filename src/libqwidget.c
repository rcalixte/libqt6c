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
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqwidget.hpp"
#include "libqwidget.h"

/// https://doc.qt.io/qt-6/qwidgetdata.html

/// q_widgetdata_new constructs a new QWidgetData object.
///
/// ``` QWidgetData* param1 ```
QWidgetData* q_widgetdata_new(void* param1) {
    return QWidgetData_new((QWidgetData*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetdata.html#operator=)
///
/// ``` QWidgetData* self, QWidgetData* param1 ```
void q_widgetdata_operator_assign(void* self, void* param1) {
    QWidgetData_OperatorAssign((QWidgetData*)self, (QWidgetData*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QWidgetData* self ```
void q_widgetdata_delete(void* self) {
    QWidgetData_Delete((QWidgetData*)(self));
}

/// https://doc.qt.io/qt-6/qwidget.html

/// q_widget_new constructs a new QWidget object.
///
/// ``` QWidget* parent ```
QWidget* q_widget_new(void* parent) {
    return QWidget_new((QWidget*)parent);
}

/// q_widget_new2 constructs a new QWidget object.
///
///
QWidget* q_widget_new2() {
    return QWidget_new2();
}

/// q_widget_new3 constructs a new QWidget object.
///
/// ``` QWidget* parent, int f ```
QWidget* q_widget_new3(void* parent, int64_t f) {
    return QWidget_new3((QWidget*)parent, f);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWidget* self ```
QMetaObject* q_widget_meta_object(void* self) {
    return QWidget_MetaObject((QWidget*)self);
}

/// ``` QWidget* self, const char* param1 ```
void* q_widget_metacast(void* self, const char* param1) {
    return QWidget_Metacast((QWidget*)self, param1);
}

/// ``` QWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_widget_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWidget_Metacall((QWidget*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, int32_t (*slot)(QWidget*, enum QMetaObject__Call, int, void*) ```
void q_widget_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QWidget_OnMetacall((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_widget_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWidget_QBaseMetacall((QWidget*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_widget_tr(const char* s) {
    libqt_string _str = QWidget_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// ``` QWidget* self ```
int32_t q_widget_dev_type(void* self) {
    return QWidget_DevType((QWidget*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, int32_t (*slot)() ```
void q_widget_on_dev_type(void* self, int32_t (*slot)()) {
    QWidget_OnDevType((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self ```
int32_t q_widget_qbase_dev_type(void* self) {
    return QWidget_QBaseDevType((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QWidget* self ```
uintptr_t q_widget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QWidget* self ```
void q_widget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QWidget* self ```
uintptr_t q_widget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QWidget* self ```
uintptr_t q_widget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QWidget* self ```
QStyle* q_widget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QWidget* self, QStyle* style ```
void q_widget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QWidget* self ```
bool q_widget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QWidget* self ```
bool q_widget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QWidget* self ```
bool q_widget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QWidget* self ```
int64_t q_widget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QWidget* self, enum Qt__WindowModality windowModality ```
void q_widget_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QWidget* self ```
bool q_widget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QWidget* self, QWidget* param1 ```
bool q_widget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QWidget* self, bool enabled ```
void q_widget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QWidget* self, bool disabled ```
void q_widget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QWidget* self, bool windowModified ```
void q_widget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QWidget* self ```
QRect* q_widget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QWidget* self ```
QRect* q_widget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QWidget* self ```
QRect* q_widget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QWidget* self ```
int32_t q_widget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QWidget* self ```
int32_t q_widget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QWidget* self ```
QPoint* q_widget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QWidget* self ```
QSize* q_widget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QWidget* self ```
QSize* q_widget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QWidget* self ```
int32_t q_widget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QWidget* self ```
int32_t q_widget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QWidget* self ```
QRect* q_widget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QWidget* self ```
QRect* q_widget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QWidget* self ```
QRegion* q_widget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QWidget* self ```
QSize* q_widget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QWidget* self ```
QSize* q_widget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QWidget* self ```
int32_t q_widget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QWidget* self ```
int32_t q_widget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QWidget* self ```
int32_t q_widget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QWidget* self ```
int32_t q_widget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QWidget* self, QSize* minimumSize ```
void q_widget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QWidget* self, int minw, int minh ```
void q_widget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QWidget* self, QSize* maximumSize ```
void q_widget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QWidget* self, int maxw, int maxh ```
void q_widget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QWidget* self, int minw ```
void q_widget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QWidget* self, int minh ```
void q_widget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QWidget* self, int maxw ```
void q_widget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QWidget* self, int maxh ```
void q_widget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QWidget* self ```
QSize* q_widget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QWidget* self, QSize* sizeIncrement ```
void q_widget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QWidget* self, int w, int h ```
void q_widget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QWidget* self ```
QSize* q_widget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QWidget* self, QSize* baseSize ```
void q_widget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QWidget* self, int basew, int baseh ```
void q_widget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QWidget* self, QSize* fixedSize ```
void q_widget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QWidget* self, int w, int h ```
void q_widget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QWidget* self, int w ```
void q_widget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QWidget* self, int h ```
void q_widget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QWidget* self, QPointF* param1 ```
QPointF* q_widget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QWidget* self, QPoint* param1 ```
QPoint* q_widget_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QWidget* self, QPointF* param1 ```
QPointF* q_widget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QWidget* self, QPoint* param1 ```
QPoint* q_widget_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QWidget* self, QPointF* param1 ```
QPointF* q_widget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QWidget* self, QPoint* param1 ```
QPoint* q_widget_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QWidget* self, QPointF* param1 ```
QPointF* q_widget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QWidget* self, QPoint* param1 ```
QPoint* q_widget_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_widget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_widget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_widget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_widget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QWidget* self ```
QWidget* q_widget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QWidget* self ```
QWidget* q_widget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QWidget* self ```
QWidget* q_widget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QWidget* self ```
QPalette* q_widget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QWidget* self, QPalette* palette ```
void q_widget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QWidget* self, enum QPalette__ColorRole backgroundRole ```
void q_widget_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QWidget* self ```
int64_t q_widget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QWidget* self, enum QPalette__ColorRole foregroundRole ```
void q_widget_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QWidget* self ```
int64_t q_widget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QWidget* self ```
QFont* q_widget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QWidget* self, QFont* font ```
void q_widget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QWidget* self ```
QFontMetrics* q_widget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QWidget* self ```
QFontInfo* q_widget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QWidget* self ```
QCursor* q_widget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QWidget* self, QCursor* cursor ```
void q_widget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QWidget* self ```
void q_widget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QWidget* self, bool enable ```
void q_widget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QWidget* self ```
bool q_widget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QWidget* self ```
bool q_widget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QWidget* self, bool enable ```
void q_widget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QWidget* self ```
bool q_widget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QWidget* self, QBitmap* mask ```
void q_widget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QWidget* self, QRegion* mask ```
void q_widget_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QWidget* self ```
QRegion* q_widget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QWidget* self ```
void q_widget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWidget* self, QPaintDevice* target ```
void q_widget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWidget* self, QPainter* painter ```
void q_widget_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QWidget* self ```
QPixmap* q_widget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QWidget* self ```
QGraphicsEffect* q_widget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QWidget* self, QGraphicsEffect* effect ```
void q_widget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QWidget* self, enum Qt__GestureType typeVal ```
void q_widget_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QWidget* self, enum Qt__GestureType typeVal ```
void q_widget_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QWidget* self, const char* windowTitle ```
void q_widget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QWidget* self, const char* styleSheet ```
void q_widget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QWidget* self ```
const char* q_widget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QWidget* self ```
const char* q_widget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QWidget* self, QIcon* icon ```
void q_widget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QWidget* self ```
QIcon* q_widget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QWidget* self, const char* windowIconText ```
void q_widget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QWidget* self ```
const char* q_widget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QWidget* self, const char* windowRole ```
void q_widget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QWidget* self ```
const char* q_widget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QWidget* self, const char* filePath ```
void q_widget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QWidget* self ```
const char* q_widget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QWidget* self, double level ```
void q_widget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QWidget* self ```
double q_widget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QWidget* self ```
bool q_widget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QWidget* self, const char* toolTip ```
void q_widget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QWidget* self ```
const char* q_widget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QWidget* self, int msec ```
void q_widget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QWidget* self ```
int32_t q_widget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QWidget* self, const char* statusTip ```
void q_widget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QWidget* self ```
const char* q_widget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QWidget* self, const char* whatsThis ```
void q_widget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QWidget* self ```
const char* q_widget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QWidget* self ```
const char* q_widget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QWidget* self, const char* name ```
void q_widget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QWidget* self ```
const char* q_widget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QWidget* self, const char* description ```
void q_widget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QWidget* self, enum Qt__LayoutDirection direction ```
void q_widget_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QWidget* self ```
int64_t q_widget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QWidget* self ```
void q_widget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QWidget* self, QLocale* locale ```
void q_widget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QWidget* self ```
QLocale* q_widget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QWidget* self ```
void q_widget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QWidget* self ```
bool q_widget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QWidget* self ```
bool q_widget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QWidget* self ```
void q_widget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QWidget* self ```
bool q_widget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QWidget* self ```
void q_widget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QWidget* self ```
void q_widget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QWidget* self, enum Qt__FocusReason reason ```
void q_widget_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QWidget* self ```
int64_t q_widget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QWidget* self, enum Qt__FocusPolicy policy ```
void q_widget_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QWidget* self ```
bool q_widget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_widget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QWidget* self, QWidget* focusProxy ```
void q_widget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QWidget* self ```
QWidget* q_widget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QWidget* self ```
int64_t q_widget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QWidget* self, enum Qt__ContextMenuPolicy policy ```
void q_widget_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QWidget* self ```
void q_widget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QWidget* self, QCursor* param1 ```
void q_widget_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QWidget* self ```
void q_widget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QWidget* self ```
void q_widget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QWidget* self ```
void q_widget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QWidget* self, QKeySequence* key ```
int32_t q_widget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QWidget* self, int id ```
void q_widget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QWidget* self, int id ```
void q_widget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QWidget* self, int id ```
void q_widget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_widget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_widget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QWidget* self ```
bool q_widget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QWidget* self, bool enable ```
void q_widget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QWidget* self ```
QGraphicsProxyWidget* q_widget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QWidget* self ```
void q_widget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QWidget* self ```
void q_widget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QWidget* self, int x, int y, int w, int h ```
void q_widget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QWidget* self, QRect* param1 ```
void q_widget_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QWidget* self, QRegion* param1 ```
void q_widget_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QWidget* self, int x, int y, int w, int h ```
void q_widget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QWidget* self, QRect* param1 ```
void q_widget_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QWidget* self, QRegion* param1 ```
void q_widget_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// ``` QWidget* self, bool visible ```
void q_widget_set_visible(void* self, bool visible) {
    QWidget_SetVisible((QWidget*)self, visible);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, bool) ```
void q_widget_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QWidget_OnSetVisible((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, bool visible ```
void q_widget_qbase_set_visible(void* self, bool visible) {
    QWidget_QBaseSetVisible((QWidget*)self, visible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QWidget* self, bool hidden ```
void q_widget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QWidget* self ```
void q_widget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QWidget* self ```
void q_widget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QWidget* self ```
void q_widget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QWidget* self ```
void q_widget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QWidget* self ```
void q_widget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QWidget* self ```
void q_widget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QWidget* self ```
bool q_widget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QWidget* self ```
void q_widget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QWidget* self ```
void q_widget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QWidget* self, QWidget* param1 ```
void q_widget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QWidget* self, int x, int y ```
void q_widget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QWidget* self, QPoint* param1 ```
void q_widget_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QWidget* self, int w, int h ```
void q_widget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QWidget* self, QSize* param1 ```
void q_widget_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QWidget* self, int x, int y, int w, int h ```
void q_widget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QWidget* self, QRect* geometry ```
void q_widget_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QWidget* self ```
char* q_widget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QWidget* self, const char* geometry ```
bool q_widget_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QWidget* self ```
void q_widget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QWidget* self ```
bool q_widget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QWidget* self, QWidget* param1 ```
bool q_widget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QWidget* self ```
bool q_widget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QWidget* self ```
bool q_widget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QWidget* self ```
bool q_widget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QWidget* self ```
bool q_widget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QWidget* self ```
int64_t q_widget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QWidget* self, int state ```
void q_widget_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QWidget* self, int state ```
void q_widget_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// ``` QWidget* self ```
QSize* q_widget_size_hint(void* self) {
    return QWidget_SizeHint((QWidget*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, QSize* (*slot)() ```
void q_widget_on_size_hint(void* self, QSize* (*slot)()) {
    QWidget_OnSizeHint((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self ```
QSize* q_widget_qbase_size_hint(void* self) {
    return QWidget_QBaseSizeHint((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// ``` QWidget* self ```
QSize* q_widget_minimum_size_hint(void* self) {
    return QWidget_MinimumSizeHint((QWidget*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, QSize* (*slot)() ```
void q_widget_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QWidget_OnMinimumSizeHint((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self ```
QSize* q_widget_qbase_minimum_size_hint(void* self) {
    return QWidget_QBaseMinimumSizeHint((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QWidget* self ```
QSizePolicy* q_widget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QWidget* self, QSizePolicy* sizePolicy ```
void q_widget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QWidget* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_widget_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// ``` QWidget* self, int param1 ```
int32_t q_widget_height_for_width(void* self, int param1) {
    return QWidget_HeightForWidth((QWidget*)self, param1);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, int32_t (*slot)(QWidget*, int) ```
void q_widget_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QWidget_OnHeightForWidth((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, int param1 ```
int32_t q_widget_qbase_height_for_width(void* self, int param1) {
    return QWidget_QBaseHeightForWidth((QWidget*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// ``` QWidget* self ```
bool q_widget_has_height_for_width(void* self) {
    return QWidget_HasHeightForWidth((QWidget*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, bool (*slot)() ```
void q_widget_on_has_height_for_width(void* self, bool (*slot)()) {
    QWidget_OnHasHeightForWidth((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self ```
bool q_widget_qbase_has_height_for_width(void* self) {
    return QWidget_QBaseHasHeightForWidth((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QWidget* self ```
QRegion* q_widget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QWidget* self, int left, int top, int right, int bottom ```
void q_widget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QWidget* self, QMargins* margins ```
void q_widget_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QWidget* self ```
QMargins* q_widget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QWidget* self ```
QRect* q_widget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QWidget* self ```
QLayout* q_widget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QWidget* self, QLayout* layout ```
void q_widget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QWidget* self ```
void q_widget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QWidget* self, QWidget* parent ```
void q_widget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QWidget* self, QWidget* parent, int f ```
void q_widget_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QWidget* self, int dx, int dy ```
void q_widget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QWidget* self, int dx, int dy, QRect* param3 ```
void q_widget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QWidget* self ```
QWidget* q_widget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QWidget* self ```
QWidget* q_widget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QWidget* self ```
QWidget* q_widget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QWidget* self ```
bool q_widget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QWidget* self, bool on ```
void q_widget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QWidget* self, QAction* action ```
void q_widget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QWidget* self, QAction* actions[] ```
void q_widget_add_actions(void* self, void* actions[]) {
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

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QWidget* self, QAction* before, QAction* actions[] ```
void q_widget_insert_actions(void* self, void* before, void* actions[]) {
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

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QWidget* self, QAction* before, QAction* action ```
void q_widget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QWidget* self, QAction* action ```
void q_widget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QWidget* self ```
libqt_list /* of QAction* */ q_widget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QWidget* self, const char* text ```
QAction* q_widget_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QWidget* self, QIcon* icon, const char* text ```
QAction* q_widget_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QWidget* self, const char* text, QKeySequence* shortcut ```
QAction* q_widget_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QWidget* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_widget_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QWidget* self ```
QWidget* q_widget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QWidget* self, int typeVal ```
void q_widget_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QWidget* self ```
int64_t q_widget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QWidget* self, enum Qt__WindowType param1 ```
void q_widget_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QWidget* self, int typeVal ```
void q_widget_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QWidget* self ```
int64_t q_widget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_widget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QWidget* self, int x, int y ```
QWidget* q_widget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QWidget* self, QPoint* p ```
QWidget* q_widget_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QWidget* self, enum Qt__WidgetAttribute param1 ```
void q_widget_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QWidget* self, enum Qt__WidgetAttribute param1 ```
bool q_widget_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// ``` QWidget* self ```
QPaintEngine* q_widget_paint_engine(void* self) {
    return QWidget_PaintEngine((QWidget*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, QPaintEngine* (*slot)() ```
void q_widget_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QWidget_OnPaintEngine((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self ```
QPaintEngine* q_widget_qbase_paint_engine(void* self) {
    return QWidget_QBasePaintEngine((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QWidget* self ```
void q_widget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QWidget* self, QWidget* child ```
bool q_widget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QWidget* self ```
bool q_widget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QWidget* self, bool enabled ```
void q_widget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QWidget* self ```
QBackingStore* q_widget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QWidget* self ```
QWindow* q_widget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QWidget* self ```
QScreen* q_widget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QWidget* self, QScreen* screen ```
void q_widget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_widget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QWidget* self, const char* title ```
void q_widget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// ``` QWidget* self, void (*slot)(QWidget*, const char*) ```
void q_widget_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QWidget* self, QIcon* icon ```
void q_widget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// ``` QWidget* self, void (*slot)(QWidget*, QIcon*) ```
void q_widget_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QWidget* self, const char* iconText ```
void q_widget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// ``` QWidget* self, void (*slot)(QWidget*, const char*) ```
void q_widget_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QWidget* self, QPoint* pos ```
void q_widget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// ``` QWidget* self, void (*slot)(QWidget*, QPoint*) ```
void q_widget_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// ``` QWidget* self, QEvent* event ```
bool q_widget_event(void* self, void* event) {
    return QWidget_Event((QWidget*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, bool (*slot)(QWidget*, QEvent*) ```
void q_widget_on_event(void* self, bool (*slot)(void*, void*)) {
    QWidget_OnEvent((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, QEvent* event ```
bool q_widget_qbase_event(void* self, void* event) {
    return QWidget_QBaseEvent((QWidget*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// ``` QWidget* self, QMouseEvent* event ```
void q_widget_mouse_press_event(void* self, void* event) {
    QWidget_MousePressEvent((QWidget*)self, (QMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QMouseEvent*) ```
void q_widget_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnMousePressEvent((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, QMouseEvent* event ```
void q_widget_qbase_mouse_press_event(void* self, void* event) {
    QWidget_QBaseMousePressEvent((QWidget*)self, (QMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// ``` QWidget* self, QMouseEvent* event ```
void q_widget_mouse_release_event(void* self, void* event) {
    QWidget_MouseReleaseEvent((QWidget*)self, (QMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QMouseEvent*) ```
void q_widget_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnMouseReleaseEvent((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, QMouseEvent* event ```
void q_widget_qbase_mouse_release_event(void* self, void* event) {
    QWidget_QBaseMouseReleaseEvent((QWidget*)self, (QMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// ``` QWidget* self, QMouseEvent* event ```
void q_widget_mouse_double_click_event(void* self, void* event) {
    QWidget_MouseDoubleClickEvent((QWidget*)self, (QMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QMouseEvent*) ```
void q_widget_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnMouseDoubleClickEvent((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, QMouseEvent* event ```
void q_widget_qbase_mouse_double_click_event(void* self, void* event) {
    QWidget_QBaseMouseDoubleClickEvent((QWidget*)self, (QMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// ``` QWidget* self, QMouseEvent* event ```
void q_widget_mouse_move_event(void* self, void* event) {
    QWidget_MouseMoveEvent((QWidget*)self, (QMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QMouseEvent*) ```
void q_widget_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnMouseMoveEvent((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, QMouseEvent* event ```
void q_widget_qbase_mouse_move_event(void* self, void* event) {
    QWidget_QBaseMouseMoveEvent((QWidget*)self, (QMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// ``` QWidget* self, QWheelEvent* event ```
void q_widget_wheel_event(void* self, void* event) {
    QWidget_WheelEvent((QWidget*)self, (QWheelEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QWheelEvent*) ```
void q_widget_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnWheelEvent((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, QWheelEvent* event ```
void q_widget_qbase_wheel_event(void* self, void* event) {
    QWidget_QBaseWheelEvent((QWidget*)self, (QWheelEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// ``` QWidget* self, QKeyEvent* event ```
void q_widget_key_press_event(void* self, void* event) {
    QWidget_KeyPressEvent((QWidget*)self, (QKeyEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QKeyEvent*) ```
void q_widget_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnKeyPressEvent((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, QKeyEvent* event ```
void q_widget_qbase_key_press_event(void* self, void* event) {
    QWidget_QBaseKeyPressEvent((QWidget*)self, (QKeyEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// ``` QWidget* self, QKeyEvent* event ```
void q_widget_key_release_event(void* self, void* event) {
    QWidget_KeyReleaseEvent((QWidget*)self, (QKeyEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QKeyEvent*) ```
void q_widget_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnKeyReleaseEvent((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, QKeyEvent* event ```
void q_widget_qbase_key_release_event(void* self, void* event) {
    QWidget_QBaseKeyReleaseEvent((QWidget*)self, (QKeyEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// ``` QWidget* self, QFocusEvent* event ```
void q_widget_focus_in_event(void* self, void* event) {
    QWidget_FocusInEvent((QWidget*)self, (QFocusEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QFocusEvent*) ```
void q_widget_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnFocusInEvent((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, QFocusEvent* event ```
void q_widget_qbase_focus_in_event(void* self, void* event) {
    QWidget_QBaseFocusInEvent((QWidget*)self, (QFocusEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// ``` QWidget* self, QFocusEvent* event ```
void q_widget_focus_out_event(void* self, void* event) {
    QWidget_FocusOutEvent((QWidget*)self, (QFocusEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QFocusEvent*) ```
void q_widget_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnFocusOutEvent((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, QFocusEvent* event ```
void q_widget_qbase_focus_out_event(void* self, void* event) {
    QWidget_QBaseFocusOutEvent((QWidget*)self, (QFocusEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// ``` QWidget* self, QEnterEvent* event ```
void q_widget_enter_event(void* self, void* event) {
    QWidget_EnterEvent((QWidget*)self, (QEnterEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QEnterEvent*) ```
void q_widget_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnEnterEvent((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, QEnterEvent* event ```
void q_widget_qbase_enter_event(void* self, void* event) {
    QWidget_QBaseEnterEvent((QWidget*)self, (QEnterEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// ``` QWidget* self, QEvent* event ```
void q_widget_leave_event(void* self, void* event) {
    QWidget_LeaveEvent((QWidget*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QEvent*) ```
void q_widget_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnLeaveEvent((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, QEvent* event ```
void q_widget_qbase_leave_event(void* self, void* event) {
    QWidget_QBaseLeaveEvent((QWidget*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// ``` QWidget* self, QPaintEvent* event ```
void q_widget_paint_event(void* self, void* event) {
    QWidget_PaintEvent((QWidget*)self, (QPaintEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QPaintEvent*) ```
void q_widget_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnPaintEvent((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, QPaintEvent* event ```
void q_widget_qbase_paint_event(void* self, void* event) {
    QWidget_QBasePaintEvent((QWidget*)self, (QPaintEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// ``` QWidget* self, QMoveEvent* event ```
void q_widget_move_event(void* self, void* event) {
    QWidget_MoveEvent((QWidget*)self, (QMoveEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QMoveEvent*) ```
void q_widget_on_move_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnMoveEvent((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, QMoveEvent* event ```
void q_widget_qbase_move_event(void* self, void* event) {
    QWidget_QBaseMoveEvent((QWidget*)self, (QMoveEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// ``` QWidget* self, QResizeEvent* event ```
void q_widget_resize_event(void* self, void* event) {
    QWidget_ResizeEvent((QWidget*)self, (QResizeEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QResizeEvent*) ```
void q_widget_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnResizeEvent((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, QResizeEvent* event ```
void q_widget_qbase_resize_event(void* self, void* event) {
    QWidget_QBaseResizeEvent((QWidget*)self, (QResizeEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// ``` QWidget* self, QCloseEvent* event ```
void q_widget_close_event(void* self, void* event) {
    QWidget_CloseEvent((QWidget*)self, (QCloseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QCloseEvent*) ```
void q_widget_on_close_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnCloseEvent((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, QCloseEvent* event ```
void q_widget_qbase_close_event(void* self, void* event) {
    QWidget_QBaseCloseEvent((QWidget*)self, (QCloseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// ``` QWidget* self, QContextMenuEvent* event ```
void q_widget_context_menu_event(void* self, void* event) {
    QWidget_ContextMenuEvent((QWidget*)self, (QContextMenuEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QContextMenuEvent*) ```
void q_widget_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnContextMenuEvent((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, QContextMenuEvent* event ```
void q_widget_qbase_context_menu_event(void* self, void* event) {
    QWidget_QBaseContextMenuEvent((QWidget*)self, (QContextMenuEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// ``` QWidget* self, QTabletEvent* event ```
void q_widget_tablet_event(void* self, void* event) {
    QWidget_TabletEvent((QWidget*)self, (QTabletEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QTabletEvent*) ```
void q_widget_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnTabletEvent((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, QTabletEvent* event ```
void q_widget_qbase_tablet_event(void* self, void* event) {
    QWidget_QBaseTabletEvent((QWidget*)self, (QTabletEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// ``` QWidget* self, QActionEvent* event ```
void q_widget_action_event(void* self, void* event) {
    QWidget_ActionEvent((QWidget*)self, (QActionEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QActionEvent*) ```
void q_widget_on_action_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnActionEvent((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, QActionEvent* event ```
void q_widget_qbase_action_event(void* self, void* event) {
    QWidget_QBaseActionEvent((QWidget*)self, (QActionEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// ``` QWidget* self, QDragEnterEvent* event ```
void q_widget_drag_enter_event(void* self, void* event) {
    QWidget_DragEnterEvent((QWidget*)self, (QDragEnterEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QDragEnterEvent*) ```
void q_widget_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnDragEnterEvent((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, QDragEnterEvent* event ```
void q_widget_qbase_drag_enter_event(void* self, void* event) {
    QWidget_QBaseDragEnterEvent((QWidget*)self, (QDragEnterEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// ``` QWidget* self, QDragMoveEvent* event ```
void q_widget_drag_move_event(void* self, void* event) {
    QWidget_DragMoveEvent((QWidget*)self, (QDragMoveEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QDragMoveEvent*) ```
void q_widget_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnDragMoveEvent((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, QDragMoveEvent* event ```
void q_widget_qbase_drag_move_event(void* self, void* event) {
    QWidget_QBaseDragMoveEvent((QWidget*)self, (QDragMoveEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// ``` QWidget* self, QDragLeaveEvent* event ```
void q_widget_drag_leave_event(void* self, void* event) {
    QWidget_DragLeaveEvent((QWidget*)self, (QDragLeaveEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QDragLeaveEvent*) ```
void q_widget_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnDragLeaveEvent((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, QDragLeaveEvent* event ```
void q_widget_qbase_drag_leave_event(void* self, void* event) {
    QWidget_QBaseDragLeaveEvent((QWidget*)self, (QDragLeaveEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// ``` QWidget* self, QDropEvent* event ```
void q_widget_drop_event(void* self, void* event) {
    QWidget_DropEvent((QWidget*)self, (QDropEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QDropEvent*) ```
void q_widget_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnDropEvent((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, QDropEvent* event ```
void q_widget_qbase_drop_event(void* self, void* event) {
    QWidget_QBaseDropEvent((QWidget*)self, (QDropEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// ``` QWidget* self, QShowEvent* event ```
void q_widget_show_event(void* self, void* event) {
    QWidget_ShowEvent((QWidget*)self, (QShowEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QShowEvent*) ```
void q_widget_on_show_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnShowEvent((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, QShowEvent* event ```
void q_widget_qbase_show_event(void* self, void* event) {
    QWidget_QBaseShowEvent((QWidget*)self, (QShowEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// ``` QWidget* self, QHideEvent* event ```
void q_widget_hide_event(void* self, void* event) {
    QWidget_HideEvent((QWidget*)self, (QHideEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QHideEvent*) ```
void q_widget_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnHideEvent((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, QHideEvent* event ```
void q_widget_qbase_hide_event(void* self, void* event) {
    QWidget_QBaseHideEvent((QWidget*)self, (QHideEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// ``` QWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_widget_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QWidget_NativeEvent((QWidget*)self, qstring(eventType), message, result);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, bool (*slot)(QWidget*, const char*, void*, intptr_t*) ```
void q_widget_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QWidget_OnNativeEvent((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_widget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QWidget_QBaseNativeEvent((QWidget*)self, qstring(eventType), message, result);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// ``` QWidget* self, QEvent* param1 ```
void q_widget_change_event(void* self, void* param1) {
    QWidget_ChangeEvent((QWidget*)self, (QEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QEvent*) ```
void q_widget_on_change_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnChangeEvent((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, QEvent* param1 ```
void q_widget_qbase_change_event(void* self, void* param1) {
    QWidget_QBaseChangeEvent((QWidget*)self, (QEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// ``` QWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_widget_metric(void* self, int64_t param1) {
    return QWidget_Metric((QWidget*)self, param1);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, int32_t (*slot)(QWidget*, enum QPaintDevice__PaintDeviceMetric) ```
void q_widget_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QWidget_OnMetric((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_widget_qbase_metric(void* self, int64_t param1) {
    return QWidget_QBaseMetric((QWidget*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// ``` QWidget* self, QPainter* painter ```
void q_widget_init_painter(void* self, void* painter) {
    QWidget_InitPainter((QWidget*)self, (QPainter*)painter);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QPainter*) ```
void q_widget_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QWidget_OnInitPainter((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, QPainter* painter ```
void q_widget_qbase_init_painter(void* self, void* painter) {
    QWidget_QBaseInitPainter((QWidget*)self, (QPainter*)painter);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// ``` QWidget* self, QPoint* offset ```
QPaintDevice* q_widget_redirected(void* self, void* offset) {
    return QWidget_Redirected((QWidget*)self, (QPoint*)offset);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, QPaintDevice* (*slot)(QWidget*, QPoint*) ```
void q_widget_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QWidget_OnRedirected((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, QPoint* offset ```
QPaintDevice* q_widget_qbase_redirected(void* self, void* offset) {
    return QWidget_QBaseRedirected((QWidget*)self, (QPoint*)offset);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// ``` QWidget* self ```
QPainter* q_widget_shared_painter(void* self) {
    return QWidget_SharedPainter((QWidget*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, QPainter* (*slot)() ```
void q_widget_on_shared_painter(void* self, QPainter* (*slot)()) {
    QWidget_OnSharedPainter((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self ```
QPainter* q_widget_qbase_shared_painter(void* self) {
    return QWidget_QBaseSharedPainter((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// ``` QWidget* self, QInputMethodEvent* param1 ```
void q_widget_input_method_event(void* self, void* param1) {
    QWidget_InputMethodEvent((QWidget*)self, (QInputMethodEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QInputMethodEvent*) ```
void q_widget_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnInputMethodEvent((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, QInputMethodEvent* param1 ```
void q_widget_qbase_input_method_event(void* self, void* param1) {
    QWidget_QBaseInputMethodEvent((QWidget*)self, (QInputMethodEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// ``` QWidget* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_widget_input_method_query(void* self, int64_t param1) {
    return QWidget_InputMethodQuery((QWidget*)self, param1);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, QVariant* (*slot)(QWidget*, enum Qt__InputMethodQuery) ```
void q_widget_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QWidget_OnInputMethodQuery((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_widget_qbase_input_method_query(void* self, int64_t param1) {
    return QWidget_QBaseInputMethodQuery((QWidget*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QWidget* self ```
int64_t q_widget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QWidget* self, int hints ```
void q_widget_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// ``` QWidget* self ```
void q_widget_update_micro_focus(void* self) {
    QWidget_UpdateMicroFocus((QWidget*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)() ```
void q_widget_on_update_micro_focus(void* self, void (*slot)()) {
    QWidget_OnUpdateMicroFocus((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self ```
void q_widget_qbase_update_micro_focus(void* self) {
    QWidget_QBaseUpdateMicroFocus((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// ``` QWidget* self ```
void q_widget_create(void* self) {
    QWidget_Create((QWidget*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)() ```
void q_widget_on_create(void* self, void (*slot)()) {
    QWidget_OnCreate((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self ```
void q_widget_qbase_create(void* self) {
    QWidget_QBaseCreate((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// ``` QWidget* self ```
void q_widget_destroy(void* self) {
    QWidget_Destroy((QWidget*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)() ```
void q_widget_on_destroy(void* self, void (*slot)()) {
    QWidget_OnDestroy((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self ```
void q_widget_qbase_destroy(void* self) {
    QWidget_QBaseDestroy((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// ``` QWidget* self, bool next ```
bool q_widget_focus_next_prev_child(void* self, bool next) {
    return QWidget_FocusNextPrevChild((QWidget*)self, next);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, bool (*slot)(QWidget*, bool) ```
void q_widget_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QWidget_OnFocusNextPrevChild((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, bool next ```
bool q_widget_qbase_focus_next_prev_child(void* self, bool next) {
    return QWidget_QBaseFocusNextPrevChild((QWidget*)self, next);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// ``` QWidget* self ```
bool q_widget_focus_next_child(void* self) {
    return QWidget_FocusNextChild((QWidget*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, bool (*slot)() ```
void q_widget_on_focus_next_child(void* self, bool (*slot)()) {
    QWidget_OnFocusNextChild((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self ```
bool q_widget_qbase_focus_next_child(void* self) {
    return QWidget_QBaseFocusNextChild((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// ``` QWidget* self ```
bool q_widget_focus_previous_child(void* self) {
    return QWidget_FocusPreviousChild((QWidget*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, bool (*slot)() ```
void q_widget_on_focus_previous_child(void* self, bool (*slot)()) {
    QWidget_OnFocusPreviousChild((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self ```
bool q_widget_qbase_focus_previous_child(void* self) {
    return QWidget_QBaseFocusPreviousChild((QWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_widget_tr2(const char* s, const char* c) {
    libqt_string _str = QWidget_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_widget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QWidget_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWidget* self, QPaintDevice* target, QPoint* targetOffset ```
void q_widget_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_widget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_widget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWidget* self, QPainter* painter, QPoint* targetOffset ```
void q_widget_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_widget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_widget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QWidget* self, QRect* rectangle ```
QPixmap* q_widget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QWidget* self, enum Qt__GestureType typeVal, int flags ```
void q_widget_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QWidget* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_widget_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QWidget* self, int id, bool enable ```
void q_widget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QWidget* self, int id, bool enable ```
void q_widget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QWidget* self, enum Qt__WindowType param1, bool on ```
void q_widget_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QWidget* self, enum Qt__WidgetAttribute param1, bool on ```
void q_widget_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_widget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_widget_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// ``` QWidget* self, enum Qt__InputMethodQuery query ```
void q_widget_update_micro_focus1(void* self, int64_t query) {
    QWidget_UpdateMicroFocus1((QWidget*)self, query);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, enum Qt__InputMethodQuery) ```
void q_widget_on_update_micro_focus1(void* self, void (*slot)(void*, int64_t)) {
    QWidget_OnUpdateMicroFocus1((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, enum Qt__InputMethodQuery query ```
void q_widget_qbase_update_micro_focus1(void* self, int64_t query) {
    QWidget_QBaseUpdateMicroFocus1((QWidget*)self, query);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// ``` QWidget* self, uint64_t param1 ```
void q_widget_create1(void* self, uint64_t param1) {
    QWidget_Create1((QWidget*)self, param1);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, uint64_t) ```
void q_widget_on_create1(void* self, void (*slot)(void*, uint64_t)) {
    QWidget_OnCreate1((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, uint64_t param1 ```
void q_widget_qbase_create1(void* self, uint64_t param1) {
    QWidget_QBaseCreate1((QWidget*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// ``` QWidget* self, uint64_t param1, bool initializeWindow ```
void q_widget_create2(void* self, uint64_t param1, bool initializeWindow) {
    QWidget_Create2((QWidget*)self, param1, initializeWindow);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, uint64_t, bool) ```
void q_widget_on_create2(void* self, void (*slot)(void*, uint64_t, bool)) {
    QWidget_OnCreate2((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, uint64_t param1, bool initializeWindow ```
void q_widget_qbase_create2(void* self, uint64_t param1, bool initializeWindow) {
    QWidget_QBaseCreate2((QWidget*)self, param1, initializeWindow);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// ``` QWidget* self, uint64_t param1, bool initializeWindow, bool destroyOldWindow ```
void q_widget_create3(void* self, uint64_t param1, bool initializeWindow, bool destroyOldWindow) {
    QWidget_Create3((QWidget*)self, param1, initializeWindow, destroyOldWindow);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, uint64_t, bool, bool) ```
void q_widget_on_create3(void* self, void (*slot)(void*, uint64_t, bool, bool)) {
    QWidget_OnCreate3((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, uint64_t param1, bool initializeWindow, bool destroyOldWindow ```
void q_widget_qbase_create3(void* self, uint64_t param1, bool initializeWindow, bool destroyOldWindow) {
    QWidget_QBaseCreate3((QWidget*)self, param1, initializeWindow, destroyOldWindow);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// ``` QWidget* self, bool destroyWindow ```
void q_widget_destroy1(void* self, bool destroyWindow) {
    QWidget_Destroy1((QWidget*)self, destroyWindow);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, bool) ```
void q_widget_on_destroy1(void* self, void (*slot)(void*, bool)) {
    QWidget_OnDestroy1((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, bool destroyWindow ```
void q_widget_qbase_destroy1(void* self, bool destroyWindow) {
    QWidget_QBaseDestroy1((QWidget*)self, destroyWindow);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// ``` QWidget* self, bool destroyWindow, bool destroySubWindows ```
void q_widget_destroy2(void* self, bool destroyWindow, bool destroySubWindows) {
    QWidget_Destroy2((QWidget*)self, destroyWindow, destroySubWindows);
}

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, bool, bool) ```
void q_widget_on_destroy2(void* self, void (*slot)(void*, bool, bool)) {
    QWidget_OnDestroy2((QWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidget* self, bool destroyWindow, bool destroySubWindows ```
void q_widget_qbase_destroy2(void* self, bool destroyWindow, bool destroySubWindows) {
    QWidget_QBaseDestroy2((QWidget*)self, destroyWindow, destroySubWindows);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWidget* self ```
const char* q_widget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWidget* self, const char* name ```
void q_widget_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWidget* self ```
bool q_widget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWidget* self ```
bool q_widget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWidget* self ```
bool q_widget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWidget* self ```
bool q_widget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWidget* self, bool b ```
bool q_widget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWidget* self ```
QThread* q_widget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWidget* self, QThread* thread ```
void q_widget_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWidget* self, int interval ```
int32_t q_widget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWidget* self, int id ```
void q_widget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWidget* self ```
libqt_list /* of QObject* */ q_widget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWidget* self, QObject* filterObj ```
void q_widget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWidget* self, QObject* obj ```
void q_widget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_widget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWidget* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_widget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_widget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_widget_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWidget* self ```
void q_widget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWidget* self ```
void q_widget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWidget* self, const char* name, QVariant* value ```
bool q_widget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWidget* self, const char* name ```
QVariant* q_widget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWidget* self ```
const char** q_widget_dynamic_property_names(void* self) {
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
/// ``` QWidget* self ```
QBindingStorage* q_widget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWidget* self ```
QBindingStorage* q_widget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWidget* self ```
void q_widget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QWidget* self, void (*slot)(QObject*) ```
void q_widget_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWidget* self ```
QObject* q_widget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWidget* self, const char* classname ```
bool q_widget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWidget* self ```
void q_widget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWidget* self, int interval, enum Qt__TimerType timerType ```
int32_t q_widget_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_widget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWidget* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_widget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWidget* self, QObject* param1 ```
void q_widget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QWidget* self, void (*slot)(QObject*, QObject*) ```
void q_widget_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QWidget* self ```
bool q_widget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QWidget* self ```
int32_t q_widget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QWidget* self ```
int32_t q_widget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QWidget* self ```
int32_t q_widget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QWidget* self ```
int32_t q_widget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QWidget* self ```
int32_t q_widget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QWidget* self ```
int32_t q_widget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QWidget* self ```
double q_widget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QWidget* self ```
double q_widget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QWidget* self ```
int32_t q_widget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QWidget* self ```
int32_t q_widget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_widget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidget* self, QObject* watched, QEvent* event ```
bool q_widget_event_filter(void* self, void* watched, void* event) {
    return QWidget_EventFilter((QWidget*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidget* self, QObject* watched, QEvent* event ```
bool q_widget_qbase_event_filter(void* self, void* watched, void* event) {
    return QWidget_QBaseEventFilter((QWidget*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidget* self, bool (*slot)(QWidget*, QObject*, QEvent*) ```
void q_widget_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QWidget_OnEventFilter((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidget* self, QTimerEvent* event ```
void q_widget_timer_event(void* self, void* event) {
    QWidget_TimerEvent((QWidget*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidget* self, QTimerEvent* event ```
void q_widget_qbase_timer_event(void* self, void* event) {
    QWidget_QBaseTimerEvent((QWidget*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QTimerEvent*) ```
void q_widget_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnTimerEvent((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidget* self, QChildEvent* event ```
void q_widget_child_event(void* self, void* event) {
    QWidget_ChildEvent((QWidget*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidget* self, QChildEvent* event ```
void q_widget_qbase_child_event(void* self, void* event) {
    QWidget_QBaseChildEvent((QWidget*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QChildEvent*) ```
void q_widget_on_child_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnChildEvent((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidget* self, QEvent* event ```
void q_widget_custom_event(void* self, void* event) {
    QWidget_CustomEvent((QWidget*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidget* self, QEvent* event ```
void q_widget_qbase_custom_event(void* self, void* event) {
    QWidget_QBaseCustomEvent((QWidget*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QEvent*) ```
void q_widget_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnCustomEvent((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidget* self, QMetaMethod* signal ```
void q_widget_connect_notify(void* self, void* signal) {
    QWidget_ConnectNotify((QWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidget* self, QMetaMethod* signal ```
void q_widget_qbase_connect_notify(void* self, void* signal) {
    QWidget_QBaseConnectNotify((QWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QMetaMethod*) ```
void q_widget_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QWidget_OnConnectNotify((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidget* self, QMetaMethod* signal ```
void q_widget_disconnect_notify(void* self, void* signal) {
    QWidget_DisconnectNotify((QWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidget* self, QMetaMethod* signal ```
void q_widget_qbase_disconnect_notify(void* self, void* signal) {
    QWidget_QBaseDisconnectNotify((QWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QMetaMethod*) ```
void q_widget_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QWidget_OnDisconnectNotify((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidget* self ```
QObject* q_widget_sender(void* self) {
    return QWidget_Sender((QWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidget* self ```
QObject* q_widget_qbase_sender(void* self) {
    return QWidget_QBaseSender((QWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidget* self, QObject* (*slot)() ```
void q_widget_on_sender(void* self, QObject* (*slot)()) {
    QWidget_OnSender((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidget* self ```
int32_t q_widget_sender_signal_index(void* self) {
    return QWidget_SenderSignalIndex((QWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidget* self ```
int32_t q_widget_qbase_sender_signal_index(void* self) {
    return QWidget_QBaseSenderSignalIndex((QWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidget* self, int32_t (*slot)() ```
void q_widget_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QWidget_OnSenderSignalIndex((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidget* self, const char* signal ```
int32_t q_widget_receivers(void* self, const char* signal) {
    return QWidget_Receivers((QWidget*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidget* self, const char* signal ```
int32_t q_widget_qbase_receivers(void* self, const char* signal) {
    return QWidget_QBaseReceivers((QWidget*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidget* self, int32_t (*slot)(QWidget*, const char*) ```
void q_widget_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QWidget_OnReceivers((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidget* self, QMetaMethod* signal ```
bool q_widget_is_signal_connected(void* self, void* signal) {
    return QWidget_IsSignalConnected((QWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidget* self, QMetaMethod* signal ```
bool q_widget_qbase_is_signal_connected(void* self, void* signal) {
    return QWidget_QBaseIsSignalConnected((QWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidget* self, bool (*slot)(QWidget*, QMetaMethod*) ```
void q_widget_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QWidget_OnIsSignalConnected((QWidget*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QWidget* self ```
void q_widget_delete(void* self) {
    QWidget_Delete((QWidget*)(self));
}