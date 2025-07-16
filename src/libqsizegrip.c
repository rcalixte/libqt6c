#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqcoreevent.hpp"
#include "libqsizegrip.hpp"
#include "libqsizegrip.h"

QSizeGrip* q_sizegrip_new(void* parent) {
    return QSizeGrip_new((QWidget*)parent);
}

const QMetaObject* q_sizegrip_meta_object(void* self) {
    return QSizeGrip_MetaObject((QSizeGrip*)self);
}

void* q_sizegrip_metacast(void* self, const char* param1) {
    return QSizeGrip_Metacast((QSizeGrip*)self, param1);
}

int32_t q_sizegrip_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSizeGrip_Metacall((QSizeGrip*)self, param1, param2, param3);
}

void q_sizegrip_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QSizeGrip_OnMetacall((QSizeGrip*)self, (intptr_t)slot);
}

int32_t q_sizegrip_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSizeGrip_QBaseMetacall((QSizeGrip*)self, param1, param2, param3);
}

const char* q_sizegrip_tr(const char* s) {
    libqt_string _str = QSizeGrip_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSize* q_sizegrip_size_hint(void* self) {
    return QSizeGrip_SizeHint((QSizeGrip*)self);
}

void q_sizegrip_on_size_hint(void* self, QSize* (*slot)()) {
    QSizeGrip_OnSizeHint((QSizeGrip*)self, (intptr_t)slot);
}

QSize* q_sizegrip_qbase_size_hint(void* self) {
    return QSizeGrip_QBaseSizeHint((QSizeGrip*)self);
}

void q_sizegrip_set_visible(void* self, bool visible) {
    QSizeGrip_SetVisible((QSizeGrip*)self, visible);
}

void q_sizegrip_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QSizeGrip_OnSetVisible((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_qbase_set_visible(void* self, bool visible) {
    QSizeGrip_QBaseSetVisible((QSizeGrip*)self, visible);
}

void q_sizegrip_paint_event(void* self, void* param1) {
    QSizeGrip_PaintEvent((QSizeGrip*)self, (QPaintEvent*)param1);
}

void q_sizegrip_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnPaintEvent((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_qbase_paint_event(void* self, void* param1) {
    QSizeGrip_QBasePaintEvent((QSizeGrip*)self, (QPaintEvent*)param1);
}

void q_sizegrip_mouse_press_event(void* self, void* param1) {
    QSizeGrip_MousePressEvent((QSizeGrip*)self, (QMouseEvent*)param1);
}

void q_sizegrip_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnMousePressEvent((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_qbase_mouse_press_event(void* self, void* param1) {
    QSizeGrip_QBaseMousePressEvent((QSizeGrip*)self, (QMouseEvent*)param1);
}

void q_sizegrip_mouse_move_event(void* self, void* param1) {
    QSizeGrip_MouseMoveEvent((QSizeGrip*)self, (QMouseEvent*)param1);
}

void q_sizegrip_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnMouseMoveEvent((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_qbase_mouse_move_event(void* self, void* param1) {
    QSizeGrip_QBaseMouseMoveEvent((QSizeGrip*)self, (QMouseEvent*)param1);
}

void q_sizegrip_mouse_release_event(void* self, void* mouseEvent) {
    QSizeGrip_MouseReleaseEvent((QSizeGrip*)self, (QMouseEvent*)mouseEvent);
}

void q_sizegrip_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnMouseReleaseEvent((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_qbase_mouse_release_event(void* self, void* mouseEvent) {
    QSizeGrip_QBaseMouseReleaseEvent((QSizeGrip*)self, (QMouseEvent*)mouseEvent);
}

void q_sizegrip_move_event(void* self, void* moveEvent) {
    QSizeGrip_MoveEvent((QSizeGrip*)self, (QMoveEvent*)moveEvent);
}

void q_sizegrip_on_move_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnMoveEvent((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_qbase_move_event(void* self, void* moveEvent) {
    QSizeGrip_QBaseMoveEvent((QSizeGrip*)self, (QMoveEvent*)moveEvent);
}

void q_sizegrip_show_event(void* self, void* showEvent) {
    QSizeGrip_ShowEvent((QSizeGrip*)self, (QShowEvent*)showEvent);
}

void q_sizegrip_on_show_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnShowEvent((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_qbase_show_event(void* self, void* showEvent) {
    QSizeGrip_QBaseShowEvent((QSizeGrip*)self, (QShowEvent*)showEvent);
}

void q_sizegrip_hide_event(void* self, void* hideEvent) {
    QSizeGrip_HideEvent((QSizeGrip*)self, (QHideEvent*)hideEvent);
}

void q_sizegrip_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnHideEvent((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_qbase_hide_event(void* self, void* hideEvent) {
    QSizeGrip_QBaseHideEvent((QSizeGrip*)self, (QHideEvent*)hideEvent);
}

bool q_sizegrip_event_filter(void* self, void* param1, void* param2) {
    return QSizeGrip_EventFilter((QSizeGrip*)self, (QObject*)param1, (QEvent*)param2);
}

void q_sizegrip_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QSizeGrip_OnEventFilter((QSizeGrip*)self, (intptr_t)slot);
}

bool q_sizegrip_qbase_event_filter(void* self, void* param1, void* param2) {
    return QSizeGrip_QBaseEventFilter((QSizeGrip*)self, (QObject*)param1, (QEvent*)param2);
}

bool q_sizegrip_event(void* self, void* param1) {
    return QSizeGrip_Event((QSizeGrip*)self, (QEvent*)param1);
}

void q_sizegrip_on_event(void* self, bool (*slot)(void*, void*)) {
    QSizeGrip_OnEvent((QSizeGrip*)self, (intptr_t)slot);
}

bool q_sizegrip_qbase_event(void* self, void* param1) {
    return QSizeGrip_QBaseEvent((QSizeGrip*)self, (QEvent*)param1);
}

const char* q_sizegrip_tr2(const char* s, const char* c) {
    libqt_string _str = QSizeGrip_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sizegrip_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSizeGrip_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t q_sizegrip_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_sizegrip_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_sizegrip_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_sizegrip_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_sizegrip_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_sizegrip_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_sizegrip_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_sizegrip_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_sizegrip_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_sizegrip_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_sizegrip_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_sizegrip_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_sizegrip_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_sizegrip_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_sizegrip_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_sizegrip_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_sizegrip_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_sizegrip_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_sizegrip_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_sizegrip_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_sizegrip_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_sizegrip_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_sizegrip_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_sizegrip_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_sizegrip_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_sizegrip_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_sizegrip_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_sizegrip_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_sizegrip_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_sizegrip_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_sizegrip_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_sizegrip_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_sizegrip_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_sizegrip_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_sizegrip_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_sizegrip_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_sizegrip_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_sizegrip_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_sizegrip_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_sizegrip_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_sizegrip_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_sizegrip_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_sizegrip_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_sizegrip_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_sizegrip_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_sizegrip_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_sizegrip_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_sizegrip_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_sizegrip_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_sizegrip_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_sizegrip_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_sizegrip_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_sizegrip_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_sizegrip_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_sizegrip_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_sizegrip_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_sizegrip_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_sizegrip_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_sizegrip_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_sizegrip_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_sizegrip_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_sizegrip_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_sizegrip_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_sizegrip_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_sizegrip_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_sizegrip_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_sizegrip_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_sizegrip_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_sizegrip_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_sizegrip_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_sizegrip_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_sizegrip_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_sizegrip_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_sizegrip_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_sizegrip_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_sizegrip_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_sizegrip_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_sizegrip_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_sizegrip_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_sizegrip_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_sizegrip_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_sizegrip_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_sizegrip_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_sizegrip_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_sizegrip_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_sizegrip_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_sizegrip_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_sizegrip_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_sizegrip_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_sizegrip_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_sizegrip_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_sizegrip_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_sizegrip_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_sizegrip_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_sizegrip_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_sizegrip_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_sizegrip_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_sizegrip_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_sizegrip_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_sizegrip_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sizegrip_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sizegrip_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_sizegrip_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_sizegrip_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_sizegrip_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sizegrip_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_sizegrip_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sizegrip_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_sizegrip_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sizegrip_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_sizegrip_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_sizegrip_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_sizegrip_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_sizegrip_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sizegrip_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_sizegrip_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_sizegrip_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_sizegrip_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sizegrip_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_sizegrip_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sizegrip_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sizegrip_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_sizegrip_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sizegrip_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_sizegrip_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_sizegrip_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_sizegrip_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_sizegrip_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_sizegrip_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_sizegrip_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_sizegrip_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_sizegrip_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_sizegrip_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_sizegrip_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_sizegrip_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_sizegrip_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_sizegrip_set_focus2(void* self, int64_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int64_t q_sizegrip_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_sizegrip_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_sizegrip_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_sizegrip_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_sizegrip_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_sizegrip_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_sizegrip_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_sizegrip_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_sizegrip_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_sizegrip_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_sizegrip_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_sizegrip_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_sizegrip_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_sizegrip_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_sizegrip_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_sizegrip_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_sizegrip_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_sizegrip_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_sizegrip_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_sizegrip_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_sizegrip_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_sizegrip_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_sizegrip_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_sizegrip_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_sizegrip_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_sizegrip_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_sizegrip_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_sizegrip_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_sizegrip_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_sizegrip_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_sizegrip_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_sizegrip_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_sizegrip_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_sizegrip_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_sizegrip_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_sizegrip_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_sizegrip_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_sizegrip_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_sizegrip_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_sizegrip_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_sizegrip_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_sizegrip_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_sizegrip_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_sizegrip_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_sizegrip_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_sizegrip_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_sizegrip_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_sizegrip_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_sizegrip_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_sizegrip_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_sizegrip_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_sizegrip_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_sizegrip_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_sizegrip_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_sizegrip_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_sizegrip_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_sizegrip_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_sizegrip_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_sizegrip_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_sizegrip_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_sizegrip_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_sizegrip_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_sizegrip_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_sizegrip_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_sizegrip_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_sizegrip_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_sizegrip_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_sizegrip_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_sizegrip_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_sizegrip_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_sizegrip_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_sizegrip_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_sizegrip_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_sizegrip_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_sizegrip_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_sizegrip_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_sizegrip_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_sizegrip_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_sizegrip_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_sizegrip_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_sizegrip_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_sizegrip_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_sizegrip_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_sizegrip_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_sizegrip_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_sizegrip_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_sizegrip_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_sizegrip_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_sizegrip_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_sizegrip_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_sizegrip_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_sizegrip_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_sizegrip_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_sizegrip_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_sizegrip_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_sizegrip_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_sizegrip_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_sizegrip_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_sizegrip_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_sizegrip_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_sizegrip_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_sizegrip_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_sizegrip_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_sizegrip_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_sizegrip_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_sizegrip_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_sizegrip_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_sizegrip_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_sizegrip_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_sizegrip_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_sizegrip_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_sizegrip_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

void q_sizegrip_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_sizegrip_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

void q_sizegrip_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_sizegrip_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

void q_sizegrip_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_sizegrip_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

int64_t q_sizegrip_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_sizegrip_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_sizegrip_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_sizegrip_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_sizegrip_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_sizegrip_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_sizegrip_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_sizegrip_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_sizegrip_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_sizegrip_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_sizegrip_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_sizegrip_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_sizegrip_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_sizegrip_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_sizegrip_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_sizegrip_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_sizegrip_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_sizegrip_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sizegrip_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_sizegrip_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_sizegrip_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_sizegrip_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_sizegrip_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_sizegrip_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_sizegrip_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_sizegrip_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_sizegrip_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_sizegrip_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_sizegrip_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_sizegrip_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_sizegrip_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_sizegrip_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_sizegrip_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_sizegrip_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_sizegrip_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_sizegrip_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_sizegrip_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_sizegrip_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_sizegrip_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_sizegrip_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_sizegrip_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_sizegrip_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_sizegrip_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_sizegrip_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_sizegrip_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_sizegrip_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_sizegrip_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_sizegrip_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_sizegrip_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_sizegrip_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_sizegrip_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_sizegrip_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_sizegrip_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_sizegrip_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_sizegrip_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_sizegrip_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_sizegrip_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_sizegrip_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_sizegrip_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_sizegrip_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_sizegrip_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_sizegrip_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_sizegrip_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_sizegrip_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_sizegrip_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_sizegrip_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_sizegrip_encode_metric_f(int64_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t q_sizegrip_dev_type(void* self) {
    return QSizeGrip_DevType((QSizeGrip*)self);
}

int32_t q_sizegrip_qbase_dev_type(void* self) {
    return QSizeGrip_QBaseDevType((QSizeGrip*)self);
}

void q_sizegrip_on_dev_type(void* self, int32_t (*slot)()) {
    QSizeGrip_OnDevType((QSizeGrip*)self, (intptr_t)slot);
}

QSize* q_sizegrip_minimum_size_hint(void* self) {
    return QSizeGrip_MinimumSizeHint((QSizeGrip*)self);
}

QSize* q_sizegrip_qbase_minimum_size_hint(void* self) {
    return QSizeGrip_QBaseMinimumSizeHint((QSizeGrip*)self);
}

void q_sizegrip_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QSizeGrip_OnMinimumSizeHint((QSizeGrip*)self, (intptr_t)slot);
}

int32_t q_sizegrip_height_for_width(void* self, int param1) {
    return QSizeGrip_HeightForWidth((QSizeGrip*)self, param1);
}

int32_t q_sizegrip_qbase_height_for_width(void* self, int param1) {
    return QSizeGrip_QBaseHeightForWidth((QSizeGrip*)self, param1);
}

void q_sizegrip_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QSizeGrip_OnHeightForWidth((QSizeGrip*)self, (intptr_t)slot);
}

bool q_sizegrip_has_height_for_width(void* self) {
    return QSizeGrip_HasHeightForWidth((QSizeGrip*)self);
}

bool q_sizegrip_qbase_has_height_for_width(void* self) {
    return QSizeGrip_QBaseHasHeightForWidth((QSizeGrip*)self);
}

void q_sizegrip_on_has_height_for_width(void* self, bool (*slot)()) {
    QSizeGrip_OnHasHeightForWidth((QSizeGrip*)self, (intptr_t)slot);
}

QPaintEngine* q_sizegrip_paint_engine(void* self) {
    return QSizeGrip_PaintEngine((QSizeGrip*)self);
}

QPaintEngine* q_sizegrip_qbase_paint_engine(void* self) {
    return QSizeGrip_QBasePaintEngine((QSizeGrip*)self);
}

void q_sizegrip_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QSizeGrip_OnPaintEngine((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_mouse_double_click_event(void* self, void* event) {
    QSizeGrip_MouseDoubleClickEvent((QSizeGrip*)self, (QMouseEvent*)event);
}

void q_sizegrip_qbase_mouse_double_click_event(void* self, void* event) {
    QSizeGrip_QBaseMouseDoubleClickEvent((QSizeGrip*)self, (QMouseEvent*)event);
}

void q_sizegrip_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnMouseDoubleClickEvent((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_wheel_event(void* self, void* event) {
    QSizeGrip_WheelEvent((QSizeGrip*)self, (QWheelEvent*)event);
}

void q_sizegrip_qbase_wheel_event(void* self, void* event) {
    QSizeGrip_QBaseWheelEvent((QSizeGrip*)self, (QWheelEvent*)event);
}

void q_sizegrip_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnWheelEvent((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_key_press_event(void* self, void* event) {
    QSizeGrip_KeyPressEvent((QSizeGrip*)self, (QKeyEvent*)event);
}

void q_sizegrip_qbase_key_press_event(void* self, void* event) {
    QSizeGrip_QBaseKeyPressEvent((QSizeGrip*)self, (QKeyEvent*)event);
}

void q_sizegrip_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnKeyPressEvent((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_key_release_event(void* self, void* event) {
    QSizeGrip_KeyReleaseEvent((QSizeGrip*)self, (QKeyEvent*)event);
}

void q_sizegrip_qbase_key_release_event(void* self, void* event) {
    QSizeGrip_QBaseKeyReleaseEvent((QSizeGrip*)self, (QKeyEvent*)event);
}

void q_sizegrip_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnKeyReleaseEvent((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_focus_in_event(void* self, void* event) {
    QSizeGrip_FocusInEvent((QSizeGrip*)self, (QFocusEvent*)event);
}

void q_sizegrip_qbase_focus_in_event(void* self, void* event) {
    QSizeGrip_QBaseFocusInEvent((QSizeGrip*)self, (QFocusEvent*)event);
}

void q_sizegrip_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnFocusInEvent((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_focus_out_event(void* self, void* event) {
    QSizeGrip_FocusOutEvent((QSizeGrip*)self, (QFocusEvent*)event);
}

void q_sizegrip_qbase_focus_out_event(void* self, void* event) {
    QSizeGrip_QBaseFocusOutEvent((QSizeGrip*)self, (QFocusEvent*)event);
}

void q_sizegrip_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnFocusOutEvent((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_enter_event(void* self, void* event) {
    QSizeGrip_EnterEvent((QSizeGrip*)self, (QEnterEvent*)event);
}

void q_sizegrip_qbase_enter_event(void* self, void* event) {
    QSizeGrip_QBaseEnterEvent((QSizeGrip*)self, (QEnterEvent*)event);
}

void q_sizegrip_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnEnterEvent((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_leave_event(void* self, void* event) {
    QSizeGrip_LeaveEvent((QSizeGrip*)self, (QEvent*)event);
}

void q_sizegrip_qbase_leave_event(void* self, void* event) {
    QSizeGrip_QBaseLeaveEvent((QSizeGrip*)self, (QEvent*)event);
}

void q_sizegrip_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnLeaveEvent((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_resize_event(void* self, void* event) {
    QSizeGrip_ResizeEvent((QSizeGrip*)self, (QResizeEvent*)event);
}

void q_sizegrip_qbase_resize_event(void* self, void* event) {
    QSizeGrip_QBaseResizeEvent((QSizeGrip*)self, (QResizeEvent*)event);
}

void q_sizegrip_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnResizeEvent((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_close_event(void* self, void* event) {
    QSizeGrip_CloseEvent((QSizeGrip*)self, (QCloseEvent*)event);
}

void q_sizegrip_qbase_close_event(void* self, void* event) {
    QSizeGrip_QBaseCloseEvent((QSizeGrip*)self, (QCloseEvent*)event);
}

void q_sizegrip_on_close_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnCloseEvent((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_context_menu_event(void* self, void* event) {
    QSizeGrip_ContextMenuEvent((QSizeGrip*)self, (QContextMenuEvent*)event);
}

void q_sizegrip_qbase_context_menu_event(void* self, void* event) {
    QSizeGrip_QBaseContextMenuEvent((QSizeGrip*)self, (QContextMenuEvent*)event);
}

void q_sizegrip_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnContextMenuEvent((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_tablet_event(void* self, void* event) {
    QSizeGrip_TabletEvent((QSizeGrip*)self, (QTabletEvent*)event);
}

void q_sizegrip_qbase_tablet_event(void* self, void* event) {
    QSizeGrip_QBaseTabletEvent((QSizeGrip*)self, (QTabletEvent*)event);
}

void q_sizegrip_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnTabletEvent((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_action_event(void* self, void* event) {
    QSizeGrip_ActionEvent((QSizeGrip*)self, (QActionEvent*)event);
}

void q_sizegrip_qbase_action_event(void* self, void* event) {
    QSizeGrip_QBaseActionEvent((QSizeGrip*)self, (QActionEvent*)event);
}

void q_sizegrip_on_action_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnActionEvent((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_drag_enter_event(void* self, void* event) {
    QSizeGrip_DragEnterEvent((QSizeGrip*)self, (QDragEnterEvent*)event);
}

void q_sizegrip_qbase_drag_enter_event(void* self, void* event) {
    QSizeGrip_QBaseDragEnterEvent((QSizeGrip*)self, (QDragEnterEvent*)event);
}

void q_sizegrip_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnDragEnterEvent((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_drag_move_event(void* self, void* event) {
    QSizeGrip_DragMoveEvent((QSizeGrip*)self, (QDragMoveEvent*)event);
}

void q_sizegrip_qbase_drag_move_event(void* self, void* event) {
    QSizeGrip_QBaseDragMoveEvent((QSizeGrip*)self, (QDragMoveEvent*)event);
}

void q_sizegrip_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnDragMoveEvent((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_drag_leave_event(void* self, void* event) {
    QSizeGrip_DragLeaveEvent((QSizeGrip*)self, (QDragLeaveEvent*)event);
}

void q_sizegrip_qbase_drag_leave_event(void* self, void* event) {
    QSizeGrip_QBaseDragLeaveEvent((QSizeGrip*)self, (QDragLeaveEvent*)event);
}

void q_sizegrip_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnDragLeaveEvent((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_drop_event(void* self, void* event) {
    QSizeGrip_DropEvent((QSizeGrip*)self, (QDropEvent*)event);
}

void q_sizegrip_qbase_drop_event(void* self, void* event) {
    QSizeGrip_QBaseDropEvent((QSizeGrip*)self, (QDropEvent*)event);
}

void q_sizegrip_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnDropEvent((QSizeGrip*)self, (intptr_t)slot);
}

bool q_sizegrip_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QSizeGrip_NativeEvent((QSizeGrip*)self, qstring(eventType), message, result);
}

bool q_sizegrip_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QSizeGrip_QBaseNativeEvent((QSizeGrip*)self, qstring(eventType), message, result);
}

void q_sizegrip_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QSizeGrip_OnNativeEvent((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_change_event(void* self, void* param1) {
    QSizeGrip_ChangeEvent((QSizeGrip*)self, (QEvent*)param1);
}

void q_sizegrip_qbase_change_event(void* self, void* param1) {
    QSizeGrip_QBaseChangeEvent((QSizeGrip*)self, (QEvent*)param1);
}

void q_sizegrip_on_change_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnChangeEvent((QSizeGrip*)self, (intptr_t)slot);
}

int32_t q_sizegrip_metric(void* self, int64_t param1) {
    return QSizeGrip_Metric((QSizeGrip*)self, param1);
}

int32_t q_sizegrip_qbase_metric(void* self, int64_t param1) {
    return QSizeGrip_QBaseMetric((QSizeGrip*)self, param1);
}

void q_sizegrip_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QSizeGrip_OnMetric((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_init_painter(void* self, void* painter) {
    QSizeGrip_InitPainter((QSizeGrip*)self, (QPainter*)painter);
}

void q_sizegrip_qbase_init_painter(void* self, void* painter) {
    QSizeGrip_QBaseInitPainter((QSizeGrip*)self, (QPainter*)painter);
}

void q_sizegrip_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnInitPainter((QSizeGrip*)self, (intptr_t)slot);
}

QPaintDevice* q_sizegrip_redirected(void* self, void* offset) {
    return QSizeGrip_Redirected((QSizeGrip*)self, (QPoint*)offset);
}

QPaintDevice* q_sizegrip_qbase_redirected(void* self, void* offset) {
    return QSizeGrip_QBaseRedirected((QSizeGrip*)self, (QPoint*)offset);
}

void q_sizegrip_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QSizeGrip_OnRedirected((QSizeGrip*)self, (intptr_t)slot);
}

QPainter* q_sizegrip_shared_painter(void* self) {
    return QSizeGrip_SharedPainter((QSizeGrip*)self);
}

QPainter* q_sizegrip_qbase_shared_painter(void* self) {
    return QSizeGrip_QBaseSharedPainter((QSizeGrip*)self);
}

void q_sizegrip_on_shared_painter(void* self, QPainter* (*slot)()) {
    QSizeGrip_OnSharedPainter((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_input_method_event(void* self, void* param1) {
    QSizeGrip_InputMethodEvent((QSizeGrip*)self, (QInputMethodEvent*)param1);
}

void q_sizegrip_qbase_input_method_event(void* self, void* param1) {
    QSizeGrip_QBaseInputMethodEvent((QSizeGrip*)self, (QInputMethodEvent*)param1);
}

void q_sizegrip_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnInputMethodEvent((QSizeGrip*)self, (intptr_t)slot);
}

QVariant* q_sizegrip_input_method_query(void* self, int64_t param1) {
    return QSizeGrip_InputMethodQuery((QSizeGrip*)self, param1);
}

QVariant* q_sizegrip_qbase_input_method_query(void* self, int64_t param1) {
    return QSizeGrip_QBaseInputMethodQuery((QSizeGrip*)self, param1);
}

void q_sizegrip_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QSizeGrip_OnInputMethodQuery((QSizeGrip*)self, (intptr_t)slot);
}

bool q_sizegrip_focus_next_prev_child(void* self, bool next) {
    return QSizeGrip_FocusNextPrevChild((QSizeGrip*)self, next);
}

bool q_sizegrip_qbase_focus_next_prev_child(void* self, bool next) {
    return QSizeGrip_QBaseFocusNextPrevChild((QSizeGrip*)self, next);
}

void q_sizegrip_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QSizeGrip_OnFocusNextPrevChild((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_timer_event(void* self, void* event) {
    QSizeGrip_TimerEvent((QSizeGrip*)self, (QTimerEvent*)event);
}

void q_sizegrip_qbase_timer_event(void* self, void* event) {
    QSizeGrip_QBaseTimerEvent((QSizeGrip*)self, (QTimerEvent*)event);
}

void q_sizegrip_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnTimerEvent((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_child_event(void* self, void* event) {
    QSizeGrip_ChildEvent((QSizeGrip*)self, (QChildEvent*)event);
}

void q_sizegrip_qbase_child_event(void* self, void* event) {
    QSizeGrip_QBaseChildEvent((QSizeGrip*)self, (QChildEvent*)event);
}

void q_sizegrip_on_child_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnChildEvent((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_custom_event(void* self, void* event) {
    QSizeGrip_CustomEvent((QSizeGrip*)self, (QEvent*)event);
}

void q_sizegrip_qbase_custom_event(void* self, void* event) {
    QSizeGrip_QBaseCustomEvent((QSizeGrip*)self, (QEvent*)event);
}

void q_sizegrip_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnCustomEvent((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_connect_notify(void* self, void* signal) {
    QSizeGrip_ConnectNotify((QSizeGrip*)self, (QMetaMethod*)signal);
}

void q_sizegrip_qbase_connect_notify(void* self, void* signal) {
    QSizeGrip_QBaseConnectNotify((QSizeGrip*)self, (QMetaMethod*)signal);
}

void q_sizegrip_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnConnectNotify((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_disconnect_notify(void* self, void* signal) {
    QSizeGrip_DisconnectNotify((QSizeGrip*)self, (QMetaMethod*)signal);
}

void q_sizegrip_qbase_disconnect_notify(void* self, void* signal) {
    QSizeGrip_QBaseDisconnectNotify((QSizeGrip*)self, (QMetaMethod*)signal);
}

void q_sizegrip_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnDisconnectNotify((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_update_micro_focus(void* self) {
    QSizeGrip_UpdateMicroFocus((QSizeGrip*)self);
}

void q_sizegrip_qbase_update_micro_focus(void* self) {
    QSizeGrip_QBaseUpdateMicroFocus((QSizeGrip*)self);
}

void q_sizegrip_on_update_micro_focus(void* self, void (*slot)()) {
    QSizeGrip_OnUpdateMicroFocus((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_create(void* self) {
    QSizeGrip_Create((QSizeGrip*)self);
}

void q_sizegrip_qbase_create(void* self) {
    QSizeGrip_QBaseCreate((QSizeGrip*)self);
}

void q_sizegrip_on_create(void* self, void (*slot)()) {
    QSizeGrip_OnCreate((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_destroy(void* self) {
    QSizeGrip_Destroy((QSizeGrip*)self);
}

void q_sizegrip_qbase_destroy(void* self) {
    QSizeGrip_QBaseDestroy((QSizeGrip*)self);
}

void q_sizegrip_on_destroy(void* self, void (*slot)()) {
    QSizeGrip_OnDestroy((QSizeGrip*)self, (intptr_t)slot);
}

bool q_sizegrip_focus_next_child(void* self) {
    return QSizeGrip_FocusNextChild((QSizeGrip*)self);
}

bool q_sizegrip_qbase_focus_next_child(void* self) {
    return QSizeGrip_QBaseFocusNextChild((QSizeGrip*)self);
}

void q_sizegrip_on_focus_next_child(void* self, bool (*slot)()) {
    QSizeGrip_OnFocusNextChild((QSizeGrip*)self, (intptr_t)slot);
}

bool q_sizegrip_focus_previous_child(void* self) {
    return QSizeGrip_FocusPreviousChild((QSizeGrip*)self);
}

bool q_sizegrip_qbase_focus_previous_child(void* self) {
    return QSizeGrip_QBaseFocusPreviousChild((QSizeGrip*)self);
}

void q_sizegrip_on_focus_previous_child(void* self, bool (*slot)()) {
    QSizeGrip_OnFocusPreviousChild((QSizeGrip*)self, (intptr_t)slot);
}

QObject* q_sizegrip_sender(void* self) {
    return QSizeGrip_Sender((QSizeGrip*)self);
}

QObject* q_sizegrip_qbase_sender(void* self) {
    return QSizeGrip_QBaseSender((QSizeGrip*)self);
}

void q_sizegrip_on_sender(void* self, QObject* (*slot)()) {
    QSizeGrip_OnSender((QSizeGrip*)self, (intptr_t)slot);
}

int32_t q_sizegrip_sender_signal_index(void* self) {
    return QSizeGrip_SenderSignalIndex((QSizeGrip*)self);
}

int32_t q_sizegrip_qbase_sender_signal_index(void* self) {
    return QSizeGrip_QBaseSenderSignalIndex((QSizeGrip*)self);
}

void q_sizegrip_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QSizeGrip_OnSenderSignalIndex((QSizeGrip*)self, (intptr_t)slot);
}

int32_t q_sizegrip_receivers(void* self, const char* signal) {
    return QSizeGrip_Receivers((QSizeGrip*)self, signal);
}

int32_t q_sizegrip_qbase_receivers(void* self, const char* signal) {
    return QSizeGrip_QBaseReceivers((QSizeGrip*)self, signal);
}

void q_sizegrip_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QSizeGrip_OnReceivers((QSizeGrip*)self, (intptr_t)slot);
}

bool q_sizegrip_is_signal_connected(void* self, void* signal) {
    return QSizeGrip_IsSignalConnected((QSizeGrip*)self, (QMetaMethod*)signal);
}

bool q_sizegrip_qbase_is_signal_connected(void* self, void* signal) {
    return QSizeGrip_QBaseIsSignalConnected((QSizeGrip*)self, (QMetaMethod*)signal);
}

void q_sizegrip_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QSizeGrip_OnIsSignalConnected((QSizeGrip*)self, (intptr_t)slot);
}

double q_sizegrip_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QSizeGrip_GetDecodedMetricF((QSizeGrip*)self, metricA, metricB);
}

double q_sizegrip_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QSizeGrip_QBaseGetDecodedMetricF((QSizeGrip*)self, metricA, metricB);
}

void q_sizegrip_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t)) {
    QSizeGrip_OnGetDecodedMetricF((QSizeGrip*)self, (intptr_t)slot);
}

void q_sizegrip_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_sizegrip_delete(void* self) {
    QSizeGrip_Delete((QSizeGrip*)(self));
}
