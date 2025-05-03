#include "libqaction.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqcursor.hpp"
#include "libqfont.hpp"
#include "libqgraphicseffect.hpp"
#include "libqgraphicsitem.hpp"
#include "libqgraphicslayout.hpp"
#include "libqgraphicslayoutitem.hpp"
#include "libqgraphicsscene.hpp"
#include "libqgraphicstransform.hpp"
#include "libqkeysequence.hpp"
#include "libqmargins.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpainter.hpp"
#include "libqpainterpath.hpp"
#include "libqpalette.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqsize.hpp"
#include "libqsizepolicy.hpp"
#include <string.h>
#include "libqstyle.hpp"
#include "libqstyleoption.hpp"
#include "libqthread.hpp"
#include "libqtransform.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqcoreevent.hpp"
#include "libqgraphicswidget.hpp"
#include "libqgraphicswidget.h"

QGraphicsWidget* q_graphicswidget_new() {
    return QGraphicsWidget_new();
}

QGraphicsWidget* q_graphicswidget_new2(void* parent) {
    return QGraphicsWidget_new2((QGraphicsItem*)parent);
}

QGraphicsWidget* q_graphicswidget_new3(void* parent, int64_t wFlags) {
    return QGraphicsWidget_new3((QGraphicsItem*)parent, wFlags);
}

QMetaObject* q_graphicswidget_meta_object(void* self) {
    return QGraphicsWidget_MetaObject((QGraphicsWidget*)self);
}

void* q_graphicswidget_metacast(void* self, const char* param1) {
    return QGraphicsWidget_Metacast((QGraphicsWidget*)self, param1);
}

int32_t q_graphicswidget_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsWidget_Metacall((QGraphicsWidget*)self, param1, param2, param3);
}

void q_graphicswidget_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QGraphicsWidget_OnMetacall((QGraphicsWidget*)self, (intptr_t)slot);
}

int32_t q_graphicswidget_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsWidget_QBaseMetacall((QGraphicsWidget*)self, param1, param2, param3);
}

