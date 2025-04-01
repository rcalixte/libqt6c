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

QToolBox* q_toolbox_new(void* parent) {
    return QToolBox_new((QWidget*)parent);
}

QToolBox* q_toolbox_new2() {
    return QToolBox_new2();
}

QToolBox* q_toolbox_new3(void* parent, int64_t f) {
    return QToolBox_new3((QWidget*)parent, f);
}

QMetaObject* q_toolbox_meta_object(void* self) {
    return QToolBox_MetaObject((QToolBox*)self);
}

void* q_toolbox_metacast(void* self, const char* param1) {
    return QToolBox_Metacast((QToolBox*)self, param1);
}

int32_t q_toolbox_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QToolBox_Metacall((QToolBox*)self, param1, param2, param3);
}

void q_toolbox_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QToolBox_OnMetacall((QToolBox*)self, (intptr_t)slot);
}

int32_t q_toolbox_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QToolBox_QBaseMetacall((QToolBox*)self, param1, param2, param3);
}

const char* q_toolbox_tr(const char* s) {
    libqt_string _str = QToolBox_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_toolbox_add_item(void* self, void* widget, const char* text) {
    return QToolBox_AddItem((QToolBox*)self, (QWidget*)widget, qstring(text));
}

int32_t q_toolbox_add_item2(void* self, void* widget, void* icon, const char* text) {
    return QToolBox_AddItem2((QToolBox*)self, (QWidget*)widget, (QIcon*)icon, qstring(text));
}

int32_t q_toolbox_insert_item(void* self, int index, void* widget, const char* text) {
    return QToolBox_InsertItem((QToolBox*)self, index, (QWidget*)widget, qstring(text));
}

int32_t q_toolbox_insert_item2(void* self, int index, void* widget, void* icon, const char* text) {
    return QToolBox_InsertItem2((QToolBox*)self, index, (QWidget*)widget, (QIcon*)icon, qstring(text));
}

void q_toolbox_remove_item(void* self, int index) {
    QToolBox_RemoveItem((QToolBox*)self, index);
}

void q_toolbox_set_item_enabled(void* self, int index, bool enabled) {
    QToolBox_SetItemEnabled((QToolBox*)self, index, enabled);
}

bool q_toolbox_is_item_enabled(void* self, int index) {
    return QToolBox_IsItemEnabled((QToolBox*)self, index);
}

void q_toolbox_set_item_text(void* self, int index, const char* text) {
    QToolBox_SetItemText((QToolBox*)self, index, qstring(text));
}

const char* q_toolbox_item_text(void* self, int index) {
    libqt_string _str = QToolBox_ItemText((QToolBox*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_toolbox_set_item_icon(void* self, int index, void* icon) {
    QToolBox_SetItemIcon((QToolBox*)self, index, (QIcon*)icon);
}

QIcon* q_toolbox_item_icon(void* self, int index) {
    return QToolBox_ItemIcon((QToolBox*)self, index);
}

void q_toolbox_set_item_tool_tip(void* self, int index, const char* toolTip) {
    QToolBox_SetItemToolTip((QToolBox*)self, index, qstring(toolTip));
}

const char* q_toolbox_item_tool_tip(void* self, int index) {
    libqt_string _str = QToolBox_ItemToolTip((QToolBox*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_toolbox_current_index(void* self) {
    return QToolBox_CurrentIndex((QToolBox*)self);
}

QWidget* q_toolbox_current_widget(void* self) {
    return QToolBox_CurrentWidget((QToolBox*)self);
}

QWidget* q_toolbox_widget(void* self, int index) {
    return QToolBox_Widget((QToolBox*)self, index);
}

int32_t q_toolbox_index_of(void* self, void* widget) {
    return QToolBox_IndexOf((QToolBox*)self, (QWidget*)widget);
}

int32_t q_toolbox_count(void* self) {
    return QToolBox_Count((QToolBox*)self);
}

void q_toolbox_set_current_index(void* self, int index) {
    QToolBox_SetCurrentIndex((QToolBox*)self, index);
}

void q_toolbox_set_current_widget(void* self, void* widget) {
    QToolBox_SetCurrentWidget((QToolBox*)self, (QWidget*)widget);
}

void q_toolbox_current_changed(void* self, int index) {
    QToolBox_CurrentChanged((QToolBox*)self, index);
}

void q_toolbox_on_current_changed(void* self, void (*slot)(void*, int)) {
    QToolBox_Connect_CurrentChanged((QToolBox*)self, (intptr_t)slot);
}

bool q_toolbox_event(void* self, void* e) {
    return QToolBox_Event((QToolBox*)self, (QEvent*)e);
}

void q_toolbox_on_event(void* self, bool (*slot)(void*, void*)) {
    QToolBox_OnEvent((QToolBox*)self, (intptr_t)slot);
}

bool q_toolbox_qbase_event(void* self, void* e) {
    return QToolBox_QBaseEvent((QToolBox*)self, (QEvent*)e);
}

void q_toolbox_item_inserted(void* self, int index) {
    QToolBox_ItemInserted((QToolBox*)self, index);
}

void q_toolbox_on_item_inserted(void* self, void (*slot)(void*, int)) {
    QToolBox_OnItemInserted((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_qbase_item_inserted(void* self, int index) {
    QToolBox_QBaseItemInserted((QToolBox*)self, index);
}

void q_toolbox_item_removed(void* self, int index) {
    QToolBox_ItemRemoved((QToolBox*)self, index);
}

void q_toolbox_on_item_removed(void* self, void (*slot)(void*, int)) {
    QToolBox_OnItemRemoved((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_qbase_item_removed(void* self, int index) {
    QToolBox_QBaseItemRemoved((QToolBox*)self, index);
}

void q_toolbox_show_event(void* self, void* e) {
    QToolBox_ShowEvent((QToolBox*)self, (QShowEvent*)e);
}

void q_toolbox_on_show_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnShowEvent((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_qbase_show_event(void* self, void* e) {
    QToolBox_QBaseShowEvent((QToolBox*)self, (QShowEvent*)e);
}

void q_toolbox_change_event(void* self, void* param1) {
    QToolBox_ChangeEvent((QToolBox*)self, (QEvent*)param1);
}

void q_toolbox_on_change_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnChangeEvent((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_qbase_change_event(void* self, void* param1) {
    QToolBox_QBaseChangeEvent((QToolBox*)self, (QEvent*)param1);
}

const char* q_toolbox_tr2(const char* s, const char* c) {
    libqt_string _str = QToolBox_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_toolbox_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QToolBox_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_toolbox_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void q_toolbox_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t q_toolbox_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int64_t q_toolbox_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void q_toolbox_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int64_t q_toolbox_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void q_toolbox_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t q_toolbox_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void q_toolbox_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t q_toolbox_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void q_toolbox_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* q_toolbox_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void q_toolbox_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t q_toolbox_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_toolbox_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_toolbox_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_toolbox_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_toolbox_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_toolbox_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_toolbox_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_toolbox_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_toolbox_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_toolbox_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_toolbox_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_toolbox_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_toolbox_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_toolbox_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_toolbox_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_toolbox_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_toolbox_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

QRect* q_toolbox_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_toolbox_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_toolbox_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_toolbox_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_toolbox_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_toolbox_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_toolbox_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_toolbox_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_toolbox_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_toolbox_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_toolbox_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_toolbox_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_toolbox_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_toolbox_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_toolbox_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_toolbox_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_toolbox_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_toolbox_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_toolbox_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_toolbox_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_toolbox_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_toolbox_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_toolbox_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_toolbox_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_toolbox_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_toolbox_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_toolbox_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_toolbox_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_toolbox_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_toolbox_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_toolbox_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_toolbox_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_toolbox_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_toolbox_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_toolbox_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_toolbox_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_toolbox_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_toolbox_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_toolbox_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_toolbox_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_toolbox_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_toolbox_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_toolbox_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_toolbox_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_toolbox_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_toolbox_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_toolbox_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_toolbox_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_toolbox_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_toolbox_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_toolbox_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

QPalette* q_toolbox_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_toolbox_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_toolbox_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_toolbox_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_toolbox_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_toolbox_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

QFont* q_toolbox_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_toolbox_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_toolbox_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_toolbox_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_toolbox_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_toolbox_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_toolbox_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_toolbox_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_toolbox_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_toolbox_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_toolbox_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_toolbox_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_toolbox_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_toolbox_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

QRegion* q_toolbox_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_toolbox_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_toolbox_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_toolbox_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_toolbox_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_toolbox_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_toolbox_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_toolbox_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_toolbox_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_toolbox_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_toolbox_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_toolbox_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_toolbox_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_toolbox_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_toolbox_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_toolbox_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_toolbox_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_toolbox_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_toolbox_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_toolbox_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_toolbox_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_toolbox_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_toolbox_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_toolbox_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_toolbox_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_toolbox_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_toolbox_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_toolbox_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_toolbox_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_toolbox_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_toolbox_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_toolbox_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_toolbox_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_toolbox_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_toolbox_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_toolbox_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_toolbox_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_toolbox_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_toolbox_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_toolbox_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_toolbox_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_toolbox_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_toolbox_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_toolbox_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_toolbox_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_toolbox_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_toolbox_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_toolbox_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_toolbox_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

int64_t q_toolbox_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_toolbox_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_toolbox_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_toolbox_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_toolbox_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_toolbox_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_toolbox_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_toolbox_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_toolbox_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_toolbox_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

void q_toolbox_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_toolbox_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_toolbox_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_toolbox_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_toolbox_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_toolbox_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_toolbox_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_toolbox_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_toolbox_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_toolbox_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_toolbox_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_toolbox_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_toolbox_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_toolbox_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_toolbox_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_toolbox_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

void q_toolbox_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_toolbox_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_toolbox_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

void q_toolbox_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_toolbox_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_toolbox_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_toolbox_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_toolbox_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_toolbox_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_toolbox_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_toolbox_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_toolbox_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_toolbox_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_toolbox_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_toolbox_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_toolbox_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_toolbox_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

void q_toolbox_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_toolbox_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

void q_toolbox_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_toolbox_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

char* q_toolbox_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_toolbox_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_toolbox_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_toolbox_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_toolbox_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_toolbox_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_toolbox_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_toolbox_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_toolbox_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_toolbox_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_toolbox_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_toolbox_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_toolbox_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_toolbox_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_toolbox_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_toolbox_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_toolbox_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_toolbox_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

QMargins* q_toolbox_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_toolbox_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_toolbox_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_toolbox_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_toolbox_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_toolbox_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_toolbox_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_toolbox_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_toolbox_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_toolbox_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_toolbox_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_toolbox_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_toolbox_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_toolbox_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_toolbox_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

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

void q_toolbox_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_toolbox_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_toolbox_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_toolbox_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

QAction* q_toolbox_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_toolbox_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_toolbox_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_toolbox_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_toolbox_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_toolbox_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_toolbox_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_toolbox_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_toolbox_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_toolbox_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_toolbox_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_toolbox_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

void q_toolbox_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_toolbox_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_toolbox_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_toolbox_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_toolbox_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_toolbox_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_toolbox_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_toolbox_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_toolbox_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_toolbox_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_toolbox_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_toolbox_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_toolbox_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

void q_toolbox_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_toolbox_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

void q_toolbox_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_toolbox_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

void q_toolbox_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_toolbox_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

int64_t q_toolbox_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_toolbox_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_toolbox_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_toolbox_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_toolbox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_toolbox_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_toolbox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_toolbox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_toolbox_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_toolbox_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_toolbox_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_toolbox_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_toolbox_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_toolbox_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_toolbox_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_toolbox_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_toolbox_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_toolbox_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_toolbox_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_toolbox_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_toolbox_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_toolbox_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_toolbox_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_toolbox_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_toolbox_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_toolbox_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_toolbox_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_toolbox_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_toolbox_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_toolbox_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_toolbox_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_toolbox_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_toolbox_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_toolbox_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_toolbox_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_toolbox_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_toolbox_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_toolbox_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_toolbox_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

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

QBindingStorage* q_toolbox_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_toolbox_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_toolbox_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_toolbox_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_toolbox_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_toolbox_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_toolbox_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_toolbox_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_toolbox_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_toolbox_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_toolbox_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_toolbox_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_toolbox_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_toolbox_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_toolbox_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_toolbox_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_toolbox_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_toolbox_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_toolbox_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_toolbox_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_toolbox_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_toolbox_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_toolbox_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_toolbox_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

QSize* q_toolbox_size_hint(void* self) {
    return QToolBox_SizeHint((QToolBox*)self);
}

QSize* q_toolbox_qbase_size_hint(void* self) {
    return QToolBox_QBaseSizeHint((QToolBox*)self);
}

void q_toolbox_on_size_hint(void* self, QSize* (*slot)()) {
    QToolBox_OnSizeHint((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_paint_event(void* self, void* param1) {
    QToolBox_PaintEvent((QToolBox*)self, (QPaintEvent*)param1);
}

void q_toolbox_qbase_paint_event(void* self, void* param1) {
    QToolBox_QBasePaintEvent((QToolBox*)self, (QPaintEvent*)param1);
}

void q_toolbox_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnPaintEvent((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_init_style_option(void* self, void* option) {
    QToolBox_InitStyleOption((QToolBox*)self, (QStyleOptionFrame*)option);
}

void q_toolbox_qbase_init_style_option(void* self, void* option) {
    QToolBox_QBaseInitStyleOption((QToolBox*)self, (QStyleOptionFrame*)option);
}

void q_toolbox_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnInitStyleOption((QToolBox*)self, (intptr_t)slot);
}

int32_t q_toolbox_dev_type(void* self) {
    return QToolBox_DevType((QToolBox*)self);
}

int32_t q_toolbox_qbase_dev_type(void* self) {
    return QToolBox_QBaseDevType((QToolBox*)self);
}

void q_toolbox_on_dev_type(void* self, int32_t (*slot)()) {
    QToolBox_OnDevType((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_set_visible(void* self, bool visible) {
    QToolBox_SetVisible((QToolBox*)self, visible);
}

void q_toolbox_qbase_set_visible(void* self, bool visible) {
    QToolBox_QBaseSetVisible((QToolBox*)self, visible);
}

void q_toolbox_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QToolBox_OnSetVisible((QToolBox*)self, (intptr_t)slot);
}

QSize* q_toolbox_minimum_size_hint(void* self) {
    return QToolBox_MinimumSizeHint((QToolBox*)self);
}

QSize* q_toolbox_qbase_minimum_size_hint(void* self) {
    return QToolBox_QBaseMinimumSizeHint((QToolBox*)self);
}

void q_toolbox_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QToolBox_OnMinimumSizeHint((QToolBox*)self, (intptr_t)slot);
}

int32_t q_toolbox_height_for_width(void* self, int param1) {
    return QToolBox_HeightForWidth((QToolBox*)self, param1);
}

int32_t q_toolbox_qbase_height_for_width(void* self, int param1) {
    return QToolBox_QBaseHeightForWidth((QToolBox*)self, param1);
}

void q_toolbox_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QToolBox_OnHeightForWidth((QToolBox*)self, (intptr_t)slot);
}

bool q_toolbox_has_height_for_width(void* self) {
    return QToolBox_HasHeightForWidth((QToolBox*)self);
}

bool q_toolbox_qbase_has_height_for_width(void* self) {
    return QToolBox_QBaseHasHeightForWidth((QToolBox*)self);
}

void q_toolbox_on_has_height_for_width(void* self, bool (*slot)()) {
    QToolBox_OnHasHeightForWidth((QToolBox*)self, (intptr_t)slot);
}

QPaintEngine* q_toolbox_paint_engine(void* self) {
    return QToolBox_PaintEngine((QToolBox*)self);
}

QPaintEngine* q_toolbox_qbase_paint_engine(void* self) {
    return QToolBox_QBasePaintEngine((QToolBox*)self);
}

void q_toolbox_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QToolBox_OnPaintEngine((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_mouse_press_event(void* self, void* event) {
    QToolBox_MousePressEvent((QToolBox*)self, (QMouseEvent*)event);
}

void q_toolbox_qbase_mouse_press_event(void* self, void* event) {
    QToolBox_QBaseMousePressEvent((QToolBox*)self, (QMouseEvent*)event);
}

void q_toolbox_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnMousePressEvent((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_mouse_release_event(void* self, void* event) {
    QToolBox_MouseReleaseEvent((QToolBox*)self, (QMouseEvent*)event);
}

void q_toolbox_qbase_mouse_release_event(void* self, void* event) {
    QToolBox_QBaseMouseReleaseEvent((QToolBox*)self, (QMouseEvent*)event);
}

void q_toolbox_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnMouseReleaseEvent((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_mouse_double_click_event(void* self, void* event) {
    QToolBox_MouseDoubleClickEvent((QToolBox*)self, (QMouseEvent*)event);
}

void q_toolbox_qbase_mouse_double_click_event(void* self, void* event) {
    QToolBox_QBaseMouseDoubleClickEvent((QToolBox*)self, (QMouseEvent*)event);
}

void q_toolbox_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnMouseDoubleClickEvent((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_mouse_move_event(void* self, void* event) {
    QToolBox_MouseMoveEvent((QToolBox*)self, (QMouseEvent*)event);
}

void q_toolbox_qbase_mouse_move_event(void* self, void* event) {
    QToolBox_QBaseMouseMoveEvent((QToolBox*)self, (QMouseEvent*)event);
}

void q_toolbox_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnMouseMoveEvent((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_wheel_event(void* self, void* event) {
    QToolBox_WheelEvent((QToolBox*)self, (QWheelEvent*)event);
}

void q_toolbox_qbase_wheel_event(void* self, void* event) {
    QToolBox_QBaseWheelEvent((QToolBox*)self, (QWheelEvent*)event);
}

void q_toolbox_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnWheelEvent((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_key_press_event(void* self, void* event) {
    QToolBox_KeyPressEvent((QToolBox*)self, (QKeyEvent*)event);
}

void q_toolbox_qbase_key_press_event(void* self, void* event) {
    QToolBox_QBaseKeyPressEvent((QToolBox*)self, (QKeyEvent*)event);
}

void q_toolbox_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnKeyPressEvent((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_key_release_event(void* self, void* event) {
    QToolBox_KeyReleaseEvent((QToolBox*)self, (QKeyEvent*)event);
}

void q_toolbox_qbase_key_release_event(void* self, void* event) {
    QToolBox_QBaseKeyReleaseEvent((QToolBox*)self, (QKeyEvent*)event);
}

void q_toolbox_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnKeyReleaseEvent((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_focus_in_event(void* self, void* event) {
    QToolBox_FocusInEvent((QToolBox*)self, (QFocusEvent*)event);
}

void q_toolbox_qbase_focus_in_event(void* self, void* event) {
    QToolBox_QBaseFocusInEvent((QToolBox*)self, (QFocusEvent*)event);
}

void q_toolbox_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnFocusInEvent((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_focus_out_event(void* self, void* event) {
    QToolBox_FocusOutEvent((QToolBox*)self, (QFocusEvent*)event);
}

void q_toolbox_qbase_focus_out_event(void* self, void* event) {
    QToolBox_QBaseFocusOutEvent((QToolBox*)self, (QFocusEvent*)event);
}

void q_toolbox_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnFocusOutEvent((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_enter_event(void* self, void* event) {
    QToolBox_EnterEvent((QToolBox*)self, (QEnterEvent*)event);
}

void q_toolbox_qbase_enter_event(void* self, void* event) {
    QToolBox_QBaseEnterEvent((QToolBox*)self, (QEnterEvent*)event);
}

void q_toolbox_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnEnterEvent((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_leave_event(void* self, void* event) {
    QToolBox_LeaveEvent((QToolBox*)self, (QEvent*)event);
}

void q_toolbox_qbase_leave_event(void* self, void* event) {
    QToolBox_QBaseLeaveEvent((QToolBox*)self, (QEvent*)event);
}

void q_toolbox_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnLeaveEvent((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_move_event(void* self, void* event) {
    QToolBox_MoveEvent((QToolBox*)self, (QMoveEvent*)event);
}

void q_toolbox_qbase_move_event(void* self, void* event) {
    QToolBox_QBaseMoveEvent((QToolBox*)self, (QMoveEvent*)event);
}

void q_toolbox_on_move_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnMoveEvent((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_resize_event(void* self, void* event) {
    QToolBox_ResizeEvent((QToolBox*)self, (QResizeEvent*)event);
}

void q_toolbox_qbase_resize_event(void* self, void* event) {
    QToolBox_QBaseResizeEvent((QToolBox*)self, (QResizeEvent*)event);
}

void q_toolbox_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnResizeEvent((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_close_event(void* self, void* event) {
    QToolBox_CloseEvent((QToolBox*)self, (QCloseEvent*)event);
}

void q_toolbox_qbase_close_event(void* self, void* event) {
    QToolBox_QBaseCloseEvent((QToolBox*)self, (QCloseEvent*)event);
}

void q_toolbox_on_close_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnCloseEvent((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_context_menu_event(void* self, void* event) {
    QToolBox_ContextMenuEvent((QToolBox*)self, (QContextMenuEvent*)event);
}

void q_toolbox_qbase_context_menu_event(void* self, void* event) {
    QToolBox_QBaseContextMenuEvent((QToolBox*)self, (QContextMenuEvent*)event);
}

void q_toolbox_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnContextMenuEvent((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_tablet_event(void* self, void* event) {
    QToolBox_TabletEvent((QToolBox*)self, (QTabletEvent*)event);
}

void q_toolbox_qbase_tablet_event(void* self, void* event) {
    QToolBox_QBaseTabletEvent((QToolBox*)self, (QTabletEvent*)event);
}

void q_toolbox_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnTabletEvent((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_action_event(void* self, void* event) {
    QToolBox_ActionEvent((QToolBox*)self, (QActionEvent*)event);
}

void q_toolbox_qbase_action_event(void* self, void* event) {
    QToolBox_QBaseActionEvent((QToolBox*)self, (QActionEvent*)event);
}

void q_toolbox_on_action_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnActionEvent((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_drag_enter_event(void* self, void* event) {
    QToolBox_DragEnterEvent((QToolBox*)self, (QDragEnterEvent*)event);
}

void q_toolbox_qbase_drag_enter_event(void* self, void* event) {
    QToolBox_QBaseDragEnterEvent((QToolBox*)self, (QDragEnterEvent*)event);
}

void q_toolbox_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnDragEnterEvent((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_drag_move_event(void* self, void* event) {
    QToolBox_DragMoveEvent((QToolBox*)self, (QDragMoveEvent*)event);
}

void q_toolbox_qbase_drag_move_event(void* self, void* event) {
    QToolBox_QBaseDragMoveEvent((QToolBox*)self, (QDragMoveEvent*)event);
}

void q_toolbox_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnDragMoveEvent((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_drag_leave_event(void* self, void* event) {
    QToolBox_DragLeaveEvent((QToolBox*)self, (QDragLeaveEvent*)event);
}

void q_toolbox_qbase_drag_leave_event(void* self, void* event) {
    QToolBox_QBaseDragLeaveEvent((QToolBox*)self, (QDragLeaveEvent*)event);
}

void q_toolbox_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnDragLeaveEvent((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_drop_event(void* self, void* event) {
    QToolBox_DropEvent((QToolBox*)self, (QDropEvent*)event);
}

void q_toolbox_qbase_drop_event(void* self, void* event) {
    QToolBox_QBaseDropEvent((QToolBox*)self, (QDropEvent*)event);
}

void q_toolbox_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnDropEvent((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_hide_event(void* self, void* event) {
    QToolBox_HideEvent((QToolBox*)self, (QHideEvent*)event);
}

void q_toolbox_qbase_hide_event(void* self, void* event) {
    QToolBox_QBaseHideEvent((QToolBox*)self, (QHideEvent*)event);
}

void q_toolbox_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnHideEvent((QToolBox*)self, (intptr_t)slot);
}

bool q_toolbox_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QToolBox_NativeEvent((QToolBox*)self, qstring(eventType), message, result);
}

bool q_toolbox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QToolBox_QBaseNativeEvent((QToolBox*)self, qstring(eventType), message, result);
}

void q_toolbox_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QToolBox_OnNativeEvent((QToolBox*)self, (intptr_t)slot);
}

int32_t q_toolbox_metric(void* self, int64_t param1) {
    return QToolBox_Metric((QToolBox*)self, param1);
}

int32_t q_toolbox_qbase_metric(void* self, int64_t param1) {
    return QToolBox_QBaseMetric((QToolBox*)self, param1);
}

void q_toolbox_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QToolBox_OnMetric((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_init_painter(void* self, void* painter) {
    QToolBox_InitPainter((QToolBox*)self, (QPainter*)painter);
}

void q_toolbox_qbase_init_painter(void* self, void* painter) {
    QToolBox_QBaseInitPainter((QToolBox*)self, (QPainter*)painter);
}

void q_toolbox_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnInitPainter((QToolBox*)self, (intptr_t)slot);
}

QPaintDevice* q_toolbox_redirected(void* self, void* offset) {
    return QToolBox_Redirected((QToolBox*)self, (QPoint*)offset);
}

QPaintDevice* q_toolbox_qbase_redirected(void* self, void* offset) {
    return QToolBox_QBaseRedirected((QToolBox*)self, (QPoint*)offset);
}

void q_toolbox_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QToolBox_OnRedirected((QToolBox*)self, (intptr_t)slot);
}

QPainter* q_toolbox_shared_painter(void* self) {
    return QToolBox_SharedPainter((QToolBox*)self);
}

QPainter* q_toolbox_qbase_shared_painter(void* self) {
    return QToolBox_QBaseSharedPainter((QToolBox*)self);
}

void q_toolbox_on_shared_painter(void* self, QPainter* (*slot)()) {
    QToolBox_OnSharedPainter((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_input_method_event(void* self, void* param1) {
    QToolBox_InputMethodEvent((QToolBox*)self, (QInputMethodEvent*)param1);
}

void q_toolbox_qbase_input_method_event(void* self, void* param1) {
    QToolBox_QBaseInputMethodEvent((QToolBox*)self, (QInputMethodEvent*)param1);
}

void q_toolbox_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnInputMethodEvent((QToolBox*)self, (intptr_t)slot);
}

QVariant* q_toolbox_input_method_query(void* self, int64_t param1) {
    return QToolBox_InputMethodQuery((QToolBox*)self, param1);
}

QVariant* q_toolbox_qbase_input_method_query(void* self, int64_t param1) {
    return QToolBox_QBaseInputMethodQuery((QToolBox*)self, param1);
}

void q_toolbox_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QToolBox_OnInputMethodQuery((QToolBox*)self, (intptr_t)slot);
}

bool q_toolbox_focus_next_prev_child(void* self, bool next) {
    return QToolBox_FocusNextPrevChild((QToolBox*)self, next);
}

bool q_toolbox_qbase_focus_next_prev_child(void* self, bool next) {
    return QToolBox_QBaseFocusNextPrevChild((QToolBox*)self, next);
}

void q_toolbox_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QToolBox_OnFocusNextPrevChild((QToolBox*)self, (intptr_t)slot);
}

bool q_toolbox_event_filter(void* self, void* watched, void* event) {
    return QToolBox_EventFilter((QToolBox*)self, (QObject*)watched, (QEvent*)event);
}

bool q_toolbox_qbase_event_filter(void* self, void* watched, void* event) {
    return QToolBox_QBaseEventFilter((QToolBox*)self, (QObject*)watched, (QEvent*)event);
}

void q_toolbox_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QToolBox_OnEventFilter((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_timer_event(void* self, void* event) {
    QToolBox_TimerEvent((QToolBox*)self, (QTimerEvent*)event);
}

void q_toolbox_qbase_timer_event(void* self, void* event) {
    QToolBox_QBaseTimerEvent((QToolBox*)self, (QTimerEvent*)event);
}

void q_toolbox_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnTimerEvent((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_child_event(void* self, void* event) {
    QToolBox_ChildEvent((QToolBox*)self, (QChildEvent*)event);
}

void q_toolbox_qbase_child_event(void* self, void* event) {
    QToolBox_QBaseChildEvent((QToolBox*)self, (QChildEvent*)event);
}

void q_toolbox_on_child_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnChildEvent((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_custom_event(void* self, void* event) {
    QToolBox_CustomEvent((QToolBox*)self, (QEvent*)event);
}

void q_toolbox_qbase_custom_event(void* self, void* event) {
    QToolBox_QBaseCustomEvent((QToolBox*)self, (QEvent*)event);
}

void q_toolbox_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnCustomEvent((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_connect_notify(void* self, void* signal) {
    QToolBox_ConnectNotify((QToolBox*)self, (QMetaMethod*)signal);
}

void q_toolbox_qbase_connect_notify(void* self, void* signal) {
    QToolBox_QBaseConnectNotify((QToolBox*)self, (QMetaMethod*)signal);
}

void q_toolbox_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnConnectNotify((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_disconnect_notify(void* self, void* signal) {
    QToolBox_DisconnectNotify((QToolBox*)self, (QMetaMethod*)signal);
}

void q_toolbox_qbase_disconnect_notify(void* self, void* signal) {
    QToolBox_QBaseDisconnectNotify((QToolBox*)self, (QMetaMethod*)signal);
}

void q_toolbox_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnDisconnectNotify((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_draw_frame(void* self, void* param1) {
    QToolBox_DrawFrame((QToolBox*)self, (QPainter*)param1);
}

void q_toolbox_qbase_draw_frame(void* self, void* param1) {
    QToolBox_QBaseDrawFrame((QToolBox*)self, (QPainter*)param1);
}

void q_toolbox_on_draw_frame(void* self, void (*slot)(void*, void*)) {
    QToolBox_OnDrawFrame((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_update_micro_focus(void* self) {
    QToolBox_UpdateMicroFocus((QToolBox*)self);
}

void q_toolbox_qbase_update_micro_focus(void* self) {
    QToolBox_QBaseUpdateMicroFocus((QToolBox*)self);
}

void q_toolbox_on_update_micro_focus(void* self, void (*slot)()) {
    QToolBox_OnUpdateMicroFocus((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_create(void* self) {
    QToolBox_Create((QToolBox*)self);
}

void q_toolbox_qbase_create(void* self) {
    QToolBox_QBaseCreate((QToolBox*)self);
}

void q_toolbox_on_create(void* self, void (*slot)()) {
    QToolBox_OnCreate((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_destroy(void* self) {
    QToolBox_Destroy((QToolBox*)self);
}

void q_toolbox_qbase_destroy(void* self) {
    QToolBox_QBaseDestroy((QToolBox*)self);
}

void q_toolbox_on_destroy(void* self, void (*slot)()) {
    QToolBox_OnDestroy((QToolBox*)self, (intptr_t)slot);
}

bool q_toolbox_focus_next_child(void* self) {
    return QToolBox_FocusNextChild((QToolBox*)self);
}

bool q_toolbox_qbase_focus_next_child(void* self) {
    return QToolBox_QBaseFocusNextChild((QToolBox*)self);
}

void q_toolbox_on_focus_next_child(void* self, bool (*slot)()) {
    QToolBox_OnFocusNextChild((QToolBox*)self, (intptr_t)slot);
}

bool q_toolbox_focus_previous_child(void* self) {
    return QToolBox_FocusPreviousChild((QToolBox*)self);
}

bool q_toolbox_qbase_focus_previous_child(void* self) {
    return QToolBox_QBaseFocusPreviousChild((QToolBox*)self);
}

void q_toolbox_on_focus_previous_child(void* self, bool (*slot)()) {
    QToolBox_OnFocusPreviousChild((QToolBox*)self, (intptr_t)slot);
}

QObject* q_toolbox_sender(void* self) {
    return QToolBox_Sender((QToolBox*)self);
}

QObject* q_toolbox_qbase_sender(void* self) {
    return QToolBox_QBaseSender((QToolBox*)self);
}

void q_toolbox_on_sender(void* self, QObject* (*slot)()) {
    QToolBox_OnSender((QToolBox*)self, (intptr_t)slot);
}

int32_t q_toolbox_sender_signal_index(void* self) {
    return QToolBox_SenderSignalIndex((QToolBox*)self);
}

int32_t q_toolbox_qbase_sender_signal_index(void* self) {
    return QToolBox_QBaseSenderSignalIndex((QToolBox*)self);
}

void q_toolbox_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QToolBox_OnSenderSignalIndex((QToolBox*)self, (intptr_t)slot);
}

int32_t q_toolbox_receivers(void* self, const char* signal) {
    return QToolBox_Receivers((QToolBox*)self, signal);
}

int32_t q_toolbox_qbase_receivers(void* self, const char* signal) {
    return QToolBox_QBaseReceivers((QToolBox*)self, signal);
}

void q_toolbox_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QToolBox_OnReceivers((QToolBox*)self, (intptr_t)slot);
}

bool q_toolbox_is_signal_connected(void* self, void* signal) {
    return QToolBox_IsSignalConnected((QToolBox*)self, (QMetaMethod*)signal);
}

bool q_toolbox_qbase_is_signal_connected(void* self, void* signal) {
    return QToolBox_QBaseIsSignalConnected((QToolBox*)self, (QMetaMethod*)signal);
}

void q_toolbox_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QToolBox_OnIsSignalConnected((QToolBox*)self, (intptr_t)slot);
}

void q_toolbox_delete(void* self) {
    QToolBox_Delete((QToolBox*)(self));
}
