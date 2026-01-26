#include "../extras-kconfig/libkcoreconfigskeleton.hpp"
#include "../extras-kwidgetsaddons/libkpagedialog.hpp"
#include "../extras-kwidgetsaddons/libkpagewidget.hpp"
#include "../extras-kwidgetsaddons/libkpagewidgetmodel.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdialog.hpp"
#include "../libqdialogbuttonbox.hpp"
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
#include "libkconfigdialog.hpp"
#include "libkconfigdialog.h"

KConfigDialog* k_configdialog_new(void* parent, const char* name, void* config) {
    return KConfigDialog_new((QWidget*)parent, qstring(name), (KCoreConfigSkeleton*)config);
}

const QMetaObject* k_configdialog_meta_object(void* self) {
    return KConfigDialog_MetaObject((KConfigDialog*)self);
}

void k_configdialog_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KConfigDialog_OnMetaObject((KConfigDialog*)self, (intptr_t)callback);
}

const QMetaObject* k_configdialog_qbase_meta_object(void* self) {
    return KConfigDialog_QBaseMetaObject((KConfigDialog*)self);
}

void* k_configdialog_metacast(void* self, const char* param1) {
    return KConfigDialog_Metacast((KConfigDialog*)self, param1);
}

void k_configdialog_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KConfigDialog_OnMetacast((KConfigDialog*)self, (intptr_t)callback);
}

void* k_configdialog_qbase_metacast(void* self, const char* param1) {
    return KConfigDialog_QBaseMetacast((KConfigDialog*)self, param1);
}

int32_t k_configdialog_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KConfigDialog_Metacall((KConfigDialog*)self, param1, param2, param3);
}

void k_configdialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KConfigDialog_OnMetacall((KConfigDialog*)self, (intptr_t)callback);
}

int32_t k_configdialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KConfigDialog_QBaseMetacall((KConfigDialog*)self, param1, param2, param3);
}

const char* k_configdialog_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configdialog_widget_modified(void* self) {
    KConfigDialog_WidgetModified((KConfigDialog*)self);
}

