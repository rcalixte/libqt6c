#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "libabstractdnditem.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libabstractwidgetbox.hpp"
#include "libabstractwidgetbox.h"

QDesignerWidgetBoxInterface* q_designerwidgetboxinterface_new(void* parent) {
    return QDesignerWidgetBoxInterface_new((QWidget*)parent);
}

QDesignerWidgetBoxInterface* q_designerwidgetboxinterface_new2() {
    return QDesignerWidgetBoxInterface_new2();
}

QDesignerWidgetBoxInterface* q_designerwidgetboxinterface_new3(void* parent, int32_t flags) {
    return QDesignerWidgetBoxInterface_new3((QWidget*)parent, flags);
}

const QMetaObject* q_designerwidgetboxinterface_meta_object(void* self) {
    return QDesignerWidgetBoxInterface_MetaObject((QDesignerWidgetBoxInterface*)self);
}

void q_designerwidgetboxinterface_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QDesignerWidgetBoxInterface_OnMetaObject((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

const QMetaObject* q_designerwidgetboxinterface_qbase_meta_object(void* self) {
    return QDesignerWidgetBoxInterface_QBaseMetaObject((QDesignerWidgetBoxInterface*)self);
}

void* q_designerwidgetboxinterface_metacast(void* self, const char* param1) {
    return QDesignerWidgetBoxInterface_Metacast((QDesignerWidgetBoxInterface*)self, param1);
}

void q_designerwidgetboxinterface_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QDesignerWidgetBoxInterface_OnMetacast((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void* q_designerwidgetboxinterface_qbase_metacast(void* self, const char* param1) {
    return QDesignerWidgetBoxInterface_QBaseMetacast((QDesignerWidgetBoxInterface*)self, param1);
}

int32_t q_designerwidgetboxinterface_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDesignerWidgetBoxInterface_Metacall((QDesignerWidgetBoxInterface*)self, param1, param2, param3);
}

void q_designerwidgetboxinterface_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QDesignerWidgetBoxInterface_OnMetacall((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

int32_t q_designerwidgetboxinterface_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDesignerWidgetBoxInterface_QBaseMetacall((QDesignerWidgetBoxInterface*)self, param1, param2, param3);
}

const char* q_designerwidgetboxinterface_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_designerwidgetboxinterface_category_count(void* self) {
    return QDesignerWidgetBoxInterface_CategoryCount((QDesignerWidgetBoxInterface*)self);
}

void q_designerwidgetboxinterface_on_category_count(void* self, int32_t (*callback)()) {
    QDesignerWidgetBoxInterface_OnCategoryCount((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

int32_t q_designerwidgetboxinterface_qbase_category_count(void* self) {
    return QDesignerWidgetBoxInterface_QBaseCategoryCount((QDesignerWidgetBoxInterface*)self);
}

QDesignerWidgetBoxInterface__Category* q_designerwidgetboxinterface_category(void* self, int cat_idx) {
    return QDesignerWidgetBoxInterface_Category((QDesignerWidgetBoxInterface*)self, cat_idx);
}

void q_designerwidgetboxinterface_on_category(void* self, QDesignerWidgetBoxInterface__Category* (*callback)(void*, int)) {
    QDesignerWidgetBoxInterface_OnCategory((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

QDesignerWidgetBoxInterface__Category* q_designerwidgetboxinterface_qbase_category(void* self, int cat_idx) {
    return QDesignerWidgetBoxInterface_QBaseCategory((QDesignerWidgetBoxInterface*)self, cat_idx);
}

void q_designerwidgetboxinterface_add_category(void* self, void* cat) {
    QDesignerWidgetBoxInterface_AddCategory((QDesignerWidgetBoxInterface*)self, (QDesignerWidgetBoxInterface__Category*)cat);
}

void q_designerwidgetboxinterface_on_add_category(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnAddCategory((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_qbase_add_category(void* self, void* cat) {
    QDesignerWidgetBoxInterface_QBaseAddCategory((QDesignerWidgetBoxInterface*)self, (QDesignerWidgetBoxInterface__Category*)cat);
}

void q_designerwidgetboxinterface_remove_category(void* self, int cat_idx) {
    QDesignerWidgetBoxInterface_RemoveCategory((QDesignerWidgetBoxInterface*)self, cat_idx);
}

void q_designerwidgetboxinterface_on_remove_category(void* self, void (*callback)(void*, int)) {
    QDesignerWidgetBoxInterface_OnRemoveCategory((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_qbase_remove_category(void* self, int cat_idx) {
    QDesignerWidgetBoxInterface_QBaseRemoveCategory((QDesignerWidgetBoxInterface*)self, cat_idx);
}

int32_t q_designerwidgetboxinterface_widget_count(void* self, int cat_idx) {
    return QDesignerWidgetBoxInterface_WidgetCount((QDesignerWidgetBoxInterface*)self, cat_idx);
}

void q_designerwidgetboxinterface_on_widget_count(void* self, int32_t (*callback)(void*, int)) {
    QDesignerWidgetBoxInterface_OnWidgetCount((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

int32_t q_designerwidgetboxinterface_qbase_widget_count(void* self, int cat_idx) {
    return QDesignerWidgetBoxInterface_QBaseWidgetCount((QDesignerWidgetBoxInterface*)self, cat_idx);
}

QDesignerWidgetBoxInterface__Widget* q_designerwidgetboxinterface_widget(void* self, int cat_idx, int wgt_idx) {
    return QDesignerWidgetBoxInterface_Widget((QDesignerWidgetBoxInterface*)self, cat_idx, wgt_idx);
}

void q_designerwidgetboxinterface_on_widget(void* self, QDesignerWidgetBoxInterface__Widget* (*callback)(void*, int, int)) {
    QDesignerWidgetBoxInterface_OnWidget((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

QDesignerWidgetBoxInterface__Widget* q_designerwidgetboxinterface_qbase_widget(void* self, int cat_idx, int wgt_idx) {
    return QDesignerWidgetBoxInterface_QBaseWidget((QDesignerWidgetBoxInterface*)self, cat_idx, wgt_idx);
}

void q_designerwidgetboxinterface_add_widget(void* self, int cat_idx, void* wgt) {
    QDesignerWidgetBoxInterface_AddWidget((QDesignerWidgetBoxInterface*)self, cat_idx, (QDesignerWidgetBoxInterface__Widget*)wgt);
}

void q_designerwidgetboxinterface_on_add_widget(void* self, void (*callback)(void*, int, void*)) {
    QDesignerWidgetBoxInterface_OnAddWidget((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_qbase_add_widget(void* self, int cat_idx, void* wgt) {
    QDesignerWidgetBoxInterface_QBaseAddWidget((QDesignerWidgetBoxInterface*)self, cat_idx, (QDesignerWidgetBoxInterface__Widget*)wgt);
}

void q_designerwidgetboxinterface_remove_widget(void* self, int cat_idx, int wgt_idx) {
    QDesignerWidgetBoxInterface_RemoveWidget((QDesignerWidgetBoxInterface*)self, cat_idx, wgt_idx);
}

void q_designerwidgetboxinterface_on_remove_widget(void* self, void (*callback)(void*, int, int)) {
    QDesignerWidgetBoxInterface_OnRemoveWidget((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_qbase_remove_widget(void* self, int cat_idx, int wgt_idx) {
    QDesignerWidgetBoxInterface_QBaseRemoveWidget((QDesignerWidgetBoxInterface*)self, cat_idx, wgt_idx);
}

int32_t q_designerwidgetboxinterface_find_or_insert_category(void* self, const char* categoryName) {
    return QDesignerWidgetBoxInterface_FindOrInsertCategory((QDesignerWidgetBoxInterface*)self, qstring(categoryName));
}

void q_designerwidgetboxinterface_drop_widgets(void* self, libqt_list /* of QDesignerDnDItemInterface* */ item_list, void* global_mouse_pos) {
    QDesignerWidgetBoxInterface_DropWidgets((QDesignerWidgetBoxInterface*)self, item_list, (QPoint*)global_mouse_pos);
}

void q_designerwidgetboxinterface_on_drop_widgets(void* self, void (*callback)(void*, QDesignerDnDItemInterface**, void*)) {
    QDesignerWidgetBoxInterface_OnDropWidgets((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_qbase_drop_widgets(void* self, libqt_list /* of QDesignerDnDItemInterface* */ item_list, void* global_mouse_pos) {
    QDesignerWidgetBoxInterface_QBaseDropWidgets((QDesignerWidgetBoxInterface*)self, item_list, (QPoint*)global_mouse_pos);
}

void q_designerwidgetboxinterface_set_file_name(void* self, const char* file_name) {
    QDesignerWidgetBoxInterface_SetFileName((QDesignerWidgetBoxInterface*)self, qstring(file_name));
}

void q_designerwidgetboxinterface_on_set_file_name(void* self, void (*callback)(void*, const char*)) {
    QDesignerWidgetBoxInterface_OnSetFileName((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_qbase_set_file_name(void* self, const char* file_name) {
    QDesignerWidgetBoxInterface_QBaseSetFileName((QDesignerWidgetBoxInterface*)self, qstring(file_name));
}

const char* q_designerwidgetboxinterface_file_name(void* self) {
    libqt_string _str = QDesignerWidgetBoxInterface_FileName((QDesignerWidgetBoxInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerwidgetboxinterface_on_file_name(void* self, const char* (*callback)()) {
    QDesignerWidgetBoxInterface_OnFileName((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

const char* q_designerwidgetboxinterface_qbase_file_name(void* self) {
    libqt_string _str = QDesignerWidgetBoxInterface_QBaseFileName((QDesignerWidgetBoxInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_designerwidgetboxinterface_load(void* self) {
    return QDesignerWidgetBoxInterface_Load((QDesignerWidgetBoxInterface*)self);
}

void q_designerwidgetboxinterface_on_load(void* self, bool (*callback)()) {
    QDesignerWidgetBoxInterface_OnLoad((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

bool q_designerwidgetboxinterface_qbase_load(void* self) {
    return QDesignerWidgetBoxInterface_QBaseLoad((QDesignerWidgetBoxInterface*)self);
}

bool q_designerwidgetboxinterface_save(void* self) {
    return QDesignerWidgetBoxInterface_Save((QDesignerWidgetBoxInterface*)self);
}

void q_designerwidgetboxinterface_on_save(void* self, bool (*callback)()) {
    QDesignerWidgetBoxInterface_OnSave((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

bool q_designerwidgetboxinterface_qbase_save(void* self) {
    return QDesignerWidgetBoxInterface_QBaseSave((QDesignerWidgetBoxInterface*)self);
}

const char* q_designerwidgetboxinterface_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_designerwidgetboxinterface_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t q_designerwidgetboxinterface_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_designerwidgetboxinterface_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_designerwidgetboxinterface_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_designerwidgetboxinterface_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_designerwidgetboxinterface_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_designerwidgetboxinterface_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_designerwidgetboxinterface_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_designerwidgetboxinterface_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_designerwidgetboxinterface_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_designerwidgetboxinterface_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_designerwidgetboxinterface_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_designerwidgetboxinterface_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_designerwidgetboxinterface_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_designerwidgetboxinterface_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_designerwidgetboxinterface_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_designerwidgetboxinterface_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_designerwidgetboxinterface_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_designerwidgetboxinterface_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_designerwidgetboxinterface_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_designerwidgetboxinterface_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_designerwidgetboxinterface_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_designerwidgetboxinterface_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_designerwidgetboxinterface_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_designerwidgetboxinterface_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_designerwidgetboxinterface_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_designerwidgetboxinterface_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_designerwidgetboxinterface_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_designerwidgetboxinterface_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_designerwidgetboxinterface_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_designerwidgetboxinterface_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_designerwidgetboxinterface_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_designerwidgetboxinterface_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_designerwidgetboxinterface_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_designerwidgetboxinterface_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_designerwidgetboxinterface_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_designerwidgetboxinterface_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_designerwidgetboxinterface_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_designerwidgetboxinterface_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_designerwidgetboxinterface_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_designerwidgetboxinterface_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_designerwidgetboxinterface_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_designerwidgetboxinterface_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_designerwidgetboxinterface_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_designerwidgetboxinterface_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_designerwidgetboxinterface_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_designerwidgetboxinterface_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_designerwidgetboxinterface_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_designerwidgetboxinterface_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_designerwidgetboxinterface_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_designerwidgetboxinterface_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_designerwidgetboxinterface_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_designerwidgetboxinterface_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_designerwidgetboxinterface_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_designerwidgetboxinterface_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_designerwidgetboxinterface_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_designerwidgetboxinterface_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_designerwidgetboxinterface_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_designerwidgetboxinterface_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_designerwidgetboxinterface_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_designerwidgetboxinterface_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_designerwidgetboxinterface_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_designerwidgetboxinterface_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_designerwidgetboxinterface_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_designerwidgetboxinterface_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_designerwidgetboxinterface_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_designerwidgetboxinterface_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_designerwidgetboxinterface_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_designerwidgetboxinterface_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_designerwidgetboxinterface_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_designerwidgetboxinterface_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_designerwidgetboxinterface_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_designerwidgetboxinterface_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_designerwidgetboxinterface_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_designerwidgetboxinterface_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_designerwidgetboxinterface_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_designerwidgetboxinterface_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_designerwidgetboxinterface_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_designerwidgetboxinterface_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_designerwidgetboxinterface_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_designerwidgetboxinterface_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_designerwidgetboxinterface_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_designerwidgetboxinterface_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_designerwidgetboxinterface_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_designerwidgetboxinterface_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_designerwidgetboxinterface_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_designerwidgetboxinterface_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_designerwidgetboxinterface_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_designerwidgetboxinterface_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_designerwidgetboxinterface_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_designerwidgetboxinterface_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_designerwidgetboxinterface_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_designerwidgetboxinterface_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_designerwidgetboxinterface_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_designerwidgetboxinterface_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_designerwidgetboxinterface_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_designerwidgetboxinterface_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_designerwidgetboxinterface_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_designerwidgetboxinterface_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_designerwidgetboxinterface_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_designerwidgetboxinterface_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_designerwidgetboxinterface_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerwidgetboxinterface_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_designerwidgetboxinterface_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_designerwidgetboxinterface_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_designerwidgetboxinterface_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerwidgetboxinterface_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_designerwidgetboxinterface_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerwidgetboxinterface_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_designerwidgetboxinterface_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerwidgetboxinterface_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_designerwidgetboxinterface_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_designerwidgetboxinterface_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_designerwidgetboxinterface_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_designerwidgetboxinterface_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerwidgetboxinterface_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_designerwidgetboxinterface_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_designerwidgetboxinterface_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_designerwidgetboxinterface_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerwidgetboxinterface_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_designerwidgetboxinterface_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_designerwidgetboxinterface_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerwidgetboxinterface_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_designerwidgetboxinterface_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerwidgetboxinterface_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_designerwidgetboxinterface_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_designerwidgetboxinterface_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_designerwidgetboxinterface_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_designerwidgetboxinterface_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_designerwidgetboxinterface_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_designerwidgetboxinterface_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_designerwidgetboxinterface_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_designerwidgetboxinterface_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_designerwidgetboxinterface_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_designerwidgetboxinterface_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_designerwidgetboxinterface_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_designerwidgetboxinterface_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_designerwidgetboxinterface_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_designerwidgetboxinterface_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_designerwidgetboxinterface_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_designerwidgetboxinterface_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_designerwidgetboxinterface_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_designerwidgetboxinterface_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_designerwidgetboxinterface_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_designerwidgetboxinterface_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_designerwidgetboxinterface_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_designerwidgetboxinterface_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_designerwidgetboxinterface_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_designerwidgetboxinterface_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_designerwidgetboxinterface_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_designerwidgetboxinterface_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_designerwidgetboxinterface_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_designerwidgetboxinterface_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_designerwidgetboxinterface_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_designerwidgetboxinterface_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_designerwidgetboxinterface_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_designerwidgetboxinterface_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_designerwidgetboxinterface_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_designerwidgetboxinterface_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_designerwidgetboxinterface_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_designerwidgetboxinterface_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_designerwidgetboxinterface_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_designerwidgetboxinterface_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_designerwidgetboxinterface_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_designerwidgetboxinterface_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_designerwidgetboxinterface_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_designerwidgetboxinterface_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_designerwidgetboxinterface_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_designerwidgetboxinterface_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_designerwidgetboxinterface_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_designerwidgetboxinterface_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_designerwidgetboxinterface_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_designerwidgetboxinterface_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_designerwidgetboxinterface_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_designerwidgetboxinterface_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_designerwidgetboxinterface_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_designerwidgetboxinterface_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_designerwidgetboxinterface_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_designerwidgetboxinterface_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_designerwidgetboxinterface_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_designerwidgetboxinterface_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_designerwidgetboxinterface_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_designerwidgetboxinterface_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_designerwidgetboxinterface_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_designerwidgetboxinterface_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_designerwidgetboxinterface_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_designerwidgetboxinterface_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_designerwidgetboxinterface_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_designerwidgetboxinterface_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_designerwidgetboxinterface_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_designerwidgetboxinterface_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_designerwidgetboxinterface_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_designerwidgetboxinterface_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_designerwidgetboxinterface_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_designerwidgetboxinterface_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_designerwidgetboxinterface_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_designerwidgetboxinterface_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_designerwidgetboxinterface_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_designerwidgetboxinterface_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_designerwidgetboxinterface_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_designerwidgetboxinterface_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_designerwidgetboxinterface_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_designerwidgetboxinterface_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_designerwidgetboxinterface_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_designerwidgetboxinterface_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_designerwidgetboxinterface_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_designerwidgetboxinterface_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_designerwidgetboxinterface_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_designerwidgetboxinterface_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_designerwidgetboxinterface_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_designerwidgetboxinterface_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_designerwidgetboxinterface_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_designerwidgetboxinterface_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_designerwidgetboxinterface_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_designerwidgetboxinterface_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_designerwidgetboxinterface_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_designerwidgetboxinterface_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_designerwidgetboxinterface_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_designerwidgetboxinterface_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_designerwidgetboxinterface_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_designerwidgetboxinterface_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_designerwidgetboxinterface_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_designerwidgetboxinterface_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_designerwidgetboxinterface_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_designerwidgetboxinterface_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_designerwidgetboxinterface_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_designerwidgetboxinterface_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_designerwidgetboxinterface_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_designerwidgetboxinterface_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t q_designerwidgetboxinterface_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_designerwidgetboxinterface_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_designerwidgetboxinterface_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t q_designerwidgetboxinterface_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_designerwidgetboxinterface_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_designerwidgetboxinterface_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_designerwidgetboxinterface_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_designerwidgetboxinterface_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_designerwidgetboxinterface_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_designerwidgetboxinterface_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_designerwidgetboxinterface_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_designerwidgetboxinterface_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_designerwidgetboxinterface_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_designerwidgetboxinterface_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_designerwidgetboxinterface_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_designerwidgetboxinterface_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_designerwidgetboxinterface_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_designerwidgetboxinterface_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_designerwidgetboxinterface_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_designerwidgetboxinterface_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_designerwidgetboxinterface_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_designerwidgetboxinterface_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_designerwidgetboxinterface_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_designerwidgetboxinterface_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t q_designerwidgetboxinterface_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_designerwidgetboxinterface_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_designerwidgetboxinterface_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_designerwidgetboxinterface_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_designerwidgetboxinterface_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_designerwidgetboxinterface_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_designerwidgetboxinterface_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_designerwidgetboxinterface_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_designerwidgetboxinterface_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_designerwidgetboxinterface_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_designerwidgetboxinterface_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_designerwidgetboxinterface_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_designerwidgetboxinterface_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_designerwidgetboxinterface_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_designerwidgetboxinterface_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_designerwidgetboxinterface_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_designerwidgetboxinterface_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_designerwidgetboxinterface_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerwidgetboxinterface_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_designerwidgetboxinterface_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_designerwidgetboxinterface_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_designerwidgetboxinterface_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_designerwidgetboxinterface_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_designerwidgetboxinterface_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_designerwidgetboxinterface_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_designerwidgetboxinterface_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_designerwidgetboxinterface_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_designerwidgetboxinterface_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_designerwidgetboxinterface_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_designerwidgetboxinterface_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_designerwidgetboxinterface_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_designerwidgetboxinterface_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_designerwidgetboxinterface_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_designerwidgetboxinterface_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_designerwidgetboxinterface_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_designerwidgetboxinterface_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_designerwidgetboxinterface_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_designerwidgetboxinterface_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_designerwidgetboxinterface_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_designerwidgetboxinterface_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_designerwidgetboxinterface_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_designerwidgetboxinterface_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_designerwidgetboxinterface_dynamic_property_names\n");
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

QBindingStorage* q_designerwidgetboxinterface_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_designerwidgetboxinterface_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_designerwidgetboxinterface_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_designerwidgetboxinterface_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_designerwidgetboxinterface_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_designerwidgetboxinterface_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_designerwidgetboxinterface_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_designerwidgetboxinterface_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_designerwidgetboxinterface_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_designerwidgetboxinterface_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_designerwidgetboxinterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_designerwidgetboxinterface_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_designerwidgetboxinterface_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_designerwidgetboxinterface_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_designerwidgetboxinterface_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_designerwidgetboxinterface_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_designerwidgetboxinterface_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_designerwidgetboxinterface_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_designerwidgetboxinterface_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_designerwidgetboxinterface_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_designerwidgetboxinterface_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_designerwidgetboxinterface_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_designerwidgetboxinterface_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_designerwidgetboxinterface_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_designerwidgetboxinterface_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_designerwidgetboxinterface_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t q_designerwidgetboxinterface_dev_type(void* self) {
    return QDesignerWidgetBoxInterface_DevType((QDesignerWidgetBoxInterface*)self);
}

int32_t q_designerwidgetboxinterface_qbase_dev_type(void* self) {
    return QDesignerWidgetBoxInterface_QBaseDevType((QDesignerWidgetBoxInterface*)self);
}

void q_designerwidgetboxinterface_on_dev_type(void* self, int32_t (*callback)()) {
    QDesignerWidgetBoxInterface_OnDevType((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_set_visible(void* self, bool visible) {
    QDesignerWidgetBoxInterface_SetVisible((QDesignerWidgetBoxInterface*)self, visible);
}

void q_designerwidgetboxinterface_qbase_set_visible(void* self, bool visible) {
    QDesignerWidgetBoxInterface_QBaseSetVisible((QDesignerWidgetBoxInterface*)self, visible);
}

void q_designerwidgetboxinterface_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QDesignerWidgetBoxInterface_OnSetVisible((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

QSize* q_designerwidgetboxinterface_size_hint(void* self) {
    return QDesignerWidgetBoxInterface_SizeHint((QDesignerWidgetBoxInterface*)self);
}

QSize* q_designerwidgetboxinterface_qbase_size_hint(void* self) {
    return QDesignerWidgetBoxInterface_QBaseSizeHint((QDesignerWidgetBoxInterface*)self);
}

void q_designerwidgetboxinterface_on_size_hint(void* self, QSize* (*callback)()) {
    QDesignerWidgetBoxInterface_OnSizeHint((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

QSize* q_designerwidgetboxinterface_minimum_size_hint(void* self) {
    return QDesignerWidgetBoxInterface_MinimumSizeHint((QDesignerWidgetBoxInterface*)self);
}

QSize* q_designerwidgetboxinterface_qbase_minimum_size_hint(void* self) {
    return QDesignerWidgetBoxInterface_QBaseMinimumSizeHint((QDesignerWidgetBoxInterface*)self);
}

void q_designerwidgetboxinterface_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QDesignerWidgetBoxInterface_OnMinimumSizeHint((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

int32_t q_designerwidgetboxinterface_height_for_width(void* self, int param1) {
    return QDesignerWidgetBoxInterface_HeightForWidth((QDesignerWidgetBoxInterface*)self, param1);
}

int32_t q_designerwidgetboxinterface_qbase_height_for_width(void* self, int param1) {
    return QDesignerWidgetBoxInterface_QBaseHeightForWidth((QDesignerWidgetBoxInterface*)self, param1);
}

void q_designerwidgetboxinterface_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QDesignerWidgetBoxInterface_OnHeightForWidth((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

bool q_designerwidgetboxinterface_has_height_for_width(void* self) {
    return QDesignerWidgetBoxInterface_HasHeightForWidth((QDesignerWidgetBoxInterface*)self);
}

bool q_designerwidgetboxinterface_qbase_has_height_for_width(void* self) {
    return QDesignerWidgetBoxInterface_QBaseHasHeightForWidth((QDesignerWidgetBoxInterface*)self);
}

void q_designerwidgetboxinterface_on_has_height_for_width(void* self, bool (*callback)()) {
    QDesignerWidgetBoxInterface_OnHasHeightForWidth((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

QPaintEngine* q_designerwidgetboxinterface_paint_engine(void* self) {
    return QDesignerWidgetBoxInterface_PaintEngine((QDesignerWidgetBoxInterface*)self);
}

QPaintEngine* q_designerwidgetboxinterface_qbase_paint_engine(void* self) {
    return QDesignerWidgetBoxInterface_QBasePaintEngine((QDesignerWidgetBoxInterface*)self);
}

void q_designerwidgetboxinterface_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QDesignerWidgetBoxInterface_OnPaintEngine((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

bool q_designerwidgetboxinterface_event(void* self, void* event) {
    return QDesignerWidgetBoxInterface_Event((QDesignerWidgetBoxInterface*)self, (QEvent*)event);
}

bool q_designerwidgetboxinterface_qbase_event(void* self, void* event) {
    return QDesignerWidgetBoxInterface_QBaseEvent((QDesignerWidgetBoxInterface*)self, (QEvent*)event);
}

void q_designerwidgetboxinterface_on_event(void* self, bool (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnEvent((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_mouse_press_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_MousePressEvent((QDesignerWidgetBoxInterface*)self, (QMouseEvent*)event);
}

void q_designerwidgetboxinterface_qbase_mouse_press_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_QBaseMousePressEvent((QDesignerWidgetBoxInterface*)self, (QMouseEvent*)event);
}

void q_designerwidgetboxinterface_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnMousePressEvent((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_mouse_release_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_MouseReleaseEvent((QDesignerWidgetBoxInterface*)self, (QMouseEvent*)event);
}

void q_designerwidgetboxinterface_qbase_mouse_release_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_QBaseMouseReleaseEvent((QDesignerWidgetBoxInterface*)self, (QMouseEvent*)event);
}

void q_designerwidgetboxinterface_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnMouseReleaseEvent((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_mouse_double_click_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_MouseDoubleClickEvent((QDesignerWidgetBoxInterface*)self, (QMouseEvent*)event);
}

void q_designerwidgetboxinterface_qbase_mouse_double_click_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_QBaseMouseDoubleClickEvent((QDesignerWidgetBoxInterface*)self, (QMouseEvent*)event);
}

void q_designerwidgetboxinterface_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnMouseDoubleClickEvent((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_mouse_move_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_MouseMoveEvent((QDesignerWidgetBoxInterface*)self, (QMouseEvent*)event);
}

void q_designerwidgetboxinterface_qbase_mouse_move_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_QBaseMouseMoveEvent((QDesignerWidgetBoxInterface*)self, (QMouseEvent*)event);
}

void q_designerwidgetboxinterface_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnMouseMoveEvent((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_wheel_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_WheelEvent((QDesignerWidgetBoxInterface*)self, (QWheelEvent*)event);
}

void q_designerwidgetboxinterface_qbase_wheel_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_QBaseWheelEvent((QDesignerWidgetBoxInterface*)self, (QWheelEvent*)event);
}

void q_designerwidgetboxinterface_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnWheelEvent((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_key_press_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_KeyPressEvent((QDesignerWidgetBoxInterface*)self, (QKeyEvent*)event);
}

void q_designerwidgetboxinterface_qbase_key_press_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_QBaseKeyPressEvent((QDesignerWidgetBoxInterface*)self, (QKeyEvent*)event);
}

void q_designerwidgetboxinterface_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnKeyPressEvent((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_key_release_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_KeyReleaseEvent((QDesignerWidgetBoxInterface*)self, (QKeyEvent*)event);
}

void q_designerwidgetboxinterface_qbase_key_release_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_QBaseKeyReleaseEvent((QDesignerWidgetBoxInterface*)self, (QKeyEvent*)event);
}

void q_designerwidgetboxinterface_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnKeyReleaseEvent((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_focus_in_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_FocusInEvent((QDesignerWidgetBoxInterface*)self, (QFocusEvent*)event);
}

void q_designerwidgetboxinterface_qbase_focus_in_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_QBaseFocusInEvent((QDesignerWidgetBoxInterface*)self, (QFocusEvent*)event);
}

void q_designerwidgetboxinterface_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnFocusInEvent((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_focus_out_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_FocusOutEvent((QDesignerWidgetBoxInterface*)self, (QFocusEvent*)event);
}

void q_designerwidgetboxinterface_qbase_focus_out_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_QBaseFocusOutEvent((QDesignerWidgetBoxInterface*)self, (QFocusEvent*)event);
}

void q_designerwidgetboxinterface_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnFocusOutEvent((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_enter_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_EnterEvent((QDesignerWidgetBoxInterface*)self, (QEnterEvent*)event);
}

void q_designerwidgetboxinterface_qbase_enter_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_QBaseEnterEvent((QDesignerWidgetBoxInterface*)self, (QEnterEvent*)event);
}

void q_designerwidgetboxinterface_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnEnterEvent((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_leave_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_LeaveEvent((QDesignerWidgetBoxInterface*)self, (QEvent*)event);
}

void q_designerwidgetboxinterface_qbase_leave_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_QBaseLeaveEvent((QDesignerWidgetBoxInterface*)self, (QEvent*)event);
}

void q_designerwidgetboxinterface_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnLeaveEvent((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_paint_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_PaintEvent((QDesignerWidgetBoxInterface*)self, (QPaintEvent*)event);
}

void q_designerwidgetboxinterface_qbase_paint_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_QBasePaintEvent((QDesignerWidgetBoxInterface*)self, (QPaintEvent*)event);
}

void q_designerwidgetboxinterface_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnPaintEvent((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_move_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_MoveEvent((QDesignerWidgetBoxInterface*)self, (QMoveEvent*)event);
}

void q_designerwidgetboxinterface_qbase_move_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_QBaseMoveEvent((QDesignerWidgetBoxInterface*)self, (QMoveEvent*)event);
}

void q_designerwidgetboxinterface_on_move_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnMoveEvent((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_resize_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_ResizeEvent((QDesignerWidgetBoxInterface*)self, (QResizeEvent*)event);
}

void q_designerwidgetboxinterface_qbase_resize_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_QBaseResizeEvent((QDesignerWidgetBoxInterface*)self, (QResizeEvent*)event);
}

void q_designerwidgetboxinterface_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnResizeEvent((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_close_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_CloseEvent((QDesignerWidgetBoxInterface*)self, (QCloseEvent*)event);
}

void q_designerwidgetboxinterface_qbase_close_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_QBaseCloseEvent((QDesignerWidgetBoxInterface*)self, (QCloseEvent*)event);
}

void q_designerwidgetboxinterface_on_close_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnCloseEvent((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_context_menu_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_ContextMenuEvent((QDesignerWidgetBoxInterface*)self, (QContextMenuEvent*)event);
}

void q_designerwidgetboxinterface_qbase_context_menu_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_QBaseContextMenuEvent((QDesignerWidgetBoxInterface*)self, (QContextMenuEvent*)event);
}

void q_designerwidgetboxinterface_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnContextMenuEvent((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_tablet_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_TabletEvent((QDesignerWidgetBoxInterface*)self, (QTabletEvent*)event);
}

void q_designerwidgetboxinterface_qbase_tablet_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_QBaseTabletEvent((QDesignerWidgetBoxInterface*)self, (QTabletEvent*)event);
}

void q_designerwidgetboxinterface_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnTabletEvent((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_action_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_ActionEvent((QDesignerWidgetBoxInterface*)self, (QActionEvent*)event);
}

void q_designerwidgetboxinterface_qbase_action_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_QBaseActionEvent((QDesignerWidgetBoxInterface*)self, (QActionEvent*)event);
}

void q_designerwidgetboxinterface_on_action_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnActionEvent((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_drag_enter_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_DragEnterEvent((QDesignerWidgetBoxInterface*)self, (QDragEnterEvent*)event);
}

void q_designerwidgetboxinterface_qbase_drag_enter_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_QBaseDragEnterEvent((QDesignerWidgetBoxInterface*)self, (QDragEnterEvent*)event);
}

void q_designerwidgetboxinterface_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnDragEnterEvent((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_drag_move_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_DragMoveEvent((QDesignerWidgetBoxInterface*)self, (QDragMoveEvent*)event);
}

void q_designerwidgetboxinterface_qbase_drag_move_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_QBaseDragMoveEvent((QDesignerWidgetBoxInterface*)self, (QDragMoveEvent*)event);
}

void q_designerwidgetboxinterface_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnDragMoveEvent((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_drag_leave_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_DragLeaveEvent((QDesignerWidgetBoxInterface*)self, (QDragLeaveEvent*)event);
}

void q_designerwidgetboxinterface_qbase_drag_leave_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_QBaseDragLeaveEvent((QDesignerWidgetBoxInterface*)self, (QDragLeaveEvent*)event);
}

void q_designerwidgetboxinterface_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnDragLeaveEvent((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_drop_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_DropEvent((QDesignerWidgetBoxInterface*)self, (QDropEvent*)event);
}

void q_designerwidgetboxinterface_qbase_drop_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_QBaseDropEvent((QDesignerWidgetBoxInterface*)self, (QDropEvent*)event);
}

void q_designerwidgetboxinterface_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnDropEvent((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_show_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_ShowEvent((QDesignerWidgetBoxInterface*)self, (QShowEvent*)event);
}

void q_designerwidgetboxinterface_qbase_show_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_QBaseShowEvent((QDesignerWidgetBoxInterface*)self, (QShowEvent*)event);
}

void q_designerwidgetboxinterface_on_show_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnShowEvent((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_hide_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_HideEvent((QDesignerWidgetBoxInterface*)self, (QHideEvent*)event);
}

void q_designerwidgetboxinterface_qbase_hide_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_QBaseHideEvent((QDesignerWidgetBoxInterface*)self, (QHideEvent*)event);
}

void q_designerwidgetboxinterface_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnHideEvent((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

bool q_designerwidgetboxinterface_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QDesignerWidgetBoxInterface_NativeEvent((QDesignerWidgetBoxInterface*)self, qstring(eventType), message, result);
}

bool q_designerwidgetboxinterface_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QDesignerWidgetBoxInterface_QBaseNativeEvent((QDesignerWidgetBoxInterface*)self, qstring(eventType), message, result);
}

void q_designerwidgetboxinterface_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QDesignerWidgetBoxInterface_OnNativeEvent((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_change_event(void* self, void* param1) {
    QDesignerWidgetBoxInterface_ChangeEvent((QDesignerWidgetBoxInterface*)self, (QEvent*)param1);
}

void q_designerwidgetboxinterface_qbase_change_event(void* self, void* param1) {
    QDesignerWidgetBoxInterface_QBaseChangeEvent((QDesignerWidgetBoxInterface*)self, (QEvent*)param1);
}

void q_designerwidgetboxinterface_on_change_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnChangeEvent((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

int32_t q_designerwidgetboxinterface_metric(void* self, int32_t param1) {
    return QDesignerWidgetBoxInterface_Metric((QDesignerWidgetBoxInterface*)self, param1);
}

int32_t q_designerwidgetboxinterface_qbase_metric(void* self, int32_t param1) {
    return QDesignerWidgetBoxInterface_QBaseMetric((QDesignerWidgetBoxInterface*)self, param1);
}

void q_designerwidgetboxinterface_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QDesignerWidgetBoxInterface_OnMetric((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_init_painter(void* self, void* painter) {
    QDesignerWidgetBoxInterface_InitPainter((QDesignerWidgetBoxInterface*)self, (QPainter*)painter);
}

void q_designerwidgetboxinterface_qbase_init_painter(void* self, void* painter) {
    QDesignerWidgetBoxInterface_QBaseInitPainter((QDesignerWidgetBoxInterface*)self, (QPainter*)painter);
}

void q_designerwidgetboxinterface_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnInitPainter((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

QPaintDevice* q_designerwidgetboxinterface_redirected(void* self, void* offset) {
    return QDesignerWidgetBoxInterface_Redirected((QDesignerWidgetBoxInterface*)self, (QPoint*)offset);
}

QPaintDevice* q_designerwidgetboxinterface_qbase_redirected(void* self, void* offset) {
    return QDesignerWidgetBoxInterface_QBaseRedirected((QDesignerWidgetBoxInterface*)self, (QPoint*)offset);
}

void q_designerwidgetboxinterface_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnRedirected((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

QPainter* q_designerwidgetboxinterface_shared_painter(void* self) {
    return QDesignerWidgetBoxInterface_SharedPainter((QDesignerWidgetBoxInterface*)self);
}

QPainter* q_designerwidgetboxinterface_qbase_shared_painter(void* self) {
    return QDesignerWidgetBoxInterface_QBaseSharedPainter((QDesignerWidgetBoxInterface*)self);
}

void q_designerwidgetboxinterface_on_shared_painter(void* self, QPainter* (*callback)()) {
    QDesignerWidgetBoxInterface_OnSharedPainter((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_input_method_event(void* self, void* param1) {
    QDesignerWidgetBoxInterface_InputMethodEvent((QDesignerWidgetBoxInterface*)self, (QInputMethodEvent*)param1);
}

void q_designerwidgetboxinterface_qbase_input_method_event(void* self, void* param1) {
    QDesignerWidgetBoxInterface_QBaseInputMethodEvent((QDesignerWidgetBoxInterface*)self, (QInputMethodEvent*)param1);
}

void q_designerwidgetboxinterface_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnInputMethodEvent((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

QVariant* q_designerwidgetboxinterface_input_method_query(void* self, int32_t param1) {
    return QDesignerWidgetBoxInterface_InputMethodQuery((QDesignerWidgetBoxInterface*)self, param1);
}

QVariant* q_designerwidgetboxinterface_qbase_input_method_query(void* self, int32_t param1) {
    return QDesignerWidgetBoxInterface_QBaseInputMethodQuery((QDesignerWidgetBoxInterface*)self, param1);
}

void q_designerwidgetboxinterface_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QDesignerWidgetBoxInterface_OnInputMethodQuery((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

bool q_designerwidgetboxinterface_focus_next_prev_child(void* self, bool next) {
    return QDesignerWidgetBoxInterface_FocusNextPrevChild((QDesignerWidgetBoxInterface*)self, next);
}

bool q_designerwidgetboxinterface_qbase_focus_next_prev_child(void* self, bool next) {
    return QDesignerWidgetBoxInterface_QBaseFocusNextPrevChild((QDesignerWidgetBoxInterface*)self, next);
}

void q_designerwidgetboxinterface_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QDesignerWidgetBoxInterface_OnFocusNextPrevChild((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

bool q_designerwidgetboxinterface_event_filter(void* self, void* watched, void* event) {
    return QDesignerWidgetBoxInterface_EventFilter((QDesignerWidgetBoxInterface*)self, (QObject*)watched, (QEvent*)event);
}

bool q_designerwidgetboxinterface_qbase_event_filter(void* self, void* watched, void* event) {
    return QDesignerWidgetBoxInterface_QBaseEventFilter((QDesignerWidgetBoxInterface*)self, (QObject*)watched, (QEvent*)event);
}

void q_designerwidgetboxinterface_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QDesignerWidgetBoxInterface_OnEventFilter((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_timer_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_TimerEvent((QDesignerWidgetBoxInterface*)self, (QTimerEvent*)event);
}

void q_designerwidgetboxinterface_qbase_timer_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_QBaseTimerEvent((QDesignerWidgetBoxInterface*)self, (QTimerEvent*)event);
}

void q_designerwidgetboxinterface_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnTimerEvent((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_child_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_ChildEvent((QDesignerWidgetBoxInterface*)self, (QChildEvent*)event);
}

void q_designerwidgetboxinterface_qbase_child_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_QBaseChildEvent((QDesignerWidgetBoxInterface*)self, (QChildEvent*)event);
}

void q_designerwidgetboxinterface_on_child_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnChildEvent((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_custom_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_CustomEvent((QDesignerWidgetBoxInterface*)self, (QEvent*)event);
}

void q_designerwidgetboxinterface_qbase_custom_event(void* self, void* event) {
    QDesignerWidgetBoxInterface_QBaseCustomEvent((QDesignerWidgetBoxInterface*)self, (QEvent*)event);
}

void q_designerwidgetboxinterface_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnCustomEvent((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_connect_notify(void* self, void* signal) {
    QDesignerWidgetBoxInterface_ConnectNotify((QDesignerWidgetBoxInterface*)self, (QMetaMethod*)signal);
}

void q_designerwidgetboxinterface_qbase_connect_notify(void* self, void* signal) {
    QDesignerWidgetBoxInterface_QBaseConnectNotify((QDesignerWidgetBoxInterface*)self, (QMetaMethod*)signal);
}

void q_designerwidgetboxinterface_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnConnectNotify((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_disconnect_notify(void* self, void* signal) {
    QDesignerWidgetBoxInterface_DisconnectNotify((QDesignerWidgetBoxInterface*)self, (QMetaMethod*)signal);
}

void q_designerwidgetboxinterface_qbase_disconnect_notify(void* self, void* signal) {
    QDesignerWidgetBoxInterface_QBaseDisconnectNotify((QDesignerWidgetBoxInterface*)self, (QMetaMethod*)signal);
}

void q_designerwidgetboxinterface_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnDisconnectNotify((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_update_micro_focus(void* self) {
    QDesignerWidgetBoxInterface_UpdateMicroFocus((QDesignerWidgetBoxInterface*)self);
}

void q_designerwidgetboxinterface_qbase_update_micro_focus(void* self) {
    QDesignerWidgetBoxInterface_QBaseUpdateMicroFocus((QDesignerWidgetBoxInterface*)self);
}

void q_designerwidgetboxinterface_on_update_micro_focus(void* self, void (*callback)()) {
    QDesignerWidgetBoxInterface_OnUpdateMicroFocus((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_create(void* self) {
    QDesignerWidgetBoxInterface_Create((QDesignerWidgetBoxInterface*)self);
}

void q_designerwidgetboxinterface_qbase_create(void* self) {
    QDesignerWidgetBoxInterface_QBaseCreate((QDesignerWidgetBoxInterface*)self);
}

void q_designerwidgetboxinterface_on_create(void* self, void (*callback)()) {
    QDesignerWidgetBoxInterface_OnCreate((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_destroy(void* self) {
    QDesignerWidgetBoxInterface_Destroy((QDesignerWidgetBoxInterface*)self);
}

void q_designerwidgetboxinterface_qbase_destroy(void* self) {
    QDesignerWidgetBoxInterface_QBaseDestroy((QDesignerWidgetBoxInterface*)self);
}

void q_designerwidgetboxinterface_on_destroy(void* self, void (*callback)()) {
    QDesignerWidgetBoxInterface_OnDestroy((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

bool q_designerwidgetboxinterface_focus_next_child(void* self) {
    return QDesignerWidgetBoxInterface_FocusNextChild((QDesignerWidgetBoxInterface*)self);
}

bool q_designerwidgetboxinterface_qbase_focus_next_child(void* self) {
    return QDesignerWidgetBoxInterface_QBaseFocusNextChild((QDesignerWidgetBoxInterface*)self);
}

void q_designerwidgetboxinterface_on_focus_next_child(void* self, bool (*callback)()) {
    QDesignerWidgetBoxInterface_OnFocusNextChild((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

bool q_designerwidgetboxinterface_focus_previous_child(void* self) {
    return QDesignerWidgetBoxInterface_FocusPreviousChild((QDesignerWidgetBoxInterface*)self);
}

bool q_designerwidgetboxinterface_qbase_focus_previous_child(void* self) {
    return QDesignerWidgetBoxInterface_QBaseFocusPreviousChild((QDesignerWidgetBoxInterface*)self);
}

void q_designerwidgetboxinterface_on_focus_previous_child(void* self, bool (*callback)()) {
    QDesignerWidgetBoxInterface_OnFocusPreviousChild((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

QObject* q_designerwidgetboxinterface_sender(void* self) {
    return QDesignerWidgetBoxInterface_Sender((QDesignerWidgetBoxInterface*)self);
}

QObject* q_designerwidgetboxinterface_qbase_sender(void* self) {
    return QDesignerWidgetBoxInterface_QBaseSender((QDesignerWidgetBoxInterface*)self);
}

void q_designerwidgetboxinterface_on_sender(void* self, QObject* (*callback)()) {
    QDesignerWidgetBoxInterface_OnSender((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

int32_t q_designerwidgetboxinterface_sender_signal_index(void* self) {
    return QDesignerWidgetBoxInterface_SenderSignalIndex((QDesignerWidgetBoxInterface*)self);
}

int32_t q_designerwidgetboxinterface_qbase_sender_signal_index(void* self) {
    return QDesignerWidgetBoxInterface_QBaseSenderSignalIndex((QDesignerWidgetBoxInterface*)self);
}

void q_designerwidgetboxinterface_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QDesignerWidgetBoxInterface_OnSenderSignalIndex((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

int32_t q_designerwidgetboxinterface_receivers(void* self, const char* signal) {
    return QDesignerWidgetBoxInterface_Receivers((QDesignerWidgetBoxInterface*)self, signal);
}

int32_t q_designerwidgetboxinterface_qbase_receivers(void* self, const char* signal) {
    return QDesignerWidgetBoxInterface_QBaseReceivers((QDesignerWidgetBoxInterface*)self, signal);
}

void q_designerwidgetboxinterface_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QDesignerWidgetBoxInterface_OnReceivers((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

bool q_designerwidgetboxinterface_is_signal_connected(void* self, void* signal) {
    return QDesignerWidgetBoxInterface_IsSignalConnected((QDesignerWidgetBoxInterface*)self, (QMetaMethod*)signal);
}

bool q_designerwidgetboxinterface_qbase_is_signal_connected(void* self, void* signal) {
    return QDesignerWidgetBoxInterface_QBaseIsSignalConnected((QDesignerWidgetBoxInterface*)self, (QMetaMethod*)signal);
}

void q_designerwidgetboxinterface_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QDesignerWidgetBoxInterface_OnIsSignalConnected((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

double q_designerwidgetboxinterface_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QDesignerWidgetBoxInterface_GetDecodedMetricF((QDesignerWidgetBoxInterface*)self, metricA, metricB);
}

double q_designerwidgetboxinterface_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QDesignerWidgetBoxInterface_QBaseGetDecodedMetricF((QDesignerWidgetBoxInterface*)self, metricA, metricB);
}

void q_designerwidgetboxinterface_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QDesignerWidgetBoxInterface_OnGetDecodedMetricF((QDesignerWidgetBoxInterface*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_designerwidgetboxinterface_delete(void* self) {
    QDesignerWidgetBoxInterface_Delete((QDesignerWidgetBoxInterface*)(self));
}

QDesignerWidgetBoxInterface__Widget* q_designerwidgetboxinterface__widget_new() {
    return QDesignerWidgetBoxInterface__Widget_new();
}

QDesignerWidgetBoxInterface__Widget* q_designerwidgetboxinterface__widget_new2(void* w) {
    return QDesignerWidgetBoxInterface__Widget_new2((QDesignerWidgetBoxInterface__Widget*)w);
}

QDesignerWidgetBoxInterface__Widget* q_designerwidgetboxinterface__widget_new3(const char* aname) {
    return QDesignerWidgetBoxInterface__Widget_new3(qstring(aname));
}

QDesignerWidgetBoxInterface__Widget* q_designerwidgetboxinterface__widget_new4(const char* aname, const char* xml) {
    return QDesignerWidgetBoxInterface__Widget_new4(qstring(aname), qstring(xml));
}

QDesignerWidgetBoxInterface__Widget* q_designerwidgetboxinterface__widget_new5(const char* aname, const char* xml, const char* icon_name) {
    return QDesignerWidgetBoxInterface__Widget_new5(qstring(aname), qstring(xml), qstring(icon_name));
}

QDesignerWidgetBoxInterface__Widget* q_designerwidgetboxinterface__widget_new6(const char* aname, const char* xml, const char* icon_name, int32_t atype) {
    return QDesignerWidgetBoxInterface__Widget_new6(qstring(aname), qstring(xml), qstring(icon_name), atype);
}

void q_designerwidgetboxinterface__widget_operator_assign(void* self, void* w) {
    QDesignerWidgetBoxInterface__Widget_OperatorAssign((QDesignerWidgetBoxInterface__Widget*)self, (QDesignerWidgetBoxInterface__Widget*)w);
}

const char* q_designerwidgetboxinterface__widget_name(void* self) {
    libqt_string _str = QDesignerWidgetBoxInterface__Widget_Name((QDesignerWidgetBoxInterface__Widget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerwidgetboxinterface__widget_set_name(void* self, const char* aname) {
    QDesignerWidgetBoxInterface__Widget_SetName((QDesignerWidgetBoxInterface__Widget*)self, qstring(aname));
}

const char* q_designerwidgetboxinterface__widget_dom_xml(void* self) {
    libqt_string _str = QDesignerWidgetBoxInterface__Widget_DomXml((QDesignerWidgetBoxInterface__Widget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerwidgetboxinterface__widget_set_dom_xml(void* self, const char* xml) {
    QDesignerWidgetBoxInterface__Widget_SetDomXml((QDesignerWidgetBoxInterface__Widget*)self, qstring(xml));
}

const char* q_designerwidgetboxinterface__widget_icon_name(void* self) {
    libqt_string _str = QDesignerWidgetBoxInterface__Widget_IconName((QDesignerWidgetBoxInterface__Widget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerwidgetboxinterface__widget_set_icon_name(void* self, const char* icon_name) {
    QDesignerWidgetBoxInterface__Widget_SetIconName((QDesignerWidgetBoxInterface__Widget*)self, qstring(icon_name));
}

int32_t q_designerwidgetboxinterface__widget_type(void* self) {
    return QDesignerWidgetBoxInterface__Widget_Type((QDesignerWidgetBoxInterface__Widget*)self);
}

void q_designerwidgetboxinterface__widget_set_type(void* self, int32_t atype) {
    QDesignerWidgetBoxInterface__Widget_SetType((QDesignerWidgetBoxInterface__Widget*)self, atype);
}

bool q_designerwidgetboxinterface__widget_is_null(void* self) {
    return QDesignerWidgetBoxInterface__Widget_IsNull((QDesignerWidgetBoxInterface__Widget*)self);
}

void q_designerwidgetboxinterface__widget_delete(void* self) {
    QDesignerWidgetBoxInterface__Widget_Delete((QDesignerWidgetBoxInterface__Widget*)(self));
}

QDesignerWidgetBoxInterface__Category* q_designerwidgetboxinterface__category_new() {
    return QDesignerWidgetBoxInterface__Category_new();
}

QDesignerWidgetBoxInterface__Category* q_designerwidgetboxinterface__category_new2(void* param1) {
    return QDesignerWidgetBoxInterface__Category_new2((QDesignerWidgetBoxInterface__Category*)param1);
}

QDesignerWidgetBoxInterface__Category* q_designerwidgetboxinterface__category_new3(const char* aname) {
    return QDesignerWidgetBoxInterface__Category_new3(qstring(aname));
}

QDesignerWidgetBoxInterface__Category* q_designerwidgetboxinterface__category_new4(const char* aname, int32_t atype) {
    return QDesignerWidgetBoxInterface__Category_new4(qstring(aname), atype);
}

const char* q_designerwidgetboxinterface__category_name(void* self) {
    libqt_string _str = QDesignerWidgetBoxInterface__Category_Name((QDesignerWidgetBoxInterface__Category*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerwidgetboxinterface__category_set_name(void* self, const char* aname) {
    QDesignerWidgetBoxInterface__Category_SetName((QDesignerWidgetBoxInterface__Category*)self, qstring(aname));
}

int32_t q_designerwidgetboxinterface__category_widget_count(void* self) {
    return QDesignerWidgetBoxInterface__Category_WidgetCount((QDesignerWidgetBoxInterface__Category*)self);
}

QDesignerWidgetBoxInterface__Widget* q_designerwidgetboxinterface__category_widget(void* self, int idx) {
    return QDesignerWidgetBoxInterface__Category_Widget((QDesignerWidgetBoxInterface__Category*)self, idx);
}

void q_designerwidgetboxinterface__category_remove_widget(void* self, int idx) {
    QDesignerWidgetBoxInterface__Category_RemoveWidget((QDesignerWidgetBoxInterface__Category*)self, idx);
}

void q_designerwidgetboxinterface__category_add_widget(void* self, void* awidget) {
    QDesignerWidgetBoxInterface__Category_AddWidget((QDesignerWidgetBoxInterface__Category*)self, (QDesignerWidgetBoxInterface__Widget*)awidget);
}

int32_t q_designerwidgetboxinterface__category_type(void* self) {
    return QDesignerWidgetBoxInterface__Category_Type((QDesignerWidgetBoxInterface__Category*)self);
}

void q_designerwidgetboxinterface__category_set_type(void* self, int32_t atype) {
    QDesignerWidgetBoxInterface__Category_SetType((QDesignerWidgetBoxInterface__Category*)self, atype);
}

bool q_designerwidgetboxinterface__category_is_null(void* self) {
    return QDesignerWidgetBoxInterface__Category_IsNull((QDesignerWidgetBoxInterface__Category*)self);
}

void q_designerwidgetboxinterface__category_delete(void* self) {
    QDesignerWidgetBoxInterface__Category_Delete((QDesignerWidgetBoxInterface__Category*)(self));
}
