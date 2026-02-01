#include "libkdatepicker.hpp"
#include "../libqaction.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdatetime.hpp"
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
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkdatepickerpopup.hpp"
#include "libkdatepickerpopup.h"

KDatePickerPopup* k_datepickerpopup_new() {
    return KDatePickerPopup_new();
}

KDatePickerPopup* k_datepickerpopup_new2(int32_t modes) {
    return KDatePickerPopup_new2(modes);
}

KDatePickerPopup* k_datepickerpopup_new3(int32_t modes, void* date) {
    return KDatePickerPopup_new3(modes, (QDate*)date);
}

KDatePickerPopup* k_datepickerpopup_new4(int32_t modes, void* date, void* parent) {
    return KDatePickerPopup_new4(modes, (QDate*)date, (QWidget*)parent);
}

const QMetaObject* k_datepickerpopup_meta_object(void* self) {
    return KDatePickerPopup_MetaObject((KDatePickerPopup*)self);
}

void k_datepickerpopup_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KDatePickerPopup_OnMetaObject((KDatePickerPopup*)self, (intptr_t)callback);
}

const QMetaObject* k_datepickerpopup_qbase_meta_object(void* self) {
    return KDatePickerPopup_QBaseMetaObject((KDatePickerPopup*)self);
}

void* k_datepickerpopup_metacast(void* self, const char* param1) {
    return KDatePickerPopup_Metacast((KDatePickerPopup*)self, param1);
}

void k_datepickerpopup_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KDatePickerPopup_OnMetacast((KDatePickerPopup*)self, (intptr_t)callback);
}

void* k_datepickerpopup_qbase_metacast(void* self, const char* param1) {
    return KDatePickerPopup_QBaseMetacast((KDatePickerPopup*)self, param1);
}

int32_t k_datepickerpopup_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KDatePickerPopup_Metacall((KDatePickerPopup*)self, param1, param2, param3);
}

void k_datepickerpopup_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KDatePickerPopup_OnMetacall((KDatePickerPopup*)self, (intptr_t)callback);
}

int32_t k_datepickerpopup_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KDatePickerPopup_QBaseMetacall((KDatePickerPopup*)self, param1, param2, param3);
}

const char* k_datepickerpopup_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_datepickerpopup_modes(void* self) {
    return KDatePickerPopup_Modes((KDatePickerPopup*)self);
}

void k_datepickerpopup_set_modes(void* self, int32_t modes) {
    KDatePickerPopup_SetModes((KDatePickerPopup*)self, modes);
}

void k_datepickerpopup_set_date_range(void* self, void* minDate, void* maxDate) {
    KDatePickerPopup_SetDateRange((KDatePickerPopup*)self, (QDate*)minDate, (QDate*)maxDate);
}

libqt_map /* of QDate* to const char* */ k_datepickerpopup_date_map(void* self) {
    // Convert QMap<QDate,QString> to libqt_map
    libqt_map _out = KDatePickerPopup_DateMap((KDatePickerPopup*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_datepickerpopup_date_map\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_datepickerpopup_date_map\n");
            abort();
        }
        memcpy(_ret_values[i], _out_values[i].data, _out_values[i].len);
        _ret_values[i][_out_values[i].len] = '\0';
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_values[i].data);
    }
    free(_out.values);
    return _ret;
}

