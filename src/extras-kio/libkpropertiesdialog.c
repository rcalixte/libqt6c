#include "libkfileitem.hpp"
#include "../extras-kwidgetsaddons/libkpagedialog.hpp"
#include "../extras-kwidgetsaddons/libkpagewidget.hpp"
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
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkpropertiesdialog.hpp"
#include "libkpropertiesdialog.h"

KPropertiesDialog* k_propertiesdialog_new(void* item) {
    return KPropertiesDialog_new((KFileItem*)item);
}

KPropertiesDialog* k_propertiesdialog_new2(void* _items) {
    return KPropertiesDialog_new2((KFileItemList*)_items);
}

KPropertiesDialog* k_propertiesdialog_new3(void* url) {
    return KPropertiesDialog_new3((QUrl*)url);
}

KPropertiesDialog* k_propertiesdialog_new4(libqt_list urls) {
    return KPropertiesDialog_new4(urls);
}

KPropertiesDialog* k_propertiesdialog_new5(void* _tempUrl, void* _currentDir, const char* _defaultName) {
    return KPropertiesDialog_new5((QUrl*)_tempUrl, (QUrl*)_currentDir, qstring(_defaultName));
}

KPropertiesDialog* k_propertiesdialog_new6(const char* title) {
    return KPropertiesDialog_new6(qstring(title));
}

KPropertiesDialog* k_propertiesdialog_new7(void* item, void* parent) {
    return KPropertiesDialog_new7((KFileItem*)item, (QWidget*)parent);
}

KPropertiesDialog* k_propertiesdialog_new8(void* _items, void* parent) {
    return KPropertiesDialog_new8((KFileItemList*)_items, (QWidget*)parent);
}

KPropertiesDialog* k_propertiesdialog_new9(void* url, void* parent) {
    return KPropertiesDialog_new9((QUrl*)url, (QWidget*)parent);
}

KPropertiesDialog* k_propertiesdialog_new10(libqt_list urls, void* parent) {
    return KPropertiesDialog_new10(urls, (QWidget*)parent);
}

KPropertiesDialog* k_propertiesdialog_new11(void* _tempUrl, void* _currentDir, const char* _defaultName, void* parent) {
    return KPropertiesDialog_new11((QUrl*)_tempUrl, (QUrl*)_currentDir, qstring(_defaultName), (QWidget*)parent);
}

KPropertiesDialog* k_propertiesdialog_new12(const char* title, void* parent) {
    return KPropertiesDialog_new12(qstring(title), (QWidget*)parent);
}

const QMetaObject* k_propertiesdialog_meta_object(void* self) {
    return KPropertiesDialog_MetaObject((KPropertiesDialog*)self);
}

void* k_propertiesdialog_metacast(void* self, const char* param1) {
    return KPropertiesDialog_Metacast((KPropertiesDialog*)self, param1);
}

int32_t k_propertiesdialog_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPropertiesDialog_Metacall((KPropertiesDialog*)self, param1, param2, param3);
}

void k_propertiesdialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KPropertiesDialog_OnMetacall((KPropertiesDialog*)self, (intptr_t)callback);
}

int32_t k_propertiesdialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPropertiesDialog_QBaseMetacall((KPropertiesDialog*)self, param1, param2, param3);
}

