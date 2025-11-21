#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "libqpdfdocument.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libqpdfpageselector.hpp"
#include "libqpdfpageselector.h"

QPdfPageSelector* q_pdfpageselector_new(void* parent) {
    return QPdfPageSelector_new((QWidget*)parent);
}

QPdfPageSelector* q_pdfpageselector_new2() {
    return QPdfPageSelector_new2();
}

const QMetaObject* q_pdfpageselector_meta_object(void* self) {
    return QPdfPageSelector_MetaObject((QPdfPageSelector*)self);
}

void* q_pdfpageselector_metacast(void* self, const char* param1) {
    return QPdfPageSelector_Metacast((QPdfPageSelector*)self, param1);
}

int32_t q_pdfpageselector_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPdfPageSelector_Metacall((QPdfPageSelector*)self, param1, param2, param3);
}

void q_pdfpageselector_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QPdfPageSelector_OnMetacall((QPdfPageSelector*)self, (intptr_t)callback);
}

int32_t q_pdfpageselector_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPdfPageSelector_QBaseMetacall((QPdfPageSelector*)self, param1, param2, param3);
}

const char* q_pdfpageselector_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfpageselector_set_document(void* self, void* document) {
    QPdfPageSelector_SetDocument((QPdfPageSelector*)self, (QPdfDocument*)document);
}

QPdfDocument* q_pdfpageselector_document(void* self) {
    return QPdfPageSelector_Document((QPdfPageSelector*)self);
}

int32_t q_pdfpageselector_current_page(void* self) {
    return QPdfPageSelector_CurrentPage((QPdfPageSelector*)self);
}

