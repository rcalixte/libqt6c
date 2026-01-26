#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdialog.hpp"
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
#include "libkfileplaceeditdialog.hpp"
#include "libkfileplaceeditdialog.h"

KFilePlaceEditDialog* k_fileplaceeditdialog_new(bool allowGlobal, void* url, const char* label, const char* icon, bool isAddingNewPlace) {
    return KFilePlaceEditDialog_new(allowGlobal, (QUrl*)url, qstring(label), qstring(icon), isAddingNewPlace);
}

KFilePlaceEditDialog* k_fileplaceeditdialog_new2(bool allowGlobal, void* url, const char* label, const char* icon, bool isAddingNewPlace, bool appLocal) {
    return KFilePlaceEditDialog_new2(allowGlobal, (QUrl*)url, qstring(label), qstring(icon), isAddingNewPlace, appLocal);
}

KFilePlaceEditDialog* k_fileplaceeditdialog_new3(bool allowGlobal, void* url, const char* label, const char* icon, bool isAddingNewPlace, bool appLocal, int iconSize) {
    return KFilePlaceEditDialog_new3(allowGlobal, (QUrl*)url, qstring(label), qstring(icon), isAddingNewPlace, appLocal, iconSize);
}

KFilePlaceEditDialog* k_fileplaceeditdialog_new4(bool allowGlobal, void* url, const char* label, const char* icon, bool isAddingNewPlace, bool appLocal, int iconSize, void* parent) {
    return KFilePlaceEditDialog_new4(allowGlobal, (QUrl*)url, qstring(label), qstring(icon), isAddingNewPlace, appLocal, iconSize, (QWidget*)parent);
}

const QMetaObject* k_fileplaceeditdialog_meta_object(void* self) {
    return KFilePlaceEditDialog_MetaObject((KFilePlaceEditDialog*)self);
}

