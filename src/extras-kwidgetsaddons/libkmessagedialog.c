#include "libkguiitem.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdialog.hpp"
#include "../libqicon.hpp"
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
#include "libkmessagedialog.hpp"
#include "libkmessagedialog.h"

KMessageDialog* k_messagedialog_new(int32_t type, const char* text) {
    return KMessageDialog_new(type, qstring(text));
}

KMessageDialog* k_messagedialog_new2(int32_t type, const char* text, uintptr_t parent_id) {
    return KMessageDialog_new2(type, qstring(text), parent_id);
}

KMessageDialog* k_messagedialog_new3(int32_t type, const char* text, void* parent) {
    return KMessageDialog_new3(type, qstring(text), (QWidget*)parent);
}

const QMetaObject* k_messagedialog_meta_object(void* self) {
    return KMessageDialog_MetaObject((KMessageDialog*)self);
}

void* k_messagedialog_metacast(void* self, const char* param1) {
    return KMessageDialog_Metacast((KMessageDialog*)self, param1);
}

int32_t k_messagedialog_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KMessageDialog_Metacall((KMessageDialog*)self, param1, param2, param3);
}

void k_messagedialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KMessageDialog_OnMetacall((KMessageDialog*)self, (intptr_t)callback);
}

int32_t k_messagedialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KMessageDialog_QBaseMetacall((KMessageDialog*)self, param1, param2, param3);
}

const char* k_messagedialog_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_messagedialog_set_caption(void* self, const char* caption) {
    KMessageDialog_SetCaption((KMessageDialog*)self, qstring(caption));
}

void k_messagedialog_set_icon(void* self, void* icon) {
    KMessageDialog_SetIcon((KMessageDialog*)self, (QIcon*)icon);
}

void k_messagedialog_set_list_widget_items(void* self, const char* strlist[static 1]) {
    size_t strlist_len = libqt_strv_length(strlist);
    libqt_string* strlist_qstr = (libqt_string*)malloc(strlist_len * sizeof(libqt_string));
    if (strlist_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_messagedialog_set_list_widget_items\n");
        abort();
    }
    for (size_t i = 0; i < strlist_len; ++i) {
        strlist_qstr[i] = qstring(strlist[i]);
    }
    libqt_list strlist_list = qlist(strlist_qstr, strlist_len);
    KMessageDialog_SetListWidgetItems((KMessageDialog*)self, strlist_list);
    free(strlist_qstr);
}

void k_messagedialog_set_details(void* self, const char* details) {
    KMessageDialog_SetDetails((KMessageDialog*)self, qstring(details));
}

void k_messagedialog_set_dont_ask_again_text(void* self, const char* dontAskAgainText) {
    KMessageDialog_SetDontAskAgainText((KMessageDialog*)self, qstring(dontAskAgainText));
}

void k_messagedialog_set_dont_ask_again_checked(void* self, bool isChecked) {
    KMessageDialog_SetDontAskAgainChecked((KMessageDialog*)self, isChecked);
}

bool k_messagedialog_is_dont_ask_again_checked(void* self) {
    return KMessageDialog_IsDontAskAgainChecked((KMessageDialog*)self);
}

void k_messagedialog_set_open_external_links(void* self, bool isAllowed) {
    KMessageDialog_SetOpenExternalLinks((KMessageDialog*)self, isAllowed);
}

bool k_messagedialog_is_notify_enabled(void* self) {
    return KMessageDialog_IsNotifyEnabled((KMessageDialog*)self);
}

void k_messagedialog_set_notify_enabled(void* self, bool enable) {
    KMessageDialog_SetNotifyEnabled((KMessageDialog*)self, enable);
}

void k_messagedialog_set_buttons(void* self) {
    KMessageDialog_SetButtons((KMessageDialog*)self);
}

void k_messagedialog_beep(int32_t type) {
    KMessageDialog_Beep(type);
}

void k_messagedialog_show_event(void* self, void* event) {
    KMessageDialog_ShowEvent((KMessageDialog*)self, (QShowEvent*)event);
}