const char* k_propertiesdialog_tr(const char* s) {
    libqt_string _str = KPropertiesDialog_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_propertiesdialog_can_display(void* _items) {
    return KPropertiesDialog_CanDisplay((KFileItemList*)_items);
}

bool k_propertiesdialog_show_dialog(void* item) {
    return KPropertiesDialog_ShowDialog((KFileItem*)item);
}

bool k_propertiesdialog_show_dialog2(void* _url) {
    return KPropertiesDialog_ShowDialog2((QUrl*)_url);
}

bool k_propertiesdialog_show_dialog3(void* _items) {
    return KPropertiesDialog_ShowDialog3((KFileItemList*)_items);
}

bool k_propertiesdialog_show_dialog4(libqt_list urls) {
    return KPropertiesDialog_ShowDialog4(urls);
}

QUrl* k_propertiesdialog_url(void* self) {
    return KPropertiesDialog_Url((KPropertiesDialog*)self);
}

KFileItem* k_propertiesdialog_item(void* self) {
    return KPropertiesDialog_Item((KPropertiesDialog*)self);
}

KFileItemList* k_propertiesdialog_items(void* self) {
    return KPropertiesDialog_Items((KPropertiesDialog*)self);
}

QUrl* k_propertiesdialog_current_dir(void* self) {
    return KPropertiesDialog_CurrentDir((KPropertiesDialog*)self);
}

const char* k_propertiesdialog_default_name(void* self) {
    libqt_string _str = KPropertiesDialog_DefaultName((KPropertiesDialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_propertiesdialog_update_url(void* self, void* newUrl) {
    KPropertiesDialog_UpdateUrl((KPropertiesDialog*)self, (QUrl*)newUrl);
}

void k_propertiesdialog_rename(void* self, const char* _name) {
    KPropertiesDialog_Rename((KPropertiesDialog*)self, qstring(_name));
}

void k_propertiesdialog_abort_applying(void* self) {
    KPropertiesDialog_AbortApplying((KPropertiesDialog*)self);
}

void k_propertiesdialog_show_file_sharing_page(void* self) {
    KPropertiesDialog_ShowFileSharingPage((KPropertiesDialog*)self);
}

void k_propertiesdialog_set_file_sharing_page(void* self, void* page) {
    KPropertiesDialog_SetFileSharingPage((KPropertiesDialog*)self, (QWidget*)page);
}

void k_propertiesdialog_set_file_name_read_only(void* self, bool ro) {
    KPropertiesDialog_SetFileNameReadOnly((KPropertiesDialog*)self, ro);
}

void k_propertiesdialog_accept(void* self) {
    KPropertiesDialog_Accept((KPropertiesDialog*)self);
}

void k_propertiesdialog_on_accept(void* self, void (*callback)()) {
    KPropertiesDialog_OnAccept((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_qbase_accept(void* self) {
    KPropertiesDialog_QBaseAccept((KPropertiesDialog*)self);
}

void k_propertiesdialog_reject(void* self) {
    KPropertiesDialog_Reject((KPropertiesDialog*)self);
}

void k_propertiesdialog_on_reject(void* self, void (*callback)()) {
    KPropertiesDialog_OnReject((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_qbase_reject(void* self) {
    KPropertiesDialog_QBaseReject((KPropertiesDialog*)self);
}

void k_propertiesdialog_properties_closed(void* self) {
    KPropertiesDialog_PropertiesClosed((KPropertiesDialog*)self);
}

void k_propertiesdialog_on_properties_closed(void* self, void (*callback)(void*)) {
    KPropertiesDialog_Connect_PropertiesClosed((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_applied(void* self) {
    KPropertiesDialog_Applied((KPropertiesDialog*)self);
}

void k_propertiesdialog_on_applied(void* self, void (*callback)(void*)) {
    KPropertiesDialog_Connect_Applied((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_canceled(void* self) {
    KPropertiesDialog_Canceled((KPropertiesDialog*)self);
}

void k_propertiesdialog_on_canceled(void* self, void (*callback)(void*)) {
    KPropertiesDialog_Connect_Canceled((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_save_as(void* self, void* oldUrl, void* newUrl) {
    KPropertiesDialog_SaveAs((KPropertiesDialog*)self, (QUrl*)oldUrl, (QUrl*)newUrl);
}

void k_propertiesdialog_on_save_as(void* self, void (*callback)(void*, void*, void*)) {
    KPropertiesDialog_Connect_SaveAs((KPropertiesDialog*)self, (intptr_t)callback);
}

const char* k_propertiesdialog_tr2(const char* s, const char* c) {
    libqt_string _str = KPropertiesDialog_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_propertiesdialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KPropertiesDialog_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_propertiesdialog_show_dialog22(void* item, void* parent) {
    return KPropertiesDialog_ShowDialog22((KFileItem*)item, (QWidget*)parent);
}

bool k_propertiesdialog_show_dialog32(void* item, void* parent, bool modal) {
    return KPropertiesDialog_ShowDialog32((KFileItem*)item, (QWidget*)parent, modal);
}

bool k_propertiesdialog_show_dialog23(void* _url, void* parent) {
    return KPropertiesDialog_ShowDialog23((QUrl*)_url, (QWidget*)parent);
}

bool k_propertiesdialog_show_dialog33(void* _url, void* parent, bool modal) {
    return KPropertiesDialog_ShowDialog33((QUrl*)_url, (QWidget*)parent, modal);
}

bool k_propertiesdialog_show_dialog24(void* _items, void* parent) {
    return KPropertiesDialog_ShowDialog24((KFileItemList*)_items, (QWidget*)parent);
}

bool k_propertiesdialog_show_dialog34(void* _items, void* parent, bool modal) {
    return KPropertiesDialog_ShowDialog34((KFileItemList*)_items, (QWidget*)parent, modal);
}

bool k_propertiesdialog_show_dialog25(libqt_list urls, void* parent) {
    return KPropertiesDialog_ShowDialog25(urls, (QWidget*)parent);
}

bool k_propertiesdialog_show_dialog35(libqt_list urls, void* parent, bool modal) {
    return KPropertiesDialog_ShowDialog35(urls, (QWidget*)parent, modal);
}

void k_propertiesdialog_set_face_type(void* self, int32_t faceType) {
    KPageDialog_SetFaceType((KPageDialog*)self, faceType);
}

KPageWidgetItem* k_propertiesdialog_add_page(void* self, void* widget, const char* name) {
    return KPageDialog_AddPage((KPageDialog*)self, (QWidget*)widget, qstring(name));
}

void k_propertiesdialog_add_page2(void* self, void* item) {
    KPageDialog_AddPage2((KPageDialog*)self, (KPageWidgetItem*)item);
}

KPageWidgetItem* k_propertiesdialog_insert_page(void* self, void* before, void* widget, const char* name) {
    return KPageDialog_InsertPage((KPageDialog*)self, (KPageWidgetItem*)before, (QWidget*)widget, qstring(name));
}

void k_propertiesdialog_insert_page2(void* self, void* before, void* item) {
    KPageDialog_InsertPage2((KPageDialog*)self, (KPageWidgetItem*)before, (KPageWidgetItem*)item);
}

KPageWidgetItem* k_propertiesdialog_add_sub_page(void* self, void* parent, void* widget, const char* name) {
    return KPageDialog_AddSubPage((KPageDialog*)self, (KPageWidgetItem*)parent, (QWidget*)widget, qstring(name));
}

void k_propertiesdialog_add_sub_page2(void* self, void* parent, void* item) {
    KPageDialog_AddSubPage2((KPageDialog*)self, (KPageWidgetItem*)parent, (KPageWidgetItem*)item);
}

void k_propertiesdialog_remove_page(void* self, void* item) {
    KPageDialog_RemovePage((KPageDialog*)self, (KPageWidgetItem*)item);
}

void k_propertiesdialog_set_current_page(void* self, void* item) {
    KPageDialog_SetCurrentPage((KPageDialog*)self, (KPageWidgetItem*)item);
}

KPageWidgetItem* k_propertiesdialog_current_page(void* self) {
    return KPageDialog_CurrentPage((KPageDialog*)self);
}

void k_propertiesdialog_set_standard_buttons(void* self, int32_t buttons) {
    KPageDialog_SetStandardButtons((KPageDialog*)self, buttons);
}

QPushButton* k_propertiesdialog_button(void* self, int32_t which) {
    return KPageDialog_Button((KPageDialog*)self, which);
}

void k_propertiesdialog_add_action_button(void* self, void* button) {
    KPageDialog_AddActionButton((KPageDialog*)self, (QAbstractButton*)button);
}

void k_propertiesdialog_current_page_changed(void* self, void* current, void* before) {
    KPageDialog_CurrentPageChanged((KPageDialog*)self, (KPageWidgetItem*)current, (KPageWidgetItem*)before);
}

void k_propertiesdialog_on_current_page_changed(void* self, void (*callback)(void*, void*, void*)) {
    KPageDialog_Connect_CurrentPageChanged((KPageDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_page_removed(void* self, void* page) {
    KPageDialog_PageRemoved((KPageDialog*)self, (KPageWidgetItem*)page);
}

void k_propertiesdialog_on_page_removed(void* self, void (*callback)(void*, void*)) {
    KPageDialog_Connect_PageRemoved((KPageDialog*)self, (intptr_t)callback);
}

int32_t k_propertiesdialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void k_propertiesdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool k_propertiesdialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void k_propertiesdialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void k_propertiesdialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void k_propertiesdialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void k_propertiesdialog_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void k_propertiesdialog_on_accepted(void* self, void (*callback)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void k_propertiesdialog_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

uintptr_t k_propertiesdialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_propertiesdialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_propertiesdialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_propertiesdialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_propertiesdialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_propertiesdialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_propertiesdialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_propertiesdialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_propertiesdialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_propertiesdialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_propertiesdialog_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_propertiesdialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_propertiesdialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_propertiesdialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_propertiesdialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_propertiesdialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_propertiesdialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_propertiesdialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_propertiesdialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_propertiesdialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_propertiesdialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_propertiesdialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_propertiesdialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_propertiesdialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_propertiesdialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_propertiesdialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_propertiesdialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_propertiesdialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_propertiesdialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_propertiesdialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_propertiesdialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_propertiesdialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_propertiesdialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_propertiesdialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_propertiesdialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_propertiesdialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_propertiesdialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_propertiesdialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_propertiesdialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_propertiesdialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_propertiesdialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_propertiesdialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_propertiesdialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_propertiesdialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_propertiesdialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_propertiesdialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_propertiesdialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_propertiesdialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_propertiesdialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_propertiesdialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_propertiesdialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_propertiesdialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_propertiesdialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_propertiesdialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_propertiesdialog_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_propertiesdialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_propertiesdialog_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_propertiesdialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_propertiesdialog_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_propertiesdialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_propertiesdialog_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_propertiesdialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_propertiesdialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_propertiesdialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_propertiesdialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_propertiesdialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_propertiesdialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_propertiesdialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_propertiesdialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_propertiesdialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_propertiesdialog_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_propertiesdialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_propertiesdialog_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_propertiesdialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_propertiesdialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_propertiesdialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_propertiesdialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_propertiesdialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_propertiesdialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_propertiesdialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_propertiesdialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_propertiesdialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_propertiesdialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_propertiesdialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_propertiesdialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_propertiesdialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_propertiesdialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_propertiesdialog_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_propertiesdialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_propertiesdialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_propertiesdialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_propertiesdialog_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_propertiesdialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_propertiesdialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_propertiesdialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_propertiesdialog_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_propertiesdialog_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_propertiesdialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_propertiesdialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_propertiesdialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_propertiesdialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_propertiesdialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_propertiesdialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_propertiesdialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_propertiesdialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_propertiesdialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_propertiesdialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_propertiesdialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_propertiesdialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_propertiesdialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_propertiesdialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_propertiesdialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_propertiesdialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_propertiesdialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_propertiesdialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_propertiesdialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_propertiesdialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_propertiesdialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_propertiesdialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_propertiesdialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_propertiesdialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_propertiesdialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_propertiesdialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_propertiesdialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_propertiesdialog_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_propertiesdialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_propertiesdialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_propertiesdialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_propertiesdialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_propertiesdialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_propertiesdialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_propertiesdialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_propertiesdialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_propertiesdialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_propertiesdialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_propertiesdialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_propertiesdialog_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_propertiesdialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_propertiesdialog_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_propertiesdialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_propertiesdialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_propertiesdialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_propertiesdialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_propertiesdialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_propertiesdialog_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_propertiesdialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_propertiesdialog_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_propertiesdialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_propertiesdialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_propertiesdialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_propertiesdialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_propertiesdialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_propertiesdialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_propertiesdialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_propertiesdialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_propertiesdialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_propertiesdialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_propertiesdialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_propertiesdialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_propertiesdialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_propertiesdialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_propertiesdialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_propertiesdialog_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_propertiesdialog_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_propertiesdialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_propertiesdialog_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_propertiesdialog_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_propertiesdialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_propertiesdialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_propertiesdialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_propertiesdialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_propertiesdialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_propertiesdialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_propertiesdialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_propertiesdialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_propertiesdialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_propertiesdialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_propertiesdialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_propertiesdialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_propertiesdialog_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_propertiesdialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_propertiesdialog_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_propertiesdialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_propertiesdialog_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_propertiesdialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_propertiesdialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_propertiesdialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_propertiesdialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_propertiesdialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_propertiesdialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_propertiesdialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_propertiesdialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_propertiesdialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_propertiesdialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_propertiesdialog_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_propertiesdialog_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_propertiesdialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_propertiesdialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_propertiesdialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_propertiesdialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_propertiesdialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_propertiesdialog_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_propertiesdialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_propertiesdialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_propertiesdialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_propertiesdialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_propertiesdialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_propertiesdialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_propertiesdialog_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_propertiesdialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_propertiesdialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_propertiesdialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_propertiesdialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_propertiesdialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_propertiesdialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_propertiesdialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_propertiesdialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_propertiesdialog_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_propertiesdialog_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_propertiesdialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_propertiesdialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_propertiesdialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_propertiesdialog_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_propertiesdialog_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_propertiesdialog_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_propertiesdialog_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_propertiesdialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_propertiesdialog_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t k_propertiesdialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_propertiesdialog_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_propertiesdialog_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t k_propertiesdialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_propertiesdialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_propertiesdialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_propertiesdialog_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_propertiesdialog_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_propertiesdialog_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_propertiesdialog_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_propertiesdialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_propertiesdialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_propertiesdialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_propertiesdialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_propertiesdialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_propertiesdialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_propertiesdialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_propertiesdialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_propertiesdialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_propertiesdialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_propertiesdialog_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_propertiesdialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_propertiesdialog_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_propertiesdialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_propertiesdialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_propertiesdialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_propertiesdialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_propertiesdialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_propertiesdialog_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_propertiesdialog_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_propertiesdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_propertiesdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_propertiesdialog_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_propertiesdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_propertiesdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_propertiesdialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_propertiesdialog_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_propertiesdialog_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_propertiesdialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_propertiesdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_propertiesdialog_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_propertiesdialog_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_propertiesdialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_propertiesdialog_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_propertiesdialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_propertiesdialog_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_propertiesdialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_propertiesdialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_propertiesdialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_propertiesdialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_propertiesdialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_propertiesdialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_propertiesdialog_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_propertiesdialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_propertiesdialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_propertiesdialog_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_propertiesdialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_propertiesdialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_propertiesdialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_propertiesdialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_propertiesdialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_propertiesdialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_propertiesdialog_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_propertiesdialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_propertiesdialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_propertiesdialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_propertiesdialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_propertiesdialog_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_propertiesdialog_dynamic_property_names");
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

QBindingStorage* k_propertiesdialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_propertiesdialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_propertiesdialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_propertiesdialog_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_propertiesdialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_propertiesdialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_propertiesdialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_propertiesdialog_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_propertiesdialog_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_propertiesdialog_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_propertiesdialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_propertiesdialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_propertiesdialog_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_propertiesdialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_propertiesdialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_propertiesdialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_propertiesdialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_propertiesdialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_propertiesdialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_propertiesdialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_propertiesdialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_propertiesdialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_propertiesdialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_propertiesdialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_propertiesdialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_propertiesdialog_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_propertiesdialog_set_visible(void* self, bool visible) {
    KPropertiesDialog_SetVisible((KPropertiesDialog*)self, visible);
}

void k_propertiesdialog_qbase_set_visible(void* self, bool visible) {
    KPropertiesDialog_QBaseSetVisible((KPropertiesDialog*)self, visible);
}

void k_propertiesdialog_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KPropertiesDialog_OnSetVisible((KPropertiesDialog*)self, (intptr_t)callback);
}

QSize* k_propertiesdialog_size_hint(void* self) {
    return KPropertiesDialog_SizeHint((KPropertiesDialog*)self);
}

QSize* k_propertiesdialog_qbase_size_hint(void* self) {
    return KPropertiesDialog_QBaseSizeHint((KPropertiesDialog*)self);
}

void k_propertiesdialog_on_size_hint(void* self, QSize* (*callback)()) {
    KPropertiesDialog_OnSizeHint((KPropertiesDialog*)self, (intptr_t)callback);
}

QSize* k_propertiesdialog_minimum_size_hint(void* self) {
    return KPropertiesDialog_MinimumSizeHint((KPropertiesDialog*)self);
}

QSize* k_propertiesdialog_qbase_minimum_size_hint(void* self) {
    return KPropertiesDialog_QBaseMinimumSizeHint((KPropertiesDialog*)self);
}

void k_propertiesdialog_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KPropertiesDialog_OnMinimumSizeHint((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_open(void* self) {
    KPropertiesDialog_Open((KPropertiesDialog*)self);
}

void k_propertiesdialog_qbase_open(void* self) {
    KPropertiesDialog_QBaseOpen((KPropertiesDialog*)self);
}

void k_propertiesdialog_on_open(void* self, void (*callback)()) {
    KPropertiesDialog_OnOpen((KPropertiesDialog*)self, (intptr_t)callback);
}

int32_t k_propertiesdialog_exec(void* self) {
    return KPropertiesDialog_Exec((KPropertiesDialog*)self);
}

int32_t k_propertiesdialog_qbase_exec(void* self) {
    return KPropertiesDialog_QBaseExec((KPropertiesDialog*)self);
}

void k_propertiesdialog_on_exec(void* self, int32_t (*callback)()) {
    KPropertiesDialog_OnExec((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_done(void* self, int param1) {
    KPropertiesDialog_Done((KPropertiesDialog*)self, param1);
}

void k_propertiesdialog_qbase_done(void* self, int param1) {
    KPropertiesDialog_QBaseDone((KPropertiesDialog*)self, param1);
}

void k_propertiesdialog_on_done(void* self, void (*callback)(void*, int)) {
    KPropertiesDialog_OnDone((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_key_press_event(void* self, void* param1) {
    KPropertiesDialog_KeyPressEvent((KPropertiesDialog*)self, (QKeyEvent*)param1);
}

void k_propertiesdialog_qbase_key_press_event(void* self, void* param1) {
    KPropertiesDialog_QBaseKeyPressEvent((KPropertiesDialog*)self, (QKeyEvent*)param1);
}

void k_propertiesdialog_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnKeyPressEvent((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_close_event(void* self, void* param1) {
    KPropertiesDialog_CloseEvent((KPropertiesDialog*)self, (QCloseEvent*)param1);
}

void k_propertiesdialog_qbase_close_event(void* self, void* param1) {
    KPropertiesDialog_QBaseCloseEvent((KPropertiesDialog*)self, (QCloseEvent*)param1);
}

void k_propertiesdialog_on_close_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnCloseEvent((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_show_event(void* self, void* param1) {
    KPropertiesDialog_ShowEvent((KPropertiesDialog*)self, (QShowEvent*)param1);
}

void k_propertiesdialog_qbase_show_event(void* self, void* param1) {
    KPropertiesDialog_QBaseShowEvent((KPropertiesDialog*)self, (QShowEvent*)param1);
}

void k_propertiesdialog_on_show_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnShowEvent((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_resize_event(void* self, void* param1) {
    KPropertiesDialog_ResizeEvent((KPropertiesDialog*)self, (QResizeEvent*)param1);
}

void k_propertiesdialog_qbase_resize_event(void* self, void* param1) {
    KPropertiesDialog_QBaseResizeEvent((KPropertiesDialog*)self, (QResizeEvent*)param1);
}

void k_propertiesdialog_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnResizeEvent((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_context_menu_event(void* self, void* param1) {
    KPropertiesDialog_ContextMenuEvent((KPropertiesDialog*)self, (QContextMenuEvent*)param1);
}

void k_propertiesdialog_qbase_context_menu_event(void* self, void* param1) {
    KPropertiesDialog_QBaseContextMenuEvent((KPropertiesDialog*)self, (QContextMenuEvent*)param1);
}

void k_propertiesdialog_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnContextMenuEvent((KPropertiesDialog*)self, (intptr_t)callback);
}

bool k_propertiesdialog_event_filter(void* self, void* param1, void* param2) {
    return KPropertiesDialog_EventFilter((KPropertiesDialog*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_propertiesdialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return KPropertiesDialog_QBaseEventFilter((KPropertiesDialog*)self, (QObject*)param1, (QEvent*)param2);
}

void k_propertiesdialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KPropertiesDialog_OnEventFilter((KPropertiesDialog*)self, (intptr_t)callback);
}

int32_t k_propertiesdialog_dev_type(void* self) {
    return KPropertiesDialog_DevType((KPropertiesDialog*)self);
}

int32_t k_propertiesdialog_qbase_dev_type(void* self) {
    return KPropertiesDialog_QBaseDevType((KPropertiesDialog*)self);
}

void k_propertiesdialog_on_dev_type(void* self, int32_t (*callback)()) {
    KPropertiesDialog_OnDevType((KPropertiesDialog*)self, (intptr_t)callback);
}

int32_t k_propertiesdialog_height_for_width(void* self, int param1) {
    return KPropertiesDialog_HeightForWidth((KPropertiesDialog*)self, param1);
}

int32_t k_propertiesdialog_qbase_height_for_width(void* self, int param1) {
    return KPropertiesDialog_QBaseHeightForWidth((KPropertiesDialog*)self, param1);
}

void k_propertiesdialog_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KPropertiesDialog_OnHeightForWidth((KPropertiesDialog*)self, (intptr_t)callback);
}

bool k_propertiesdialog_has_height_for_width(void* self) {
    return KPropertiesDialog_HasHeightForWidth((KPropertiesDialog*)self);
}

bool k_propertiesdialog_qbase_has_height_for_width(void* self) {
    return KPropertiesDialog_QBaseHasHeightForWidth((KPropertiesDialog*)self);
}

void k_propertiesdialog_on_has_height_for_width(void* self, bool (*callback)()) {
    KPropertiesDialog_OnHasHeightForWidth((KPropertiesDialog*)self, (intptr_t)callback);
}

QPaintEngine* k_propertiesdialog_paint_engine(void* self) {
    return KPropertiesDialog_PaintEngine((KPropertiesDialog*)self);
}

QPaintEngine* k_propertiesdialog_qbase_paint_engine(void* self) {
    return KPropertiesDialog_QBasePaintEngine((KPropertiesDialog*)self);
}

void k_propertiesdialog_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KPropertiesDialog_OnPaintEngine((KPropertiesDialog*)self, (intptr_t)callback);
}

bool k_propertiesdialog_event(void* self, void* event) {
    return KPropertiesDialog_Event((KPropertiesDialog*)self, (QEvent*)event);
}

bool k_propertiesdialog_qbase_event(void* self, void* event) {
    return KPropertiesDialog_QBaseEvent((KPropertiesDialog*)self, (QEvent*)event);
}

void k_propertiesdialog_on_event(void* self, bool (*callback)(void*, void*)) {
    KPropertiesDialog_OnEvent((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_mouse_press_event(void* self, void* event) {
    KPropertiesDialog_MousePressEvent((KPropertiesDialog*)self, (QMouseEvent*)event);
}

void k_propertiesdialog_qbase_mouse_press_event(void* self, void* event) {
    KPropertiesDialog_QBaseMousePressEvent((KPropertiesDialog*)self, (QMouseEvent*)event);
}

void k_propertiesdialog_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnMousePressEvent((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_mouse_release_event(void* self, void* event) {
    KPropertiesDialog_MouseReleaseEvent((KPropertiesDialog*)self, (QMouseEvent*)event);
}

void k_propertiesdialog_qbase_mouse_release_event(void* self, void* event) {
    KPropertiesDialog_QBaseMouseReleaseEvent((KPropertiesDialog*)self, (QMouseEvent*)event);
}

void k_propertiesdialog_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnMouseReleaseEvent((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_mouse_double_click_event(void* self, void* event) {
    KPropertiesDialog_MouseDoubleClickEvent((KPropertiesDialog*)self, (QMouseEvent*)event);
}

void k_propertiesdialog_qbase_mouse_double_click_event(void* self, void* event) {
    KPropertiesDialog_QBaseMouseDoubleClickEvent((KPropertiesDialog*)self, (QMouseEvent*)event);
}

void k_propertiesdialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnMouseDoubleClickEvent((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_mouse_move_event(void* self, void* event) {
    KPropertiesDialog_MouseMoveEvent((KPropertiesDialog*)self, (QMouseEvent*)event);
}

void k_propertiesdialog_qbase_mouse_move_event(void* self, void* event) {
    KPropertiesDialog_QBaseMouseMoveEvent((KPropertiesDialog*)self, (QMouseEvent*)event);
}

void k_propertiesdialog_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnMouseMoveEvent((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_wheel_event(void* self, void* event) {
    KPropertiesDialog_WheelEvent((KPropertiesDialog*)self, (QWheelEvent*)event);
}

void k_propertiesdialog_qbase_wheel_event(void* self, void* event) {
    KPropertiesDialog_QBaseWheelEvent((KPropertiesDialog*)self, (QWheelEvent*)event);
}

void k_propertiesdialog_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnWheelEvent((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_key_release_event(void* self, void* event) {
    KPropertiesDialog_KeyReleaseEvent((KPropertiesDialog*)self, (QKeyEvent*)event);
}

void k_propertiesdialog_qbase_key_release_event(void* self, void* event) {
    KPropertiesDialog_QBaseKeyReleaseEvent((KPropertiesDialog*)self, (QKeyEvent*)event);
}

void k_propertiesdialog_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnKeyReleaseEvent((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_focus_in_event(void* self, void* event) {
    KPropertiesDialog_FocusInEvent((KPropertiesDialog*)self, (QFocusEvent*)event);
}

void k_propertiesdialog_qbase_focus_in_event(void* self, void* event) {
    KPropertiesDialog_QBaseFocusInEvent((KPropertiesDialog*)self, (QFocusEvent*)event);
}

void k_propertiesdialog_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnFocusInEvent((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_focus_out_event(void* self, void* event) {
    KPropertiesDialog_FocusOutEvent((KPropertiesDialog*)self, (QFocusEvent*)event);
}

void k_propertiesdialog_qbase_focus_out_event(void* self, void* event) {
    KPropertiesDialog_QBaseFocusOutEvent((KPropertiesDialog*)self, (QFocusEvent*)event);
}

void k_propertiesdialog_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnFocusOutEvent((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_enter_event(void* self, void* event) {
    KPropertiesDialog_EnterEvent((KPropertiesDialog*)self, (QEnterEvent*)event);
}

void k_propertiesdialog_qbase_enter_event(void* self, void* event) {
    KPropertiesDialog_QBaseEnterEvent((KPropertiesDialog*)self, (QEnterEvent*)event);
}

void k_propertiesdialog_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnEnterEvent((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_leave_event(void* self, void* event) {
    KPropertiesDialog_LeaveEvent((KPropertiesDialog*)self, (QEvent*)event);
}

void k_propertiesdialog_qbase_leave_event(void* self, void* event) {
    KPropertiesDialog_QBaseLeaveEvent((KPropertiesDialog*)self, (QEvent*)event);
}

void k_propertiesdialog_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnLeaveEvent((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_paint_event(void* self, void* event) {
    KPropertiesDialog_PaintEvent((KPropertiesDialog*)self, (QPaintEvent*)event);
}

void k_propertiesdialog_qbase_paint_event(void* self, void* event) {
    KPropertiesDialog_QBasePaintEvent((KPropertiesDialog*)self, (QPaintEvent*)event);
}

void k_propertiesdialog_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnPaintEvent((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_move_event(void* self, void* event) {
    KPropertiesDialog_MoveEvent((KPropertiesDialog*)self, (QMoveEvent*)event);
}

void k_propertiesdialog_qbase_move_event(void* self, void* event) {
    KPropertiesDialog_QBaseMoveEvent((KPropertiesDialog*)self, (QMoveEvent*)event);
}

void k_propertiesdialog_on_move_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnMoveEvent((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_tablet_event(void* self, void* event) {
    KPropertiesDialog_TabletEvent((KPropertiesDialog*)self, (QTabletEvent*)event);
}

void k_propertiesdialog_qbase_tablet_event(void* self, void* event) {
    KPropertiesDialog_QBaseTabletEvent((KPropertiesDialog*)self, (QTabletEvent*)event);
}

void k_propertiesdialog_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnTabletEvent((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_action_event(void* self, void* event) {
    KPropertiesDialog_ActionEvent((KPropertiesDialog*)self, (QActionEvent*)event);
}

void k_propertiesdialog_qbase_action_event(void* self, void* event) {
    KPropertiesDialog_QBaseActionEvent((KPropertiesDialog*)self, (QActionEvent*)event);
}

void k_propertiesdialog_on_action_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnActionEvent((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_drag_enter_event(void* self, void* event) {
    KPropertiesDialog_DragEnterEvent((KPropertiesDialog*)self, (QDragEnterEvent*)event);
}

void k_propertiesdialog_qbase_drag_enter_event(void* self, void* event) {
    KPropertiesDialog_QBaseDragEnterEvent((KPropertiesDialog*)self, (QDragEnterEvent*)event);
}

void k_propertiesdialog_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnDragEnterEvent((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_drag_move_event(void* self, void* event) {
    KPropertiesDialog_DragMoveEvent((KPropertiesDialog*)self, (QDragMoveEvent*)event);
}

void k_propertiesdialog_qbase_drag_move_event(void* self, void* event) {
    KPropertiesDialog_QBaseDragMoveEvent((KPropertiesDialog*)self, (QDragMoveEvent*)event);
}

void k_propertiesdialog_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnDragMoveEvent((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_drag_leave_event(void* self, void* event) {
    KPropertiesDialog_DragLeaveEvent((KPropertiesDialog*)self, (QDragLeaveEvent*)event);
}

void k_propertiesdialog_qbase_drag_leave_event(void* self, void* event) {
    KPropertiesDialog_QBaseDragLeaveEvent((KPropertiesDialog*)self, (QDragLeaveEvent*)event);
}

void k_propertiesdialog_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnDragLeaveEvent((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_drop_event(void* self, void* event) {
    KPropertiesDialog_DropEvent((KPropertiesDialog*)self, (QDropEvent*)event);
}

void k_propertiesdialog_qbase_drop_event(void* self, void* event) {
    KPropertiesDialog_QBaseDropEvent((KPropertiesDialog*)self, (QDropEvent*)event);
}

void k_propertiesdialog_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnDropEvent((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_hide_event(void* self, void* event) {
    KPropertiesDialog_HideEvent((KPropertiesDialog*)self, (QHideEvent*)event);
}

void k_propertiesdialog_qbase_hide_event(void* self, void* event) {
    KPropertiesDialog_QBaseHideEvent((KPropertiesDialog*)self, (QHideEvent*)event);
}

void k_propertiesdialog_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnHideEvent((KPropertiesDialog*)self, (intptr_t)callback);
}

bool k_propertiesdialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KPropertiesDialog_NativeEvent((KPropertiesDialog*)self, qstring(eventType), message, result);
}

bool k_propertiesdialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KPropertiesDialog_QBaseNativeEvent((KPropertiesDialog*)self, qstring(eventType), message, result);
}

void k_propertiesdialog_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KPropertiesDialog_OnNativeEvent((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_change_event(void* self, void* param1) {
    KPropertiesDialog_ChangeEvent((KPropertiesDialog*)self, (QEvent*)param1);
}

void k_propertiesdialog_qbase_change_event(void* self, void* param1) {
    KPropertiesDialog_QBaseChangeEvent((KPropertiesDialog*)self, (QEvent*)param1);
}

void k_propertiesdialog_on_change_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnChangeEvent((KPropertiesDialog*)self, (intptr_t)callback);
}

int32_t k_propertiesdialog_metric(void* self, int32_t param1) {
    return KPropertiesDialog_Metric((KPropertiesDialog*)self, param1);
}

int32_t k_propertiesdialog_qbase_metric(void* self, int32_t param1) {
    return KPropertiesDialog_QBaseMetric((KPropertiesDialog*)self, param1);
}

void k_propertiesdialog_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KPropertiesDialog_OnMetric((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_init_painter(void* self, void* painter) {
    KPropertiesDialog_InitPainter((KPropertiesDialog*)self, (QPainter*)painter);
}

void k_propertiesdialog_qbase_init_painter(void* self, void* painter) {
    KPropertiesDialog_QBaseInitPainter((KPropertiesDialog*)self, (QPainter*)painter);
}

void k_propertiesdialog_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnInitPainter((KPropertiesDialog*)self, (intptr_t)callback);
}

QPaintDevice* k_propertiesdialog_redirected(void* self, void* offset) {
    return KPropertiesDialog_Redirected((KPropertiesDialog*)self, (QPoint*)offset);
}

QPaintDevice* k_propertiesdialog_qbase_redirected(void* self, void* offset) {
    return KPropertiesDialog_QBaseRedirected((KPropertiesDialog*)self, (QPoint*)offset);
}

void k_propertiesdialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KPropertiesDialog_OnRedirected((KPropertiesDialog*)self, (intptr_t)callback);
}

QPainter* k_propertiesdialog_shared_painter(void* self) {
    return KPropertiesDialog_SharedPainter((KPropertiesDialog*)self);
}

QPainter* k_propertiesdialog_qbase_shared_painter(void* self) {
    return KPropertiesDialog_QBaseSharedPainter((KPropertiesDialog*)self);
}

void k_propertiesdialog_on_shared_painter(void* self, QPainter* (*callback)()) {
    KPropertiesDialog_OnSharedPainter((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_input_method_event(void* self, void* param1) {
    KPropertiesDialog_InputMethodEvent((KPropertiesDialog*)self, (QInputMethodEvent*)param1);
}

void k_propertiesdialog_qbase_input_method_event(void* self, void* param1) {
    KPropertiesDialog_QBaseInputMethodEvent((KPropertiesDialog*)self, (QInputMethodEvent*)param1);
}

void k_propertiesdialog_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnInputMethodEvent((KPropertiesDialog*)self, (intptr_t)callback);
}

QVariant* k_propertiesdialog_input_method_query(void* self, int64_t param1) {
    return KPropertiesDialog_InputMethodQuery((KPropertiesDialog*)self, param1);
}

QVariant* k_propertiesdialog_qbase_input_method_query(void* self, int64_t param1) {
    return KPropertiesDialog_QBaseInputMethodQuery((KPropertiesDialog*)self, param1);
}

void k_propertiesdialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KPropertiesDialog_OnInputMethodQuery((KPropertiesDialog*)self, (intptr_t)callback);
}

bool k_propertiesdialog_focus_next_prev_child(void* self, bool next) {
    return KPropertiesDialog_FocusNextPrevChild((KPropertiesDialog*)self, next);
}

bool k_propertiesdialog_qbase_focus_next_prev_child(void* self, bool next) {
    return KPropertiesDialog_QBaseFocusNextPrevChild((KPropertiesDialog*)self, next);
}

void k_propertiesdialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KPropertiesDialog_OnFocusNextPrevChild((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_timer_event(void* self, void* event) {
    KPropertiesDialog_TimerEvent((KPropertiesDialog*)self, (QTimerEvent*)event);
}

void k_propertiesdialog_qbase_timer_event(void* self, void* event) {
    KPropertiesDialog_QBaseTimerEvent((KPropertiesDialog*)self, (QTimerEvent*)event);
}

void k_propertiesdialog_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnTimerEvent((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_child_event(void* self, void* event) {
    KPropertiesDialog_ChildEvent((KPropertiesDialog*)self, (QChildEvent*)event);
}

void k_propertiesdialog_qbase_child_event(void* self, void* event) {
    KPropertiesDialog_QBaseChildEvent((KPropertiesDialog*)self, (QChildEvent*)event);
}

void k_propertiesdialog_on_child_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnChildEvent((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_custom_event(void* self, void* event) {
    KPropertiesDialog_CustomEvent((KPropertiesDialog*)self, (QEvent*)event);
}

void k_propertiesdialog_qbase_custom_event(void* self, void* event) {
    KPropertiesDialog_QBaseCustomEvent((KPropertiesDialog*)self, (QEvent*)event);
}

void k_propertiesdialog_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnCustomEvent((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_connect_notify(void* self, void* signal) {
    KPropertiesDialog_ConnectNotify((KPropertiesDialog*)self, (QMetaMethod*)signal);
}

void k_propertiesdialog_qbase_connect_notify(void* self, void* signal) {
    KPropertiesDialog_QBaseConnectNotify((KPropertiesDialog*)self, (QMetaMethod*)signal);
}

void k_propertiesdialog_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnConnectNotify((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_disconnect_notify(void* self, void* signal) {
    KPropertiesDialog_DisconnectNotify((KPropertiesDialog*)self, (QMetaMethod*)signal);
}

void k_propertiesdialog_qbase_disconnect_notify(void* self, void* signal) {
    KPropertiesDialog_QBaseDisconnectNotify((KPropertiesDialog*)self, (QMetaMethod*)signal);
}

void k_propertiesdialog_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnDisconnectNotify((KPropertiesDialog*)self, (intptr_t)callback);
}

KPageWidget* k_propertiesdialog_page_widget(void* self) {
    return KPropertiesDialog_PageWidget((KPropertiesDialog*)self);
}

KPageWidget* k_propertiesdialog_qbase_page_widget(void* self) {
    return KPropertiesDialog_QBasePageWidget((KPropertiesDialog*)self);
}

void k_propertiesdialog_on_page_widget(void* self, KPageWidget* (*callback)()) {
    KPropertiesDialog_OnPageWidget((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_set_page_widget(void* self, void* widget) {
    KPropertiesDialog_SetPageWidget((KPropertiesDialog*)self, (KPageWidget*)widget);
}

void k_propertiesdialog_qbase_set_page_widget(void* self, void* widget) {
    KPropertiesDialog_QBaseSetPageWidget((KPropertiesDialog*)self, (KPageWidget*)widget);
}

void k_propertiesdialog_on_set_page_widget(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnSetPageWidget((KPropertiesDialog*)self, (intptr_t)callback);
}

QDialogButtonBox* k_propertiesdialog_button_box(void* self) {
    return KPropertiesDialog_ButtonBox((KPropertiesDialog*)self);
}

QDialogButtonBox* k_propertiesdialog_qbase_button_box(void* self) {
    return KPropertiesDialog_QBaseButtonBox((KPropertiesDialog*)self);
}

void k_propertiesdialog_on_button_box(void* self, QDialogButtonBox* (*callback)()) {
    KPropertiesDialog_OnButtonBox((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_set_button_box(void* self, void* box) {
    KPropertiesDialog_SetButtonBox((KPropertiesDialog*)self, (QDialogButtonBox*)box);
}

void k_propertiesdialog_qbase_set_button_box(void* self, void* box) {
    KPropertiesDialog_QBaseSetButtonBox((KPropertiesDialog*)self, (QDialogButtonBox*)box);
}

void k_propertiesdialog_on_set_button_box(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnSetButtonBox((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_adjust_position(void* self, void* param1) {
    KPropertiesDialog_AdjustPosition((KPropertiesDialog*)self, (QWidget*)param1);
}

void k_propertiesdialog_qbase_adjust_position(void* self, void* param1) {
    KPropertiesDialog_QBaseAdjustPosition((KPropertiesDialog*)self, (QWidget*)param1);
}

void k_propertiesdialog_on_adjust_position(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialog_OnAdjustPosition((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_update_micro_focus(void* self) {
    KPropertiesDialog_UpdateMicroFocus((KPropertiesDialog*)self);
}

void k_propertiesdialog_qbase_update_micro_focus(void* self) {
    KPropertiesDialog_QBaseUpdateMicroFocus((KPropertiesDialog*)self);
}

void k_propertiesdialog_on_update_micro_focus(void* self, void (*callback)()) {
    KPropertiesDialog_OnUpdateMicroFocus((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_create(void* self) {
    KPropertiesDialog_Create((KPropertiesDialog*)self);
}

void k_propertiesdialog_qbase_create(void* self) {
    KPropertiesDialog_QBaseCreate((KPropertiesDialog*)self);
}

void k_propertiesdialog_on_create(void* self, void (*callback)()) {
    KPropertiesDialog_OnCreate((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_destroy(void* self) {
    KPropertiesDialog_Destroy((KPropertiesDialog*)self);
}

void k_propertiesdialog_qbase_destroy(void* self) {
    KPropertiesDialog_QBaseDestroy((KPropertiesDialog*)self);
}

void k_propertiesdialog_on_destroy(void* self, void (*callback)()) {
    KPropertiesDialog_OnDestroy((KPropertiesDialog*)self, (intptr_t)callback);
}

bool k_propertiesdialog_focus_next_child(void* self) {
    return KPropertiesDialog_FocusNextChild((KPropertiesDialog*)self);
}

bool k_propertiesdialog_qbase_focus_next_child(void* self) {
    return KPropertiesDialog_QBaseFocusNextChild((KPropertiesDialog*)self);
}

void k_propertiesdialog_on_focus_next_child(void* self, bool (*callback)()) {
    KPropertiesDialog_OnFocusNextChild((KPropertiesDialog*)self, (intptr_t)callback);
}

bool k_propertiesdialog_focus_previous_child(void* self) {
    return KPropertiesDialog_FocusPreviousChild((KPropertiesDialog*)self);
}

bool k_propertiesdialog_qbase_focus_previous_child(void* self) {
    return KPropertiesDialog_QBaseFocusPreviousChild((KPropertiesDialog*)self);
}

void k_propertiesdialog_on_focus_previous_child(void* self, bool (*callback)()) {
    KPropertiesDialog_OnFocusPreviousChild((KPropertiesDialog*)self, (intptr_t)callback);
}

QObject* k_propertiesdialog_sender(void* self) {
    return KPropertiesDialog_Sender((KPropertiesDialog*)self);
}

QObject* k_propertiesdialog_qbase_sender(void* self) {
    return KPropertiesDialog_QBaseSender((KPropertiesDialog*)self);
}

void k_propertiesdialog_on_sender(void* self, QObject* (*callback)()) {
    KPropertiesDialog_OnSender((KPropertiesDialog*)self, (intptr_t)callback);
}

int32_t k_propertiesdialog_sender_signal_index(void* self) {
    return KPropertiesDialog_SenderSignalIndex((KPropertiesDialog*)self);
}

int32_t k_propertiesdialog_qbase_sender_signal_index(void* self) {
    return KPropertiesDialog_QBaseSenderSignalIndex((KPropertiesDialog*)self);
}

void k_propertiesdialog_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KPropertiesDialog_OnSenderSignalIndex((KPropertiesDialog*)self, (intptr_t)callback);
}

int32_t k_propertiesdialog_receivers(void* self, const char* signal) {
    return KPropertiesDialog_Receivers((KPropertiesDialog*)self, signal);
}

int32_t k_propertiesdialog_qbase_receivers(void* self, const char* signal) {
    return KPropertiesDialog_QBaseReceivers((KPropertiesDialog*)self, signal);
}

void k_propertiesdialog_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KPropertiesDialog_OnReceivers((KPropertiesDialog*)self, (intptr_t)callback);
}

bool k_propertiesdialog_is_signal_connected(void* self, void* signal) {
    return KPropertiesDialog_IsSignalConnected((KPropertiesDialog*)self, (QMetaMethod*)signal);
}

bool k_propertiesdialog_qbase_is_signal_connected(void* self, void* signal) {
    return KPropertiesDialog_QBaseIsSignalConnected((KPropertiesDialog*)self, (QMetaMethod*)signal);
}

void k_propertiesdialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KPropertiesDialog_OnIsSignalConnected((KPropertiesDialog*)self, (intptr_t)callback);
}

double k_propertiesdialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KPropertiesDialog_GetDecodedMetricF((KPropertiesDialog*)self, metricA, metricB);
}

double k_propertiesdialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KPropertiesDialog_QBaseGetDecodedMetricF((KPropertiesDialog*)self, metricA, metricB);
}

void k_propertiesdialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KPropertiesDialog_OnGetDecodedMetricF((KPropertiesDialog*)self, (intptr_t)callback);
}

void k_propertiesdialog_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_propertiesdialog_delete(void* self) {
    KPropertiesDialog_Delete((KPropertiesDialog*)(self));
}