const char* q_graphicswidget_tr(const char* s) {
    libqt_string _str = QGraphicsWidget_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QGraphicsLayout* q_graphicswidget_layout(void* self) {
    return QGraphicsWidget_Layout((QGraphicsWidget*)self);
}

void q_graphicswidget_set_layout(void* self, void* layout) {
    QGraphicsWidget_SetLayout((QGraphicsWidget*)self, (QGraphicsLayout*)layout);
}

void q_graphicswidget_adjust_size(void* self) {
    QGraphicsWidget_AdjustSize((QGraphicsWidget*)self);
}

int64_t q_graphicswidget_layout_direction(void* self) {
    return QGraphicsWidget_LayoutDirection((QGraphicsWidget*)self);
}

void q_graphicswidget_set_layout_direction(void* self, int64_t direction) {
    QGraphicsWidget_SetLayoutDirection((QGraphicsWidget*)self, direction);
}

void q_graphicswidget_unset_layout_direction(void* self) {
    QGraphicsWidget_UnsetLayoutDirection((QGraphicsWidget*)self);
}

QStyle* q_graphicswidget_style(void* self) {
    return QGraphicsWidget_Style((QGraphicsWidget*)self);
}

void q_graphicswidget_set_style(void* self, void* style) {
    QGraphicsWidget_SetStyle((QGraphicsWidget*)self, (QStyle*)style);
}

QFont* q_graphicswidget_font(void* self) {
    return QGraphicsWidget_Font((QGraphicsWidget*)self);
}

void q_graphicswidget_set_font(void* self, void* font) {
    QGraphicsWidget_SetFont((QGraphicsWidget*)self, (QFont*)font);
}

QPalette* q_graphicswidget_palette(void* self) {
    return QGraphicsWidget_Palette((QGraphicsWidget*)self);
}

void q_graphicswidget_set_palette(void* self, void* palette) {
    QGraphicsWidget_SetPalette((QGraphicsWidget*)self, (QPalette*)palette);
}

bool q_graphicswidget_auto_fill_background(void* self) {
    return QGraphicsWidget_AutoFillBackground((QGraphicsWidget*)self);
}

void q_graphicswidget_set_auto_fill_background(void* self, bool enabled) {
    QGraphicsWidget_SetAutoFillBackground((QGraphicsWidget*)self, enabled);
}

void q_graphicswidget_resize(void* self, void* size) {
    QGraphicsWidget_Resize((QGraphicsWidget*)self, (QSizeF*)size);
}

void q_graphicswidget_resize2(void* self, double w, double h) {
    QGraphicsWidget_Resize2((QGraphicsWidget*)self, w, h);
}

QSizeF* q_graphicswidget_size(void* self) {
    return QGraphicsWidget_Size((QGraphicsWidget*)self);
}

void q_graphicswidget_set_geometry(void* self, void* rect) {
    QGraphicsWidget_SetGeometry((QGraphicsWidget*)self, (QRectF*)rect);
}

void q_graphicswidget_on_set_geometry(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnSetGeometry((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_qbase_set_geometry(void* self, void* rect) {
    QGraphicsWidget_QBaseSetGeometry((QGraphicsWidget*)self, (QRectF*)rect);
}

void q_graphicswidget_set_geometry2(void* self, double x, double y, double w, double h) {
    QGraphicsWidget_SetGeometry2((QGraphicsWidget*)self, x, y, w, h);
}

QRectF* q_graphicswidget_rect(void* self) {
    return QGraphicsWidget_Rect((QGraphicsWidget*)self);
}

void q_graphicswidget_set_contents_margins(void* self, double left, double top, double right, double bottom) {
    QGraphicsWidget_SetContentsMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

void q_graphicswidget_set_contents_margins_with_margins(void* self, void* margins) {
    QGraphicsWidget_SetContentsMarginsWithMargins((QGraphicsWidget*)self, (QMarginsF*)margins);
}

void q_graphicswidget_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsWidget_GetContentsMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

void q_graphicswidget_on_get_contents_margins(void* self, void (*slot)(void*, double*, double*, double*, double*)) {
    QGraphicsWidget_OnGetContentsMargins((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsWidget_QBaseGetContentsMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

void q_graphicswidget_set_window_frame_margins(void* self, double left, double top, double right, double bottom) {
    QGraphicsWidget_SetWindowFrameMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

void q_graphicswidget_set_window_frame_margins_with_margins(void* self, void* margins) {
    QGraphicsWidget_SetWindowFrameMarginsWithMargins((QGraphicsWidget*)self, (QMarginsF*)margins);
}

void q_graphicswidget_get_window_frame_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsWidget_GetWindowFrameMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

void q_graphicswidget_unset_window_frame_margins(void* self) {
    QGraphicsWidget_UnsetWindowFrameMargins((QGraphicsWidget*)self);
}

QRectF* q_graphicswidget_window_frame_geometry(void* self) {
    return QGraphicsWidget_WindowFrameGeometry((QGraphicsWidget*)self);
}

QRectF* q_graphicswidget_window_frame_rect(void* self) {
    return QGraphicsWidget_WindowFrameRect((QGraphicsWidget*)self);
}

int64_t q_graphicswidget_window_flags(void* self) {
    return QGraphicsWidget_WindowFlags((QGraphicsWidget*)self);
}

int64_t q_graphicswidget_window_type(void* self) {
    return QGraphicsWidget_WindowType((QGraphicsWidget*)self);
}

void q_graphicswidget_set_window_flags(void* self, int64_t wFlags) {
    QGraphicsWidget_SetWindowFlags((QGraphicsWidget*)self, wFlags);
}

bool q_graphicswidget_is_active_window(void* self) {
    return QGraphicsWidget_IsActiveWindow((QGraphicsWidget*)self);
}

void q_graphicswidget_set_window_title(void* self, const char* title) {
    QGraphicsWidget_SetWindowTitle((QGraphicsWidget*)self, qstring(title));
}

const char* q_graphicswidget_window_title(void* self) {
    libqt_string _str = QGraphicsWidget_WindowTitle((QGraphicsWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_graphicswidget_focus_policy(void* self) {
    return QGraphicsWidget_FocusPolicy((QGraphicsWidget*)self);
}

void q_graphicswidget_set_focus_policy(void* self, int64_t policy) {
    QGraphicsWidget_SetFocusPolicy((QGraphicsWidget*)self, policy);
}

void q_graphicswidget_set_tab_order(void* first, void* second) {
    QGraphicsWidget_SetTabOrder((QGraphicsWidget*)first, (QGraphicsWidget*)second);
}

QGraphicsWidget* q_graphicswidget_focus_widget(void* self) {
    return QGraphicsWidget_FocusWidget((QGraphicsWidget*)self);
}

int32_t q_graphicswidget_grab_shortcut(void* self, void* sequence) {
    return QGraphicsWidget_GrabShortcut((QGraphicsWidget*)self, (QKeySequence*)sequence);
}

void q_graphicswidget_release_shortcut(void* self, int id) {
    QGraphicsWidget_ReleaseShortcut((QGraphicsWidget*)self, id);
}

void q_graphicswidget_set_shortcut_enabled(void* self, int id) {
    QGraphicsWidget_SetShortcutEnabled((QGraphicsWidget*)self, id);
}

void q_graphicswidget_set_shortcut_auto_repeat(void* self, int id) {
    QGraphicsWidget_SetShortcutAutoRepeat((QGraphicsWidget*)self, id);
}

void q_graphicswidget_add_action(void* self, void* action) {
    QGraphicsWidget_AddAction((QGraphicsWidget*)self, (QAction*)action);
}

void q_graphicswidget_add_actions(void* self, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QGraphicsWidget_AddActions((QGraphicsWidget*)self, actions_list);
}

void q_graphicswidget_insert_actions(void* self, void* before, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QGraphicsWidget_InsertActions((QGraphicsWidget*)self, (QAction*)before, actions_list);
}

void q_graphicswidget_insert_action(void* self, void* before, void* action) {
    QGraphicsWidget_InsertAction((QGraphicsWidget*)self, (QAction*)before, (QAction*)action);
}

void q_graphicswidget_remove_action(void* self, void* action) {
    QGraphicsWidget_RemoveAction((QGraphicsWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_graphicswidget_actions(void* self) {
    libqt_list _arr = QGraphicsWidget_Actions((QGraphicsWidget*)self);
    return _arr;
}

void q_graphicswidget_set_attribute(void* self, int64_t attribute) {
    QGraphicsWidget_SetAttribute((QGraphicsWidget*)self, attribute);
}

bool q_graphicswidget_test_attribute(void* self, int64_t attribute) {
    return QGraphicsWidget_TestAttribute((QGraphicsWidget*)self, attribute);
}

int32_t q_graphicswidget_type(void* self) {
    return QGraphicsWidget_Type((QGraphicsWidget*)self);
}

void q_graphicswidget_on_type(void* self, int32_t (*slot)()) {
    QGraphicsWidget_OnType((QGraphicsWidget*)self, (intptr_t)slot);
}

int32_t q_graphicswidget_qbase_type(void* self) {
    return QGraphicsWidget_QBaseType((QGraphicsWidget*)self);
}

void q_graphicswidget_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsWidget_Paint((QGraphicsWidget*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_graphicswidget_on_paint(void* self, void (*slot)(void*, void*, void*, void*)) {
    QGraphicsWidget_OnPaint((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_qbase_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsWidget_QBasePaint((QGraphicsWidget*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_graphicswidget_paint_window_frame(void* self, void* painter, void* option, void* widget) {
    QGraphicsWidget_PaintWindowFrame((QGraphicsWidget*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_graphicswidget_on_paint_window_frame(void* self, void (*slot)(void*, void*, void*, void*)) {
    QGraphicsWidget_OnPaintWindowFrame((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_qbase_paint_window_frame(void* self, void* painter, void* option, void* widget) {
    QGraphicsWidget_QBasePaintWindowFrame((QGraphicsWidget*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

QRectF* q_graphicswidget_bounding_rect(void* self) {
    return QGraphicsWidget_BoundingRect((QGraphicsWidget*)self);
}

void q_graphicswidget_on_bounding_rect(void* self, QRectF* (*slot)()) {
    QGraphicsWidget_OnBoundingRect((QGraphicsWidget*)self, (intptr_t)slot);
}

QRectF* q_graphicswidget_qbase_bounding_rect(void* self) {
    return QGraphicsWidget_QBaseBoundingRect((QGraphicsWidget*)self);
}

QPainterPath* q_graphicswidget_shape(void* self) {
    return QGraphicsWidget_Shape((QGraphicsWidget*)self);
}

void q_graphicswidget_on_shape(void* self, QPainterPath* (*slot)()) {
    QGraphicsWidget_OnShape((QGraphicsWidget*)self, (intptr_t)slot);
}

QPainterPath* q_graphicswidget_qbase_shape(void* self) {
    return QGraphicsWidget_QBaseShape((QGraphicsWidget*)self);
}

void q_graphicswidget_geometry_changed(void* self) {
    QGraphicsWidget_GeometryChanged((QGraphicsWidget*)self);
}

void q_graphicswidget_on_geometry_changed(void* self, void (*slot)(void*)) {
    QGraphicsWidget_Connect_GeometryChanged((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_layout_changed(void* self) {
    QGraphicsWidget_LayoutChanged((QGraphicsWidget*)self);
}

void q_graphicswidget_on_layout_changed(void* self, void (*slot)(void*)) {
    QGraphicsWidget_Connect_LayoutChanged((QGraphicsWidget*)self, (intptr_t)slot);
}

bool q_graphicswidget_close(void* self) {
    return QGraphicsWidget_Close((QGraphicsWidget*)self);
}

void q_graphicswidget_init_style_option(void* self, void* option) {
    QGraphicsWidget_InitStyleOption((QGraphicsWidget*)self, (QStyleOption*)option);
}

void q_graphicswidget_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnInitStyleOption((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_qbase_init_style_option(void* self, void* option) {
    QGraphicsWidget_QBaseInitStyleOption((QGraphicsWidget*)self, (QStyleOption*)option);
}

QSizeF* q_graphicswidget_size_hint(void* self, int64_t which, void* constraint) {
    return QGraphicsWidget_SizeHint((QGraphicsWidget*)self, which, (QSizeF*)constraint);
}

void q_graphicswidget_on_size_hint(void* self, QSizeF* (*slot)(void*, int64_t, void*)) {
    QGraphicsWidget_OnSizeHint((QGraphicsWidget*)self, (intptr_t)slot);
}

QSizeF* q_graphicswidget_qbase_size_hint(void* self, int64_t which, void* constraint) {
    return QGraphicsWidget_QBaseSizeHint((QGraphicsWidget*)self, which, (QSizeF*)constraint);
}

void q_graphicswidget_update_geometry(void* self) {
    QGraphicsWidget_UpdateGeometry((QGraphicsWidget*)self);
}

void q_graphicswidget_on_update_geometry(void* self, void (*slot)()) {
    QGraphicsWidget_OnUpdateGeometry((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_qbase_update_geometry(void* self) {
    QGraphicsWidget_QBaseUpdateGeometry((QGraphicsWidget*)self);
}

QVariant* q_graphicswidget_item_change(void* self, int64_t change, void* value) {
    return QGraphicsWidget_ItemChange((QGraphicsWidget*)self, change, (QVariant*)value);
}

void q_graphicswidget_on_item_change(void* self, QVariant* (*slot)(void*, int64_t, void*)) {
    QGraphicsWidget_OnItemChange((QGraphicsWidget*)self, (intptr_t)slot);
}

QVariant* q_graphicswidget_qbase_item_change(void* self, int64_t change, void* value) {
    return QGraphicsWidget_QBaseItemChange((QGraphicsWidget*)self, change, (QVariant*)value);
}

QVariant* q_graphicswidget_property_change(void* self, const char* propertyName, void* value) {
    return QGraphicsWidget_PropertyChange((QGraphicsWidget*)self, qstring(propertyName), (QVariant*)value);
}

void q_graphicswidget_on_property_change(void* self, QVariant* (*slot)(void*, const char*, void*)) {
    QGraphicsWidget_OnPropertyChange((QGraphicsWidget*)self, (intptr_t)slot);
}

QVariant* q_graphicswidget_qbase_property_change(void* self, const char* propertyName, void* value) {
    return QGraphicsWidget_QBasePropertyChange((QGraphicsWidget*)self, qstring(propertyName), (QVariant*)value);
}

bool q_graphicswidget_scene_event(void* self, void* event) {
    return QGraphicsWidget_SceneEvent((QGraphicsWidget*)self, (QEvent*)event);
}

void q_graphicswidget_on_scene_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsWidget_OnSceneEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

bool q_graphicswidget_qbase_scene_event(void* self, void* event) {
    return QGraphicsWidget_QBaseSceneEvent((QGraphicsWidget*)self, (QEvent*)event);
}

bool q_graphicswidget_window_frame_event(void* self, void* e) {
    return QGraphicsWidget_WindowFrameEvent((QGraphicsWidget*)self, (QEvent*)e);
}

void q_graphicswidget_on_window_frame_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsWidget_OnWindowFrameEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

bool q_graphicswidget_qbase_window_frame_event(void* self, void* e) {
    return QGraphicsWidget_QBaseWindowFrameEvent((QGraphicsWidget*)self, (QEvent*)e);
}

int64_t q_graphicswidget_window_frame_section_at(void* self, void* pos) {
    return QGraphicsWidget_WindowFrameSectionAt((QGraphicsWidget*)self, (QPointF*)pos);
}

void q_graphicswidget_on_window_frame_section_at(void* self, int64_t (*slot)(void*, void*)) {
    QGraphicsWidget_OnWindowFrameSectionAt((QGraphicsWidget*)self, (intptr_t)slot);
}

int64_t q_graphicswidget_qbase_window_frame_section_at(void* self, void* pos) {
    return QGraphicsWidget_QBaseWindowFrameSectionAt((QGraphicsWidget*)self, (QPointF*)pos);
}

bool q_graphicswidget_event(void* self, void* event) {
    return QGraphicsWidget_Event((QGraphicsWidget*)self, (QEvent*)event);
}

void q_graphicswidget_on_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsWidget_OnEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

bool q_graphicswidget_qbase_event(void* self, void* event) {
    return QGraphicsWidget_QBaseEvent((QGraphicsWidget*)self, (QEvent*)event);
}

void q_graphicswidget_change_event(void* self, void* event) {
    QGraphicsWidget_ChangeEvent((QGraphicsWidget*)self, (QEvent*)event);
}

void q_graphicswidget_on_change_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnChangeEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_qbase_change_event(void* self, void* event) {
    QGraphicsWidget_QBaseChangeEvent((QGraphicsWidget*)self, (QEvent*)event);
}

void q_graphicswidget_close_event(void* self, void* event) {
    QGraphicsWidget_CloseEvent((QGraphicsWidget*)self, (QCloseEvent*)event);
}

void q_graphicswidget_on_close_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnCloseEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_qbase_close_event(void* self, void* event) {
    QGraphicsWidget_QBaseCloseEvent((QGraphicsWidget*)self, (QCloseEvent*)event);
}

void q_graphicswidget_focus_in_event(void* self, void* event) {
    QGraphicsWidget_FocusInEvent((QGraphicsWidget*)self, (QFocusEvent*)event);
}

void q_graphicswidget_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnFocusInEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_qbase_focus_in_event(void* self, void* event) {
    QGraphicsWidget_QBaseFocusInEvent((QGraphicsWidget*)self, (QFocusEvent*)event);
}

bool q_graphicswidget_focus_next_prev_child(void* self, bool next) {
    return QGraphicsWidget_FocusNextPrevChild((QGraphicsWidget*)self, next);
}

void q_graphicswidget_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QGraphicsWidget_OnFocusNextPrevChild((QGraphicsWidget*)self, (intptr_t)slot);
}

bool q_graphicswidget_qbase_focus_next_prev_child(void* self, bool next) {
    return QGraphicsWidget_QBaseFocusNextPrevChild((QGraphicsWidget*)self, next);
}

void q_graphicswidget_focus_out_event(void* self, void* event) {
    QGraphicsWidget_FocusOutEvent((QGraphicsWidget*)self, (QFocusEvent*)event);
}

void q_graphicswidget_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnFocusOutEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_qbase_focus_out_event(void* self, void* event) {
    QGraphicsWidget_QBaseFocusOutEvent((QGraphicsWidget*)self, (QFocusEvent*)event);
}

void q_graphicswidget_hide_event(void* self, void* event) {
    QGraphicsWidget_HideEvent((QGraphicsWidget*)self, (QHideEvent*)event);
}

void q_graphicswidget_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnHideEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_qbase_hide_event(void* self, void* event) {
    QGraphicsWidget_QBaseHideEvent((QGraphicsWidget*)self, (QHideEvent*)event);
}

void q_graphicswidget_move_event(void* self, void* event) {
    QGraphicsWidget_MoveEvent((QGraphicsWidget*)self, (QGraphicsSceneMoveEvent*)event);
}

void q_graphicswidget_on_move_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnMoveEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_qbase_move_event(void* self, void* event) {
    QGraphicsWidget_QBaseMoveEvent((QGraphicsWidget*)self, (QGraphicsSceneMoveEvent*)event);
}

void q_graphicswidget_polish_event(void* self) {
    QGraphicsWidget_PolishEvent((QGraphicsWidget*)self);
}

void q_graphicswidget_on_polish_event(void* self, void (*slot)()) {
    QGraphicsWidget_OnPolishEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_qbase_polish_event(void* self) {
    QGraphicsWidget_QBasePolishEvent((QGraphicsWidget*)self);
}

void q_graphicswidget_resize_event(void* self, void* event) {
    QGraphicsWidget_ResizeEvent((QGraphicsWidget*)self, (QGraphicsSceneResizeEvent*)event);
}

void q_graphicswidget_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnResizeEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_qbase_resize_event(void* self, void* event) {
    QGraphicsWidget_QBaseResizeEvent((QGraphicsWidget*)self, (QGraphicsSceneResizeEvent*)event);
}

void q_graphicswidget_show_event(void* self, void* event) {
    QGraphicsWidget_ShowEvent((QGraphicsWidget*)self, (QShowEvent*)event);
}

void q_graphicswidget_on_show_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnShowEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_qbase_show_event(void* self, void* event) {
    QGraphicsWidget_QBaseShowEvent((QGraphicsWidget*)self, (QShowEvent*)event);
}

void q_graphicswidget_hover_move_event(void* self, void* event) {
    QGraphicsWidget_HoverMoveEvent((QGraphicsWidget*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicswidget_on_hover_move_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnHoverMoveEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_qbase_hover_move_event(void* self, void* event) {
    QGraphicsWidget_QBaseHoverMoveEvent((QGraphicsWidget*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicswidget_hover_leave_event(void* self, void* event) {
    QGraphicsWidget_HoverLeaveEvent((QGraphicsWidget*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicswidget_on_hover_leave_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnHoverLeaveEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_qbase_hover_leave_event(void* self, void* event) {
    QGraphicsWidget_QBaseHoverLeaveEvent((QGraphicsWidget*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicswidget_grab_mouse_event(void* self, void* event) {
    QGraphicsWidget_GrabMouseEvent((QGraphicsWidget*)self, (QEvent*)event);
}

void q_graphicswidget_on_grab_mouse_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnGrabMouseEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_qbase_grab_mouse_event(void* self, void* event) {
    QGraphicsWidget_QBaseGrabMouseEvent((QGraphicsWidget*)self, (QEvent*)event);
}

void q_graphicswidget_ungrab_mouse_event(void* self, void* event) {
    QGraphicsWidget_UngrabMouseEvent((QGraphicsWidget*)self, (QEvent*)event);
}

void q_graphicswidget_on_ungrab_mouse_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnUngrabMouseEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_qbase_ungrab_mouse_event(void* self, void* event) {
    QGraphicsWidget_QBaseUngrabMouseEvent((QGraphicsWidget*)self, (QEvent*)event);
}

void q_graphicswidget_grab_keyboard_event(void* self, void* event) {
    QGraphicsWidget_GrabKeyboardEvent((QGraphicsWidget*)self, (QEvent*)event);
}

void q_graphicswidget_on_grab_keyboard_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnGrabKeyboardEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_qbase_grab_keyboard_event(void* self, void* event) {
    QGraphicsWidget_QBaseGrabKeyboardEvent((QGraphicsWidget*)self, (QEvent*)event);
}

void q_graphicswidget_ungrab_keyboard_event(void* self, void* event) {
    QGraphicsWidget_UngrabKeyboardEvent((QGraphicsWidget*)self, (QEvent*)event);
}

void q_graphicswidget_on_ungrab_keyboard_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnUngrabKeyboardEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_qbase_ungrab_keyboard_event(void* self, void* event) {
    QGraphicsWidget_QBaseUngrabKeyboardEvent((QGraphicsWidget*)self, (QEvent*)event);
}

const char* q_graphicswidget_tr2(const char* s, const char* c) {
    libqt_string _str = QGraphicsWidget_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_graphicswidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QGraphicsWidget_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_graphicswidget_grab_shortcut2(void* self, void* sequence, int64_t context) {
    return QGraphicsWidget_GrabShortcut2((QGraphicsWidget*)self, (QKeySequence*)sequence, context);
}

void q_graphicswidget_set_shortcut_enabled2(void* self, int id, bool enabled) {
    QGraphicsWidget_SetShortcutEnabled2((QGraphicsWidget*)self, id, enabled);
}

void q_graphicswidget_set_shortcut_auto_repeat2(void* self, int id, bool enabled) {
    QGraphicsWidget_SetShortcutAutoRepeat2((QGraphicsWidget*)self, id, enabled);
}

void q_graphicswidget_set_attribute2(void* self, int64_t attribute, bool on) {
    QGraphicsWidget_SetAttribute2((QGraphicsWidget*)self, attribute, on);
}

void q_graphicswidget_grab_gesture(void* self, int64_t typeVal) {
    QGraphicsObject_GrabGesture((QGraphicsObject*)self, typeVal);
}

void q_graphicswidget_ungrab_gesture(void* self, int64_t typeVal) {
    QGraphicsObject_UngrabGesture((QGraphicsObject*)self, typeVal);
}

void q_graphicswidget_parent_changed(void* self) {
    QGraphicsObject_ParentChanged((QGraphicsObject*)self);
}

void q_graphicswidget_on_parent_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ParentChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_graphicswidget_opacity_changed(void* self) {
    QGraphicsObject_OpacityChanged((QGraphicsObject*)self);
}

void q_graphicswidget_on_opacity_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_OpacityChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_graphicswidget_visible_changed(void* self) {
    QGraphicsObject_VisibleChanged((QGraphicsObject*)self);
}

void q_graphicswidget_on_visible_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_VisibleChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_graphicswidget_enabled_changed(void* self) {
    QGraphicsObject_EnabledChanged((QGraphicsObject*)self);
}

void q_graphicswidget_on_enabled_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_EnabledChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_graphicswidget_x_changed(void* self) {
    QGraphicsObject_XChanged((QGraphicsObject*)self);
}

void q_graphicswidget_on_x_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_XChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_graphicswidget_y_changed(void* self) {
    QGraphicsObject_YChanged((QGraphicsObject*)self);
}

void q_graphicswidget_on_y_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_YChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_graphicswidget_z_changed(void* self) {
    QGraphicsObject_ZChanged((QGraphicsObject*)self);
}

void q_graphicswidget_on_z_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ZChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_graphicswidget_rotation_changed(void* self) {
    QGraphicsObject_RotationChanged((QGraphicsObject*)self);
}

void q_graphicswidget_on_rotation_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_RotationChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_graphicswidget_scale_changed(void* self) {
    QGraphicsObject_ScaleChanged((QGraphicsObject*)self);
}

void q_graphicswidget_on_scale_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ScaleChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_graphicswidget_children_changed(void* self) {
    QGraphicsObject_ChildrenChanged((QGraphicsObject*)self);
}

void q_graphicswidget_on_children_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ChildrenChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_graphicswidget_width_changed(void* self) {
    QGraphicsObject_WidthChanged((QGraphicsObject*)self);
}

void q_graphicswidget_on_width_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_WidthChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_graphicswidget_height_changed(void* self) {
    QGraphicsObject_HeightChanged((QGraphicsObject*)self);
}

void q_graphicswidget_on_height_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_HeightChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_graphicswidget_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QGraphicsObject_GrabGesture2((QGraphicsObject*)self, typeVal, flags);
}

const char* q_graphicswidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicswidget_set_object_name(void* self, char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_graphicswidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_graphicswidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_graphicswidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_graphicswidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_graphicswidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_graphicswidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_graphicswidget_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_graphicswidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_graphicswidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_graphicswidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_graphicswidget_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_graphicswidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_graphicswidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_graphicswidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_graphicswidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_graphicswidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_graphicswidget_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_graphicswidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_graphicswidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_graphicswidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_graphicswidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_graphicswidget_dynamic_property_names(void* self) {
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

QBindingStorage* q_graphicswidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_graphicswidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_graphicswidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_graphicswidget_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_graphicswidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_graphicswidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_graphicswidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_graphicswidget_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_graphicswidget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_graphicswidget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_graphicswidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_graphicswidget_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

QGraphicsScene* q_graphicswidget_scene(void* self) {
    return QGraphicsItem_Scene((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicswidget_parent_item(void* self) {
    return QGraphicsItem_ParentItem((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicswidget_top_level_item(void* self) {
    return QGraphicsItem_TopLevelItem((QGraphicsItem*)self);
}

QGraphicsObject* q_graphicswidget_parent_object(void* self) {
    return QGraphicsItem_ParentObject((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicswidget_parent_widget(void* self) {
    return QGraphicsItem_ParentWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicswidget_top_level_widget(void* self) {
    return QGraphicsItem_TopLevelWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicswidget_window(void* self) {
    return QGraphicsItem_Window((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicswidget_panel(void* self) {
    return QGraphicsItem_Panel((QGraphicsItem*)self);
}

void q_graphicswidget_set_parent_item(void* self, void* parent) {
    QGraphicsItem_SetParentItem((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

libqt_list /* of QGraphicsItem* */ q_graphicswidget_child_items(void* self) {
    libqt_list _arr = QGraphicsItem_ChildItems((QGraphicsItem*)self);
    return _arr;
}

bool q_graphicswidget_is_widget(void* self) {
    return QGraphicsItem_IsWidget((QGraphicsItem*)self);
}

bool q_graphicswidget_is_window(void* self) {
    return QGraphicsItem_IsWindow((QGraphicsItem*)self);
}

bool q_graphicswidget_is_panel(void* self) {
    return QGraphicsItem_IsPanel((QGraphicsItem*)self);
}

QGraphicsObject* q_graphicswidget_to_graphics_object(void* self) {
    return QGraphicsItem_ToGraphicsObject((QGraphicsItem*)self);
}

QGraphicsObject* q_graphicswidget_to_graphics_object2(void* self) {
    return QGraphicsItem_ToGraphicsObject2((QGraphicsItem*)self);
}

QGraphicsItemGroup* q_graphicswidget_group(void* self) {
    return QGraphicsItem_Group((QGraphicsItem*)self);
}

void q_graphicswidget_set_group(void* self, void* group) {
    QGraphicsItem_SetGroup((QGraphicsItem*)self, (QGraphicsItemGroup*)group);
}

int64_t q_graphicswidget_flags(void* self) {
    return QGraphicsItem_Flags((QGraphicsItem*)self);
}

void q_graphicswidget_set_flag(void* self, int64_t flag) {
    QGraphicsItem_SetFlag((QGraphicsItem*)self, flag);
}

void q_graphicswidget_set_flags(void* self, int64_t flags) {
    QGraphicsItem_SetFlags((QGraphicsItem*)self, flags);
}

int64_t q_graphicswidget_cache_mode(void* self) {
    return QGraphicsItem_CacheMode((QGraphicsItem*)self);
}

void q_graphicswidget_set_cache_mode(void* self, int64_t mode) {
    QGraphicsItem_SetCacheMode((QGraphicsItem*)self, mode);
}

int64_t q_graphicswidget_panel_modality(void* self) {
    return QGraphicsItem_PanelModality((QGraphicsItem*)self);
}

void q_graphicswidget_set_panel_modality(void* self, int64_t panelModality) {
    QGraphicsItem_SetPanelModality((QGraphicsItem*)self, panelModality);
}

bool q_graphicswidget_is_blocked_by_modal_panel(void* self) {
    return QGraphicsItem_IsBlockedByModalPanel((QGraphicsItem*)self);
}

const char* q_graphicswidget_tool_tip(void* self) {
    libqt_string _str = QGraphicsItem_ToolTip((QGraphicsItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicswidget_set_tool_tip(void* self, const char* toolTip) {
    QGraphicsItem_SetToolTip((QGraphicsItem*)self, qstring(toolTip));
}

QCursor* q_graphicswidget_cursor(void* self) {
    return QGraphicsItem_Cursor((QGraphicsItem*)self);
}

void q_graphicswidget_set_cursor(void* self, void* cursor) {
    QGraphicsItem_SetCursor((QGraphicsItem*)self, (QCursor*)cursor);
}

bool q_graphicswidget_has_cursor(void* self) {
    return QGraphicsItem_HasCursor((QGraphicsItem*)self);
}

void q_graphicswidget_unset_cursor(void* self) {
    QGraphicsItem_UnsetCursor((QGraphicsItem*)self);
}

bool q_graphicswidget_is_visible(void* self) {
    return QGraphicsItem_IsVisible((QGraphicsItem*)self);
}

bool q_graphicswidget_is_visible_to(void* self, void* parent) {
    return QGraphicsItem_IsVisibleTo((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

void q_graphicswidget_set_visible(void* self, bool visible) {
    QGraphicsItem_SetVisible((QGraphicsItem*)self, visible);
}

void q_graphicswidget_hide(void* self) {
    QGraphicsItem_Hide((QGraphicsItem*)self);
}

void q_graphicswidget_show(void* self) {
    QGraphicsItem_Show((QGraphicsItem*)self);
}

bool q_graphicswidget_is_enabled(void* self) {
    return QGraphicsItem_IsEnabled((QGraphicsItem*)self);
}

void q_graphicswidget_set_enabled(void* self, bool enabled) {
    QGraphicsItem_SetEnabled((QGraphicsItem*)self, enabled);
}

bool q_graphicswidget_is_selected(void* self) {
    return QGraphicsItem_IsSelected((QGraphicsItem*)self);
}

void q_graphicswidget_set_selected(void* self, bool selected) {
    QGraphicsItem_SetSelected((QGraphicsItem*)self, selected);
}

bool q_graphicswidget_accept_drops(void* self) {
    return QGraphicsItem_AcceptDrops((QGraphicsItem*)self);
}

void q_graphicswidget_set_accept_drops(void* self, bool on) {
    QGraphicsItem_SetAcceptDrops((QGraphicsItem*)self, on);
}

double q_graphicswidget_opacity(void* self) {
    return QGraphicsItem_Opacity((QGraphicsItem*)self);
}

double q_graphicswidget_effective_opacity(void* self) {
    return QGraphicsItem_EffectiveOpacity((QGraphicsItem*)self);
}

void q_graphicswidget_set_opacity(void* self, double opacity) {
    QGraphicsItem_SetOpacity((QGraphicsItem*)self, opacity);
}

QGraphicsEffect* q_graphicswidget_graphics_effect(void* self) {
    return QGraphicsItem_GraphicsEffect((QGraphicsItem*)self);
}

void q_graphicswidget_set_graphics_effect(void* self, void* effect) {
    QGraphicsItem_SetGraphicsEffect((QGraphicsItem*)self, (QGraphicsEffect*)effect);
}

int64_t q_graphicswidget_accepted_mouse_buttons(void* self) {
    return QGraphicsItem_AcceptedMouseButtons((QGraphicsItem*)self);
}

void q_graphicswidget_set_accepted_mouse_buttons(void* self, int64_t buttons) {
    QGraphicsItem_SetAcceptedMouseButtons((QGraphicsItem*)self, buttons);
}

bool q_graphicswidget_accept_hover_events(void* self) {
    return QGraphicsItem_AcceptHoverEvents((QGraphicsItem*)self);
}

void q_graphicswidget_set_accept_hover_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptHoverEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicswidget_accept_touch_events(void* self) {
    return QGraphicsItem_AcceptTouchEvents((QGraphicsItem*)self);
}

void q_graphicswidget_set_accept_touch_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptTouchEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicswidget_filters_child_events(void* self) {
    return QGraphicsItem_FiltersChildEvents((QGraphicsItem*)self);
}

void q_graphicswidget_set_filters_child_events(void* self, bool enabled) {
    QGraphicsItem_SetFiltersChildEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicswidget_handles_child_events(void* self) {
    return QGraphicsItem_HandlesChildEvents((QGraphicsItem*)self);
}

void q_graphicswidget_set_handles_child_events(void* self, bool enabled) {
    QGraphicsItem_SetHandlesChildEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicswidget_is_active(void* self) {
    return QGraphicsItem_IsActive((QGraphicsItem*)self);
}

void q_graphicswidget_set_active(void* self, bool active) {
    QGraphicsItem_SetActive((QGraphicsItem*)self, active);
}

bool q_graphicswidget_has_focus(void* self) {
    return QGraphicsItem_HasFocus((QGraphicsItem*)self);
}

void q_graphicswidget_set_focus(void* self) {
    QGraphicsItem_SetFocus((QGraphicsItem*)self);
}

void q_graphicswidget_clear_focus(void* self) {
    QGraphicsItem_ClearFocus((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicswidget_focus_proxy(void* self) {
    return QGraphicsItem_FocusProxy((QGraphicsItem*)self);
}

void q_graphicswidget_set_focus_proxy(void* self, void* item) {
    QGraphicsItem_SetFocusProxy((QGraphicsItem*)self, (QGraphicsItem*)item);
}

QGraphicsItem* q_graphicswidget_focus_item(void* self) {
    return QGraphicsItem_FocusItem((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicswidget_focus_scope_item(void* self) {
    return QGraphicsItem_FocusScopeItem((QGraphicsItem*)self);
}

void q_graphicswidget_grab_mouse(void* self) {
    QGraphicsItem_GrabMouse((QGraphicsItem*)self);
}

void q_graphicswidget_ungrab_mouse(void* self) {
    QGraphicsItem_UngrabMouse((QGraphicsItem*)self);
}

void q_graphicswidget_grab_keyboard(void* self) {
    QGraphicsItem_GrabKeyboard((QGraphicsItem*)self);
}

void q_graphicswidget_ungrab_keyboard(void* self) {
    QGraphicsItem_UngrabKeyboard((QGraphicsItem*)self);
}

QPointF* q_graphicswidget_pos(void* self) {
    return QGraphicsItem_Pos((QGraphicsItem*)self);
}

double q_graphicswidget_x(void* self) {
    return QGraphicsItem_X((QGraphicsItem*)self);
}

void q_graphicswidget_set_x(void* self, double x) {
    QGraphicsItem_SetX((QGraphicsItem*)self, x);
}

double q_graphicswidget_y(void* self) {
    return QGraphicsItem_Y((QGraphicsItem*)self);
}

void q_graphicswidget_set_y(void* self, double y) {
    QGraphicsItem_SetY((QGraphicsItem*)self, y);
}

QPointF* q_graphicswidget_scene_pos(void* self) {
    return QGraphicsItem_ScenePos((QGraphicsItem*)self);
}

void q_graphicswidget_set_pos(void* self, void* pos) {
    QGraphicsItem_SetPos((QGraphicsItem*)self, (QPointF*)pos);
}

void q_graphicswidget_set_pos2(void* self, double x, double y) {
    QGraphicsItem_SetPos2((QGraphicsItem*)self, x, y);
}

void q_graphicswidget_move_by(void* self, double dx, double dy) {
    QGraphicsItem_MoveBy((QGraphicsItem*)self, dx, dy);
}

void q_graphicswidget_ensure_visible(void* self) {
    QGraphicsItem_EnsureVisible((QGraphicsItem*)self);
}

void q_graphicswidget_ensure_visible2(void* self, double x, double y, double w, double h) {
    QGraphicsItem_EnsureVisible2((QGraphicsItem*)self, x, y, w, h);
}

QTransform* q_graphicswidget_transform(void* self) {
    return QGraphicsItem_Transform((QGraphicsItem*)self);
}

QTransform* q_graphicswidget_scene_transform(void* self) {
    return QGraphicsItem_SceneTransform((QGraphicsItem*)self);
}

QTransform* q_graphicswidget_device_transform(void* self, void* viewportTransform) {
    return QGraphicsItem_DeviceTransform((QGraphicsItem*)self, (QTransform*)viewportTransform);
}

QTransform* q_graphicswidget_item_transform(void* self, void* other) {
    return QGraphicsItem_ItemTransform((QGraphicsItem*)self, (QGraphicsItem*)other);
}

void q_graphicswidget_set_transform(void* self, void* matrix) {
    QGraphicsItem_SetTransform((QGraphicsItem*)self, (QTransform*)matrix);
}

void q_graphicswidget_reset_transform(void* self) {
    QGraphicsItem_ResetTransform((QGraphicsItem*)self);
}

void q_graphicswidget_set_rotation(void* self, double angle) {
    QGraphicsItem_SetRotation((QGraphicsItem*)self, angle);
}

double q_graphicswidget_rotation(void* self) {
    return QGraphicsItem_Rotation((QGraphicsItem*)self);
}

void q_graphicswidget_set_scale(void* self, double scale) {
    QGraphicsItem_SetScale((QGraphicsItem*)self, scale);
}

double q_graphicswidget_scale(void* self) {
    return QGraphicsItem_Scale((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsTransform* */ q_graphicswidget_transformations(void* self) {
    libqt_list _arr = QGraphicsItem_Transformations((QGraphicsItem*)self);
    return _arr;
}

void q_graphicswidget_set_transformations(void* self, void* transformations[]) {
    QGraphicsTransform** transformations_arr = (QGraphicsTransform**)transformations;
    size_t transformations_len = 0;
    while (transformations_arr[transformations_len] != NULL) {
        transformations_len++;
    }
    libqt_list transformations_list = {
        .len = transformations_len,
        .data = {(QGraphicsTransform*)transformations},
    };
    QGraphicsItem_SetTransformations((QGraphicsItem*)self, transformations_list);
}

QPointF* q_graphicswidget_transform_origin_point(void* self) {
    return QGraphicsItem_TransformOriginPoint((QGraphicsItem*)self);
}

void q_graphicswidget_set_transform_origin_point(void* self, void* origin) {
    QGraphicsItem_SetTransformOriginPoint((QGraphicsItem*)self, (QPointF*)origin);
}

void q_graphicswidget_set_transform_origin_point2(void* self, double ax, double ay) {
    QGraphicsItem_SetTransformOriginPoint2((QGraphicsItem*)self, ax, ay);
}

double q_graphicswidget_z_value(void* self) {
    return QGraphicsItem_ZValue((QGraphicsItem*)self);
}

void q_graphicswidget_set_z_value(void* self, double z) {
    QGraphicsItem_SetZValue((QGraphicsItem*)self, z);
}

void q_graphicswidget_stack_before(void* self, void* sibling) {
    QGraphicsItem_StackBefore((QGraphicsItem*)self, (QGraphicsItem*)sibling);
}

QRectF* q_graphicswidget_children_bounding_rect(void* self) {
    return QGraphicsItem_ChildrenBoundingRect((QGraphicsItem*)self);
}

QRectF* q_graphicswidget_scene_bounding_rect(void* self) {
    return QGraphicsItem_SceneBoundingRect((QGraphicsItem*)self);
}

bool q_graphicswidget_is_clipped(void* self) {
    return QGraphicsItem_IsClipped((QGraphicsItem*)self);
}

QPainterPath* q_graphicswidget_clip_path(void* self) {
    return QGraphicsItem_ClipPath((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsItem* */ q_graphicswidget_colliding_items(void* self) {
    libqt_list _arr = QGraphicsItem_CollidingItems((QGraphicsItem*)self);
    return _arr;
}

bool q_graphicswidget_is_obscured(void* self) {
    return QGraphicsItem_IsObscured((QGraphicsItem*)self);
}

bool q_graphicswidget_is_obscured2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_IsObscured2((QGraphicsItem*)self, x, y, w, h);
}

QRegion* q_graphicswidget_bounding_region(void* self, void* itemToDeviceTransform) {
    return QGraphicsItem_BoundingRegion((QGraphicsItem*)self, (QTransform*)itemToDeviceTransform);
}

double q_graphicswidget_bounding_region_granularity(void* self) {
    return QGraphicsItem_BoundingRegionGranularity((QGraphicsItem*)self);
}

void q_graphicswidget_set_bounding_region_granularity(void* self, double granularity) {
    QGraphicsItem_SetBoundingRegionGranularity((QGraphicsItem*)self, granularity);
}

void q_graphicswidget_update(void* self) {
    QGraphicsItem_Update((QGraphicsItem*)self);
}

void q_graphicswidget_update2(void* self, double x, double y, double width, double height) {
    QGraphicsItem_Update2((QGraphicsItem*)self, x, y, width, height);
}

void q_graphicswidget_scroll(void* self, double dx, double dy) {
    QGraphicsItem_Scroll((QGraphicsItem*)self, dx, dy);
}

QPointF* q_graphicswidget_map_to_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicswidget_map_to_parent(void* self, void* point) {
    return QGraphicsItem_MapToParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_graphicswidget_map_to_scene(void* self, void* point) {
    return QGraphicsItem_MapToScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_graphicswidget_map_rect_to_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicswidget_map_rect_to_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectToParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_graphicswidget_map_rect_to_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectToScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_graphicswidget_map_to_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapToItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicswidget_map_to_parent_with_path(void* self, void* path) {
    return QGraphicsItem_MapToParentWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_graphicswidget_map_to_scene_with_path(void* self, void* path) {
    return QGraphicsItem_MapToSceneWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_graphicswidget_map_from_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicswidget_map_from_parent(void* self, void* point) {
    return QGraphicsItem_MapFromParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_graphicswidget_map_from_scene(void* self, void* point) {
    return QGraphicsItem_MapFromScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_graphicswidget_map_rect_from_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicswidget_map_rect_from_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectFromParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_graphicswidget_map_rect_from_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectFromScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_graphicswidget_map_from_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapFromItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicswidget_map_from_parent_with_path(void* self, void* path) {
    return QGraphicsItem_MapFromParentWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_graphicswidget_map_from_scene_with_path(void* self, void* path) {
    return QGraphicsItem_MapFromSceneWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_graphicswidget_map_to_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapToItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicswidget_map_to_parent2(void* self, double x, double y) {
    return QGraphicsItem_MapToParent2((QGraphicsItem*)self, x, y);
}

QPointF* q_graphicswidget_map_to_scene2(void* self, double x, double y) {
    return QGraphicsItem_MapToScene2((QGraphicsItem*)self, x, y);
}

QRectF* q_graphicswidget_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicswidget_map_rect_to_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_graphicswidget_map_rect_to_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToScene2((QGraphicsItem*)self, x, y, w, h);
}

QPointF* q_graphicswidget_map_from_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapFromItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicswidget_map_from_parent2(void* self, double x, double y) {
    return QGraphicsItem_MapFromParent2((QGraphicsItem*)self, x, y);
}

QPointF* q_graphicswidget_map_from_scene2(void* self, double x, double y) {
    return QGraphicsItem_MapFromScene2((QGraphicsItem*)self, x, y);
}

QRectF* q_graphicswidget_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicswidget_map_rect_from_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_graphicswidget_map_rect_from_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromScene2((QGraphicsItem*)self, x, y, w, h);
}

bool q_graphicswidget_is_ancestor_of(void* self, void* child) {
    return QGraphicsItem_IsAncestorOf((QGraphicsItem*)self, (QGraphicsItem*)child);
}

QGraphicsItem* q_graphicswidget_common_ancestor_item(void* self, void* other) {
    return QGraphicsItem_CommonAncestorItem((QGraphicsItem*)self, (QGraphicsItem*)other);
}

bool q_graphicswidget_is_under_mouse(void* self) {
    return QGraphicsItem_IsUnderMouse((QGraphicsItem*)self);
}

QVariant* q_graphicswidget_data(void* self, int key) {
    return QGraphicsItem_Data((QGraphicsItem*)self, key);
}

void q_graphicswidget_set_data(void* self, int key, void* value) {
    QGraphicsItem_SetData((QGraphicsItem*)self, key, (QVariant*)value);
}

int64_t q_graphicswidget_input_method_hints(void* self) {
    return QGraphicsItem_InputMethodHints((QGraphicsItem*)self);
}

void q_graphicswidget_set_input_method_hints(void* self, int64_t hints) {
    QGraphicsItem_SetInputMethodHints((QGraphicsItem*)self, hints);
}

void q_graphicswidget_install_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_InstallSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_graphicswidget_remove_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_RemoveSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_graphicswidget_set_flag2(void* self, int64_t flag, bool enabled) {
    QGraphicsItem_SetFlag2((QGraphicsItem*)self, flag, enabled);
}

void q_graphicswidget_set_cache_mode2(void* self, int64_t mode, void* cacheSize) {
    QGraphicsItem_SetCacheMode2((QGraphicsItem*)self, mode, (QSize*)cacheSize);
}

void q_graphicswidget_set_focus1(void* self, int64_t focusReason) {
    QGraphicsItem_SetFocus1((QGraphicsItem*)self, focusReason);
}

void q_graphicswidget_ensure_visible1(void* self, void* rect) {
    QGraphicsItem_EnsureVisible1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicswidget_ensure_visible22(void* self, void* rect, int xmargin) {
    QGraphicsItem_EnsureVisible22((QGraphicsItem*)self, (QRectF*)rect, xmargin);
}

void q_graphicswidget_ensure_visible3(void* self, void* rect, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible3((QGraphicsItem*)self, (QRectF*)rect, xmargin, ymargin);
}

void q_graphicswidget_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin) {
    QGraphicsItem_EnsureVisible5((QGraphicsItem*)self, x, y, w, h, xmargin);
}

void q_graphicswidget_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible6((QGraphicsItem*)self, x, y, w, h, xmargin, ymargin);
}

QTransform* q_graphicswidget_item_transform2(void* self, void* other, bool* ok) {
    return QGraphicsItem_ItemTransform2((QGraphicsItem*)self, (QGraphicsItem*)other, (bool*)ok);
}

void q_graphicswidget_set_transform2(void* self, void* matrix, bool combine) {
    QGraphicsItem_SetTransform2((QGraphicsItem*)self, (QTransform*)matrix, combine);
}

libqt_list /* of QGraphicsItem* */ q_graphicswidget_colliding_items1(void* self, int64_t mode) {
    libqt_list _arr = QGraphicsItem_CollidingItems1((QGraphicsItem*)self, mode);
    return _arr;
}

bool q_graphicswidget_is_obscured1(void* self, void* rect) {
    return QGraphicsItem_IsObscured1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicswidget_update1(void* self, void* rect) {
    QGraphicsItem_Update1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicswidget_scroll3(void* self, double dx, double dy, void* rect) {
    QGraphicsItem_Scroll3((QGraphicsItem*)self, dx, dy, (QRectF*)rect);
}

void q_graphicswidget_set_size_policy(void* self, void* policy) {
    QGraphicsLayoutItem_SetSizePolicy((QGraphicsLayoutItem*)self, (QSizePolicy*)policy);
}

void q_graphicswidget_set_size_policy2(void* self, int64_t hPolicy, int64_t vPolicy) {
    QGraphicsLayoutItem_SetSizePolicy2((QGraphicsLayoutItem*)self, hPolicy, vPolicy);
}

QSizePolicy* q_graphicswidget_size_policy(void* self) {
    return QGraphicsLayoutItem_SizePolicy((QGraphicsLayoutItem*)self);
}

void q_graphicswidget_set_minimum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMinimumSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

void q_graphicswidget_set_minimum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMinimumSize2((QGraphicsLayoutItem*)self, w, h);
}

QSizeF* q_graphicswidget_minimum_size(void* self) {
    return QGraphicsLayoutItem_MinimumSize((QGraphicsLayoutItem*)self);
}

void q_graphicswidget_set_minimum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMinimumWidth((QGraphicsLayoutItem*)self, width);
}

double q_graphicswidget_minimum_width(void* self) {
    return QGraphicsLayoutItem_MinimumWidth((QGraphicsLayoutItem*)self);
}

void q_graphicswidget_set_minimum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMinimumHeight((QGraphicsLayoutItem*)self, height);
}

double q_graphicswidget_minimum_height(void* self) {
    return QGraphicsLayoutItem_MinimumHeight((QGraphicsLayoutItem*)self);
}

void q_graphicswidget_set_preferred_size(void* self, void* size) {
    QGraphicsLayoutItem_SetPreferredSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

void q_graphicswidget_set_preferred_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetPreferredSize2((QGraphicsLayoutItem*)self, w, h);
}

QSizeF* q_graphicswidget_preferred_size(void* self) {
    return QGraphicsLayoutItem_PreferredSize((QGraphicsLayoutItem*)self);
}

void q_graphicswidget_set_preferred_width(void* self, double width) {
    QGraphicsLayoutItem_SetPreferredWidth((QGraphicsLayoutItem*)self, width);
}

double q_graphicswidget_preferred_width(void* self) {
    return QGraphicsLayoutItem_PreferredWidth((QGraphicsLayoutItem*)self);
}

void q_graphicswidget_set_preferred_height(void* self, double height) {
    QGraphicsLayoutItem_SetPreferredHeight((QGraphicsLayoutItem*)self, height);
}

double q_graphicswidget_preferred_height(void* self) {
    return QGraphicsLayoutItem_PreferredHeight((QGraphicsLayoutItem*)self);
}

void q_graphicswidget_set_maximum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMaximumSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

void q_graphicswidget_set_maximum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMaximumSize2((QGraphicsLayoutItem*)self, w, h);
}

QSizeF* q_graphicswidget_maximum_size(void* self) {
    return QGraphicsLayoutItem_MaximumSize((QGraphicsLayoutItem*)self);
}

void q_graphicswidget_set_maximum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMaximumWidth((QGraphicsLayoutItem*)self, width);
}

double q_graphicswidget_maximum_width(void* self) {
    return QGraphicsLayoutItem_MaximumWidth((QGraphicsLayoutItem*)self);
}

void q_graphicswidget_set_maximum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMaximumHeight((QGraphicsLayoutItem*)self, height);
}

double q_graphicswidget_maximum_height(void* self) {
    return QGraphicsLayoutItem_MaximumHeight((QGraphicsLayoutItem*)self);
}

QRectF* q_graphicswidget_geometry(void* self) {
    return QGraphicsLayoutItem_Geometry((QGraphicsLayoutItem*)self);
}

QRectF* q_graphicswidget_contents_rect(void* self) {
    return QGraphicsLayoutItem_ContentsRect((QGraphicsLayoutItem*)self);
}

QSizeF* q_graphicswidget_effective_size_hint(void* self, int64_t which) {
    return QGraphicsLayoutItem_EffectiveSizeHint((QGraphicsLayoutItem*)self, which);
}

QGraphicsLayoutItem* q_graphicswidget_parent_layout_item(void* self) {
    return QGraphicsLayoutItem_ParentLayoutItem((QGraphicsLayoutItem*)self);
}

void q_graphicswidget_set_parent_layout_item(void* self, void* parent) {
    QGraphicsLayoutItem_SetParentLayoutItem((QGraphicsLayoutItem*)self, (QGraphicsLayoutItem*)parent);
}

bool q_graphicswidget_is_layout(void* self) {
    return QGraphicsLayoutItem_IsLayout((QGraphicsLayoutItem*)self);
}

QGraphicsItem* q_graphicswidget_graphics_item(void* self) {
    return QGraphicsLayoutItem_GraphicsItem((QGraphicsLayoutItem*)self);
}

bool q_graphicswidget_owned_by_layout(void* self) {
    return QGraphicsLayoutItem_OwnedByLayout((QGraphicsLayoutItem*)self);
}

void q_graphicswidget_set_size_policy3(void* self, int64_t hPolicy, int64_t vPolicy, int64_t controlType) {
    QGraphicsLayoutItem_SetSizePolicy3((QGraphicsLayoutItem*)self, hPolicy, vPolicy, controlType);
}

QSizeF* q_graphicswidget_effective_size_hint2(void* self, int64_t which, void* constraint) {
    return QGraphicsLayoutItem_EffectiveSizeHint2((QGraphicsLayoutItem*)self, which, (QSizeF*)constraint);
}

bool q_graphicswidget_event_filter(void* self, void* watched, void* event) {
    return QGraphicsWidget_EventFilter((QGraphicsWidget*)self, (QObject*)watched, (QEvent*)event);
}

bool q_graphicswidget_qbase_event_filter(void* self, void* watched, void* event) {
    return QGraphicsWidget_QBaseEventFilter((QGraphicsWidget*)self, (QObject*)watched, (QEvent*)event);
}

void q_graphicswidget_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGraphicsWidget_OnEventFilter((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_timer_event(void* self, void* event) {
    QGraphicsWidget_TimerEvent((QGraphicsWidget*)self, (QTimerEvent*)event);
}

void q_graphicswidget_qbase_timer_event(void* self, void* event) {
    QGraphicsWidget_QBaseTimerEvent((QGraphicsWidget*)self, (QTimerEvent*)event);
}

void q_graphicswidget_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnTimerEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_child_event(void* self, void* event) {
    QGraphicsWidget_ChildEvent((QGraphicsWidget*)self, (QChildEvent*)event);
}

void q_graphicswidget_qbase_child_event(void* self, void* event) {
    QGraphicsWidget_QBaseChildEvent((QGraphicsWidget*)self, (QChildEvent*)event);
}

void q_graphicswidget_on_child_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnChildEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_custom_event(void* self, void* event) {
    QGraphicsWidget_CustomEvent((QGraphicsWidget*)self, (QEvent*)event);
}

void q_graphicswidget_qbase_custom_event(void* self, void* event) {
    QGraphicsWidget_QBaseCustomEvent((QGraphicsWidget*)self, (QEvent*)event);
}

void q_graphicswidget_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnCustomEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_connect_notify(void* self, void* signal) {
    QGraphicsWidget_ConnectNotify((QGraphicsWidget*)self, (QMetaMethod*)signal);
}

void q_graphicswidget_qbase_connect_notify(void* self, void* signal) {
    QGraphicsWidget_QBaseConnectNotify((QGraphicsWidget*)self, (QMetaMethod*)signal);
}

void q_graphicswidget_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnConnectNotify((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_disconnect_notify(void* self, void* signal) {
    QGraphicsWidget_DisconnectNotify((QGraphicsWidget*)self, (QMetaMethod*)signal);
}

void q_graphicswidget_qbase_disconnect_notify(void* self, void* signal) {
    QGraphicsWidget_QBaseDisconnectNotify((QGraphicsWidget*)self, (QMetaMethod*)signal);
}

void q_graphicswidget_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnDisconnectNotify((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_advance(void* self, int phase) {
    QGraphicsWidget_Advance((QGraphicsWidget*)self, phase);
}

void q_graphicswidget_qbase_advance(void* self, int phase) {
    QGraphicsWidget_QBaseAdvance((QGraphicsWidget*)self, phase);
}

void q_graphicswidget_on_advance(void* self, void (*slot)(void*, int)) {
    QGraphicsWidget_OnAdvance((QGraphicsWidget*)self, (intptr_t)slot);
}

bool q_graphicswidget_contains(void* self, void* point) {
    return QGraphicsWidget_Contains((QGraphicsWidget*)self, (QPointF*)point);
}

bool q_graphicswidget_qbase_contains(void* self, void* point) {
    return QGraphicsWidget_QBaseContains((QGraphicsWidget*)self, (QPointF*)point);
}

void q_graphicswidget_on_contains(void* self, bool (*slot)(void*, void*)) {
    QGraphicsWidget_OnContains((QGraphicsWidget*)self, (intptr_t)slot);
}

bool q_graphicswidget_collides_with_item(void* self, void* other, int64_t mode) {
    return QGraphicsWidget_CollidesWithItem((QGraphicsWidget*)self, (QGraphicsItem*)other, mode);
}

bool q_graphicswidget_qbase_collides_with_item(void* self, void* other, int64_t mode) {
    return QGraphicsWidget_QBaseCollidesWithItem((QGraphicsWidget*)self, (QGraphicsItem*)other, mode);
}

void q_graphicswidget_on_collides_with_item(void* self, bool (*slot)(void*, void*, int64_t)) {
    QGraphicsWidget_OnCollidesWithItem((QGraphicsWidget*)self, (intptr_t)slot);
}

bool q_graphicswidget_collides_with_path(void* self, void* path, int64_t mode) {
    return QGraphicsWidget_CollidesWithPath((QGraphicsWidget*)self, (QPainterPath*)path, mode);
}

bool q_graphicswidget_qbase_collides_with_path(void* self, void* path, int64_t mode) {
    return QGraphicsWidget_QBaseCollidesWithPath((QGraphicsWidget*)self, (QPainterPath*)path, mode);
}

void q_graphicswidget_on_collides_with_path(void* self, bool (*slot)(void*, void*, int64_t)) {
    QGraphicsWidget_OnCollidesWithPath((QGraphicsWidget*)self, (intptr_t)slot);
}

bool q_graphicswidget_is_obscured_by(void* self, void* item) {
    return QGraphicsWidget_IsObscuredBy((QGraphicsWidget*)self, (QGraphicsItem*)item);
}

bool q_graphicswidget_qbase_is_obscured_by(void* self, void* item) {
    return QGraphicsWidget_QBaseIsObscuredBy((QGraphicsWidget*)self, (QGraphicsItem*)item);
}

void q_graphicswidget_on_is_obscured_by(void* self, bool (*slot)(void*, void*)) {
    QGraphicsWidget_OnIsObscuredBy((QGraphicsWidget*)self, (intptr_t)slot);
}

QPainterPath* q_graphicswidget_opaque_area(void* self) {
    return QGraphicsWidget_OpaqueArea((QGraphicsWidget*)self);
}

QPainterPath* q_graphicswidget_qbase_opaque_area(void* self) {
    return QGraphicsWidget_QBaseOpaqueArea((QGraphicsWidget*)self);
}

void q_graphicswidget_on_opaque_area(void* self, QPainterPath* (*slot)()) {
    QGraphicsWidget_OnOpaqueArea((QGraphicsWidget*)self, (intptr_t)slot);
}

bool q_graphicswidget_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsWidget_SceneEventFilter((QGraphicsWidget*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

bool q_graphicswidget_qbase_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsWidget_QBaseSceneEventFilter((QGraphicsWidget*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

void q_graphicswidget_on_scene_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGraphicsWidget_OnSceneEventFilter((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_context_menu_event(void* self, void* event) {
    QGraphicsWidget_ContextMenuEvent((QGraphicsWidget*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicswidget_qbase_context_menu_event(void* self, void* event) {
    QGraphicsWidget_QBaseContextMenuEvent((QGraphicsWidget*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicswidget_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnContextMenuEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_drag_enter_event(void* self, void* event) {
    QGraphicsWidget_DragEnterEvent((QGraphicsWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicswidget_qbase_drag_enter_event(void* self, void* event) {
    QGraphicsWidget_QBaseDragEnterEvent((QGraphicsWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicswidget_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnDragEnterEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_drag_leave_event(void* self, void* event) {
    QGraphicsWidget_DragLeaveEvent((QGraphicsWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicswidget_qbase_drag_leave_event(void* self, void* event) {
    QGraphicsWidget_QBaseDragLeaveEvent((QGraphicsWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicswidget_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnDragLeaveEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_drag_move_event(void* self, void* event) {
    QGraphicsWidget_DragMoveEvent((QGraphicsWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicswidget_qbase_drag_move_event(void* self, void* event) {
    QGraphicsWidget_QBaseDragMoveEvent((QGraphicsWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicswidget_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnDragMoveEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_drop_event(void* self, void* event) {
    QGraphicsWidget_DropEvent((QGraphicsWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicswidget_qbase_drop_event(void* self, void* event) {
    QGraphicsWidget_QBaseDropEvent((QGraphicsWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicswidget_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnDropEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_hover_enter_event(void* self, void* event) {
    QGraphicsWidget_HoverEnterEvent((QGraphicsWidget*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicswidget_qbase_hover_enter_event(void* self, void* event) {
    QGraphicsWidget_QBaseHoverEnterEvent((QGraphicsWidget*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicswidget_on_hover_enter_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnHoverEnterEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_key_press_event(void* self, void* event) {
    QGraphicsWidget_KeyPressEvent((QGraphicsWidget*)self, (QKeyEvent*)event);
}

void q_graphicswidget_qbase_key_press_event(void* self, void* event) {
    QGraphicsWidget_QBaseKeyPressEvent((QGraphicsWidget*)self, (QKeyEvent*)event);
}

void q_graphicswidget_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnKeyPressEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_key_release_event(void* self, void* event) {
    QGraphicsWidget_KeyReleaseEvent((QGraphicsWidget*)self, (QKeyEvent*)event);
}

void q_graphicswidget_qbase_key_release_event(void* self, void* event) {
    QGraphicsWidget_QBaseKeyReleaseEvent((QGraphicsWidget*)self, (QKeyEvent*)event);
}

void q_graphicswidget_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnKeyReleaseEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_mouse_press_event(void* self, void* event) {
    QGraphicsWidget_MousePressEvent((QGraphicsWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicswidget_qbase_mouse_press_event(void* self, void* event) {
    QGraphicsWidget_QBaseMousePressEvent((QGraphicsWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicswidget_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnMousePressEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_mouse_move_event(void* self, void* event) {
    QGraphicsWidget_MouseMoveEvent((QGraphicsWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicswidget_qbase_mouse_move_event(void* self, void* event) {
    QGraphicsWidget_QBaseMouseMoveEvent((QGraphicsWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicswidget_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnMouseMoveEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_mouse_release_event(void* self, void* event) {
    QGraphicsWidget_MouseReleaseEvent((QGraphicsWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicswidget_qbase_mouse_release_event(void* self, void* event) {
    QGraphicsWidget_QBaseMouseReleaseEvent((QGraphicsWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicswidget_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnMouseReleaseEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_mouse_double_click_event(void* self, void* event) {
    QGraphicsWidget_MouseDoubleClickEvent((QGraphicsWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicswidget_qbase_mouse_double_click_event(void* self, void* event) {
    QGraphicsWidget_QBaseMouseDoubleClickEvent((QGraphicsWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicswidget_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnMouseDoubleClickEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_wheel_event(void* self, void* event) {
    QGraphicsWidget_WheelEvent((QGraphicsWidget*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicswidget_qbase_wheel_event(void* self, void* event) {
    QGraphicsWidget_QBaseWheelEvent((QGraphicsWidget*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicswidget_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnWheelEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_input_method_event(void* self, void* event) {
    QGraphicsWidget_InputMethodEvent((QGraphicsWidget*)self, (QInputMethodEvent*)event);
}

void q_graphicswidget_qbase_input_method_event(void* self, void* event) {
    QGraphicsWidget_QBaseInputMethodEvent((QGraphicsWidget*)self, (QInputMethodEvent*)event);
}

void q_graphicswidget_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnInputMethodEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

QVariant* q_graphicswidget_input_method_query(void* self, int64_t query) {
    return QGraphicsWidget_InputMethodQuery((QGraphicsWidget*)self, query);
}

QVariant* q_graphicswidget_qbase_input_method_query(void* self, int64_t query) {
    return QGraphicsWidget_QBaseInputMethodQuery((QGraphicsWidget*)self, query);
}

void q_graphicswidget_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QGraphicsWidget_OnInputMethodQuery((QGraphicsWidget*)self, (intptr_t)slot);
}

bool q_graphicswidget_supports_extension(void* self, int64_t extension) {
    return QGraphicsWidget_SupportsExtension((QGraphicsWidget*)self, extension);
}

bool q_graphicswidget_qbase_supports_extension(void* self, int64_t extension) {
    return QGraphicsWidget_QBaseSupportsExtension((QGraphicsWidget*)self, extension);
}

void q_graphicswidget_on_supports_extension(void* self, bool (*slot)(void*, int64_t)) {
    QGraphicsWidget_OnSupportsExtension((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_set_extension(void* self, int64_t extension, void* variant) {
    QGraphicsWidget_SetExtension((QGraphicsWidget*)self, extension, (QVariant*)variant);
}

void q_graphicswidget_qbase_set_extension(void* self, int64_t extension, void* variant) {
    QGraphicsWidget_QBaseSetExtension((QGraphicsWidget*)self, extension, (QVariant*)variant);
}

void q_graphicswidget_on_set_extension(void* self, void (*slot)(void*, int64_t, void*)) {
    QGraphicsWidget_OnSetExtension((QGraphicsWidget*)self, (intptr_t)slot);
}

QVariant* q_graphicswidget_extension(void* self, void* variant) {
    return QGraphicsWidget_Extension((QGraphicsWidget*)self, (QVariant*)variant);
}

QVariant* q_graphicswidget_qbase_extension(void* self, void* variant) {
    return QGraphicsWidget_QBaseExtension((QGraphicsWidget*)self, (QVariant*)variant);
}

void q_graphicswidget_on_extension(void* self, QVariant* (*slot)(void*, void*)) {
    QGraphicsWidget_OnExtension((QGraphicsWidget*)self, (intptr_t)slot);
}

bool q_graphicswidget_is_empty(void* self) {
    return QGraphicsWidget_IsEmpty((QGraphicsWidget*)self);
}

bool q_graphicswidget_qbase_is_empty(void* self) {
    return QGraphicsWidget_QBaseIsEmpty((QGraphicsWidget*)self);
}

void q_graphicswidget_on_is_empty(void* self, bool (*slot)()) {
    QGraphicsWidget_OnIsEmpty((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_update_micro_focus(void* self) {
    QGraphicsWidget_UpdateMicroFocus((QGraphicsWidget*)self);
}

void q_graphicswidget_qbase_update_micro_focus(void* self) {
    QGraphicsWidget_QBaseUpdateMicroFocus((QGraphicsWidget*)self);
}

void q_graphicswidget_on_update_micro_focus(void* self, void (*slot)()) {
    QGraphicsWidget_OnUpdateMicroFocus((QGraphicsWidget*)self, (intptr_t)slot);
}

QObject* q_graphicswidget_sender(void* self) {
    return QGraphicsWidget_Sender((QGraphicsWidget*)self);
}

QObject* q_graphicswidget_qbase_sender(void* self) {
    return QGraphicsWidget_QBaseSender((QGraphicsWidget*)self);
}

void q_graphicswidget_on_sender(void* self, QObject* (*slot)()) {
    QGraphicsWidget_OnSender((QGraphicsWidget*)self, (intptr_t)slot);
}

int32_t q_graphicswidget_sender_signal_index(void* self) {
    return QGraphicsWidget_SenderSignalIndex((QGraphicsWidget*)self);
}

int32_t q_graphicswidget_qbase_sender_signal_index(void* self) {
    return QGraphicsWidget_QBaseSenderSignalIndex((QGraphicsWidget*)self);
}

void q_graphicswidget_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QGraphicsWidget_OnSenderSignalIndex((QGraphicsWidget*)self, (intptr_t)slot);
}

int32_t q_graphicswidget_receivers(void* self, const char* signal) {
    return QGraphicsWidget_Receivers((QGraphicsWidget*)self, signal);
}

int32_t q_graphicswidget_qbase_receivers(void* self, const char* signal) {
    return QGraphicsWidget_QBaseReceivers((QGraphicsWidget*)self, signal);
}

void q_graphicswidget_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QGraphicsWidget_OnReceivers((QGraphicsWidget*)self, (intptr_t)slot);
}

bool q_graphicswidget_is_signal_connected(void* self, void* signal) {
    return QGraphicsWidget_IsSignalConnected((QGraphicsWidget*)self, (QMetaMethod*)signal);
}

bool q_graphicswidget_qbase_is_signal_connected(void* self, void* signal) {
    return QGraphicsWidget_QBaseIsSignalConnected((QGraphicsWidget*)self, (QMetaMethod*)signal);
}

void q_graphicswidget_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QGraphicsWidget_OnIsSignalConnected((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_add_to_index(void* self) {
    QGraphicsWidget_AddToIndex((QGraphicsWidget*)self);
}

void q_graphicswidget_qbase_add_to_index(void* self) {
    QGraphicsWidget_QBaseAddToIndex((QGraphicsWidget*)self);
}

void q_graphicswidget_on_add_to_index(void* self, void (*slot)()) {
    QGraphicsWidget_OnAddToIndex((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_remove_from_index(void* self) {
    QGraphicsWidget_RemoveFromIndex((QGraphicsWidget*)self);
}

void q_graphicswidget_qbase_remove_from_index(void* self) {
    QGraphicsWidget_QBaseRemoveFromIndex((QGraphicsWidget*)self);
}

void q_graphicswidget_on_remove_from_index(void* self, void (*slot)()) {
    QGraphicsWidget_OnRemoveFromIndex((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_prepare_geometry_change(void* self) {
    QGraphicsWidget_PrepareGeometryChange((QGraphicsWidget*)self);
}

void q_graphicswidget_qbase_prepare_geometry_change(void* self) {
    QGraphicsWidget_QBasePrepareGeometryChange((QGraphicsWidget*)self);
}

void q_graphicswidget_on_prepare_geometry_change(void* self, void (*slot)()) {
    QGraphicsWidget_OnPrepareGeometryChange((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_set_graphics_item(void* self, void* item) {
    QGraphicsWidget_SetGraphicsItem((QGraphicsWidget*)self, (QGraphicsItem*)item);
}

void q_graphicswidget_qbase_set_graphics_item(void* self, void* item) {
    QGraphicsWidget_QBaseSetGraphicsItem((QGraphicsWidget*)self, (QGraphicsItem*)item);
}

void q_graphicswidget_on_set_graphics_item(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnSetGraphicsItem((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_set_owned_by_layout(void* self, bool ownedByLayout) {
    QGraphicsWidget_SetOwnedByLayout((QGraphicsWidget*)self, ownedByLayout);
}

void q_graphicswidget_qbase_set_owned_by_layout(void* self, bool ownedByLayout) {
    QGraphicsWidget_QBaseSetOwnedByLayout((QGraphicsWidget*)self, ownedByLayout);
}

void q_graphicswidget_on_set_owned_by_layout(void* self, void (*slot)(void*, bool)) {
    QGraphicsWidget_OnSetOwnedByLayout((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicswidget_delete(void* self) {
    QGraphicsWidget_Delete((QGraphicsWidget*)(self));
}