void k_messagedialog_on_show_event(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnShowEvent((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_qbase_show_event(void* self, void* event) {
    KMessageDialog_QBaseShowEvent((KMessageDialog*)self, (QShowEvent*)event);
}

const char* k_messagedialog_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_messagedialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_messagedialog_set_buttons1(void* self, void* primaryAction) {
    KMessageDialog_SetButtons1((KMessageDialog*)self, (KGuiItem*)primaryAction);
}

void k_messagedialog_set_buttons2(void* self, void* primaryAction, void* secondaryAction) {
    KMessageDialog_SetButtons2((KMessageDialog*)self, (KGuiItem*)primaryAction, (KGuiItem*)secondaryAction);
}

void k_messagedialog_set_buttons3(void* self, void* primaryAction, void* secondaryAction, void* cancelAction) {
    KMessageDialog_SetButtons3((KMessageDialog*)self, (KGuiItem*)primaryAction, (KGuiItem*)secondaryAction, (KGuiItem*)cancelAction);
}

void k_messagedialog_beep2(int32_t type, const char* text) {
    KMessageDialog_Beep2(type, qstring(text));
}

void k_messagedialog_beep3(int32_t type, const char* text, void* dialog) {
    KMessageDialog_Beep3(type, qstring(text), (QWidget*)dialog);
}

int32_t k_messagedialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void k_messagedialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool k_messagedialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void k_messagedialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void k_messagedialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void k_messagedialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void k_messagedialog_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void k_messagedialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void k_messagedialog_on_accepted(void* self, void (*callback)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)callback);
}

void k_messagedialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void k_messagedialog_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

uintptr_t k_messagedialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_messagedialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_messagedialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_messagedialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_messagedialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_messagedialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_messagedialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_messagedialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_messagedialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_messagedialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_messagedialog_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_messagedialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_messagedialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_messagedialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_messagedialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_messagedialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_messagedialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_messagedialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_messagedialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_messagedialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_messagedialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_messagedialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_messagedialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_messagedialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_messagedialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_messagedialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_messagedialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_messagedialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_messagedialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_messagedialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_messagedialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_messagedialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_messagedialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_messagedialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_messagedialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_messagedialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_messagedialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_messagedialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_messagedialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_messagedialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_messagedialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_messagedialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_messagedialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_messagedialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_messagedialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_messagedialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_messagedialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_messagedialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_messagedialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_messagedialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_messagedialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_messagedialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_messagedialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_messagedialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_messagedialog_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_messagedialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_messagedialog_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_messagedialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_messagedialog_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_messagedialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_messagedialog_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_messagedialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_messagedialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_messagedialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_messagedialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_messagedialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_messagedialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_messagedialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_messagedialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_messagedialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_messagedialog_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_messagedialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_messagedialog_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_messagedialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_messagedialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_messagedialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_messagedialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_messagedialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_messagedialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_messagedialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_messagedialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_messagedialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_messagedialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_messagedialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_messagedialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_messagedialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_messagedialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_messagedialog_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_messagedialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_messagedialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_messagedialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_messagedialog_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_messagedialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_messagedialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_messagedialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_messagedialog_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_messagedialog_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_messagedialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_messagedialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_messagedialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_messagedialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_messagedialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_messagedialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_messagedialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_messagedialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_messagedialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_messagedialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_messagedialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_messagedialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_messagedialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_messagedialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_messagedialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_messagedialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_messagedialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_messagedialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_messagedialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_messagedialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_messagedialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_messagedialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_messagedialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_messagedialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_messagedialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_messagedialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_messagedialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_messagedialog_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_messagedialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_messagedialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_messagedialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_messagedialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_messagedialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_messagedialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_messagedialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_messagedialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_messagedialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_messagedialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_messagedialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_messagedialog_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_messagedialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_messagedialog_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_messagedialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_messagedialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_messagedialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_messagedialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_messagedialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_messagedialog_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_messagedialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_messagedialog_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_messagedialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_messagedialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_messagedialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_messagedialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_messagedialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_messagedialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_messagedialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_messagedialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_messagedialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_messagedialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_messagedialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_messagedialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_messagedialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_messagedialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_messagedialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_messagedialog_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_messagedialog_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_messagedialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_messagedialog_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_messagedialog_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_messagedialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_messagedialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_messagedialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_messagedialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_messagedialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_messagedialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_messagedialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_messagedialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_messagedialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_messagedialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_messagedialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_messagedialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_messagedialog_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_messagedialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_messagedialog_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_messagedialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_messagedialog_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_messagedialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_messagedialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_messagedialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_messagedialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_messagedialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_messagedialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_messagedialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_messagedialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_messagedialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_messagedialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_messagedialog_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_messagedialog_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_messagedialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_messagedialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_messagedialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_messagedialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_messagedialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_messagedialog_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_messagedialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_messagedialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_messagedialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_messagedialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_messagedialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_messagedialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_messagedialog_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_messagedialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_messagedialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_messagedialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_messagedialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_messagedialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_messagedialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_messagedialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_messagedialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_messagedialog_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_messagedialog_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_messagedialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_messagedialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_messagedialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_messagedialog_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_messagedialog_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_messagedialog_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_messagedialog_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_messagedialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_messagedialog_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_messagedialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_messagedialog_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_messagedialog_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_messagedialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_messagedialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_messagedialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_messagedialog_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_messagedialog_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_messagedialog_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_messagedialog_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_messagedialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_messagedialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_messagedialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_messagedialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_messagedialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_messagedialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_messagedialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_messagedialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_messagedialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_messagedialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_messagedialog_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_messagedialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_messagedialog_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_messagedialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_messagedialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_messagedialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_messagedialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_messagedialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_messagedialog_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_messagedialog_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_messagedialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_messagedialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_messagedialog_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_messagedialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_messagedialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_messagedialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_messagedialog_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_messagedialog_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_messagedialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_messagedialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_messagedialog_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_messagedialog_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_messagedialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_messagedialog_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_messagedialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_messagedialog_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_messagedialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_messagedialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_messagedialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_messagedialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_messagedialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_messagedialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_messagedialog_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_messagedialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_messagedialog_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_messagedialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_messagedialog_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_messagedialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_messagedialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_messagedialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_messagedialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_messagedialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_messagedialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_messagedialog_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_messagedialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_messagedialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_messagedialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_messagedialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_messagedialog_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_messagedialog_dynamic_property_names\n");
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

QBindingStorage* k_messagedialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_messagedialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_messagedialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_messagedialog_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_messagedialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_messagedialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_messagedialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_messagedialog_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_messagedialog_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_messagedialog_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_messagedialog_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_messagedialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_messagedialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_messagedialog_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_messagedialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_messagedialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_messagedialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_messagedialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_messagedialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_messagedialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_messagedialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_messagedialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_messagedialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_messagedialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_messagedialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_messagedialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_messagedialog_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_messagedialog_set_visible(void* self, bool visible) {
    KMessageDialog_SetVisible((KMessageDialog*)self, visible);
}

void k_messagedialog_qbase_set_visible(void* self, bool visible) {
    KMessageDialog_QBaseSetVisible((KMessageDialog*)self, visible);
}

void k_messagedialog_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KMessageDialog_OnSetVisible((KMessageDialog*)self, (intptr_t)callback);
}

