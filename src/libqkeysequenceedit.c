#include "libqevent.hpp"
#include "libqcoreevent.hpp"
#include "libqnamespace.hpp"
#include "libqkeysequence.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqsize.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqkeysequenceedit.hpp"
#include "libqkeysequenceedit.h"

QKeySequenceEdit* q_keysequenceedit_new(void* parent) {
    return QKeySequenceEdit_new((QWidget*)parent);
}

QKeySequenceEdit* q_keysequenceedit_new2() {
    return QKeySequenceEdit_new2();
}

QKeySequenceEdit* q_keysequenceedit_new3(void* keySequence) {
    return QKeySequenceEdit_new3((QKeySequence*)keySequence);
}

QKeySequenceEdit* q_keysequenceedit_new4(void* keySequence, void* parent) {
    return QKeySequenceEdit_new4((QKeySequence*)keySequence, (QWidget*)parent);
}

const QMetaObject* q_keysequenceedit_meta_object(void* self) {
    return QKeySequenceEdit_MetaObject((QKeySequenceEdit*)self);
}

void* q_keysequenceedit_metacast(void* self, const char* param1) {
    return QKeySequenceEdit_Metacast((QKeySequenceEdit*)self, param1);
}

int32_t q_keysequenceedit_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QKeySequenceEdit_Metacall((QKeySequenceEdit*)self, param1, param2, param3);
}

void q_keysequenceedit_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*)) {
    QKeySequenceEdit_OnMetacall((QKeySequenceEdit*)self, (intptr_t)callback);
}

int32_t q_keysequenceedit_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QKeySequenceEdit_QBaseMetacall((QKeySequenceEdit*)self, param1, param2, param3);
}

