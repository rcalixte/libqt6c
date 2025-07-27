#include "libqevent.hpp"
#include "libqcoreevent.hpp"
#include "libqframe.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqsize.hpp"
#include "libqstyleoption.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqsplitter.hpp"
#include "libqsplitter.h"

QSplitter* q_splitter_new(void* parent) {
    return QSplitter_new((QWidget*)parent);
}

QSplitter* q_splitter_new2() {
    return QSplitter_new2();
}

QSplitter* q_splitter_new3(int64_t param1) {
    return QSplitter_new3(param1);
}

QSplitter* q_splitter_new4(int64_t param1, void* parent) {
    return QSplitter_new4(param1, (QWidget*)parent);
}

const QMetaObject* q_splitter_meta_object(void* self) {
    return QSplitter_MetaObject((QSplitter*)self);
}

void* q_splitter_metacast(void* self, const char* param1) {
    return QSplitter_Metacast((QSplitter*)self, param1);
}

int32_t q_splitter_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSplitter_Metacall((QSplitter*)self, param1, param2, param3);
}

void q_splitter_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QSplitter_OnMetacall((QSplitter*)self, (intptr_t)slot);
}

int32_t q_splitter_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSplitter_QBaseMetacall((QSplitter*)self, param1, param2, param3);
}

const char* q_splitter_tr(const char* s) {
    libqt_string _str = QSplitter_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_splitter_add_widget(void* self, void* widget) {
    QSplitter_AddWidget((QSplitter*)self, (QWidget*)widget);
}

void q_splitter_insert_widget(void* self, int index, void* widget) {
    QSplitter_InsertWidget((QSplitter*)self, index, (QWidget*)widget);
}

QWidget* q_splitter_replace_widget(void* self, int index, void* widget) {
    return QSplitter_ReplaceWidget((QSplitter*)self, index, (QWidget*)widget);
}

void q_splitter_set_orientation(void* self, int64_t orientation) {
    QSplitter_SetOrientation((QSplitter*)self, orientation);
}

int64_t q_splitter_orientation(void* self) {
    return QSplitter_Orientation((QSplitter*)self);
}

void q_splitter_set_children_collapsible(void* self, bool childrenCollapsible) {
    QSplitter_SetChildrenCollapsible((QSplitter*)self, childrenCollapsible);
}

bool q_splitter_children_collapsible(void* self) {
    return QSplitter_ChildrenCollapsible((QSplitter*)self);
}

void q_splitter_set_collapsible(void* self, int index, bool param2) {
    QSplitter_SetCollapsible((QSplitter*)self, index, param2);
}

bool q_splitter_is_collapsible(void* self, int index) {
    return QSplitter_IsCollapsible((QSplitter*)self, index);
}

void q_splitter_set_opaque_resize(void* self) {
    QSplitter_SetOpaqueResize((QSplitter*)self);
}

bool q_splitter_opaque_resize(void* self) {
    return QSplitter_OpaqueResize((QSplitter*)self);
}

void q_splitter_refresh(void* self) {
    QSplitter_Refresh((QSplitter*)self);
}

QSize* q_splitter_size_hint(void* self) {
    return QSplitter_SizeHint((QSplitter*)self);
}

void q_splitter_on_size_hint(void* self, QSize* (*slot)()) {
    QSplitter_OnSizeHint((QSplitter*)self, (intptr_t)slot);
}

QSize* q_splitter_qbase_size_hint(void* self) {
    return QSplitter_QBaseSizeHint((QSplitter*)self);
}

QSize* q_splitter_minimum_size_hint(void* self) {
    return QSplitter_MinimumSizeHint((QSplitter*)self);
}

void q_splitter_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QSplitter_OnMinimumSizeHint((QSplitter*)self, (intptr_t)slot);
}

QSize* q_splitter_qbase_minimum_size_hint(void* self) {
    return QSplitter_QBaseMinimumSizeHint((QSplitter*)self);
}

libqt_list /* of int */ q_splitter_sizes(void* self) {
    libqt_list _arr = QSplitter_Sizes((QSplitter*)self);
    return _arr;
}

void q_splitter_set_sizes(void* self, libqt_list list) {
    QSplitter_SetSizes((QSplitter*)self, list);
}

