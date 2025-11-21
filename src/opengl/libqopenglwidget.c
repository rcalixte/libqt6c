#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqimage.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqopenglcontext.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqsurfaceformat.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libqopenglwidget.hpp"
#include "libqopenglwidget.h"

QOpenGLWidget* q_openglwidget_new(void* parent) {
    return QOpenGLWidget_new((QWidget*)parent);
}

QOpenGLWidget* q_openglwidget_new2() {
    return QOpenGLWidget_new2();
}

QOpenGLWidget* q_openglwidget_new3(void* parent, int64_t f) {
    return QOpenGLWidget_new3((QWidget*)parent, f);
}

const QMetaObject* q_openglwidget_meta_object(void* self) {
    return QOpenGLWidget_MetaObject((QOpenGLWidget*)self);
}

void* q_openglwidget_metacast(void* self, const char* param1) {
    return QOpenGLWidget_Metacast((QOpenGLWidget*)self, param1);
}

int32_t q_openglwidget_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QOpenGLWidget_Metacall((QOpenGLWidget*)self, param1, param2, param3);
}

void q_openglwidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QOpenGLWidget_OnMetacall((QOpenGLWidget*)self, (intptr_t)callback);
}

int32_t q_openglwidget_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QOpenGLWidget_QBaseMetacall((QOpenGLWidget*)self, param1, param2, param3);
}

const char* q_openglwidget_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_openglwidget_set_update_behavior(void* self, int32_t updateBehavior) {
    QOpenGLWidget_SetUpdateBehavior((QOpenGLWidget*)self, updateBehavior);
}

int32_t q_openglwidget_update_behavior(void* self) {
    return QOpenGLWidget_UpdateBehavior((QOpenGLWidget*)self);
}

void q_openglwidget_set_format(void* self, void* format) {
    QOpenGLWidget_SetFormat((QOpenGLWidget*)self, (QSurfaceFormat*)format);
}

QSurfaceFormat* q_openglwidget_format(void* self) {
    return QOpenGLWidget_Format((QOpenGLWidget*)self);
}

void q_openglwidget_set_texture_format(void* self, uint32_t texFormat) {
    QOpenGLWidget_SetTextureFormat((QOpenGLWidget*)self, texFormat);
}

bool q_openglwidget_is_valid(void* self) {
    return QOpenGLWidget_IsValid((QOpenGLWidget*)self);
}

void q_openglwidget_make_current(void* self) {
    QOpenGLWidget_MakeCurrent((QOpenGLWidget*)self);
}

void q_openglwidget_make_current2(void* self, uint8_t targetBuffer) {
    QOpenGLWidget_MakeCurrent2((QOpenGLWidget*)self, targetBuffer);
}

void q_openglwidget_done_current(void* self) {
    QOpenGLWidget_DoneCurrent((QOpenGLWidget*)self);
}

QOpenGLContext* q_openglwidget_context(void* self) {
    return QOpenGLWidget_Context((QOpenGLWidget*)self);
}

uint32_t q_openglwidget_default_framebuffer_object(void* self) {
    return QOpenGLWidget_DefaultFramebufferObject((QOpenGLWidget*)self);
}

uint32_t q_openglwidget_default_framebuffer_object2(void* self, uint8_t targetBuffer) {
    return QOpenGLWidget_DefaultFramebufferObject2((QOpenGLWidget*)self, targetBuffer);
}

QImage* q_openglwidget_grab_framebuffer(void* self) {
    return QOpenGLWidget_GrabFramebuffer((QOpenGLWidget*)self);
}

QImage* q_openglwidget_grab_framebuffer2(void* self, uint8_t targetBuffer) {
    return QOpenGLWidget_GrabFramebuffer2((QOpenGLWidget*)self, targetBuffer);
}

uint8_t q_openglwidget_current_target_buffer(void* self) {
    return QOpenGLWidget_CurrentTargetBuffer((QOpenGLWidget*)self);
}

void q_openglwidget_about_to_compose(void* self) {
    QOpenGLWidget_AboutToCompose((QOpenGLWidget*)self);
}

