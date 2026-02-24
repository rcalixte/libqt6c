#include "../libqaction.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmenu.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqstyleoption.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkrecentfilesmenu.hpp"
#include "libkrecentfilesmenu.h"

KRecentFilesMenu* k_recentfilesmenu_new(void* parent) {
    return KRecentFilesMenu_new((QWidget*)parent);
}

KRecentFilesMenu* k_recentfilesmenu_new2(const char* title) {
    return KRecentFilesMenu_new2(qstring(title));
}

KRecentFilesMenu* k_recentfilesmenu_new3() {
    return KRecentFilesMenu_new3();
}

KRecentFilesMenu* k_recentfilesmenu_new4(const char* title, void* parent) {
    return KRecentFilesMenu_new4(qstring(title), (QWidget*)parent);
}

const QMetaObject* k_recentfilesmenu_meta_object(void* self) {
    return KRecentFilesMenu_MetaObject((KRecentFilesMenu*)self);
}

void k_recentfilesmenu_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KRecentFilesMenu_OnMetaObject((KRecentFilesMenu*)self, (intptr_t)callback);
}

const QMetaObject* k_recentfilesmenu_super_meta_object(void* self) {
    return KRecentFilesMenu_SuperMetaObject((KRecentFilesMenu*)self);
}

void* k_recentfilesmenu_metacast(void* self, const char* param1) {
    return KRecentFilesMenu_Metacast((KRecentFilesMenu*)self, param1);
}

void k_recentfilesmenu_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KRecentFilesMenu_OnMetacast((KRecentFilesMenu*)self, (intptr_t)callback);
}

void* k_recentfilesmenu_super_metacast(void* self, const char* param1) {
    return KRecentFilesMenu_SuperMetacast((KRecentFilesMenu*)self, param1);
}

int32_t k_recentfilesmenu_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KRecentFilesMenu_Metacall((KRecentFilesMenu*)self, param1, param2, param3);
}

void k_recentfilesmenu_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KRecentFilesMenu_OnMetacall((KRecentFilesMenu*)self, (intptr_t)callback);
}

int32_t k_recentfilesmenu_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KRecentFilesMenu_SuperMetacall((KRecentFilesMenu*)self, param1, param2, param3);
}

