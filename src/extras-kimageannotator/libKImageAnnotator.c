#include "../libqaction.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqimage.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpixmap.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libKImageAnnotator.hpp"
#include "libKImageAnnotator.h"

void k_imageannotator_load_translations() {
    kImageAnnotator_LoadTranslations();
}

kImageAnnotator__KImageAnnotator* k_imageannotator__kimageannotator_new() {
    return kImageAnnotator__KImageAnnotator_new();
}

const QMetaObject* k_imageannotator__kimageannotator_meta_object(void* self) {
    return kImageAnnotator__KImageAnnotator_MetaObject((kImageAnnotator__KImageAnnotator*)self);
}

void* k_imageannotator__kimageannotator_metacast(void* self, const char* param1) {
    return kImageAnnotator__KImageAnnotator_Metacast((kImageAnnotator__KImageAnnotator*)self, param1);
}

int32_t k_imageannotator__kimageannotator_metacall(void* self, int32_t param1, int param2, void* param3) {
    return kImageAnnotator__KImageAnnotator_Metacall((kImageAnnotator__KImageAnnotator*)self, param1, param2, param3);
}

void k_imageannotator__kimageannotator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    kImageAnnotator__KImageAnnotator_OnMetacall((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

int32_t k_imageannotator__kimageannotator_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return kImageAnnotator__KImageAnnotator_QBaseMetacall((kImageAnnotator__KImageAnnotator*)self, param1, param2, param3);
}

const char* k_imageannotator__kimageannotator_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QImage* k_imageannotator__kimageannotator_image(void* self) {
    return kImageAnnotator__KImageAnnotator_Image((kImageAnnotator__KImageAnnotator*)self);
}

QImage* k_imageannotator__kimageannotator_image_at(void* self, int index) {
    return kImageAnnotator__KImageAnnotator_ImageAt((kImageAnnotator__KImageAnnotator*)self, index);
}

QAction* k_imageannotator__kimageannotator_undo_action(void* self) {
    return kImageAnnotator__KImageAnnotator_UndoAction((kImageAnnotator__KImageAnnotator*)self);
}

QAction* k_imageannotator__kimageannotator_redo_action(void* self) {
    return kImageAnnotator__KImageAnnotator_RedoAction((kImageAnnotator__KImageAnnotator*)self);
}

QSize* k_imageannotator__kimageannotator_size_hint(void* self) {
    return kImageAnnotator__KImageAnnotator_SizeHint((kImageAnnotator__KImageAnnotator*)self);
}

void k_imageannotator__kimageannotator_on_size_hint(void* self, QSize* (*callback)()) {
    kImageAnnotator__KImageAnnotator_OnSizeHint((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

QSize* k_imageannotator__kimageannotator_qbase_size_hint(void* self) {
    return kImageAnnotator__KImageAnnotator_QBaseSizeHint((kImageAnnotator__KImageAnnotator*)self);
}

void k_imageannotator__kimageannotator_show_annotator(void* self) {
    kImageAnnotator__KImageAnnotator_ShowAnnotator((kImageAnnotator__KImageAnnotator*)self);
}

void k_imageannotator__kimageannotator_show_cropper(void* self) {
    kImageAnnotator__KImageAnnotator_ShowCropper((kImageAnnotator__KImageAnnotator*)self);
}

void k_imageannotator__kimageannotator_show_scaler(void* self) {
    kImageAnnotator__KImageAnnotator_ShowScaler((kImageAnnotator__KImageAnnotator*)self);
}

void k_imageannotator__kimageannotator_show_rotator(void* self) {
    kImageAnnotator__KImageAnnotator_ShowRotator((kImageAnnotator__KImageAnnotator*)self);
}

void k_imageannotator__kimageannotator_show_canvas_modifier(void* self) {
    kImageAnnotator__KImageAnnotator_ShowCanvasModifier((kImageAnnotator__KImageAnnotator*)self);
}

void k_imageannotator__kimageannotator_show_cutter(void* self) {
    kImageAnnotator__KImageAnnotator_ShowCutter((kImageAnnotator__KImageAnnotator*)self);
}

void k_imageannotator__kimageannotator_load_image(void* self, void* pixmap) {
    kImageAnnotator__KImageAnnotator_LoadImage((kImageAnnotator__KImageAnnotator*)self, (QPixmap*)pixmap);
}

int32_t k_imageannotator__kimageannotator_add_tab(void* self, void* pixmap, const char* title, const char* toolTip) {
    return kImageAnnotator__KImageAnnotator_AddTab((kImageAnnotator__KImageAnnotator*)self, (QPixmap*)pixmap, qstring(title), qstring(toolTip));
}

void k_imageannotator__kimageannotator_update_tab_info(void* self, int index, const char* title, const char* toolTip) {
    kImageAnnotator__KImageAnnotator_UpdateTabInfo((kImageAnnotator__KImageAnnotator*)self, index, qstring(title), qstring(toolTip));
}

void k_imageannotator__kimageannotator_insert_image_item(void* self, void* position, void* pixmap) {
    kImageAnnotator__KImageAnnotator_InsertImageItem((kImageAnnotator__KImageAnnotator*)self, (QPointF*)position, (QPixmap*)pixmap);
}

void k_imageannotator__kimageannotator_set_text_font(void* self, void* font) {
    kImageAnnotator__KImageAnnotator_SetTextFont((kImageAnnotator__KImageAnnotator*)self, (QFont*)font);
}

void k_imageannotator__kimageannotator_set_number_font(void* self, void* font) {
    kImageAnnotator__KImageAnnotator_SetNumberFont((kImageAnnotator__KImageAnnotator*)self, (QFont*)font);
}

void k_imageannotator__kimageannotator_set_item_shadow_enabled(void* self, bool enabled) {
    kImageAnnotator__KImageAnnotator_SetItemShadowEnabled((kImageAnnotator__KImageAnnotator*)self, enabled);
}

void k_imageannotator__kimageannotator_set_smooth_path_enabled(void* self, bool enabled) {
    kImageAnnotator__KImageAnnotator_SetSmoothPathEnabled((kImageAnnotator__KImageAnnotator*)self, enabled);
}

void k_imageannotator__kimageannotator_set_save_tool_selection(void* self, bool enabled) {
    kImageAnnotator__KImageAnnotator_SetSaveToolSelection((kImageAnnotator__KImageAnnotator*)self, enabled);
}

void k_imageannotator__kimageannotator_set_smooth_factor(void* self, int factor) {
    kImageAnnotator__KImageAnnotator_SetSmoothFactor((kImageAnnotator__KImageAnnotator*)self, factor);
}

void k_imageannotator__kimageannotator_set_switch_to_select_tool_after_drawing_item(void* self, bool enabled) {
    kImageAnnotator__KImageAnnotator_SetSwitchToSelectToolAfterDrawingItem((kImageAnnotator__KImageAnnotator*)self, enabled);
}

void k_imageannotator__kimageannotator_set_number_tool_seed_change_updates_all_items(void* self, bool enabled) {
    kImageAnnotator__KImageAnnotator_SetNumberToolSeedChangeUpdatesAllItems((kImageAnnotator__KImageAnnotator*)self, enabled);
}

void k_imageannotator__kimageannotator_set_tab_bar_auto_hide(void* self, bool enabled) {
    kImageAnnotator__KImageAnnotator_SetTabBarAutoHide((kImageAnnotator__KImageAnnotator*)self, enabled);
}

void k_imageannotator__kimageannotator_remove_tab(void* self, int index) {
    kImageAnnotator__KImageAnnotator_RemoveTab((kImageAnnotator__KImageAnnotator*)self, index);
}

void k_imageannotator__kimageannotator_set_stickers(void* self, const char* stickerPaths[static 1], bool keepDefault) {
    size_t stickerPaths_len = libqt_strv_length(stickerPaths);
    libqt_string* stickerPaths_qstr = (libqt_string*)malloc(stickerPaths_len * sizeof(libqt_string));
    if (stickerPaths_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_imageannotator__kimageannotator_set_stickers");
        abort();
    }
    for (size_t i = 0; i < stickerPaths_len; ++i) {
        stickerPaths_qstr[i] = qstring(stickerPaths[i]);
    }
    libqt_list stickerPaths_list = qlist(stickerPaths_qstr, stickerPaths_len);
    kImageAnnotator__KImageAnnotator_SetStickers((kImageAnnotator__KImageAnnotator*)self, stickerPaths_list, keepDefault);
    free(stickerPaths_qstr);
}

void k_imageannotator__kimageannotator_add_tab_context_menu_actions(void* self, libqt_list actions) {
    kImageAnnotator__KImageAnnotator_AddTabContextMenuActions((kImageAnnotator__KImageAnnotator*)self, actions);
}

void k_imageannotator__kimageannotator_set_settings_collapsed(void* self, bool isCollapsed) {
    kImageAnnotator__KImageAnnotator_SetSettingsCollapsed((kImageAnnotator__KImageAnnotator*)self, isCollapsed);
}

void k_imageannotator__kimageannotator_set_canvas_color(void* self, void* color) {
    kImageAnnotator__KImageAnnotator_SetCanvasColor((kImageAnnotator__KImageAnnotator*)self, (QColor*)color);
}

void k_imageannotator__kimageannotator_set_select_item_after_drawing(void* self, bool enabled) {
    kImageAnnotator__KImageAnnotator_SetSelectItemAfterDrawing((kImageAnnotator__KImageAnnotator*)self, enabled);
}

void k_imageannotator__kimageannotator_set_controls_widget_visible(void* self, bool enabled) {
    kImageAnnotator__KImageAnnotator_SetControlsWidgetVisible((kImageAnnotator__KImageAnnotator*)self, enabled);
}

void k_imageannotator__kimageannotator_image_changed(void* self) {
    kImageAnnotator__KImageAnnotator_ImageChanged((kImageAnnotator__KImageAnnotator*)self);
}

void k_imageannotator__kimageannotator_on_image_changed(void* self, void (*callback)(void*)) {
    kImageAnnotator__KImageAnnotator_Connect_ImageChanged((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_current_tab_changed(void* self, int index) {
    kImageAnnotator__KImageAnnotator_CurrentTabChanged((kImageAnnotator__KImageAnnotator*)self, index);
}

void k_imageannotator__kimageannotator_on_current_tab_changed(void* self, void (*callback)(void*, int)) {
    kImageAnnotator__KImageAnnotator_Connect_CurrentTabChanged((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_tab_close_requested(void* self, int index) {
    kImageAnnotator__KImageAnnotator_TabCloseRequested((kImageAnnotator__KImageAnnotator*)self, index);
}

void k_imageannotator__kimageannotator_on_tab_close_requested(void* self, void (*callback)(void*, int)) {
    kImageAnnotator__KImageAnnotator_Connect_TabCloseRequested((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_tab_moved(void* self, int fromIndex, int toIndex) {
    kImageAnnotator__KImageAnnotator_TabMoved((kImageAnnotator__KImageAnnotator*)self, fromIndex, toIndex);
}

void k_imageannotator__kimageannotator_on_tab_moved(void* self, void (*callback)(void*, int, int)) {
    kImageAnnotator__KImageAnnotator_Connect_TabMoved((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_tab_context_menu_opened(void* self, int index) {
    kImageAnnotator__KImageAnnotator_TabContextMenuOpened((kImageAnnotator__KImageAnnotator*)self, index);
}

void k_imageannotator__kimageannotator_on_tab_context_menu_opened(void* self, void (*callback)(void*, int)) {
    kImageAnnotator__KImageAnnotator_Connect_TabContextMenuOpened((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

const char* k_imageannotator__kimageannotator_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_imageannotator__kimageannotator_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t k_imageannotator__kimageannotator_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_imageannotator__kimageannotator_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_imageannotator__kimageannotator_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_imageannotator__kimageannotator_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_imageannotator__kimageannotator_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_imageannotator__kimageannotator_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_imageannotator__kimageannotator_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_imageannotator__kimageannotator_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_imageannotator__kimageannotator_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_imageannotator__kimageannotator_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_imageannotator__kimageannotator_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_imageannotator__kimageannotator_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_imageannotator__kimageannotator_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_imageannotator__kimageannotator_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_imageannotator__kimageannotator_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_imageannotator__kimageannotator_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_imageannotator__kimageannotator_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_imageannotator__kimageannotator_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_imageannotator__kimageannotator_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_imageannotator__kimageannotator_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_imageannotator__kimageannotator_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_imageannotator__kimageannotator_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_imageannotator__kimageannotator_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_imageannotator__kimageannotator_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_imageannotator__kimageannotator_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_imageannotator__kimageannotator_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_imageannotator__kimageannotator_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_imageannotator__kimageannotator_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_imageannotator__kimageannotator_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_imageannotator__kimageannotator_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_imageannotator__kimageannotator_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_imageannotator__kimageannotator_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_imageannotator__kimageannotator_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_imageannotator__kimageannotator_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_imageannotator__kimageannotator_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_imageannotator__kimageannotator_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_imageannotator__kimageannotator_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_imageannotator__kimageannotator_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_imageannotator__kimageannotator_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_imageannotator__kimageannotator_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_imageannotator__kimageannotator_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_imageannotator__kimageannotator_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_imageannotator__kimageannotator_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_imageannotator__kimageannotator_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_imageannotator__kimageannotator_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_imageannotator__kimageannotator_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_imageannotator__kimageannotator_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_imageannotator__kimageannotator_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_imageannotator__kimageannotator_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_imageannotator__kimageannotator_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_imageannotator__kimageannotator_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_imageannotator__kimageannotator_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_imageannotator__kimageannotator_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_imageannotator__kimageannotator_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_imageannotator__kimageannotator_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_imageannotator__kimageannotator_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_imageannotator__kimageannotator_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_imageannotator__kimageannotator_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_imageannotator__kimageannotator_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_imageannotator__kimageannotator_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_imageannotator__kimageannotator_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_imageannotator__kimageannotator_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_imageannotator__kimageannotator_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_imageannotator__kimageannotator_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_imageannotator__kimageannotator_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_imageannotator__kimageannotator_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_imageannotator__kimageannotator_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_imageannotator__kimageannotator_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_imageannotator__kimageannotator_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_imageannotator__kimageannotator_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_imageannotator__kimageannotator_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_imageannotator__kimageannotator_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_imageannotator__kimageannotator_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_imageannotator__kimageannotator_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_imageannotator__kimageannotator_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_imageannotator__kimageannotator_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_imageannotator__kimageannotator_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_imageannotator__kimageannotator_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_imageannotator__kimageannotator_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_imageannotator__kimageannotator_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_imageannotator__kimageannotator_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_imageannotator__kimageannotator_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_imageannotator__kimageannotator_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_imageannotator__kimageannotator_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_imageannotator__kimageannotator_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_imageannotator__kimageannotator_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_imageannotator__kimageannotator_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_imageannotator__kimageannotator_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_imageannotator__kimageannotator_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_imageannotator__kimageannotator_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_imageannotator__kimageannotator_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_imageannotator__kimageannotator_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_imageannotator__kimageannotator_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_imageannotator__kimageannotator_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_imageannotator__kimageannotator_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_imageannotator__kimageannotator_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_imageannotator__kimageannotator_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_imageannotator__kimageannotator_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_imageannotator__kimageannotator_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_imageannotator__kimageannotator_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_imageannotator__kimageannotator_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_imageannotator__kimageannotator_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_imageannotator__kimageannotator_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_imageannotator__kimageannotator_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_imageannotator__kimageannotator_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_imageannotator__kimageannotator_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_imageannotator__kimageannotator_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_imageannotator__kimageannotator_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_imageannotator__kimageannotator_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_imageannotator__kimageannotator_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_imageannotator__kimageannotator_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_imageannotator__kimageannotator_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_imageannotator__kimageannotator_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_imageannotator__kimageannotator_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_imageannotator__kimageannotator_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_imageannotator__kimageannotator_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_imageannotator__kimageannotator_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_imageannotator__kimageannotator_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_imageannotator__kimageannotator_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_imageannotator__kimageannotator_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_imageannotator__kimageannotator_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_imageannotator__kimageannotator_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_imageannotator__kimageannotator_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_imageannotator__kimageannotator_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_imageannotator__kimageannotator_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_imageannotator__kimageannotator_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_imageannotator__kimageannotator_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_imageannotator__kimageannotator_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_imageannotator__kimageannotator_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_imageannotator__kimageannotator_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_imageannotator__kimageannotator_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_imageannotator__kimageannotator_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_imageannotator__kimageannotator_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_imageannotator__kimageannotator_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_imageannotator__kimageannotator_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_imageannotator__kimageannotator_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_imageannotator__kimageannotator_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_imageannotator__kimageannotator_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_imageannotator__kimageannotator_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_imageannotator__kimageannotator_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_imageannotator__kimageannotator_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_imageannotator__kimageannotator_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_imageannotator__kimageannotator_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_imageannotator__kimageannotator_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_imageannotator__kimageannotator_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_imageannotator__kimageannotator_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_imageannotator__kimageannotator_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_imageannotator__kimageannotator_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_imageannotator__kimageannotator_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_imageannotator__kimageannotator_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_imageannotator__kimageannotator_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_imageannotator__kimageannotator_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_imageannotator__kimageannotator_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_imageannotator__kimageannotator_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_imageannotator__kimageannotator_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_imageannotator__kimageannotator_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_imageannotator__kimageannotator_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_imageannotator__kimageannotator_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_imageannotator__kimageannotator_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_imageannotator__kimageannotator_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_imageannotator__kimageannotator_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_imageannotator__kimageannotator_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_imageannotator__kimageannotator_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_imageannotator__kimageannotator_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_imageannotator__kimageannotator_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_imageannotator__kimageannotator_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_imageannotator__kimageannotator_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_imageannotator__kimageannotator_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_imageannotator__kimageannotator_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_imageannotator__kimageannotator_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_imageannotator__kimageannotator_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_imageannotator__kimageannotator_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_imageannotator__kimageannotator_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_imageannotator__kimageannotator_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_imageannotator__kimageannotator_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_imageannotator__kimageannotator_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_imageannotator__kimageannotator_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_imageannotator__kimageannotator_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_imageannotator__kimageannotator_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_imageannotator__kimageannotator_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_imageannotator__kimageannotator_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_imageannotator__kimageannotator_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_imageannotator__kimageannotator_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_imageannotator__kimageannotator_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_imageannotator__kimageannotator_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_imageannotator__kimageannotator_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_imageannotator__kimageannotator_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_imageannotator__kimageannotator_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_imageannotator__kimageannotator_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_imageannotator__kimageannotator_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_imageannotator__kimageannotator_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_imageannotator__kimageannotator_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_imageannotator__kimageannotator_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_imageannotator__kimageannotator_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_imageannotator__kimageannotator_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_imageannotator__kimageannotator_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_imageannotator__kimageannotator_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_imageannotator__kimageannotator_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t k_imageannotator__kimageannotator_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_imageannotator__kimageannotator_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t k_imageannotator__kimageannotator_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_imageannotator__kimageannotator_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_imageannotator__kimageannotator_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_imageannotator__kimageannotator_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_imageannotator__kimageannotator_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_imageannotator__kimageannotator_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_imageannotator__kimageannotator_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_imageannotator__kimageannotator_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_imageannotator__kimageannotator_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_imageannotator__kimageannotator_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_imageannotator__kimageannotator_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_imageannotator__kimageannotator_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_imageannotator__kimageannotator_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_imageannotator__kimageannotator_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_imageannotator__kimageannotator_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_imageannotator__kimageannotator_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_imageannotator__kimageannotator_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_imageannotator__kimageannotator_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_imageannotator__kimageannotator_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_imageannotator__kimageannotator_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_imageannotator__kimageannotator_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_imageannotator__kimageannotator_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_imageannotator__kimageannotator_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_imageannotator__kimageannotator_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_imageannotator__kimageannotator_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_imageannotator__kimageannotator_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_imageannotator__kimageannotator_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_imageannotator__kimageannotator_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_imageannotator__kimageannotator_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_imageannotator__kimageannotator_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_imageannotator__kimageannotator_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_imageannotator__kimageannotator_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_imageannotator__kimageannotator_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_imageannotator__kimageannotator_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_imageannotator__kimageannotator_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_imageannotator__kimageannotator_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_imageannotator__kimageannotator_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_imageannotator__kimageannotator_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_imageannotator__kimageannotator_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_imageannotator__kimageannotator_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_imageannotator__kimageannotator_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_imageannotator__kimageannotator_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_imageannotator__kimageannotator_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_imageannotator__kimageannotator_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_imageannotator__kimageannotator_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_imageannotator__kimageannotator_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_imageannotator__kimageannotator_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_imageannotator__kimageannotator_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_imageannotator__kimageannotator_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_imageannotator__kimageannotator_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_imageannotator__kimageannotator_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_imageannotator__kimageannotator_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_imageannotator__kimageannotator_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_imageannotator__kimageannotator_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_imageannotator__kimageannotator_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_imageannotator__kimageannotator_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_imageannotator__kimageannotator_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_imageannotator__kimageannotator_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_imageannotator__kimageannotator_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_imageannotator__kimageannotator_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_imageannotator__kimageannotator_dynamic_property_names");
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

QBindingStorage* k_imageannotator__kimageannotator_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_imageannotator__kimageannotator_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_imageannotator__kimageannotator_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_imageannotator__kimageannotator_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_imageannotator__kimageannotator_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_imageannotator__kimageannotator_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_imageannotator__kimageannotator_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_imageannotator__kimageannotator_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_imageannotator__kimageannotator_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_imageannotator__kimageannotator_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_imageannotator__kimageannotator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_imageannotator__kimageannotator_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_imageannotator__kimageannotator_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_imageannotator__kimageannotator_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_imageannotator__kimageannotator_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_imageannotator__kimageannotator_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_imageannotator__kimageannotator_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_imageannotator__kimageannotator_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_imageannotator__kimageannotator_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_imageannotator__kimageannotator_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_imageannotator__kimageannotator_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_imageannotator__kimageannotator_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_imageannotator__kimageannotator_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_imageannotator__kimageannotator_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_imageannotator__kimageannotator_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_imageannotator__kimageannotator_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t k_imageannotator__kimageannotator_dev_type(void* self) {
    return kImageAnnotator__KImageAnnotator_DevType((kImageAnnotator__KImageAnnotator*)self);
}

int32_t k_imageannotator__kimageannotator_qbase_dev_type(void* self) {
    return kImageAnnotator__KImageAnnotator_QBaseDevType((kImageAnnotator__KImageAnnotator*)self);
}

void k_imageannotator__kimageannotator_on_dev_type(void* self, int32_t (*callback)()) {
    kImageAnnotator__KImageAnnotator_OnDevType((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_set_visible(void* self, bool visible) {
    kImageAnnotator__KImageAnnotator_SetVisible((kImageAnnotator__KImageAnnotator*)self, visible);
}

void k_imageannotator__kimageannotator_qbase_set_visible(void* self, bool visible) {
    kImageAnnotator__KImageAnnotator_QBaseSetVisible((kImageAnnotator__KImageAnnotator*)self, visible);
}

void k_imageannotator__kimageannotator_on_set_visible(void* self, void (*callback)(void*, bool)) {
    kImageAnnotator__KImageAnnotator_OnSetVisible((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

QSize* k_imageannotator__kimageannotator_minimum_size_hint(void* self) {
    return kImageAnnotator__KImageAnnotator_MinimumSizeHint((kImageAnnotator__KImageAnnotator*)self);
}

QSize* k_imageannotator__kimageannotator_qbase_minimum_size_hint(void* self) {
    return kImageAnnotator__KImageAnnotator_QBaseMinimumSizeHint((kImageAnnotator__KImageAnnotator*)self);
}

void k_imageannotator__kimageannotator_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    kImageAnnotator__KImageAnnotator_OnMinimumSizeHint((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

int32_t k_imageannotator__kimageannotator_height_for_width(void* self, int param1) {
    return kImageAnnotator__KImageAnnotator_HeightForWidth((kImageAnnotator__KImageAnnotator*)self, param1);
}

int32_t k_imageannotator__kimageannotator_qbase_height_for_width(void* self, int param1) {
    return kImageAnnotator__KImageAnnotator_QBaseHeightForWidth((kImageAnnotator__KImageAnnotator*)self, param1);
}

void k_imageannotator__kimageannotator_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    kImageAnnotator__KImageAnnotator_OnHeightForWidth((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

bool k_imageannotator__kimageannotator_has_height_for_width(void* self) {
    return kImageAnnotator__KImageAnnotator_HasHeightForWidth((kImageAnnotator__KImageAnnotator*)self);
}

bool k_imageannotator__kimageannotator_qbase_has_height_for_width(void* self) {
    return kImageAnnotator__KImageAnnotator_QBaseHasHeightForWidth((kImageAnnotator__KImageAnnotator*)self);
}

void k_imageannotator__kimageannotator_on_has_height_for_width(void* self, bool (*callback)()) {
    kImageAnnotator__KImageAnnotator_OnHasHeightForWidth((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

QPaintEngine* k_imageannotator__kimageannotator_paint_engine(void* self) {
    return kImageAnnotator__KImageAnnotator_PaintEngine((kImageAnnotator__KImageAnnotator*)self);
}

QPaintEngine* k_imageannotator__kimageannotator_qbase_paint_engine(void* self) {
    return kImageAnnotator__KImageAnnotator_QBasePaintEngine((kImageAnnotator__KImageAnnotator*)self);
}

void k_imageannotator__kimageannotator_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    kImageAnnotator__KImageAnnotator_OnPaintEngine((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

bool k_imageannotator__kimageannotator_event(void* self, void* event) {
    return kImageAnnotator__KImageAnnotator_Event((kImageAnnotator__KImageAnnotator*)self, (QEvent*)event);
}

bool k_imageannotator__kimageannotator_qbase_event(void* self, void* event) {
    return kImageAnnotator__KImageAnnotator_QBaseEvent((kImageAnnotator__KImageAnnotator*)self, (QEvent*)event);
}

void k_imageannotator__kimageannotator_on_event(void* self, bool (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnEvent((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_mouse_press_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_MousePressEvent((kImageAnnotator__KImageAnnotator*)self, (QMouseEvent*)event);
}

void k_imageannotator__kimageannotator_qbase_mouse_press_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_QBaseMousePressEvent((kImageAnnotator__KImageAnnotator*)self, (QMouseEvent*)event);
}

void k_imageannotator__kimageannotator_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnMousePressEvent((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_mouse_release_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_MouseReleaseEvent((kImageAnnotator__KImageAnnotator*)self, (QMouseEvent*)event);
}

void k_imageannotator__kimageannotator_qbase_mouse_release_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_QBaseMouseReleaseEvent((kImageAnnotator__KImageAnnotator*)self, (QMouseEvent*)event);
}

void k_imageannotator__kimageannotator_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnMouseReleaseEvent((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_mouse_double_click_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_MouseDoubleClickEvent((kImageAnnotator__KImageAnnotator*)self, (QMouseEvent*)event);
}

void k_imageannotator__kimageannotator_qbase_mouse_double_click_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_QBaseMouseDoubleClickEvent((kImageAnnotator__KImageAnnotator*)self, (QMouseEvent*)event);
}

void k_imageannotator__kimageannotator_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnMouseDoubleClickEvent((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_mouse_move_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_MouseMoveEvent((kImageAnnotator__KImageAnnotator*)self, (QMouseEvent*)event);
}

void k_imageannotator__kimageannotator_qbase_mouse_move_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_QBaseMouseMoveEvent((kImageAnnotator__KImageAnnotator*)self, (QMouseEvent*)event);
}

void k_imageannotator__kimageannotator_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnMouseMoveEvent((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_wheel_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_WheelEvent((kImageAnnotator__KImageAnnotator*)self, (QWheelEvent*)event);
}

void k_imageannotator__kimageannotator_qbase_wheel_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_QBaseWheelEvent((kImageAnnotator__KImageAnnotator*)self, (QWheelEvent*)event);
}

void k_imageannotator__kimageannotator_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnWheelEvent((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_key_press_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_KeyPressEvent((kImageAnnotator__KImageAnnotator*)self, (QKeyEvent*)event);
}

void k_imageannotator__kimageannotator_qbase_key_press_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_QBaseKeyPressEvent((kImageAnnotator__KImageAnnotator*)self, (QKeyEvent*)event);
}

void k_imageannotator__kimageannotator_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnKeyPressEvent((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_key_release_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_KeyReleaseEvent((kImageAnnotator__KImageAnnotator*)self, (QKeyEvent*)event);
}

void k_imageannotator__kimageannotator_qbase_key_release_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_QBaseKeyReleaseEvent((kImageAnnotator__KImageAnnotator*)self, (QKeyEvent*)event);
}

void k_imageannotator__kimageannotator_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnKeyReleaseEvent((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_focus_in_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_FocusInEvent((kImageAnnotator__KImageAnnotator*)self, (QFocusEvent*)event);
}

void k_imageannotator__kimageannotator_qbase_focus_in_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_QBaseFocusInEvent((kImageAnnotator__KImageAnnotator*)self, (QFocusEvent*)event);
}

void k_imageannotator__kimageannotator_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnFocusInEvent((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_focus_out_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_FocusOutEvent((kImageAnnotator__KImageAnnotator*)self, (QFocusEvent*)event);
}

void k_imageannotator__kimageannotator_qbase_focus_out_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_QBaseFocusOutEvent((kImageAnnotator__KImageAnnotator*)self, (QFocusEvent*)event);
}

void k_imageannotator__kimageannotator_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnFocusOutEvent((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_enter_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_EnterEvent((kImageAnnotator__KImageAnnotator*)self, (QEnterEvent*)event);
}

void k_imageannotator__kimageannotator_qbase_enter_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_QBaseEnterEvent((kImageAnnotator__KImageAnnotator*)self, (QEnterEvent*)event);
}

void k_imageannotator__kimageannotator_on_enter_event(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnEnterEvent((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_leave_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_LeaveEvent((kImageAnnotator__KImageAnnotator*)self, (QEvent*)event);
}

void k_imageannotator__kimageannotator_qbase_leave_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_QBaseLeaveEvent((kImageAnnotator__KImageAnnotator*)self, (QEvent*)event);
}

void k_imageannotator__kimageannotator_on_leave_event(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnLeaveEvent((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_paint_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_PaintEvent((kImageAnnotator__KImageAnnotator*)self, (QPaintEvent*)event);
}

void k_imageannotator__kimageannotator_qbase_paint_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_QBasePaintEvent((kImageAnnotator__KImageAnnotator*)self, (QPaintEvent*)event);
}

void k_imageannotator__kimageannotator_on_paint_event(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnPaintEvent((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_move_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_MoveEvent((kImageAnnotator__KImageAnnotator*)self, (QMoveEvent*)event);
}

void k_imageannotator__kimageannotator_qbase_move_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_QBaseMoveEvent((kImageAnnotator__KImageAnnotator*)self, (QMoveEvent*)event);
}

void k_imageannotator__kimageannotator_on_move_event(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnMoveEvent((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_resize_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_ResizeEvent((kImageAnnotator__KImageAnnotator*)self, (QResizeEvent*)event);
}

void k_imageannotator__kimageannotator_qbase_resize_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_QBaseResizeEvent((kImageAnnotator__KImageAnnotator*)self, (QResizeEvent*)event);
}

void k_imageannotator__kimageannotator_on_resize_event(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnResizeEvent((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_close_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_CloseEvent((kImageAnnotator__KImageAnnotator*)self, (QCloseEvent*)event);
}

void k_imageannotator__kimageannotator_qbase_close_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_QBaseCloseEvent((kImageAnnotator__KImageAnnotator*)self, (QCloseEvent*)event);
}

void k_imageannotator__kimageannotator_on_close_event(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnCloseEvent((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_context_menu_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_ContextMenuEvent((kImageAnnotator__KImageAnnotator*)self, (QContextMenuEvent*)event);
}

void k_imageannotator__kimageannotator_qbase_context_menu_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_QBaseContextMenuEvent((kImageAnnotator__KImageAnnotator*)self, (QContextMenuEvent*)event);
}

void k_imageannotator__kimageannotator_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnContextMenuEvent((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_tablet_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_TabletEvent((kImageAnnotator__KImageAnnotator*)self, (QTabletEvent*)event);
}

void k_imageannotator__kimageannotator_qbase_tablet_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_QBaseTabletEvent((kImageAnnotator__KImageAnnotator*)self, (QTabletEvent*)event);
}

void k_imageannotator__kimageannotator_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnTabletEvent((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_action_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_ActionEvent((kImageAnnotator__KImageAnnotator*)self, (QActionEvent*)event);
}

void k_imageannotator__kimageannotator_qbase_action_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_QBaseActionEvent((kImageAnnotator__KImageAnnotator*)self, (QActionEvent*)event);
}

void k_imageannotator__kimageannotator_on_action_event(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnActionEvent((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_drag_enter_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_DragEnterEvent((kImageAnnotator__KImageAnnotator*)self, (QDragEnterEvent*)event);
}

void k_imageannotator__kimageannotator_qbase_drag_enter_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_QBaseDragEnterEvent((kImageAnnotator__KImageAnnotator*)self, (QDragEnterEvent*)event);
}

void k_imageannotator__kimageannotator_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnDragEnterEvent((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_drag_move_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_DragMoveEvent((kImageAnnotator__KImageAnnotator*)self, (QDragMoveEvent*)event);
}

void k_imageannotator__kimageannotator_qbase_drag_move_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_QBaseDragMoveEvent((kImageAnnotator__KImageAnnotator*)self, (QDragMoveEvent*)event);
}

void k_imageannotator__kimageannotator_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnDragMoveEvent((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_drag_leave_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_DragLeaveEvent((kImageAnnotator__KImageAnnotator*)self, (QDragLeaveEvent*)event);
}

void k_imageannotator__kimageannotator_qbase_drag_leave_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_QBaseDragLeaveEvent((kImageAnnotator__KImageAnnotator*)self, (QDragLeaveEvent*)event);
}

void k_imageannotator__kimageannotator_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnDragLeaveEvent((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_drop_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_DropEvent((kImageAnnotator__KImageAnnotator*)self, (QDropEvent*)event);
}

void k_imageannotator__kimageannotator_qbase_drop_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_QBaseDropEvent((kImageAnnotator__KImageAnnotator*)self, (QDropEvent*)event);
}

void k_imageannotator__kimageannotator_on_drop_event(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnDropEvent((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_show_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_ShowEvent((kImageAnnotator__KImageAnnotator*)self, (QShowEvent*)event);
}

void k_imageannotator__kimageannotator_qbase_show_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_QBaseShowEvent((kImageAnnotator__KImageAnnotator*)self, (QShowEvent*)event);
}

void k_imageannotator__kimageannotator_on_show_event(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnShowEvent((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_hide_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_HideEvent((kImageAnnotator__KImageAnnotator*)self, (QHideEvent*)event);
}

void k_imageannotator__kimageannotator_qbase_hide_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_QBaseHideEvent((kImageAnnotator__KImageAnnotator*)self, (QHideEvent*)event);
}

void k_imageannotator__kimageannotator_on_hide_event(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnHideEvent((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

bool k_imageannotator__kimageannotator_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return kImageAnnotator__KImageAnnotator_NativeEvent((kImageAnnotator__KImageAnnotator*)self, qstring(eventType), message, result);
}

bool k_imageannotator__kimageannotator_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return kImageAnnotator__KImageAnnotator_QBaseNativeEvent((kImageAnnotator__KImageAnnotator*)self, qstring(eventType), message, result);
}

void k_imageannotator__kimageannotator_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    kImageAnnotator__KImageAnnotator_OnNativeEvent((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_change_event(void* self, void* param1) {
    kImageAnnotator__KImageAnnotator_ChangeEvent((kImageAnnotator__KImageAnnotator*)self, (QEvent*)param1);
}

void k_imageannotator__kimageannotator_qbase_change_event(void* self, void* param1) {
    kImageAnnotator__KImageAnnotator_QBaseChangeEvent((kImageAnnotator__KImageAnnotator*)self, (QEvent*)param1);
}

void k_imageannotator__kimageannotator_on_change_event(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnChangeEvent((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

int32_t k_imageannotator__kimageannotator_metric(void* self, int32_t param1) {
    return kImageAnnotator__KImageAnnotator_Metric((kImageAnnotator__KImageAnnotator*)self, param1);
}

int32_t k_imageannotator__kimageannotator_qbase_metric(void* self, int32_t param1) {
    return kImageAnnotator__KImageAnnotator_QBaseMetric((kImageAnnotator__KImageAnnotator*)self, param1);
}

void k_imageannotator__kimageannotator_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    kImageAnnotator__KImageAnnotator_OnMetric((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_init_painter(void* self, void* painter) {
    kImageAnnotator__KImageAnnotator_InitPainter((kImageAnnotator__KImageAnnotator*)self, (QPainter*)painter);
}

void k_imageannotator__kimageannotator_qbase_init_painter(void* self, void* painter) {
    kImageAnnotator__KImageAnnotator_QBaseInitPainter((kImageAnnotator__KImageAnnotator*)self, (QPainter*)painter);
}

void k_imageannotator__kimageannotator_on_init_painter(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnInitPainter((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

QPaintDevice* k_imageannotator__kimageannotator_redirected(void* self, void* offset) {
    return kImageAnnotator__KImageAnnotator_Redirected((kImageAnnotator__KImageAnnotator*)self, (QPoint*)offset);
}

QPaintDevice* k_imageannotator__kimageannotator_qbase_redirected(void* self, void* offset) {
    return kImageAnnotator__KImageAnnotator_QBaseRedirected((kImageAnnotator__KImageAnnotator*)self, (QPoint*)offset);
}

void k_imageannotator__kimageannotator_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnRedirected((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

QPainter* k_imageannotator__kimageannotator_shared_painter(void* self) {
    return kImageAnnotator__KImageAnnotator_SharedPainter((kImageAnnotator__KImageAnnotator*)self);
}

QPainter* k_imageannotator__kimageannotator_qbase_shared_painter(void* self) {
    return kImageAnnotator__KImageAnnotator_QBaseSharedPainter((kImageAnnotator__KImageAnnotator*)self);
}

void k_imageannotator__kimageannotator_on_shared_painter(void* self, QPainter* (*callback)()) {
    kImageAnnotator__KImageAnnotator_OnSharedPainter((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_input_method_event(void* self, void* param1) {
    kImageAnnotator__KImageAnnotator_InputMethodEvent((kImageAnnotator__KImageAnnotator*)self, (QInputMethodEvent*)param1);
}

void k_imageannotator__kimageannotator_qbase_input_method_event(void* self, void* param1) {
    kImageAnnotator__KImageAnnotator_QBaseInputMethodEvent((kImageAnnotator__KImageAnnotator*)self, (QInputMethodEvent*)param1);
}

void k_imageannotator__kimageannotator_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnInputMethodEvent((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

QVariant* k_imageannotator__kimageannotator_input_method_query(void* self, int64_t param1) {
    return kImageAnnotator__KImageAnnotator_InputMethodQuery((kImageAnnotator__KImageAnnotator*)self, param1);
}

QVariant* k_imageannotator__kimageannotator_qbase_input_method_query(void* self, int64_t param1) {
    return kImageAnnotator__KImageAnnotator_QBaseInputMethodQuery((kImageAnnotator__KImageAnnotator*)self, param1);
}

void k_imageannotator__kimageannotator_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    kImageAnnotator__KImageAnnotator_OnInputMethodQuery((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

bool k_imageannotator__kimageannotator_focus_next_prev_child(void* self, bool next) {
    return kImageAnnotator__KImageAnnotator_FocusNextPrevChild((kImageAnnotator__KImageAnnotator*)self, next);
}

bool k_imageannotator__kimageannotator_qbase_focus_next_prev_child(void* self, bool next) {
    return kImageAnnotator__KImageAnnotator_QBaseFocusNextPrevChild((kImageAnnotator__KImageAnnotator*)self, next);
}

void k_imageannotator__kimageannotator_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    kImageAnnotator__KImageAnnotator_OnFocusNextPrevChild((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

bool k_imageannotator__kimageannotator_event_filter(void* self, void* watched, void* event) {
    return kImageAnnotator__KImageAnnotator_EventFilter((kImageAnnotator__KImageAnnotator*)self, (QObject*)watched, (QEvent*)event);
}

bool k_imageannotator__kimageannotator_qbase_event_filter(void* self, void* watched, void* event) {
    return kImageAnnotator__KImageAnnotator_QBaseEventFilter((kImageAnnotator__KImageAnnotator*)self, (QObject*)watched, (QEvent*)event);
}

void k_imageannotator__kimageannotator_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnEventFilter((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_timer_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_TimerEvent((kImageAnnotator__KImageAnnotator*)self, (QTimerEvent*)event);
}

void k_imageannotator__kimageannotator_qbase_timer_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_QBaseTimerEvent((kImageAnnotator__KImageAnnotator*)self, (QTimerEvent*)event);
}

void k_imageannotator__kimageannotator_on_timer_event(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnTimerEvent((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_child_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_ChildEvent((kImageAnnotator__KImageAnnotator*)self, (QChildEvent*)event);
}

void k_imageannotator__kimageannotator_qbase_child_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_QBaseChildEvent((kImageAnnotator__KImageAnnotator*)self, (QChildEvent*)event);
}

void k_imageannotator__kimageannotator_on_child_event(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnChildEvent((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_custom_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_CustomEvent((kImageAnnotator__KImageAnnotator*)self, (QEvent*)event);
}

void k_imageannotator__kimageannotator_qbase_custom_event(void* self, void* event) {
    kImageAnnotator__KImageAnnotator_QBaseCustomEvent((kImageAnnotator__KImageAnnotator*)self, (QEvent*)event);
}

void k_imageannotator__kimageannotator_on_custom_event(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnCustomEvent((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_connect_notify(void* self, void* signal) {
    kImageAnnotator__KImageAnnotator_ConnectNotify((kImageAnnotator__KImageAnnotator*)self, (QMetaMethod*)signal);
}

void k_imageannotator__kimageannotator_qbase_connect_notify(void* self, void* signal) {
    kImageAnnotator__KImageAnnotator_QBaseConnectNotify((kImageAnnotator__KImageAnnotator*)self, (QMetaMethod*)signal);
}

void k_imageannotator__kimageannotator_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnConnectNotify((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_disconnect_notify(void* self, void* signal) {
    kImageAnnotator__KImageAnnotator_DisconnectNotify((kImageAnnotator__KImageAnnotator*)self, (QMetaMethod*)signal);
}

void k_imageannotator__kimageannotator_qbase_disconnect_notify(void* self, void* signal) {
    kImageAnnotator__KImageAnnotator_QBaseDisconnectNotify((kImageAnnotator__KImageAnnotator*)self, (QMetaMethod*)signal);
}

void k_imageannotator__kimageannotator_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnDisconnectNotify((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_update_micro_focus(void* self) {
    kImageAnnotator__KImageAnnotator_UpdateMicroFocus((kImageAnnotator__KImageAnnotator*)self);
}

void k_imageannotator__kimageannotator_qbase_update_micro_focus(void* self) {
    kImageAnnotator__KImageAnnotator_QBaseUpdateMicroFocus((kImageAnnotator__KImageAnnotator*)self);
}

void k_imageannotator__kimageannotator_on_update_micro_focus(void* self, void (*callback)()) {
    kImageAnnotator__KImageAnnotator_OnUpdateMicroFocus((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_create(void* self) {
    kImageAnnotator__KImageAnnotator_Create((kImageAnnotator__KImageAnnotator*)self);
}

void k_imageannotator__kimageannotator_qbase_create(void* self) {
    kImageAnnotator__KImageAnnotator_QBaseCreate((kImageAnnotator__KImageAnnotator*)self);
}

void k_imageannotator__kimageannotator_on_create(void* self, void (*callback)()) {
    kImageAnnotator__KImageAnnotator_OnCreate((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_destroy(void* self) {
    kImageAnnotator__KImageAnnotator_Destroy((kImageAnnotator__KImageAnnotator*)self);
}

void k_imageannotator__kimageannotator_qbase_destroy(void* self) {
    kImageAnnotator__KImageAnnotator_QBaseDestroy((kImageAnnotator__KImageAnnotator*)self);
}

void k_imageannotator__kimageannotator_on_destroy(void* self, void (*callback)()) {
    kImageAnnotator__KImageAnnotator_OnDestroy((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

bool k_imageannotator__kimageannotator_focus_next_child(void* self) {
    return kImageAnnotator__KImageAnnotator_FocusNextChild((kImageAnnotator__KImageAnnotator*)self);
}

bool k_imageannotator__kimageannotator_qbase_focus_next_child(void* self) {
    return kImageAnnotator__KImageAnnotator_QBaseFocusNextChild((kImageAnnotator__KImageAnnotator*)self);
}

void k_imageannotator__kimageannotator_on_focus_next_child(void* self, bool (*callback)()) {
    kImageAnnotator__KImageAnnotator_OnFocusNextChild((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

bool k_imageannotator__kimageannotator_focus_previous_child(void* self) {
    return kImageAnnotator__KImageAnnotator_FocusPreviousChild((kImageAnnotator__KImageAnnotator*)self);
}

bool k_imageannotator__kimageannotator_qbase_focus_previous_child(void* self) {
    return kImageAnnotator__KImageAnnotator_QBaseFocusPreviousChild((kImageAnnotator__KImageAnnotator*)self);
}

void k_imageannotator__kimageannotator_on_focus_previous_child(void* self, bool (*callback)()) {
    kImageAnnotator__KImageAnnotator_OnFocusPreviousChild((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

QObject* k_imageannotator__kimageannotator_sender(void* self) {
    return kImageAnnotator__KImageAnnotator_Sender((kImageAnnotator__KImageAnnotator*)self);
}

QObject* k_imageannotator__kimageannotator_qbase_sender(void* self) {
    return kImageAnnotator__KImageAnnotator_QBaseSender((kImageAnnotator__KImageAnnotator*)self);
}

void k_imageannotator__kimageannotator_on_sender(void* self, QObject* (*callback)()) {
    kImageAnnotator__KImageAnnotator_OnSender((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

int32_t k_imageannotator__kimageannotator_sender_signal_index(void* self) {
    return kImageAnnotator__KImageAnnotator_SenderSignalIndex((kImageAnnotator__KImageAnnotator*)self);
}

int32_t k_imageannotator__kimageannotator_qbase_sender_signal_index(void* self) {
    return kImageAnnotator__KImageAnnotator_QBaseSenderSignalIndex((kImageAnnotator__KImageAnnotator*)self);
}

void k_imageannotator__kimageannotator_on_sender_signal_index(void* self, int32_t (*callback)()) {
    kImageAnnotator__KImageAnnotator_OnSenderSignalIndex((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

int32_t k_imageannotator__kimageannotator_receivers(void* self, const char* signal) {
    return kImageAnnotator__KImageAnnotator_Receivers((kImageAnnotator__KImageAnnotator*)self, signal);
}

int32_t k_imageannotator__kimageannotator_qbase_receivers(void* self, const char* signal) {
    return kImageAnnotator__KImageAnnotator_QBaseReceivers((kImageAnnotator__KImageAnnotator*)self, signal);
}

void k_imageannotator__kimageannotator_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    kImageAnnotator__KImageAnnotator_OnReceivers((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

bool k_imageannotator__kimageannotator_is_signal_connected(void* self, void* signal) {
    return kImageAnnotator__KImageAnnotator_IsSignalConnected((kImageAnnotator__KImageAnnotator*)self, (QMetaMethod*)signal);
}

bool k_imageannotator__kimageannotator_qbase_is_signal_connected(void* self, void* signal) {
    return kImageAnnotator__KImageAnnotator_QBaseIsSignalConnected((kImageAnnotator__KImageAnnotator*)self, (QMetaMethod*)signal);
}

void k_imageannotator__kimageannotator_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    kImageAnnotator__KImageAnnotator_OnIsSignalConnected((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

double k_imageannotator__kimageannotator_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return kImageAnnotator__KImageAnnotator_GetDecodedMetricF((kImageAnnotator__KImageAnnotator*)self, metricA, metricB);
}

double k_imageannotator__kimageannotator_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return kImageAnnotator__KImageAnnotator_QBaseGetDecodedMetricF((kImageAnnotator__KImageAnnotator*)self, metricA, metricB);
}

void k_imageannotator__kimageannotator_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    kImageAnnotator__KImageAnnotator_OnGetDecodedMetricF((kImageAnnotator__KImageAnnotator*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_imageannotator__kimageannotator_delete(void* self) {
    kImageAnnotator__KImageAnnotator_Delete((kImageAnnotator__KImageAnnotator*)(self));
}