void k_datepickerpopup_set_date_map(void* self, libqt_map /* of QDate* to const char* */ dateMap) {
    // Convert libqt_map to QMap<QDate,QString>
    libqt_map dateMap_ret;
    dateMap_ret.len = dateMap.len;
    dateMap_ret.keys = (QDate**)malloc(dateMap_ret.len * sizeof(QDate*));
    if (dateMap_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_datepickerpopup_set_date_map\n");
        abort();
    }
    dateMap_ret.values = (libqt_string*)malloc(dateMap_ret.len * sizeof(libqt_string));
    if (dateMap_ret.values == NULL) {
        free(dateMap_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_datepickerpopup_set_date_map\n");
        abort();
    }
    QDate** dateMap_karr = (QDate**)dateMap.keys;
    QDate** dateMap_kdest = (QDate**)dateMap_ret.keys;
    const char** dateMap_varr = (const char**)dateMap.values;
    libqt_string* dateMap_vdest = (libqt_string*)dateMap_ret.values;
    for (size_t i = 0; i < dateMap_ret.len; ++i) {
        dateMap_kdest[i] = dateMap_karr[i];
        dateMap_vdest[i] = qstring(dateMap_varr[i]);
    }
    KDatePickerPopup_SetDateMap((KDatePickerPopup*)self, dateMap_ret);
    free(dateMap_ret.keys);
    free(dateMap_ret.values);
}

KDatePicker* k_datepickerpopup_date_picker(void* self) {
    return KDatePickerPopup_DatePicker((KDatePickerPopup*)self);
}

void k_datepickerpopup_set_date(void* self, void* date) {
    KDatePickerPopup_SetDate((KDatePickerPopup*)self, (QDate*)date);
}

void k_datepickerpopup_date_changed(void* self, void* date) {
    KDatePickerPopup_DateChanged((KDatePickerPopup*)self, (QDate*)date);
}

void k_datepickerpopup_on_date_changed(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_Connect_DateChanged((KDatePickerPopup*)self, (intptr_t)callback);
}

const char* k_datepickerpopup_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_datepickerpopup_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAction* k_datepickerpopup_add_menu(void* self, void* menu) {
    return QMenu_AddMenu((QMenu*)self, (QMenu*)menu);
}

QMenu* k_datepickerpopup_add_menu2(void* self, const char* title) {
    return QMenu_AddMenu2((QMenu*)self, qstring(title));
}

QMenu* k_datepickerpopup_add_menu3(void* self, void* icon, const char* title) {
    return QMenu_AddMenu3((QMenu*)self, (QIcon*)icon, qstring(title));
}

QAction* k_datepickerpopup_add_separator(void* self) {
    return QMenu_AddSeparator((QMenu*)self);
}

QAction* k_datepickerpopup_add_section(void* self, const char* text) {
    return QMenu_AddSection((QMenu*)self, qstring(text));
}

QAction* k_datepickerpopup_add_section2(void* self, void* icon, const char* text) {
    return QMenu_AddSection2((QMenu*)self, (QIcon*)icon, qstring(text));
}

QAction* k_datepickerpopup_insert_menu(void* self, void* before, void* menu) {
    return QMenu_InsertMenu((QMenu*)self, (QAction*)before, (QMenu*)menu);
}

QAction* k_datepickerpopup_insert_separator(void* self, void* before) {
    return QMenu_InsertSeparator((QMenu*)self, (QAction*)before);
}

QAction* k_datepickerpopup_insert_section(void* self, void* before, const char* text) {
    return QMenu_InsertSection((QMenu*)self, (QAction*)before, qstring(text));
}

QAction* k_datepickerpopup_insert_section2(void* self, void* before, void* icon, const char* text) {
    return QMenu_InsertSection2((QMenu*)self, (QAction*)before, (QIcon*)icon, qstring(text));
}

bool k_datepickerpopup_is_empty(void* self) {
    return QMenu_IsEmpty((QMenu*)self);
}

void k_datepickerpopup_clear(void* self) {
    QMenu_Clear((QMenu*)self);
}

void k_datepickerpopup_set_tear_off_enabled(void* self, bool tearOffEnabled) {
    QMenu_SetTearOffEnabled((QMenu*)self, tearOffEnabled);
}

bool k_datepickerpopup_is_tear_off_enabled(void* self) {
    return QMenu_IsTearOffEnabled((QMenu*)self);
}

bool k_datepickerpopup_is_tear_off_menu_visible(void* self) {
    return QMenu_IsTearOffMenuVisible((QMenu*)self);
}

void k_datepickerpopup_show_tear_off_menu(void* self) {
    QMenu_ShowTearOffMenu((QMenu*)self);
}

void k_datepickerpopup_show_tear_off_menu2(void* self, void* pos) {
    QMenu_ShowTearOffMenu2((QMenu*)self, (QPoint*)pos);
}

void k_datepickerpopup_hide_tear_off_menu(void* self) {
    QMenu_HideTearOffMenu((QMenu*)self);
}

void k_datepickerpopup_set_default_action(void* self, void* defaultAction) {
    QMenu_SetDefaultAction((QMenu*)self, (QAction*)defaultAction);
}

QAction* k_datepickerpopup_default_action(void* self) {
    return QMenu_DefaultAction((QMenu*)self);
}

void k_datepickerpopup_set_active_action(void* self, void* act) {
    QMenu_SetActiveAction((QMenu*)self, (QAction*)act);
}

QAction* k_datepickerpopup_active_action(void* self) {
    return QMenu_ActiveAction((QMenu*)self);
}

void k_datepickerpopup_popup(void* self, void* pos) {
    QMenu_Popup((QMenu*)self, (QPoint*)pos);
}

QAction* k_datepickerpopup_exec(void* self) {
    return QMenu_Exec((QMenu*)self);
}

QAction* k_datepickerpopup_exec2(void* self, void* pos) {
    return QMenu_Exec2((QMenu*)self, (QPoint*)pos);
}

QAction* k_datepickerpopup_exec3(libqt_list /* of QAction* */ actions, void* pos) {
    return QMenu_Exec3(actions, (QPoint*)pos);
}

QRect* k_datepickerpopup_action_geometry(void* self, void* param1) {
    return QMenu_ActionGeometry((QMenu*)self, (QAction*)param1);
}

QAction* k_datepickerpopup_action_at(void* self, void* param1) {
    return QMenu_ActionAt((QMenu*)self, (QPoint*)param1);
}

QAction* k_datepickerpopup_menu_action(void* self) {
    return QMenu_MenuAction((QMenu*)self);
}

QMenu* k_datepickerpopup_menu_in_action(void* action) {
    return QMenu_MenuInAction((QAction*)action);
}

const char* k_datepickerpopup_title(void* self) {
    libqt_string _str = QMenu_Title((QMenu*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datepickerpopup_set_title(void* self, const char* title) {
    QMenu_SetTitle((QMenu*)self, qstring(title));
}

QIcon* k_datepickerpopup_icon(void* self) {
    return QMenu_Icon((QMenu*)self);
}

void k_datepickerpopup_set_icon(void* self, void* icon) {
    QMenu_SetIcon((QMenu*)self, (QIcon*)icon);
}

void k_datepickerpopup_set_no_replay_for(void* self, void* widget) {
    QMenu_SetNoReplayFor((QMenu*)self, (QWidget*)widget);
}

bool k_datepickerpopup_separators_collapsible(void* self) {
    return QMenu_SeparatorsCollapsible((QMenu*)self);
}

void k_datepickerpopup_set_separators_collapsible(void* self, bool collapse) {
    QMenu_SetSeparatorsCollapsible((QMenu*)self, collapse);
}

bool k_datepickerpopup_tool_tips_visible(void* self) {
    return QMenu_ToolTipsVisible((QMenu*)self);
}

void k_datepickerpopup_set_tool_tips_visible(void* self, bool visible) {
    QMenu_SetToolTipsVisible((QMenu*)self, visible);
}

void k_datepickerpopup_about_to_show(void* self) {
    QMenu_AboutToShow((QMenu*)self);
}

void k_datepickerpopup_on_about_to_show(void* self, void (*callback)(void*)) {
    QMenu_Connect_AboutToShow((QMenu*)self, (intptr_t)callback);
}

void k_datepickerpopup_about_to_hide(void* self) {
    QMenu_AboutToHide((QMenu*)self);
}

void k_datepickerpopup_on_about_to_hide(void* self, void (*callback)(void*)) {
    QMenu_Connect_AboutToHide((QMenu*)self, (intptr_t)callback);
}

void k_datepickerpopup_triggered(void* self, void* action) {
    QMenu_Triggered((QMenu*)self, (QAction*)action);
}

void k_datepickerpopup_on_triggered(void* self, void (*callback)(void*, void*)) {
    QMenu_Connect_Triggered((QMenu*)self, (intptr_t)callback);
}

void k_datepickerpopup_hovered(void* self, void* action) {
    QMenu_Hovered((QMenu*)self, (QAction*)action);
}

void k_datepickerpopup_on_hovered(void* self, void (*callback)(void*, void*)) {
    QMenu_Connect_Hovered((QMenu*)self, (intptr_t)callback);
}

void k_datepickerpopup_popup2(void* self, void* pos, void* at) {
    QMenu_Popup2((QMenu*)self, (QPoint*)pos, (QAction*)at);
}

QAction* k_datepickerpopup_exec22(void* self, void* pos, void* at) {
    return QMenu_Exec22((QMenu*)self, (QPoint*)pos, (QAction*)at);
}

QAction* k_datepickerpopup_exec32(libqt_list /* of QAction* */ actions, void* pos, void* at) {
    return QMenu_Exec32(actions, (QPoint*)pos, (QAction*)at);
}

QAction* k_datepickerpopup_exec4(libqt_list /* of QAction* */ actions, void* pos, void* at, void* parent) {
    return QMenu_Exec4(actions, (QPoint*)pos, (QAction*)at, (QWidget*)parent);
}

uintptr_t k_datepickerpopup_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_datepickerpopup_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_datepickerpopup_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_datepickerpopup_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_datepickerpopup_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_datepickerpopup_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_datepickerpopup_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_datepickerpopup_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_datepickerpopup_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_datepickerpopup_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_datepickerpopup_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_datepickerpopup_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_datepickerpopup_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_datepickerpopup_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_datepickerpopup_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_datepickerpopup_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_datepickerpopup_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_datepickerpopup_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_datepickerpopup_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_datepickerpopup_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_datepickerpopup_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_datepickerpopup_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_datepickerpopup_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_datepickerpopup_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_datepickerpopup_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_datepickerpopup_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_datepickerpopup_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_datepickerpopup_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_datepickerpopup_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_datepickerpopup_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_datepickerpopup_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_datepickerpopup_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_datepickerpopup_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_datepickerpopup_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_datepickerpopup_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_datepickerpopup_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_datepickerpopup_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_datepickerpopup_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_datepickerpopup_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_datepickerpopup_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_datepickerpopup_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_datepickerpopup_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_datepickerpopup_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_datepickerpopup_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_datepickerpopup_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_datepickerpopup_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_datepickerpopup_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_datepickerpopup_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_datepickerpopup_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_datepickerpopup_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_datepickerpopup_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_datepickerpopup_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_datepickerpopup_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_datepickerpopup_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_datepickerpopup_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_datepickerpopup_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_datepickerpopup_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_datepickerpopup_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_datepickerpopup_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_datepickerpopup_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_datepickerpopup_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_datepickerpopup_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_datepickerpopup_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_datepickerpopup_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_datepickerpopup_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_datepickerpopup_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_datepickerpopup_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_datepickerpopup_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_datepickerpopup_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_datepickerpopup_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_datepickerpopup_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_datepickerpopup_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_datepickerpopup_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_datepickerpopup_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_datepickerpopup_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_datepickerpopup_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_datepickerpopup_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_datepickerpopup_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_datepickerpopup_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_datepickerpopup_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_datepickerpopup_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_datepickerpopup_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_datepickerpopup_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_datepickerpopup_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_datepickerpopup_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_datepickerpopup_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_datepickerpopup_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_datepickerpopup_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_datepickerpopup_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_datepickerpopup_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_datepickerpopup_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_datepickerpopup_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_datepickerpopup_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_datepickerpopup_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_datepickerpopup_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_datepickerpopup_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_datepickerpopup_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_datepickerpopup_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_datepickerpopup_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_datepickerpopup_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_datepickerpopup_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datepickerpopup_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_datepickerpopup_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_datepickerpopup_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_datepickerpopup_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datepickerpopup_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_datepickerpopup_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datepickerpopup_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_datepickerpopup_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datepickerpopup_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_datepickerpopup_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_datepickerpopup_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_datepickerpopup_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_datepickerpopup_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datepickerpopup_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_datepickerpopup_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_datepickerpopup_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_datepickerpopup_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datepickerpopup_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_datepickerpopup_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_datepickerpopup_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datepickerpopup_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_datepickerpopup_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datepickerpopup_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_datepickerpopup_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_datepickerpopup_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_datepickerpopup_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_datepickerpopup_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_datepickerpopup_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_datepickerpopup_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_datepickerpopup_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_datepickerpopup_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_datepickerpopup_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_datepickerpopup_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_datepickerpopup_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_datepickerpopup_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_datepickerpopup_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_datepickerpopup_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_datepickerpopup_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_datepickerpopup_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_datepickerpopup_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_datepickerpopup_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_datepickerpopup_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_datepickerpopup_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_datepickerpopup_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_datepickerpopup_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_datepickerpopup_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_datepickerpopup_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_datepickerpopup_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_datepickerpopup_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_datepickerpopup_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_datepickerpopup_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_datepickerpopup_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_datepickerpopup_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_datepickerpopup_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_datepickerpopup_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_datepickerpopup_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_datepickerpopup_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_datepickerpopup_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_datepickerpopup_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_datepickerpopup_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_datepickerpopup_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_datepickerpopup_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_datepickerpopup_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_datepickerpopup_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_datepickerpopup_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_datepickerpopup_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_datepickerpopup_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_datepickerpopup_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_datepickerpopup_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_datepickerpopup_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_datepickerpopup_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_datepickerpopup_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_datepickerpopup_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_datepickerpopup_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_datepickerpopup_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_datepickerpopup_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_datepickerpopup_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_datepickerpopup_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_datepickerpopup_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_datepickerpopup_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_datepickerpopup_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_datepickerpopup_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_datepickerpopup_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_datepickerpopup_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_datepickerpopup_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_datepickerpopup_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_datepickerpopup_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_datepickerpopup_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_datepickerpopup_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_datepickerpopup_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_datepickerpopup_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_datepickerpopup_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_datepickerpopup_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_datepickerpopup_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_datepickerpopup_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_datepickerpopup_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_datepickerpopup_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_datepickerpopup_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_datepickerpopup_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_datepickerpopup_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_datepickerpopup_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_datepickerpopup_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_datepickerpopup_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_datepickerpopup_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_datepickerpopup_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_datepickerpopup_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_datepickerpopup_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_datepickerpopup_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_datepickerpopup_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_datepickerpopup_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_datepickerpopup_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_datepickerpopup_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_datepickerpopup_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_datepickerpopup_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_datepickerpopup_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_datepickerpopup_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_datepickerpopup_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_datepickerpopup_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_datepickerpopup_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_datepickerpopup_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_datepickerpopup_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_datepickerpopup_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_datepickerpopup_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_datepickerpopup_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_datepickerpopup_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_datepickerpopup_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_datepickerpopup_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_datepickerpopup_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_datepickerpopup_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_datepickerpopup_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_datepickerpopup_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_datepickerpopup_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_datepickerpopup_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_datepickerpopup_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_datepickerpopup_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_datepickerpopup_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_datepickerpopup_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_datepickerpopup_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_datepickerpopup_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_datepickerpopup_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_datepickerpopup_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_datepickerpopup_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_datepickerpopup_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_datepickerpopup_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_datepickerpopup_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_datepickerpopup_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_datepickerpopup_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_datepickerpopup_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_datepickerpopup_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_datepickerpopup_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_datepickerpopup_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_datepickerpopup_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_datepickerpopup_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_datepickerpopup_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_datepickerpopup_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_datepickerpopup_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_datepickerpopup_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_datepickerpopup_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_datepickerpopup_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_datepickerpopup_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_datepickerpopup_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_datepickerpopup_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_datepickerpopup_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_datepickerpopup_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_datepickerpopup_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_datepickerpopup_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_datepickerpopup_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_datepickerpopup_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_datepickerpopup_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_datepickerpopup_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_datepickerpopup_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_datepickerpopup_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datepickerpopup_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_datepickerpopup_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_datepickerpopup_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_datepickerpopup_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_datepickerpopup_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_datepickerpopup_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_datepickerpopup_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_datepickerpopup_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_datepickerpopup_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_datepickerpopup_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_datepickerpopup_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_datepickerpopup_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_datepickerpopup_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_datepickerpopup_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_datepickerpopup_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_datepickerpopup_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_datepickerpopup_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_datepickerpopup_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_datepickerpopup_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_datepickerpopup_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_datepickerpopup_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_datepickerpopup_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_datepickerpopup_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_datepickerpopup_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_datepickerpopup_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_datepickerpopup_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_datepickerpopup_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_datepickerpopup_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_datepickerpopup_dynamic_property_names\n");
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

QBindingStorage* k_datepickerpopup_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_datepickerpopup_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_datepickerpopup_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_datepickerpopup_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_datepickerpopup_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_datepickerpopup_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_datepickerpopup_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_datepickerpopup_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_datepickerpopup_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_datepickerpopup_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_datepickerpopup_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_datepickerpopup_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_datepickerpopup_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_datepickerpopup_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_datepickerpopup_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_datepickerpopup_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_datepickerpopup_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_datepickerpopup_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_datepickerpopup_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_datepickerpopup_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_datepickerpopup_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_datepickerpopup_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_datepickerpopup_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_datepickerpopup_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_datepickerpopup_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_datepickerpopup_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_datepickerpopup_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_datepickerpopup_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_datepickerpopup_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_datepickerpopup_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_datepickerpopup_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QSize* k_datepickerpopup_size_hint(void* self) {
    return KDatePickerPopup_SizeHint((KDatePickerPopup*)self);
}

QSize* k_datepickerpopup_qbase_size_hint(void* self) {
    return KDatePickerPopup_QBaseSizeHint((KDatePickerPopup*)self);
}

void k_datepickerpopup_on_size_hint(void* self, QSize* (*callback)()) {
    KDatePickerPopup_OnSizeHint((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_change_event(void* self, void* param1) {
    KDatePickerPopup_ChangeEvent((KDatePickerPopup*)self, (QEvent*)param1);
}

void k_datepickerpopup_qbase_change_event(void* self, void* param1) {
    KDatePickerPopup_QBaseChangeEvent((KDatePickerPopup*)self, (QEvent*)param1);
}

void k_datepickerpopup_on_change_event(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnChangeEvent((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_key_press_event(void* self, void* param1) {
    KDatePickerPopup_KeyPressEvent((KDatePickerPopup*)self, (QKeyEvent*)param1);
}

void k_datepickerpopup_qbase_key_press_event(void* self, void* param1) {
    KDatePickerPopup_QBaseKeyPressEvent((KDatePickerPopup*)self, (QKeyEvent*)param1);
}

void k_datepickerpopup_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnKeyPressEvent((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_mouse_release_event(void* self, void* param1) {
    KDatePickerPopup_MouseReleaseEvent((KDatePickerPopup*)self, (QMouseEvent*)param1);
}

void k_datepickerpopup_qbase_mouse_release_event(void* self, void* param1) {
    KDatePickerPopup_QBaseMouseReleaseEvent((KDatePickerPopup*)self, (QMouseEvent*)param1);
}

void k_datepickerpopup_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnMouseReleaseEvent((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_mouse_press_event(void* self, void* param1) {
    KDatePickerPopup_MousePressEvent((KDatePickerPopup*)self, (QMouseEvent*)param1);
}

void k_datepickerpopup_qbase_mouse_press_event(void* self, void* param1) {
    KDatePickerPopup_QBaseMousePressEvent((KDatePickerPopup*)self, (QMouseEvent*)param1);
}

void k_datepickerpopup_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnMousePressEvent((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_mouse_move_event(void* self, void* param1) {
    KDatePickerPopup_MouseMoveEvent((KDatePickerPopup*)self, (QMouseEvent*)param1);
}

void k_datepickerpopup_qbase_mouse_move_event(void* self, void* param1) {
    KDatePickerPopup_QBaseMouseMoveEvent((KDatePickerPopup*)self, (QMouseEvent*)param1);
}

void k_datepickerpopup_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnMouseMoveEvent((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_wheel_event(void* self, void* param1) {
    KDatePickerPopup_WheelEvent((KDatePickerPopup*)self, (QWheelEvent*)param1);
}

void k_datepickerpopup_qbase_wheel_event(void* self, void* param1) {
    KDatePickerPopup_QBaseWheelEvent((KDatePickerPopup*)self, (QWheelEvent*)param1);
}

void k_datepickerpopup_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnWheelEvent((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_enter_event(void* self, void* param1) {
    KDatePickerPopup_EnterEvent((KDatePickerPopup*)self, (QEnterEvent*)param1);
}

void k_datepickerpopup_qbase_enter_event(void* self, void* param1) {
    KDatePickerPopup_QBaseEnterEvent((KDatePickerPopup*)self, (QEnterEvent*)param1);
}

void k_datepickerpopup_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnEnterEvent((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_leave_event(void* self, void* param1) {
    KDatePickerPopup_LeaveEvent((KDatePickerPopup*)self, (QEvent*)param1);
}

void k_datepickerpopup_qbase_leave_event(void* self, void* param1) {
    KDatePickerPopup_QBaseLeaveEvent((KDatePickerPopup*)self, (QEvent*)param1);
}

void k_datepickerpopup_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnLeaveEvent((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_hide_event(void* self, void* param1) {
    KDatePickerPopup_HideEvent((KDatePickerPopup*)self, (QHideEvent*)param1);
}

void k_datepickerpopup_qbase_hide_event(void* self, void* param1) {
    KDatePickerPopup_QBaseHideEvent((KDatePickerPopup*)self, (QHideEvent*)param1);
}

void k_datepickerpopup_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnHideEvent((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_paint_event(void* self, void* param1) {
    KDatePickerPopup_PaintEvent((KDatePickerPopup*)self, (QPaintEvent*)param1);
}

void k_datepickerpopup_qbase_paint_event(void* self, void* param1) {
    KDatePickerPopup_QBasePaintEvent((KDatePickerPopup*)self, (QPaintEvent*)param1);
}

void k_datepickerpopup_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnPaintEvent((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_action_event(void* self, void* param1) {
    KDatePickerPopup_ActionEvent((KDatePickerPopup*)self, (QActionEvent*)param1);
}

void k_datepickerpopup_qbase_action_event(void* self, void* param1) {
    KDatePickerPopup_QBaseActionEvent((KDatePickerPopup*)self, (QActionEvent*)param1);
}

void k_datepickerpopup_on_action_event(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnActionEvent((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_timer_event(void* self, void* param1) {
    KDatePickerPopup_TimerEvent((KDatePickerPopup*)self, (QTimerEvent*)param1);
}

void k_datepickerpopup_qbase_timer_event(void* self, void* param1) {
    KDatePickerPopup_QBaseTimerEvent((KDatePickerPopup*)self, (QTimerEvent*)param1);
}

void k_datepickerpopup_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnTimerEvent((KDatePickerPopup*)self, (intptr_t)callback);
}

bool k_datepickerpopup_event(void* self, void* param1) {
    return KDatePickerPopup_Event((KDatePickerPopup*)self, (QEvent*)param1);
}

bool k_datepickerpopup_qbase_event(void* self, void* param1) {
    return KDatePickerPopup_QBaseEvent((KDatePickerPopup*)self, (QEvent*)param1);
}

void k_datepickerpopup_on_event(void* self, bool (*callback)(void*, void*)) {
    KDatePickerPopup_OnEvent((KDatePickerPopup*)self, (intptr_t)callback);
}

bool k_datepickerpopup_focus_next_prev_child(void* self, bool next) {
    return KDatePickerPopup_FocusNextPrevChild((KDatePickerPopup*)self, next);
}

bool k_datepickerpopup_qbase_focus_next_prev_child(void* self, bool next) {
    return KDatePickerPopup_QBaseFocusNextPrevChild((KDatePickerPopup*)self, next);
}

void k_datepickerpopup_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KDatePickerPopup_OnFocusNextPrevChild((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_init_style_option(void* self, void* option, void* action) {
    KDatePickerPopup_InitStyleOption((KDatePickerPopup*)self, (QStyleOptionMenuItem*)option, (QAction*)action);
}

void k_datepickerpopup_qbase_init_style_option(void* self, void* option, void* action) {
    KDatePickerPopup_QBaseInitStyleOption((KDatePickerPopup*)self, (QStyleOptionMenuItem*)option, (QAction*)action);
}

void k_datepickerpopup_on_init_style_option(void* self, void (*callback)(void*, void*, void*)) {
    KDatePickerPopup_OnInitStyleOption((KDatePickerPopup*)self, (intptr_t)callback);
}

int32_t k_datepickerpopup_dev_type(void* self) {
    return KDatePickerPopup_DevType((KDatePickerPopup*)self);
}

int32_t k_datepickerpopup_qbase_dev_type(void* self) {
    return KDatePickerPopup_QBaseDevType((KDatePickerPopup*)self);
}

void k_datepickerpopup_on_dev_type(void* self, int32_t (*callback)()) {
    KDatePickerPopup_OnDevType((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_set_visible(void* self, bool visible) {
    KDatePickerPopup_SetVisible((KDatePickerPopup*)self, visible);
}

void k_datepickerpopup_qbase_set_visible(void* self, bool visible) {
    KDatePickerPopup_QBaseSetVisible((KDatePickerPopup*)self, visible);
}

void k_datepickerpopup_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KDatePickerPopup_OnSetVisible((KDatePickerPopup*)self, (intptr_t)callback);
}

QSize* k_datepickerpopup_minimum_size_hint(void* self) {
    return KDatePickerPopup_MinimumSizeHint((KDatePickerPopup*)self);
}

QSize* k_datepickerpopup_qbase_minimum_size_hint(void* self) {
    return KDatePickerPopup_QBaseMinimumSizeHint((KDatePickerPopup*)self);
}

void k_datepickerpopup_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KDatePickerPopup_OnMinimumSizeHint((KDatePickerPopup*)self, (intptr_t)callback);
}

int32_t k_datepickerpopup_height_for_width(void* self, int param1) {
    return KDatePickerPopup_HeightForWidth((KDatePickerPopup*)self, param1);
}

int32_t k_datepickerpopup_qbase_height_for_width(void* self, int param1) {
    return KDatePickerPopup_QBaseHeightForWidth((KDatePickerPopup*)self, param1);
}

void k_datepickerpopup_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KDatePickerPopup_OnHeightForWidth((KDatePickerPopup*)self, (intptr_t)callback);
}

bool k_datepickerpopup_has_height_for_width(void* self) {
    return KDatePickerPopup_HasHeightForWidth((KDatePickerPopup*)self);
}

bool k_datepickerpopup_qbase_has_height_for_width(void* self) {
    return KDatePickerPopup_QBaseHasHeightForWidth((KDatePickerPopup*)self);
}

void k_datepickerpopup_on_has_height_for_width(void* self, bool (*callback)()) {
    KDatePickerPopup_OnHasHeightForWidth((KDatePickerPopup*)self, (intptr_t)callback);
}

QPaintEngine* k_datepickerpopup_paint_engine(void* self) {
    return KDatePickerPopup_PaintEngine((KDatePickerPopup*)self);
}

QPaintEngine* k_datepickerpopup_qbase_paint_engine(void* self) {
    return KDatePickerPopup_QBasePaintEngine((KDatePickerPopup*)self);
}

void k_datepickerpopup_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KDatePickerPopup_OnPaintEngine((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_mouse_double_click_event(void* self, void* event) {
    KDatePickerPopup_MouseDoubleClickEvent((KDatePickerPopup*)self, (QMouseEvent*)event);
}

void k_datepickerpopup_qbase_mouse_double_click_event(void* self, void* event) {
    KDatePickerPopup_QBaseMouseDoubleClickEvent((KDatePickerPopup*)self, (QMouseEvent*)event);
}

void k_datepickerpopup_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnMouseDoubleClickEvent((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_key_release_event(void* self, void* event) {
    KDatePickerPopup_KeyReleaseEvent((KDatePickerPopup*)self, (QKeyEvent*)event);
}

void k_datepickerpopup_qbase_key_release_event(void* self, void* event) {
    KDatePickerPopup_QBaseKeyReleaseEvent((KDatePickerPopup*)self, (QKeyEvent*)event);
}

void k_datepickerpopup_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnKeyReleaseEvent((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_focus_in_event(void* self, void* event) {
    KDatePickerPopup_FocusInEvent((KDatePickerPopup*)self, (QFocusEvent*)event);
}

void k_datepickerpopup_qbase_focus_in_event(void* self, void* event) {
    KDatePickerPopup_QBaseFocusInEvent((KDatePickerPopup*)self, (QFocusEvent*)event);
}

void k_datepickerpopup_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnFocusInEvent((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_focus_out_event(void* self, void* event) {
    KDatePickerPopup_FocusOutEvent((KDatePickerPopup*)self, (QFocusEvent*)event);
}

void k_datepickerpopup_qbase_focus_out_event(void* self, void* event) {
    KDatePickerPopup_QBaseFocusOutEvent((KDatePickerPopup*)self, (QFocusEvent*)event);
}

void k_datepickerpopup_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnFocusOutEvent((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_move_event(void* self, void* event) {
    KDatePickerPopup_MoveEvent((KDatePickerPopup*)self, (QMoveEvent*)event);
}

void k_datepickerpopup_qbase_move_event(void* self, void* event) {
    KDatePickerPopup_QBaseMoveEvent((KDatePickerPopup*)self, (QMoveEvent*)event);
}

void k_datepickerpopup_on_move_event(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnMoveEvent((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_resize_event(void* self, void* event) {
    KDatePickerPopup_ResizeEvent((KDatePickerPopup*)self, (QResizeEvent*)event);
}

void k_datepickerpopup_qbase_resize_event(void* self, void* event) {
    KDatePickerPopup_QBaseResizeEvent((KDatePickerPopup*)self, (QResizeEvent*)event);
}

void k_datepickerpopup_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnResizeEvent((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_close_event(void* self, void* event) {
    KDatePickerPopup_CloseEvent((KDatePickerPopup*)self, (QCloseEvent*)event);
}

void k_datepickerpopup_qbase_close_event(void* self, void* event) {
    KDatePickerPopup_QBaseCloseEvent((KDatePickerPopup*)self, (QCloseEvent*)event);
}

void k_datepickerpopup_on_close_event(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnCloseEvent((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_context_menu_event(void* self, void* event) {
    KDatePickerPopup_ContextMenuEvent((KDatePickerPopup*)self, (QContextMenuEvent*)event);
}

void k_datepickerpopup_qbase_context_menu_event(void* self, void* event) {
    KDatePickerPopup_QBaseContextMenuEvent((KDatePickerPopup*)self, (QContextMenuEvent*)event);
}

void k_datepickerpopup_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnContextMenuEvent((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_tablet_event(void* self, void* event) {
    KDatePickerPopup_TabletEvent((KDatePickerPopup*)self, (QTabletEvent*)event);
}

void k_datepickerpopup_qbase_tablet_event(void* self, void* event) {
    KDatePickerPopup_QBaseTabletEvent((KDatePickerPopup*)self, (QTabletEvent*)event);
}

void k_datepickerpopup_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnTabletEvent((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_drag_enter_event(void* self, void* event) {
    KDatePickerPopup_DragEnterEvent((KDatePickerPopup*)self, (QDragEnterEvent*)event);
}

void k_datepickerpopup_qbase_drag_enter_event(void* self, void* event) {
    KDatePickerPopup_QBaseDragEnterEvent((KDatePickerPopup*)self, (QDragEnterEvent*)event);
}

void k_datepickerpopup_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnDragEnterEvent((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_drag_move_event(void* self, void* event) {
    KDatePickerPopup_DragMoveEvent((KDatePickerPopup*)self, (QDragMoveEvent*)event);
}

void k_datepickerpopup_qbase_drag_move_event(void* self, void* event) {
    KDatePickerPopup_QBaseDragMoveEvent((KDatePickerPopup*)self, (QDragMoveEvent*)event);
}

void k_datepickerpopup_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnDragMoveEvent((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_drag_leave_event(void* self, void* event) {
    KDatePickerPopup_DragLeaveEvent((KDatePickerPopup*)self, (QDragLeaveEvent*)event);
}

void k_datepickerpopup_qbase_drag_leave_event(void* self, void* event) {
    KDatePickerPopup_QBaseDragLeaveEvent((KDatePickerPopup*)self, (QDragLeaveEvent*)event);
}

void k_datepickerpopup_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnDragLeaveEvent((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_drop_event(void* self, void* event) {
    KDatePickerPopup_DropEvent((KDatePickerPopup*)self, (QDropEvent*)event);
}

void k_datepickerpopup_qbase_drop_event(void* self, void* event) {
    KDatePickerPopup_QBaseDropEvent((KDatePickerPopup*)self, (QDropEvent*)event);
}

void k_datepickerpopup_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnDropEvent((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_show_event(void* self, void* event) {
    KDatePickerPopup_ShowEvent((KDatePickerPopup*)self, (QShowEvent*)event);
}

void k_datepickerpopup_qbase_show_event(void* self, void* event) {
    KDatePickerPopup_QBaseShowEvent((KDatePickerPopup*)self, (QShowEvent*)event);
}

void k_datepickerpopup_on_show_event(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnShowEvent((KDatePickerPopup*)self, (intptr_t)callback);
}

bool k_datepickerpopup_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KDatePickerPopup_NativeEvent((KDatePickerPopup*)self, qstring(eventType), message, result);
}

bool k_datepickerpopup_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KDatePickerPopup_QBaseNativeEvent((KDatePickerPopup*)self, qstring(eventType), message, result);
}

void k_datepickerpopup_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KDatePickerPopup_OnNativeEvent((KDatePickerPopup*)self, (intptr_t)callback);
}

int32_t k_datepickerpopup_metric(void* self, int32_t param1) {
    return KDatePickerPopup_Metric((KDatePickerPopup*)self, param1);
}

int32_t k_datepickerpopup_qbase_metric(void* self, int32_t param1) {
    return KDatePickerPopup_QBaseMetric((KDatePickerPopup*)self, param1);
}

void k_datepickerpopup_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KDatePickerPopup_OnMetric((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_init_painter(void* self, void* painter) {
    KDatePickerPopup_InitPainter((KDatePickerPopup*)self, (QPainter*)painter);
}

void k_datepickerpopup_qbase_init_painter(void* self, void* painter) {
    KDatePickerPopup_QBaseInitPainter((KDatePickerPopup*)self, (QPainter*)painter);
}

void k_datepickerpopup_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnInitPainter((KDatePickerPopup*)self, (intptr_t)callback);
}

QPaintDevice* k_datepickerpopup_redirected(void* self, void* offset) {
    return KDatePickerPopup_Redirected((KDatePickerPopup*)self, (QPoint*)offset);
}

QPaintDevice* k_datepickerpopup_qbase_redirected(void* self, void* offset) {
    return KDatePickerPopup_QBaseRedirected((KDatePickerPopup*)self, (QPoint*)offset);
}

void k_datepickerpopup_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KDatePickerPopup_OnRedirected((KDatePickerPopup*)self, (intptr_t)callback);
}

QPainter* k_datepickerpopup_shared_painter(void* self) {
    return KDatePickerPopup_SharedPainter((KDatePickerPopup*)self);
}

QPainter* k_datepickerpopup_qbase_shared_painter(void* self) {
    return KDatePickerPopup_QBaseSharedPainter((KDatePickerPopup*)self);
}

void k_datepickerpopup_on_shared_painter(void* self, QPainter* (*callback)()) {
    KDatePickerPopup_OnSharedPainter((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_input_method_event(void* self, void* param1) {
    KDatePickerPopup_InputMethodEvent((KDatePickerPopup*)self, (QInputMethodEvent*)param1);
}

void k_datepickerpopup_qbase_input_method_event(void* self, void* param1) {
    KDatePickerPopup_QBaseInputMethodEvent((KDatePickerPopup*)self, (QInputMethodEvent*)param1);
}

void k_datepickerpopup_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnInputMethodEvent((KDatePickerPopup*)self, (intptr_t)callback);
}

QVariant* k_datepickerpopup_input_method_query(void* self, int32_t param1) {
    return KDatePickerPopup_InputMethodQuery((KDatePickerPopup*)self, param1);
}

QVariant* k_datepickerpopup_qbase_input_method_query(void* self, int32_t param1) {
    return KDatePickerPopup_QBaseInputMethodQuery((KDatePickerPopup*)self, param1);
}

void k_datepickerpopup_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KDatePickerPopup_OnInputMethodQuery((KDatePickerPopup*)self, (intptr_t)callback);
}

bool k_datepickerpopup_event_filter(void* self, void* watched, void* event) {
    return KDatePickerPopup_EventFilter((KDatePickerPopup*)self, (QObject*)watched, (QEvent*)event);
}

bool k_datepickerpopup_qbase_event_filter(void* self, void* watched, void* event) {
    return KDatePickerPopup_QBaseEventFilter((KDatePickerPopup*)self, (QObject*)watched, (QEvent*)event);
}

void k_datepickerpopup_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KDatePickerPopup_OnEventFilter((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_child_event(void* self, void* event) {
    KDatePickerPopup_ChildEvent((KDatePickerPopup*)self, (QChildEvent*)event);
}

void k_datepickerpopup_qbase_child_event(void* self, void* event) {
    KDatePickerPopup_QBaseChildEvent((KDatePickerPopup*)self, (QChildEvent*)event);
}

void k_datepickerpopup_on_child_event(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnChildEvent((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_custom_event(void* self, void* event) {
    KDatePickerPopup_CustomEvent((KDatePickerPopup*)self, (QEvent*)event);
}

void k_datepickerpopup_qbase_custom_event(void* self, void* event) {
    KDatePickerPopup_QBaseCustomEvent((KDatePickerPopup*)self, (QEvent*)event);
}

void k_datepickerpopup_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnCustomEvent((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_connect_notify(void* self, void* signal) {
    KDatePickerPopup_ConnectNotify((KDatePickerPopup*)self, (QMetaMethod*)signal);
}

void k_datepickerpopup_qbase_connect_notify(void* self, void* signal) {
    KDatePickerPopup_QBaseConnectNotify((KDatePickerPopup*)self, (QMetaMethod*)signal);
}

void k_datepickerpopup_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnConnectNotify((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_disconnect_notify(void* self, void* signal) {
    KDatePickerPopup_DisconnectNotify((KDatePickerPopup*)self, (QMetaMethod*)signal);
}

void k_datepickerpopup_qbase_disconnect_notify(void* self, void* signal) {
    KDatePickerPopup_QBaseDisconnectNotify((KDatePickerPopup*)self, (QMetaMethod*)signal);
}

void k_datepickerpopup_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KDatePickerPopup_OnDisconnectNotify((KDatePickerPopup*)self, (intptr_t)callback);
}

int32_t k_datepickerpopup_column_count(void* self) {
    return KDatePickerPopup_ColumnCount((KDatePickerPopup*)self);
}

int32_t k_datepickerpopup_qbase_column_count(void* self) {
    return KDatePickerPopup_QBaseColumnCount((KDatePickerPopup*)self);
}

void k_datepickerpopup_on_column_count(void* self, int32_t (*callback)()) {
    KDatePickerPopup_OnColumnCount((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_update_micro_focus(void* self) {
    KDatePickerPopup_UpdateMicroFocus((KDatePickerPopup*)self);
}

void k_datepickerpopup_qbase_update_micro_focus(void* self) {
    KDatePickerPopup_QBaseUpdateMicroFocus((KDatePickerPopup*)self);
}

void k_datepickerpopup_on_update_micro_focus(void* self, void (*callback)()) {
    KDatePickerPopup_OnUpdateMicroFocus((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_create(void* self) {
    KDatePickerPopup_Create((KDatePickerPopup*)self);
}

void k_datepickerpopup_qbase_create(void* self) {
    KDatePickerPopup_QBaseCreate((KDatePickerPopup*)self);
}

void k_datepickerpopup_on_create(void* self, void (*callback)()) {
    KDatePickerPopup_OnCreate((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_destroy(void* self) {
    KDatePickerPopup_Destroy((KDatePickerPopup*)self);
}

void k_datepickerpopup_qbase_destroy(void* self) {
    KDatePickerPopup_QBaseDestroy((KDatePickerPopup*)self);
}

void k_datepickerpopup_on_destroy(void* self, void (*callback)()) {
    KDatePickerPopup_OnDestroy((KDatePickerPopup*)self, (intptr_t)callback);
}

bool k_datepickerpopup_focus_next_child(void* self) {
    return KDatePickerPopup_FocusNextChild((KDatePickerPopup*)self);
}

bool k_datepickerpopup_qbase_focus_next_child(void* self) {
    return KDatePickerPopup_QBaseFocusNextChild((KDatePickerPopup*)self);
}

void k_datepickerpopup_on_focus_next_child(void* self, bool (*callback)()) {
    KDatePickerPopup_OnFocusNextChild((KDatePickerPopup*)self, (intptr_t)callback);
}

bool k_datepickerpopup_focus_previous_child(void* self) {
    return KDatePickerPopup_FocusPreviousChild((KDatePickerPopup*)self);
}

bool k_datepickerpopup_qbase_focus_previous_child(void* self) {
    return KDatePickerPopup_QBaseFocusPreviousChild((KDatePickerPopup*)self);
}

void k_datepickerpopup_on_focus_previous_child(void* self, bool (*callback)()) {
    KDatePickerPopup_OnFocusPreviousChild((KDatePickerPopup*)self, (intptr_t)callback);
}

QObject* k_datepickerpopup_sender(void* self) {
    return KDatePickerPopup_Sender((KDatePickerPopup*)self);
}

QObject* k_datepickerpopup_qbase_sender(void* self) {
    return KDatePickerPopup_QBaseSender((KDatePickerPopup*)self);
}

void k_datepickerpopup_on_sender(void* self, QObject* (*callback)()) {
    KDatePickerPopup_OnSender((KDatePickerPopup*)self, (intptr_t)callback);
}

int32_t k_datepickerpopup_sender_signal_index(void* self) {
    return KDatePickerPopup_SenderSignalIndex((KDatePickerPopup*)self);
}

int32_t k_datepickerpopup_qbase_sender_signal_index(void* self) {
    return KDatePickerPopup_QBaseSenderSignalIndex((KDatePickerPopup*)self);
}

void k_datepickerpopup_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KDatePickerPopup_OnSenderSignalIndex((KDatePickerPopup*)self, (intptr_t)callback);
}

int32_t k_datepickerpopup_receivers(void* self, const char* signal) {
    return KDatePickerPopup_Receivers((KDatePickerPopup*)self, signal);
}

int32_t k_datepickerpopup_qbase_receivers(void* self, const char* signal) {
    return KDatePickerPopup_QBaseReceivers((KDatePickerPopup*)self, signal);
}

void k_datepickerpopup_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KDatePickerPopup_OnReceivers((KDatePickerPopup*)self, (intptr_t)callback);
}

bool k_datepickerpopup_is_signal_connected(void* self, void* signal) {
    return KDatePickerPopup_IsSignalConnected((KDatePickerPopup*)self, (QMetaMethod*)signal);
}

bool k_datepickerpopup_qbase_is_signal_connected(void* self, void* signal) {
    return KDatePickerPopup_QBaseIsSignalConnected((KDatePickerPopup*)self, (QMetaMethod*)signal);
}

void k_datepickerpopup_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KDatePickerPopup_OnIsSignalConnected((KDatePickerPopup*)self, (intptr_t)callback);
}

double k_datepickerpopup_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KDatePickerPopup_GetDecodedMetricF((KDatePickerPopup*)self, metricA, metricB);
}

double k_datepickerpopup_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KDatePickerPopup_QBaseGetDecodedMetricF((KDatePickerPopup*)self, metricA, metricB);
}

void k_datepickerpopup_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KDatePickerPopup_OnGetDecodedMetricF((KDatePickerPopup*)self, (intptr_t)callback);
}

void k_datepickerpopup_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_datepickerpopup_delete(void* self) {
    KDatePickerPopup_Delete((KDatePickerPopup*)(self));
}