const char* k_recentfilesmenu_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_recentfilesmenu_group(void* self) {
    libqt_string _str = KRecentFilesMenu_Group((KRecentFilesMenu*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_recentfilesmenu_set_group(void* self, const char* group) {
    KRecentFilesMenu_SetGroup((KRecentFilesMenu*)self, qstring(group));
}

void k_recentfilesmenu_add_url(void* self, void* url) {
    KRecentFilesMenu_AddUrl((KRecentFilesMenu*)self, (QUrl*)url);
}

void k_recentfilesmenu_remove_url(void* self, void* url) {
    KRecentFilesMenu_RemoveUrl((KRecentFilesMenu*)self, (QUrl*)url);
}

int32_t k_recentfilesmenu_maximum_items(void* self) {
    return KRecentFilesMenu_MaximumItems((KRecentFilesMenu*)self);
}

void k_recentfilesmenu_set_maximum_items(void* self, uint64_t maximumItems) {
    KRecentFilesMenu_SetMaximumItems((KRecentFilesMenu*)self, maximumItems);
}

libqt_list /* of QUrl* */ k_recentfilesmenu_recent_files(void* self) {
    libqt_list _arr = KRecentFilesMenu_RecentFiles((KRecentFilesMenu*)self);
    return _arr;
}

void k_recentfilesmenu_clear_recent_files(void* self) {
    KRecentFilesMenu_ClearRecentFiles((KRecentFilesMenu*)self);
}

void k_recentfilesmenu_url_triggered(void* self, void* url) {
    KRecentFilesMenu_UrlTriggered((KRecentFilesMenu*)self, (QUrl*)url);
}

void k_recentfilesmenu_on_url_triggered(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_Connect_UrlTriggered((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_recent_files_changed(void* self) {
    KRecentFilesMenu_RecentFilesChanged((KRecentFilesMenu*)self);
}

void k_recentfilesmenu_on_recent_files_changed(void* self, void (*callback)(void*)) {
    KRecentFilesMenu_Connect_RecentFilesChanged((KRecentFilesMenu*)self, (intptr_t)callback);
}

const char* k_recentfilesmenu_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_recentfilesmenu_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_recentfilesmenu_add_url2(void* self, void* url, const char* name) {
    KRecentFilesMenu_AddUrl2((KRecentFilesMenu*)self, (QUrl*)url, qstring(name));
}

QAction* k_recentfilesmenu_add_menu(void* self, void* menu) {
    return QMenu_AddMenu((QMenu*)self, (QMenu*)menu);
}

QMenu* k_recentfilesmenu_add_menu2(void* self, const char* title) {
    return QMenu_AddMenu2((QMenu*)self, qstring(title));
}

QMenu* k_recentfilesmenu_add_menu3(void* self, void* icon, const char* title) {
    return QMenu_AddMenu3((QMenu*)self, (QIcon*)icon, qstring(title));
}

QAction* k_recentfilesmenu_add_separator(void* self) {
    return QMenu_AddSeparator((QMenu*)self);
}

QAction* k_recentfilesmenu_add_section(void* self, const char* text) {
    return QMenu_AddSection((QMenu*)self, qstring(text));
}

QAction* k_recentfilesmenu_add_section2(void* self, void* icon, const char* text) {
    return QMenu_AddSection2((QMenu*)self, (QIcon*)icon, qstring(text));
}

QAction* k_recentfilesmenu_insert_menu(void* self, void* before, void* menu) {
    return QMenu_InsertMenu((QMenu*)self, (QAction*)before, (QMenu*)menu);
}

QAction* k_recentfilesmenu_insert_separator(void* self, void* before) {
    return QMenu_InsertSeparator((QMenu*)self, (QAction*)before);
}

QAction* k_recentfilesmenu_insert_section(void* self, void* before, const char* text) {
    return QMenu_InsertSection((QMenu*)self, (QAction*)before, qstring(text));
}

QAction* k_recentfilesmenu_insert_section2(void* self, void* before, void* icon, const char* text) {
    return QMenu_InsertSection2((QMenu*)self, (QAction*)before, (QIcon*)icon, qstring(text));
}

bool k_recentfilesmenu_is_empty(void* self) {
    return QMenu_IsEmpty((QMenu*)self);
}

void k_recentfilesmenu_clear(void* self) {
    QMenu_Clear((QMenu*)self);
}

void k_recentfilesmenu_set_tear_off_enabled(void* self, bool tearOffEnabled) {
    QMenu_SetTearOffEnabled((QMenu*)self, tearOffEnabled);
}

bool k_recentfilesmenu_is_tear_off_enabled(void* self) {
    return QMenu_IsTearOffEnabled((QMenu*)self);
}

bool k_recentfilesmenu_is_tear_off_menu_visible(void* self) {
    return QMenu_IsTearOffMenuVisible((QMenu*)self);
}

void k_recentfilesmenu_show_tear_off_menu(void* self) {
    QMenu_ShowTearOffMenu((QMenu*)self);
}

void k_recentfilesmenu_show_tear_off_menu2(void* self, void* pos) {
    QMenu_ShowTearOffMenu2((QMenu*)self, (QPoint*)pos);
}

void k_recentfilesmenu_hide_tear_off_menu(void* self) {
    QMenu_HideTearOffMenu((QMenu*)self);
}

void k_recentfilesmenu_set_default_action(void* self, void* defaultAction) {
    QMenu_SetDefaultAction((QMenu*)self, (QAction*)defaultAction);
}

QAction* k_recentfilesmenu_default_action(void* self) {
    return QMenu_DefaultAction((QMenu*)self);
}

void k_recentfilesmenu_set_active_action(void* self, void* act) {
    QMenu_SetActiveAction((QMenu*)self, (QAction*)act);
}

QAction* k_recentfilesmenu_active_action(void* self) {
    return QMenu_ActiveAction((QMenu*)self);
}

void k_recentfilesmenu_popup(void* self, void* pos) {
    QMenu_Popup((QMenu*)self, (QPoint*)pos);
}

QAction* k_recentfilesmenu_exec(void* self) {
    return QMenu_Exec((QMenu*)self);
}

QAction* k_recentfilesmenu_exec2(void* self, void* pos) {
    return QMenu_Exec2((QMenu*)self, (QPoint*)pos);
}

QAction* k_recentfilesmenu_exec3(libqt_list /* of QAction* */ actions, void* pos) {
    return QMenu_Exec3(actions, (QPoint*)pos);
}

QRect* k_recentfilesmenu_action_geometry(void* self, void* param1) {
    return QMenu_ActionGeometry((QMenu*)self, (QAction*)param1);
}

QAction* k_recentfilesmenu_action_at(void* self, void* param1) {
    return QMenu_ActionAt((QMenu*)self, (QPoint*)param1);
}

QAction* k_recentfilesmenu_menu_action(void* self) {
    return QMenu_MenuAction((QMenu*)self);
}

QMenu* k_recentfilesmenu_menu_in_action(void* action) {
    return QMenu_MenuInAction((QAction*)action);
}

const char* k_recentfilesmenu_title(void* self) {
    libqt_string _str = QMenu_Title((QMenu*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_recentfilesmenu_set_title(void* self, const char* title) {
    QMenu_SetTitle((QMenu*)self, qstring(title));
}

QIcon* k_recentfilesmenu_icon(void* self) {
    return QMenu_Icon((QMenu*)self);
}

void k_recentfilesmenu_set_icon(void* self, void* icon) {
    QMenu_SetIcon((QMenu*)self, (QIcon*)icon);
}

void k_recentfilesmenu_set_no_replay_for(void* self, void* widget) {
    QMenu_SetNoReplayFor((QMenu*)self, (QWidget*)widget);
}

bool k_recentfilesmenu_separators_collapsible(void* self) {
    return QMenu_SeparatorsCollapsible((QMenu*)self);
}

void k_recentfilesmenu_set_separators_collapsible(void* self, bool collapse) {
    QMenu_SetSeparatorsCollapsible((QMenu*)self, collapse);
}

bool k_recentfilesmenu_tool_tips_visible(void* self) {
    return QMenu_ToolTipsVisible((QMenu*)self);
}

void k_recentfilesmenu_set_tool_tips_visible(void* self, bool visible) {
    QMenu_SetToolTipsVisible((QMenu*)self, visible);
}

void k_recentfilesmenu_about_to_show(void* self) {
    QMenu_AboutToShow((QMenu*)self);
}

void k_recentfilesmenu_on_about_to_show(void* self, void (*callback)(void*)) {
    QMenu_Connect_AboutToShow((QMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_about_to_hide(void* self) {
    QMenu_AboutToHide((QMenu*)self);
}

void k_recentfilesmenu_on_about_to_hide(void* self, void (*callback)(void*)) {
    QMenu_Connect_AboutToHide((QMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_triggered(void* self, void* action) {
    QMenu_Triggered((QMenu*)self, (QAction*)action);
}

void k_recentfilesmenu_on_triggered(void* self, void (*callback)(void*, void*)) {
    QMenu_Connect_Triggered((QMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_hovered(void* self, void* action) {
    QMenu_Hovered((QMenu*)self, (QAction*)action);
}

void k_recentfilesmenu_on_hovered(void* self, void (*callback)(void*, void*)) {
    QMenu_Connect_Hovered((QMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_popup2(void* self, void* pos, void* at) {
    QMenu_Popup2((QMenu*)self, (QPoint*)pos, (QAction*)at);
}

QAction* k_recentfilesmenu_exec22(void* self, void* pos, void* at) {
    return QMenu_Exec22((QMenu*)self, (QPoint*)pos, (QAction*)at);
}

QAction* k_recentfilesmenu_exec32(libqt_list /* of QAction* */ actions, void* pos, void* at) {
    return QMenu_Exec32(actions, (QPoint*)pos, (QAction*)at);
}

QAction* k_recentfilesmenu_exec4(libqt_list /* of QAction* */ actions, void* pos, void* at, void* parent) {
    return QMenu_Exec4(actions, (QPoint*)pos, (QAction*)at, (QWidget*)parent);
}

uintptr_t k_recentfilesmenu_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_recentfilesmenu_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_recentfilesmenu_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_recentfilesmenu_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_recentfilesmenu_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_recentfilesmenu_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_recentfilesmenu_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_recentfilesmenu_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_recentfilesmenu_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_recentfilesmenu_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_recentfilesmenu_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_recentfilesmenu_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_recentfilesmenu_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_recentfilesmenu_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_recentfilesmenu_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_recentfilesmenu_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_recentfilesmenu_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_recentfilesmenu_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_recentfilesmenu_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_recentfilesmenu_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_recentfilesmenu_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_recentfilesmenu_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_recentfilesmenu_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_recentfilesmenu_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_recentfilesmenu_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_recentfilesmenu_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_recentfilesmenu_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_recentfilesmenu_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_recentfilesmenu_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_recentfilesmenu_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_recentfilesmenu_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_recentfilesmenu_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_recentfilesmenu_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_recentfilesmenu_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_recentfilesmenu_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_recentfilesmenu_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_recentfilesmenu_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_recentfilesmenu_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_recentfilesmenu_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_recentfilesmenu_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_recentfilesmenu_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_recentfilesmenu_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_recentfilesmenu_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_recentfilesmenu_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_recentfilesmenu_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_recentfilesmenu_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_recentfilesmenu_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_recentfilesmenu_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_recentfilesmenu_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_recentfilesmenu_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_recentfilesmenu_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_recentfilesmenu_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_recentfilesmenu_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_recentfilesmenu_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_recentfilesmenu_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_recentfilesmenu_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_recentfilesmenu_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_recentfilesmenu_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_recentfilesmenu_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_recentfilesmenu_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_recentfilesmenu_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_recentfilesmenu_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_recentfilesmenu_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_recentfilesmenu_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_recentfilesmenu_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_recentfilesmenu_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_recentfilesmenu_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_recentfilesmenu_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_recentfilesmenu_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_recentfilesmenu_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_recentfilesmenu_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_recentfilesmenu_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_recentfilesmenu_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_recentfilesmenu_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_recentfilesmenu_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_recentfilesmenu_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_recentfilesmenu_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_recentfilesmenu_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_recentfilesmenu_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_recentfilesmenu_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_recentfilesmenu_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_recentfilesmenu_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_recentfilesmenu_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_recentfilesmenu_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_recentfilesmenu_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_recentfilesmenu_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_recentfilesmenu_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_recentfilesmenu_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_recentfilesmenu_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_recentfilesmenu_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_recentfilesmenu_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_recentfilesmenu_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_recentfilesmenu_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_recentfilesmenu_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_recentfilesmenu_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_recentfilesmenu_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_recentfilesmenu_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_recentfilesmenu_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_recentfilesmenu_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_recentfilesmenu_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_recentfilesmenu_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_recentfilesmenu_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_recentfilesmenu_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_recentfilesmenu_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_recentfilesmenu_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_recentfilesmenu_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_recentfilesmenu_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_recentfilesmenu_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_recentfilesmenu_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_recentfilesmenu_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_recentfilesmenu_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_recentfilesmenu_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_recentfilesmenu_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_recentfilesmenu_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_recentfilesmenu_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_recentfilesmenu_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_recentfilesmenu_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_recentfilesmenu_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_recentfilesmenu_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_recentfilesmenu_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_recentfilesmenu_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_recentfilesmenu_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_recentfilesmenu_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_recentfilesmenu_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_recentfilesmenu_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_recentfilesmenu_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_recentfilesmenu_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_recentfilesmenu_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_recentfilesmenu_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_recentfilesmenu_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_recentfilesmenu_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_recentfilesmenu_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_recentfilesmenu_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_recentfilesmenu_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_recentfilesmenu_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_recentfilesmenu_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_recentfilesmenu_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_recentfilesmenu_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_recentfilesmenu_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_recentfilesmenu_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_recentfilesmenu_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_recentfilesmenu_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_recentfilesmenu_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_recentfilesmenu_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_recentfilesmenu_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_recentfilesmenu_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_recentfilesmenu_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_recentfilesmenu_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_recentfilesmenu_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_recentfilesmenu_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_recentfilesmenu_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_recentfilesmenu_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_recentfilesmenu_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_recentfilesmenu_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_recentfilesmenu_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_recentfilesmenu_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_recentfilesmenu_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_recentfilesmenu_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_recentfilesmenu_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_recentfilesmenu_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_recentfilesmenu_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_recentfilesmenu_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_recentfilesmenu_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_recentfilesmenu_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_recentfilesmenu_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_recentfilesmenu_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_recentfilesmenu_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_recentfilesmenu_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_recentfilesmenu_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_recentfilesmenu_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_recentfilesmenu_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_recentfilesmenu_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_recentfilesmenu_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_recentfilesmenu_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_recentfilesmenu_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_recentfilesmenu_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_recentfilesmenu_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_recentfilesmenu_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_recentfilesmenu_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_recentfilesmenu_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_recentfilesmenu_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_recentfilesmenu_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_recentfilesmenu_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_recentfilesmenu_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_recentfilesmenu_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_recentfilesmenu_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_recentfilesmenu_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_recentfilesmenu_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_recentfilesmenu_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_recentfilesmenu_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_recentfilesmenu_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_recentfilesmenu_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_recentfilesmenu_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_recentfilesmenu_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_recentfilesmenu_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_recentfilesmenu_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_recentfilesmenu_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_recentfilesmenu_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_recentfilesmenu_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_recentfilesmenu_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_recentfilesmenu_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_recentfilesmenu_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_recentfilesmenu_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_recentfilesmenu_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_recentfilesmenu_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_recentfilesmenu_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_recentfilesmenu_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_recentfilesmenu_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_recentfilesmenu_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_recentfilesmenu_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_recentfilesmenu_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_recentfilesmenu_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_recentfilesmenu_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_recentfilesmenu_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_recentfilesmenu_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_recentfilesmenu_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_recentfilesmenu_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_recentfilesmenu_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_recentfilesmenu_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_recentfilesmenu_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_recentfilesmenu_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_recentfilesmenu_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_recentfilesmenu_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_recentfilesmenu_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_recentfilesmenu_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_recentfilesmenu_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_recentfilesmenu_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_recentfilesmenu_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_recentfilesmenu_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_recentfilesmenu_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_recentfilesmenu_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_recentfilesmenu_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_recentfilesmenu_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_recentfilesmenu_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_recentfilesmenu_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_recentfilesmenu_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_recentfilesmenu_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_recentfilesmenu_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_recentfilesmenu_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_recentfilesmenu_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_recentfilesmenu_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_recentfilesmenu_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_recentfilesmenu_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_recentfilesmenu_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_recentfilesmenu_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_recentfilesmenu_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_recentfilesmenu_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_recentfilesmenu_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_recentfilesmenu_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_recentfilesmenu_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_recentfilesmenu_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_recentfilesmenu_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_recentfilesmenu_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_recentfilesmenu_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_recentfilesmenu_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_recentfilesmenu_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_recentfilesmenu_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_recentfilesmenu_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_recentfilesmenu_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_recentfilesmenu_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_recentfilesmenu_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_recentfilesmenu_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_recentfilesmenu_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_recentfilesmenu_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_recentfilesmenu_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_recentfilesmenu_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_recentfilesmenu_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_recentfilesmenu_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_recentfilesmenu_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_recentfilesmenu_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_recentfilesmenu_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_recentfilesmenu_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_recentfilesmenu_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_recentfilesmenu_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_recentfilesmenu_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_recentfilesmenu_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_recentfilesmenu_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_recentfilesmenu_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_recentfilesmenu_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_recentfilesmenu_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_recentfilesmenu_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_recentfilesmenu_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_recentfilesmenu_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_recentfilesmenu_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_recentfilesmenu_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_recentfilesmenu_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_recentfilesmenu_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_recentfilesmenu_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_recentfilesmenu_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_recentfilesmenu_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_recentfilesmenu_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_recentfilesmenu_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_recentfilesmenu_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_recentfilesmenu_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_recentfilesmenu_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_recentfilesmenu_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_recentfilesmenu_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_recentfilesmenu_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_recentfilesmenu_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_recentfilesmenu_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_recentfilesmenu_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_recentfilesmenu_dynamic_property_names\n");
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

QBindingStorage* k_recentfilesmenu_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_recentfilesmenu_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_recentfilesmenu_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_recentfilesmenu_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_recentfilesmenu_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_recentfilesmenu_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_recentfilesmenu_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_recentfilesmenu_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_recentfilesmenu_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_recentfilesmenu_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_recentfilesmenu_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_recentfilesmenu_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_recentfilesmenu_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_recentfilesmenu_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_recentfilesmenu_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_recentfilesmenu_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_recentfilesmenu_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_recentfilesmenu_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_recentfilesmenu_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_recentfilesmenu_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_recentfilesmenu_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_recentfilesmenu_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_recentfilesmenu_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_recentfilesmenu_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_recentfilesmenu_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_recentfilesmenu_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_recentfilesmenu_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_recentfilesmenu_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_recentfilesmenu_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_recentfilesmenu_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_recentfilesmenu_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QSize* k_recentfilesmenu_size_hint(void* self) {
    return KRecentFilesMenu_SizeHint((KRecentFilesMenu*)self);
}

QSize* k_recentfilesmenu_super_size_hint(void* self) {
    return KRecentFilesMenu_SuperSizeHint((KRecentFilesMenu*)self);
}

void k_recentfilesmenu_on_size_hint(void* self, QSize* (*callback)()) {
    KRecentFilesMenu_OnSizeHint((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_change_event(void* self, void* param1) {
    KRecentFilesMenu_ChangeEvent((KRecentFilesMenu*)self, (QEvent*)param1);
}

void k_recentfilesmenu_super_change_event(void* self, void* param1) {
    KRecentFilesMenu_SuperChangeEvent((KRecentFilesMenu*)self, (QEvent*)param1);
}

void k_recentfilesmenu_on_change_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnChangeEvent((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_key_press_event(void* self, void* param1) {
    KRecentFilesMenu_KeyPressEvent((KRecentFilesMenu*)self, (QKeyEvent*)param1);
}

void k_recentfilesmenu_super_key_press_event(void* self, void* param1) {
    KRecentFilesMenu_SuperKeyPressEvent((KRecentFilesMenu*)self, (QKeyEvent*)param1);
}

void k_recentfilesmenu_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnKeyPressEvent((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_mouse_release_event(void* self, void* param1) {
    KRecentFilesMenu_MouseReleaseEvent((KRecentFilesMenu*)self, (QMouseEvent*)param1);
}

void k_recentfilesmenu_super_mouse_release_event(void* self, void* param1) {
    KRecentFilesMenu_SuperMouseReleaseEvent((KRecentFilesMenu*)self, (QMouseEvent*)param1);
}

void k_recentfilesmenu_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnMouseReleaseEvent((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_mouse_press_event(void* self, void* param1) {
    KRecentFilesMenu_MousePressEvent((KRecentFilesMenu*)self, (QMouseEvent*)param1);
}

void k_recentfilesmenu_super_mouse_press_event(void* self, void* param1) {
    KRecentFilesMenu_SuperMousePressEvent((KRecentFilesMenu*)self, (QMouseEvent*)param1);
}

void k_recentfilesmenu_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnMousePressEvent((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_mouse_move_event(void* self, void* param1) {
    KRecentFilesMenu_MouseMoveEvent((KRecentFilesMenu*)self, (QMouseEvent*)param1);
}

void k_recentfilesmenu_super_mouse_move_event(void* self, void* param1) {
    KRecentFilesMenu_SuperMouseMoveEvent((KRecentFilesMenu*)self, (QMouseEvent*)param1);
}

void k_recentfilesmenu_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnMouseMoveEvent((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_wheel_event(void* self, void* param1) {
    KRecentFilesMenu_WheelEvent((KRecentFilesMenu*)self, (QWheelEvent*)param1);
}

void k_recentfilesmenu_super_wheel_event(void* self, void* param1) {
    KRecentFilesMenu_SuperWheelEvent((KRecentFilesMenu*)self, (QWheelEvent*)param1);
}

void k_recentfilesmenu_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnWheelEvent((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_enter_event(void* self, void* param1) {
    KRecentFilesMenu_EnterEvent((KRecentFilesMenu*)self, (QEnterEvent*)param1);
}

void k_recentfilesmenu_super_enter_event(void* self, void* param1) {
    KRecentFilesMenu_SuperEnterEvent((KRecentFilesMenu*)self, (QEnterEvent*)param1);
}

void k_recentfilesmenu_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnEnterEvent((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_leave_event(void* self, void* param1) {
    KRecentFilesMenu_LeaveEvent((KRecentFilesMenu*)self, (QEvent*)param1);
}

void k_recentfilesmenu_super_leave_event(void* self, void* param1) {
    KRecentFilesMenu_SuperLeaveEvent((KRecentFilesMenu*)self, (QEvent*)param1);
}

void k_recentfilesmenu_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnLeaveEvent((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_hide_event(void* self, void* param1) {
    KRecentFilesMenu_HideEvent((KRecentFilesMenu*)self, (QHideEvent*)param1);
}

void k_recentfilesmenu_super_hide_event(void* self, void* param1) {
    KRecentFilesMenu_SuperHideEvent((KRecentFilesMenu*)self, (QHideEvent*)param1);
}

void k_recentfilesmenu_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnHideEvent((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_paint_event(void* self, void* param1) {
    KRecentFilesMenu_PaintEvent((KRecentFilesMenu*)self, (QPaintEvent*)param1);
}

void k_recentfilesmenu_super_paint_event(void* self, void* param1) {
    KRecentFilesMenu_SuperPaintEvent((KRecentFilesMenu*)self, (QPaintEvent*)param1);
}

void k_recentfilesmenu_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnPaintEvent((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_action_event(void* self, void* param1) {
    KRecentFilesMenu_ActionEvent((KRecentFilesMenu*)self, (QActionEvent*)param1);
}

void k_recentfilesmenu_super_action_event(void* self, void* param1) {
    KRecentFilesMenu_SuperActionEvent((KRecentFilesMenu*)self, (QActionEvent*)param1);
}

void k_recentfilesmenu_on_action_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnActionEvent((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_timer_event(void* self, void* param1) {
    KRecentFilesMenu_TimerEvent((KRecentFilesMenu*)self, (QTimerEvent*)param1);
}

void k_recentfilesmenu_super_timer_event(void* self, void* param1) {
    KRecentFilesMenu_SuperTimerEvent((KRecentFilesMenu*)self, (QTimerEvent*)param1);
}

void k_recentfilesmenu_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnTimerEvent((KRecentFilesMenu*)self, (intptr_t)callback);
}

bool k_recentfilesmenu_event(void* self, void* param1) {
    return KRecentFilesMenu_Event((KRecentFilesMenu*)self, (QEvent*)param1);
}

bool k_recentfilesmenu_super_event(void* self, void* param1) {
    return KRecentFilesMenu_SuperEvent((KRecentFilesMenu*)self, (QEvent*)param1);
}

void k_recentfilesmenu_on_event(void* self, bool (*callback)(void*, void*)) {
    KRecentFilesMenu_OnEvent((KRecentFilesMenu*)self, (intptr_t)callback);
}

bool k_recentfilesmenu_focus_next_prev_child(void* self, bool next) {
    return KRecentFilesMenu_FocusNextPrevChild((KRecentFilesMenu*)self, next);
}

bool k_recentfilesmenu_super_focus_next_prev_child(void* self, bool next) {
    return KRecentFilesMenu_SuperFocusNextPrevChild((KRecentFilesMenu*)self, next);
}

void k_recentfilesmenu_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KRecentFilesMenu_OnFocusNextPrevChild((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_init_style_option(void* self, void* option, void* action) {
    KRecentFilesMenu_InitStyleOption((KRecentFilesMenu*)self, (QStyleOptionMenuItem*)option, (QAction*)action);
}

void k_recentfilesmenu_super_init_style_option(void* self, void* option, void* action) {
    KRecentFilesMenu_SuperInitStyleOption((KRecentFilesMenu*)self, (QStyleOptionMenuItem*)option, (QAction*)action);
}

void k_recentfilesmenu_on_init_style_option(void* self, void (*callback)(void*, void*, void*)) {
    KRecentFilesMenu_OnInitStyleOption((KRecentFilesMenu*)self, (intptr_t)callback);
}

int32_t k_recentfilesmenu_dev_type(void* self) {
    return KRecentFilesMenu_DevType((KRecentFilesMenu*)self);
}

int32_t k_recentfilesmenu_super_dev_type(void* self) {
    return KRecentFilesMenu_SuperDevType((KRecentFilesMenu*)self);
}

void k_recentfilesmenu_on_dev_type(void* self, int32_t (*callback)()) {
    KRecentFilesMenu_OnDevType((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_set_visible(void* self, bool visible) {
    KRecentFilesMenu_SetVisible((KRecentFilesMenu*)self, visible);
}

void k_recentfilesmenu_super_set_visible(void* self, bool visible) {
    KRecentFilesMenu_SuperSetVisible((KRecentFilesMenu*)self, visible);
}

void k_recentfilesmenu_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KRecentFilesMenu_OnSetVisible((KRecentFilesMenu*)self, (intptr_t)callback);
}

QSize* k_recentfilesmenu_minimum_size_hint(void* self) {
    return KRecentFilesMenu_MinimumSizeHint((KRecentFilesMenu*)self);
}

QSize* k_recentfilesmenu_super_minimum_size_hint(void* self) {
    return KRecentFilesMenu_SuperMinimumSizeHint((KRecentFilesMenu*)self);
}

void k_recentfilesmenu_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KRecentFilesMenu_OnMinimumSizeHint((KRecentFilesMenu*)self, (intptr_t)callback);
}

int32_t k_recentfilesmenu_height_for_width(void* self, int param1) {
    return KRecentFilesMenu_HeightForWidth((KRecentFilesMenu*)self, param1);
}

int32_t k_recentfilesmenu_super_height_for_width(void* self, int param1) {
    return KRecentFilesMenu_SuperHeightForWidth((KRecentFilesMenu*)self, param1);
}

void k_recentfilesmenu_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KRecentFilesMenu_OnHeightForWidth((KRecentFilesMenu*)self, (intptr_t)callback);
}

bool k_recentfilesmenu_has_height_for_width(void* self) {
    return KRecentFilesMenu_HasHeightForWidth((KRecentFilesMenu*)self);
}

bool k_recentfilesmenu_super_has_height_for_width(void* self) {
    return KRecentFilesMenu_SuperHasHeightForWidth((KRecentFilesMenu*)self);
}

void k_recentfilesmenu_on_has_height_for_width(void* self, bool (*callback)()) {
    KRecentFilesMenu_OnHasHeightForWidth((KRecentFilesMenu*)self, (intptr_t)callback);
}

QPaintEngine* k_recentfilesmenu_paint_engine(void* self) {
    return KRecentFilesMenu_PaintEngine((KRecentFilesMenu*)self);
}

QPaintEngine* k_recentfilesmenu_super_paint_engine(void* self) {
    return KRecentFilesMenu_SuperPaintEngine((KRecentFilesMenu*)self);
}

void k_recentfilesmenu_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KRecentFilesMenu_OnPaintEngine((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_mouse_double_click_event(void* self, void* event) {
    KRecentFilesMenu_MouseDoubleClickEvent((KRecentFilesMenu*)self, (QMouseEvent*)event);
}

void k_recentfilesmenu_super_mouse_double_click_event(void* self, void* event) {
    KRecentFilesMenu_SuperMouseDoubleClickEvent((KRecentFilesMenu*)self, (QMouseEvent*)event);
}

void k_recentfilesmenu_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnMouseDoubleClickEvent((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_key_release_event(void* self, void* event) {
    KRecentFilesMenu_KeyReleaseEvent((KRecentFilesMenu*)self, (QKeyEvent*)event);
}

void k_recentfilesmenu_super_key_release_event(void* self, void* event) {
    KRecentFilesMenu_SuperKeyReleaseEvent((KRecentFilesMenu*)self, (QKeyEvent*)event);
}

void k_recentfilesmenu_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnKeyReleaseEvent((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_focus_in_event(void* self, void* event) {
    KRecentFilesMenu_FocusInEvent((KRecentFilesMenu*)self, (QFocusEvent*)event);
}

void k_recentfilesmenu_super_focus_in_event(void* self, void* event) {
    KRecentFilesMenu_SuperFocusInEvent((KRecentFilesMenu*)self, (QFocusEvent*)event);
}

void k_recentfilesmenu_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnFocusInEvent((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_focus_out_event(void* self, void* event) {
    KRecentFilesMenu_FocusOutEvent((KRecentFilesMenu*)self, (QFocusEvent*)event);
}

void k_recentfilesmenu_super_focus_out_event(void* self, void* event) {
    KRecentFilesMenu_SuperFocusOutEvent((KRecentFilesMenu*)self, (QFocusEvent*)event);
}

void k_recentfilesmenu_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnFocusOutEvent((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_move_event(void* self, void* event) {
    KRecentFilesMenu_MoveEvent((KRecentFilesMenu*)self, (QMoveEvent*)event);
}

void k_recentfilesmenu_super_move_event(void* self, void* event) {
    KRecentFilesMenu_SuperMoveEvent((KRecentFilesMenu*)self, (QMoveEvent*)event);
}

void k_recentfilesmenu_on_move_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnMoveEvent((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_resize_event(void* self, void* event) {
    KRecentFilesMenu_ResizeEvent((KRecentFilesMenu*)self, (QResizeEvent*)event);
}

void k_recentfilesmenu_super_resize_event(void* self, void* event) {
    KRecentFilesMenu_SuperResizeEvent((KRecentFilesMenu*)self, (QResizeEvent*)event);
}

void k_recentfilesmenu_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnResizeEvent((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_close_event(void* self, void* event) {
    KRecentFilesMenu_CloseEvent((KRecentFilesMenu*)self, (QCloseEvent*)event);
}

void k_recentfilesmenu_super_close_event(void* self, void* event) {
    KRecentFilesMenu_SuperCloseEvent((KRecentFilesMenu*)self, (QCloseEvent*)event);
}

void k_recentfilesmenu_on_close_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnCloseEvent((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_context_menu_event(void* self, void* event) {
    KRecentFilesMenu_ContextMenuEvent((KRecentFilesMenu*)self, (QContextMenuEvent*)event);
}

void k_recentfilesmenu_super_context_menu_event(void* self, void* event) {
    KRecentFilesMenu_SuperContextMenuEvent((KRecentFilesMenu*)self, (QContextMenuEvent*)event);
}

void k_recentfilesmenu_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnContextMenuEvent((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_tablet_event(void* self, void* event) {
    KRecentFilesMenu_TabletEvent((KRecentFilesMenu*)self, (QTabletEvent*)event);
}

void k_recentfilesmenu_super_tablet_event(void* self, void* event) {
    KRecentFilesMenu_SuperTabletEvent((KRecentFilesMenu*)self, (QTabletEvent*)event);
}

void k_recentfilesmenu_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnTabletEvent((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_drag_enter_event(void* self, void* event) {
    KRecentFilesMenu_DragEnterEvent((KRecentFilesMenu*)self, (QDragEnterEvent*)event);
}

void k_recentfilesmenu_super_drag_enter_event(void* self, void* event) {
    KRecentFilesMenu_SuperDragEnterEvent((KRecentFilesMenu*)self, (QDragEnterEvent*)event);
}

void k_recentfilesmenu_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnDragEnterEvent((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_drag_move_event(void* self, void* event) {
    KRecentFilesMenu_DragMoveEvent((KRecentFilesMenu*)self, (QDragMoveEvent*)event);
}

void k_recentfilesmenu_super_drag_move_event(void* self, void* event) {
    KRecentFilesMenu_SuperDragMoveEvent((KRecentFilesMenu*)self, (QDragMoveEvent*)event);
}

void k_recentfilesmenu_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnDragMoveEvent((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_drag_leave_event(void* self, void* event) {
    KRecentFilesMenu_DragLeaveEvent((KRecentFilesMenu*)self, (QDragLeaveEvent*)event);
}

void k_recentfilesmenu_super_drag_leave_event(void* self, void* event) {
    KRecentFilesMenu_SuperDragLeaveEvent((KRecentFilesMenu*)self, (QDragLeaveEvent*)event);
}

void k_recentfilesmenu_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnDragLeaveEvent((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_drop_event(void* self, void* event) {
    KRecentFilesMenu_DropEvent((KRecentFilesMenu*)self, (QDropEvent*)event);
}

void k_recentfilesmenu_super_drop_event(void* self, void* event) {
    KRecentFilesMenu_SuperDropEvent((KRecentFilesMenu*)self, (QDropEvent*)event);
}

void k_recentfilesmenu_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnDropEvent((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_show_event(void* self, void* event) {
    KRecentFilesMenu_ShowEvent((KRecentFilesMenu*)self, (QShowEvent*)event);
}

void k_recentfilesmenu_super_show_event(void* self, void* event) {
    KRecentFilesMenu_SuperShowEvent((KRecentFilesMenu*)self, (QShowEvent*)event);
}

void k_recentfilesmenu_on_show_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnShowEvent((KRecentFilesMenu*)self, (intptr_t)callback);
}

bool k_recentfilesmenu_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return KRecentFilesMenu_NativeEvent((KRecentFilesMenu*)self, qstring(eventType), message, result);
}

bool k_recentfilesmenu_super_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return KRecentFilesMenu_SuperNativeEvent((KRecentFilesMenu*)self, qstring(eventType), message, result);
}

void k_recentfilesmenu_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    KRecentFilesMenu_OnNativeEvent((KRecentFilesMenu*)self, (intptr_t)callback);
}

int32_t k_recentfilesmenu_metric(void* self, int32_t param1) {
    return KRecentFilesMenu_Metric((KRecentFilesMenu*)self, param1);
}

int32_t k_recentfilesmenu_super_metric(void* self, int32_t param1) {
    return KRecentFilesMenu_SuperMetric((KRecentFilesMenu*)self, param1);
}

void k_recentfilesmenu_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KRecentFilesMenu_OnMetric((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_init_painter(void* self, void* painter) {
    KRecentFilesMenu_InitPainter((KRecentFilesMenu*)self, (QPainter*)painter);
}

void k_recentfilesmenu_super_init_painter(void* self, void* painter) {
    KRecentFilesMenu_SuperInitPainter((KRecentFilesMenu*)self, (QPainter*)painter);
}

void k_recentfilesmenu_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnInitPainter((KRecentFilesMenu*)self, (intptr_t)callback);
}

QPaintDevice* k_recentfilesmenu_redirected(void* self, void* offset) {
    return KRecentFilesMenu_Redirected((KRecentFilesMenu*)self, (QPoint*)offset);
}

QPaintDevice* k_recentfilesmenu_super_redirected(void* self, void* offset) {
    return KRecentFilesMenu_SuperRedirected((KRecentFilesMenu*)self, (QPoint*)offset);
}

void k_recentfilesmenu_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KRecentFilesMenu_OnRedirected((KRecentFilesMenu*)self, (intptr_t)callback);
}

QPainter* k_recentfilesmenu_shared_painter(void* self) {
    return KRecentFilesMenu_SharedPainter((KRecentFilesMenu*)self);
}

QPainter* k_recentfilesmenu_super_shared_painter(void* self) {
    return KRecentFilesMenu_SuperSharedPainter((KRecentFilesMenu*)self);
}

void k_recentfilesmenu_on_shared_painter(void* self, QPainter* (*callback)()) {
    KRecentFilesMenu_OnSharedPainter((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_input_method_event(void* self, void* param1) {
    KRecentFilesMenu_InputMethodEvent((KRecentFilesMenu*)self, (QInputMethodEvent*)param1);
}

void k_recentfilesmenu_super_input_method_event(void* self, void* param1) {
    KRecentFilesMenu_SuperInputMethodEvent((KRecentFilesMenu*)self, (QInputMethodEvent*)param1);
}

void k_recentfilesmenu_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnInputMethodEvent((KRecentFilesMenu*)self, (intptr_t)callback);
}

QVariant* k_recentfilesmenu_input_method_query(void* self, int32_t param1) {
    return KRecentFilesMenu_InputMethodQuery((KRecentFilesMenu*)self, param1);
}

QVariant* k_recentfilesmenu_super_input_method_query(void* self, int32_t param1) {
    return KRecentFilesMenu_SuperInputMethodQuery((KRecentFilesMenu*)self, param1);
}

void k_recentfilesmenu_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KRecentFilesMenu_OnInputMethodQuery((KRecentFilesMenu*)self, (intptr_t)callback);
}

bool k_recentfilesmenu_event_filter(void* self, void* watched, void* event) {
    return KRecentFilesMenu_EventFilter((KRecentFilesMenu*)self, (QObject*)watched, (QEvent*)event);
}

bool k_recentfilesmenu_super_event_filter(void* self, void* watched, void* event) {
    return KRecentFilesMenu_SuperEventFilter((KRecentFilesMenu*)self, (QObject*)watched, (QEvent*)event);
}

void k_recentfilesmenu_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KRecentFilesMenu_OnEventFilter((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_child_event(void* self, void* event) {
    KRecentFilesMenu_ChildEvent((KRecentFilesMenu*)self, (QChildEvent*)event);
}

void k_recentfilesmenu_super_child_event(void* self, void* event) {
    KRecentFilesMenu_SuperChildEvent((KRecentFilesMenu*)self, (QChildEvent*)event);
}

void k_recentfilesmenu_on_child_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnChildEvent((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_custom_event(void* self, void* event) {
    KRecentFilesMenu_CustomEvent((KRecentFilesMenu*)self, (QEvent*)event);
}

void k_recentfilesmenu_super_custom_event(void* self, void* event) {
    KRecentFilesMenu_SuperCustomEvent((KRecentFilesMenu*)self, (QEvent*)event);
}

void k_recentfilesmenu_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnCustomEvent((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_connect_notify(void* self, void* signal) {
    KRecentFilesMenu_ConnectNotify((KRecentFilesMenu*)self, (QMetaMethod*)signal);
}

void k_recentfilesmenu_super_connect_notify(void* self, void* signal) {
    KRecentFilesMenu_SuperConnectNotify((KRecentFilesMenu*)self, (QMetaMethod*)signal);
}

void k_recentfilesmenu_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnConnectNotify((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_disconnect_notify(void* self, void* signal) {
    KRecentFilesMenu_DisconnectNotify((KRecentFilesMenu*)self, (QMetaMethod*)signal);
}

void k_recentfilesmenu_super_disconnect_notify(void* self, void* signal) {
    KRecentFilesMenu_SuperDisconnectNotify((KRecentFilesMenu*)self, (QMetaMethod*)signal);
}

void k_recentfilesmenu_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KRecentFilesMenu_OnDisconnectNotify((KRecentFilesMenu*)self, (intptr_t)callback);
}

int32_t k_recentfilesmenu_column_count(void* self) {
    return KRecentFilesMenu_ColumnCount((KRecentFilesMenu*)self);
}

int32_t k_recentfilesmenu_super_column_count(void* self) {
    return KRecentFilesMenu_SuperColumnCount((KRecentFilesMenu*)self);
}

void k_recentfilesmenu_on_column_count(void* self, int32_t (*callback)()) {
    KRecentFilesMenu_OnColumnCount((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_update_micro_focus(void* self) {
    KRecentFilesMenu_UpdateMicroFocus((KRecentFilesMenu*)self);
}

void k_recentfilesmenu_super_update_micro_focus(void* self) {
    KRecentFilesMenu_SuperUpdateMicroFocus((KRecentFilesMenu*)self);
}

void k_recentfilesmenu_on_update_micro_focus(void* self, void (*callback)()) {
    KRecentFilesMenu_OnUpdateMicroFocus((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_create(void* self) {
    KRecentFilesMenu_Create((KRecentFilesMenu*)self);
}

void k_recentfilesmenu_super_create(void* self) {
    KRecentFilesMenu_SuperCreate((KRecentFilesMenu*)self);
}

void k_recentfilesmenu_on_create(void* self, void (*callback)()) {
    KRecentFilesMenu_OnCreate((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_destroy(void* self) {
    KRecentFilesMenu_Destroy((KRecentFilesMenu*)self);
}

void k_recentfilesmenu_super_destroy(void* self) {
    KRecentFilesMenu_SuperDestroy((KRecentFilesMenu*)self);
}

void k_recentfilesmenu_on_destroy(void* self, void (*callback)()) {
    KRecentFilesMenu_OnDestroy((KRecentFilesMenu*)self, (intptr_t)callback);
}

bool k_recentfilesmenu_focus_next_child(void* self) {
    return KRecentFilesMenu_FocusNextChild((KRecentFilesMenu*)self);
}

bool k_recentfilesmenu_super_focus_next_child(void* self) {
    return KRecentFilesMenu_SuperFocusNextChild((KRecentFilesMenu*)self);
}

void k_recentfilesmenu_on_focus_next_child(void* self, bool (*callback)()) {
    KRecentFilesMenu_OnFocusNextChild((KRecentFilesMenu*)self, (intptr_t)callback);
}

bool k_recentfilesmenu_focus_previous_child(void* self) {
    return KRecentFilesMenu_FocusPreviousChild((KRecentFilesMenu*)self);
}

bool k_recentfilesmenu_super_focus_previous_child(void* self) {
    return KRecentFilesMenu_SuperFocusPreviousChild((KRecentFilesMenu*)self);
}

void k_recentfilesmenu_on_focus_previous_child(void* self, bool (*callback)()) {
    KRecentFilesMenu_OnFocusPreviousChild((KRecentFilesMenu*)self, (intptr_t)callback);
}

QObject* k_recentfilesmenu_sender(void* self) {
    return KRecentFilesMenu_Sender((KRecentFilesMenu*)self);
}

QObject* k_recentfilesmenu_super_sender(void* self) {
    return KRecentFilesMenu_SuperSender((KRecentFilesMenu*)self);
}

void k_recentfilesmenu_on_sender(void* self, QObject* (*callback)()) {
    KRecentFilesMenu_OnSender((KRecentFilesMenu*)self, (intptr_t)callback);
}

int32_t k_recentfilesmenu_sender_signal_index(void* self) {
    return KRecentFilesMenu_SenderSignalIndex((KRecentFilesMenu*)self);
}

int32_t k_recentfilesmenu_super_sender_signal_index(void* self) {
    return KRecentFilesMenu_SuperSenderSignalIndex((KRecentFilesMenu*)self);
}

void k_recentfilesmenu_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KRecentFilesMenu_OnSenderSignalIndex((KRecentFilesMenu*)self, (intptr_t)callback);
}

int32_t k_recentfilesmenu_receivers(void* self, const char* signal) {
    return KRecentFilesMenu_Receivers((KRecentFilesMenu*)self, signal);
}

int32_t k_recentfilesmenu_super_receivers(void* self, const char* signal) {
    return KRecentFilesMenu_SuperReceivers((KRecentFilesMenu*)self, signal);
}

void k_recentfilesmenu_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KRecentFilesMenu_OnReceivers((KRecentFilesMenu*)self, (intptr_t)callback);
}

bool k_recentfilesmenu_is_signal_connected(void* self, void* signal) {
    return KRecentFilesMenu_IsSignalConnected((KRecentFilesMenu*)self, (QMetaMethod*)signal);
}

bool k_recentfilesmenu_super_is_signal_connected(void* self, void* signal) {
    return KRecentFilesMenu_SuperIsSignalConnected((KRecentFilesMenu*)self, (QMetaMethod*)signal);
}

void k_recentfilesmenu_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KRecentFilesMenu_OnIsSignalConnected((KRecentFilesMenu*)self, (intptr_t)callback);
}

double k_recentfilesmenu_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KRecentFilesMenu_GetDecodedMetricF((KRecentFilesMenu*)self, metricA, metricB);
}

double k_recentfilesmenu_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KRecentFilesMenu_SuperGetDecodedMetricF((KRecentFilesMenu*)self, metricA, metricB);
}

void k_recentfilesmenu_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KRecentFilesMenu_OnGetDecodedMetricF((KRecentFilesMenu*)self, (intptr_t)callback);
}

void k_recentfilesmenu_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_recentfilesmenu_delete(void* self) {
    KRecentFilesMenu_Delete((KRecentFilesMenu*)(self));
}