const char* q_pdfpageselector_current_page_label(void* self) {
    libqt_string _str = QPdfPageSelector_CurrentPageLabel((QPdfPageSelector*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfpageselector_set_current_page(void* self, int index) {
    QPdfPageSelector_SetCurrentPage((QPdfPageSelector*)self, index);
}

void q_pdfpageselector_document_changed(void* self, void* document) {
    QPdfPageSelector_DocumentChanged((QPdfPageSelector*)self, (QPdfDocument*)document);
}

void q_pdfpageselector_on_document_changed(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_Connect_DocumentChanged((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_current_page_changed(void* self, int index) {
    QPdfPageSelector_CurrentPageChanged((QPdfPageSelector*)self, index);
}

void q_pdfpageselector_on_current_page_changed(void* self, void (*callback)(void*, int)) {
    QPdfPageSelector_Connect_CurrentPageChanged((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_current_page_label_changed(void* self, const char* label) {
    QPdfPageSelector_CurrentPageLabelChanged((QPdfPageSelector*)self, qstring(label));
}

void q_pdfpageselector_on_current_page_label_changed(void* self, void (*callback)(void*, const char*)) {
    QPdfPageSelector_Connect_CurrentPageLabelChanged((QPdfPageSelector*)self, (intptr_t)callback);
}

const char* q_pdfpageselector_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pdfpageselector_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t q_pdfpageselector_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_pdfpageselector_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_pdfpageselector_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_pdfpageselector_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_pdfpageselector_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_pdfpageselector_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_pdfpageselector_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_pdfpageselector_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_pdfpageselector_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_pdfpageselector_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_pdfpageselector_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_pdfpageselector_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_pdfpageselector_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_pdfpageselector_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_pdfpageselector_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_pdfpageselector_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_pdfpageselector_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_pdfpageselector_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_pdfpageselector_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_pdfpageselector_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_pdfpageselector_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_pdfpageselector_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_pdfpageselector_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_pdfpageselector_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_pdfpageselector_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_pdfpageselector_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_pdfpageselector_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_pdfpageselector_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_pdfpageselector_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_pdfpageselector_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_pdfpageselector_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_pdfpageselector_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_pdfpageselector_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_pdfpageselector_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_pdfpageselector_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_pdfpageselector_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_pdfpageselector_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_pdfpageselector_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_pdfpageselector_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_pdfpageselector_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_pdfpageselector_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_pdfpageselector_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_pdfpageselector_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_pdfpageselector_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_pdfpageselector_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_pdfpageselector_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_pdfpageselector_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_pdfpageselector_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_pdfpageselector_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_pdfpageselector_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_pdfpageselector_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_pdfpageselector_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_pdfpageselector_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_pdfpageselector_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_pdfpageselector_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_pdfpageselector_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_pdfpageselector_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_pdfpageselector_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_pdfpageselector_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_pdfpageselector_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_pdfpageselector_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_pdfpageselector_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_pdfpageselector_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_pdfpageselector_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_pdfpageselector_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_pdfpageselector_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_pdfpageselector_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_pdfpageselector_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_pdfpageselector_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_pdfpageselector_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_pdfpageselector_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_pdfpageselector_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_pdfpageselector_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_pdfpageselector_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_pdfpageselector_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_pdfpageselector_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_pdfpageselector_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_pdfpageselector_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_pdfpageselector_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_pdfpageselector_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_pdfpageselector_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_pdfpageselector_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_pdfpageselector_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_pdfpageselector_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_pdfpageselector_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_pdfpageselector_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_pdfpageselector_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_pdfpageselector_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_pdfpageselector_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_pdfpageselector_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_pdfpageselector_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_pdfpageselector_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_pdfpageselector_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_pdfpageselector_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_pdfpageselector_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_pdfpageselector_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_pdfpageselector_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_pdfpageselector_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_pdfpageselector_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_pdfpageselector_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pdfpageselector_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfpageselector_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_pdfpageselector_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_pdfpageselector_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_pdfpageselector_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfpageselector_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_pdfpageselector_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfpageselector_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_pdfpageselector_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfpageselector_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_pdfpageselector_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_pdfpageselector_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_pdfpageselector_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_pdfpageselector_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfpageselector_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_pdfpageselector_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_pdfpageselector_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_pdfpageselector_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfpageselector_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_pdfpageselector_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pdfpageselector_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfpageselector_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_pdfpageselector_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfpageselector_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_pdfpageselector_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_pdfpageselector_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_pdfpageselector_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_pdfpageselector_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_pdfpageselector_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_pdfpageselector_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_pdfpageselector_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_pdfpageselector_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_pdfpageselector_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_pdfpageselector_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_pdfpageselector_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_pdfpageselector_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_pdfpageselector_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_pdfpageselector_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_pdfpageselector_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_pdfpageselector_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_pdfpageselector_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_pdfpageselector_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_pdfpageselector_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_pdfpageselector_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_pdfpageselector_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_pdfpageselector_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_pdfpageselector_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_pdfpageselector_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_pdfpageselector_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_pdfpageselector_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_pdfpageselector_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_pdfpageselector_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_pdfpageselector_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_pdfpageselector_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_pdfpageselector_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_pdfpageselector_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_pdfpageselector_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_pdfpageselector_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_pdfpageselector_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_pdfpageselector_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_pdfpageselector_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_pdfpageselector_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_pdfpageselector_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_pdfpageselector_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_pdfpageselector_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_pdfpageselector_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_pdfpageselector_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_pdfpageselector_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_pdfpageselector_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_pdfpageselector_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_pdfpageselector_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_pdfpageselector_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_pdfpageselector_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_pdfpageselector_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_pdfpageselector_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_pdfpageselector_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_pdfpageselector_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_pdfpageselector_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_pdfpageselector_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_pdfpageselector_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_pdfpageselector_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_pdfpageselector_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_pdfpageselector_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_pdfpageselector_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_pdfpageselector_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_pdfpageselector_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_pdfpageselector_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_pdfpageselector_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_pdfpageselector_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_pdfpageselector_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_pdfpageselector_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_pdfpageselector_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_pdfpageselector_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_pdfpageselector_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_pdfpageselector_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_pdfpageselector_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_pdfpageselector_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_pdfpageselector_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_pdfpageselector_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_pdfpageselector_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_pdfpageselector_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_pdfpageselector_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_pdfpageselector_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_pdfpageselector_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_pdfpageselector_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_pdfpageselector_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_pdfpageselector_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_pdfpageselector_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_pdfpageselector_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_pdfpageselector_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_pdfpageselector_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_pdfpageselector_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_pdfpageselector_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_pdfpageselector_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_pdfpageselector_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_pdfpageselector_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_pdfpageselector_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_pdfpageselector_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_pdfpageselector_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_pdfpageselector_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_pdfpageselector_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_pdfpageselector_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_pdfpageselector_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_pdfpageselector_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_pdfpageselector_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_pdfpageselector_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_pdfpageselector_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_pdfpageselector_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t q_pdfpageselector_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_pdfpageselector_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_pdfpageselector_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t q_pdfpageselector_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_pdfpageselector_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_pdfpageselector_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_pdfpageselector_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_pdfpageselector_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_pdfpageselector_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_pdfpageselector_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_pdfpageselector_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_pdfpageselector_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_pdfpageselector_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_pdfpageselector_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_pdfpageselector_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_pdfpageselector_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_pdfpageselector_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_pdfpageselector_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_pdfpageselector_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_pdfpageselector_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_pdfpageselector_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_pdfpageselector_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_pdfpageselector_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_pdfpageselector_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_pdfpageselector_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_pdfpageselector_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_pdfpageselector_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t q_pdfpageselector_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_pdfpageselector_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_pdfpageselector_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_pdfpageselector_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_pdfpageselector_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_pdfpageselector_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_pdfpageselector_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_pdfpageselector_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_pdfpageselector_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_pdfpageselector_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_pdfpageselector_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_pdfpageselector_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_pdfpageselector_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_pdfpageselector_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_pdfpageselector_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_pdfpageselector_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_pdfpageselector_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_pdfpageselector_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfpageselector_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_pdfpageselector_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_pdfpageselector_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_pdfpageselector_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_pdfpageselector_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_pdfpageselector_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_pdfpageselector_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_pdfpageselector_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_pdfpageselector_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_pdfpageselector_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_pdfpageselector_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_pdfpageselector_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_pdfpageselector_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_pdfpageselector_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_pdfpageselector_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_pdfpageselector_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_pdfpageselector_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_pdfpageselector_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_pdfpageselector_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_pdfpageselector_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_pdfpageselector_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_pdfpageselector_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_pdfpageselector_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_pdfpageselector_dynamic_property_names");
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

QBindingStorage* q_pdfpageselector_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_pdfpageselector_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_pdfpageselector_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_pdfpageselector_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_pdfpageselector_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_pdfpageselector_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_pdfpageselector_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_pdfpageselector_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_pdfpageselector_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_pdfpageselector_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_pdfpageselector_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_pdfpageselector_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_pdfpageselector_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_pdfpageselector_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_pdfpageselector_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_pdfpageselector_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_pdfpageselector_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_pdfpageselector_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_pdfpageselector_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_pdfpageselector_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_pdfpageselector_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_pdfpageselector_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_pdfpageselector_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_pdfpageselector_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_pdfpageselector_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_pdfpageselector_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t q_pdfpageselector_dev_type(void* self) {
    return QPdfPageSelector_DevType((QPdfPageSelector*)self);
}

int32_t q_pdfpageselector_qbase_dev_type(void* self) {
    return QPdfPageSelector_QBaseDevType((QPdfPageSelector*)self);
}

void q_pdfpageselector_on_dev_type(void* self, int32_t (*callback)()) {
    QPdfPageSelector_OnDevType((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_set_visible(void* self, bool visible) {
    QPdfPageSelector_SetVisible((QPdfPageSelector*)self, visible);
}

void q_pdfpageselector_qbase_set_visible(void* self, bool visible) {
    QPdfPageSelector_QBaseSetVisible((QPdfPageSelector*)self, visible);
}

void q_pdfpageselector_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QPdfPageSelector_OnSetVisible((QPdfPageSelector*)self, (intptr_t)callback);
}

QSize* q_pdfpageselector_size_hint(void* self) {
    return QPdfPageSelector_SizeHint((QPdfPageSelector*)self);
}

QSize* q_pdfpageselector_qbase_size_hint(void* self) {
    return QPdfPageSelector_QBaseSizeHint((QPdfPageSelector*)self);
}

void q_pdfpageselector_on_size_hint(void* self, QSize* (*callback)()) {
    QPdfPageSelector_OnSizeHint((QPdfPageSelector*)self, (intptr_t)callback);
}

QSize* q_pdfpageselector_minimum_size_hint(void* self) {
    return QPdfPageSelector_MinimumSizeHint((QPdfPageSelector*)self);
}

QSize* q_pdfpageselector_qbase_minimum_size_hint(void* self) {
    return QPdfPageSelector_QBaseMinimumSizeHint((QPdfPageSelector*)self);
}

void q_pdfpageselector_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QPdfPageSelector_OnMinimumSizeHint((QPdfPageSelector*)self, (intptr_t)callback);
}

int32_t q_pdfpageselector_height_for_width(void* self, int param1) {
    return QPdfPageSelector_HeightForWidth((QPdfPageSelector*)self, param1);
}

int32_t q_pdfpageselector_qbase_height_for_width(void* self, int param1) {
    return QPdfPageSelector_QBaseHeightForWidth((QPdfPageSelector*)self, param1);
}

void q_pdfpageselector_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QPdfPageSelector_OnHeightForWidth((QPdfPageSelector*)self, (intptr_t)callback);
}

bool q_pdfpageselector_has_height_for_width(void* self) {
    return QPdfPageSelector_HasHeightForWidth((QPdfPageSelector*)self);
}

bool q_pdfpageselector_qbase_has_height_for_width(void* self) {
    return QPdfPageSelector_QBaseHasHeightForWidth((QPdfPageSelector*)self);
}

void q_pdfpageselector_on_has_height_for_width(void* self, bool (*callback)()) {
    QPdfPageSelector_OnHasHeightForWidth((QPdfPageSelector*)self, (intptr_t)callback);
}

QPaintEngine* q_pdfpageselector_paint_engine(void* self) {
    return QPdfPageSelector_PaintEngine((QPdfPageSelector*)self);
}

QPaintEngine* q_pdfpageselector_qbase_paint_engine(void* self) {
    return QPdfPageSelector_QBasePaintEngine((QPdfPageSelector*)self);
}

void q_pdfpageselector_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QPdfPageSelector_OnPaintEngine((QPdfPageSelector*)self, (intptr_t)callback);
}

bool q_pdfpageselector_event(void* self, void* event) {
    return QPdfPageSelector_Event((QPdfPageSelector*)self, (QEvent*)event);
}

bool q_pdfpageselector_qbase_event(void* self, void* event) {
    return QPdfPageSelector_QBaseEvent((QPdfPageSelector*)self, (QEvent*)event);
}

void q_pdfpageselector_on_event(void* self, bool (*callback)(void*, void*)) {
    QPdfPageSelector_OnEvent((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_mouse_press_event(void* self, void* event) {
    QPdfPageSelector_MousePressEvent((QPdfPageSelector*)self, (QMouseEvent*)event);
}

void q_pdfpageselector_qbase_mouse_press_event(void* self, void* event) {
    QPdfPageSelector_QBaseMousePressEvent((QPdfPageSelector*)self, (QMouseEvent*)event);
}

void q_pdfpageselector_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnMousePressEvent((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_mouse_release_event(void* self, void* event) {
    QPdfPageSelector_MouseReleaseEvent((QPdfPageSelector*)self, (QMouseEvent*)event);
}

void q_pdfpageselector_qbase_mouse_release_event(void* self, void* event) {
    QPdfPageSelector_QBaseMouseReleaseEvent((QPdfPageSelector*)self, (QMouseEvent*)event);
}

void q_pdfpageselector_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnMouseReleaseEvent((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_mouse_double_click_event(void* self, void* event) {
    QPdfPageSelector_MouseDoubleClickEvent((QPdfPageSelector*)self, (QMouseEvent*)event);
}

void q_pdfpageselector_qbase_mouse_double_click_event(void* self, void* event) {
    QPdfPageSelector_QBaseMouseDoubleClickEvent((QPdfPageSelector*)self, (QMouseEvent*)event);
}

void q_pdfpageselector_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnMouseDoubleClickEvent((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_mouse_move_event(void* self, void* event) {
    QPdfPageSelector_MouseMoveEvent((QPdfPageSelector*)self, (QMouseEvent*)event);
}

void q_pdfpageselector_qbase_mouse_move_event(void* self, void* event) {
    QPdfPageSelector_QBaseMouseMoveEvent((QPdfPageSelector*)self, (QMouseEvent*)event);
}

void q_pdfpageselector_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnMouseMoveEvent((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_wheel_event(void* self, void* event) {
    QPdfPageSelector_WheelEvent((QPdfPageSelector*)self, (QWheelEvent*)event);
}

void q_pdfpageselector_qbase_wheel_event(void* self, void* event) {
    QPdfPageSelector_QBaseWheelEvent((QPdfPageSelector*)self, (QWheelEvent*)event);
}

void q_pdfpageselector_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnWheelEvent((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_key_press_event(void* self, void* event) {
    QPdfPageSelector_KeyPressEvent((QPdfPageSelector*)self, (QKeyEvent*)event);
}

void q_pdfpageselector_qbase_key_press_event(void* self, void* event) {
    QPdfPageSelector_QBaseKeyPressEvent((QPdfPageSelector*)self, (QKeyEvent*)event);
}

void q_pdfpageselector_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnKeyPressEvent((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_key_release_event(void* self, void* event) {
    QPdfPageSelector_KeyReleaseEvent((QPdfPageSelector*)self, (QKeyEvent*)event);
}

void q_pdfpageselector_qbase_key_release_event(void* self, void* event) {
    QPdfPageSelector_QBaseKeyReleaseEvent((QPdfPageSelector*)self, (QKeyEvent*)event);
}

void q_pdfpageselector_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnKeyReleaseEvent((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_focus_in_event(void* self, void* event) {
    QPdfPageSelector_FocusInEvent((QPdfPageSelector*)self, (QFocusEvent*)event);
}

void q_pdfpageselector_qbase_focus_in_event(void* self, void* event) {
    QPdfPageSelector_QBaseFocusInEvent((QPdfPageSelector*)self, (QFocusEvent*)event);
}

void q_pdfpageselector_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnFocusInEvent((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_focus_out_event(void* self, void* event) {
    QPdfPageSelector_FocusOutEvent((QPdfPageSelector*)self, (QFocusEvent*)event);
}

void q_pdfpageselector_qbase_focus_out_event(void* self, void* event) {
    QPdfPageSelector_QBaseFocusOutEvent((QPdfPageSelector*)self, (QFocusEvent*)event);
}

void q_pdfpageselector_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnFocusOutEvent((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_enter_event(void* self, void* event) {
    QPdfPageSelector_EnterEvent((QPdfPageSelector*)self, (QEnterEvent*)event);
}

void q_pdfpageselector_qbase_enter_event(void* self, void* event) {
    QPdfPageSelector_QBaseEnterEvent((QPdfPageSelector*)self, (QEnterEvent*)event);
}

void q_pdfpageselector_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnEnterEvent((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_leave_event(void* self, void* event) {
    QPdfPageSelector_LeaveEvent((QPdfPageSelector*)self, (QEvent*)event);
}

void q_pdfpageselector_qbase_leave_event(void* self, void* event) {
    QPdfPageSelector_QBaseLeaveEvent((QPdfPageSelector*)self, (QEvent*)event);
}

void q_pdfpageselector_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnLeaveEvent((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_paint_event(void* self, void* event) {
    QPdfPageSelector_PaintEvent((QPdfPageSelector*)self, (QPaintEvent*)event);
}

void q_pdfpageselector_qbase_paint_event(void* self, void* event) {
    QPdfPageSelector_QBasePaintEvent((QPdfPageSelector*)self, (QPaintEvent*)event);
}

void q_pdfpageselector_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnPaintEvent((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_move_event(void* self, void* event) {
    QPdfPageSelector_MoveEvent((QPdfPageSelector*)self, (QMoveEvent*)event);
}

void q_pdfpageselector_qbase_move_event(void* self, void* event) {
    QPdfPageSelector_QBaseMoveEvent((QPdfPageSelector*)self, (QMoveEvent*)event);
}

void q_pdfpageselector_on_move_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnMoveEvent((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_resize_event(void* self, void* event) {
    QPdfPageSelector_ResizeEvent((QPdfPageSelector*)self, (QResizeEvent*)event);
}

void q_pdfpageselector_qbase_resize_event(void* self, void* event) {
    QPdfPageSelector_QBaseResizeEvent((QPdfPageSelector*)self, (QResizeEvent*)event);
}

void q_pdfpageselector_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnResizeEvent((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_close_event(void* self, void* event) {
    QPdfPageSelector_CloseEvent((QPdfPageSelector*)self, (QCloseEvent*)event);
}

void q_pdfpageselector_qbase_close_event(void* self, void* event) {
    QPdfPageSelector_QBaseCloseEvent((QPdfPageSelector*)self, (QCloseEvent*)event);
}

void q_pdfpageselector_on_close_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnCloseEvent((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_context_menu_event(void* self, void* event) {
    QPdfPageSelector_ContextMenuEvent((QPdfPageSelector*)self, (QContextMenuEvent*)event);
}

void q_pdfpageselector_qbase_context_menu_event(void* self, void* event) {
    QPdfPageSelector_QBaseContextMenuEvent((QPdfPageSelector*)self, (QContextMenuEvent*)event);
}

void q_pdfpageselector_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnContextMenuEvent((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_tablet_event(void* self, void* event) {
    QPdfPageSelector_TabletEvent((QPdfPageSelector*)self, (QTabletEvent*)event);
}

void q_pdfpageselector_qbase_tablet_event(void* self, void* event) {
    QPdfPageSelector_QBaseTabletEvent((QPdfPageSelector*)self, (QTabletEvent*)event);
}

void q_pdfpageselector_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnTabletEvent((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_action_event(void* self, void* event) {
    QPdfPageSelector_ActionEvent((QPdfPageSelector*)self, (QActionEvent*)event);
}

void q_pdfpageselector_qbase_action_event(void* self, void* event) {
    QPdfPageSelector_QBaseActionEvent((QPdfPageSelector*)self, (QActionEvent*)event);
}

void q_pdfpageselector_on_action_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnActionEvent((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_drag_enter_event(void* self, void* event) {
    QPdfPageSelector_DragEnterEvent((QPdfPageSelector*)self, (QDragEnterEvent*)event);
}

void q_pdfpageselector_qbase_drag_enter_event(void* self, void* event) {
    QPdfPageSelector_QBaseDragEnterEvent((QPdfPageSelector*)self, (QDragEnterEvent*)event);
}

void q_pdfpageselector_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnDragEnterEvent((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_drag_move_event(void* self, void* event) {
    QPdfPageSelector_DragMoveEvent((QPdfPageSelector*)self, (QDragMoveEvent*)event);
}

void q_pdfpageselector_qbase_drag_move_event(void* self, void* event) {
    QPdfPageSelector_QBaseDragMoveEvent((QPdfPageSelector*)self, (QDragMoveEvent*)event);
}

void q_pdfpageselector_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnDragMoveEvent((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_drag_leave_event(void* self, void* event) {
    QPdfPageSelector_DragLeaveEvent((QPdfPageSelector*)self, (QDragLeaveEvent*)event);
}

void q_pdfpageselector_qbase_drag_leave_event(void* self, void* event) {
    QPdfPageSelector_QBaseDragLeaveEvent((QPdfPageSelector*)self, (QDragLeaveEvent*)event);
}

void q_pdfpageselector_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnDragLeaveEvent((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_drop_event(void* self, void* event) {
    QPdfPageSelector_DropEvent((QPdfPageSelector*)self, (QDropEvent*)event);
}

void q_pdfpageselector_qbase_drop_event(void* self, void* event) {
    QPdfPageSelector_QBaseDropEvent((QPdfPageSelector*)self, (QDropEvent*)event);
}

void q_pdfpageselector_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnDropEvent((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_show_event(void* self, void* event) {
    QPdfPageSelector_ShowEvent((QPdfPageSelector*)self, (QShowEvent*)event);
}

void q_pdfpageselector_qbase_show_event(void* self, void* event) {
    QPdfPageSelector_QBaseShowEvent((QPdfPageSelector*)self, (QShowEvent*)event);
}

void q_pdfpageselector_on_show_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnShowEvent((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_hide_event(void* self, void* event) {
    QPdfPageSelector_HideEvent((QPdfPageSelector*)self, (QHideEvent*)event);
}

void q_pdfpageselector_qbase_hide_event(void* self, void* event) {
    QPdfPageSelector_QBaseHideEvent((QPdfPageSelector*)self, (QHideEvent*)event);
}

void q_pdfpageselector_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnHideEvent((QPdfPageSelector*)self, (intptr_t)callback);
}

bool q_pdfpageselector_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QPdfPageSelector_NativeEvent((QPdfPageSelector*)self, qstring(eventType), message, result);
}

bool q_pdfpageselector_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QPdfPageSelector_QBaseNativeEvent((QPdfPageSelector*)self, qstring(eventType), message, result);
}

void q_pdfpageselector_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QPdfPageSelector_OnNativeEvent((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_change_event(void* self, void* param1) {
    QPdfPageSelector_ChangeEvent((QPdfPageSelector*)self, (QEvent*)param1);
}

void q_pdfpageselector_qbase_change_event(void* self, void* param1) {
    QPdfPageSelector_QBaseChangeEvent((QPdfPageSelector*)self, (QEvent*)param1);
}

void q_pdfpageselector_on_change_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnChangeEvent((QPdfPageSelector*)self, (intptr_t)callback);
}

int32_t q_pdfpageselector_metric(void* self, int32_t param1) {
    return QPdfPageSelector_Metric((QPdfPageSelector*)self, param1);
}

int32_t q_pdfpageselector_qbase_metric(void* self, int32_t param1) {
    return QPdfPageSelector_QBaseMetric((QPdfPageSelector*)self, param1);
}

void q_pdfpageselector_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QPdfPageSelector_OnMetric((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_init_painter(void* self, void* painter) {
    QPdfPageSelector_InitPainter((QPdfPageSelector*)self, (QPainter*)painter);
}

void q_pdfpageselector_qbase_init_painter(void* self, void* painter) {
    QPdfPageSelector_QBaseInitPainter((QPdfPageSelector*)self, (QPainter*)painter);
}

void q_pdfpageselector_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnInitPainter((QPdfPageSelector*)self, (intptr_t)callback);
}

QPaintDevice* q_pdfpageselector_redirected(void* self, void* offset) {
    return QPdfPageSelector_Redirected((QPdfPageSelector*)self, (QPoint*)offset);
}

QPaintDevice* q_pdfpageselector_qbase_redirected(void* self, void* offset) {
    return QPdfPageSelector_QBaseRedirected((QPdfPageSelector*)self, (QPoint*)offset);
}

void q_pdfpageselector_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QPdfPageSelector_OnRedirected((QPdfPageSelector*)self, (intptr_t)callback);
}

QPainter* q_pdfpageselector_shared_painter(void* self) {
    return QPdfPageSelector_SharedPainter((QPdfPageSelector*)self);
}

QPainter* q_pdfpageselector_qbase_shared_painter(void* self) {
    return QPdfPageSelector_QBaseSharedPainter((QPdfPageSelector*)self);
}

void q_pdfpageselector_on_shared_painter(void* self, QPainter* (*callback)()) {
    QPdfPageSelector_OnSharedPainter((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_input_method_event(void* self, void* param1) {
    QPdfPageSelector_InputMethodEvent((QPdfPageSelector*)self, (QInputMethodEvent*)param1);
}

void q_pdfpageselector_qbase_input_method_event(void* self, void* param1) {
    QPdfPageSelector_QBaseInputMethodEvent((QPdfPageSelector*)self, (QInputMethodEvent*)param1);
}

void q_pdfpageselector_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnInputMethodEvent((QPdfPageSelector*)self, (intptr_t)callback);
}

QVariant* q_pdfpageselector_input_method_query(void* self, int64_t param1) {
    return QPdfPageSelector_InputMethodQuery((QPdfPageSelector*)self, param1);
}

QVariant* q_pdfpageselector_qbase_input_method_query(void* self, int64_t param1) {
    return QPdfPageSelector_QBaseInputMethodQuery((QPdfPageSelector*)self, param1);
}

void q_pdfpageselector_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    QPdfPageSelector_OnInputMethodQuery((QPdfPageSelector*)self, (intptr_t)callback);
}

bool q_pdfpageselector_focus_next_prev_child(void* self, bool next) {
    return QPdfPageSelector_FocusNextPrevChild((QPdfPageSelector*)self, next);
}

bool q_pdfpageselector_qbase_focus_next_prev_child(void* self, bool next) {
    return QPdfPageSelector_QBaseFocusNextPrevChild((QPdfPageSelector*)self, next);
}

void q_pdfpageselector_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QPdfPageSelector_OnFocusNextPrevChild((QPdfPageSelector*)self, (intptr_t)callback);
}

bool q_pdfpageselector_event_filter(void* self, void* watched, void* event) {
    return QPdfPageSelector_EventFilter((QPdfPageSelector*)self, (QObject*)watched, (QEvent*)event);
}

bool q_pdfpageselector_qbase_event_filter(void* self, void* watched, void* event) {
    return QPdfPageSelector_QBaseEventFilter((QPdfPageSelector*)self, (QObject*)watched, (QEvent*)event);
}

void q_pdfpageselector_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPdfPageSelector_OnEventFilter((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_timer_event(void* self, void* event) {
    QPdfPageSelector_TimerEvent((QPdfPageSelector*)self, (QTimerEvent*)event);
}

void q_pdfpageselector_qbase_timer_event(void* self, void* event) {
    QPdfPageSelector_QBaseTimerEvent((QPdfPageSelector*)self, (QTimerEvent*)event);
}

void q_pdfpageselector_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnTimerEvent((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_child_event(void* self, void* event) {
    QPdfPageSelector_ChildEvent((QPdfPageSelector*)self, (QChildEvent*)event);
}

void q_pdfpageselector_qbase_child_event(void* self, void* event) {
    QPdfPageSelector_QBaseChildEvent((QPdfPageSelector*)self, (QChildEvent*)event);
}

void q_pdfpageselector_on_child_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnChildEvent((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_custom_event(void* self, void* event) {
    QPdfPageSelector_CustomEvent((QPdfPageSelector*)self, (QEvent*)event);
}

void q_pdfpageselector_qbase_custom_event(void* self, void* event) {
    QPdfPageSelector_QBaseCustomEvent((QPdfPageSelector*)self, (QEvent*)event);
}

void q_pdfpageselector_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnCustomEvent((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_connect_notify(void* self, void* signal) {
    QPdfPageSelector_ConnectNotify((QPdfPageSelector*)self, (QMetaMethod*)signal);
}

void q_pdfpageselector_qbase_connect_notify(void* self, void* signal) {
    QPdfPageSelector_QBaseConnectNotify((QPdfPageSelector*)self, (QMetaMethod*)signal);
}

void q_pdfpageselector_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnConnectNotify((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_disconnect_notify(void* self, void* signal) {
    QPdfPageSelector_DisconnectNotify((QPdfPageSelector*)self, (QMetaMethod*)signal);
}

void q_pdfpageselector_qbase_disconnect_notify(void* self, void* signal) {
    QPdfPageSelector_QBaseDisconnectNotify((QPdfPageSelector*)self, (QMetaMethod*)signal);
}

void q_pdfpageselector_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QPdfPageSelector_OnDisconnectNotify((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_update_micro_focus(void* self) {
    QPdfPageSelector_UpdateMicroFocus((QPdfPageSelector*)self);
}

void q_pdfpageselector_qbase_update_micro_focus(void* self) {
    QPdfPageSelector_QBaseUpdateMicroFocus((QPdfPageSelector*)self);
}

void q_pdfpageselector_on_update_micro_focus(void* self, void (*callback)()) {
    QPdfPageSelector_OnUpdateMicroFocus((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_create(void* self) {
    QPdfPageSelector_Create((QPdfPageSelector*)self);
}

void q_pdfpageselector_qbase_create(void* self) {
    QPdfPageSelector_QBaseCreate((QPdfPageSelector*)self);
}

void q_pdfpageselector_on_create(void* self, void (*callback)()) {
    QPdfPageSelector_OnCreate((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_destroy(void* self) {
    QPdfPageSelector_Destroy((QPdfPageSelector*)self);
}

void q_pdfpageselector_qbase_destroy(void* self) {
    QPdfPageSelector_QBaseDestroy((QPdfPageSelector*)self);
}

void q_pdfpageselector_on_destroy(void* self, void (*callback)()) {
    QPdfPageSelector_OnDestroy((QPdfPageSelector*)self, (intptr_t)callback);
}

bool q_pdfpageselector_focus_next_child(void* self) {
    return QPdfPageSelector_FocusNextChild((QPdfPageSelector*)self);
}

bool q_pdfpageselector_qbase_focus_next_child(void* self) {
    return QPdfPageSelector_QBaseFocusNextChild((QPdfPageSelector*)self);
}

void q_pdfpageselector_on_focus_next_child(void* self, bool (*callback)()) {
    QPdfPageSelector_OnFocusNextChild((QPdfPageSelector*)self, (intptr_t)callback);
}

bool q_pdfpageselector_focus_previous_child(void* self) {
    return QPdfPageSelector_FocusPreviousChild((QPdfPageSelector*)self);
}

bool q_pdfpageselector_qbase_focus_previous_child(void* self) {
    return QPdfPageSelector_QBaseFocusPreviousChild((QPdfPageSelector*)self);
}

void q_pdfpageselector_on_focus_previous_child(void* self, bool (*callback)()) {
    QPdfPageSelector_OnFocusPreviousChild((QPdfPageSelector*)self, (intptr_t)callback);
}

QObject* q_pdfpageselector_sender(void* self) {
    return QPdfPageSelector_Sender((QPdfPageSelector*)self);
}

QObject* q_pdfpageselector_qbase_sender(void* self) {
    return QPdfPageSelector_QBaseSender((QPdfPageSelector*)self);
}

void q_pdfpageselector_on_sender(void* self, QObject* (*callback)()) {
    QPdfPageSelector_OnSender((QPdfPageSelector*)self, (intptr_t)callback);
}

int32_t q_pdfpageselector_sender_signal_index(void* self) {
    return QPdfPageSelector_SenderSignalIndex((QPdfPageSelector*)self);
}

int32_t q_pdfpageselector_qbase_sender_signal_index(void* self) {
    return QPdfPageSelector_QBaseSenderSignalIndex((QPdfPageSelector*)self);
}

void q_pdfpageselector_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QPdfPageSelector_OnSenderSignalIndex((QPdfPageSelector*)self, (intptr_t)callback);
}

int32_t q_pdfpageselector_receivers(void* self, const char* signal) {
    return QPdfPageSelector_Receivers((QPdfPageSelector*)self, signal);
}

int32_t q_pdfpageselector_qbase_receivers(void* self, const char* signal) {
    return QPdfPageSelector_QBaseReceivers((QPdfPageSelector*)self, signal);
}

void q_pdfpageselector_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QPdfPageSelector_OnReceivers((QPdfPageSelector*)self, (intptr_t)callback);
}

bool q_pdfpageselector_is_signal_connected(void* self, void* signal) {
    return QPdfPageSelector_IsSignalConnected((QPdfPageSelector*)self, (QMetaMethod*)signal);
}

bool q_pdfpageselector_qbase_is_signal_connected(void* self, void* signal) {
    return QPdfPageSelector_QBaseIsSignalConnected((QPdfPageSelector*)self, (QMetaMethod*)signal);
}

void q_pdfpageselector_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QPdfPageSelector_OnIsSignalConnected((QPdfPageSelector*)self, (intptr_t)callback);
}

double q_pdfpageselector_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QPdfPageSelector_GetDecodedMetricF((QPdfPageSelector*)self, metricA, metricB);
}

double q_pdfpageselector_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QPdfPageSelector_QBaseGetDecodedMetricF((QPdfPageSelector*)self, metricA, metricB);
}

void q_pdfpageselector_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QPdfPageSelector_OnGetDecodedMetricF((QPdfPageSelector*)self, (intptr_t)callback);
}

void q_pdfpageselector_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_pdfpageselector_delete(void* self) {
    QPdfPageSelector_Delete((QPdfPageSelector*)(self));
}