void k_configdialog_on_widget_modified(void* self, void (*callback)(void*)) {
    KConfigDialog_Connect_WidgetModified((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_settings_changed(void* self, const char* dialogName) {
    KConfigDialog_SettingsChanged((KConfigDialog*)self, qstring(dialogName));
}

void k_configdialog_on_settings_changed(void* self, void (*callback)(void*, const char*)) {
    KConfigDialog_Connect_SettingsChanged((KConfigDialog*)self, (intptr_t)callback);
}

KPageWidgetItem* k_configdialog_add_page(void* self, void* page, const char* itemName) {
    return KConfigDialog_AddPage((KConfigDialog*)self, (QWidget*)page, qstring(itemName));
}

KPageWidgetItem* k_configdialog_add_page2(void* self, void* page, void* config, const char* itemName) {
    return KConfigDialog_AddPage2((KConfigDialog*)self, (QWidget*)page, (KCoreConfigSkeleton*)config, qstring(itemName));
}

KConfigDialog* k_configdialog_exists(const char* name) {
    return KConfigDialog_Exists(qstring(name));
}

bool k_configdialog_show_dialog(const char* name) {
    return KConfigDialog_ShowDialog(qstring(name));
}

void k_configdialog_update_settings(void* self) {
    KConfigDialog_UpdateSettings((KConfigDialog*)self);
}

void k_configdialog_on_update_settings(void* self, void (*callback)()) {
    KConfigDialog_OnUpdateSettings((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_qbase_update_settings(void* self) {
    KConfigDialog_QBaseUpdateSettings((KConfigDialog*)self);
}

void k_configdialog_update_widgets(void* self) {
    KConfigDialog_UpdateWidgets((KConfigDialog*)self);
}

void k_configdialog_on_update_widgets(void* self, void (*callback)()) {
    KConfigDialog_OnUpdateWidgets((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_qbase_update_widgets(void* self) {
    KConfigDialog_QBaseUpdateWidgets((KConfigDialog*)self);
}

void k_configdialog_update_widgets_default(void* self) {
    KConfigDialog_UpdateWidgetsDefault((KConfigDialog*)self);
}

void k_configdialog_on_update_widgets_default(void* self, void (*callback)()) {
    KConfigDialog_OnUpdateWidgetsDefault((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_qbase_update_widgets_default(void* self) {
    KConfigDialog_QBaseUpdateWidgetsDefault((KConfigDialog*)self);
}

void k_configdialog_update_buttons(void* self) {
    KConfigDialog_UpdateButtons((KConfigDialog*)self);
}

void k_configdialog_on_update_buttons(void* self, void (*callback)()) {
    KConfigDialog_OnUpdateButtons((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_qbase_update_buttons(void* self) {
    KConfigDialog_QBaseUpdateButtons((KConfigDialog*)self);
}

void k_configdialog_settings_changed_slot(void* self) {
    KConfigDialog_SettingsChangedSlot((KConfigDialog*)self);
}

void k_configdialog_on_settings_changed_slot(void* self, void (*callback)()) {
    KConfigDialog_OnSettingsChangedSlot((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_qbase_settings_changed_slot(void* self) {
    KConfigDialog_QBaseSettingsChangedSlot((KConfigDialog*)self);
}

void k_configdialog_set_help(void* self, const char* anchor) {
    KConfigDialog_SetHelp((KConfigDialog*)self, qstring(anchor));
}

void k_configdialog_on_set_help(void* self, void (*callback)(void*, const char*)) {
    KConfigDialog_OnSetHelp((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_qbase_set_help(void* self, const char* anchor) {
    KConfigDialog_QBaseSetHelp((KConfigDialog*)self, qstring(anchor));
}

void k_configdialog_show_help(void* self) {
    KConfigDialog_ShowHelp((KConfigDialog*)self);
}

void k_configdialog_on_show_help(void* self, void (*callback)()) {
    KConfigDialog_OnShowHelp((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_qbase_show_help(void* self) {
    KConfigDialog_QBaseShowHelp((KConfigDialog*)self);
}

bool k_configdialog_has_changed(void* self) {
    return KConfigDialog_HasChanged((KConfigDialog*)self);
}

void k_configdialog_on_has_changed(void* self, bool (*callback)()) {
    KConfigDialog_OnHasChanged((KConfigDialog*)self, (intptr_t)callback);
}

bool k_configdialog_qbase_has_changed(void* self) {
    return KConfigDialog_QBaseHasChanged((KConfigDialog*)self);
}

bool k_configdialog_is_default(void* self) {
    return KConfigDialog_IsDefault((KConfigDialog*)self);
}

void k_configdialog_on_is_default(void* self, bool (*callback)()) {
    KConfigDialog_OnIsDefault((KConfigDialog*)self, (intptr_t)callback);
}

bool k_configdialog_qbase_is_default(void* self) {
    return KConfigDialog_QBaseIsDefault((KConfigDialog*)self);
}

void k_configdialog_show_event(void* self, void* e) {
    KConfigDialog_ShowEvent((KConfigDialog*)self, (QShowEvent*)e);
}

void k_configdialog_on_show_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnShowEvent((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_qbase_show_event(void* self, void* e) {
    KConfigDialog_QBaseShowEvent((KConfigDialog*)self, (QShowEvent*)e);
}

const char* k_configdialog_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_configdialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KPageWidgetItem* k_configdialog_add_page3(void* self, void* page, const char* itemName, const char* pixmapName) {
    return KConfigDialog_AddPage3((KConfigDialog*)self, (QWidget*)page, qstring(itemName), qstring(pixmapName));
}

KPageWidgetItem* k_configdialog_add_page4(void* self, void* page, const char* itemName, const char* pixmapName, const char* header) {
    return KConfigDialog_AddPage4((KConfigDialog*)self, (QWidget*)page, qstring(itemName), qstring(pixmapName), qstring(header));
}

KPageWidgetItem* k_configdialog_add_page5(void* self, void* page, const char* itemName, const char* pixmapName, const char* header, bool manage) {
    return KConfigDialog_AddPage5((KConfigDialog*)self, (QWidget*)page, qstring(itemName), qstring(pixmapName), qstring(header), manage);
}

KPageWidgetItem* k_configdialog_add_page42(void* self, void* page, void* config, const char* itemName, const char* pixmapName) {
    return KConfigDialog_AddPage42((KConfigDialog*)self, (QWidget*)page, (KCoreConfigSkeleton*)config, qstring(itemName), qstring(pixmapName));
}

KPageWidgetItem* k_configdialog_add_page52(void* self, void* page, void* config, const char* itemName, const char* pixmapName, const char* header) {
    return KConfigDialog_AddPage52((KConfigDialog*)self, (QWidget*)page, (KCoreConfigSkeleton*)config, qstring(itemName), qstring(pixmapName), qstring(header));
}

void k_configdialog_set_help2(void* self, const char* anchor, const char* appname) {
    KConfigDialog_SetHelp2((KConfigDialog*)self, qstring(anchor), qstring(appname));
}

void k_configdialog_on_set_help2(void* self, void (*callback)(void*, const char*, const char*)) {
    KConfigDialog_OnSetHelp2((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_qbase_set_help2(void* self, const char* anchor, const char* appname) {
    KConfigDialog_QBaseSetHelp2((KConfigDialog*)self, qstring(anchor), qstring(appname));
}

void k_configdialog_set_face_type(void* self, int32_t faceType) {
    KPageDialog_SetFaceType((KPageDialog*)self, faceType);
}

KPageWidgetItem* k_configdialog_insert_page(void* self, void* before, void* widget, const char* name) {
    return KPageDialog_InsertPage((KPageDialog*)self, (KPageWidgetItem*)before, (QWidget*)widget, qstring(name));
}

void k_configdialog_insert_page2(void* self, void* before, void* item) {
    KPageDialog_InsertPage2((KPageDialog*)self, (KPageWidgetItem*)before, (KPageWidgetItem*)item);
}

KPageWidgetItem* k_configdialog_add_sub_page(void* self, void* parent, void* widget, const char* name) {
    return KPageDialog_AddSubPage((KPageDialog*)self, (KPageWidgetItem*)parent, (QWidget*)widget, qstring(name));
}

void k_configdialog_add_sub_page2(void* self, void* parent, void* item) {
    KPageDialog_AddSubPage2((KPageDialog*)self, (KPageWidgetItem*)parent, (KPageWidgetItem*)item);
}

void k_configdialog_remove_page(void* self, void* item) {
    KPageDialog_RemovePage((KPageDialog*)self, (KPageWidgetItem*)item);
}

void k_configdialog_set_current_page(void* self, void* item) {
    KPageDialog_SetCurrentPage((KPageDialog*)self, (KPageWidgetItem*)item);
}

KPageWidgetItem* k_configdialog_current_page(void* self) {
    return KPageDialog_CurrentPage((KPageDialog*)self);
}

void k_configdialog_set_standard_buttons(void* self, int32_t buttons) {
    KPageDialog_SetStandardButtons((KPageDialog*)self, buttons);
}

QPushButton* k_configdialog_button(void* self, int32_t which) {
    return KPageDialog_Button((KPageDialog*)self, which);
}

void k_configdialog_add_action_button(void* self, void* button) {
    KPageDialog_AddActionButton((KPageDialog*)self, (QAbstractButton*)button);
}

void k_configdialog_current_page_changed(void* self, void* current, void* before) {
    KPageDialog_CurrentPageChanged((KPageDialog*)self, (KPageWidgetItem*)current, (KPageWidgetItem*)before);
}

void k_configdialog_on_current_page_changed(void* self, void (*callback)(void*, void*, void*)) {
    KPageDialog_Connect_CurrentPageChanged((KPageDialog*)self, (intptr_t)callback);
}

void k_configdialog_page_removed(void* self, void* page) {
    KPageDialog_PageRemoved((KPageDialog*)self, (KPageWidgetItem*)page);
}

void k_configdialog_on_page_removed(void* self, void (*callback)(void*, void*)) {
    KPageDialog_Connect_PageRemoved((KPageDialog*)self, (intptr_t)callback);
}

int32_t k_configdialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void k_configdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool k_configdialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void k_configdialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void k_configdialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void k_configdialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void k_configdialog_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void k_configdialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void k_configdialog_on_accepted(void* self, void (*callback)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)callback);
}

void k_configdialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void k_configdialog_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

uintptr_t k_configdialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_configdialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_configdialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_configdialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_configdialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_configdialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_configdialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_configdialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_configdialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_configdialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_configdialog_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_configdialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_configdialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_configdialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_configdialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_configdialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_configdialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_configdialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_configdialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_configdialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_configdialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_configdialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_configdialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_configdialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_configdialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_configdialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_configdialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_configdialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_configdialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_configdialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_configdialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_configdialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_configdialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_configdialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_configdialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_configdialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_configdialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_configdialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_configdialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_configdialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_configdialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_configdialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_configdialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_configdialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_configdialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_configdialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_configdialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_configdialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_configdialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_configdialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_configdialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_configdialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_configdialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_configdialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_configdialog_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_configdialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_configdialog_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_configdialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_configdialog_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_configdialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_configdialog_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_configdialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_configdialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_configdialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_configdialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_configdialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_configdialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_configdialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_configdialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_configdialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_configdialog_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_configdialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_configdialog_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_configdialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_configdialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_configdialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_configdialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_configdialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_configdialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_configdialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_configdialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_configdialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_configdialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_configdialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_configdialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_configdialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_configdialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_configdialog_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_configdialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_configdialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_configdialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_configdialog_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_configdialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_configdialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_configdialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_configdialog_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_configdialog_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_configdialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_configdialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_configdialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_configdialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configdialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_configdialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_configdialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_configdialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configdialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_configdialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configdialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_configdialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configdialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_configdialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_configdialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_configdialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_configdialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configdialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_configdialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_configdialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_configdialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configdialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_configdialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_configdialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configdialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_configdialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configdialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_configdialog_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_configdialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_configdialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_configdialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_configdialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_configdialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_configdialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_configdialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_configdialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_configdialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_configdialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_configdialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_configdialog_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_configdialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_configdialog_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_configdialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_configdialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_configdialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_configdialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_configdialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_configdialog_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_configdialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_configdialog_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_configdialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_configdialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_configdialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_configdialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_configdialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_configdialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_configdialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_configdialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_configdialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_configdialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_configdialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_configdialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_configdialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_configdialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_configdialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_configdialog_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_configdialog_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_configdialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_configdialog_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_configdialog_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_configdialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_configdialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_configdialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_configdialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_configdialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_configdialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_configdialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_configdialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_configdialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_configdialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_configdialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_configdialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_configdialog_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_configdialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_configdialog_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_configdialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_configdialog_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_configdialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_configdialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_configdialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_configdialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_configdialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_configdialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_configdialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_configdialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_configdialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_configdialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_configdialog_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_configdialog_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_configdialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_configdialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_configdialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_configdialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_configdialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_configdialog_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_configdialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_configdialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_configdialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_configdialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_configdialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_configdialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_configdialog_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_configdialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_configdialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_configdialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_configdialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_configdialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_configdialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_configdialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_configdialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_configdialog_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_configdialog_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_configdialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_configdialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_configdialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_configdialog_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_configdialog_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_configdialog_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_configdialog_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_configdialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_configdialog_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_configdialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_configdialog_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_configdialog_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_configdialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_configdialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_configdialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_configdialog_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_configdialog_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_configdialog_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_configdialog_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_configdialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_configdialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_configdialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_configdialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_configdialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_configdialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_configdialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_configdialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_configdialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_configdialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_configdialog_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_configdialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_configdialog_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_configdialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_configdialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_configdialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_configdialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_configdialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_configdialog_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_configdialog_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_configdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_configdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_configdialog_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_configdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_configdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_configdialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_configdialog_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_configdialog_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_configdialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_configdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_configdialog_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_configdialog_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_configdialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_configdialog_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_configdialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configdialog_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_configdialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_configdialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_configdialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_configdialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_configdialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_configdialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_configdialog_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_configdialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_configdialog_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_configdialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_configdialog_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_configdialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_configdialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_configdialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_configdialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_configdialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_configdialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_configdialog_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_configdialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_configdialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_configdialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_configdialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_configdialog_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configdialog_dynamic_property_names\n");
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

QBindingStorage* k_configdialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_configdialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_configdialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_configdialog_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_configdialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_configdialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_configdialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_configdialog_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_configdialog_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_configdialog_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_configdialog_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_configdialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_configdialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_configdialog_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_configdialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_configdialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_configdialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_configdialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_configdialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_configdialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_configdialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_configdialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_configdialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_configdialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_configdialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_configdialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_configdialog_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_configdialog_set_visible(void* self, bool visible) {
    KConfigDialog_SetVisible((KConfigDialog*)self, visible);
}

void k_configdialog_qbase_set_visible(void* self, bool visible) {
    KConfigDialog_QBaseSetVisible((KConfigDialog*)self, visible);
}

void k_configdialog_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KConfigDialog_OnSetVisible((KConfigDialog*)self, (intptr_t)callback);
}

QSize* k_configdialog_size_hint(void* self) {
    return KConfigDialog_SizeHint((KConfigDialog*)self);
}

QSize* k_configdialog_qbase_size_hint(void* self) {
    return KConfigDialog_QBaseSizeHint((KConfigDialog*)self);
}

void k_configdialog_on_size_hint(void* self, QSize* (*callback)()) {
    KConfigDialog_OnSizeHint((KConfigDialog*)self, (intptr_t)callback);
}

QSize* k_configdialog_minimum_size_hint(void* self) {
    return KConfigDialog_MinimumSizeHint((KConfigDialog*)self);
}

QSize* k_configdialog_qbase_minimum_size_hint(void* self) {
    return KConfigDialog_QBaseMinimumSizeHint((KConfigDialog*)self);
}

void k_configdialog_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KConfigDialog_OnMinimumSizeHint((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_open(void* self) {
    KConfigDialog_Open((KConfigDialog*)self);
}

void k_configdialog_qbase_open(void* self) {
    KConfigDialog_QBaseOpen((KConfigDialog*)self);
}

void k_configdialog_on_open(void* self, void (*callback)()) {
    KConfigDialog_OnOpen((KConfigDialog*)self, (intptr_t)callback);
}

int32_t k_configdialog_exec(void* self) {
    return KConfigDialog_Exec((KConfigDialog*)self);
}

int32_t k_configdialog_qbase_exec(void* self) {
    return KConfigDialog_QBaseExec((KConfigDialog*)self);
}

void k_configdialog_on_exec(void* self, int32_t (*callback)()) {
    KConfigDialog_OnExec((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_done(void* self, int param1) {
    KConfigDialog_Done((KConfigDialog*)self, param1);
}

void k_configdialog_qbase_done(void* self, int param1) {
    KConfigDialog_QBaseDone((KConfigDialog*)self, param1);
}

void k_configdialog_on_done(void* self, void (*callback)(void*, int)) {
    KConfigDialog_OnDone((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_accept(void* self) {
    KConfigDialog_Accept((KConfigDialog*)self);
}

void k_configdialog_qbase_accept(void* self) {
    KConfigDialog_QBaseAccept((KConfigDialog*)self);
}

void k_configdialog_on_accept(void* self, void (*callback)()) {
    KConfigDialog_OnAccept((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_reject(void* self) {
    KConfigDialog_Reject((KConfigDialog*)self);
}

void k_configdialog_qbase_reject(void* self) {
    KConfigDialog_QBaseReject((KConfigDialog*)self);
}

void k_configdialog_on_reject(void* self, void (*callback)()) {
    KConfigDialog_OnReject((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_key_press_event(void* self, void* param1) {
    KConfigDialog_KeyPressEvent((KConfigDialog*)self, (QKeyEvent*)param1);
}

void k_configdialog_qbase_key_press_event(void* self, void* param1) {
    KConfigDialog_QBaseKeyPressEvent((KConfigDialog*)self, (QKeyEvent*)param1);
}

void k_configdialog_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnKeyPressEvent((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_close_event(void* self, void* param1) {
    KConfigDialog_CloseEvent((KConfigDialog*)self, (QCloseEvent*)param1);
}

void k_configdialog_qbase_close_event(void* self, void* param1) {
    KConfigDialog_QBaseCloseEvent((KConfigDialog*)self, (QCloseEvent*)param1);
}

void k_configdialog_on_close_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnCloseEvent((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_resize_event(void* self, void* param1) {
    KConfigDialog_ResizeEvent((KConfigDialog*)self, (QResizeEvent*)param1);
}

void k_configdialog_qbase_resize_event(void* self, void* param1) {
    KConfigDialog_QBaseResizeEvent((KConfigDialog*)self, (QResizeEvent*)param1);
}

void k_configdialog_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnResizeEvent((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_context_menu_event(void* self, void* param1) {
    KConfigDialog_ContextMenuEvent((KConfigDialog*)self, (QContextMenuEvent*)param1);
}

void k_configdialog_qbase_context_menu_event(void* self, void* param1) {
    KConfigDialog_QBaseContextMenuEvent((KConfigDialog*)self, (QContextMenuEvent*)param1);
}

void k_configdialog_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnContextMenuEvent((KConfigDialog*)self, (intptr_t)callback);
}

bool k_configdialog_event_filter(void* self, void* param1, void* param2) {
    return KConfigDialog_EventFilter((KConfigDialog*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_configdialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return KConfigDialog_QBaseEventFilter((KConfigDialog*)self, (QObject*)param1, (QEvent*)param2);
}

void k_configdialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KConfigDialog_OnEventFilter((KConfigDialog*)self, (intptr_t)callback);
}

int32_t k_configdialog_dev_type(void* self) {
    return KConfigDialog_DevType((KConfigDialog*)self);
}

int32_t k_configdialog_qbase_dev_type(void* self) {
    return KConfigDialog_QBaseDevType((KConfigDialog*)self);
}

void k_configdialog_on_dev_type(void* self, int32_t (*callback)()) {
    KConfigDialog_OnDevType((KConfigDialog*)self, (intptr_t)callback);
}

int32_t k_configdialog_height_for_width(void* self, int param1) {
    return KConfigDialog_HeightForWidth((KConfigDialog*)self, param1);
}

int32_t k_configdialog_qbase_height_for_width(void* self, int param1) {
    return KConfigDialog_QBaseHeightForWidth((KConfigDialog*)self, param1);
}

void k_configdialog_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KConfigDialog_OnHeightForWidth((KConfigDialog*)self, (intptr_t)callback);
}

bool k_configdialog_has_height_for_width(void* self) {
    return KConfigDialog_HasHeightForWidth((KConfigDialog*)self);
}

bool k_configdialog_qbase_has_height_for_width(void* self) {
    return KConfigDialog_QBaseHasHeightForWidth((KConfigDialog*)self);
}

void k_configdialog_on_has_height_for_width(void* self, bool (*callback)()) {
    KConfigDialog_OnHasHeightForWidth((KConfigDialog*)self, (intptr_t)callback);
}

QPaintEngine* k_configdialog_paint_engine(void* self) {
    return KConfigDialog_PaintEngine((KConfigDialog*)self);
}

QPaintEngine* k_configdialog_qbase_paint_engine(void* self) {
    return KConfigDialog_QBasePaintEngine((KConfigDialog*)self);
}

void k_configdialog_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KConfigDialog_OnPaintEngine((KConfigDialog*)self, (intptr_t)callback);
}

bool k_configdialog_event(void* self, void* event) {
    return KConfigDialog_Event((KConfigDialog*)self, (QEvent*)event);
}

bool k_configdialog_qbase_event(void* self, void* event) {
    return KConfigDialog_QBaseEvent((KConfigDialog*)self, (QEvent*)event);
}

void k_configdialog_on_event(void* self, bool (*callback)(void*, void*)) {
    KConfigDialog_OnEvent((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_mouse_press_event(void* self, void* event) {
    KConfigDialog_MousePressEvent((KConfigDialog*)self, (QMouseEvent*)event);
}

void k_configdialog_qbase_mouse_press_event(void* self, void* event) {
    KConfigDialog_QBaseMousePressEvent((KConfigDialog*)self, (QMouseEvent*)event);
}

void k_configdialog_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnMousePressEvent((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_mouse_release_event(void* self, void* event) {
    KConfigDialog_MouseReleaseEvent((KConfigDialog*)self, (QMouseEvent*)event);
}

void k_configdialog_qbase_mouse_release_event(void* self, void* event) {
    KConfigDialog_QBaseMouseReleaseEvent((KConfigDialog*)self, (QMouseEvent*)event);
}

void k_configdialog_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnMouseReleaseEvent((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_mouse_double_click_event(void* self, void* event) {
    KConfigDialog_MouseDoubleClickEvent((KConfigDialog*)self, (QMouseEvent*)event);
}

void k_configdialog_qbase_mouse_double_click_event(void* self, void* event) {
    KConfigDialog_QBaseMouseDoubleClickEvent((KConfigDialog*)self, (QMouseEvent*)event);
}

void k_configdialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnMouseDoubleClickEvent((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_mouse_move_event(void* self, void* event) {
    KConfigDialog_MouseMoveEvent((KConfigDialog*)self, (QMouseEvent*)event);
}

void k_configdialog_qbase_mouse_move_event(void* self, void* event) {
    KConfigDialog_QBaseMouseMoveEvent((KConfigDialog*)self, (QMouseEvent*)event);
}

void k_configdialog_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnMouseMoveEvent((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_wheel_event(void* self, void* event) {
    KConfigDialog_WheelEvent((KConfigDialog*)self, (QWheelEvent*)event);
}

void k_configdialog_qbase_wheel_event(void* self, void* event) {
    KConfigDialog_QBaseWheelEvent((KConfigDialog*)self, (QWheelEvent*)event);
}

void k_configdialog_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnWheelEvent((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_key_release_event(void* self, void* event) {
    KConfigDialog_KeyReleaseEvent((KConfigDialog*)self, (QKeyEvent*)event);
}

void k_configdialog_qbase_key_release_event(void* self, void* event) {
    KConfigDialog_QBaseKeyReleaseEvent((KConfigDialog*)self, (QKeyEvent*)event);
}

void k_configdialog_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnKeyReleaseEvent((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_focus_in_event(void* self, void* event) {
    KConfigDialog_FocusInEvent((KConfigDialog*)self, (QFocusEvent*)event);
}

void k_configdialog_qbase_focus_in_event(void* self, void* event) {
    KConfigDialog_QBaseFocusInEvent((KConfigDialog*)self, (QFocusEvent*)event);
}

void k_configdialog_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnFocusInEvent((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_focus_out_event(void* self, void* event) {
    KConfigDialog_FocusOutEvent((KConfigDialog*)self, (QFocusEvent*)event);
}

void k_configdialog_qbase_focus_out_event(void* self, void* event) {
    KConfigDialog_QBaseFocusOutEvent((KConfigDialog*)self, (QFocusEvent*)event);
}

void k_configdialog_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnFocusOutEvent((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_enter_event(void* self, void* event) {
    KConfigDialog_EnterEvent((KConfigDialog*)self, (QEnterEvent*)event);
}

void k_configdialog_qbase_enter_event(void* self, void* event) {
    KConfigDialog_QBaseEnterEvent((KConfigDialog*)self, (QEnterEvent*)event);
}

void k_configdialog_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnEnterEvent((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_leave_event(void* self, void* event) {
    KConfigDialog_LeaveEvent((KConfigDialog*)self, (QEvent*)event);
}

void k_configdialog_qbase_leave_event(void* self, void* event) {
    KConfigDialog_QBaseLeaveEvent((KConfigDialog*)self, (QEvent*)event);
}

void k_configdialog_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnLeaveEvent((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_paint_event(void* self, void* event) {
    KConfigDialog_PaintEvent((KConfigDialog*)self, (QPaintEvent*)event);
}

void k_configdialog_qbase_paint_event(void* self, void* event) {
    KConfigDialog_QBasePaintEvent((KConfigDialog*)self, (QPaintEvent*)event);
}

void k_configdialog_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnPaintEvent((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_move_event(void* self, void* event) {
    KConfigDialog_MoveEvent((KConfigDialog*)self, (QMoveEvent*)event);
}

void k_configdialog_qbase_move_event(void* self, void* event) {
    KConfigDialog_QBaseMoveEvent((KConfigDialog*)self, (QMoveEvent*)event);
}

void k_configdialog_on_move_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnMoveEvent((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_tablet_event(void* self, void* event) {
    KConfigDialog_TabletEvent((KConfigDialog*)self, (QTabletEvent*)event);
}

void k_configdialog_qbase_tablet_event(void* self, void* event) {
    KConfigDialog_QBaseTabletEvent((KConfigDialog*)self, (QTabletEvent*)event);
}

void k_configdialog_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnTabletEvent((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_action_event(void* self, void* event) {
    KConfigDialog_ActionEvent((KConfigDialog*)self, (QActionEvent*)event);
}

void k_configdialog_qbase_action_event(void* self, void* event) {
    KConfigDialog_QBaseActionEvent((KConfigDialog*)self, (QActionEvent*)event);
}

void k_configdialog_on_action_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnActionEvent((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_drag_enter_event(void* self, void* event) {
    KConfigDialog_DragEnterEvent((KConfigDialog*)self, (QDragEnterEvent*)event);
}

void k_configdialog_qbase_drag_enter_event(void* self, void* event) {
    KConfigDialog_QBaseDragEnterEvent((KConfigDialog*)self, (QDragEnterEvent*)event);
}

void k_configdialog_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnDragEnterEvent((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_drag_move_event(void* self, void* event) {
    KConfigDialog_DragMoveEvent((KConfigDialog*)self, (QDragMoveEvent*)event);
}

void k_configdialog_qbase_drag_move_event(void* self, void* event) {
    KConfigDialog_QBaseDragMoveEvent((KConfigDialog*)self, (QDragMoveEvent*)event);
}

void k_configdialog_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnDragMoveEvent((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_drag_leave_event(void* self, void* event) {
    KConfigDialog_DragLeaveEvent((KConfigDialog*)self, (QDragLeaveEvent*)event);
}

void k_configdialog_qbase_drag_leave_event(void* self, void* event) {
    KConfigDialog_QBaseDragLeaveEvent((KConfigDialog*)self, (QDragLeaveEvent*)event);
}

void k_configdialog_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnDragLeaveEvent((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_drop_event(void* self, void* event) {
    KConfigDialog_DropEvent((KConfigDialog*)self, (QDropEvent*)event);
}

void k_configdialog_qbase_drop_event(void* self, void* event) {
    KConfigDialog_QBaseDropEvent((KConfigDialog*)self, (QDropEvent*)event);
}

void k_configdialog_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnDropEvent((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_hide_event(void* self, void* event) {
    KConfigDialog_HideEvent((KConfigDialog*)self, (QHideEvent*)event);
}

void k_configdialog_qbase_hide_event(void* self, void* event) {
    KConfigDialog_QBaseHideEvent((KConfigDialog*)self, (QHideEvent*)event);
}

void k_configdialog_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnHideEvent((KConfigDialog*)self, (intptr_t)callback);
}

bool k_configdialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KConfigDialog_NativeEvent((KConfigDialog*)self, qstring(eventType), message, result);
}

bool k_configdialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KConfigDialog_QBaseNativeEvent((KConfigDialog*)self, qstring(eventType), message, result);
}

void k_configdialog_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KConfigDialog_OnNativeEvent((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_change_event(void* self, void* param1) {
    KConfigDialog_ChangeEvent((KConfigDialog*)self, (QEvent*)param1);
}

void k_configdialog_qbase_change_event(void* self, void* param1) {
    KConfigDialog_QBaseChangeEvent((KConfigDialog*)self, (QEvent*)param1);
}

void k_configdialog_on_change_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnChangeEvent((KConfigDialog*)self, (intptr_t)callback);
}

int32_t k_configdialog_metric(void* self, int32_t param1) {
    return KConfigDialog_Metric((KConfigDialog*)self, param1);
}

int32_t k_configdialog_qbase_metric(void* self, int32_t param1) {
    return KConfigDialog_QBaseMetric((KConfigDialog*)self, param1);
}

void k_configdialog_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KConfigDialog_OnMetric((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_init_painter(void* self, void* painter) {
    KConfigDialog_InitPainter((KConfigDialog*)self, (QPainter*)painter);
}

void k_configdialog_qbase_init_painter(void* self, void* painter) {
    KConfigDialog_QBaseInitPainter((KConfigDialog*)self, (QPainter*)painter);
}

void k_configdialog_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnInitPainter((KConfigDialog*)self, (intptr_t)callback);
}

QPaintDevice* k_configdialog_redirected(void* self, void* offset) {
    return KConfigDialog_Redirected((KConfigDialog*)self, (QPoint*)offset);
}

QPaintDevice* k_configdialog_qbase_redirected(void* self, void* offset) {
    return KConfigDialog_QBaseRedirected((KConfigDialog*)self, (QPoint*)offset);
}

void k_configdialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KConfigDialog_OnRedirected((KConfigDialog*)self, (intptr_t)callback);
}

QPainter* k_configdialog_shared_painter(void* self) {
    return KConfigDialog_SharedPainter((KConfigDialog*)self);
}

QPainter* k_configdialog_qbase_shared_painter(void* self) {
    return KConfigDialog_QBaseSharedPainter((KConfigDialog*)self);
}

void k_configdialog_on_shared_painter(void* self, QPainter* (*callback)()) {
    KConfigDialog_OnSharedPainter((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_input_method_event(void* self, void* param1) {
    KConfigDialog_InputMethodEvent((KConfigDialog*)self, (QInputMethodEvent*)param1);
}

void k_configdialog_qbase_input_method_event(void* self, void* param1) {
    KConfigDialog_QBaseInputMethodEvent((KConfigDialog*)self, (QInputMethodEvent*)param1);
}

void k_configdialog_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnInputMethodEvent((KConfigDialog*)self, (intptr_t)callback);
}

QVariant* k_configdialog_input_method_query(void* self, int32_t param1) {
    return KConfigDialog_InputMethodQuery((KConfigDialog*)self, param1);
}

QVariant* k_configdialog_qbase_input_method_query(void* self, int32_t param1) {
    return KConfigDialog_QBaseInputMethodQuery((KConfigDialog*)self, param1);
}

void k_configdialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KConfigDialog_OnInputMethodQuery((KConfigDialog*)self, (intptr_t)callback);
}

bool k_configdialog_focus_next_prev_child(void* self, bool next) {
    return KConfigDialog_FocusNextPrevChild((KConfigDialog*)self, next);
}

bool k_configdialog_qbase_focus_next_prev_child(void* self, bool next) {
    return KConfigDialog_QBaseFocusNextPrevChild((KConfigDialog*)self, next);
}

void k_configdialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KConfigDialog_OnFocusNextPrevChild((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_timer_event(void* self, void* event) {
    KConfigDialog_TimerEvent((KConfigDialog*)self, (QTimerEvent*)event);
}

void k_configdialog_qbase_timer_event(void* self, void* event) {
    KConfigDialog_QBaseTimerEvent((KConfigDialog*)self, (QTimerEvent*)event);
}

void k_configdialog_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnTimerEvent((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_child_event(void* self, void* event) {
    KConfigDialog_ChildEvent((KConfigDialog*)self, (QChildEvent*)event);
}

void k_configdialog_qbase_child_event(void* self, void* event) {
    KConfigDialog_QBaseChildEvent((KConfigDialog*)self, (QChildEvent*)event);
}

void k_configdialog_on_child_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnChildEvent((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_custom_event(void* self, void* event) {
    KConfigDialog_CustomEvent((KConfigDialog*)self, (QEvent*)event);
}

void k_configdialog_qbase_custom_event(void* self, void* event) {
    KConfigDialog_QBaseCustomEvent((KConfigDialog*)self, (QEvent*)event);
}

void k_configdialog_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnCustomEvent((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_connect_notify(void* self, void* signal) {
    KConfigDialog_ConnectNotify((KConfigDialog*)self, (QMetaMethod*)signal);
}

void k_configdialog_qbase_connect_notify(void* self, void* signal) {
    KConfigDialog_QBaseConnectNotify((KConfigDialog*)self, (QMetaMethod*)signal);
}

void k_configdialog_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnConnectNotify((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_disconnect_notify(void* self, void* signal) {
    KConfigDialog_DisconnectNotify((KConfigDialog*)self, (QMetaMethod*)signal);
}

void k_configdialog_qbase_disconnect_notify(void* self, void* signal) {
    KConfigDialog_QBaseDisconnectNotify((KConfigDialog*)self, (QMetaMethod*)signal);
}

void k_configdialog_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnDisconnectNotify((KConfigDialog*)self, (intptr_t)callback);
}

KPageWidget* k_configdialog_page_widget(void* self) {
    return KConfigDialog_PageWidget((KConfigDialog*)self);
}

KPageWidget* k_configdialog_qbase_page_widget(void* self) {
    return KConfigDialog_QBasePageWidget((KConfigDialog*)self);
}

void k_configdialog_on_page_widget(void* self, KPageWidget* (*callback)()) {
    KConfigDialog_OnPageWidget((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_set_page_widget(void* self, void* widget) {
    KConfigDialog_SetPageWidget((KConfigDialog*)self, (KPageWidget*)widget);
}

void k_configdialog_qbase_set_page_widget(void* self, void* widget) {
    KConfigDialog_QBaseSetPageWidget((KConfigDialog*)self, (KPageWidget*)widget);
}

void k_configdialog_on_set_page_widget(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnSetPageWidget((KConfigDialog*)self, (intptr_t)callback);
}

QDialogButtonBox* k_configdialog_button_box(void* self) {
    return KConfigDialog_ButtonBox((KConfigDialog*)self);
}

QDialogButtonBox* k_configdialog_qbase_button_box(void* self) {
    return KConfigDialog_QBaseButtonBox((KConfigDialog*)self);
}

void k_configdialog_on_button_box(void* self, QDialogButtonBox* (*callback)()) {
    KConfigDialog_OnButtonBox((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_set_button_box(void* self, void* box) {
    KConfigDialog_SetButtonBox((KConfigDialog*)self, (QDialogButtonBox*)box);
}

void k_configdialog_qbase_set_button_box(void* self, void* box) {
    KConfigDialog_QBaseSetButtonBox((KConfigDialog*)self, (QDialogButtonBox*)box);
}

void k_configdialog_on_set_button_box(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnSetButtonBox((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_adjust_position(void* self, void* param1) {
    KConfigDialog_AdjustPosition((KConfigDialog*)self, (QWidget*)param1);
}

void k_configdialog_qbase_adjust_position(void* self, void* param1) {
    KConfigDialog_QBaseAdjustPosition((KConfigDialog*)self, (QWidget*)param1);
}

void k_configdialog_on_adjust_position(void* self, void (*callback)(void*, void*)) {
    KConfigDialog_OnAdjustPosition((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_update_micro_focus(void* self) {
    KConfigDialog_UpdateMicroFocus((KConfigDialog*)self);
}

void k_configdialog_qbase_update_micro_focus(void* self) {
    KConfigDialog_QBaseUpdateMicroFocus((KConfigDialog*)self);
}

void k_configdialog_on_update_micro_focus(void* self, void (*callback)()) {
    KConfigDialog_OnUpdateMicroFocus((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_create(void* self) {
    KConfigDialog_Create((KConfigDialog*)self);
}

void k_configdialog_qbase_create(void* self) {
    KConfigDialog_QBaseCreate((KConfigDialog*)self);
}

void k_configdialog_on_create(void* self, void (*callback)()) {
    KConfigDialog_OnCreate((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_destroy(void* self) {
    KConfigDialog_Destroy((KConfigDialog*)self);
}

void k_configdialog_qbase_destroy(void* self) {
    KConfigDialog_QBaseDestroy((KConfigDialog*)self);
}

void k_configdialog_on_destroy(void* self, void (*callback)()) {
    KConfigDialog_OnDestroy((KConfigDialog*)self, (intptr_t)callback);
}

bool k_configdialog_focus_next_child(void* self) {
    return KConfigDialog_FocusNextChild((KConfigDialog*)self);
}

bool k_configdialog_qbase_focus_next_child(void* self) {
    return KConfigDialog_QBaseFocusNextChild((KConfigDialog*)self);
}

void k_configdialog_on_focus_next_child(void* self, bool (*callback)()) {
    KConfigDialog_OnFocusNextChild((KConfigDialog*)self, (intptr_t)callback);
}

bool k_configdialog_focus_previous_child(void* self) {
    return KConfigDialog_FocusPreviousChild((KConfigDialog*)self);
}

bool k_configdialog_qbase_focus_previous_child(void* self) {
    return KConfigDialog_QBaseFocusPreviousChild((KConfigDialog*)self);
}

void k_configdialog_on_focus_previous_child(void* self, bool (*callback)()) {
    KConfigDialog_OnFocusPreviousChild((KConfigDialog*)self, (intptr_t)callback);
}

QObject* k_configdialog_sender(void* self) {
    return KConfigDialog_Sender((KConfigDialog*)self);
}

QObject* k_configdialog_qbase_sender(void* self) {
    return KConfigDialog_QBaseSender((KConfigDialog*)self);
}

void k_configdialog_on_sender(void* self, QObject* (*callback)()) {
    KConfigDialog_OnSender((KConfigDialog*)self, (intptr_t)callback);
}

int32_t k_configdialog_sender_signal_index(void* self) {
    return KConfigDialog_SenderSignalIndex((KConfigDialog*)self);
}

int32_t k_configdialog_qbase_sender_signal_index(void* self) {
    return KConfigDialog_QBaseSenderSignalIndex((KConfigDialog*)self);
}

void k_configdialog_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KConfigDialog_OnSenderSignalIndex((KConfigDialog*)self, (intptr_t)callback);
}

int32_t k_configdialog_receivers(void* self, const char* signal) {
    return KConfigDialog_Receivers((KConfigDialog*)self, signal);
}

int32_t k_configdialog_qbase_receivers(void* self, const char* signal) {
    return KConfigDialog_QBaseReceivers((KConfigDialog*)self, signal);
}

void k_configdialog_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KConfigDialog_OnReceivers((KConfigDialog*)self, (intptr_t)callback);
}

bool k_configdialog_is_signal_connected(void* self, void* signal) {
    return KConfigDialog_IsSignalConnected((KConfigDialog*)self, (QMetaMethod*)signal);
}

bool k_configdialog_qbase_is_signal_connected(void* self, void* signal) {
    return KConfigDialog_QBaseIsSignalConnected((KConfigDialog*)self, (QMetaMethod*)signal);
}

void k_configdialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KConfigDialog_OnIsSignalConnected((KConfigDialog*)self, (intptr_t)callback);
}

double k_configdialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KConfigDialog_GetDecodedMetricF((KConfigDialog*)self, metricA, metricB);
}

double k_configdialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KConfigDialog_QBaseGetDecodedMetricF((KConfigDialog*)self, metricA, metricB);
}

void k_configdialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KConfigDialog_OnGetDecodedMetricF((KConfigDialog*)self, (intptr_t)callback);
}

void k_configdialog_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_configdialog_delete(void* self) {
    KConfigDialog_Delete((KConfigDialog*)(self));
}