const char* q_keysequenceedit_tr(const char* s) {
    libqt_string _str = QKeySequenceEdit_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QKeySequence* q_keysequenceedit_key_sequence(void* self) {
    return QKeySequenceEdit_KeySequence((QKeySequenceEdit*)self);
}

int64_t q_keysequenceedit_maximum_sequence_length(void* self) {
    return QKeySequenceEdit_MaximumSequenceLength((QKeySequenceEdit*)self);
}

void q_keysequenceedit_set_clear_button_enabled(void* self, bool enable) {
    QKeySequenceEdit_SetClearButtonEnabled((QKeySequenceEdit*)self, enable);
}

bool q_keysequenceedit_is_clear_button_enabled(void* self) {
    return QKeySequenceEdit_IsClearButtonEnabled((QKeySequenceEdit*)self);
}

void q_keysequenceedit_set_finishing_key_combinations(void* self, libqt_list finishingKeyCombinations) {
    QKeySequenceEdit_SetFinishingKeyCombinations((QKeySequenceEdit*)self, finishingKeyCombinations);
}

libqt_list /* of QKeyCombination* */ q_keysequenceedit_finishing_key_combinations(void* self) {
    libqt_list _arr = QKeySequenceEdit_FinishingKeyCombinations((QKeySequenceEdit*)self);
    return _arr;
}

void q_keysequenceedit_set_key_sequence(void* self, void* keySequence) {
    QKeySequenceEdit_SetKeySequence((QKeySequenceEdit*)self, (QKeySequence*)keySequence);
}

void q_keysequenceedit_clear(void* self) {
    QKeySequenceEdit_Clear((QKeySequenceEdit*)self);
}

void q_keysequenceedit_set_maximum_sequence_length(void* self, int64_t count) {
    QKeySequenceEdit_SetMaximumSequenceLength((QKeySequenceEdit*)self, count);
}

void q_keysequenceedit_editing_finished(void* self) {
    QKeySequenceEdit_EditingFinished((QKeySequenceEdit*)self);
}

void q_keysequenceedit_on_editing_finished(void* self, void (*callback)(void*)) {
    QKeySequenceEdit_Connect_EditingFinished((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_key_sequence_changed(void* self, void* keySequence) {
    QKeySequenceEdit_KeySequenceChanged((QKeySequenceEdit*)self, (QKeySequence*)keySequence);
}

void q_keysequenceedit_on_key_sequence_changed(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_Connect_KeySequenceChanged((QKeySequenceEdit*)self, (intptr_t)callback);
}

bool q_keysequenceedit_event(void* self, void* param1) {
    return QKeySequenceEdit_Event((QKeySequenceEdit*)self, (QEvent*)param1);
}

void q_keysequenceedit_on_event(void* self, bool (*callback)(void*, void*)) {
    QKeySequenceEdit_OnEvent((QKeySequenceEdit*)self, (intptr_t)callback);
}

bool q_keysequenceedit_qbase_event(void* self, void* param1) {
    return QKeySequenceEdit_QBaseEvent((QKeySequenceEdit*)self, (QEvent*)param1);
}

void q_keysequenceedit_key_press_event(void* self, void* param1) {
    QKeySequenceEdit_KeyPressEvent((QKeySequenceEdit*)self, (QKeyEvent*)param1);
}

void q_keysequenceedit_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnKeyPressEvent((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_qbase_key_press_event(void* self, void* param1) {
    QKeySequenceEdit_QBaseKeyPressEvent((QKeySequenceEdit*)self, (QKeyEvent*)param1);
}

void q_keysequenceedit_key_release_event(void* self, void* param1) {
    QKeySequenceEdit_KeyReleaseEvent((QKeySequenceEdit*)self, (QKeyEvent*)param1);
}

void q_keysequenceedit_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnKeyReleaseEvent((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_qbase_key_release_event(void* self, void* param1) {
    QKeySequenceEdit_QBaseKeyReleaseEvent((QKeySequenceEdit*)self, (QKeyEvent*)param1);
}

void q_keysequenceedit_timer_event(void* self, void* param1) {
    QKeySequenceEdit_TimerEvent((QKeySequenceEdit*)self, (QTimerEvent*)param1);
}

void q_keysequenceedit_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnTimerEvent((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_qbase_timer_event(void* self, void* param1) {
    QKeySequenceEdit_QBaseTimerEvent((QKeySequenceEdit*)self, (QTimerEvent*)param1);
}

void q_keysequenceedit_focus_out_event(void* self, void* param1) {
    QKeySequenceEdit_FocusOutEvent((QKeySequenceEdit*)self, (QFocusEvent*)param1);
}

void q_keysequenceedit_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnFocusOutEvent((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_qbase_focus_out_event(void* self, void* param1) {
    QKeySequenceEdit_QBaseFocusOutEvent((QKeySequenceEdit*)self, (QFocusEvent*)param1);
}

const char* q_keysequenceedit_tr2(const char* s, const char* c) {
    libqt_string _str = QKeySequenceEdit_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_keysequenceedit_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QKeySequenceEdit_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t q_keysequenceedit_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_keysequenceedit_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_keysequenceedit_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_keysequenceedit_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_keysequenceedit_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_keysequenceedit_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_keysequenceedit_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_keysequenceedit_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_keysequenceedit_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_keysequenceedit_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_keysequenceedit_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_keysequenceedit_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_keysequenceedit_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_keysequenceedit_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_keysequenceedit_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_keysequenceedit_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_keysequenceedit_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_keysequenceedit_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_keysequenceedit_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_keysequenceedit_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_keysequenceedit_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_keysequenceedit_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_keysequenceedit_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_keysequenceedit_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_keysequenceedit_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_keysequenceedit_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_keysequenceedit_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_keysequenceedit_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_keysequenceedit_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_keysequenceedit_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_keysequenceedit_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_keysequenceedit_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_keysequenceedit_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_keysequenceedit_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_keysequenceedit_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_keysequenceedit_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_keysequenceedit_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_keysequenceedit_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_keysequenceedit_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_keysequenceedit_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_keysequenceedit_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_keysequenceedit_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_keysequenceedit_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_keysequenceedit_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_keysequenceedit_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_keysequenceedit_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_keysequenceedit_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_keysequenceedit_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_keysequenceedit_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_keysequenceedit_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_keysequenceedit_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_keysequenceedit_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_keysequenceedit_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_keysequenceedit_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_keysequenceedit_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_keysequenceedit_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_keysequenceedit_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_keysequenceedit_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_keysequenceedit_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_keysequenceedit_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_keysequenceedit_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_keysequenceedit_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_keysequenceedit_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_keysequenceedit_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_keysequenceedit_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_keysequenceedit_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_keysequenceedit_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_keysequenceedit_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_keysequenceedit_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_keysequenceedit_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_keysequenceedit_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_keysequenceedit_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_keysequenceedit_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_keysequenceedit_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_keysequenceedit_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_keysequenceedit_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_keysequenceedit_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_keysequenceedit_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_keysequenceedit_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_keysequenceedit_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_keysequenceedit_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_keysequenceedit_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_keysequenceedit_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_keysequenceedit_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_keysequenceedit_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_keysequenceedit_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_keysequenceedit_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_keysequenceedit_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_keysequenceedit_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_keysequenceedit_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_keysequenceedit_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_keysequenceedit_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_keysequenceedit_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_keysequenceedit_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_keysequenceedit_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_keysequenceedit_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_keysequenceedit_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_keysequenceedit_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_keysequenceedit_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_keysequenceedit_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_keysequenceedit_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_keysequenceedit_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_keysequenceedit_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_keysequenceedit_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_keysequenceedit_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_keysequenceedit_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_keysequenceedit_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_keysequenceedit_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_keysequenceedit_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_keysequenceedit_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_keysequenceedit_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_keysequenceedit_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_keysequenceedit_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_keysequenceedit_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_keysequenceedit_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_keysequenceedit_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_keysequenceedit_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_keysequenceedit_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_keysequenceedit_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_keysequenceedit_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_keysequenceedit_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_keysequenceedit_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_keysequenceedit_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_keysequenceedit_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_keysequenceedit_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_keysequenceedit_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_keysequenceedit_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_keysequenceedit_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_keysequenceedit_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_keysequenceedit_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_keysequenceedit_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_keysequenceedit_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_keysequenceedit_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_keysequenceedit_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_keysequenceedit_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_keysequenceedit_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_keysequenceedit_set_focus2(void* self, int64_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int64_t q_keysequenceedit_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_keysequenceedit_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_keysequenceedit_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_keysequenceedit_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_keysequenceedit_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_keysequenceedit_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_keysequenceedit_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_keysequenceedit_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_keysequenceedit_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_keysequenceedit_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_keysequenceedit_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_keysequenceedit_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_keysequenceedit_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_keysequenceedit_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_keysequenceedit_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_keysequenceedit_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_keysequenceedit_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_keysequenceedit_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_keysequenceedit_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_keysequenceedit_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_keysequenceedit_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_keysequenceedit_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_keysequenceedit_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_keysequenceedit_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_keysequenceedit_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_keysequenceedit_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_keysequenceedit_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_keysequenceedit_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_keysequenceedit_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_keysequenceedit_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_keysequenceedit_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_keysequenceedit_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_keysequenceedit_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_keysequenceedit_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_keysequenceedit_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_keysequenceedit_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_keysequenceedit_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_keysequenceedit_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_keysequenceedit_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_keysequenceedit_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_keysequenceedit_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_keysequenceedit_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_keysequenceedit_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_keysequenceedit_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_keysequenceedit_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_keysequenceedit_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_keysequenceedit_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_keysequenceedit_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_keysequenceedit_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_keysequenceedit_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_keysequenceedit_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_keysequenceedit_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_keysequenceedit_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_keysequenceedit_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_keysequenceedit_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_keysequenceedit_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_keysequenceedit_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_keysequenceedit_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_keysequenceedit_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_keysequenceedit_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_keysequenceedit_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_keysequenceedit_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_keysequenceedit_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_keysequenceedit_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_keysequenceedit_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_keysequenceedit_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_keysequenceedit_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_keysequenceedit_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_keysequenceedit_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_keysequenceedit_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_keysequenceedit_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_keysequenceedit_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_keysequenceedit_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_keysequenceedit_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_keysequenceedit_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_keysequenceedit_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_keysequenceedit_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_keysequenceedit_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_keysequenceedit_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_keysequenceedit_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_keysequenceedit_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_keysequenceedit_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_keysequenceedit_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_keysequenceedit_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_keysequenceedit_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_keysequenceedit_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_keysequenceedit_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_keysequenceedit_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_keysequenceedit_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_keysequenceedit_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_keysequenceedit_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_keysequenceedit_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_keysequenceedit_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_keysequenceedit_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_keysequenceedit_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_keysequenceedit_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_keysequenceedit_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_keysequenceedit_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_keysequenceedit_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_keysequenceedit_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_keysequenceedit_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_keysequenceedit_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_keysequenceedit_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_keysequenceedit_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_keysequenceedit_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_keysequenceedit_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_keysequenceedit_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_keysequenceedit_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_keysequenceedit_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_keysequenceedit_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_keysequenceedit_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_keysequenceedit_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_keysequenceedit_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_keysequenceedit_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_keysequenceedit_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_keysequenceedit_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_keysequenceedit_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_keysequenceedit_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t q_keysequenceedit_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_keysequenceedit_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_keysequenceedit_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_keysequenceedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_keysequenceedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_keysequenceedit_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_keysequenceedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_keysequenceedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_keysequenceedit_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_keysequenceedit_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_keysequenceedit_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_keysequenceedit_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_keysequenceedit_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_keysequenceedit_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_keysequenceedit_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_keysequenceedit_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_keysequenceedit_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_keysequenceedit_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_keysequenceedit_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_keysequenceedit_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_keysequenceedit_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_keysequenceedit_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_keysequenceedit_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_keysequenceedit_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_keysequenceedit_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_keysequenceedit_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_keysequenceedit_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_keysequenceedit_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_keysequenceedit_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_keysequenceedit_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_keysequenceedit_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_keysequenceedit_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_keysequenceedit_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_keysequenceedit_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_keysequenceedit_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_keysequenceedit_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_keysequenceedit_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_keysequenceedit_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_keysequenceedit_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_keysequenceedit_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_keysequenceedit_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_keysequenceedit_dynamic_property_names");
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

QBindingStorage* q_keysequenceedit_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_keysequenceedit_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_keysequenceedit_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_keysequenceedit_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_keysequenceedit_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_keysequenceedit_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_keysequenceedit_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_keysequenceedit_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_keysequenceedit_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_keysequenceedit_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_keysequenceedit_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_keysequenceedit_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_keysequenceedit_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_keysequenceedit_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_keysequenceedit_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_keysequenceedit_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_keysequenceedit_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_keysequenceedit_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_keysequenceedit_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_keysequenceedit_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_keysequenceedit_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_keysequenceedit_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_keysequenceedit_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_keysequenceedit_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_keysequenceedit_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_keysequenceedit_encode_metric_f(int64_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t q_keysequenceedit_dev_type(void* self) {
    return QKeySequenceEdit_DevType((QKeySequenceEdit*)self);
}

int32_t q_keysequenceedit_qbase_dev_type(void* self) {
    return QKeySequenceEdit_QBaseDevType((QKeySequenceEdit*)self);
}

void q_keysequenceedit_on_dev_type(void* self, int32_t (*callback)()) {
    QKeySequenceEdit_OnDevType((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_set_visible(void* self, bool visible) {
    QKeySequenceEdit_SetVisible((QKeySequenceEdit*)self, visible);
}

void q_keysequenceedit_qbase_set_visible(void* self, bool visible) {
    QKeySequenceEdit_QBaseSetVisible((QKeySequenceEdit*)self, visible);
}

void q_keysequenceedit_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QKeySequenceEdit_OnSetVisible((QKeySequenceEdit*)self, (intptr_t)callback);
}

QSize* q_keysequenceedit_size_hint(void* self) {
    return QKeySequenceEdit_SizeHint((QKeySequenceEdit*)self);
}

QSize* q_keysequenceedit_qbase_size_hint(void* self) {
    return QKeySequenceEdit_QBaseSizeHint((QKeySequenceEdit*)self);
}

void q_keysequenceedit_on_size_hint(void* self, QSize* (*callback)()) {
    QKeySequenceEdit_OnSizeHint((QKeySequenceEdit*)self, (intptr_t)callback);
}

QSize* q_keysequenceedit_minimum_size_hint(void* self) {
    return QKeySequenceEdit_MinimumSizeHint((QKeySequenceEdit*)self);
}

QSize* q_keysequenceedit_qbase_minimum_size_hint(void* self) {
    return QKeySequenceEdit_QBaseMinimumSizeHint((QKeySequenceEdit*)self);
}

void q_keysequenceedit_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QKeySequenceEdit_OnMinimumSizeHint((QKeySequenceEdit*)self, (intptr_t)callback);
}

int32_t q_keysequenceedit_height_for_width(void* self, int param1) {
    return QKeySequenceEdit_HeightForWidth((QKeySequenceEdit*)self, param1);
}

int32_t q_keysequenceedit_qbase_height_for_width(void* self, int param1) {
    return QKeySequenceEdit_QBaseHeightForWidth((QKeySequenceEdit*)self, param1);
}

void q_keysequenceedit_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QKeySequenceEdit_OnHeightForWidth((QKeySequenceEdit*)self, (intptr_t)callback);
}

bool q_keysequenceedit_has_height_for_width(void* self) {
    return QKeySequenceEdit_HasHeightForWidth((QKeySequenceEdit*)self);
}

bool q_keysequenceedit_qbase_has_height_for_width(void* self) {
    return QKeySequenceEdit_QBaseHasHeightForWidth((QKeySequenceEdit*)self);
}

void q_keysequenceedit_on_has_height_for_width(void* self, bool (*callback)()) {
    QKeySequenceEdit_OnHasHeightForWidth((QKeySequenceEdit*)self, (intptr_t)callback);
}

QPaintEngine* q_keysequenceedit_paint_engine(void* self) {
    return QKeySequenceEdit_PaintEngine((QKeySequenceEdit*)self);
}

QPaintEngine* q_keysequenceedit_qbase_paint_engine(void* self) {
    return QKeySequenceEdit_QBasePaintEngine((QKeySequenceEdit*)self);
}

void q_keysequenceedit_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QKeySequenceEdit_OnPaintEngine((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_mouse_press_event(void* self, void* event) {
    QKeySequenceEdit_MousePressEvent((QKeySequenceEdit*)self, (QMouseEvent*)event);
}

void q_keysequenceedit_qbase_mouse_press_event(void* self, void* event) {
    QKeySequenceEdit_QBaseMousePressEvent((QKeySequenceEdit*)self, (QMouseEvent*)event);
}

void q_keysequenceedit_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnMousePressEvent((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_mouse_release_event(void* self, void* event) {
    QKeySequenceEdit_MouseReleaseEvent((QKeySequenceEdit*)self, (QMouseEvent*)event);
}

void q_keysequenceedit_qbase_mouse_release_event(void* self, void* event) {
    QKeySequenceEdit_QBaseMouseReleaseEvent((QKeySequenceEdit*)self, (QMouseEvent*)event);
}

void q_keysequenceedit_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnMouseReleaseEvent((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_mouse_double_click_event(void* self, void* event) {
    QKeySequenceEdit_MouseDoubleClickEvent((QKeySequenceEdit*)self, (QMouseEvent*)event);
}

void q_keysequenceedit_qbase_mouse_double_click_event(void* self, void* event) {
    QKeySequenceEdit_QBaseMouseDoubleClickEvent((QKeySequenceEdit*)self, (QMouseEvent*)event);
}

void q_keysequenceedit_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnMouseDoubleClickEvent((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_mouse_move_event(void* self, void* event) {
    QKeySequenceEdit_MouseMoveEvent((QKeySequenceEdit*)self, (QMouseEvent*)event);
}

void q_keysequenceedit_qbase_mouse_move_event(void* self, void* event) {
    QKeySequenceEdit_QBaseMouseMoveEvent((QKeySequenceEdit*)self, (QMouseEvent*)event);
}

void q_keysequenceedit_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnMouseMoveEvent((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_wheel_event(void* self, void* event) {
    QKeySequenceEdit_WheelEvent((QKeySequenceEdit*)self, (QWheelEvent*)event);
}

void q_keysequenceedit_qbase_wheel_event(void* self, void* event) {
    QKeySequenceEdit_QBaseWheelEvent((QKeySequenceEdit*)self, (QWheelEvent*)event);
}

void q_keysequenceedit_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnWheelEvent((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_focus_in_event(void* self, void* event) {
    QKeySequenceEdit_FocusInEvent((QKeySequenceEdit*)self, (QFocusEvent*)event);
}

void q_keysequenceedit_qbase_focus_in_event(void* self, void* event) {
    QKeySequenceEdit_QBaseFocusInEvent((QKeySequenceEdit*)self, (QFocusEvent*)event);
}

void q_keysequenceedit_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnFocusInEvent((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_enter_event(void* self, void* event) {
    QKeySequenceEdit_EnterEvent((QKeySequenceEdit*)self, (QEnterEvent*)event);
}

void q_keysequenceedit_qbase_enter_event(void* self, void* event) {
    QKeySequenceEdit_QBaseEnterEvent((QKeySequenceEdit*)self, (QEnterEvent*)event);
}

void q_keysequenceedit_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnEnterEvent((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_leave_event(void* self, void* event) {
    QKeySequenceEdit_LeaveEvent((QKeySequenceEdit*)self, (QEvent*)event);
}

void q_keysequenceedit_qbase_leave_event(void* self, void* event) {
    QKeySequenceEdit_QBaseLeaveEvent((QKeySequenceEdit*)self, (QEvent*)event);
}

void q_keysequenceedit_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnLeaveEvent((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_paint_event(void* self, void* event) {
    QKeySequenceEdit_PaintEvent((QKeySequenceEdit*)self, (QPaintEvent*)event);
}

void q_keysequenceedit_qbase_paint_event(void* self, void* event) {
    QKeySequenceEdit_QBasePaintEvent((QKeySequenceEdit*)self, (QPaintEvent*)event);
}

void q_keysequenceedit_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnPaintEvent((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_move_event(void* self, void* event) {
    QKeySequenceEdit_MoveEvent((QKeySequenceEdit*)self, (QMoveEvent*)event);
}

void q_keysequenceedit_qbase_move_event(void* self, void* event) {
    QKeySequenceEdit_QBaseMoveEvent((QKeySequenceEdit*)self, (QMoveEvent*)event);
}

void q_keysequenceedit_on_move_event(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnMoveEvent((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_resize_event(void* self, void* event) {
    QKeySequenceEdit_ResizeEvent((QKeySequenceEdit*)self, (QResizeEvent*)event);
}

void q_keysequenceedit_qbase_resize_event(void* self, void* event) {
    QKeySequenceEdit_QBaseResizeEvent((QKeySequenceEdit*)self, (QResizeEvent*)event);
}

void q_keysequenceedit_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnResizeEvent((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_close_event(void* self, void* event) {
    QKeySequenceEdit_CloseEvent((QKeySequenceEdit*)self, (QCloseEvent*)event);
}

void q_keysequenceedit_qbase_close_event(void* self, void* event) {
    QKeySequenceEdit_QBaseCloseEvent((QKeySequenceEdit*)self, (QCloseEvent*)event);
}

void q_keysequenceedit_on_close_event(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnCloseEvent((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_context_menu_event(void* self, void* event) {
    QKeySequenceEdit_ContextMenuEvent((QKeySequenceEdit*)self, (QContextMenuEvent*)event);
}

void q_keysequenceedit_qbase_context_menu_event(void* self, void* event) {
    QKeySequenceEdit_QBaseContextMenuEvent((QKeySequenceEdit*)self, (QContextMenuEvent*)event);
}

void q_keysequenceedit_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnContextMenuEvent((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_tablet_event(void* self, void* event) {
    QKeySequenceEdit_TabletEvent((QKeySequenceEdit*)self, (QTabletEvent*)event);
}

void q_keysequenceedit_qbase_tablet_event(void* self, void* event) {
    QKeySequenceEdit_QBaseTabletEvent((QKeySequenceEdit*)self, (QTabletEvent*)event);
}

void q_keysequenceedit_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnTabletEvent((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_action_event(void* self, void* event) {
    QKeySequenceEdit_ActionEvent((QKeySequenceEdit*)self, (QActionEvent*)event);
}

void q_keysequenceedit_qbase_action_event(void* self, void* event) {
    QKeySequenceEdit_QBaseActionEvent((QKeySequenceEdit*)self, (QActionEvent*)event);
}

void q_keysequenceedit_on_action_event(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnActionEvent((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_drag_enter_event(void* self, void* event) {
    QKeySequenceEdit_DragEnterEvent((QKeySequenceEdit*)self, (QDragEnterEvent*)event);
}

void q_keysequenceedit_qbase_drag_enter_event(void* self, void* event) {
    QKeySequenceEdit_QBaseDragEnterEvent((QKeySequenceEdit*)self, (QDragEnterEvent*)event);
}

void q_keysequenceedit_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnDragEnterEvent((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_drag_move_event(void* self, void* event) {
    QKeySequenceEdit_DragMoveEvent((QKeySequenceEdit*)self, (QDragMoveEvent*)event);
}

void q_keysequenceedit_qbase_drag_move_event(void* self, void* event) {
    QKeySequenceEdit_QBaseDragMoveEvent((QKeySequenceEdit*)self, (QDragMoveEvent*)event);
}

void q_keysequenceedit_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnDragMoveEvent((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_drag_leave_event(void* self, void* event) {
    QKeySequenceEdit_DragLeaveEvent((QKeySequenceEdit*)self, (QDragLeaveEvent*)event);
}

void q_keysequenceedit_qbase_drag_leave_event(void* self, void* event) {
    QKeySequenceEdit_QBaseDragLeaveEvent((QKeySequenceEdit*)self, (QDragLeaveEvent*)event);
}

void q_keysequenceedit_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnDragLeaveEvent((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_drop_event(void* self, void* event) {
    QKeySequenceEdit_DropEvent((QKeySequenceEdit*)self, (QDropEvent*)event);
}

void q_keysequenceedit_qbase_drop_event(void* self, void* event) {
    QKeySequenceEdit_QBaseDropEvent((QKeySequenceEdit*)self, (QDropEvent*)event);
}

void q_keysequenceedit_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnDropEvent((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_show_event(void* self, void* event) {
    QKeySequenceEdit_ShowEvent((QKeySequenceEdit*)self, (QShowEvent*)event);
}

void q_keysequenceedit_qbase_show_event(void* self, void* event) {
    QKeySequenceEdit_QBaseShowEvent((QKeySequenceEdit*)self, (QShowEvent*)event);
}

void q_keysequenceedit_on_show_event(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnShowEvent((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_hide_event(void* self, void* event) {
    QKeySequenceEdit_HideEvent((QKeySequenceEdit*)self, (QHideEvent*)event);
}

void q_keysequenceedit_qbase_hide_event(void* self, void* event) {
    QKeySequenceEdit_QBaseHideEvent((QKeySequenceEdit*)self, (QHideEvent*)event);
}

void q_keysequenceedit_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnHideEvent((QKeySequenceEdit*)self, (intptr_t)callback);
}

bool q_keysequenceedit_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QKeySequenceEdit_NativeEvent((QKeySequenceEdit*)self, qstring(eventType), message, result);
}

bool q_keysequenceedit_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QKeySequenceEdit_QBaseNativeEvent((QKeySequenceEdit*)self, qstring(eventType), message, result);
}

void q_keysequenceedit_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QKeySequenceEdit_OnNativeEvent((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_change_event(void* self, void* param1) {
    QKeySequenceEdit_ChangeEvent((QKeySequenceEdit*)self, (QEvent*)param1);
}

void q_keysequenceedit_qbase_change_event(void* self, void* param1) {
    QKeySequenceEdit_QBaseChangeEvent((QKeySequenceEdit*)self, (QEvent*)param1);
}

void q_keysequenceedit_on_change_event(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnChangeEvent((QKeySequenceEdit*)self, (intptr_t)callback);
}

int32_t q_keysequenceedit_metric(void* self, int64_t param1) {
    return QKeySequenceEdit_Metric((QKeySequenceEdit*)self, param1);
}

int32_t q_keysequenceedit_qbase_metric(void* self, int64_t param1) {
    return QKeySequenceEdit_QBaseMetric((QKeySequenceEdit*)self, param1);
}

void q_keysequenceedit_on_metric(void* self, int32_t (*callback)(void*, int64_t)) {
    QKeySequenceEdit_OnMetric((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_init_painter(void* self, void* painter) {
    QKeySequenceEdit_InitPainter((QKeySequenceEdit*)self, (QPainter*)painter);
}

void q_keysequenceedit_qbase_init_painter(void* self, void* painter) {
    QKeySequenceEdit_QBaseInitPainter((QKeySequenceEdit*)self, (QPainter*)painter);
}

void q_keysequenceedit_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnInitPainter((QKeySequenceEdit*)self, (intptr_t)callback);
}

QPaintDevice* q_keysequenceedit_redirected(void* self, void* offset) {
    return QKeySequenceEdit_Redirected((QKeySequenceEdit*)self, (QPoint*)offset);
}

QPaintDevice* q_keysequenceedit_qbase_redirected(void* self, void* offset) {
    return QKeySequenceEdit_QBaseRedirected((QKeySequenceEdit*)self, (QPoint*)offset);
}

void q_keysequenceedit_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QKeySequenceEdit_OnRedirected((QKeySequenceEdit*)self, (intptr_t)callback);
}

QPainter* q_keysequenceedit_shared_painter(void* self) {
    return QKeySequenceEdit_SharedPainter((QKeySequenceEdit*)self);
}

QPainter* q_keysequenceedit_qbase_shared_painter(void* self) {
    return QKeySequenceEdit_QBaseSharedPainter((QKeySequenceEdit*)self);
}

void q_keysequenceedit_on_shared_painter(void* self, QPainter* (*callback)()) {
    QKeySequenceEdit_OnSharedPainter((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_input_method_event(void* self, void* param1) {
    QKeySequenceEdit_InputMethodEvent((QKeySequenceEdit*)self, (QInputMethodEvent*)param1);
}

void q_keysequenceedit_qbase_input_method_event(void* self, void* param1) {
    QKeySequenceEdit_QBaseInputMethodEvent((QKeySequenceEdit*)self, (QInputMethodEvent*)param1);
}

void q_keysequenceedit_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnInputMethodEvent((QKeySequenceEdit*)self, (intptr_t)callback);
}

QVariant* q_keysequenceedit_input_method_query(void* self, int64_t param1) {
    return QKeySequenceEdit_InputMethodQuery((QKeySequenceEdit*)self, param1);
}

QVariant* q_keysequenceedit_qbase_input_method_query(void* self, int64_t param1) {
    return QKeySequenceEdit_QBaseInputMethodQuery((QKeySequenceEdit*)self, param1);
}

void q_keysequenceedit_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    QKeySequenceEdit_OnInputMethodQuery((QKeySequenceEdit*)self, (intptr_t)callback);
}

bool q_keysequenceedit_focus_next_prev_child(void* self, bool next) {
    return QKeySequenceEdit_FocusNextPrevChild((QKeySequenceEdit*)self, next);
}

bool q_keysequenceedit_qbase_focus_next_prev_child(void* self, bool next) {
    return QKeySequenceEdit_QBaseFocusNextPrevChild((QKeySequenceEdit*)self, next);
}

void q_keysequenceedit_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QKeySequenceEdit_OnFocusNextPrevChild((QKeySequenceEdit*)self, (intptr_t)callback);
}

bool q_keysequenceedit_event_filter(void* self, void* watched, void* event) {
    return QKeySequenceEdit_EventFilter((QKeySequenceEdit*)self, (QObject*)watched, (QEvent*)event);
}

bool q_keysequenceedit_qbase_event_filter(void* self, void* watched, void* event) {
    return QKeySequenceEdit_QBaseEventFilter((QKeySequenceEdit*)self, (QObject*)watched, (QEvent*)event);
}

void q_keysequenceedit_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QKeySequenceEdit_OnEventFilter((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_child_event(void* self, void* event) {
    QKeySequenceEdit_ChildEvent((QKeySequenceEdit*)self, (QChildEvent*)event);
}

void q_keysequenceedit_qbase_child_event(void* self, void* event) {
    QKeySequenceEdit_QBaseChildEvent((QKeySequenceEdit*)self, (QChildEvent*)event);
}

void q_keysequenceedit_on_child_event(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnChildEvent((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_custom_event(void* self, void* event) {
    QKeySequenceEdit_CustomEvent((QKeySequenceEdit*)self, (QEvent*)event);
}

void q_keysequenceedit_qbase_custom_event(void* self, void* event) {
    QKeySequenceEdit_QBaseCustomEvent((QKeySequenceEdit*)self, (QEvent*)event);
}

void q_keysequenceedit_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnCustomEvent((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_connect_notify(void* self, void* signal) {
    QKeySequenceEdit_ConnectNotify((QKeySequenceEdit*)self, (QMetaMethod*)signal);
}

void q_keysequenceedit_qbase_connect_notify(void* self, void* signal) {
    QKeySequenceEdit_QBaseConnectNotify((QKeySequenceEdit*)self, (QMetaMethod*)signal);
}

void q_keysequenceedit_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnConnectNotify((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_disconnect_notify(void* self, void* signal) {
    QKeySequenceEdit_DisconnectNotify((QKeySequenceEdit*)self, (QMetaMethod*)signal);
}

void q_keysequenceedit_qbase_disconnect_notify(void* self, void* signal) {
    QKeySequenceEdit_QBaseDisconnectNotify((QKeySequenceEdit*)self, (QMetaMethod*)signal);
}

void q_keysequenceedit_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QKeySequenceEdit_OnDisconnectNotify((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_update_micro_focus(void* self) {
    QKeySequenceEdit_UpdateMicroFocus((QKeySequenceEdit*)self);
}

void q_keysequenceedit_qbase_update_micro_focus(void* self) {
    QKeySequenceEdit_QBaseUpdateMicroFocus((QKeySequenceEdit*)self);
}

void q_keysequenceedit_on_update_micro_focus(void* self, void (*callback)()) {
    QKeySequenceEdit_OnUpdateMicroFocus((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_create(void* self) {
    QKeySequenceEdit_Create((QKeySequenceEdit*)self);
}

void q_keysequenceedit_qbase_create(void* self) {
    QKeySequenceEdit_QBaseCreate((QKeySequenceEdit*)self);
}

void q_keysequenceedit_on_create(void* self, void (*callback)()) {
    QKeySequenceEdit_OnCreate((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_destroy(void* self) {
    QKeySequenceEdit_Destroy((QKeySequenceEdit*)self);
}

void q_keysequenceedit_qbase_destroy(void* self) {
    QKeySequenceEdit_QBaseDestroy((QKeySequenceEdit*)self);
}

void q_keysequenceedit_on_destroy(void* self, void (*callback)()) {
    QKeySequenceEdit_OnDestroy((QKeySequenceEdit*)self, (intptr_t)callback);
}

bool q_keysequenceedit_focus_next_child(void* self) {
    return QKeySequenceEdit_FocusNextChild((QKeySequenceEdit*)self);
}

bool q_keysequenceedit_qbase_focus_next_child(void* self) {
    return QKeySequenceEdit_QBaseFocusNextChild((QKeySequenceEdit*)self);
}

void q_keysequenceedit_on_focus_next_child(void* self, bool (*callback)()) {
    QKeySequenceEdit_OnFocusNextChild((QKeySequenceEdit*)self, (intptr_t)callback);
}

bool q_keysequenceedit_focus_previous_child(void* self) {
    return QKeySequenceEdit_FocusPreviousChild((QKeySequenceEdit*)self);
}

bool q_keysequenceedit_qbase_focus_previous_child(void* self) {
    return QKeySequenceEdit_QBaseFocusPreviousChild((QKeySequenceEdit*)self);
}

void q_keysequenceedit_on_focus_previous_child(void* self, bool (*callback)()) {
    QKeySequenceEdit_OnFocusPreviousChild((QKeySequenceEdit*)self, (intptr_t)callback);
}

QObject* q_keysequenceedit_sender(void* self) {
    return QKeySequenceEdit_Sender((QKeySequenceEdit*)self);
}

QObject* q_keysequenceedit_qbase_sender(void* self) {
    return QKeySequenceEdit_QBaseSender((QKeySequenceEdit*)self);
}

void q_keysequenceedit_on_sender(void* self, QObject* (*callback)()) {
    QKeySequenceEdit_OnSender((QKeySequenceEdit*)self, (intptr_t)callback);
}

int32_t q_keysequenceedit_sender_signal_index(void* self) {
    return QKeySequenceEdit_SenderSignalIndex((QKeySequenceEdit*)self);
}

int32_t q_keysequenceedit_qbase_sender_signal_index(void* self) {
    return QKeySequenceEdit_QBaseSenderSignalIndex((QKeySequenceEdit*)self);
}

void q_keysequenceedit_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QKeySequenceEdit_OnSenderSignalIndex((QKeySequenceEdit*)self, (intptr_t)callback);
}

int32_t q_keysequenceedit_receivers(void* self, const char* signal) {
    return QKeySequenceEdit_Receivers((QKeySequenceEdit*)self, signal);
}

int32_t q_keysequenceedit_qbase_receivers(void* self, const char* signal) {
    return QKeySequenceEdit_QBaseReceivers((QKeySequenceEdit*)self, signal);
}

void q_keysequenceedit_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QKeySequenceEdit_OnReceivers((QKeySequenceEdit*)self, (intptr_t)callback);
}

bool q_keysequenceedit_is_signal_connected(void* self, void* signal) {
    return QKeySequenceEdit_IsSignalConnected((QKeySequenceEdit*)self, (QMetaMethod*)signal);
}

bool q_keysequenceedit_qbase_is_signal_connected(void* self, void* signal) {
    return QKeySequenceEdit_QBaseIsSignalConnected((QKeySequenceEdit*)self, (QMetaMethod*)signal);
}

void q_keysequenceedit_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QKeySequenceEdit_OnIsSignalConnected((QKeySequenceEdit*)self, (intptr_t)callback);
}

double q_keysequenceedit_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QKeySequenceEdit_GetDecodedMetricF((QKeySequenceEdit*)self, metricA, metricB);
}

double q_keysequenceedit_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QKeySequenceEdit_QBaseGetDecodedMetricF((QKeySequenceEdit*)self, metricA, metricB);
}

void q_keysequenceedit_on_get_decoded_metric_f(void* self, double (*callback)(void*, int64_t, int64_t)) {
    QKeySequenceEdit_OnGetDecodedMetricF((QKeySequenceEdit*)self, (intptr_t)callback);
}

void q_keysequenceedit_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_keysequenceedit_delete(void* self) {
    QKeySequenceEdit_Delete((QKeySequenceEdit*)(self));
}