void k_fileplaceeditdialog_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KFilePlaceEditDialog_OnMetaObject((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

const QMetaObject* k_fileplaceeditdialog_qbase_meta_object(void* self) {
    return KFilePlaceEditDialog_QBaseMetaObject((KFilePlaceEditDialog*)self);
}

void* k_fileplaceeditdialog_metacast(void* self, const char* param1) {
    return KFilePlaceEditDialog_Metacast((KFilePlaceEditDialog*)self, param1);
}

void k_fileplaceeditdialog_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KFilePlaceEditDialog_OnMetacast((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void* k_fileplaceeditdialog_qbase_metacast(void* self, const char* param1) {
    return KFilePlaceEditDialog_QBaseMetacast((KFilePlaceEditDialog*)self, param1);
}

int32_t k_fileplaceeditdialog_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KFilePlaceEditDialog_Metacall((KFilePlaceEditDialog*)self, param1, param2, param3);
}

void k_fileplaceeditdialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KFilePlaceEditDialog_OnMetacall((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

int32_t k_fileplaceeditdialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KFilePlaceEditDialog_QBaseMetacall((KFilePlaceEditDialog*)self, param1, param2, param3);
}

const char* k_fileplaceeditdialog_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_fileplaceeditdialog_get_information(bool allowGlobal, void* url, const char* label, const char* icon, bool isAddingNewPlace, bool* appLocal, int iconSize) {
    return KFilePlaceEditDialog_GetInformation(allowGlobal, (QUrl*)url, qstring(label), qstring(icon), isAddingNewPlace, (bool*)appLocal, iconSize);
}

QUrl* k_fileplaceeditdialog_url(void* self) {
    return KFilePlaceEditDialog_Url((KFilePlaceEditDialog*)self);
}

const char* k_fileplaceeditdialog_label(void* self) {
    libqt_string _str = KFilePlaceEditDialog_Label((KFilePlaceEditDialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_fileplaceeditdialog_icon(void* self) {
    libqt_string _str = KFilePlaceEditDialog_Icon((KFilePlaceEditDialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_fileplaceeditdialog_application_local(void* self) {
    return KFilePlaceEditDialog_ApplicationLocal((KFilePlaceEditDialog*)self);
}

void k_fileplaceeditdialog_url_changed(void* self, const char* param1) {
    KFilePlaceEditDialog_UrlChanged((KFilePlaceEditDialog*)self, qstring(param1));
}

const char* k_fileplaceeditdialog_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_fileplaceeditdialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_fileplaceeditdialog_get_information8(bool allowGlobal, void* url, const char* label, const char* icon, bool isAddingNewPlace, bool* appLocal, int iconSize, void* parent) {
    return KFilePlaceEditDialog_GetInformation8(allowGlobal, (QUrl*)url, qstring(label), qstring(icon), isAddingNewPlace, (bool*)appLocal, iconSize, (QWidget*)parent);
}

int32_t k_fileplaceeditdialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void k_fileplaceeditdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool k_fileplaceeditdialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void k_fileplaceeditdialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void k_fileplaceeditdialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void k_fileplaceeditdialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void k_fileplaceeditdialog_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void k_fileplaceeditdialog_on_accepted(void* self, void (*callback)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void k_fileplaceeditdialog_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

uintptr_t k_fileplaceeditdialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_fileplaceeditdialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_fileplaceeditdialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_fileplaceeditdialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_fileplaceeditdialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_fileplaceeditdialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_fileplaceeditdialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_fileplaceeditdialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_fileplaceeditdialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_fileplaceeditdialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_fileplaceeditdialog_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_fileplaceeditdialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_fileplaceeditdialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_fileplaceeditdialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_fileplaceeditdialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_fileplaceeditdialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_fileplaceeditdialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_fileplaceeditdialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_fileplaceeditdialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_fileplaceeditdialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_fileplaceeditdialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_fileplaceeditdialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_fileplaceeditdialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_fileplaceeditdialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_fileplaceeditdialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_fileplaceeditdialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_fileplaceeditdialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_fileplaceeditdialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_fileplaceeditdialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_fileplaceeditdialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_fileplaceeditdialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_fileplaceeditdialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_fileplaceeditdialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_fileplaceeditdialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_fileplaceeditdialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_fileplaceeditdialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_fileplaceeditdialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_fileplaceeditdialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_fileplaceeditdialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_fileplaceeditdialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_fileplaceeditdialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_fileplaceeditdialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_fileplaceeditdialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_fileplaceeditdialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_fileplaceeditdialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_fileplaceeditdialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_fileplaceeditdialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_fileplaceeditdialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_fileplaceeditdialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_fileplaceeditdialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_fileplaceeditdialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_fileplaceeditdialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_fileplaceeditdialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_fileplaceeditdialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_fileplaceeditdialog_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_fileplaceeditdialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_fileplaceeditdialog_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_fileplaceeditdialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_fileplaceeditdialog_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_fileplaceeditdialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_fileplaceeditdialog_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_fileplaceeditdialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_fileplaceeditdialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_fileplaceeditdialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_fileplaceeditdialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_fileplaceeditdialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_fileplaceeditdialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_fileplaceeditdialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_fileplaceeditdialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_fileplaceeditdialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_fileplaceeditdialog_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_fileplaceeditdialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_fileplaceeditdialog_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_fileplaceeditdialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_fileplaceeditdialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_fileplaceeditdialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_fileplaceeditdialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_fileplaceeditdialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_fileplaceeditdialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_fileplaceeditdialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_fileplaceeditdialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_fileplaceeditdialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_fileplaceeditdialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_fileplaceeditdialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_fileplaceeditdialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_fileplaceeditdialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_fileplaceeditdialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_fileplaceeditdialog_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_fileplaceeditdialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_fileplaceeditdialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_fileplaceeditdialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_fileplaceeditdialog_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_fileplaceeditdialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_fileplaceeditdialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_fileplaceeditdialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_fileplaceeditdialog_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_fileplaceeditdialog_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_fileplaceeditdialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_fileplaceeditdialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_fileplaceeditdialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_fileplaceeditdialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fileplaceeditdialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_fileplaceeditdialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_fileplaceeditdialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_fileplaceeditdialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fileplaceeditdialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_fileplaceeditdialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fileplaceeditdialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_fileplaceeditdialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fileplaceeditdialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_fileplaceeditdialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_fileplaceeditdialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_fileplaceeditdialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_fileplaceeditdialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fileplaceeditdialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_fileplaceeditdialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_fileplaceeditdialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_fileplaceeditdialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fileplaceeditdialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_fileplaceeditdialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_fileplaceeditdialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fileplaceeditdialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_fileplaceeditdialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fileplaceeditdialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_fileplaceeditdialog_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_fileplaceeditdialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_fileplaceeditdialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_fileplaceeditdialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_fileplaceeditdialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_fileplaceeditdialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_fileplaceeditdialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_fileplaceeditdialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_fileplaceeditdialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_fileplaceeditdialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_fileplaceeditdialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_fileplaceeditdialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_fileplaceeditdialog_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_fileplaceeditdialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_fileplaceeditdialog_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_fileplaceeditdialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_fileplaceeditdialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_fileplaceeditdialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_fileplaceeditdialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_fileplaceeditdialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_fileplaceeditdialog_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_fileplaceeditdialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_fileplaceeditdialog_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_fileplaceeditdialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_fileplaceeditdialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_fileplaceeditdialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_fileplaceeditdialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_fileplaceeditdialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_fileplaceeditdialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_fileplaceeditdialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_fileplaceeditdialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_fileplaceeditdialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_fileplaceeditdialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_fileplaceeditdialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_fileplaceeditdialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_fileplaceeditdialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_fileplaceeditdialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_fileplaceeditdialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_fileplaceeditdialog_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_fileplaceeditdialog_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_fileplaceeditdialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_fileplaceeditdialog_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_fileplaceeditdialog_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_fileplaceeditdialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_fileplaceeditdialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_fileplaceeditdialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_fileplaceeditdialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_fileplaceeditdialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_fileplaceeditdialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_fileplaceeditdialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_fileplaceeditdialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_fileplaceeditdialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_fileplaceeditdialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_fileplaceeditdialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_fileplaceeditdialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_fileplaceeditdialog_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_fileplaceeditdialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_fileplaceeditdialog_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_fileplaceeditdialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_fileplaceeditdialog_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_fileplaceeditdialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_fileplaceeditdialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_fileplaceeditdialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_fileplaceeditdialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_fileplaceeditdialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_fileplaceeditdialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_fileplaceeditdialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_fileplaceeditdialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_fileplaceeditdialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_fileplaceeditdialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_fileplaceeditdialog_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_fileplaceeditdialog_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_fileplaceeditdialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_fileplaceeditdialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_fileplaceeditdialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_fileplaceeditdialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_fileplaceeditdialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_fileplaceeditdialog_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_fileplaceeditdialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_fileplaceeditdialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_fileplaceeditdialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_fileplaceeditdialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_fileplaceeditdialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_fileplaceeditdialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_fileplaceeditdialog_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_fileplaceeditdialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_fileplaceeditdialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_fileplaceeditdialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_fileplaceeditdialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_fileplaceeditdialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_fileplaceeditdialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_fileplaceeditdialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_fileplaceeditdialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_fileplaceeditdialog_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_fileplaceeditdialog_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_fileplaceeditdialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_fileplaceeditdialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_fileplaceeditdialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_fileplaceeditdialog_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_fileplaceeditdialog_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_fileplaceeditdialog_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_fileplaceeditdialog_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_fileplaceeditdialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_fileplaceeditdialog_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_fileplaceeditdialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_fileplaceeditdialog_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_fileplaceeditdialog_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_fileplaceeditdialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_fileplaceeditdialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_fileplaceeditdialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_fileplaceeditdialog_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_fileplaceeditdialog_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_fileplaceeditdialog_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_fileplaceeditdialog_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_fileplaceeditdialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_fileplaceeditdialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_fileplaceeditdialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_fileplaceeditdialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_fileplaceeditdialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_fileplaceeditdialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_fileplaceeditdialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_fileplaceeditdialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_fileplaceeditdialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_fileplaceeditdialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_fileplaceeditdialog_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_fileplaceeditdialog_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_fileplaceeditdialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_fileplaceeditdialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_fileplaceeditdialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_fileplaceeditdialog_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_fileplaceeditdialog_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_fileplaceeditdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_fileplaceeditdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_fileplaceeditdialog_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_fileplaceeditdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_fileplaceeditdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_fileplaceeditdialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_fileplaceeditdialog_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_fileplaceeditdialog_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_fileplaceeditdialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_fileplaceeditdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_fileplaceeditdialog_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_fileplaceeditdialog_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_fileplaceeditdialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_fileplaceeditdialog_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_fileplaceeditdialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fileplaceeditdialog_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_fileplaceeditdialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_fileplaceeditdialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_fileplaceeditdialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_fileplaceeditdialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_fileplaceeditdialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_fileplaceeditdialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_fileplaceeditdialog_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_fileplaceeditdialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_fileplaceeditdialog_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_fileplaceeditdialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_fileplaceeditdialog_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_fileplaceeditdialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_fileplaceeditdialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_fileplaceeditdialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_fileplaceeditdialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_fileplaceeditdialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_fileplaceeditdialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_fileplaceeditdialog_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_fileplaceeditdialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_fileplaceeditdialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_fileplaceeditdialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_fileplaceeditdialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_fileplaceeditdialog_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_fileplaceeditdialog_dynamic_property_names\n");
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

QBindingStorage* k_fileplaceeditdialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_fileplaceeditdialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_fileplaceeditdialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_fileplaceeditdialog_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_fileplaceeditdialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_fileplaceeditdialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_fileplaceeditdialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_fileplaceeditdialog_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_fileplaceeditdialog_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_fileplaceeditdialog_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_fileplaceeditdialog_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_fileplaceeditdialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_fileplaceeditdialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_fileplaceeditdialog_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_fileplaceeditdialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_fileplaceeditdialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_fileplaceeditdialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_fileplaceeditdialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_fileplaceeditdialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_fileplaceeditdialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_fileplaceeditdialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_fileplaceeditdialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_fileplaceeditdialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_fileplaceeditdialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_fileplaceeditdialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_fileplaceeditdialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_fileplaceeditdialog_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_fileplaceeditdialog_set_visible(void* self, bool visible) {
    KFilePlaceEditDialog_SetVisible((KFilePlaceEditDialog*)self, visible);
}

void k_fileplaceeditdialog_qbase_set_visible(void* self, bool visible) {
    KFilePlaceEditDialog_QBaseSetVisible((KFilePlaceEditDialog*)self, visible);
}

void k_fileplaceeditdialog_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KFilePlaceEditDialog_OnSetVisible((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

QSize* k_fileplaceeditdialog_size_hint(void* self) {
    return KFilePlaceEditDialog_SizeHint((KFilePlaceEditDialog*)self);
}

QSize* k_fileplaceeditdialog_qbase_size_hint(void* self) {
    return KFilePlaceEditDialog_QBaseSizeHint((KFilePlaceEditDialog*)self);
}

void k_fileplaceeditdialog_on_size_hint(void* self, QSize* (*callback)()) {
    KFilePlaceEditDialog_OnSizeHint((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

QSize* k_fileplaceeditdialog_minimum_size_hint(void* self) {
    return KFilePlaceEditDialog_MinimumSizeHint((KFilePlaceEditDialog*)self);
}

QSize* k_fileplaceeditdialog_qbase_minimum_size_hint(void* self) {
    return KFilePlaceEditDialog_QBaseMinimumSizeHint((KFilePlaceEditDialog*)self);
}

void k_fileplaceeditdialog_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KFilePlaceEditDialog_OnMinimumSizeHint((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_open(void* self) {
    KFilePlaceEditDialog_Open((KFilePlaceEditDialog*)self);
}

void k_fileplaceeditdialog_qbase_open(void* self) {
    KFilePlaceEditDialog_QBaseOpen((KFilePlaceEditDialog*)self);
}

void k_fileplaceeditdialog_on_open(void* self, void (*callback)()) {
    KFilePlaceEditDialog_OnOpen((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

int32_t k_fileplaceeditdialog_exec(void* self) {
    return KFilePlaceEditDialog_Exec((KFilePlaceEditDialog*)self);
}

int32_t k_fileplaceeditdialog_qbase_exec(void* self) {
    return KFilePlaceEditDialog_QBaseExec((KFilePlaceEditDialog*)self);
}

void k_fileplaceeditdialog_on_exec(void* self, int32_t (*callback)()) {
    KFilePlaceEditDialog_OnExec((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_done(void* self, int param1) {
    KFilePlaceEditDialog_Done((KFilePlaceEditDialog*)self, param1);
}

void k_fileplaceeditdialog_qbase_done(void* self, int param1) {
    KFilePlaceEditDialog_QBaseDone((KFilePlaceEditDialog*)self, param1);
}

void k_fileplaceeditdialog_on_done(void* self, void (*callback)(void*, int)) {
    KFilePlaceEditDialog_OnDone((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_accept(void* self) {
    KFilePlaceEditDialog_Accept((KFilePlaceEditDialog*)self);
}

void k_fileplaceeditdialog_qbase_accept(void* self) {
    KFilePlaceEditDialog_QBaseAccept((KFilePlaceEditDialog*)self);
}

void k_fileplaceeditdialog_on_accept(void* self, void (*callback)()) {
    KFilePlaceEditDialog_OnAccept((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_reject(void* self) {
    KFilePlaceEditDialog_Reject((KFilePlaceEditDialog*)self);
}

void k_fileplaceeditdialog_qbase_reject(void* self) {
    KFilePlaceEditDialog_QBaseReject((KFilePlaceEditDialog*)self);
}

void k_fileplaceeditdialog_on_reject(void* self, void (*callback)()) {
    KFilePlaceEditDialog_OnReject((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_key_press_event(void* self, void* param1) {
    KFilePlaceEditDialog_KeyPressEvent((KFilePlaceEditDialog*)self, (QKeyEvent*)param1);
}

void k_fileplaceeditdialog_qbase_key_press_event(void* self, void* param1) {
    KFilePlaceEditDialog_QBaseKeyPressEvent((KFilePlaceEditDialog*)self, (QKeyEvent*)param1);
}

void k_fileplaceeditdialog_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnKeyPressEvent((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_close_event(void* self, void* param1) {
    KFilePlaceEditDialog_CloseEvent((KFilePlaceEditDialog*)self, (QCloseEvent*)param1);
}

void k_fileplaceeditdialog_qbase_close_event(void* self, void* param1) {
    KFilePlaceEditDialog_QBaseCloseEvent((KFilePlaceEditDialog*)self, (QCloseEvent*)param1);
}

void k_fileplaceeditdialog_on_close_event(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnCloseEvent((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_show_event(void* self, void* param1) {
    KFilePlaceEditDialog_ShowEvent((KFilePlaceEditDialog*)self, (QShowEvent*)param1);
}

void k_fileplaceeditdialog_qbase_show_event(void* self, void* param1) {
    KFilePlaceEditDialog_QBaseShowEvent((KFilePlaceEditDialog*)self, (QShowEvent*)param1);
}

void k_fileplaceeditdialog_on_show_event(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnShowEvent((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_resize_event(void* self, void* param1) {
    KFilePlaceEditDialog_ResizeEvent((KFilePlaceEditDialog*)self, (QResizeEvent*)param1);
}

void k_fileplaceeditdialog_qbase_resize_event(void* self, void* param1) {
    KFilePlaceEditDialog_QBaseResizeEvent((KFilePlaceEditDialog*)self, (QResizeEvent*)param1);
}

void k_fileplaceeditdialog_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnResizeEvent((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_context_menu_event(void* self, void* param1) {
    KFilePlaceEditDialog_ContextMenuEvent((KFilePlaceEditDialog*)self, (QContextMenuEvent*)param1);
}

void k_fileplaceeditdialog_qbase_context_menu_event(void* self, void* param1) {
    KFilePlaceEditDialog_QBaseContextMenuEvent((KFilePlaceEditDialog*)self, (QContextMenuEvent*)param1);
}

void k_fileplaceeditdialog_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnContextMenuEvent((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

bool k_fileplaceeditdialog_event_filter(void* self, void* param1, void* param2) {
    return KFilePlaceEditDialog_EventFilter((KFilePlaceEditDialog*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_fileplaceeditdialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return KFilePlaceEditDialog_QBaseEventFilter((KFilePlaceEditDialog*)self, (QObject*)param1, (QEvent*)param2);
}

void k_fileplaceeditdialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KFilePlaceEditDialog_OnEventFilter((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

int32_t k_fileplaceeditdialog_dev_type(void* self) {
    return KFilePlaceEditDialog_DevType((KFilePlaceEditDialog*)self);
}

int32_t k_fileplaceeditdialog_qbase_dev_type(void* self) {
    return KFilePlaceEditDialog_QBaseDevType((KFilePlaceEditDialog*)self);
}

void k_fileplaceeditdialog_on_dev_type(void* self, int32_t (*callback)()) {
    KFilePlaceEditDialog_OnDevType((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

int32_t k_fileplaceeditdialog_height_for_width(void* self, int param1) {
    return KFilePlaceEditDialog_HeightForWidth((KFilePlaceEditDialog*)self, param1);
}

int32_t k_fileplaceeditdialog_qbase_height_for_width(void* self, int param1) {
    return KFilePlaceEditDialog_QBaseHeightForWidth((KFilePlaceEditDialog*)self, param1);
}

void k_fileplaceeditdialog_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KFilePlaceEditDialog_OnHeightForWidth((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

bool k_fileplaceeditdialog_has_height_for_width(void* self) {
    return KFilePlaceEditDialog_HasHeightForWidth((KFilePlaceEditDialog*)self);
}

bool k_fileplaceeditdialog_qbase_has_height_for_width(void* self) {
    return KFilePlaceEditDialog_QBaseHasHeightForWidth((KFilePlaceEditDialog*)self);
}

void k_fileplaceeditdialog_on_has_height_for_width(void* self, bool (*callback)()) {
    KFilePlaceEditDialog_OnHasHeightForWidth((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

QPaintEngine* k_fileplaceeditdialog_paint_engine(void* self) {
    return KFilePlaceEditDialog_PaintEngine((KFilePlaceEditDialog*)self);
}

QPaintEngine* k_fileplaceeditdialog_qbase_paint_engine(void* self) {
    return KFilePlaceEditDialog_QBasePaintEngine((KFilePlaceEditDialog*)self);
}

void k_fileplaceeditdialog_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KFilePlaceEditDialog_OnPaintEngine((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

bool k_fileplaceeditdialog_event(void* self, void* event) {
    return KFilePlaceEditDialog_Event((KFilePlaceEditDialog*)self, (QEvent*)event);
}

bool k_fileplaceeditdialog_qbase_event(void* self, void* event) {
    return KFilePlaceEditDialog_QBaseEvent((KFilePlaceEditDialog*)self, (QEvent*)event);
}

void k_fileplaceeditdialog_on_event(void* self, bool (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnEvent((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_mouse_press_event(void* self, void* event) {
    KFilePlaceEditDialog_MousePressEvent((KFilePlaceEditDialog*)self, (QMouseEvent*)event);
}

void k_fileplaceeditdialog_qbase_mouse_press_event(void* self, void* event) {
    KFilePlaceEditDialog_QBaseMousePressEvent((KFilePlaceEditDialog*)self, (QMouseEvent*)event);
}

void k_fileplaceeditdialog_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnMousePressEvent((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_mouse_release_event(void* self, void* event) {
    KFilePlaceEditDialog_MouseReleaseEvent((KFilePlaceEditDialog*)self, (QMouseEvent*)event);
}

void k_fileplaceeditdialog_qbase_mouse_release_event(void* self, void* event) {
    KFilePlaceEditDialog_QBaseMouseReleaseEvent((KFilePlaceEditDialog*)self, (QMouseEvent*)event);
}

void k_fileplaceeditdialog_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnMouseReleaseEvent((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_mouse_double_click_event(void* self, void* event) {
    KFilePlaceEditDialog_MouseDoubleClickEvent((KFilePlaceEditDialog*)self, (QMouseEvent*)event);
}

void k_fileplaceeditdialog_qbase_mouse_double_click_event(void* self, void* event) {
    KFilePlaceEditDialog_QBaseMouseDoubleClickEvent((KFilePlaceEditDialog*)self, (QMouseEvent*)event);
}

void k_fileplaceeditdialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnMouseDoubleClickEvent((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_mouse_move_event(void* self, void* event) {
    KFilePlaceEditDialog_MouseMoveEvent((KFilePlaceEditDialog*)self, (QMouseEvent*)event);
}

void k_fileplaceeditdialog_qbase_mouse_move_event(void* self, void* event) {
    KFilePlaceEditDialog_QBaseMouseMoveEvent((KFilePlaceEditDialog*)self, (QMouseEvent*)event);
}

void k_fileplaceeditdialog_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnMouseMoveEvent((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_wheel_event(void* self, void* event) {
    KFilePlaceEditDialog_WheelEvent((KFilePlaceEditDialog*)self, (QWheelEvent*)event);
}

void k_fileplaceeditdialog_qbase_wheel_event(void* self, void* event) {
    KFilePlaceEditDialog_QBaseWheelEvent((KFilePlaceEditDialog*)self, (QWheelEvent*)event);
}

void k_fileplaceeditdialog_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnWheelEvent((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_key_release_event(void* self, void* event) {
    KFilePlaceEditDialog_KeyReleaseEvent((KFilePlaceEditDialog*)self, (QKeyEvent*)event);
}

void k_fileplaceeditdialog_qbase_key_release_event(void* self, void* event) {
    KFilePlaceEditDialog_QBaseKeyReleaseEvent((KFilePlaceEditDialog*)self, (QKeyEvent*)event);
}

void k_fileplaceeditdialog_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnKeyReleaseEvent((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_focus_in_event(void* self, void* event) {
    KFilePlaceEditDialog_FocusInEvent((KFilePlaceEditDialog*)self, (QFocusEvent*)event);
}

void k_fileplaceeditdialog_qbase_focus_in_event(void* self, void* event) {
    KFilePlaceEditDialog_QBaseFocusInEvent((KFilePlaceEditDialog*)self, (QFocusEvent*)event);
}

void k_fileplaceeditdialog_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnFocusInEvent((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_focus_out_event(void* self, void* event) {
    KFilePlaceEditDialog_FocusOutEvent((KFilePlaceEditDialog*)self, (QFocusEvent*)event);
}

void k_fileplaceeditdialog_qbase_focus_out_event(void* self, void* event) {
    KFilePlaceEditDialog_QBaseFocusOutEvent((KFilePlaceEditDialog*)self, (QFocusEvent*)event);
}

void k_fileplaceeditdialog_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnFocusOutEvent((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_enter_event(void* self, void* event) {
    KFilePlaceEditDialog_EnterEvent((KFilePlaceEditDialog*)self, (QEnterEvent*)event);
}

void k_fileplaceeditdialog_qbase_enter_event(void* self, void* event) {
    KFilePlaceEditDialog_QBaseEnterEvent((KFilePlaceEditDialog*)self, (QEnterEvent*)event);
}

void k_fileplaceeditdialog_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnEnterEvent((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_leave_event(void* self, void* event) {
    KFilePlaceEditDialog_LeaveEvent((KFilePlaceEditDialog*)self, (QEvent*)event);
}

void k_fileplaceeditdialog_qbase_leave_event(void* self, void* event) {
    KFilePlaceEditDialog_QBaseLeaveEvent((KFilePlaceEditDialog*)self, (QEvent*)event);
}

void k_fileplaceeditdialog_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnLeaveEvent((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_paint_event(void* self, void* event) {
    KFilePlaceEditDialog_PaintEvent((KFilePlaceEditDialog*)self, (QPaintEvent*)event);
}

void k_fileplaceeditdialog_qbase_paint_event(void* self, void* event) {
    KFilePlaceEditDialog_QBasePaintEvent((KFilePlaceEditDialog*)self, (QPaintEvent*)event);
}

void k_fileplaceeditdialog_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnPaintEvent((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_move_event(void* self, void* event) {
    KFilePlaceEditDialog_MoveEvent((KFilePlaceEditDialog*)self, (QMoveEvent*)event);
}

void k_fileplaceeditdialog_qbase_move_event(void* self, void* event) {
    KFilePlaceEditDialog_QBaseMoveEvent((KFilePlaceEditDialog*)self, (QMoveEvent*)event);
}

void k_fileplaceeditdialog_on_move_event(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnMoveEvent((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_tablet_event(void* self, void* event) {
    KFilePlaceEditDialog_TabletEvent((KFilePlaceEditDialog*)self, (QTabletEvent*)event);
}

void k_fileplaceeditdialog_qbase_tablet_event(void* self, void* event) {
    KFilePlaceEditDialog_QBaseTabletEvent((KFilePlaceEditDialog*)self, (QTabletEvent*)event);
}

void k_fileplaceeditdialog_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnTabletEvent((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_action_event(void* self, void* event) {
    KFilePlaceEditDialog_ActionEvent((KFilePlaceEditDialog*)self, (QActionEvent*)event);
}

void k_fileplaceeditdialog_qbase_action_event(void* self, void* event) {
    KFilePlaceEditDialog_QBaseActionEvent((KFilePlaceEditDialog*)self, (QActionEvent*)event);
}

void k_fileplaceeditdialog_on_action_event(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnActionEvent((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_drag_enter_event(void* self, void* event) {
    KFilePlaceEditDialog_DragEnterEvent((KFilePlaceEditDialog*)self, (QDragEnterEvent*)event);
}

void k_fileplaceeditdialog_qbase_drag_enter_event(void* self, void* event) {
    KFilePlaceEditDialog_QBaseDragEnterEvent((KFilePlaceEditDialog*)self, (QDragEnterEvent*)event);
}

void k_fileplaceeditdialog_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnDragEnterEvent((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_drag_move_event(void* self, void* event) {
    KFilePlaceEditDialog_DragMoveEvent((KFilePlaceEditDialog*)self, (QDragMoveEvent*)event);
}

void k_fileplaceeditdialog_qbase_drag_move_event(void* self, void* event) {
    KFilePlaceEditDialog_QBaseDragMoveEvent((KFilePlaceEditDialog*)self, (QDragMoveEvent*)event);
}

void k_fileplaceeditdialog_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnDragMoveEvent((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_drag_leave_event(void* self, void* event) {
    KFilePlaceEditDialog_DragLeaveEvent((KFilePlaceEditDialog*)self, (QDragLeaveEvent*)event);
}

void k_fileplaceeditdialog_qbase_drag_leave_event(void* self, void* event) {
    KFilePlaceEditDialog_QBaseDragLeaveEvent((KFilePlaceEditDialog*)self, (QDragLeaveEvent*)event);
}

void k_fileplaceeditdialog_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnDragLeaveEvent((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_drop_event(void* self, void* event) {
    KFilePlaceEditDialog_DropEvent((KFilePlaceEditDialog*)self, (QDropEvent*)event);
}

void k_fileplaceeditdialog_qbase_drop_event(void* self, void* event) {
    KFilePlaceEditDialog_QBaseDropEvent((KFilePlaceEditDialog*)self, (QDropEvent*)event);
}

void k_fileplaceeditdialog_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnDropEvent((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_hide_event(void* self, void* event) {
    KFilePlaceEditDialog_HideEvent((KFilePlaceEditDialog*)self, (QHideEvent*)event);
}

void k_fileplaceeditdialog_qbase_hide_event(void* self, void* event) {
    KFilePlaceEditDialog_QBaseHideEvent((KFilePlaceEditDialog*)self, (QHideEvent*)event);
}

void k_fileplaceeditdialog_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnHideEvent((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

bool k_fileplaceeditdialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KFilePlaceEditDialog_NativeEvent((KFilePlaceEditDialog*)self, qstring(eventType), message, result);
}

bool k_fileplaceeditdialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KFilePlaceEditDialog_QBaseNativeEvent((KFilePlaceEditDialog*)self, qstring(eventType), message, result);
}

void k_fileplaceeditdialog_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KFilePlaceEditDialog_OnNativeEvent((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_change_event(void* self, void* param1) {
    KFilePlaceEditDialog_ChangeEvent((KFilePlaceEditDialog*)self, (QEvent*)param1);
}

void k_fileplaceeditdialog_qbase_change_event(void* self, void* param1) {
    KFilePlaceEditDialog_QBaseChangeEvent((KFilePlaceEditDialog*)self, (QEvent*)param1);
}

void k_fileplaceeditdialog_on_change_event(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnChangeEvent((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

int32_t k_fileplaceeditdialog_metric(void* self, int32_t param1) {
    return KFilePlaceEditDialog_Metric((KFilePlaceEditDialog*)self, param1);
}

int32_t k_fileplaceeditdialog_qbase_metric(void* self, int32_t param1) {
    return KFilePlaceEditDialog_QBaseMetric((KFilePlaceEditDialog*)self, param1);
}

void k_fileplaceeditdialog_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KFilePlaceEditDialog_OnMetric((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_init_painter(void* self, void* painter) {
    KFilePlaceEditDialog_InitPainter((KFilePlaceEditDialog*)self, (QPainter*)painter);
}

void k_fileplaceeditdialog_qbase_init_painter(void* self, void* painter) {
    KFilePlaceEditDialog_QBaseInitPainter((KFilePlaceEditDialog*)self, (QPainter*)painter);
}

void k_fileplaceeditdialog_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnInitPainter((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

QPaintDevice* k_fileplaceeditdialog_redirected(void* self, void* offset) {
    return KFilePlaceEditDialog_Redirected((KFilePlaceEditDialog*)self, (QPoint*)offset);
}

QPaintDevice* k_fileplaceeditdialog_qbase_redirected(void* self, void* offset) {
    return KFilePlaceEditDialog_QBaseRedirected((KFilePlaceEditDialog*)self, (QPoint*)offset);
}

void k_fileplaceeditdialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnRedirected((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

QPainter* k_fileplaceeditdialog_shared_painter(void* self) {
    return KFilePlaceEditDialog_SharedPainter((KFilePlaceEditDialog*)self);
}

QPainter* k_fileplaceeditdialog_qbase_shared_painter(void* self) {
    return KFilePlaceEditDialog_QBaseSharedPainter((KFilePlaceEditDialog*)self);
}

void k_fileplaceeditdialog_on_shared_painter(void* self, QPainter* (*callback)()) {
    KFilePlaceEditDialog_OnSharedPainter((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_input_method_event(void* self, void* param1) {
    KFilePlaceEditDialog_InputMethodEvent((KFilePlaceEditDialog*)self, (QInputMethodEvent*)param1);
}

void k_fileplaceeditdialog_qbase_input_method_event(void* self, void* param1) {
    KFilePlaceEditDialog_QBaseInputMethodEvent((KFilePlaceEditDialog*)self, (QInputMethodEvent*)param1);
}

void k_fileplaceeditdialog_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnInputMethodEvent((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

QVariant* k_fileplaceeditdialog_input_method_query(void* self, int32_t param1) {
    return KFilePlaceEditDialog_InputMethodQuery((KFilePlaceEditDialog*)self, param1);
}

QVariant* k_fileplaceeditdialog_qbase_input_method_query(void* self, int32_t param1) {
    return KFilePlaceEditDialog_QBaseInputMethodQuery((KFilePlaceEditDialog*)self, param1);
}

void k_fileplaceeditdialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KFilePlaceEditDialog_OnInputMethodQuery((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

bool k_fileplaceeditdialog_focus_next_prev_child(void* self, bool next) {
    return KFilePlaceEditDialog_FocusNextPrevChild((KFilePlaceEditDialog*)self, next);
}

bool k_fileplaceeditdialog_qbase_focus_next_prev_child(void* self, bool next) {
    return KFilePlaceEditDialog_QBaseFocusNextPrevChild((KFilePlaceEditDialog*)self, next);
}

void k_fileplaceeditdialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KFilePlaceEditDialog_OnFocusNextPrevChild((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_timer_event(void* self, void* event) {
    KFilePlaceEditDialog_TimerEvent((KFilePlaceEditDialog*)self, (QTimerEvent*)event);
}

void k_fileplaceeditdialog_qbase_timer_event(void* self, void* event) {
    KFilePlaceEditDialog_QBaseTimerEvent((KFilePlaceEditDialog*)self, (QTimerEvent*)event);
}

void k_fileplaceeditdialog_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnTimerEvent((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_child_event(void* self, void* event) {
    KFilePlaceEditDialog_ChildEvent((KFilePlaceEditDialog*)self, (QChildEvent*)event);
}

void k_fileplaceeditdialog_qbase_child_event(void* self, void* event) {
    KFilePlaceEditDialog_QBaseChildEvent((KFilePlaceEditDialog*)self, (QChildEvent*)event);
}

void k_fileplaceeditdialog_on_child_event(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnChildEvent((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_custom_event(void* self, void* event) {
    KFilePlaceEditDialog_CustomEvent((KFilePlaceEditDialog*)self, (QEvent*)event);
}

void k_fileplaceeditdialog_qbase_custom_event(void* self, void* event) {
    KFilePlaceEditDialog_QBaseCustomEvent((KFilePlaceEditDialog*)self, (QEvent*)event);
}

void k_fileplaceeditdialog_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnCustomEvent((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_connect_notify(void* self, void* signal) {
    KFilePlaceEditDialog_ConnectNotify((KFilePlaceEditDialog*)self, (QMetaMethod*)signal);
}

void k_fileplaceeditdialog_qbase_connect_notify(void* self, void* signal) {
    KFilePlaceEditDialog_QBaseConnectNotify((KFilePlaceEditDialog*)self, (QMetaMethod*)signal);
}

void k_fileplaceeditdialog_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnConnectNotify((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_disconnect_notify(void* self, void* signal) {
    KFilePlaceEditDialog_DisconnectNotify((KFilePlaceEditDialog*)self, (QMetaMethod*)signal);
}

void k_fileplaceeditdialog_qbase_disconnect_notify(void* self, void* signal) {
    KFilePlaceEditDialog_QBaseDisconnectNotify((KFilePlaceEditDialog*)self, (QMetaMethod*)signal);
}

void k_fileplaceeditdialog_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnDisconnectNotify((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_adjust_position(void* self, void* param1) {
    KFilePlaceEditDialog_AdjustPosition((KFilePlaceEditDialog*)self, (QWidget*)param1);
}

void k_fileplaceeditdialog_qbase_adjust_position(void* self, void* param1) {
    KFilePlaceEditDialog_QBaseAdjustPosition((KFilePlaceEditDialog*)self, (QWidget*)param1);
}

void k_fileplaceeditdialog_on_adjust_position(void* self, void (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnAdjustPosition((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_update_micro_focus(void* self) {
    KFilePlaceEditDialog_UpdateMicroFocus((KFilePlaceEditDialog*)self);
}

void k_fileplaceeditdialog_qbase_update_micro_focus(void* self) {
    KFilePlaceEditDialog_QBaseUpdateMicroFocus((KFilePlaceEditDialog*)self);
}

void k_fileplaceeditdialog_on_update_micro_focus(void* self, void (*callback)()) {
    KFilePlaceEditDialog_OnUpdateMicroFocus((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_create(void* self) {
    KFilePlaceEditDialog_Create((KFilePlaceEditDialog*)self);
}

void k_fileplaceeditdialog_qbase_create(void* self) {
    KFilePlaceEditDialog_QBaseCreate((KFilePlaceEditDialog*)self);
}

void k_fileplaceeditdialog_on_create(void* self, void (*callback)()) {
    KFilePlaceEditDialog_OnCreate((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_destroy(void* self) {
    KFilePlaceEditDialog_Destroy((KFilePlaceEditDialog*)self);
}

void k_fileplaceeditdialog_qbase_destroy(void* self) {
    KFilePlaceEditDialog_QBaseDestroy((KFilePlaceEditDialog*)self);
}

void k_fileplaceeditdialog_on_destroy(void* self, void (*callback)()) {
    KFilePlaceEditDialog_OnDestroy((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

bool k_fileplaceeditdialog_focus_next_child(void* self) {
    return KFilePlaceEditDialog_FocusNextChild((KFilePlaceEditDialog*)self);
}

bool k_fileplaceeditdialog_qbase_focus_next_child(void* self) {
    return KFilePlaceEditDialog_QBaseFocusNextChild((KFilePlaceEditDialog*)self);
}

void k_fileplaceeditdialog_on_focus_next_child(void* self, bool (*callback)()) {
    KFilePlaceEditDialog_OnFocusNextChild((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

bool k_fileplaceeditdialog_focus_previous_child(void* self) {
    return KFilePlaceEditDialog_FocusPreviousChild((KFilePlaceEditDialog*)self);
}

bool k_fileplaceeditdialog_qbase_focus_previous_child(void* self) {
    return KFilePlaceEditDialog_QBaseFocusPreviousChild((KFilePlaceEditDialog*)self);
}

void k_fileplaceeditdialog_on_focus_previous_child(void* self, bool (*callback)()) {
    KFilePlaceEditDialog_OnFocusPreviousChild((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

QObject* k_fileplaceeditdialog_sender(void* self) {
    return KFilePlaceEditDialog_Sender((KFilePlaceEditDialog*)self);
}

QObject* k_fileplaceeditdialog_qbase_sender(void* self) {
    return KFilePlaceEditDialog_QBaseSender((KFilePlaceEditDialog*)self);
}

void k_fileplaceeditdialog_on_sender(void* self, QObject* (*callback)()) {
    KFilePlaceEditDialog_OnSender((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

int32_t k_fileplaceeditdialog_sender_signal_index(void* self) {
    return KFilePlaceEditDialog_SenderSignalIndex((KFilePlaceEditDialog*)self);
}

int32_t k_fileplaceeditdialog_qbase_sender_signal_index(void* self) {
    return KFilePlaceEditDialog_QBaseSenderSignalIndex((KFilePlaceEditDialog*)self);
}

void k_fileplaceeditdialog_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KFilePlaceEditDialog_OnSenderSignalIndex((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

int32_t k_fileplaceeditdialog_receivers(void* self, const char* signal) {
    return KFilePlaceEditDialog_Receivers((KFilePlaceEditDialog*)self, signal);
}

int32_t k_fileplaceeditdialog_qbase_receivers(void* self, const char* signal) {
    return KFilePlaceEditDialog_QBaseReceivers((KFilePlaceEditDialog*)self, signal);
}

void k_fileplaceeditdialog_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KFilePlaceEditDialog_OnReceivers((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

bool k_fileplaceeditdialog_is_signal_connected(void* self, void* signal) {
    return KFilePlaceEditDialog_IsSignalConnected((KFilePlaceEditDialog*)self, (QMetaMethod*)signal);
}

bool k_fileplaceeditdialog_qbase_is_signal_connected(void* self, void* signal) {
    return KFilePlaceEditDialog_QBaseIsSignalConnected((KFilePlaceEditDialog*)self, (QMetaMethod*)signal);
}

void k_fileplaceeditdialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KFilePlaceEditDialog_OnIsSignalConnected((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

double k_fileplaceeditdialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KFilePlaceEditDialog_GetDecodedMetricF((KFilePlaceEditDialog*)self, metricA, metricB);
}

double k_fileplaceeditdialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KFilePlaceEditDialog_QBaseGetDecodedMetricF((KFilePlaceEditDialog*)self, metricA, metricB);
}

void k_fileplaceeditdialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KFilePlaceEditDialog_OnGetDecodedMetricF((KFilePlaceEditDialog*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_fileplaceeditdialog_delete(void* self) {
    KFilePlaceEditDialog_Delete((KFilePlaceEditDialog*)(self));
}