QSize* k_messagedialog_size_hint(void* self) {
    return KMessageDialog_SizeHint((KMessageDialog*)self);
}

QSize* k_messagedialog_qbase_size_hint(void* self) {
    return KMessageDialog_QBaseSizeHint((KMessageDialog*)self);
}

void k_messagedialog_on_size_hint(void* self, QSize* (*callback)()) {
    KMessageDialog_OnSizeHint((KMessageDialog*)self, (intptr_t)callback);
}

QSize* k_messagedialog_minimum_size_hint(void* self) {
    return KMessageDialog_MinimumSizeHint((KMessageDialog*)self);
}

QSize* k_messagedialog_qbase_minimum_size_hint(void* self) {
    return KMessageDialog_QBaseMinimumSizeHint((KMessageDialog*)self);
}

void k_messagedialog_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KMessageDialog_OnMinimumSizeHint((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_open(void* self) {
    KMessageDialog_Open((KMessageDialog*)self);
}

void k_messagedialog_qbase_open(void* self) {
    KMessageDialog_QBaseOpen((KMessageDialog*)self);
}

void k_messagedialog_on_open(void* self, void (*callback)()) {
    KMessageDialog_OnOpen((KMessageDialog*)self, (intptr_t)callback);
}

int32_t k_messagedialog_exec(void* self) {
    return KMessageDialog_Exec((KMessageDialog*)self);
}

int32_t k_messagedialog_qbase_exec(void* self) {
    return KMessageDialog_QBaseExec((KMessageDialog*)self);
}

void k_messagedialog_on_exec(void* self, int32_t (*callback)()) {
    KMessageDialog_OnExec((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_done(void* self, int param1) {
    KMessageDialog_Done((KMessageDialog*)self, param1);
}

void k_messagedialog_qbase_done(void* self, int param1) {
    KMessageDialog_QBaseDone((KMessageDialog*)self, param1);
}

void k_messagedialog_on_done(void* self, void (*callback)(void*, int)) {
    KMessageDialog_OnDone((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_accept(void* self) {
    KMessageDialog_Accept((KMessageDialog*)self);
}

void k_messagedialog_qbase_accept(void* self) {
    KMessageDialog_QBaseAccept((KMessageDialog*)self);
}

void k_messagedialog_on_accept(void* self, void (*callback)()) {
    KMessageDialog_OnAccept((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_reject(void* self) {
    KMessageDialog_Reject((KMessageDialog*)self);
}

void k_messagedialog_qbase_reject(void* self) {
    KMessageDialog_QBaseReject((KMessageDialog*)self);
}

void k_messagedialog_on_reject(void* self, void (*callback)()) {
    KMessageDialog_OnReject((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_key_press_event(void* self, void* param1) {
    KMessageDialog_KeyPressEvent((KMessageDialog*)self, (QKeyEvent*)param1);
}

void k_messagedialog_qbase_key_press_event(void* self, void* param1) {
    KMessageDialog_QBaseKeyPressEvent((KMessageDialog*)self, (QKeyEvent*)param1);
}

void k_messagedialog_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnKeyPressEvent((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_close_event(void* self, void* param1) {
    KMessageDialog_CloseEvent((KMessageDialog*)self, (QCloseEvent*)param1);
}

void k_messagedialog_qbase_close_event(void* self, void* param1) {
    KMessageDialog_QBaseCloseEvent((KMessageDialog*)self, (QCloseEvent*)param1);
}

void k_messagedialog_on_close_event(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnCloseEvent((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_resize_event(void* self, void* param1) {
    KMessageDialog_ResizeEvent((KMessageDialog*)self, (QResizeEvent*)param1);
}

void k_messagedialog_qbase_resize_event(void* self, void* param1) {
    KMessageDialog_QBaseResizeEvent((KMessageDialog*)self, (QResizeEvent*)param1);
}

void k_messagedialog_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnResizeEvent((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_context_menu_event(void* self, void* param1) {
    KMessageDialog_ContextMenuEvent((KMessageDialog*)self, (QContextMenuEvent*)param1);
}

void k_messagedialog_qbase_context_menu_event(void* self, void* param1) {
    KMessageDialog_QBaseContextMenuEvent((KMessageDialog*)self, (QContextMenuEvent*)param1);
}

void k_messagedialog_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnContextMenuEvent((KMessageDialog*)self, (intptr_t)callback);
}

bool k_messagedialog_event_filter(void* self, void* param1, void* param2) {
    return KMessageDialog_EventFilter((KMessageDialog*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_messagedialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return KMessageDialog_QBaseEventFilter((KMessageDialog*)self, (QObject*)param1, (QEvent*)param2);
}

void k_messagedialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KMessageDialog_OnEventFilter((KMessageDialog*)self, (intptr_t)callback);
}

int32_t k_messagedialog_dev_type(void* self) {
    return KMessageDialog_DevType((KMessageDialog*)self);
}

int32_t k_messagedialog_qbase_dev_type(void* self) {
    return KMessageDialog_QBaseDevType((KMessageDialog*)self);
}

void k_messagedialog_on_dev_type(void* self, int32_t (*callback)()) {
    KMessageDialog_OnDevType((KMessageDialog*)self, (intptr_t)callback);
}

int32_t k_messagedialog_height_for_width(void* self, int param1) {
    return KMessageDialog_HeightForWidth((KMessageDialog*)self, param1);
}

int32_t k_messagedialog_qbase_height_for_width(void* self, int param1) {
    return KMessageDialog_QBaseHeightForWidth((KMessageDialog*)self, param1);
}

void k_messagedialog_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KMessageDialog_OnHeightForWidth((KMessageDialog*)self, (intptr_t)callback);
}

bool k_messagedialog_has_height_for_width(void* self) {
    return KMessageDialog_HasHeightForWidth((KMessageDialog*)self);
}

bool k_messagedialog_qbase_has_height_for_width(void* self) {
    return KMessageDialog_QBaseHasHeightForWidth((KMessageDialog*)self);
}

void k_messagedialog_on_has_height_for_width(void* self, bool (*callback)()) {
    KMessageDialog_OnHasHeightForWidth((KMessageDialog*)self, (intptr_t)callback);
}

QPaintEngine* k_messagedialog_paint_engine(void* self) {
    return KMessageDialog_PaintEngine((KMessageDialog*)self);
}

QPaintEngine* k_messagedialog_qbase_paint_engine(void* self) {
    return KMessageDialog_QBasePaintEngine((KMessageDialog*)self);
}

void k_messagedialog_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KMessageDialog_OnPaintEngine((KMessageDialog*)self, (intptr_t)callback);
}

bool k_messagedialog_event(void* self, void* event) {
    return KMessageDialog_Event((KMessageDialog*)self, (QEvent*)event);
}

bool k_messagedialog_qbase_event(void* self, void* event) {
    return KMessageDialog_QBaseEvent((KMessageDialog*)self, (QEvent*)event);
}

void k_messagedialog_on_event(void* self, bool (*callback)(void*, void*)) {
    KMessageDialog_OnEvent((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_mouse_press_event(void* self, void* event) {
    KMessageDialog_MousePressEvent((KMessageDialog*)self, (QMouseEvent*)event);
}

void k_messagedialog_qbase_mouse_press_event(void* self, void* event) {
    KMessageDialog_QBaseMousePressEvent((KMessageDialog*)self, (QMouseEvent*)event);
}

void k_messagedialog_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnMousePressEvent((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_mouse_release_event(void* self, void* event) {
    KMessageDialog_MouseReleaseEvent((KMessageDialog*)self, (QMouseEvent*)event);
}

void k_messagedialog_qbase_mouse_release_event(void* self, void* event) {
    KMessageDialog_QBaseMouseReleaseEvent((KMessageDialog*)self, (QMouseEvent*)event);
}

void k_messagedialog_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnMouseReleaseEvent((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_mouse_double_click_event(void* self, void* event) {
    KMessageDialog_MouseDoubleClickEvent((KMessageDialog*)self, (QMouseEvent*)event);
}

void k_messagedialog_qbase_mouse_double_click_event(void* self, void* event) {
    KMessageDialog_QBaseMouseDoubleClickEvent((KMessageDialog*)self, (QMouseEvent*)event);
}

void k_messagedialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnMouseDoubleClickEvent((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_mouse_move_event(void* self, void* event) {
    KMessageDialog_MouseMoveEvent((KMessageDialog*)self, (QMouseEvent*)event);
}

void k_messagedialog_qbase_mouse_move_event(void* self, void* event) {
    KMessageDialog_QBaseMouseMoveEvent((KMessageDialog*)self, (QMouseEvent*)event);
}

void k_messagedialog_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnMouseMoveEvent((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_wheel_event(void* self, void* event) {
    KMessageDialog_WheelEvent((KMessageDialog*)self, (QWheelEvent*)event);
}

void k_messagedialog_qbase_wheel_event(void* self, void* event) {
    KMessageDialog_QBaseWheelEvent((KMessageDialog*)self, (QWheelEvent*)event);
}

void k_messagedialog_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnWheelEvent((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_key_release_event(void* self, void* event) {
    KMessageDialog_KeyReleaseEvent((KMessageDialog*)self, (QKeyEvent*)event);
}

void k_messagedialog_qbase_key_release_event(void* self, void* event) {
    KMessageDialog_QBaseKeyReleaseEvent((KMessageDialog*)self, (QKeyEvent*)event);
}

void k_messagedialog_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnKeyReleaseEvent((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_focus_in_event(void* self, void* event) {
    KMessageDialog_FocusInEvent((KMessageDialog*)self, (QFocusEvent*)event);
}

void k_messagedialog_qbase_focus_in_event(void* self, void* event) {
    KMessageDialog_QBaseFocusInEvent((KMessageDialog*)self, (QFocusEvent*)event);
}

void k_messagedialog_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnFocusInEvent((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_focus_out_event(void* self, void* event) {
    KMessageDialog_FocusOutEvent((KMessageDialog*)self, (QFocusEvent*)event);
}

void k_messagedialog_qbase_focus_out_event(void* self, void* event) {
    KMessageDialog_QBaseFocusOutEvent((KMessageDialog*)self, (QFocusEvent*)event);
}

void k_messagedialog_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnFocusOutEvent((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_enter_event(void* self, void* event) {
    KMessageDialog_EnterEvent((KMessageDialog*)self, (QEnterEvent*)event);
}

void k_messagedialog_qbase_enter_event(void* self, void* event) {
    KMessageDialog_QBaseEnterEvent((KMessageDialog*)self, (QEnterEvent*)event);
}

void k_messagedialog_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnEnterEvent((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_leave_event(void* self, void* event) {
    KMessageDialog_LeaveEvent((KMessageDialog*)self, (QEvent*)event);
}

void k_messagedialog_qbase_leave_event(void* self, void* event) {
    KMessageDialog_QBaseLeaveEvent((KMessageDialog*)self, (QEvent*)event);
}

void k_messagedialog_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnLeaveEvent((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_paint_event(void* self, void* event) {
    KMessageDialog_PaintEvent((KMessageDialog*)self, (QPaintEvent*)event);
}

void k_messagedialog_qbase_paint_event(void* self, void* event) {
    KMessageDialog_QBasePaintEvent((KMessageDialog*)self, (QPaintEvent*)event);
}

void k_messagedialog_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnPaintEvent((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_move_event(void* self, void* event) {
    KMessageDialog_MoveEvent((KMessageDialog*)self, (QMoveEvent*)event);
}

void k_messagedialog_qbase_move_event(void* self, void* event) {
    KMessageDialog_QBaseMoveEvent((KMessageDialog*)self, (QMoveEvent*)event);
}

void k_messagedialog_on_move_event(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnMoveEvent((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_tablet_event(void* self, void* event) {
    KMessageDialog_TabletEvent((KMessageDialog*)self, (QTabletEvent*)event);
}

void k_messagedialog_qbase_tablet_event(void* self, void* event) {
    KMessageDialog_QBaseTabletEvent((KMessageDialog*)self, (QTabletEvent*)event);
}

void k_messagedialog_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnTabletEvent((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_action_event(void* self, void* event) {
    KMessageDialog_ActionEvent((KMessageDialog*)self, (QActionEvent*)event);
}

void k_messagedialog_qbase_action_event(void* self, void* event) {
    KMessageDialog_QBaseActionEvent((KMessageDialog*)self, (QActionEvent*)event);
}

void k_messagedialog_on_action_event(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnActionEvent((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_drag_enter_event(void* self, void* event) {
    KMessageDialog_DragEnterEvent((KMessageDialog*)self, (QDragEnterEvent*)event);
}

void k_messagedialog_qbase_drag_enter_event(void* self, void* event) {
    KMessageDialog_QBaseDragEnterEvent((KMessageDialog*)self, (QDragEnterEvent*)event);
}

void k_messagedialog_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnDragEnterEvent((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_drag_move_event(void* self, void* event) {
    KMessageDialog_DragMoveEvent((KMessageDialog*)self, (QDragMoveEvent*)event);
}

void k_messagedialog_qbase_drag_move_event(void* self, void* event) {
    KMessageDialog_QBaseDragMoveEvent((KMessageDialog*)self, (QDragMoveEvent*)event);
}

void k_messagedialog_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnDragMoveEvent((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_drag_leave_event(void* self, void* event) {
    KMessageDialog_DragLeaveEvent((KMessageDialog*)self, (QDragLeaveEvent*)event);
}

void k_messagedialog_qbase_drag_leave_event(void* self, void* event) {
    KMessageDialog_QBaseDragLeaveEvent((KMessageDialog*)self, (QDragLeaveEvent*)event);
}

void k_messagedialog_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnDragLeaveEvent((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_drop_event(void* self, void* event) {
    KMessageDialog_DropEvent((KMessageDialog*)self, (QDropEvent*)event);
}

void k_messagedialog_qbase_drop_event(void* self, void* event) {
    KMessageDialog_QBaseDropEvent((KMessageDialog*)self, (QDropEvent*)event);
}

void k_messagedialog_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnDropEvent((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_hide_event(void* self, void* event) {
    KMessageDialog_HideEvent((KMessageDialog*)self, (QHideEvent*)event);
}

void k_messagedialog_qbase_hide_event(void* self, void* event) {
    KMessageDialog_QBaseHideEvent((KMessageDialog*)self, (QHideEvent*)event);
}

void k_messagedialog_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnHideEvent((KMessageDialog*)self, (intptr_t)callback);
}

bool k_messagedialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KMessageDialog_NativeEvent((KMessageDialog*)self, qstring(eventType), message, result);
}

bool k_messagedialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KMessageDialog_QBaseNativeEvent((KMessageDialog*)self, qstring(eventType), message, result);
}

void k_messagedialog_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KMessageDialog_OnNativeEvent((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_change_event(void* self, void* param1) {
    KMessageDialog_ChangeEvent((KMessageDialog*)self, (QEvent*)param1);
}

void k_messagedialog_qbase_change_event(void* self, void* param1) {
    KMessageDialog_QBaseChangeEvent((KMessageDialog*)self, (QEvent*)param1);
}

void k_messagedialog_on_change_event(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnChangeEvent((KMessageDialog*)self, (intptr_t)callback);
}

int32_t k_messagedialog_metric(void* self, int32_t param1) {
    return KMessageDialog_Metric((KMessageDialog*)self, param1);
}

int32_t k_messagedialog_qbase_metric(void* self, int32_t param1) {
    return KMessageDialog_QBaseMetric((KMessageDialog*)self, param1);
}

void k_messagedialog_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KMessageDialog_OnMetric((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_init_painter(void* self, void* painter) {
    KMessageDialog_InitPainter((KMessageDialog*)self, (QPainter*)painter);
}

void k_messagedialog_qbase_init_painter(void* self, void* painter) {
    KMessageDialog_QBaseInitPainter((KMessageDialog*)self, (QPainter*)painter);
}

void k_messagedialog_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnInitPainter((KMessageDialog*)self, (intptr_t)callback);
}

QPaintDevice* k_messagedialog_redirected(void* self, void* offset) {
    return KMessageDialog_Redirected((KMessageDialog*)self, (QPoint*)offset);
}

QPaintDevice* k_messagedialog_qbase_redirected(void* self, void* offset) {
    return KMessageDialog_QBaseRedirected((KMessageDialog*)self, (QPoint*)offset);
}

void k_messagedialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KMessageDialog_OnRedirected((KMessageDialog*)self, (intptr_t)callback);
}

QPainter* k_messagedialog_shared_painter(void* self) {
    return KMessageDialog_SharedPainter((KMessageDialog*)self);
}

QPainter* k_messagedialog_qbase_shared_painter(void* self) {
    return KMessageDialog_QBaseSharedPainter((KMessageDialog*)self);
}

void k_messagedialog_on_shared_painter(void* self, QPainter* (*callback)()) {
    KMessageDialog_OnSharedPainter((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_input_method_event(void* self, void* param1) {
    KMessageDialog_InputMethodEvent((KMessageDialog*)self, (QInputMethodEvent*)param1);
}

void k_messagedialog_qbase_input_method_event(void* self, void* param1) {
    KMessageDialog_QBaseInputMethodEvent((KMessageDialog*)self, (QInputMethodEvent*)param1);
}

void k_messagedialog_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnInputMethodEvent((KMessageDialog*)self, (intptr_t)callback);
}

QVariant* k_messagedialog_input_method_query(void* self, int32_t param1) {
    return KMessageDialog_InputMethodQuery((KMessageDialog*)self, param1);
}

QVariant* k_messagedialog_qbase_input_method_query(void* self, int32_t param1) {
    return KMessageDialog_QBaseInputMethodQuery((KMessageDialog*)self, param1);
}

void k_messagedialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KMessageDialog_OnInputMethodQuery((KMessageDialog*)self, (intptr_t)callback);
}

bool k_messagedialog_focus_next_prev_child(void* self, bool next) {
    return KMessageDialog_FocusNextPrevChild((KMessageDialog*)self, next);
}

bool k_messagedialog_qbase_focus_next_prev_child(void* self, bool next) {
    return KMessageDialog_QBaseFocusNextPrevChild((KMessageDialog*)self, next);
}

void k_messagedialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KMessageDialog_OnFocusNextPrevChild((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_timer_event(void* self, void* event) {
    KMessageDialog_TimerEvent((KMessageDialog*)self, (QTimerEvent*)event);
}

void k_messagedialog_qbase_timer_event(void* self, void* event) {
    KMessageDialog_QBaseTimerEvent((KMessageDialog*)self, (QTimerEvent*)event);
}

void k_messagedialog_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnTimerEvent((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_child_event(void* self, void* event) {
    KMessageDialog_ChildEvent((KMessageDialog*)self, (QChildEvent*)event);
}

void k_messagedialog_qbase_child_event(void* self, void* event) {
    KMessageDialog_QBaseChildEvent((KMessageDialog*)self, (QChildEvent*)event);
}

void k_messagedialog_on_child_event(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnChildEvent((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_custom_event(void* self, void* event) {
    KMessageDialog_CustomEvent((KMessageDialog*)self, (QEvent*)event);
}

void k_messagedialog_qbase_custom_event(void* self, void* event) {
    KMessageDialog_QBaseCustomEvent((KMessageDialog*)self, (QEvent*)event);
}

void k_messagedialog_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnCustomEvent((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_connect_notify(void* self, void* signal) {
    KMessageDialog_ConnectNotify((KMessageDialog*)self, (QMetaMethod*)signal);
}

void k_messagedialog_qbase_connect_notify(void* self, void* signal) {
    KMessageDialog_QBaseConnectNotify((KMessageDialog*)self, (QMetaMethod*)signal);
}

void k_messagedialog_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnConnectNotify((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_disconnect_notify(void* self, void* signal) {
    KMessageDialog_DisconnectNotify((KMessageDialog*)self, (QMetaMethod*)signal);
}

void k_messagedialog_qbase_disconnect_notify(void* self, void* signal) {
    KMessageDialog_QBaseDisconnectNotify((KMessageDialog*)self, (QMetaMethod*)signal);
}

void k_messagedialog_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnDisconnectNotify((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_adjust_position(void* self, void* param1) {
    KMessageDialog_AdjustPosition((KMessageDialog*)self, (QWidget*)param1);
}

void k_messagedialog_qbase_adjust_position(void* self, void* param1) {
    KMessageDialog_QBaseAdjustPosition((KMessageDialog*)self, (QWidget*)param1);
}

void k_messagedialog_on_adjust_position(void* self, void (*callback)(void*, void*)) {
    KMessageDialog_OnAdjustPosition((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_update_micro_focus(void* self) {
    KMessageDialog_UpdateMicroFocus((KMessageDialog*)self);
}

void k_messagedialog_qbase_update_micro_focus(void* self) {
    KMessageDialog_QBaseUpdateMicroFocus((KMessageDialog*)self);
}

void k_messagedialog_on_update_micro_focus(void* self, void (*callback)()) {
    KMessageDialog_OnUpdateMicroFocus((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_create(void* self) {
    KMessageDialog_Create((KMessageDialog*)self);
}

void k_messagedialog_qbase_create(void* self) {
    KMessageDialog_QBaseCreate((KMessageDialog*)self);
}

void k_messagedialog_on_create(void* self, void (*callback)()) {
    KMessageDialog_OnCreate((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_destroy(void* self) {
    KMessageDialog_Destroy((KMessageDialog*)self);
}

void k_messagedialog_qbase_destroy(void* self) {
    KMessageDialog_QBaseDestroy((KMessageDialog*)self);
}

void k_messagedialog_on_destroy(void* self, void (*callback)()) {
    KMessageDialog_OnDestroy((KMessageDialog*)self, (intptr_t)callback);
}

bool k_messagedialog_focus_next_child(void* self) {
    return KMessageDialog_FocusNextChild((KMessageDialog*)self);
}

bool k_messagedialog_qbase_focus_next_child(void* self) {
    return KMessageDialog_QBaseFocusNextChild((KMessageDialog*)self);
}

void k_messagedialog_on_focus_next_child(void* self, bool (*callback)()) {
    KMessageDialog_OnFocusNextChild((KMessageDialog*)self, (intptr_t)callback);
}

bool k_messagedialog_focus_previous_child(void* self) {
    return KMessageDialog_FocusPreviousChild((KMessageDialog*)self);
}

bool k_messagedialog_qbase_focus_previous_child(void* self) {
    return KMessageDialog_QBaseFocusPreviousChild((KMessageDialog*)self);
}

void k_messagedialog_on_focus_previous_child(void* self, bool (*callback)()) {
    KMessageDialog_OnFocusPreviousChild((KMessageDialog*)self, (intptr_t)callback);
}

QObject* k_messagedialog_sender(void* self) {
    return KMessageDialog_Sender((KMessageDialog*)self);
}

QObject* k_messagedialog_qbase_sender(void* self) {
    return KMessageDialog_QBaseSender((KMessageDialog*)self);
}

void k_messagedialog_on_sender(void* self, QObject* (*callback)()) {
    KMessageDialog_OnSender((KMessageDialog*)self, (intptr_t)callback);
}

int32_t k_messagedialog_sender_signal_index(void* self) {
    return KMessageDialog_SenderSignalIndex((KMessageDialog*)self);
}

int32_t k_messagedialog_qbase_sender_signal_index(void* self) {
    return KMessageDialog_QBaseSenderSignalIndex((KMessageDialog*)self);
}

void k_messagedialog_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KMessageDialog_OnSenderSignalIndex((KMessageDialog*)self, (intptr_t)callback);
}

int32_t k_messagedialog_receivers(void* self, const char* signal) {
    return KMessageDialog_Receivers((KMessageDialog*)self, signal);
}

int32_t k_messagedialog_qbase_receivers(void* self, const char* signal) {
    return KMessageDialog_QBaseReceivers((KMessageDialog*)self, signal);
}

void k_messagedialog_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KMessageDialog_OnReceivers((KMessageDialog*)self, (intptr_t)callback);
}

bool k_messagedialog_is_signal_connected(void* self, void* signal) {
    return KMessageDialog_IsSignalConnected((KMessageDialog*)self, (QMetaMethod*)signal);
}

bool k_messagedialog_qbase_is_signal_connected(void* self, void* signal) {
    return KMessageDialog_QBaseIsSignalConnected((KMessageDialog*)self, (QMetaMethod*)signal);
}

void k_messagedialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KMessageDialog_OnIsSignalConnected((KMessageDialog*)self, (intptr_t)callback);
}

double k_messagedialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KMessageDialog_GetDecodedMetricF((KMessageDialog*)self, metricA, metricB);
}

double k_messagedialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KMessageDialog_QBaseGetDecodedMetricF((KMessageDialog*)self, metricA, metricB);
}

void k_messagedialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KMessageDialog_OnGetDecodedMetricF((KMessageDialog*)self, (intptr_t)callback);
}

void k_messagedialog_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_messagedialog_delete(void* self) {
    KMessageDialog_Delete((KMessageDialog*)(self));
}
