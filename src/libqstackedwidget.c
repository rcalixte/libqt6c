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
#include "libqstackedwidget.hpp"
#include "libqstackedwidget.h"

QStackedWidget* q_stackedwidget_new(void* parent) {
    return QStackedWidget_new((QWidget*)parent);
}

QStackedWidget* q_stackedwidget_new2() {
    return QStackedWidget_new2();
}

QMetaObject* q_stackedwidget_meta_object(void* self) {
    return QStackedWidget_MetaObject((QStackedWidget*)self);
}

void* q_stackedwidget_metacast(void* self, const char* param1) {
    return QStackedWidget_Metacast((QStackedWidget*)self, param1);
}

int32_t q_stackedwidget_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QStackedWidget_Metacall((QStackedWidget*)self, param1, param2, param3);
}

void q_stackedwidget_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QStackedWidget_OnMetacall((QStackedWidget*)self, (intptr_t)slot);
}

int32_t q_stackedwidget_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QStackedWidget_QBaseMetacall((QStackedWidget*)self, param1, param2, param3);
}

const char* q_stackedwidget_tr(const char* s) {
    libqt_string _str = QStackedWidget_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_stackedwidget_add_widget(void* self, void* w) {
    return QStackedWidget_AddWidget((QStackedWidget*)self, (QWidget*)w);
}

int32_t q_stackedwidget_insert_widget(void* self, int index, void* w) {
    return QStackedWidget_InsertWidget((QStackedWidget*)self, index, (QWidget*)w);
}

void q_stackedwidget_remove_widget(void* self, void* w) {
    QStackedWidget_RemoveWidget((QStackedWidget*)self, (QWidget*)w);
}

QWidget* q_stackedwidget_current_widget(void* self) {
    return QStackedWidget_CurrentWidget((QStackedWidget*)self);
}

int32_t q_stackedwidget_current_index(void* self) {
    return QStackedWidget_CurrentIndex((QStackedWidget*)self);
}

int32_t q_stackedwidget_index_of(void* self, void* param1) {
    return QStackedWidget_IndexOf((QStackedWidget*)self, (QWidget*)param1);
}

QWidget* q_stackedwidget_widget(void* self, int param1) {
    return QStackedWidget_Widget((QStackedWidget*)self, param1);
}

int32_t q_stackedwidget_count(void* self) {
    return QStackedWidget_Count((QStackedWidget*)self);
}

void q_stackedwidget_set_current_index(void* self, int index) {
    QStackedWidget_SetCurrentIndex((QStackedWidget*)self, index);
}

void q_stackedwidget_set_current_widget(void* self, void* w) {
    QStackedWidget_SetCurrentWidget((QStackedWidget*)self, (QWidget*)w);
}

void q_stackedwidget_current_changed(void* self, int param1) {
    QStackedWidget_CurrentChanged((QStackedWidget*)self, param1);
}

void q_stackedwidget_on_current_changed(void* self, void (*slot)(void*, int)) {
    QStackedWidget_Connect_CurrentChanged((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_widget_removed(void* self, int index) {
    QStackedWidget_WidgetRemoved((QStackedWidget*)self, index);
}

void q_stackedwidget_on_widget_removed(void* self, void (*slot)(void*, int)) {
    QStackedWidget_Connect_WidgetRemoved((QStackedWidget*)self, (intptr_t)slot);
}

bool q_stackedwidget_event(void* self, void* e) {
    return QStackedWidget_Event((QStackedWidget*)self, (QEvent*)e);
}

void q_stackedwidget_on_event(void* self, bool (*slot)(void*, void*)) {
    QStackedWidget_OnEvent((QStackedWidget*)self, (intptr_t)slot);
}

bool q_stackedwidget_qbase_event(void* self, void* e) {
    return QStackedWidget_QBaseEvent((QStackedWidget*)self, (QEvent*)e);
}

const char* q_stackedwidget_tr2(const char* s, const char* c) {
    libqt_string _str = QStackedWidget_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_stackedwidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QStackedWidget_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_stackedwidget_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void q_stackedwidget_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t q_stackedwidget_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int64_t q_stackedwidget_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void q_stackedwidget_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int64_t q_stackedwidget_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void q_stackedwidget_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t q_stackedwidget_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void q_stackedwidget_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t q_stackedwidget_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void q_stackedwidget_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* q_stackedwidget_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void q_stackedwidget_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t q_stackedwidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_stackedwidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_stackedwidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_stackedwidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_stackedwidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_stackedwidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_stackedwidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_stackedwidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_stackedwidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_stackedwidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_stackedwidget_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_stackedwidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_stackedwidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_stackedwidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_stackedwidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_stackedwidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_stackedwidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

QRect* q_stackedwidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_stackedwidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_stackedwidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_stackedwidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_stackedwidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_stackedwidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_stackedwidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_stackedwidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_stackedwidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_stackedwidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_stackedwidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_stackedwidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_stackedwidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_stackedwidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_stackedwidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_stackedwidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_stackedwidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_stackedwidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_stackedwidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_stackedwidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_stackedwidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_stackedwidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_stackedwidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_stackedwidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_stackedwidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_stackedwidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_stackedwidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_stackedwidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_stackedwidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_stackedwidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_stackedwidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_stackedwidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_stackedwidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_stackedwidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_stackedwidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_stackedwidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_stackedwidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_stackedwidget_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_stackedwidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_stackedwidget_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_stackedwidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_stackedwidget_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_stackedwidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_stackedwidget_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_stackedwidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_stackedwidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_stackedwidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_stackedwidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_stackedwidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_stackedwidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_stackedwidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

QPalette* q_stackedwidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_stackedwidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_stackedwidget_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_stackedwidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_stackedwidget_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_stackedwidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

QFont* q_stackedwidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_stackedwidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_stackedwidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_stackedwidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_stackedwidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_stackedwidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_stackedwidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_stackedwidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_stackedwidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_stackedwidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_stackedwidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_stackedwidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_stackedwidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_stackedwidget_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

QRegion* q_stackedwidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_stackedwidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_stackedwidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_stackedwidget_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_stackedwidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_stackedwidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_stackedwidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_stackedwidget_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_stackedwidget_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_stackedwidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_stackedwidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_stackedwidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_stackedwidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_stackedwidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_stackedwidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_stackedwidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_stackedwidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_stackedwidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_stackedwidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_stackedwidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_stackedwidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_stackedwidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_stackedwidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_stackedwidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_stackedwidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_stackedwidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_stackedwidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_stackedwidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_stackedwidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_stackedwidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_stackedwidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_stackedwidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_stackedwidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_stackedwidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_stackedwidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_stackedwidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_stackedwidget_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_stackedwidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_stackedwidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_stackedwidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_stackedwidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_stackedwidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_stackedwidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_stackedwidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_stackedwidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_stackedwidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_stackedwidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_stackedwidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_stackedwidget_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

int64_t q_stackedwidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_stackedwidget_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_stackedwidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_stackedwidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_stackedwidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_stackedwidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_stackedwidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_stackedwidget_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_stackedwidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_stackedwidget_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

void q_stackedwidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_stackedwidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_stackedwidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_stackedwidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_stackedwidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_stackedwidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_stackedwidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_stackedwidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_stackedwidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_stackedwidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_stackedwidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_stackedwidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_stackedwidget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_stackedwidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_stackedwidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_stackedwidget_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

void q_stackedwidget_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_stackedwidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_stackedwidget_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

void q_stackedwidget_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_stackedwidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_stackedwidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_stackedwidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_stackedwidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_stackedwidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_stackedwidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_stackedwidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_stackedwidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_stackedwidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_stackedwidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_stackedwidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_stackedwidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_stackedwidget_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

void q_stackedwidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_stackedwidget_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

void q_stackedwidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_stackedwidget_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

char* q_stackedwidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_stackedwidget_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_stackedwidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_stackedwidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_stackedwidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_stackedwidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_stackedwidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_stackedwidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_stackedwidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_stackedwidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_stackedwidget_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_stackedwidget_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_stackedwidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_stackedwidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_stackedwidget_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_stackedwidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_stackedwidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_stackedwidget_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

QMargins* q_stackedwidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_stackedwidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_stackedwidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_stackedwidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_stackedwidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_stackedwidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_stackedwidget_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_stackedwidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_stackedwidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_stackedwidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_stackedwidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_stackedwidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_stackedwidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_stackedwidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_stackedwidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_stackedwidget_add_actions(void* self, void* actions[]) {
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

void q_stackedwidget_insert_actions(void* self, void* before, void* actions[]) {
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

void q_stackedwidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_stackedwidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_stackedwidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_stackedwidget_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

QAction* q_stackedwidget_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_stackedwidget_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_stackedwidget_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_stackedwidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_stackedwidget_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_stackedwidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_stackedwidget_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_stackedwidget_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_stackedwidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_stackedwidget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_stackedwidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_stackedwidget_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

void q_stackedwidget_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_stackedwidget_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_stackedwidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_stackedwidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_stackedwidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_stackedwidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_stackedwidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_stackedwidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_stackedwidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_stackedwidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_stackedwidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_stackedwidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_stackedwidget_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_stackedwidget_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_stackedwidget_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_stackedwidget_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

int64_t q_stackedwidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_stackedwidget_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_stackedwidget_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_stackedwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_stackedwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_stackedwidget_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_stackedwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_stackedwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_stackedwidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_stackedwidget_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_stackedwidget_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_stackedwidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_stackedwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_stackedwidget_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_stackedwidget_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_stackedwidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_stackedwidget_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_stackedwidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_stackedwidget_set_object_name(void* self, char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_stackedwidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_stackedwidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_stackedwidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_stackedwidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_stackedwidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_stackedwidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_stackedwidget_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_stackedwidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_stackedwidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_stackedwidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_stackedwidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_stackedwidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_stackedwidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_stackedwidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_stackedwidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_stackedwidget_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_stackedwidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_stackedwidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_stackedwidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_stackedwidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_stackedwidget_dynamic_property_names(void* self) {
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

QBindingStorage* q_stackedwidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_stackedwidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_stackedwidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_stackedwidget_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_stackedwidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_stackedwidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_stackedwidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_stackedwidget_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_stackedwidget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_stackedwidget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_stackedwidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_stackedwidget_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_stackedwidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_stackedwidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_stackedwidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_stackedwidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_stackedwidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_stackedwidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_stackedwidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_stackedwidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_stackedwidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_stackedwidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_stackedwidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_stackedwidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

QSize* q_stackedwidget_size_hint(void* self) {
    return QStackedWidget_SizeHint((QStackedWidget*)self);
}

QSize* q_stackedwidget_qbase_size_hint(void* self) {
    return QStackedWidget_QBaseSizeHint((QStackedWidget*)self);
}

void q_stackedwidget_on_size_hint(void* self, QSize* (*slot)()) {
    QStackedWidget_OnSizeHint((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_paint_event(void* self, void* param1) {
    QStackedWidget_PaintEvent((QStackedWidget*)self, (QPaintEvent*)param1);
}

void q_stackedwidget_qbase_paint_event(void* self, void* param1) {
    QStackedWidget_QBasePaintEvent((QStackedWidget*)self, (QPaintEvent*)param1);
}

void q_stackedwidget_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnPaintEvent((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_change_event(void* self, void* param1) {
    QStackedWidget_ChangeEvent((QStackedWidget*)self, (QEvent*)param1);
}

void q_stackedwidget_qbase_change_event(void* self, void* param1) {
    QStackedWidget_QBaseChangeEvent((QStackedWidget*)self, (QEvent*)param1);
}

void q_stackedwidget_on_change_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnChangeEvent((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_init_style_option(void* self, void* option) {
    QStackedWidget_InitStyleOption((QStackedWidget*)self, (QStyleOptionFrame*)option);
}

void q_stackedwidget_qbase_init_style_option(void* self, void* option) {
    QStackedWidget_QBaseInitStyleOption((QStackedWidget*)self, (QStyleOptionFrame*)option);
}

void q_stackedwidget_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnInitStyleOption((QStackedWidget*)self, (intptr_t)slot);
}

int32_t q_stackedwidget_dev_type(void* self) {
    return QStackedWidget_DevType((QStackedWidget*)self);
}

int32_t q_stackedwidget_qbase_dev_type(void* self) {
    return QStackedWidget_QBaseDevType((QStackedWidget*)self);
}

void q_stackedwidget_on_dev_type(void* self, int32_t (*slot)()) {
    QStackedWidget_OnDevType((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_set_visible(void* self, bool visible) {
    QStackedWidget_SetVisible((QStackedWidget*)self, visible);
}

void q_stackedwidget_qbase_set_visible(void* self, bool visible) {
    QStackedWidget_QBaseSetVisible((QStackedWidget*)self, visible);
}

void q_stackedwidget_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QStackedWidget_OnSetVisible((QStackedWidget*)self, (intptr_t)slot);
}

QSize* q_stackedwidget_minimum_size_hint(void* self) {
    return QStackedWidget_MinimumSizeHint((QStackedWidget*)self);
}

QSize* q_stackedwidget_qbase_minimum_size_hint(void* self) {
    return QStackedWidget_QBaseMinimumSizeHint((QStackedWidget*)self);
}

void q_stackedwidget_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QStackedWidget_OnMinimumSizeHint((QStackedWidget*)self, (intptr_t)slot);
}

int32_t q_stackedwidget_height_for_width(void* self, int param1) {
    return QStackedWidget_HeightForWidth((QStackedWidget*)self, param1);
}

int32_t q_stackedwidget_qbase_height_for_width(void* self, int param1) {
    return QStackedWidget_QBaseHeightForWidth((QStackedWidget*)self, param1);
}

void q_stackedwidget_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QStackedWidget_OnHeightForWidth((QStackedWidget*)self, (intptr_t)slot);
}

bool q_stackedwidget_has_height_for_width(void* self) {
    return QStackedWidget_HasHeightForWidth((QStackedWidget*)self);
}

bool q_stackedwidget_qbase_has_height_for_width(void* self) {
    return QStackedWidget_QBaseHasHeightForWidth((QStackedWidget*)self);
}

void q_stackedwidget_on_has_height_for_width(void* self, bool (*slot)()) {
    QStackedWidget_OnHasHeightForWidth((QStackedWidget*)self, (intptr_t)slot);
}

QPaintEngine* q_stackedwidget_paint_engine(void* self) {
    return QStackedWidget_PaintEngine((QStackedWidget*)self);
}

QPaintEngine* q_stackedwidget_qbase_paint_engine(void* self) {
    return QStackedWidget_QBasePaintEngine((QStackedWidget*)self);
}

void q_stackedwidget_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QStackedWidget_OnPaintEngine((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_mouse_press_event(void* self, void* event) {
    QStackedWidget_MousePressEvent((QStackedWidget*)self, (QMouseEvent*)event);
}

void q_stackedwidget_qbase_mouse_press_event(void* self, void* event) {
    QStackedWidget_QBaseMousePressEvent((QStackedWidget*)self, (QMouseEvent*)event);
}

void q_stackedwidget_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnMousePressEvent((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_mouse_release_event(void* self, void* event) {
    QStackedWidget_MouseReleaseEvent((QStackedWidget*)self, (QMouseEvent*)event);
}

void q_stackedwidget_qbase_mouse_release_event(void* self, void* event) {
    QStackedWidget_QBaseMouseReleaseEvent((QStackedWidget*)self, (QMouseEvent*)event);
}

void q_stackedwidget_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnMouseReleaseEvent((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_mouse_double_click_event(void* self, void* event) {
    QStackedWidget_MouseDoubleClickEvent((QStackedWidget*)self, (QMouseEvent*)event);
}

void q_stackedwidget_qbase_mouse_double_click_event(void* self, void* event) {
    QStackedWidget_QBaseMouseDoubleClickEvent((QStackedWidget*)self, (QMouseEvent*)event);
}

void q_stackedwidget_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnMouseDoubleClickEvent((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_mouse_move_event(void* self, void* event) {
    QStackedWidget_MouseMoveEvent((QStackedWidget*)self, (QMouseEvent*)event);
}

void q_stackedwidget_qbase_mouse_move_event(void* self, void* event) {
    QStackedWidget_QBaseMouseMoveEvent((QStackedWidget*)self, (QMouseEvent*)event);
}

void q_stackedwidget_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnMouseMoveEvent((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_wheel_event(void* self, void* event) {
    QStackedWidget_WheelEvent((QStackedWidget*)self, (QWheelEvent*)event);
}

void q_stackedwidget_qbase_wheel_event(void* self, void* event) {
    QStackedWidget_QBaseWheelEvent((QStackedWidget*)self, (QWheelEvent*)event);
}

void q_stackedwidget_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnWheelEvent((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_key_press_event(void* self, void* event) {
    QStackedWidget_KeyPressEvent((QStackedWidget*)self, (QKeyEvent*)event);
}

void q_stackedwidget_qbase_key_press_event(void* self, void* event) {
    QStackedWidget_QBaseKeyPressEvent((QStackedWidget*)self, (QKeyEvent*)event);
}

void q_stackedwidget_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnKeyPressEvent((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_key_release_event(void* self, void* event) {
    QStackedWidget_KeyReleaseEvent((QStackedWidget*)self, (QKeyEvent*)event);
}

void q_stackedwidget_qbase_key_release_event(void* self, void* event) {
    QStackedWidget_QBaseKeyReleaseEvent((QStackedWidget*)self, (QKeyEvent*)event);
}

void q_stackedwidget_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnKeyReleaseEvent((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_focus_in_event(void* self, void* event) {
    QStackedWidget_FocusInEvent((QStackedWidget*)self, (QFocusEvent*)event);
}

void q_stackedwidget_qbase_focus_in_event(void* self, void* event) {
    QStackedWidget_QBaseFocusInEvent((QStackedWidget*)self, (QFocusEvent*)event);
}

void q_stackedwidget_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnFocusInEvent((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_focus_out_event(void* self, void* event) {
    QStackedWidget_FocusOutEvent((QStackedWidget*)self, (QFocusEvent*)event);
}

void q_stackedwidget_qbase_focus_out_event(void* self, void* event) {
    QStackedWidget_QBaseFocusOutEvent((QStackedWidget*)self, (QFocusEvent*)event);
}

void q_stackedwidget_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnFocusOutEvent((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_enter_event(void* self, void* event) {
    QStackedWidget_EnterEvent((QStackedWidget*)self, (QEnterEvent*)event);
}

void q_stackedwidget_qbase_enter_event(void* self, void* event) {
    QStackedWidget_QBaseEnterEvent((QStackedWidget*)self, (QEnterEvent*)event);
}

void q_stackedwidget_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnEnterEvent((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_leave_event(void* self, void* event) {
    QStackedWidget_LeaveEvent((QStackedWidget*)self, (QEvent*)event);
}

void q_stackedwidget_qbase_leave_event(void* self, void* event) {
    QStackedWidget_QBaseLeaveEvent((QStackedWidget*)self, (QEvent*)event);
}

void q_stackedwidget_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnLeaveEvent((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_move_event(void* self, void* event) {
    QStackedWidget_MoveEvent((QStackedWidget*)self, (QMoveEvent*)event);
}

void q_stackedwidget_qbase_move_event(void* self, void* event) {
    QStackedWidget_QBaseMoveEvent((QStackedWidget*)self, (QMoveEvent*)event);
}

void q_stackedwidget_on_move_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnMoveEvent((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_resize_event(void* self, void* event) {
    QStackedWidget_ResizeEvent((QStackedWidget*)self, (QResizeEvent*)event);
}

void q_stackedwidget_qbase_resize_event(void* self, void* event) {
    QStackedWidget_QBaseResizeEvent((QStackedWidget*)self, (QResizeEvent*)event);
}

void q_stackedwidget_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnResizeEvent((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_close_event(void* self, void* event) {
    QStackedWidget_CloseEvent((QStackedWidget*)self, (QCloseEvent*)event);
}

void q_stackedwidget_qbase_close_event(void* self, void* event) {
    QStackedWidget_QBaseCloseEvent((QStackedWidget*)self, (QCloseEvent*)event);
}

void q_stackedwidget_on_close_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnCloseEvent((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_context_menu_event(void* self, void* event) {
    QStackedWidget_ContextMenuEvent((QStackedWidget*)self, (QContextMenuEvent*)event);
}

void q_stackedwidget_qbase_context_menu_event(void* self, void* event) {
    QStackedWidget_QBaseContextMenuEvent((QStackedWidget*)self, (QContextMenuEvent*)event);
}

void q_stackedwidget_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnContextMenuEvent((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_tablet_event(void* self, void* event) {
    QStackedWidget_TabletEvent((QStackedWidget*)self, (QTabletEvent*)event);
}

void q_stackedwidget_qbase_tablet_event(void* self, void* event) {
    QStackedWidget_QBaseTabletEvent((QStackedWidget*)self, (QTabletEvent*)event);
}

void q_stackedwidget_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnTabletEvent((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_action_event(void* self, void* event) {
    QStackedWidget_ActionEvent((QStackedWidget*)self, (QActionEvent*)event);
}

void q_stackedwidget_qbase_action_event(void* self, void* event) {
    QStackedWidget_QBaseActionEvent((QStackedWidget*)self, (QActionEvent*)event);
}

void q_stackedwidget_on_action_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnActionEvent((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_drag_enter_event(void* self, void* event) {
    QStackedWidget_DragEnterEvent((QStackedWidget*)self, (QDragEnterEvent*)event);
}

void q_stackedwidget_qbase_drag_enter_event(void* self, void* event) {
    QStackedWidget_QBaseDragEnterEvent((QStackedWidget*)self, (QDragEnterEvent*)event);
}

void q_stackedwidget_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnDragEnterEvent((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_drag_move_event(void* self, void* event) {
    QStackedWidget_DragMoveEvent((QStackedWidget*)self, (QDragMoveEvent*)event);
}

void q_stackedwidget_qbase_drag_move_event(void* self, void* event) {
    QStackedWidget_QBaseDragMoveEvent((QStackedWidget*)self, (QDragMoveEvent*)event);
}

void q_stackedwidget_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnDragMoveEvent((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_drag_leave_event(void* self, void* event) {
    QStackedWidget_DragLeaveEvent((QStackedWidget*)self, (QDragLeaveEvent*)event);
}

void q_stackedwidget_qbase_drag_leave_event(void* self, void* event) {
    QStackedWidget_QBaseDragLeaveEvent((QStackedWidget*)self, (QDragLeaveEvent*)event);
}

void q_stackedwidget_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnDragLeaveEvent((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_drop_event(void* self, void* event) {
    QStackedWidget_DropEvent((QStackedWidget*)self, (QDropEvent*)event);
}

void q_stackedwidget_qbase_drop_event(void* self, void* event) {
    QStackedWidget_QBaseDropEvent((QStackedWidget*)self, (QDropEvent*)event);
}

void q_stackedwidget_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnDropEvent((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_show_event(void* self, void* event) {
    QStackedWidget_ShowEvent((QStackedWidget*)self, (QShowEvent*)event);
}

void q_stackedwidget_qbase_show_event(void* self, void* event) {
    QStackedWidget_QBaseShowEvent((QStackedWidget*)self, (QShowEvent*)event);
}

void q_stackedwidget_on_show_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnShowEvent((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_hide_event(void* self, void* event) {
    QStackedWidget_HideEvent((QStackedWidget*)self, (QHideEvent*)event);
}

void q_stackedwidget_qbase_hide_event(void* self, void* event) {
    QStackedWidget_QBaseHideEvent((QStackedWidget*)self, (QHideEvent*)event);
}

void q_stackedwidget_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnHideEvent((QStackedWidget*)self, (intptr_t)slot);
}

bool q_stackedwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QStackedWidget_NativeEvent((QStackedWidget*)self, qstring(eventType), message, result);
}

bool q_stackedwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QStackedWidget_QBaseNativeEvent((QStackedWidget*)self, qstring(eventType), message, result);
}

void q_stackedwidget_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QStackedWidget_OnNativeEvent((QStackedWidget*)self, (intptr_t)slot);
}

int32_t q_stackedwidget_metric(void* self, int64_t param1) {
    return QStackedWidget_Metric((QStackedWidget*)self, param1);
}

int32_t q_stackedwidget_qbase_metric(void* self, int64_t param1) {
    return QStackedWidget_QBaseMetric((QStackedWidget*)self, param1);
}

void q_stackedwidget_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QStackedWidget_OnMetric((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_init_painter(void* self, void* painter) {
    QStackedWidget_InitPainter((QStackedWidget*)self, (QPainter*)painter);
}

void q_stackedwidget_qbase_init_painter(void* self, void* painter) {
    QStackedWidget_QBaseInitPainter((QStackedWidget*)self, (QPainter*)painter);
}

void q_stackedwidget_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnInitPainter((QStackedWidget*)self, (intptr_t)slot);
}

QPaintDevice* q_stackedwidget_redirected(void* self, void* offset) {
    return QStackedWidget_Redirected((QStackedWidget*)self, (QPoint*)offset);
}

QPaintDevice* q_stackedwidget_qbase_redirected(void* self, void* offset) {
    return QStackedWidget_QBaseRedirected((QStackedWidget*)self, (QPoint*)offset);
}

void q_stackedwidget_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QStackedWidget_OnRedirected((QStackedWidget*)self, (intptr_t)slot);
}

QPainter* q_stackedwidget_shared_painter(void* self) {
    return QStackedWidget_SharedPainter((QStackedWidget*)self);
}

QPainter* q_stackedwidget_qbase_shared_painter(void* self) {
    return QStackedWidget_QBaseSharedPainter((QStackedWidget*)self);
}

void q_stackedwidget_on_shared_painter(void* self, QPainter* (*slot)()) {
    QStackedWidget_OnSharedPainter((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_input_method_event(void* self, void* param1) {
    QStackedWidget_InputMethodEvent((QStackedWidget*)self, (QInputMethodEvent*)param1);
}

void q_stackedwidget_qbase_input_method_event(void* self, void* param1) {
    QStackedWidget_QBaseInputMethodEvent((QStackedWidget*)self, (QInputMethodEvent*)param1);
}

void q_stackedwidget_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnInputMethodEvent((QStackedWidget*)self, (intptr_t)slot);
}

QVariant* q_stackedwidget_input_method_query(void* self, int64_t param1) {
    return QStackedWidget_InputMethodQuery((QStackedWidget*)self, param1);
}

QVariant* q_stackedwidget_qbase_input_method_query(void* self, int64_t param1) {
    return QStackedWidget_QBaseInputMethodQuery((QStackedWidget*)self, param1);
}

void q_stackedwidget_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QStackedWidget_OnInputMethodQuery((QStackedWidget*)self, (intptr_t)slot);
}

bool q_stackedwidget_focus_next_prev_child(void* self, bool next) {
    return QStackedWidget_FocusNextPrevChild((QStackedWidget*)self, next);
}

bool q_stackedwidget_qbase_focus_next_prev_child(void* self, bool next) {
    return QStackedWidget_QBaseFocusNextPrevChild((QStackedWidget*)self, next);
}

void q_stackedwidget_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QStackedWidget_OnFocusNextPrevChild((QStackedWidget*)self, (intptr_t)slot);
}

bool q_stackedwidget_event_filter(void* self, void* watched, void* event) {
    return QStackedWidget_EventFilter((QStackedWidget*)self, (QObject*)watched, (QEvent*)event);
}

bool q_stackedwidget_qbase_event_filter(void* self, void* watched, void* event) {
    return QStackedWidget_QBaseEventFilter((QStackedWidget*)self, (QObject*)watched, (QEvent*)event);
}

void q_stackedwidget_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QStackedWidget_OnEventFilter((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_timer_event(void* self, void* event) {
    QStackedWidget_TimerEvent((QStackedWidget*)self, (QTimerEvent*)event);
}

void q_stackedwidget_qbase_timer_event(void* self, void* event) {
    QStackedWidget_QBaseTimerEvent((QStackedWidget*)self, (QTimerEvent*)event);
}

void q_stackedwidget_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnTimerEvent((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_child_event(void* self, void* event) {
    QStackedWidget_ChildEvent((QStackedWidget*)self, (QChildEvent*)event);
}

void q_stackedwidget_qbase_child_event(void* self, void* event) {
    QStackedWidget_QBaseChildEvent((QStackedWidget*)self, (QChildEvent*)event);
}

void q_stackedwidget_on_child_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnChildEvent((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_custom_event(void* self, void* event) {
    QStackedWidget_CustomEvent((QStackedWidget*)self, (QEvent*)event);
}

void q_stackedwidget_qbase_custom_event(void* self, void* event) {
    QStackedWidget_QBaseCustomEvent((QStackedWidget*)self, (QEvent*)event);
}

void q_stackedwidget_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnCustomEvent((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_connect_notify(void* self, void* signal) {
    QStackedWidget_ConnectNotify((QStackedWidget*)self, (QMetaMethod*)signal);
}

void q_stackedwidget_qbase_connect_notify(void* self, void* signal) {
    QStackedWidget_QBaseConnectNotify((QStackedWidget*)self, (QMetaMethod*)signal);
}

void q_stackedwidget_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnConnectNotify((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_disconnect_notify(void* self, void* signal) {
    QStackedWidget_DisconnectNotify((QStackedWidget*)self, (QMetaMethod*)signal);
}

void q_stackedwidget_qbase_disconnect_notify(void* self, void* signal) {
    QStackedWidget_QBaseDisconnectNotify((QStackedWidget*)self, (QMetaMethod*)signal);
}

void q_stackedwidget_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnDisconnectNotify((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_draw_frame(void* self, void* param1) {
    QStackedWidget_DrawFrame((QStackedWidget*)self, (QPainter*)param1);
}

void q_stackedwidget_qbase_draw_frame(void* self, void* param1) {
    QStackedWidget_QBaseDrawFrame((QStackedWidget*)self, (QPainter*)param1);
}

void q_stackedwidget_on_draw_frame(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnDrawFrame((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_update_micro_focus(void* self) {
    QStackedWidget_UpdateMicroFocus((QStackedWidget*)self);
}

void q_stackedwidget_qbase_update_micro_focus(void* self) {
    QStackedWidget_QBaseUpdateMicroFocus((QStackedWidget*)self);
}

void q_stackedwidget_on_update_micro_focus(void* self, void (*slot)()) {
    QStackedWidget_OnUpdateMicroFocus((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_create(void* self) {
    QStackedWidget_Create((QStackedWidget*)self);
}

void q_stackedwidget_qbase_create(void* self) {
    QStackedWidget_QBaseCreate((QStackedWidget*)self);
}

void q_stackedwidget_on_create(void* self, void (*slot)()) {
    QStackedWidget_OnCreate((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_destroy(void* self) {
    QStackedWidget_Destroy((QStackedWidget*)self);
}

void q_stackedwidget_qbase_destroy(void* self) {
    QStackedWidget_QBaseDestroy((QStackedWidget*)self);
}

void q_stackedwidget_on_destroy(void* self, void (*slot)()) {
    QStackedWidget_OnDestroy((QStackedWidget*)self, (intptr_t)slot);
}

bool q_stackedwidget_focus_next_child(void* self) {
    return QStackedWidget_FocusNextChild((QStackedWidget*)self);
}

bool q_stackedwidget_qbase_focus_next_child(void* self) {
    return QStackedWidget_QBaseFocusNextChild((QStackedWidget*)self);
}

void q_stackedwidget_on_focus_next_child(void* self, bool (*slot)()) {
    QStackedWidget_OnFocusNextChild((QStackedWidget*)self, (intptr_t)slot);
}

bool q_stackedwidget_focus_previous_child(void* self) {
    return QStackedWidget_FocusPreviousChild((QStackedWidget*)self);
}

bool q_stackedwidget_qbase_focus_previous_child(void* self) {
    return QStackedWidget_QBaseFocusPreviousChild((QStackedWidget*)self);
}

void q_stackedwidget_on_focus_previous_child(void* self, bool (*slot)()) {
    QStackedWidget_OnFocusPreviousChild((QStackedWidget*)self, (intptr_t)slot);
}

QObject* q_stackedwidget_sender(void* self) {
    return QStackedWidget_Sender((QStackedWidget*)self);
}

QObject* q_stackedwidget_qbase_sender(void* self) {
    return QStackedWidget_QBaseSender((QStackedWidget*)self);
}

void q_stackedwidget_on_sender(void* self, QObject* (*slot)()) {
    QStackedWidget_OnSender((QStackedWidget*)self, (intptr_t)slot);
}

int32_t q_stackedwidget_sender_signal_index(void* self) {
    return QStackedWidget_SenderSignalIndex((QStackedWidget*)self);
}

int32_t q_stackedwidget_qbase_sender_signal_index(void* self) {
    return QStackedWidget_QBaseSenderSignalIndex((QStackedWidget*)self);
}

void q_stackedwidget_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QStackedWidget_OnSenderSignalIndex((QStackedWidget*)self, (intptr_t)slot);
}

int32_t q_stackedwidget_receivers(void* self, const char* signal) {
    return QStackedWidget_Receivers((QStackedWidget*)self, signal);
}

int32_t q_stackedwidget_qbase_receivers(void* self, const char* signal) {
    return QStackedWidget_QBaseReceivers((QStackedWidget*)self, signal);
}

void q_stackedwidget_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QStackedWidget_OnReceivers((QStackedWidget*)self, (intptr_t)slot);
}

bool q_stackedwidget_is_signal_connected(void* self, void* signal) {
    return QStackedWidget_IsSignalConnected((QStackedWidget*)self, (QMetaMethod*)signal);
}

bool q_stackedwidget_qbase_is_signal_connected(void* self, void* signal) {
    return QStackedWidget_QBaseIsSignalConnected((QStackedWidget*)self, (QMetaMethod*)signal);
}

void q_stackedwidget_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QStackedWidget_OnIsSignalConnected((QStackedWidget*)self, (intptr_t)slot);
}

void q_stackedwidget_delete(void* self) {
    QStackedWidget_Delete((QStackedWidget*)(self));
}