void q_openglwidget_on_about_to_compose(void* self, void (*callback)(void*)) {
    QOpenGLWidget_Connect_AboutToCompose((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_frame_swapped(void* self) {
    QOpenGLWidget_FrameSwapped((QOpenGLWidget*)self);
}

void q_openglwidget_on_frame_swapped(void* self, void (*callback)(void*)) {
    QOpenGLWidget_Connect_FrameSwapped((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_about_to_resize(void* self) {
    QOpenGLWidget_AboutToResize((QOpenGLWidget*)self);
}

void q_openglwidget_on_about_to_resize(void* self, void (*callback)(void*)) {
    QOpenGLWidget_Connect_AboutToResize((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_resized(void* self) {
    QOpenGLWidget_Resized((QOpenGLWidget*)self);
}

void q_openglwidget_on_resized(void* self, void (*callback)(void*)) {
    QOpenGLWidget_Connect_Resized((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_initialize_g_l(void* self) {
    QOpenGLWidget_InitializeGL((QOpenGLWidget*)self);
}

void q_openglwidget_on_initialize_g_l(void* self, void (*callback)()) {
    QOpenGLWidget_OnInitializeGL((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_qbase_initialize_g_l(void* self) {
    QOpenGLWidget_QBaseInitializeGL((QOpenGLWidget*)self);
}

void q_openglwidget_resize_g_l(void* self, int w, int h) {
    QOpenGLWidget_ResizeGL((QOpenGLWidget*)self, w, h);
}

void q_openglwidget_on_resize_g_l(void* self, void (*callback)(void*, int, int)) {
    QOpenGLWidget_OnResizeGL((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_qbase_resize_g_l(void* self, int w, int h) {
    QOpenGLWidget_QBaseResizeGL((QOpenGLWidget*)self, w, h);
}

void q_openglwidget_paint_g_l(void* self) {
    QOpenGLWidget_PaintGL((QOpenGLWidget*)self);
}

void q_openglwidget_on_paint_g_l(void* self, void (*callback)()) {
    QOpenGLWidget_OnPaintGL((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_qbase_paint_g_l(void* self) {
    QOpenGLWidget_QBasePaintGL((QOpenGLWidget*)self);
}

void q_openglwidget_paint_event(void* self, void* e) {
    QOpenGLWidget_PaintEvent((QOpenGLWidget*)self, (QPaintEvent*)e);
}

void q_openglwidget_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnPaintEvent((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_qbase_paint_event(void* self, void* e) {
    QOpenGLWidget_QBasePaintEvent((QOpenGLWidget*)self, (QPaintEvent*)e);
}

void q_openglwidget_resize_event(void* self, void* e) {
    QOpenGLWidget_ResizeEvent((QOpenGLWidget*)self, (QResizeEvent*)e);
}

void q_openglwidget_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnResizeEvent((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_qbase_resize_event(void* self, void* e) {
    QOpenGLWidget_QBaseResizeEvent((QOpenGLWidget*)self, (QResizeEvent*)e);
}

bool q_openglwidget_event(void* self, void* e) {
    return QOpenGLWidget_Event((QOpenGLWidget*)self, (QEvent*)e);
}

void q_openglwidget_on_event(void* self, bool (*callback)(void*, void*)) {
    QOpenGLWidget_OnEvent((QOpenGLWidget*)self, (intptr_t)callback);
}

bool q_openglwidget_qbase_event(void* self, void* e) {
    return QOpenGLWidget_QBaseEvent((QOpenGLWidget*)self, (QEvent*)e);
}

int32_t q_openglwidget_metric(void* self, int32_t metric) {
    return QOpenGLWidget_Metric((QOpenGLWidget*)self, metric);
}

void q_openglwidget_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QOpenGLWidget_OnMetric((QOpenGLWidget*)self, (intptr_t)callback);
}

int32_t q_openglwidget_qbase_metric(void* self, int32_t metric) {
    return QOpenGLWidget_QBaseMetric((QOpenGLWidget*)self, metric);
}

QPaintDevice* q_openglwidget_redirected(void* self, void* p) {
    return QOpenGLWidget_Redirected((QOpenGLWidget*)self, (QPoint*)p);
}

void q_openglwidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QOpenGLWidget_OnRedirected((QOpenGLWidget*)self, (intptr_t)callback);
}

QPaintDevice* q_openglwidget_qbase_redirected(void* self, void* p) {
    return QOpenGLWidget_QBaseRedirected((QOpenGLWidget*)self, (QPoint*)p);
}

QPaintEngine* q_openglwidget_paint_engine(void* self) {
    return QOpenGLWidget_PaintEngine((QOpenGLWidget*)self);
}

void q_openglwidget_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QOpenGLWidget_OnPaintEngine((QOpenGLWidget*)self, (intptr_t)callback);
}

QPaintEngine* q_openglwidget_qbase_paint_engine(void* self) {
    return QOpenGLWidget_QBasePaintEngine((QOpenGLWidget*)self);
}

const char* q_openglwidget_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_openglwidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t q_openglwidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_openglwidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_openglwidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_openglwidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_openglwidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_openglwidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_openglwidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_openglwidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_openglwidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_openglwidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_openglwidget_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_openglwidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_openglwidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_openglwidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_openglwidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_openglwidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_openglwidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_openglwidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_openglwidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_openglwidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_openglwidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_openglwidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_openglwidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_openglwidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_openglwidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_openglwidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_openglwidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_openglwidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_openglwidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_openglwidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_openglwidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_openglwidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_openglwidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_openglwidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_openglwidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_openglwidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_openglwidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_openglwidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_openglwidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_openglwidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_openglwidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_openglwidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_openglwidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_openglwidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_openglwidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_openglwidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_openglwidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_openglwidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_openglwidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_openglwidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_openglwidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_openglwidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_openglwidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_openglwidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_openglwidget_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_openglwidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_openglwidget_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_openglwidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_openglwidget_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_openglwidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_openglwidget_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_openglwidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_openglwidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_openglwidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_openglwidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_openglwidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_openglwidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_openglwidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_openglwidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_openglwidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_openglwidget_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_openglwidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_openglwidget_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_openglwidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_openglwidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_openglwidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_openglwidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_openglwidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_openglwidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_openglwidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_openglwidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_openglwidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_openglwidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_openglwidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_openglwidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_openglwidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_openglwidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_openglwidget_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_openglwidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_openglwidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_openglwidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_openglwidget_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_openglwidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_openglwidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_openglwidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_openglwidget_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_openglwidget_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_openglwidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_openglwidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_openglwidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_openglwidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_openglwidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_openglwidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_openglwidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_openglwidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_openglwidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_openglwidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_openglwidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_openglwidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_openglwidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_openglwidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_openglwidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_openglwidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_openglwidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_openglwidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_openglwidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_openglwidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_openglwidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_openglwidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_openglwidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_openglwidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_openglwidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_openglwidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_openglwidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_openglwidget_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_openglwidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_openglwidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_openglwidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_openglwidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_openglwidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_openglwidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_openglwidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_openglwidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_openglwidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_openglwidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_openglwidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_openglwidget_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_openglwidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_openglwidget_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_openglwidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_openglwidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_openglwidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_openglwidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_openglwidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_openglwidget_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_openglwidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_openglwidget_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_openglwidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_openglwidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_openglwidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_openglwidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_openglwidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_openglwidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_openglwidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_openglwidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_openglwidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_openglwidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_openglwidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_openglwidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_openglwidget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_openglwidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_openglwidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_openglwidget_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_openglwidget_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_openglwidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_openglwidget_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_openglwidget_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_openglwidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_openglwidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_openglwidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_openglwidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_openglwidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_openglwidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_openglwidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_openglwidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_openglwidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_openglwidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_openglwidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_openglwidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_openglwidget_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_openglwidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_openglwidget_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_openglwidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_openglwidget_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_openglwidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_openglwidget_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_openglwidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_openglwidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_openglwidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_openglwidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_openglwidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_openglwidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_openglwidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_openglwidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_openglwidget_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_openglwidget_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_openglwidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_openglwidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_openglwidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_openglwidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_openglwidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_openglwidget_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_openglwidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_openglwidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_openglwidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_openglwidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_openglwidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_openglwidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_openglwidget_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_openglwidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_openglwidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_openglwidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_openglwidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_openglwidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_openglwidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_openglwidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_openglwidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_openglwidget_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_openglwidget_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_openglwidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_openglwidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_openglwidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_openglwidget_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_openglwidget_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_openglwidget_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_openglwidget_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_openglwidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_openglwidget_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t q_openglwidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_openglwidget_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_openglwidget_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t q_openglwidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_openglwidget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_openglwidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_openglwidget_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_openglwidget_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_openglwidget_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_openglwidget_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_openglwidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_openglwidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_openglwidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_openglwidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_openglwidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_openglwidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_openglwidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_openglwidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_openglwidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_openglwidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_openglwidget_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_openglwidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_openglwidget_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_openglwidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_openglwidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_openglwidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_openglwidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t q_openglwidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_openglwidget_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_openglwidget_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_openglwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_openglwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_openglwidget_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_openglwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_openglwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_openglwidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_openglwidget_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_openglwidget_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_openglwidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_openglwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_openglwidget_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_openglwidget_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_openglwidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_openglwidget_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_openglwidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_openglwidget_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_openglwidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_openglwidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_openglwidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_openglwidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_openglwidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_openglwidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_openglwidget_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_openglwidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_openglwidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_openglwidget_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_openglwidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_openglwidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_openglwidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_openglwidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_openglwidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_openglwidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_openglwidget_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_openglwidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_openglwidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_openglwidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_openglwidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_openglwidget_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_openglwidget_dynamic_property_names");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_openglwidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_openglwidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_openglwidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_openglwidget_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_openglwidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_openglwidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_openglwidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_openglwidget_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_openglwidget_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_openglwidget_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_openglwidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_openglwidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_openglwidget_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_openglwidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_openglwidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_openglwidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_openglwidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_openglwidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_openglwidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_openglwidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_openglwidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_openglwidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_openglwidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_openglwidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_openglwidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_openglwidget_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t q_openglwidget_dev_type(void* self) {
    return QOpenGLWidget_DevType((QOpenGLWidget*)self);
}

int32_t q_openglwidget_qbase_dev_type(void* self) {
    return QOpenGLWidget_QBaseDevType((QOpenGLWidget*)self);
}

void q_openglwidget_on_dev_type(void* self, int32_t (*callback)()) {
    QOpenGLWidget_OnDevType((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_set_visible(void* self, bool visible) {
    QOpenGLWidget_SetVisible((QOpenGLWidget*)self, visible);
}

void q_openglwidget_qbase_set_visible(void* self, bool visible) {
    QOpenGLWidget_QBaseSetVisible((QOpenGLWidget*)self, visible);
}

void q_openglwidget_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QOpenGLWidget_OnSetVisible((QOpenGLWidget*)self, (intptr_t)callback);
}

QSize* q_openglwidget_size_hint(void* self) {
    return QOpenGLWidget_SizeHint((QOpenGLWidget*)self);
}

QSize* q_openglwidget_qbase_size_hint(void* self) {
    return QOpenGLWidget_QBaseSizeHint((QOpenGLWidget*)self);
}

void q_openglwidget_on_size_hint(void* self, QSize* (*callback)()) {
    QOpenGLWidget_OnSizeHint((QOpenGLWidget*)self, (intptr_t)callback);
}

QSize* q_openglwidget_minimum_size_hint(void* self) {
    return QOpenGLWidget_MinimumSizeHint((QOpenGLWidget*)self);
}

QSize* q_openglwidget_qbase_minimum_size_hint(void* self) {
    return QOpenGLWidget_QBaseMinimumSizeHint((QOpenGLWidget*)self);
}

void q_openglwidget_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QOpenGLWidget_OnMinimumSizeHint((QOpenGLWidget*)self, (intptr_t)callback);
}

int32_t q_openglwidget_height_for_width(void* self, int param1) {
    return QOpenGLWidget_HeightForWidth((QOpenGLWidget*)self, param1);
}

int32_t q_openglwidget_qbase_height_for_width(void* self, int param1) {
    return QOpenGLWidget_QBaseHeightForWidth((QOpenGLWidget*)self, param1);
}

void q_openglwidget_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QOpenGLWidget_OnHeightForWidth((QOpenGLWidget*)self, (intptr_t)callback);
}

bool q_openglwidget_has_height_for_width(void* self) {
    return QOpenGLWidget_HasHeightForWidth((QOpenGLWidget*)self);
}

bool q_openglwidget_qbase_has_height_for_width(void* self) {
    return QOpenGLWidget_QBaseHasHeightForWidth((QOpenGLWidget*)self);
}

void q_openglwidget_on_has_height_for_width(void* self, bool (*callback)()) {
    QOpenGLWidget_OnHasHeightForWidth((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_mouse_press_event(void* self, void* event) {
    QOpenGLWidget_MousePressEvent((QOpenGLWidget*)self, (QMouseEvent*)event);
}

void q_openglwidget_qbase_mouse_press_event(void* self, void* event) {
    QOpenGLWidget_QBaseMousePressEvent((QOpenGLWidget*)self, (QMouseEvent*)event);
}

void q_openglwidget_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnMousePressEvent((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_mouse_release_event(void* self, void* event) {
    QOpenGLWidget_MouseReleaseEvent((QOpenGLWidget*)self, (QMouseEvent*)event);
}

void q_openglwidget_qbase_mouse_release_event(void* self, void* event) {
    QOpenGLWidget_QBaseMouseReleaseEvent((QOpenGLWidget*)self, (QMouseEvent*)event);
}

void q_openglwidget_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnMouseReleaseEvent((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_mouse_double_click_event(void* self, void* event) {
    QOpenGLWidget_MouseDoubleClickEvent((QOpenGLWidget*)self, (QMouseEvent*)event);
}

void q_openglwidget_qbase_mouse_double_click_event(void* self, void* event) {
    QOpenGLWidget_QBaseMouseDoubleClickEvent((QOpenGLWidget*)self, (QMouseEvent*)event);
}

void q_openglwidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnMouseDoubleClickEvent((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_mouse_move_event(void* self, void* event) {
    QOpenGLWidget_MouseMoveEvent((QOpenGLWidget*)self, (QMouseEvent*)event);
}

void q_openglwidget_qbase_mouse_move_event(void* self, void* event) {
    QOpenGLWidget_QBaseMouseMoveEvent((QOpenGLWidget*)self, (QMouseEvent*)event);
}

void q_openglwidget_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnMouseMoveEvent((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_wheel_event(void* self, void* event) {
    QOpenGLWidget_WheelEvent((QOpenGLWidget*)self, (QWheelEvent*)event);
}

void q_openglwidget_qbase_wheel_event(void* self, void* event) {
    QOpenGLWidget_QBaseWheelEvent((QOpenGLWidget*)self, (QWheelEvent*)event);
}

void q_openglwidget_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnWheelEvent((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_key_press_event(void* self, void* event) {
    QOpenGLWidget_KeyPressEvent((QOpenGLWidget*)self, (QKeyEvent*)event);
}

void q_openglwidget_qbase_key_press_event(void* self, void* event) {
    QOpenGLWidget_QBaseKeyPressEvent((QOpenGLWidget*)self, (QKeyEvent*)event);
}

void q_openglwidget_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnKeyPressEvent((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_key_release_event(void* self, void* event) {
    QOpenGLWidget_KeyReleaseEvent((QOpenGLWidget*)self, (QKeyEvent*)event);
}

void q_openglwidget_qbase_key_release_event(void* self, void* event) {
    QOpenGLWidget_QBaseKeyReleaseEvent((QOpenGLWidget*)self, (QKeyEvent*)event);
}

void q_openglwidget_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnKeyReleaseEvent((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_focus_in_event(void* self, void* event) {
    QOpenGLWidget_FocusInEvent((QOpenGLWidget*)self, (QFocusEvent*)event);
}

void q_openglwidget_qbase_focus_in_event(void* self, void* event) {
    QOpenGLWidget_QBaseFocusInEvent((QOpenGLWidget*)self, (QFocusEvent*)event);
}

void q_openglwidget_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnFocusInEvent((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_focus_out_event(void* self, void* event) {
    QOpenGLWidget_FocusOutEvent((QOpenGLWidget*)self, (QFocusEvent*)event);
}

void q_openglwidget_qbase_focus_out_event(void* self, void* event) {
    QOpenGLWidget_QBaseFocusOutEvent((QOpenGLWidget*)self, (QFocusEvent*)event);
}

void q_openglwidget_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnFocusOutEvent((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_enter_event(void* self, void* event) {
    QOpenGLWidget_EnterEvent((QOpenGLWidget*)self, (QEnterEvent*)event);
}

void q_openglwidget_qbase_enter_event(void* self, void* event) {
    QOpenGLWidget_QBaseEnterEvent((QOpenGLWidget*)self, (QEnterEvent*)event);
}

void q_openglwidget_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnEnterEvent((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_leave_event(void* self, void* event) {
    QOpenGLWidget_LeaveEvent((QOpenGLWidget*)self, (QEvent*)event);
}

void q_openglwidget_qbase_leave_event(void* self, void* event) {
    QOpenGLWidget_QBaseLeaveEvent((QOpenGLWidget*)self, (QEvent*)event);
}

void q_openglwidget_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnLeaveEvent((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_move_event(void* self, void* event) {
    QOpenGLWidget_MoveEvent((QOpenGLWidget*)self, (QMoveEvent*)event);
}

void q_openglwidget_qbase_move_event(void* self, void* event) {
    QOpenGLWidget_QBaseMoveEvent((QOpenGLWidget*)self, (QMoveEvent*)event);
}

void q_openglwidget_on_move_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnMoveEvent((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_close_event(void* self, void* event) {
    QOpenGLWidget_CloseEvent((QOpenGLWidget*)self, (QCloseEvent*)event);
}

void q_openglwidget_qbase_close_event(void* self, void* event) {
    QOpenGLWidget_QBaseCloseEvent((QOpenGLWidget*)self, (QCloseEvent*)event);
}

void q_openglwidget_on_close_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnCloseEvent((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_context_menu_event(void* self, void* event) {
    QOpenGLWidget_ContextMenuEvent((QOpenGLWidget*)self, (QContextMenuEvent*)event);
}

void q_openglwidget_qbase_context_menu_event(void* self, void* event) {
    QOpenGLWidget_QBaseContextMenuEvent((QOpenGLWidget*)self, (QContextMenuEvent*)event);
}

void q_openglwidget_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnContextMenuEvent((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_tablet_event(void* self, void* event) {
    QOpenGLWidget_TabletEvent((QOpenGLWidget*)self, (QTabletEvent*)event);
}

void q_openglwidget_qbase_tablet_event(void* self, void* event) {
    QOpenGLWidget_QBaseTabletEvent((QOpenGLWidget*)self, (QTabletEvent*)event);
}

void q_openglwidget_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnTabletEvent((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_action_event(void* self, void* event) {
    QOpenGLWidget_ActionEvent((QOpenGLWidget*)self, (QActionEvent*)event);
}

void q_openglwidget_qbase_action_event(void* self, void* event) {
    QOpenGLWidget_QBaseActionEvent((QOpenGLWidget*)self, (QActionEvent*)event);
}

void q_openglwidget_on_action_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnActionEvent((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_drag_enter_event(void* self, void* event) {
    QOpenGLWidget_DragEnterEvent((QOpenGLWidget*)self, (QDragEnterEvent*)event);
}

void q_openglwidget_qbase_drag_enter_event(void* self, void* event) {
    QOpenGLWidget_QBaseDragEnterEvent((QOpenGLWidget*)self, (QDragEnterEvent*)event);
}

void q_openglwidget_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnDragEnterEvent((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_drag_move_event(void* self, void* event) {
    QOpenGLWidget_DragMoveEvent((QOpenGLWidget*)self, (QDragMoveEvent*)event);
}

void q_openglwidget_qbase_drag_move_event(void* self, void* event) {
    QOpenGLWidget_QBaseDragMoveEvent((QOpenGLWidget*)self, (QDragMoveEvent*)event);
}

void q_openglwidget_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnDragMoveEvent((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_drag_leave_event(void* self, void* event) {
    QOpenGLWidget_DragLeaveEvent((QOpenGLWidget*)self, (QDragLeaveEvent*)event);
}

void q_openglwidget_qbase_drag_leave_event(void* self, void* event) {
    QOpenGLWidget_QBaseDragLeaveEvent((QOpenGLWidget*)self, (QDragLeaveEvent*)event);
}

void q_openglwidget_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnDragLeaveEvent((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_drop_event(void* self, void* event) {
    QOpenGLWidget_DropEvent((QOpenGLWidget*)self, (QDropEvent*)event);
}

void q_openglwidget_qbase_drop_event(void* self, void* event) {
    QOpenGLWidget_QBaseDropEvent((QOpenGLWidget*)self, (QDropEvent*)event);
}

void q_openglwidget_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnDropEvent((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_show_event(void* self, void* event) {
    QOpenGLWidget_ShowEvent((QOpenGLWidget*)self, (QShowEvent*)event);
}

void q_openglwidget_qbase_show_event(void* self, void* event) {
    QOpenGLWidget_QBaseShowEvent((QOpenGLWidget*)self, (QShowEvent*)event);
}

void q_openglwidget_on_show_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnShowEvent((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_hide_event(void* self, void* event) {
    QOpenGLWidget_HideEvent((QOpenGLWidget*)self, (QHideEvent*)event);
}

void q_openglwidget_qbase_hide_event(void* self, void* event) {
    QOpenGLWidget_QBaseHideEvent((QOpenGLWidget*)self, (QHideEvent*)event);
}

void q_openglwidget_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnHideEvent((QOpenGLWidget*)self, (intptr_t)callback);
}

bool q_openglwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QOpenGLWidget_NativeEvent((QOpenGLWidget*)self, qstring(eventType), message, result);
}

bool q_openglwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QOpenGLWidget_QBaseNativeEvent((QOpenGLWidget*)self, qstring(eventType), message, result);
}

void q_openglwidget_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QOpenGLWidget_OnNativeEvent((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_change_event(void* self, void* param1) {
    QOpenGLWidget_ChangeEvent((QOpenGLWidget*)self, (QEvent*)param1);
}

void q_openglwidget_qbase_change_event(void* self, void* param1) {
    QOpenGLWidget_QBaseChangeEvent((QOpenGLWidget*)self, (QEvent*)param1);
}

void q_openglwidget_on_change_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnChangeEvent((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_init_painter(void* self, void* painter) {
    QOpenGLWidget_InitPainter((QOpenGLWidget*)self, (QPainter*)painter);
}

void q_openglwidget_qbase_init_painter(void* self, void* painter) {
    QOpenGLWidget_QBaseInitPainter((QOpenGLWidget*)self, (QPainter*)painter);
}

void q_openglwidget_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnInitPainter((QOpenGLWidget*)self, (intptr_t)callback);
}

QPainter* q_openglwidget_shared_painter(void* self) {
    return QOpenGLWidget_SharedPainter((QOpenGLWidget*)self);
}

QPainter* q_openglwidget_qbase_shared_painter(void* self) {
    return QOpenGLWidget_QBaseSharedPainter((QOpenGLWidget*)self);
}

void q_openglwidget_on_shared_painter(void* self, QPainter* (*callback)()) {
    QOpenGLWidget_OnSharedPainter((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_input_method_event(void* self, void* param1) {
    QOpenGLWidget_InputMethodEvent((QOpenGLWidget*)self, (QInputMethodEvent*)param1);
}

void q_openglwidget_qbase_input_method_event(void* self, void* param1) {
    QOpenGLWidget_QBaseInputMethodEvent((QOpenGLWidget*)self, (QInputMethodEvent*)param1);
}

void q_openglwidget_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnInputMethodEvent((QOpenGLWidget*)self, (intptr_t)callback);
}

QVariant* q_openglwidget_input_method_query(void* self, int64_t param1) {
    return QOpenGLWidget_InputMethodQuery((QOpenGLWidget*)self, param1);
}

QVariant* q_openglwidget_qbase_input_method_query(void* self, int64_t param1) {
    return QOpenGLWidget_QBaseInputMethodQuery((QOpenGLWidget*)self, param1);
}

void q_openglwidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    QOpenGLWidget_OnInputMethodQuery((QOpenGLWidget*)self, (intptr_t)callback);
}

bool q_openglwidget_focus_next_prev_child(void* self, bool next) {
    return QOpenGLWidget_FocusNextPrevChild((QOpenGLWidget*)self, next);
}

bool q_openglwidget_qbase_focus_next_prev_child(void* self, bool next) {
    return QOpenGLWidget_QBaseFocusNextPrevChild((QOpenGLWidget*)self, next);
}

void q_openglwidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QOpenGLWidget_OnFocusNextPrevChild((QOpenGLWidget*)self, (intptr_t)callback);
}

bool q_openglwidget_event_filter(void* self, void* watched, void* event) {
    return QOpenGLWidget_EventFilter((QOpenGLWidget*)self, (QObject*)watched, (QEvent*)event);
}

bool q_openglwidget_qbase_event_filter(void* self, void* watched, void* event) {
    return QOpenGLWidget_QBaseEventFilter((QOpenGLWidget*)self, (QObject*)watched, (QEvent*)event);
}

void q_openglwidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QOpenGLWidget_OnEventFilter((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_timer_event(void* self, void* event) {
    QOpenGLWidget_TimerEvent((QOpenGLWidget*)self, (QTimerEvent*)event);
}

void q_openglwidget_qbase_timer_event(void* self, void* event) {
    QOpenGLWidget_QBaseTimerEvent((QOpenGLWidget*)self, (QTimerEvent*)event);
}

void q_openglwidget_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnTimerEvent((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_child_event(void* self, void* event) {
    QOpenGLWidget_ChildEvent((QOpenGLWidget*)self, (QChildEvent*)event);
}

void q_openglwidget_qbase_child_event(void* self, void* event) {
    QOpenGLWidget_QBaseChildEvent((QOpenGLWidget*)self, (QChildEvent*)event);
}

void q_openglwidget_on_child_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnChildEvent((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_custom_event(void* self, void* event) {
    QOpenGLWidget_CustomEvent((QOpenGLWidget*)self, (QEvent*)event);
}

void q_openglwidget_qbase_custom_event(void* self, void* event) {
    QOpenGLWidget_QBaseCustomEvent((QOpenGLWidget*)self, (QEvent*)event);
}

void q_openglwidget_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnCustomEvent((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_connect_notify(void* self, void* signal) {
    QOpenGLWidget_ConnectNotify((QOpenGLWidget*)self, (QMetaMethod*)signal);
}

void q_openglwidget_qbase_connect_notify(void* self, void* signal) {
    QOpenGLWidget_QBaseConnectNotify((QOpenGLWidget*)self, (QMetaMethod*)signal);
}

void q_openglwidget_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnConnectNotify((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_disconnect_notify(void* self, void* signal) {
    QOpenGLWidget_DisconnectNotify((QOpenGLWidget*)self, (QMetaMethod*)signal);
}

void q_openglwidget_qbase_disconnect_notify(void* self, void* signal) {
    QOpenGLWidget_QBaseDisconnectNotify((QOpenGLWidget*)self, (QMetaMethod*)signal);
}

void q_openglwidget_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QOpenGLWidget_OnDisconnectNotify((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_update_micro_focus(void* self) {
    QOpenGLWidget_UpdateMicroFocus((QOpenGLWidget*)self);
}

void q_openglwidget_qbase_update_micro_focus(void* self) {
    QOpenGLWidget_QBaseUpdateMicroFocus((QOpenGLWidget*)self);
}

void q_openglwidget_on_update_micro_focus(void* self, void (*callback)()) {
    QOpenGLWidget_OnUpdateMicroFocus((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_create(void* self) {
    QOpenGLWidget_Create((QOpenGLWidget*)self);
}

void q_openglwidget_qbase_create(void* self) {
    QOpenGLWidget_QBaseCreate((QOpenGLWidget*)self);
}

void q_openglwidget_on_create(void* self, void (*callback)()) {
    QOpenGLWidget_OnCreate((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_destroy(void* self) {
    QOpenGLWidget_Destroy((QOpenGLWidget*)self);
}

void q_openglwidget_qbase_destroy(void* self) {
    QOpenGLWidget_QBaseDestroy((QOpenGLWidget*)self);
}

void q_openglwidget_on_destroy(void* self, void (*callback)()) {
    QOpenGLWidget_OnDestroy((QOpenGLWidget*)self, (intptr_t)callback);
}

bool q_openglwidget_focus_next_child(void* self) {
    return QOpenGLWidget_FocusNextChild((QOpenGLWidget*)self);
}

bool q_openglwidget_qbase_focus_next_child(void* self) {
    return QOpenGLWidget_QBaseFocusNextChild((QOpenGLWidget*)self);
}

void q_openglwidget_on_focus_next_child(void* self, bool (*callback)()) {
    QOpenGLWidget_OnFocusNextChild((QOpenGLWidget*)self, (intptr_t)callback);
}

bool q_openglwidget_focus_previous_child(void* self) {
    return QOpenGLWidget_FocusPreviousChild((QOpenGLWidget*)self);
}

bool q_openglwidget_qbase_focus_previous_child(void* self) {
    return QOpenGLWidget_QBaseFocusPreviousChild((QOpenGLWidget*)self);
}

void q_openglwidget_on_focus_previous_child(void* self, bool (*callback)()) {
    QOpenGLWidget_OnFocusPreviousChild((QOpenGLWidget*)self, (intptr_t)callback);
}

QObject* q_openglwidget_sender(void* self) {
    return QOpenGLWidget_Sender((QOpenGLWidget*)self);
}

QObject* q_openglwidget_qbase_sender(void* self) {
    return QOpenGLWidget_QBaseSender((QOpenGLWidget*)self);
}

void q_openglwidget_on_sender(void* self, QObject* (*callback)()) {
    QOpenGLWidget_OnSender((QOpenGLWidget*)self, (intptr_t)callback);
}

int32_t q_openglwidget_sender_signal_index(void* self) {
    return QOpenGLWidget_SenderSignalIndex((QOpenGLWidget*)self);
}

int32_t q_openglwidget_qbase_sender_signal_index(void* self) {
    return QOpenGLWidget_QBaseSenderSignalIndex((QOpenGLWidget*)self);
}

void q_openglwidget_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QOpenGLWidget_OnSenderSignalIndex((QOpenGLWidget*)self, (intptr_t)callback);
}

int32_t q_openglwidget_receivers(void* self, const char* signal) {
    return QOpenGLWidget_Receivers((QOpenGLWidget*)self, signal);
}

int32_t q_openglwidget_qbase_receivers(void* self, const char* signal) {
    return QOpenGLWidget_QBaseReceivers((QOpenGLWidget*)self, signal);
}

void q_openglwidget_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QOpenGLWidget_OnReceivers((QOpenGLWidget*)self, (intptr_t)callback);
}

bool q_openglwidget_is_signal_connected(void* self, void* signal) {
    return QOpenGLWidget_IsSignalConnected((QOpenGLWidget*)self, (QMetaMethod*)signal);
}

bool q_openglwidget_qbase_is_signal_connected(void* self, void* signal) {
    return QOpenGLWidget_QBaseIsSignalConnected((QOpenGLWidget*)self, (QMetaMethod*)signal);
}

void q_openglwidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QOpenGLWidget_OnIsSignalConnected((QOpenGLWidget*)self, (intptr_t)callback);
}

double q_openglwidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QOpenGLWidget_GetDecodedMetricF((QOpenGLWidget*)self, metricA, metricB);
}

double q_openglwidget_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QOpenGLWidget_QBaseGetDecodedMetricF((QOpenGLWidget*)self, metricA, metricB);
}

void q_openglwidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QOpenGLWidget_OnGetDecodedMetricF((QOpenGLWidget*)self, (intptr_t)callback);
}

void q_openglwidget_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_openglwidget_delete(void* self) {
    QOpenGLWidget_Delete((QOpenGLWidget*)(self));
}