char* q_splitter_save_state(void* self) {
    libqt_string _str = QSplitter_SaveState((QSplitter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_splitter_restore_state(void* self, const char* state) {
    return QSplitter_RestoreState((QSplitter*)self, qstring(state));
}

int32_t q_splitter_handle_width(void* self) {
    return QSplitter_HandleWidth((QSplitter*)self);
}

void q_splitter_set_handle_width(void* self, int handleWidth) {
    QSplitter_SetHandleWidth((QSplitter*)self, handleWidth);
}

int32_t q_splitter_index_of(void* self, void* w) {
    return QSplitter_IndexOf((QSplitter*)self, (QWidget*)w);
}

QWidget* q_splitter_widget(void* self, int index) {
    return QSplitter_Widget((QSplitter*)self, index);
}

int32_t q_splitter_count(void* self) {
    return QSplitter_Count((QSplitter*)self);
}

void q_splitter_get_range(void* self, int index, int* param2, int* param3) {
    QSplitter_GetRange((QSplitter*)self, index, param2, param3);
}

QSplitterHandle* q_splitter_handle(void* self, int index) {
    return QSplitter_Handle((QSplitter*)self, index);
}

void q_splitter_set_stretch_factor(void* self, int index, int stretch) {
    QSplitter_SetStretchFactor((QSplitter*)self, index, stretch);
}

void q_splitter_splitter_moved(void* self, int pos, int index) {
    QSplitter_SplitterMoved((QSplitter*)self, pos, index);
}

void q_splitter_on_splitter_moved(void* self, void (*slot)(void*, int, int)) {
    QSplitter_Connect_SplitterMoved((QSplitter*)self, (intptr_t)slot);
}

QSplitterHandle* q_splitter_create_handle(void* self) {
    return QSplitter_CreateHandle((QSplitter*)self);
}

void q_splitter_on_create_handle(void* self, QSplitterHandle* (*slot)()) {
    QSplitter_OnCreateHandle((QSplitter*)self, (intptr_t)slot);
}

QSplitterHandle* q_splitter_qbase_create_handle(void* self) {
    return QSplitter_QBaseCreateHandle((QSplitter*)self);
}

void q_splitter_child_event(void* self, void* param1) {
    QSplitter_ChildEvent((QSplitter*)self, (QChildEvent*)param1);
}

void q_splitter_on_child_event(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnChildEvent((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_qbase_child_event(void* self, void* param1) {
    QSplitter_QBaseChildEvent((QSplitter*)self, (QChildEvent*)param1);
}

bool q_splitter_event(void* self, void* param1) {
    return QSplitter_Event((QSplitter*)self, (QEvent*)param1);
}

void q_splitter_on_event(void* self, bool (*slot)(void*, void*)) {
    QSplitter_OnEvent((QSplitter*)self, (intptr_t)slot);
}

bool q_splitter_qbase_event(void* self, void* param1) {
    return QSplitter_QBaseEvent((QSplitter*)self, (QEvent*)param1);
}

void q_splitter_resize_event(void* self, void* param1) {
    QSplitter_ResizeEvent((QSplitter*)self, (QResizeEvent*)param1);
}

void q_splitter_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnResizeEvent((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_qbase_resize_event(void* self, void* param1) {
    QSplitter_QBaseResizeEvent((QSplitter*)self, (QResizeEvent*)param1);
}

void q_splitter_change_event(void* self, void* param1) {
    QSplitter_ChangeEvent((QSplitter*)self, (QEvent*)param1);
}

void q_splitter_on_change_event(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnChangeEvent((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_qbase_change_event(void* self, void* param1) {
    QSplitter_QBaseChangeEvent((QSplitter*)self, (QEvent*)param1);
}

void q_splitter_move_splitter(void* self, int pos, int index) {
    QSplitter_MoveSplitter((QSplitter*)self, pos, index);
}

void q_splitter_on_move_splitter(void* self, void (*slot)(void*, int, int)) {
    QSplitter_OnMoveSplitter((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_qbase_move_splitter(void* self, int pos, int index) {
    QSplitter_QBaseMoveSplitter((QSplitter*)self, pos, index);
}

void q_splitter_set_rubber_band(void* self, int position) {
    QSplitter_SetRubberBand((QSplitter*)self, position);
}

void q_splitter_on_set_rubber_band(void* self, void (*slot)(void*, int)) {
    QSplitter_OnSetRubberBand((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_qbase_set_rubber_band(void* self, int position) {
    QSplitter_QBaseSetRubberBand((QSplitter*)self, position);
}

int32_t q_splitter_closest_legal_position(void* self, int param1, int param2) {
    return QSplitter_ClosestLegalPosition((QSplitter*)self, param1, param2);
}

void q_splitter_on_closest_legal_position(void* self, int32_t (*slot)(void*, int, int)) {
    QSplitter_OnClosestLegalPosition((QSplitter*)self, (intptr_t)slot);
}

int32_t q_splitter_qbase_closest_legal_position(void* self, int param1, int param2) {
    return QSplitter_QBaseClosestLegalPosition((QSplitter*)self, param1, param2);
}

const char* q_splitter_tr2(const char* s, const char* c) {
    libqt_string _str = QSplitter_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_splitter_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSplitter_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_splitter_set_opaque_resize1(void* self, bool opaque) {
    QSplitter_SetOpaqueResize1((QSplitter*)self, opaque);
}

int32_t q_splitter_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void q_splitter_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t q_splitter_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int64_t q_splitter_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void q_splitter_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int64_t q_splitter_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void q_splitter_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t q_splitter_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void q_splitter_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t q_splitter_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void q_splitter_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* q_splitter_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void q_splitter_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t q_splitter_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_splitter_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_splitter_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_splitter_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_splitter_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_splitter_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_splitter_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_splitter_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_splitter_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_splitter_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_splitter_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_splitter_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_splitter_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_splitter_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_splitter_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_splitter_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_splitter_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_splitter_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_splitter_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_splitter_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_splitter_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_splitter_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_splitter_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_splitter_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_splitter_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_splitter_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_splitter_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_splitter_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_splitter_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_splitter_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_splitter_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_splitter_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_splitter_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_splitter_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_splitter_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_splitter_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_splitter_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_splitter_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_splitter_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_splitter_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_splitter_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_splitter_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_splitter_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_splitter_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_splitter_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_splitter_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_splitter_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_splitter_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_splitter_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_splitter_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_splitter_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_splitter_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_splitter_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_splitter_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_splitter_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_splitter_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_splitter_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_splitter_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_splitter_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_splitter_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_splitter_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_splitter_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_splitter_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_splitter_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_splitter_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_splitter_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_splitter_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_splitter_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_splitter_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_splitter_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_splitter_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_splitter_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_splitter_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_splitter_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_splitter_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_splitter_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_splitter_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_splitter_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_splitter_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_splitter_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_splitter_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_splitter_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_splitter_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_splitter_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_splitter_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_splitter_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_splitter_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_splitter_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_splitter_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_splitter_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_splitter_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_splitter_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_splitter_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_splitter_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_splitter_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_splitter_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_splitter_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_splitter_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_splitter_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_splitter_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_splitter_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_splitter_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_splitter_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_splitter_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_splitter_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_splitter_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_splitter_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_splitter_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_splitter_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_splitter_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_splitter_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_splitter_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_splitter_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_splitter_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_splitter_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_splitter_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_splitter_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_splitter_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_splitter_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_splitter_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_splitter_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_splitter_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_splitter_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_splitter_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_splitter_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_splitter_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_splitter_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_splitter_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_splitter_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_splitter_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_splitter_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_splitter_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_splitter_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_splitter_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_splitter_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_splitter_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_splitter_set_focus2(void* self, int64_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int64_t q_splitter_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_splitter_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_splitter_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_splitter_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_splitter_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_splitter_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_splitter_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_splitter_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_splitter_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_splitter_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_splitter_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_splitter_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_splitter_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_splitter_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_splitter_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_splitter_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_splitter_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_splitter_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_splitter_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_splitter_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_splitter_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_splitter_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_splitter_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_splitter_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_splitter_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_splitter_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_splitter_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_splitter_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_splitter_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_splitter_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_splitter_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_splitter_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_splitter_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_splitter_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_splitter_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_splitter_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_splitter_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_splitter_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_splitter_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_splitter_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_splitter_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_splitter_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_splitter_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_splitter_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_splitter_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_splitter_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_splitter_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_splitter_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_splitter_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_splitter_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_splitter_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_splitter_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_splitter_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_splitter_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_splitter_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_splitter_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_splitter_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_splitter_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_splitter_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_splitter_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_splitter_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_splitter_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_splitter_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_splitter_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_splitter_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_splitter_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_splitter_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_splitter_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_splitter_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_splitter_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_splitter_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_splitter_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_splitter_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_splitter_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_splitter_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_splitter_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_splitter_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_splitter_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_splitter_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_splitter_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_splitter_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_splitter_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_splitter_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_splitter_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_splitter_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_splitter_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_splitter_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_splitter_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_splitter_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_splitter_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_splitter_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_splitter_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_splitter_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_splitter_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_splitter_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_splitter_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_splitter_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_splitter_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_splitter_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_splitter_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_splitter_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_splitter_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_splitter_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_splitter_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_splitter_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_splitter_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_splitter_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_splitter_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_splitter_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_splitter_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_splitter_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_splitter_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

void q_splitter_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_splitter_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

void q_splitter_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_splitter_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

void q_splitter_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_splitter_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

int64_t q_splitter_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_splitter_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_splitter_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_splitter_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_splitter_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_splitter_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_splitter_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_splitter_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_splitter_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_splitter_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_splitter_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_splitter_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_splitter_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_splitter_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_splitter_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_splitter_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_splitter_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_splitter_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_splitter_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_splitter_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_splitter_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_splitter_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_splitter_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_splitter_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_splitter_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_splitter_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_splitter_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_splitter_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_splitter_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_splitter_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_splitter_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_splitter_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_splitter_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_splitter_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_splitter_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_splitter_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_splitter_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_splitter_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_splitter_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_splitter_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_splitter_dynamic_property_names(void* self) {
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

QBindingStorage* q_splitter_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_splitter_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_splitter_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_splitter_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_splitter_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_splitter_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_splitter_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_splitter_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_splitter_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_splitter_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_splitter_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_splitter_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_splitter_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_splitter_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_splitter_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_splitter_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_splitter_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_splitter_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_splitter_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_splitter_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_splitter_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_splitter_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_splitter_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_splitter_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_splitter_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_splitter_encode_metric_f(int64_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void q_splitter_paint_event(void* self, void* param1) {
    QSplitter_PaintEvent((QSplitter*)self, (QPaintEvent*)param1);
}

void q_splitter_qbase_paint_event(void* self, void* param1) {
    QSplitter_QBasePaintEvent((QSplitter*)self, (QPaintEvent*)param1);
}

void q_splitter_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnPaintEvent((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_init_style_option(void* self, void* option) {
    QSplitter_InitStyleOption((QSplitter*)self, (QStyleOptionFrame*)option);
}

void q_splitter_qbase_init_style_option(void* self, void* option) {
    QSplitter_QBaseInitStyleOption((QSplitter*)self, (QStyleOptionFrame*)option);
}

void q_splitter_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnInitStyleOption((QSplitter*)self, (intptr_t)slot);
}

int32_t q_splitter_dev_type(void* self) {
    return QSplitter_DevType((QSplitter*)self);
}

int32_t q_splitter_qbase_dev_type(void* self) {
    return QSplitter_QBaseDevType((QSplitter*)self);
}

void q_splitter_on_dev_type(void* self, int32_t (*slot)()) {
    QSplitter_OnDevType((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_set_visible(void* self, bool visible) {
    QSplitter_SetVisible((QSplitter*)self, visible);
}

void q_splitter_qbase_set_visible(void* self, bool visible) {
    QSplitter_QBaseSetVisible((QSplitter*)self, visible);
}

void q_splitter_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QSplitter_OnSetVisible((QSplitter*)self, (intptr_t)slot);
}

int32_t q_splitter_height_for_width(void* self, int param1) {
    return QSplitter_HeightForWidth((QSplitter*)self, param1);
}

int32_t q_splitter_qbase_height_for_width(void* self, int param1) {
    return QSplitter_QBaseHeightForWidth((QSplitter*)self, param1);
}

void q_splitter_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QSplitter_OnHeightForWidth((QSplitter*)self, (intptr_t)slot);
}

bool q_splitter_has_height_for_width(void* self) {
    return QSplitter_HasHeightForWidth((QSplitter*)self);
}

bool q_splitter_qbase_has_height_for_width(void* self) {
    return QSplitter_QBaseHasHeightForWidth((QSplitter*)self);
}

void q_splitter_on_has_height_for_width(void* self, bool (*slot)()) {
    QSplitter_OnHasHeightForWidth((QSplitter*)self, (intptr_t)slot);
}

QPaintEngine* q_splitter_paint_engine(void* self) {
    return QSplitter_PaintEngine((QSplitter*)self);
}

QPaintEngine* q_splitter_qbase_paint_engine(void* self) {
    return QSplitter_QBasePaintEngine((QSplitter*)self);
}

void q_splitter_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QSplitter_OnPaintEngine((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_mouse_press_event(void* self, void* event) {
    QSplitter_MousePressEvent((QSplitter*)self, (QMouseEvent*)event);
}

void q_splitter_qbase_mouse_press_event(void* self, void* event) {
    QSplitter_QBaseMousePressEvent((QSplitter*)self, (QMouseEvent*)event);
}

void q_splitter_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnMousePressEvent((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_mouse_release_event(void* self, void* event) {
    QSplitter_MouseReleaseEvent((QSplitter*)self, (QMouseEvent*)event);
}

void q_splitter_qbase_mouse_release_event(void* self, void* event) {
    QSplitter_QBaseMouseReleaseEvent((QSplitter*)self, (QMouseEvent*)event);
}

void q_splitter_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnMouseReleaseEvent((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_mouse_double_click_event(void* self, void* event) {
    QSplitter_MouseDoubleClickEvent((QSplitter*)self, (QMouseEvent*)event);
}

void q_splitter_qbase_mouse_double_click_event(void* self, void* event) {
    QSplitter_QBaseMouseDoubleClickEvent((QSplitter*)self, (QMouseEvent*)event);
}

void q_splitter_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnMouseDoubleClickEvent((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_mouse_move_event(void* self, void* event) {
    QSplitter_MouseMoveEvent((QSplitter*)self, (QMouseEvent*)event);
}

void q_splitter_qbase_mouse_move_event(void* self, void* event) {
    QSplitter_QBaseMouseMoveEvent((QSplitter*)self, (QMouseEvent*)event);
}

void q_splitter_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnMouseMoveEvent((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_wheel_event(void* self, void* event) {
    QSplitter_WheelEvent((QSplitter*)self, (QWheelEvent*)event);
}

void q_splitter_qbase_wheel_event(void* self, void* event) {
    QSplitter_QBaseWheelEvent((QSplitter*)self, (QWheelEvent*)event);
}

void q_splitter_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnWheelEvent((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_key_press_event(void* self, void* event) {
    QSplitter_KeyPressEvent((QSplitter*)self, (QKeyEvent*)event);
}

void q_splitter_qbase_key_press_event(void* self, void* event) {
    QSplitter_QBaseKeyPressEvent((QSplitter*)self, (QKeyEvent*)event);
}

void q_splitter_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnKeyPressEvent((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_key_release_event(void* self, void* event) {
    QSplitter_KeyReleaseEvent((QSplitter*)self, (QKeyEvent*)event);
}

void q_splitter_qbase_key_release_event(void* self, void* event) {
    QSplitter_QBaseKeyReleaseEvent((QSplitter*)self, (QKeyEvent*)event);
}

void q_splitter_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnKeyReleaseEvent((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_focus_in_event(void* self, void* event) {
    QSplitter_FocusInEvent((QSplitter*)self, (QFocusEvent*)event);
}

void q_splitter_qbase_focus_in_event(void* self, void* event) {
    QSplitter_QBaseFocusInEvent((QSplitter*)self, (QFocusEvent*)event);
}

void q_splitter_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnFocusInEvent((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_focus_out_event(void* self, void* event) {
    QSplitter_FocusOutEvent((QSplitter*)self, (QFocusEvent*)event);
}

void q_splitter_qbase_focus_out_event(void* self, void* event) {
    QSplitter_QBaseFocusOutEvent((QSplitter*)self, (QFocusEvent*)event);
}

void q_splitter_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnFocusOutEvent((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_enter_event(void* self, void* event) {
    QSplitter_EnterEvent((QSplitter*)self, (QEnterEvent*)event);
}

void q_splitter_qbase_enter_event(void* self, void* event) {
    QSplitter_QBaseEnterEvent((QSplitter*)self, (QEnterEvent*)event);
}

void q_splitter_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnEnterEvent((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_leave_event(void* self, void* event) {
    QSplitter_LeaveEvent((QSplitter*)self, (QEvent*)event);
}

void q_splitter_qbase_leave_event(void* self, void* event) {
    QSplitter_QBaseLeaveEvent((QSplitter*)self, (QEvent*)event);
}

void q_splitter_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnLeaveEvent((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_move_event(void* self, void* event) {
    QSplitter_MoveEvent((QSplitter*)self, (QMoveEvent*)event);
}

void q_splitter_qbase_move_event(void* self, void* event) {
    QSplitter_QBaseMoveEvent((QSplitter*)self, (QMoveEvent*)event);
}

void q_splitter_on_move_event(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnMoveEvent((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_close_event(void* self, void* event) {
    QSplitter_CloseEvent((QSplitter*)self, (QCloseEvent*)event);
}

void q_splitter_qbase_close_event(void* self, void* event) {
    QSplitter_QBaseCloseEvent((QSplitter*)self, (QCloseEvent*)event);
}

void q_splitter_on_close_event(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnCloseEvent((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_context_menu_event(void* self, void* event) {
    QSplitter_ContextMenuEvent((QSplitter*)self, (QContextMenuEvent*)event);
}

void q_splitter_qbase_context_menu_event(void* self, void* event) {
    QSplitter_QBaseContextMenuEvent((QSplitter*)self, (QContextMenuEvent*)event);
}

void q_splitter_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnContextMenuEvent((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_tablet_event(void* self, void* event) {
    QSplitter_TabletEvent((QSplitter*)self, (QTabletEvent*)event);
}

void q_splitter_qbase_tablet_event(void* self, void* event) {
    QSplitter_QBaseTabletEvent((QSplitter*)self, (QTabletEvent*)event);
}

void q_splitter_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnTabletEvent((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_action_event(void* self, void* event) {
    QSplitter_ActionEvent((QSplitter*)self, (QActionEvent*)event);
}

void q_splitter_qbase_action_event(void* self, void* event) {
    QSplitter_QBaseActionEvent((QSplitter*)self, (QActionEvent*)event);
}

void q_splitter_on_action_event(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnActionEvent((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_drag_enter_event(void* self, void* event) {
    QSplitter_DragEnterEvent((QSplitter*)self, (QDragEnterEvent*)event);
}

void q_splitter_qbase_drag_enter_event(void* self, void* event) {
    QSplitter_QBaseDragEnterEvent((QSplitter*)self, (QDragEnterEvent*)event);
}

void q_splitter_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnDragEnterEvent((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_drag_move_event(void* self, void* event) {
    QSplitter_DragMoveEvent((QSplitter*)self, (QDragMoveEvent*)event);
}

void q_splitter_qbase_drag_move_event(void* self, void* event) {
    QSplitter_QBaseDragMoveEvent((QSplitter*)self, (QDragMoveEvent*)event);
}

void q_splitter_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnDragMoveEvent((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_drag_leave_event(void* self, void* event) {
    QSplitter_DragLeaveEvent((QSplitter*)self, (QDragLeaveEvent*)event);
}

void q_splitter_qbase_drag_leave_event(void* self, void* event) {
    QSplitter_QBaseDragLeaveEvent((QSplitter*)self, (QDragLeaveEvent*)event);
}

void q_splitter_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnDragLeaveEvent((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_drop_event(void* self, void* event) {
    QSplitter_DropEvent((QSplitter*)self, (QDropEvent*)event);
}

void q_splitter_qbase_drop_event(void* self, void* event) {
    QSplitter_QBaseDropEvent((QSplitter*)self, (QDropEvent*)event);
}

void q_splitter_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnDropEvent((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_show_event(void* self, void* event) {
    QSplitter_ShowEvent((QSplitter*)self, (QShowEvent*)event);
}

void q_splitter_qbase_show_event(void* self, void* event) {
    QSplitter_QBaseShowEvent((QSplitter*)self, (QShowEvent*)event);
}

void q_splitter_on_show_event(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnShowEvent((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_hide_event(void* self, void* event) {
    QSplitter_HideEvent((QSplitter*)self, (QHideEvent*)event);
}

void q_splitter_qbase_hide_event(void* self, void* event) {
    QSplitter_QBaseHideEvent((QSplitter*)self, (QHideEvent*)event);
}

void q_splitter_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnHideEvent((QSplitter*)self, (intptr_t)slot);
}

bool q_splitter_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QSplitter_NativeEvent((QSplitter*)self, qstring(eventType), message, result);
}

bool q_splitter_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QSplitter_QBaseNativeEvent((QSplitter*)self, qstring(eventType), message, result);
}

void q_splitter_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QSplitter_OnNativeEvent((QSplitter*)self, (intptr_t)slot);
}

int32_t q_splitter_metric(void* self, int64_t param1) {
    return QSplitter_Metric((QSplitter*)self, param1);
}

int32_t q_splitter_qbase_metric(void* self, int64_t param1) {
    return QSplitter_QBaseMetric((QSplitter*)self, param1);
}

void q_splitter_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QSplitter_OnMetric((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_init_painter(void* self, void* painter) {
    QSplitter_InitPainter((QSplitter*)self, (QPainter*)painter);
}

void q_splitter_qbase_init_painter(void* self, void* painter) {
    QSplitter_QBaseInitPainter((QSplitter*)self, (QPainter*)painter);
}

void q_splitter_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnInitPainter((QSplitter*)self, (intptr_t)slot);
}

QPaintDevice* q_splitter_redirected(void* self, void* offset) {
    return QSplitter_Redirected((QSplitter*)self, (QPoint*)offset);
}

QPaintDevice* q_splitter_qbase_redirected(void* self, void* offset) {
    return QSplitter_QBaseRedirected((QSplitter*)self, (QPoint*)offset);
}

void q_splitter_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QSplitter_OnRedirected((QSplitter*)self, (intptr_t)slot);
}

QPainter* q_splitter_shared_painter(void* self) {
    return QSplitter_SharedPainter((QSplitter*)self);
}

QPainter* q_splitter_qbase_shared_painter(void* self) {
    return QSplitter_QBaseSharedPainter((QSplitter*)self);
}

void q_splitter_on_shared_painter(void* self, QPainter* (*slot)()) {
    QSplitter_OnSharedPainter((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_input_method_event(void* self, void* param1) {
    QSplitter_InputMethodEvent((QSplitter*)self, (QInputMethodEvent*)param1);
}

void q_splitter_qbase_input_method_event(void* self, void* param1) {
    QSplitter_QBaseInputMethodEvent((QSplitter*)self, (QInputMethodEvent*)param1);
}

void q_splitter_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnInputMethodEvent((QSplitter*)self, (intptr_t)slot);
}

QVariant* q_splitter_input_method_query(void* self, int64_t param1) {
    return QSplitter_InputMethodQuery((QSplitter*)self, param1);
}

QVariant* q_splitter_qbase_input_method_query(void* self, int64_t param1) {
    return QSplitter_QBaseInputMethodQuery((QSplitter*)self, param1);
}

void q_splitter_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QSplitter_OnInputMethodQuery((QSplitter*)self, (intptr_t)slot);
}

bool q_splitter_focus_next_prev_child(void* self, bool next) {
    return QSplitter_FocusNextPrevChild((QSplitter*)self, next);
}

bool q_splitter_qbase_focus_next_prev_child(void* self, bool next) {
    return QSplitter_QBaseFocusNextPrevChild((QSplitter*)self, next);
}

void q_splitter_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QSplitter_OnFocusNextPrevChild((QSplitter*)self, (intptr_t)slot);
}

bool q_splitter_event_filter(void* self, void* watched, void* event) {
    return QSplitter_EventFilter((QSplitter*)self, (QObject*)watched, (QEvent*)event);
}

bool q_splitter_qbase_event_filter(void* self, void* watched, void* event) {
    return QSplitter_QBaseEventFilter((QSplitter*)self, (QObject*)watched, (QEvent*)event);
}

void q_splitter_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QSplitter_OnEventFilter((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_timer_event(void* self, void* event) {
    QSplitter_TimerEvent((QSplitter*)self, (QTimerEvent*)event);
}

void q_splitter_qbase_timer_event(void* self, void* event) {
    QSplitter_QBaseTimerEvent((QSplitter*)self, (QTimerEvent*)event);
}

void q_splitter_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnTimerEvent((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_custom_event(void* self, void* event) {
    QSplitter_CustomEvent((QSplitter*)self, (QEvent*)event);
}

void q_splitter_qbase_custom_event(void* self, void* event) {
    QSplitter_QBaseCustomEvent((QSplitter*)self, (QEvent*)event);
}

void q_splitter_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnCustomEvent((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_connect_notify(void* self, void* signal) {
    QSplitter_ConnectNotify((QSplitter*)self, (QMetaMethod*)signal);
}

void q_splitter_qbase_connect_notify(void* self, void* signal) {
    QSplitter_QBaseConnectNotify((QSplitter*)self, (QMetaMethod*)signal);
}

void q_splitter_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnConnectNotify((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_disconnect_notify(void* self, void* signal) {
    QSplitter_DisconnectNotify((QSplitter*)self, (QMetaMethod*)signal);
}

void q_splitter_qbase_disconnect_notify(void* self, void* signal) {
    QSplitter_QBaseDisconnectNotify((QSplitter*)self, (QMetaMethod*)signal);
}

void q_splitter_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnDisconnectNotify((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_draw_frame(void* self, void* param1) {
    QSplitter_DrawFrame((QSplitter*)self, (QPainter*)param1);
}

void q_splitter_qbase_draw_frame(void* self, void* param1) {
    QSplitter_QBaseDrawFrame((QSplitter*)self, (QPainter*)param1);
}

void q_splitter_on_draw_frame(void* self, void (*slot)(void*, void*)) {
    QSplitter_OnDrawFrame((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_update_micro_focus(void* self) {
    QSplitter_UpdateMicroFocus((QSplitter*)self);
}

void q_splitter_qbase_update_micro_focus(void* self) {
    QSplitter_QBaseUpdateMicroFocus((QSplitter*)self);
}

void q_splitter_on_update_micro_focus(void* self, void (*slot)()) {
    QSplitter_OnUpdateMicroFocus((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_create(void* self) {
    QSplitter_Create((QSplitter*)self);
}

void q_splitter_qbase_create(void* self) {
    QSplitter_QBaseCreate((QSplitter*)self);
}

void q_splitter_on_create(void* self, void (*slot)()) {
    QSplitter_OnCreate((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_destroy(void* self) {
    QSplitter_Destroy((QSplitter*)self);
}

void q_splitter_qbase_destroy(void* self) {
    QSplitter_QBaseDestroy((QSplitter*)self);
}

void q_splitter_on_destroy(void* self, void (*slot)()) {
    QSplitter_OnDestroy((QSplitter*)self, (intptr_t)slot);
}

bool q_splitter_focus_next_child(void* self) {
    return QSplitter_FocusNextChild((QSplitter*)self);
}

bool q_splitter_qbase_focus_next_child(void* self) {
    return QSplitter_QBaseFocusNextChild((QSplitter*)self);
}

void q_splitter_on_focus_next_child(void* self, bool (*slot)()) {
    QSplitter_OnFocusNextChild((QSplitter*)self, (intptr_t)slot);
}

bool q_splitter_focus_previous_child(void* self) {
    return QSplitter_FocusPreviousChild((QSplitter*)self);
}

bool q_splitter_qbase_focus_previous_child(void* self) {
    return QSplitter_QBaseFocusPreviousChild((QSplitter*)self);
}

void q_splitter_on_focus_previous_child(void* self, bool (*slot)()) {
    QSplitter_OnFocusPreviousChild((QSplitter*)self, (intptr_t)slot);
}

QObject* q_splitter_sender(void* self) {
    return QSplitter_Sender((QSplitter*)self);
}

QObject* q_splitter_qbase_sender(void* self) {
    return QSplitter_QBaseSender((QSplitter*)self);
}

void q_splitter_on_sender(void* self, QObject* (*slot)()) {
    QSplitter_OnSender((QSplitter*)self, (intptr_t)slot);
}

int32_t q_splitter_sender_signal_index(void* self) {
    return QSplitter_SenderSignalIndex((QSplitter*)self);
}

int32_t q_splitter_qbase_sender_signal_index(void* self) {
    return QSplitter_QBaseSenderSignalIndex((QSplitter*)self);
}

void q_splitter_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QSplitter_OnSenderSignalIndex((QSplitter*)self, (intptr_t)slot);
}

int32_t q_splitter_receivers(void* self, const char* signal) {
    return QSplitter_Receivers((QSplitter*)self, signal);
}

int32_t q_splitter_qbase_receivers(void* self, const char* signal) {
    return QSplitter_QBaseReceivers((QSplitter*)self, signal);
}

void q_splitter_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QSplitter_OnReceivers((QSplitter*)self, (intptr_t)slot);
}

bool q_splitter_is_signal_connected(void* self, void* signal) {
    return QSplitter_IsSignalConnected((QSplitter*)self, (QMetaMethod*)signal);
}

bool q_splitter_qbase_is_signal_connected(void* self, void* signal) {
    return QSplitter_QBaseIsSignalConnected((QSplitter*)self, (QMetaMethod*)signal);
}

void q_splitter_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QSplitter_OnIsSignalConnected((QSplitter*)self, (intptr_t)slot);
}

double q_splitter_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QSplitter_GetDecodedMetricF((QSplitter*)self, metricA, metricB);
}

double q_splitter_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QSplitter_QBaseGetDecodedMetricF((QSplitter*)self, metricA, metricB);
}

void q_splitter_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t)) {
    QSplitter_OnGetDecodedMetricF((QSplitter*)self, (intptr_t)slot);
}

void q_splitter_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_splitter_delete(void* self) {
    QSplitter_Delete((QSplitter*)(self));
}

QSplitterHandle* q_splitterhandle_new(int64_t o, void* parent) {
    return QSplitterHandle_new(o, (QSplitter*)parent);
}

const QMetaObject* q_splitterhandle_meta_object(void* self) {
    return QSplitterHandle_MetaObject((QSplitterHandle*)self);
}

void* q_splitterhandle_metacast(void* self, const char* param1) {
    return QSplitterHandle_Metacast((QSplitterHandle*)self, param1);
}

int32_t q_splitterhandle_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSplitterHandle_Metacall((QSplitterHandle*)self, param1, param2, param3);
}

void q_splitterhandle_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QSplitterHandle_OnMetacall((QSplitterHandle*)self, (intptr_t)slot);
}

int32_t q_splitterhandle_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSplitterHandle_QBaseMetacall((QSplitterHandle*)self, param1, param2, param3);
}

const char* q_splitterhandle_tr(const char* s) {
    libqt_string _str = QSplitterHandle_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_splitterhandle_set_orientation(void* self, int64_t o) {
    QSplitterHandle_SetOrientation((QSplitterHandle*)self, o);
}

int64_t q_splitterhandle_orientation(void* self) {
    return QSplitterHandle_Orientation((QSplitterHandle*)self);
}

bool q_splitterhandle_opaque_resize(void* self) {
    return QSplitterHandle_OpaqueResize((QSplitterHandle*)self);
}

QSplitter* q_splitterhandle_splitter(void* self) {
    return QSplitterHandle_Splitter((QSplitterHandle*)self);
}

QSize* q_splitterhandle_size_hint(void* self) {
    return QSplitterHandle_SizeHint((QSplitterHandle*)self);
}

void q_splitterhandle_on_size_hint(void* self, QSize* (*slot)()) {
    QSplitterHandle_OnSizeHint((QSplitterHandle*)self, (intptr_t)slot);
}

QSize* q_splitterhandle_qbase_size_hint(void* self) {
    return QSplitterHandle_QBaseSizeHint((QSplitterHandle*)self);
}

void q_splitterhandle_paint_event(void* self, void* param1) {
    QSplitterHandle_PaintEvent((QSplitterHandle*)self, (QPaintEvent*)param1);
}

void q_splitterhandle_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnPaintEvent((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_qbase_paint_event(void* self, void* param1) {
    QSplitterHandle_QBasePaintEvent((QSplitterHandle*)self, (QPaintEvent*)param1);
}

void q_splitterhandle_mouse_move_event(void* self, void* param1) {
    QSplitterHandle_MouseMoveEvent((QSplitterHandle*)self, (QMouseEvent*)param1);
}

void q_splitterhandle_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnMouseMoveEvent((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_qbase_mouse_move_event(void* self, void* param1) {
    QSplitterHandle_QBaseMouseMoveEvent((QSplitterHandle*)self, (QMouseEvent*)param1);
}

void q_splitterhandle_mouse_press_event(void* self, void* param1) {
    QSplitterHandle_MousePressEvent((QSplitterHandle*)self, (QMouseEvent*)param1);
}

void q_splitterhandle_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnMousePressEvent((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_qbase_mouse_press_event(void* self, void* param1) {
    QSplitterHandle_QBaseMousePressEvent((QSplitterHandle*)self, (QMouseEvent*)param1);
}

void q_splitterhandle_mouse_release_event(void* self, void* param1) {
    QSplitterHandle_MouseReleaseEvent((QSplitterHandle*)self, (QMouseEvent*)param1);
}

void q_splitterhandle_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnMouseReleaseEvent((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_qbase_mouse_release_event(void* self, void* param1) {
    QSplitterHandle_QBaseMouseReleaseEvent((QSplitterHandle*)self, (QMouseEvent*)param1);
}

void q_splitterhandle_resize_event(void* self, void* param1) {
    QSplitterHandle_ResizeEvent((QSplitterHandle*)self, (QResizeEvent*)param1);
}

void q_splitterhandle_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnResizeEvent((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_qbase_resize_event(void* self, void* param1) {
    QSplitterHandle_QBaseResizeEvent((QSplitterHandle*)self, (QResizeEvent*)param1);
}

bool q_splitterhandle_event(void* self, void* param1) {
    return QSplitterHandle_Event((QSplitterHandle*)self, (QEvent*)param1);
}

void q_splitterhandle_on_event(void* self, bool (*slot)(void*, void*)) {
    QSplitterHandle_OnEvent((QSplitterHandle*)self, (intptr_t)slot);
}

bool q_splitterhandle_qbase_event(void* self, void* param1) {
    return QSplitterHandle_QBaseEvent((QSplitterHandle*)self, (QEvent*)param1);
}

void q_splitterhandle_move_splitter(void* self, int p) {
    QSplitterHandle_MoveSplitter((QSplitterHandle*)self, p);
}

void q_splitterhandle_on_move_splitter(void* self, void (*slot)(void*, int)) {
    QSplitterHandle_OnMoveSplitter((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_qbase_move_splitter(void* self, int p) {
    QSplitterHandle_QBaseMoveSplitter((QSplitterHandle*)self, p);
}

int32_t q_splitterhandle_closest_legal_position(void* self, int p) {
    return QSplitterHandle_ClosestLegalPosition((QSplitterHandle*)self, p);
}

void q_splitterhandle_on_closest_legal_position(void* self, int32_t (*slot)(void*, int)) {
    QSplitterHandle_OnClosestLegalPosition((QSplitterHandle*)self, (intptr_t)slot);
}

int32_t q_splitterhandle_qbase_closest_legal_position(void* self, int p) {
    return QSplitterHandle_QBaseClosestLegalPosition((QSplitterHandle*)self, p);
}

const char* q_splitterhandle_tr2(const char* s, const char* c) {
    libqt_string _str = QSplitterHandle_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_splitterhandle_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSplitterHandle_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t q_splitterhandle_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_splitterhandle_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_splitterhandle_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_splitterhandle_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_splitterhandle_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_splitterhandle_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_splitterhandle_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_splitterhandle_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_splitterhandle_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_splitterhandle_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_splitterhandle_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_splitterhandle_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_splitterhandle_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_splitterhandle_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_splitterhandle_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_splitterhandle_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_splitterhandle_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_splitterhandle_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_splitterhandle_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_splitterhandle_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_splitterhandle_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_splitterhandle_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_splitterhandle_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_splitterhandle_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_splitterhandle_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_splitterhandle_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_splitterhandle_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_splitterhandle_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_splitterhandle_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_splitterhandle_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_splitterhandle_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_splitterhandle_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_splitterhandle_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_splitterhandle_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_splitterhandle_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_splitterhandle_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_splitterhandle_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_splitterhandle_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_splitterhandle_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_splitterhandle_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_splitterhandle_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_splitterhandle_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_splitterhandle_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_splitterhandle_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_splitterhandle_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_splitterhandle_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_splitterhandle_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_splitterhandle_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_splitterhandle_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_splitterhandle_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_splitterhandle_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_splitterhandle_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_splitterhandle_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_splitterhandle_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_splitterhandle_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_splitterhandle_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_splitterhandle_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_splitterhandle_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_splitterhandle_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_splitterhandle_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_splitterhandle_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_splitterhandle_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_splitterhandle_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_splitterhandle_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_splitterhandle_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_splitterhandle_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_splitterhandle_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_splitterhandle_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_splitterhandle_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_splitterhandle_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_splitterhandle_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_splitterhandle_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_splitterhandle_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_splitterhandle_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_splitterhandle_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_splitterhandle_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_splitterhandle_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_splitterhandle_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_splitterhandle_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_splitterhandle_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_splitterhandle_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_splitterhandle_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_splitterhandle_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_splitterhandle_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_splitterhandle_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_splitterhandle_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_splitterhandle_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_splitterhandle_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_splitterhandle_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_splitterhandle_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_splitterhandle_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_splitterhandle_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_splitterhandle_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_splitterhandle_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_splitterhandle_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_splitterhandle_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_splitterhandle_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_splitterhandle_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_splitterhandle_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_splitterhandle_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_splitterhandle_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_splitterhandle_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_splitterhandle_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_splitterhandle_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_splitterhandle_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_splitterhandle_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_splitterhandle_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_splitterhandle_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_splitterhandle_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_splitterhandle_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_splitterhandle_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_splitterhandle_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_splitterhandle_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_splitterhandle_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_splitterhandle_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_splitterhandle_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_splitterhandle_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_splitterhandle_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_splitterhandle_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_splitterhandle_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_splitterhandle_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_splitterhandle_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_splitterhandle_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_splitterhandle_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_splitterhandle_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_splitterhandle_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_splitterhandle_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_splitterhandle_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_splitterhandle_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_splitterhandle_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_splitterhandle_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_splitterhandle_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_splitterhandle_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_splitterhandle_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_splitterhandle_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_splitterhandle_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_splitterhandle_set_focus2(void* self, int64_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int64_t q_splitterhandle_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_splitterhandle_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_splitterhandle_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_splitterhandle_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_splitterhandle_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_splitterhandle_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_splitterhandle_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_splitterhandle_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_splitterhandle_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_splitterhandle_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_splitterhandle_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_splitterhandle_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_splitterhandle_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_splitterhandle_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_splitterhandle_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_splitterhandle_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_splitterhandle_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_splitterhandle_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_splitterhandle_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_splitterhandle_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_splitterhandle_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_splitterhandle_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_splitterhandle_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_splitterhandle_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_splitterhandle_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_splitterhandle_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_splitterhandle_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_splitterhandle_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_splitterhandle_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_splitterhandle_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_splitterhandle_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_splitterhandle_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_splitterhandle_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_splitterhandle_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_splitterhandle_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_splitterhandle_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_splitterhandle_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_splitterhandle_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_splitterhandle_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_splitterhandle_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_splitterhandle_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_splitterhandle_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_splitterhandle_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_splitterhandle_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_splitterhandle_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_splitterhandle_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_splitterhandle_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_splitterhandle_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_splitterhandle_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_splitterhandle_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_splitterhandle_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_splitterhandle_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_splitterhandle_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_splitterhandle_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_splitterhandle_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_splitterhandle_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_splitterhandle_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_splitterhandle_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_splitterhandle_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_splitterhandle_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_splitterhandle_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_splitterhandle_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_splitterhandle_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_splitterhandle_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_splitterhandle_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_splitterhandle_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_splitterhandle_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_splitterhandle_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_splitterhandle_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_splitterhandle_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_splitterhandle_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_splitterhandle_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_splitterhandle_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_splitterhandle_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_splitterhandle_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_splitterhandle_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_splitterhandle_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_splitterhandle_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_splitterhandle_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_splitterhandle_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_splitterhandle_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_splitterhandle_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_splitterhandle_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_splitterhandle_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_splitterhandle_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_splitterhandle_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_splitterhandle_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_splitterhandle_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_splitterhandle_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_splitterhandle_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_splitterhandle_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_splitterhandle_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_splitterhandle_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_splitterhandle_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_splitterhandle_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_splitterhandle_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_splitterhandle_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_splitterhandle_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_splitterhandle_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_splitterhandle_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_splitterhandle_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_splitterhandle_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_splitterhandle_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_splitterhandle_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_splitterhandle_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_splitterhandle_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_splitterhandle_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_splitterhandle_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_splitterhandle_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_splitterhandle_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_splitterhandle_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_splitterhandle_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

void q_splitterhandle_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_splitterhandle_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

void q_splitterhandle_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_splitterhandle_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

void q_splitterhandle_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_splitterhandle_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

int64_t q_splitterhandle_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_splitterhandle_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_splitterhandle_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_splitterhandle_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_splitterhandle_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_splitterhandle_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_splitterhandle_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_splitterhandle_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_splitterhandle_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_splitterhandle_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_splitterhandle_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_splitterhandle_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_splitterhandle_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_splitterhandle_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_splitterhandle_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_splitterhandle_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_splitterhandle_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_splitterhandle_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_splitterhandle_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_splitterhandle_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_splitterhandle_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_splitterhandle_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_splitterhandle_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_splitterhandle_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_splitterhandle_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_splitterhandle_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_splitterhandle_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_splitterhandle_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_splitterhandle_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_splitterhandle_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_splitterhandle_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_splitterhandle_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_splitterhandle_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_splitterhandle_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_splitterhandle_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_splitterhandle_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_splitterhandle_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_splitterhandle_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_splitterhandle_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_splitterhandle_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_splitterhandle_dynamic_property_names(void* self) {
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

QBindingStorage* q_splitterhandle_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_splitterhandle_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_splitterhandle_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_splitterhandle_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_splitterhandle_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_splitterhandle_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_splitterhandle_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_splitterhandle_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_splitterhandle_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_splitterhandle_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_splitterhandle_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_splitterhandle_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_splitterhandle_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_splitterhandle_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_splitterhandle_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_splitterhandle_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_splitterhandle_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_splitterhandle_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_splitterhandle_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_splitterhandle_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_splitterhandle_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_splitterhandle_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_splitterhandle_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_splitterhandle_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_splitterhandle_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_splitterhandle_encode_metric_f(int64_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t q_splitterhandle_dev_type(void* self) {
    return QSplitterHandle_DevType((QSplitterHandle*)self);
}

int32_t q_splitterhandle_qbase_dev_type(void* self) {
    return QSplitterHandle_QBaseDevType((QSplitterHandle*)self);
}

void q_splitterhandle_on_dev_type(void* self, int32_t (*slot)()) {
    QSplitterHandle_OnDevType((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_set_visible(void* self, bool visible) {
    QSplitterHandle_SetVisible((QSplitterHandle*)self, visible);
}

void q_splitterhandle_qbase_set_visible(void* self, bool visible) {
    QSplitterHandle_QBaseSetVisible((QSplitterHandle*)self, visible);
}

void q_splitterhandle_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QSplitterHandle_OnSetVisible((QSplitterHandle*)self, (intptr_t)slot);
}

QSize* q_splitterhandle_minimum_size_hint(void* self) {
    return QSplitterHandle_MinimumSizeHint((QSplitterHandle*)self);
}

QSize* q_splitterhandle_qbase_minimum_size_hint(void* self) {
    return QSplitterHandle_QBaseMinimumSizeHint((QSplitterHandle*)self);
}

void q_splitterhandle_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QSplitterHandle_OnMinimumSizeHint((QSplitterHandle*)self, (intptr_t)slot);
}

int32_t q_splitterhandle_height_for_width(void* self, int param1) {
    return QSplitterHandle_HeightForWidth((QSplitterHandle*)self, param1);
}

int32_t q_splitterhandle_qbase_height_for_width(void* self, int param1) {
    return QSplitterHandle_QBaseHeightForWidth((QSplitterHandle*)self, param1);
}

void q_splitterhandle_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QSplitterHandle_OnHeightForWidth((QSplitterHandle*)self, (intptr_t)slot);
}

bool q_splitterhandle_has_height_for_width(void* self) {
    return QSplitterHandle_HasHeightForWidth((QSplitterHandle*)self);
}

bool q_splitterhandle_qbase_has_height_for_width(void* self) {
    return QSplitterHandle_QBaseHasHeightForWidth((QSplitterHandle*)self);
}

void q_splitterhandle_on_has_height_for_width(void* self, bool (*slot)()) {
    QSplitterHandle_OnHasHeightForWidth((QSplitterHandle*)self, (intptr_t)slot);
}

QPaintEngine* q_splitterhandle_paint_engine(void* self) {
    return QSplitterHandle_PaintEngine((QSplitterHandle*)self);
}

QPaintEngine* q_splitterhandle_qbase_paint_engine(void* self) {
    return QSplitterHandle_QBasePaintEngine((QSplitterHandle*)self);
}

void q_splitterhandle_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QSplitterHandle_OnPaintEngine((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_mouse_double_click_event(void* self, void* event) {
    QSplitterHandle_MouseDoubleClickEvent((QSplitterHandle*)self, (QMouseEvent*)event);
}

void q_splitterhandle_qbase_mouse_double_click_event(void* self, void* event) {
    QSplitterHandle_QBaseMouseDoubleClickEvent((QSplitterHandle*)self, (QMouseEvent*)event);
}

void q_splitterhandle_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnMouseDoubleClickEvent((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_wheel_event(void* self, void* event) {
    QSplitterHandle_WheelEvent((QSplitterHandle*)self, (QWheelEvent*)event);
}

void q_splitterhandle_qbase_wheel_event(void* self, void* event) {
    QSplitterHandle_QBaseWheelEvent((QSplitterHandle*)self, (QWheelEvent*)event);
}

void q_splitterhandle_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnWheelEvent((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_key_press_event(void* self, void* event) {
    QSplitterHandle_KeyPressEvent((QSplitterHandle*)self, (QKeyEvent*)event);
}

void q_splitterhandle_qbase_key_press_event(void* self, void* event) {
    QSplitterHandle_QBaseKeyPressEvent((QSplitterHandle*)self, (QKeyEvent*)event);
}

void q_splitterhandle_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnKeyPressEvent((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_key_release_event(void* self, void* event) {
    QSplitterHandle_KeyReleaseEvent((QSplitterHandle*)self, (QKeyEvent*)event);
}

void q_splitterhandle_qbase_key_release_event(void* self, void* event) {
    QSplitterHandle_QBaseKeyReleaseEvent((QSplitterHandle*)self, (QKeyEvent*)event);
}

void q_splitterhandle_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnKeyReleaseEvent((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_focus_in_event(void* self, void* event) {
    QSplitterHandle_FocusInEvent((QSplitterHandle*)self, (QFocusEvent*)event);
}

void q_splitterhandle_qbase_focus_in_event(void* self, void* event) {
    QSplitterHandle_QBaseFocusInEvent((QSplitterHandle*)self, (QFocusEvent*)event);
}

void q_splitterhandle_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnFocusInEvent((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_focus_out_event(void* self, void* event) {
    QSplitterHandle_FocusOutEvent((QSplitterHandle*)self, (QFocusEvent*)event);
}

void q_splitterhandle_qbase_focus_out_event(void* self, void* event) {
    QSplitterHandle_QBaseFocusOutEvent((QSplitterHandle*)self, (QFocusEvent*)event);
}

void q_splitterhandle_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnFocusOutEvent((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_enter_event(void* self, void* event) {
    QSplitterHandle_EnterEvent((QSplitterHandle*)self, (QEnterEvent*)event);
}

void q_splitterhandle_qbase_enter_event(void* self, void* event) {
    QSplitterHandle_QBaseEnterEvent((QSplitterHandle*)self, (QEnterEvent*)event);
}

void q_splitterhandle_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnEnterEvent((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_leave_event(void* self, void* event) {
    QSplitterHandle_LeaveEvent((QSplitterHandle*)self, (QEvent*)event);
}

void q_splitterhandle_qbase_leave_event(void* self, void* event) {
    QSplitterHandle_QBaseLeaveEvent((QSplitterHandle*)self, (QEvent*)event);
}

void q_splitterhandle_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnLeaveEvent((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_move_event(void* self, void* event) {
    QSplitterHandle_MoveEvent((QSplitterHandle*)self, (QMoveEvent*)event);
}

void q_splitterhandle_qbase_move_event(void* self, void* event) {
    QSplitterHandle_QBaseMoveEvent((QSplitterHandle*)self, (QMoveEvent*)event);
}

void q_splitterhandle_on_move_event(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnMoveEvent((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_close_event(void* self, void* event) {
    QSplitterHandle_CloseEvent((QSplitterHandle*)self, (QCloseEvent*)event);
}

void q_splitterhandle_qbase_close_event(void* self, void* event) {
    QSplitterHandle_QBaseCloseEvent((QSplitterHandle*)self, (QCloseEvent*)event);
}

void q_splitterhandle_on_close_event(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnCloseEvent((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_context_menu_event(void* self, void* event) {
    QSplitterHandle_ContextMenuEvent((QSplitterHandle*)self, (QContextMenuEvent*)event);
}

void q_splitterhandle_qbase_context_menu_event(void* self, void* event) {
    QSplitterHandle_QBaseContextMenuEvent((QSplitterHandle*)self, (QContextMenuEvent*)event);
}

void q_splitterhandle_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnContextMenuEvent((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_tablet_event(void* self, void* event) {
    QSplitterHandle_TabletEvent((QSplitterHandle*)self, (QTabletEvent*)event);
}

void q_splitterhandle_qbase_tablet_event(void* self, void* event) {
    QSplitterHandle_QBaseTabletEvent((QSplitterHandle*)self, (QTabletEvent*)event);
}

void q_splitterhandle_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnTabletEvent((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_action_event(void* self, void* event) {
    QSplitterHandle_ActionEvent((QSplitterHandle*)self, (QActionEvent*)event);
}

void q_splitterhandle_qbase_action_event(void* self, void* event) {
    QSplitterHandle_QBaseActionEvent((QSplitterHandle*)self, (QActionEvent*)event);
}

void q_splitterhandle_on_action_event(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnActionEvent((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_drag_enter_event(void* self, void* event) {
    QSplitterHandle_DragEnterEvent((QSplitterHandle*)self, (QDragEnterEvent*)event);
}

void q_splitterhandle_qbase_drag_enter_event(void* self, void* event) {
    QSplitterHandle_QBaseDragEnterEvent((QSplitterHandle*)self, (QDragEnterEvent*)event);
}

void q_splitterhandle_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnDragEnterEvent((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_drag_move_event(void* self, void* event) {
    QSplitterHandle_DragMoveEvent((QSplitterHandle*)self, (QDragMoveEvent*)event);
}

void q_splitterhandle_qbase_drag_move_event(void* self, void* event) {
    QSplitterHandle_QBaseDragMoveEvent((QSplitterHandle*)self, (QDragMoveEvent*)event);
}

void q_splitterhandle_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnDragMoveEvent((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_drag_leave_event(void* self, void* event) {
    QSplitterHandle_DragLeaveEvent((QSplitterHandle*)self, (QDragLeaveEvent*)event);
}

void q_splitterhandle_qbase_drag_leave_event(void* self, void* event) {
    QSplitterHandle_QBaseDragLeaveEvent((QSplitterHandle*)self, (QDragLeaveEvent*)event);
}

void q_splitterhandle_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnDragLeaveEvent((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_drop_event(void* self, void* event) {
    QSplitterHandle_DropEvent((QSplitterHandle*)self, (QDropEvent*)event);
}

void q_splitterhandle_qbase_drop_event(void* self, void* event) {
    QSplitterHandle_QBaseDropEvent((QSplitterHandle*)self, (QDropEvent*)event);
}

void q_splitterhandle_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnDropEvent((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_show_event(void* self, void* event) {
    QSplitterHandle_ShowEvent((QSplitterHandle*)self, (QShowEvent*)event);
}

void q_splitterhandle_qbase_show_event(void* self, void* event) {
    QSplitterHandle_QBaseShowEvent((QSplitterHandle*)self, (QShowEvent*)event);
}

void q_splitterhandle_on_show_event(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnShowEvent((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_hide_event(void* self, void* event) {
    QSplitterHandle_HideEvent((QSplitterHandle*)self, (QHideEvent*)event);
}

void q_splitterhandle_qbase_hide_event(void* self, void* event) {
    QSplitterHandle_QBaseHideEvent((QSplitterHandle*)self, (QHideEvent*)event);
}

void q_splitterhandle_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnHideEvent((QSplitterHandle*)self, (intptr_t)slot);
}

bool q_splitterhandle_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QSplitterHandle_NativeEvent((QSplitterHandle*)self, qstring(eventType), message, result);
}

bool q_splitterhandle_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QSplitterHandle_QBaseNativeEvent((QSplitterHandle*)self, qstring(eventType), message, result);
}

void q_splitterhandle_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QSplitterHandle_OnNativeEvent((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_change_event(void* self, void* param1) {
    QSplitterHandle_ChangeEvent((QSplitterHandle*)self, (QEvent*)param1);
}

void q_splitterhandle_qbase_change_event(void* self, void* param1) {
    QSplitterHandle_QBaseChangeEvent((QSplitterHandle*)self, (QEvent*)param1);
}

void q_splitterhandle_on_change_event(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnChangeEvent((QSplitterHandle*)self, (intptr_t)slot);
}

int32_t q_splitterhandle_metric(void* self, int64_t param1) {
    return QSplitterHandle_Metric((QSplitterHandle*)self, param1);
}

int32_t q_splitterhandle_qbase_metric(void* self, int64_t param1) {
    return QSplitterHandle_QBaseMetric((QSplitterHandle*)self, param1);
}

void q_splitterhandle_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QSplitterHandle_OnMetric((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_init_painter(void* self, void* painter) {
    QSplitterHandle_InitPainter((QSplitterHandle*)self, (QPainter*)painter);
}

void q_splitterhandle_qbase_init_painter(void* self, void* painter) {
    QSplitterHandle_QBaseInitPainter((QSplitterHandle*)self, (QPainter*)painter);
}

void q_splitterhandle_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnInitPainter((QSplitterHandle*)self, (intptr_t)slot);
}

QPaintDevice* q_splitterhandle_redirected(void* self, void* offset) {
    return QSplitterHandle_Redirected((QSplitterHandle*)self, (QPoint*)offset);
}

QPaintDevice* q_splitterhandle_qbase_redirected(void* self, void* offset) {
    return QSplitterHandle_QBaseRedirected((QSplitterHandle*)self, (QPoint*)offset);
}

void q_splitterhandle_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QSplitterHandle_OnRedirected((QSplitterHandle*)self, (intptr_t)slot);
}

QPainter* q_splitterhandle_shared_painter(void* self) {
    return QSplitterHandle_SharedPainter((QSplitterHandle*)self);
}

QPainter* q_splitterhandle_qbase_shared_painter(void* self) {
    return QSplitterHandle_QBaseSharedPainter((QSplitterHandle*)self);
}

void q_splitterhandle_on_shared_painter(void* self, QPainter* (*slot)()) {
    QSplitterHandle_OnSharedPainter((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_input_method_event(void* self, void* param1) {
    QSplitterHandle_InputMethodEvent((QSplitterHandle*)self, (QInputMethodEvent*)param1);
}

void q_splitterhandle_qbase_input_method_event(void* self, void* param1) {
    QSplitterHandle_QBaseInputMethodEvent((QSplitterHandle*)self, (QInputMethodEvent*)param1);
}

void q_splitterhandle_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnInputMethodEvent((QSplitterHandle*)self, (intptr_t)slot);
}

QVariant* q_splitterhandle_input_method_query(void* self, int64_t param1) {
    return QSplitterHandle_InputMethodQuery((QSplitterHandle*)self, param1);
}

QVariant* q_splitterhandle_qbase_input_method_query(void* self, int64_t param1) {
    return QSplitterHandle_QBaseInputMethodQuery((QSplitterHandle*)self, param1);
}

void q_splitterhandle_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QSplitterHandle_OnInputMethodQuery((QSplitterHandle*)self, (intptr_t)slot);
}

bool q_splitterhandle_focus_next_prev_child(void* self, bool next) {
    return QSplitterHandle_FocusNextPrevChild((QSplitterHandle*)self, next);
}

bool q_splitterhandle_qbase_focus_next_prev_child(void* self, bool next) {
    return QSplitterHandle_QBaseFocusNextPrevChild((QSplitterHandle*)self, next);
}

void q_splitterhandle_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QSplitterHandle_OnFocusNextPrevChild((QSplitterHandle*)self, (intptr_t)slot);
}

bool q_splitterhandle_event_filter(void* self, void* watched, void* event) {
    return QSplitterHandle_EventFilter((QSplitterHandle*)self, (QObject*)watched, (QEvent*)event);
}

bool q_splitterhandle_qbase_event_filter(void* self, void* watched, void* event) {
    return QSplitterHandle_QBaseEventFilter((QSplitterHandle*)self, (QObject*)watched, (QEvent*)event);
}

void q_splitterhandle_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QSplitterHandle_OnEventFilter((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_timer_event(void* self, void* event) {
    QSplitterHandle_TimerEvent((QSplitterHandle*)self, (QTimerEvent*)event);
}

void q_splitterhandle_qbase_timer_event(void* self, void* event) {
    QSplitterHandle_QBaseTimerEvent((QSplitterHandle*)self, (QTimerEvent*)event);
}

void q_splitterhandle_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnTimerEvent((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_child_event(void* self, void* event) {
    QSplitterHandle_ChildEvent((QSplitterHandle*)self, (QChildEvent*)event);
}

void q_splitterhandle_qbase_child_event(void* self, void* event) {
    QSplitterHandle_QBaseChildEvent((QSplitterHandle*)self, (QChildEvent*)event);
}

void q_splitterhandle_on_child_event(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnChildEvent((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_custom_event(void* self, void* event) {
    QSplitterHandle_CustomEvent((QSplitterHandle*)self, (QEvent*)event);
}

void q_splitterhandle_qbase_custom_event(void* self, void* event) {
    QSplitterHandle_QBaseCustomEvent((QSplitterHandle*)self, (QEvent*)event);
}

void q_splitterhandle_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnCustomEvent((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_connect_notify(void* self, void* signal) {
    QSplitterHandle_ConnectNotify((QSplitterHandle*)self, (QMetaMethod*)signal);
}

void q_splitterhandle_qbase_connect_notify(void* self, void* signal) {
    QSplitterHandle_QBaseConnectNotify((QSplitterHandle*)self, (QMetaMethod*)signal);
}

void q_splitterhandle_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnConnectNotify((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_disconnect_notify(void* self, void* signal) {
    QSplitterHandle_DisconnectNotify((QSplitterHandle*)self, (QMetaMethod*)signal);
}

void q_splitterhandle_qbase_disconnect_notify(void* self, void* signal) {
    QSplitterHandle_QBaseDisconnectNotify((QSplitterHandle*)self, (QMetaMethod*)signal);
}

void q_splitterhandle_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QSplitterHandle_OnDisconnectNotify((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_update_micro_focus(void* self) {
    QSplitterHandle_UpdateMicroFocus((QSplitterHandle*)self);
}

void q_splitterhandle_qbase_update_micro_focus(void* self) {
    QSplitterHandle_QBaseUpdateMicroFocus((QSplitterHandle*)self);
}

void q_splitterhandle_on_update_micro_focus(void* self, void (*slot)()) {
    QSplitterHandle_OnUpdateMicroFocus((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_create(void* self) {
    QSplitterHandle_Create((QSplitterHandle*)self);
}

void q_splitterhandle_qbase_create(void* self) {
    QSplitterHandle_QBaseCreate((QSplitterHandle*)self);
}

void q_splitterhandle_on_create(void* self, void (*slot)()) {
    QSplitterHandle_OnCreate((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_destroy(void* self) {
    QSplitterHandle_Destroy((QSplitterHandle*)self);
}

void q_splitterhandle_qbase_destroy(void* self) {
    QSplitterHandle_QBaseDestroy((QSplitterHandle*)self);
}

void q_splitterhandle_on_destroy(void* self, void (*slot)()) {
    QSplitterHandle_OnDestroy((QSplitterHandle*)self, (intptr_t)slot);
}

bool q_splitterhandle_focus_next_child(void* self) {
    return QSplitterHandle_FocusNextChild((QSplitterHandle*)self);
}

bool q_splitterhandle_qbase_focus_next_child(void* self) {
    return QSplitterHandle_QBaseFocusNextChild((QSplitterHandle*)self);
}

void q_splitterhandle_on_focus_next_child(void* self, bool (*slot)()) {
    QSplitterHandle_OnFocusNextChild((QSplitterHandle*)self, (intptr_t)slot);
}

bool q_splitterhandle_focus_previous_child(void* self) {
    return QSplitterHandle_FocusPreviousChild((QSplitterHandle*)self);
}

bool q_splitterhandle_qbase_focus_previous_child(void* self) {
    return QSplitterHandle_QBaseFocusPreviousChild((QSplitterHandle*)self);
}

void q_splitterhandle_on_focus_previous_child(void* self, bool (*slot)()) {
    QSplitterHandle_OnFocusPreviousChild((QSplitterHandle*)self, (intptr_t)slot);
}

QObject* q_splitterhandle_sender(void* self) {
    return QSplitterHandle_Sender((QSplitterHandle*)self);
}

QObject* q_splitterhandle_qbase_sender(void* self) {
    return QSplitterHandle_QBaseSender((QSplitterHandle*)self);
}

void q_splitterhandle_on_sender(void* self, QObject* (*slot)()) {
    QSplitterHandle_OnSender((QSplitterHandle*)self, (intptr_t)slot);
}

int32_t q_splitterhandle_sender_signal_index(void* self) {
    return QSplitterHandle_SenderSignalIndex((QSplitterHandle*)self);
}

int32_t q_splitterhandle_qbase_sender_signal_index(void* self) {
    return QSplitterHandle_QBaseSenderSignalIndex((QSplitterHandle*)self);
}

void q_splitterhandle_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QSplitterHandle_OnSenderSignalIndex((QSplitterHandle*)self, (intptr_t)slot);
}

int32_t q_splitterhandle_receivers(void* self, const char* signal) {
    return QSplitterHandle_Receivers((QSplitterHandle*)self, signal);
}

int32_t q_splitterhandle_qbase_receivers(void* self, const char* signal) {
    return QSplitterHandle_QBaseReceivers((QSplitterHandle*)self, signal);
}

void q_splitterhandle_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QSplitterHandle_OnReceivers((QSplitterHandle*)self, (intptr_t)slot);
}

bool q_splitterhandle_is_signal_connected(void* self, void* signal) {
    return QSplitterHandle_IsSignalConnected((QSplitterHandle*)self, (QMetaMethod*)signal);
}

bool q_splitterhandle_qbase_is_signal_connected(void* self, void* signal) {
    return QSplitterHandle_QBaseIsSignalConnected((QSplitterHandle*)self, (QMetaMethod*)signal);
}

void q_splitterhandle_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QSplitterHandle_OnIsSignalConnected((QSplitterHandle*)self, (intptr_t)slot);
}

double q_splitterhandle_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QSplitterHandle_GetDecodedMetricF((QSplitterHandle*)self, metricA, metricB);
}

double q_splitterhandle_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QSplitterHandle_QBaseGetDecodedMetricF((QSplitterHandle*)self, metricA, metricB);
}

void q_splitterhandle_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t)) {
    QSplitterHandle_OnGetDecodedMetricF((QSplitterHandle*)self, (intptr_t)slot);
}

void q_splitterhandle_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_splitterhandle_delete(void* self) {
    QSplitterHandle_Delete((QSplitterHandle*)(self));
}
