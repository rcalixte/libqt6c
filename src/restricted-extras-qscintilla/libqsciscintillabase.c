#include "../libqabstractscrollarea.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqframe.hpp"
#include "../libqimage.hpp"
#include "../libqmargins.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqmimedata.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpixmap.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "../libqscrollbar.hpp"
#include "../libqsize.hpp"
#include "../libqstyleoption.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libqsciscintillabase.hpp"
#include "libqsciscintillabase.h"

QsciScintillaBase* q_sciscintillabase_new(void* parent) {
    return QsciScintillaBase_new((QWidget*)parent);
}

QsciScintillaBase* q_sciscintillabase_new2() {
    return QsciScintillaBase_new2();
}

const QMetaObject* q_sciscintillabase_meta_object(void* self) {
    return QsciScintillaBase_MetaObject((QsciScintillaBase*)self);
}

void* q_sciscintillabase_metacast(void* self, const char* param1) {
    return QsciScintillaBase_Metacast((QsciScintillaBase*)self, param1);
}

int32_t q_sciscintillabase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciScintillaBase_Metacall((QsciScintillaBase*)self, param1, param2, param3);
}

void q_sciscintillabase_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciScintillaBase_OnMetacall((QsciScintillaBase*)self, (intptr_t)callback);
}

int32_t q_sciscintillabase_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciScintillaBase_QBaseMetacall((QsciScintillaBase*)self, param1, param2, param3);
}

const char* q_sciscintillabase_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QsciScintillaBase* q_sciscintillabase_pool() {
    return QsciScintillaBase_Pool();
}

void q_sciscintillabase_replace_horizontal_scroll_bar(void* self, void* scrollBar) {
    QsciScintillaBase_ReplaceHorizontalScrollBar((QsciScintillaBase*)self, (QScrollBar*)scrollBar);
}

void q_sciscintillabase_replace_vertical_scroll_bar(void* self, void* scrollBar) {
    QsciScintillaBase_ReplaceVerticalScrollBar((QsciScintillaBase*)self, (QScrollBar*)scrollBar);
}

int64_t q_sciscintillabase_send_scintilla(void* self, uint32_t msg) {
    return QsciScintillaBase_SendScintilla((QsciScintillaBase*)self, msg);
}

int64_t q_sciscintillabase_send_scintilla2(void* self, uint32_t msg, uint64_t wParam, void* lParam) {
    return QsciScintillaBase_SendScintilla2((QsciScintillaBase*)self, msg, wParam, lParam);
}

int64_t q_sciscintillabase_send_scintilla3(void* self, uint32_t msg, uintptr_t wParam, const char* lParam) {
    return QsciScintillaBase_SendScintilla3((QsciScintillaBase*)self, msg, wParam, lParam);
}

int64_t q_sciscintillabase_send_scintilla4(void* self, uint32_t msg, const char* lParam) {
    return QsciScintillaBase_SendScintilla4((QsciScintillaBase*)self, msg, lParam);
}

int64_t q_sciscintillabase_send_scintilla5(void* self, uint32_t msg, const char* wParam, const char* lParam) {
    return QsciScintillaBase_SendScintilla5((QsciScintillaBase*)self, msg, wParam, lParam);
}

int64_t q_sciscintillabase_send_scintilla6(void* self, uint32_t msg, int64_t wParam) {
    return QsciScintillaBase_SendScintilla6((QsciScintillaBase*)self, msg, wParam);
}

int64_t q_sciscintillabase_send_scintilla7(void* self, uint32_t msg, int wParam) {
    return QsciScintillaBase_SendScintilla7((QsciScintillaBase*)self, msg, wParam);
}

int64_t q_sciscintillabase_send_scintilla8(void* self, uint32_t msg, int64_t cpMin, int64_t cpMax, char* lpstrText) {
    return QsciScintillaBase_SendScintilla8((QsciScintillaBase*)self, msg, cpMin, cpMax, lpstrText);
}

int64_t q_sciscintillabase_send_scintilla9(void* self, uint32_t msg, uint64_t wParam, void* col) {
    return QsciScintillaBase_SendScintilla9((QsciScintillaBase*)self, msg, wParam, (QColor*)col);
}

int64_t q_sciscintillabase_send_scintilla10(void* self, uint32_t msg, void* col) {
    return QsciScintillaBase_SendScintilla10((QsciScintillaBase*)self, msg, (QColor*)col);
}

int64_t q_sciscintillabase_send_scintilla11(void* self, uint32_t msg, uint64_t wParam, void* hdc, void* rc, int64_t cpMin, int64_t cpMax) {
    return QsciScintillaBase_SendScintilla11((QsciScintillaBase*)self, msg, wParam, (QPainter*)hdc, (QRect*)rc, cpMin, cpMax);
}

int64_t q_sciscintillabase_send_scintilla12(void* self, uint32_t msg, uint64_t wParam, void* lParam) {
    return QsciScintillaBase_SendScintilla12((QsciScintillaBase*)self, msg, wParam, (QPixmap*)lParam);
}

int64_t q_sciscintillabase_send_scintilla13(void* self, uint32_t msg, uint64_t wParam, void* lParam) {
    return QsciScintillaBase_SendScintilla13((QsciScintillaBase*)self, msg, wParam, (QImage*)lParam);
}

void* q_sciscintillabase_send_scintilla_ptr_result(void* self, uint32_t msg) {
    return QsciScintillaBase_SendScintillaPtrResult((QsciScintillaBase*)self, msg);
}

int32_t q_sciscintillabase_command_key(int qt_key, int* modifiers) {
    return QsciScintillaBase_CommandKey(qt_key, modifiers);
}

void q_sciscintillabase_q_s_c_n__s_e_l_c_h_a_n_g_e_d(void* self, bool yes) {
    QsciScintillaBase_QSCN_SELCHANGED((QsciScintillaBase*)self, yes);
}

void q_sciscintillabase_s_c_n__a_u_t_o_c_c_a_n_c_e_l_l_e_d(void* self) {
    QsciScintillaBase_SCN_AUTOCCANCELLED((QsciScintillaBase*)self);
}

void q_sciscintillabase_s_c_n__a_u_t_o_c_c_h_a_r_d_e_l_e_t_e_d(void* self) {
    QsciScintillaBase_SCN_AUTOCCHARDELETED((QsciScintillaBase*)self);
}

void q_sciscintillabase_s_c_n__a_u_t_o_c_c_o_m_p_l_e_t_e_d(void* self, const char* selection, int position, int ch, int method) {
    QsciScintillaBase_SCN_AUTOCCOMPLETED((QsciScintillaBase*)self, selection, position, ch, method);
}

void q_sciscintillabase_s_c_n__a_u_t_o_c_s_e_l_e_c_t_i_o_n(void* self, const char* selection, int position, int ch, int method) {
    QsciScintillaBase_SCN_AUTOCSELECTION((QsciScintillaBase*)self, selection, position, ch, method);
}

void q_sciscintillabase_s_c_n__a_u_t_o_c_s_e_l_e_c_t_i_o_n2(void* self, const char* selection, int position) {
    QsciScintillaBase_SCN_AUTOCSELECTION2((QsciScintillaBase*)self, selection, position);
}

void q_sciscintillabase_s_c_n__a_u_t_o_c_s_e_l_e_c_t_i_o_n_c_h_a_n_g_e(void* self, const char* selection, int id, int position) {
    QsciScintillaBase_SCN_AUTOCSELECTIONCHANGE((QsciScintillaBase*)self, selection, id, position);
}

void q_sciscintillabase_s_c_e_n__c_h_a_n_g_e(void* self) {
    QsciScintillaBase_SCEN_CHANGE((QsciScintillaBase*)self);
}

void q_sciscintillabase_s_c_n__c_a_l_l_t_i_p_c_l_i_c_k(void* self, int direction) {
    QsciScintillaBase_SCN_CALLTIPCLICK((QsciScintillaBase*)self, direction);
}

void q_sciscintillabase_s_c_n__c_h_a_r_a_d_d_e_d(void* self, int charadded) {
    QsciScintillaBase_SCN_CHARADDED((QsciScintillaBase*)self, charadded);
}

void q_sciscintillabase_s_c_n__d_o_u_b_l_e_c_l_i_c_k(void* self, int position, int line, int modifiers) {
    QsciScintillaBase_SCN_DOUBLECLICK((QsciScintillaBase*)self, position, line, modifiers);
}

void q_sciscintillabase_s_c_n__d_w_e_l_l_e_n_d(void* self, int position, int x, int y) {
    QsciScintillaBase_SCN_DWELLEND((QsciScintillaBase*)self, position, x, y);
}

void q_sciscintillabase_s_c_n__d_w_e_l_l_s_t_a_r_t(void* self, int position, int x, int y) {
    QsciScintillaBase_SCN_DWELLSTART((QsciScintillaBase*)self, position, x, y);
}

void q_sciscintillabase_s_c_n__f_o_c_u_s_i_n(void* self) {
    QsciScintillaBase_SCN_FOCUSIN((QsciScintillaBase*)self);
}

void q_sciscintillabase_s_c_n__f_o_c_u_s_o_u_t(void* self) {
    QsciScintillaBase_SCN_FOCUSOUT((QsciScintillaBase*)self);
}

void q_sciscintillabase_s_c_n__h_o_t_s_p_o_t_c_l_i_c_k(void* self, int position, int modifiers) {
    QsciScintillaBase_SCN_HOTSPOTCLICK((QsciScintillaBase*)self, position, modifiers);
}

void q_sciscintillabase_s_c_n__h_o_t_s_p_o_t_d_o_u_b_l_e_c_l_i_c_k(void* self, int position, int modifiers) {
    QsciScintillaBase_SCN_HOTSPOTDOUBLECLICK((QsciScintillaBase*)self, position, modifiers);
}

void q_sciscintillabase_s_c_n__h_o_t_s_p_o_t_r_e_l_e_a_s_e_c_l_i_c_k(void* self, int position, int modifiers) {
    QsciScintillaBase_SCN_HOTSPOTRELEASECLICK((QsciScintillaBase*)self, position, modifiers);
}

void q_sciscintillabase_s_c_n__i_n_d_i_c_a_t_o_r_c_l_i_c_k(void* self, int position, int modifiers) {
    QsciScintillaBase_SCN_INDICATORCLICK((QsciScintillaBase*)self, position, modifiers);
}

void q_sciscintillabase_s_c_n__i_n_d_i_c_a_t_o_r_r_e_l_e_a_s_e(void* self, int position, int modifiers) {
    QsciScintillaBase_SCN_INDICATORRELEASE((QsciScintillaBase*)self, position, modifiers);
}

void q_sciscintillabase_s_c_n__m_a_c_r_o_r_e_c_o_r_d(void* self, uint32_t param1, uint64_t param2, void* param3) {
    QsciScintillaBase_SCN_MACRORECORD((QsciScintillaBase*)self, param1, param2, param3);
}

void q_sciscintillabase_s_c_n__m_a_r_g_i_n_c_l_i_c_k(void* self, int position, int modifiers, int margin) {
    QsciScintillaBase_SCN_MARGINCLICK((QsciScintillaBase*)self, position, modifiers, margin);
}

void q_sciscintillabase_s_c_n__m_a_r_g_i_n_r_i_g_h_t_c_l_i_c_k(void* self, int position, int modifiers, int margin) {
    QsciScintillaBase_SCN_MARGINRIGHTCLICK((QsciScintillaBase*)self, position, modifiers, margin);
}

void q_sciscintillabase_s_c_n__m_o_d_i_f_i_e_d(void* self, int param1, int param2, const char* param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10) {
    QsciScintillaBase_SCN_MODIFIED((QsciScintillaBase*)self, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10);
}

void q_sciscintillabase_s_c_n__m_o_d_i_f_y_a_t_t_e_m_p_t_r_o(void* self) {
    QsciScintillaBase_SCN_MODIFYATTEMPTRO((QsciScintillaBase*)self);
}

void q_sciscintillabase_s_c_n__n_e_e_d_s_h_o_w_n(void* self, int param1, int param2) {
    QsciScintillaBase_SCN_NEEDSHOWN((QsciScintillaBase*)self, param1, param2);
}

void q_sciscintillabase_s_c_n__p_a_i_n_t_e_d(void* self) {
    QsciScintillaBase_SCN_PAINTED((QsciScintillaBase*)self);
}

void q_sciscintillabase_s_c_n__s_a_v_e_p_o_i_n_t_l_e_f_t(void* self) {
    QsciScintillaBase_SCN_SAVEPOINTLEFT((QsciScintillaBase*)self);
}

void q_sciscintillabase_s_c_n__s_a_v_e_p_o_i_n_t_r_e_a_c_h_e_d(void* self) {
    QsciScintillaBase_SCN_SAVEPOINTREACHED((QsciScintillaBase*)self);
}

void q_sciscintillabase_s_c_n__s_t_y_l_e_n_e_e_d_e_d(void* self, int position) {
    QsciScintillaBase_SCN_STYLENEEDED((QsciScintillaBase*)self, position);
}

void q_sciscintillabase_s_c_n__u_r_i_d_r_o_p_p_e_d(void* self, void* url) {
    QsciScintillaBase_SCN_URIDROPPED((QsciScintillaBase*)self, (QUrl*)url);
}

void q_sciscintillabase_s_c_n__u_p_d_a_t_e_u_i(void* self, int updated) {
    QsciScintillaBase_SCN_UPDATEUI((QsciScintillaBase*)self, updated);
}

void q_sciscintillabase_s_c_n__u_s_e_r_l_i_s_t_s_e_l_e_c_t_i_o_n(void* self, const char* selection, int id, int ch, int method, int position) {
    QsciScintillaBase_SCN_USERLISTSELECTION((QsciScintillaBase*)self, selection, id, ch, method, position);
}

void q_sciscintillabase_s_c_n__u_s_e_r_l_i_s_t_s_e_l_e_c_t_i_o_n2(void* self, const char* selection, int id, int ch, int method) {
    QsciScintillaBase_SCN_USERLISTSELECTION2((QsciScintillaBase*)self, selection, id, ch, method);
}

void q_sciscintillabase_s_c_n__u_s_e_r_l_i_s_t_s_e_l_e_c_t_i_o_n3(void* self, const char* selection, int id) {
    QsciScintillaBase_SCN_USERLISTSELECTION3((QsciScintillaBase*)self, selection, id);
}

void q_sciscintillabase_s_c_n__z_o_o_m(void* self) {
    QsciScintillaBase_SCN_ZOOM((QsciScintillaBase*)self);
}

bool q_sciscintillabase_can_insert_from_mime_data(void* self, void* source) {
    return QsciScintillaBase_CanInsertFromMimeData((QsciScintillaBase*)self, (QMimeData*)source);
}

void q_sciscintillabase_on_can_insert_from_mime_data(void* self, bool (*callback)(void*, void*)) {
    QsciScintillaBase_OnCanInsertFromMimeData((QsciScintillaBase*)self, (intptr_t)callback);
}

bool q_sciscintillabase_qbase_can_insert_from_mime_data(void* self, void* source) {
    return QsciScintillaBase_QBaseCanInsertFromMimeData((QsciScintillaBase*)self, (QMimeData*)source);
}

char* q_sciscintillabase_from_mime_data(void* self, void* source, bool* rectangular) {
    libqt_string _str = QsciScintillaBase_FromMimeData((QsciScintillaBase*)self, (QMimeData*)source, (bool*)rectangular);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sciscintillabase_on_from_mime_data(void* self, char* (*callback)(void*, void*, bool*)) {
    QsciScintillaBase_OnFromMimeData((QsciScintillaBase*)self, (intptr_t)callback);
}

char* q_sciscintillabase_qbase_from_mime_data(void* self, void* source, bool* rectangular) {
    libqt_string _str = QsciScintillaBase_QBaseFromMimeData((QsciScintillaBase*)self, (QMimeData*)source, (bool*)rectangular);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QMimeData* q_sciscintillabase_to_mime_data(void* self, const char* text, bool rectangular) {
    return QsciScintillaBase_ToMimeData((QsciScintillaBase*)self, qstring(text), rectangular);
}

void q_sciscintillabase_on_to_mime_data(void* self, QMimeData* (*callback)(void*, const char*, bool)) {
    QsciScintillaBase_OnToMimeData((QsciScintillaBase*)self, (intptr_t)callback);
}

QMimeData* q_sciscintillabase_qbase_to_mime_data(void* self, const char* text, bool rectangular) {
    return QsciScintillaBase_QBaseToMimeData((QsciScintillaBase*)self, qstring(text), rectangular);
}

void q_sciscintillabase_change_event(void* self, void* e) {
    QsciScintillaBase_ChangeEvent((QsciScintillaBase*)self, (QEvent*)e);
}

void q_sciscintillabase_on_change_event(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnChangeEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_qbase_change_event(void* self, void* e) {
    QsciScintillaBase_QBaseChangeEvent((QsciScintillaBase*)self, (QEvent*)e);
}

void q_sciscintillabase_context_menu_event(void* self, void* e) {
    QsciScintillaBase_ContextMenuEvent((QsciScintillaBase*)self, (QContextMenuEvent*)e);
}

void q_sciscintillabase_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnContextMenuEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_qbase_context_menu_event(void* self, void* e) {
    QsciScintillaBase_QBaseContextMenuEvent((QsciScintillaBase*)self, (QContextMenuEvent*)e);
}

void q_sciscintillabase_drag_enter_event(void* self, void* e) {
    QsciScintillaBase_DragEnterEvent((QsciScintillaBase*)self, (QDragEnterEvent*)e);
}

void q_sciscintillabase_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnDragEnterEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_qbase_drag_enter_event(void* self, void* e) {
    QsciScintillaBase_QBaseDragEnterEvent((QsciScintillaBase*)self, (QDragEnterEvent*)e);
}

void q_sciscintillabase_drag_leave_event(void* self, void* e) {
    QsciScintillaBase_DragLeaveEvent((QsciScintillaBase*)self, (QDragLeaveEvent*)e);
}

void q_sciscintillabase_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnDragLeaveEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_qbase_drag_leave_event(void* self, void* e) {
    QsciScintillaBase_QBaseDragLeaveEvent((QsciScintillaBase*)self, (QDragLeaveEvent*)e);
}

void q_sciscintillabase_drag_move_event(void* self, void* e) {
    QsciScintillaBase_DragMoveEvent((QsciScintillaBase*)self, (QDragMoveEvent*)e);
}

void q_sciscintillabase_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnDragMoveEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_qbase_drag_move_event(void* self, void* e) {
    QsciScintillaBase_QBaseDragMoveEvent((QsciScintillaBase*)self, (QDragMoveEvent*)e);
}

void q_sciscintillabase_drop_event(void* self, void* e) {
    QsciScintillaBase_DropEvent((QsciScintillaBase*)self, (QDropEvent*)e);
}

void q_sciscintillabase_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnDropEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_qbase_drop_event(void* self, void* e) {
    QsciScintillaBase_QBaseDropEvent((QsciScintillaBase*)self, (QDropEvent*)e);
}

void q_sciscintillabase_focus_in_event(void* self, void* e) {
    QsciScintillaBase_FocusInEvent((QsciScintillaBase*)self, (QFocusEvent*)e);
}

void q_sciscintillabase_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnFocusInEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_qbase_focus_in_event(void* self, void* e) {
    QsciScintillaBase_QBaseFocusInEvent((QsciScintillaBase*)self, (QFocusEvent*)e);
}

void q_sciscintillabase_focus_out_event(void* self, void* e) {
    QsciScintillaBase_FocusOutEvent((QsciScintillaBase*)self, (QFocusEvent*)e);
}

void q_sciscintillabase_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnFocusOutEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_qbase_focus_out_event(void* self, void* e) {
    QsciScintillaBase_QBaseFocusOutEvent((QsciScintillaBase*)self, (QFocusEvent*)e);
}

bool q_sciscintillabase_focus_next_prev_child(void* self, bool next) {
    return QsciScintillaBase_FocusNextPrevChild((QsciScintillaBase*)self, next);
}

void q_sciscintillabase_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QsciScintillaBase_OnFocusNextPrevChild((QsciScintillaBase*)self, (intptr_t)callback);
}

bool q_sciscintillabase_qbase_focus_next_prev_child(void* self, bool next) {
    return QsciScintillaBase_QBaseFocusNextPrevChild((QsciScintillaBase*)self, next);
}

void q_sciscintillabase_key_press_event(void* self, void* e) {
    QsciScintillaBase_KeyPressEvent((QsciScintillaBase*)self, (QKeyEvent*)e);
}

void q_sciscintillabase_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnKeyPressEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_qbase_key_press_event(void* self, void* e) {
    QsciScintillaBase_QBaseKeyPressEvent((QsciScintillaBase*)self, (QKeyEvent*)e);
}

void q_sciscintillabase_input_method_event(void* self, void* event) {
    QsciScintillaBase_InputMethodEvent((QsciScintillaBase*)self, (QInputMethodEvent*)event);
}

void q_sciscintillabase_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnInputMethodEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_qbase_input_method_event(void* self, void* event) {
    QsciScintillaBase_QBaseInputMethodEvent((QsciScintillaBase*)self, (QInputMethodEvent*)event);
}

QVariant* q_sciscintillabase_input_method_query(void* self, int64_t query) {
    return QsciScintillaBase_InputMethodQuery((QsciScintillaBase*)self, query);
}

void q_sciscintillabase_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    QsciScintillaBase_OnInputMethodQuery((QsciScintillaBase*)self, (intptr_t)callback);
}

QVariant* q_sciscintillabase_qbase_input_method_query(void* self, int64_t query) {
    return QsciScintillaBase_QBaseInputMethodQuery((QsciScintillaBase*)self, query);
}

void q_sciscintillabase_mouse_double_click_event(void* self, void* e) {
    QsciScintillaBase_MouseDoubleClickEvent((QsciScintillaBase*)self, (QMouseEvent*)e);
}

void q_sciscintillabase_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnMouseDoubleClickEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_qbase_mouse_double_click_event(void* self, void* e) {
    QsciScintillaBase_QBaseMouseDoubleClickEvent((QsciScintillaBase*)self, (QMouseEvent*)e);
}

void q_sciscintillabase_mouse_move_event(void* self, void* e) {
    QsciScintillaBase_MouseMoveEvent((QsciScintillaBase*)self, (QMouseEvent*)e);
}

void q_sciscintillabase_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnMouseMoveEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_qbase_mouse_move_event(void* self, void* e) {
    QsciScintillaBase_QBaseMouseMoveEvent((QsciScintillaBase*)self, (QMouseEvent*)e);
}

void q_sciscintillabase_mouse_press_event(void* self, void* e) {
    QsciScintillaBase_MousePressEvent((QsciScintillaBase*)self, (QMouseEvent*)e);
}

void q_sciscintillabase_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnMousePressEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_qbase_mouse_press_event(void* self, void* e) {
    QsciScintillaBase_QBaseMousePressEvent((QsciScintillaBase*)self, (QMouseEvent*)e);
}

void q_sciscintillabase_mouse_release_event(void* self, void* e) {
    QsciScintillaBase_MouseReleaseEvent((QsciScintillaBase*)self, (QMouseEvent*)e);
}

void q_sciscintillabase_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnMouseReleaseEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_qbase_mouse_release_event(void* self, void* e) {
    QsciScintillaBase_QBaseMouseReleaseEvent((QsciScintillaBase*)self, (QMouseEvent*)e);
}

void q_sciscintillabase_paint_event(void* self, void* e) {
    QsciScintillaBase_PaintEvent((QsciScintillaBase*)self, (QPaintEvent*)e);
}

void q_sciscintillabase_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnPaintEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_qbase_paint_event(void* self, void* e) {
    QsciScintillaBase_QBasePaintEvent((QsciScintillaBase*)self, (QPaintEvent*)e);
}

void q_sciscintillabase_resize_event(void* self, void* e) {
    QsciScintillaBase_ResizeEvent((QsciScintillaBase*)self, (QResizeEvent*)e);
}

void q_sciscintillabase_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnResizeEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_qbase_resize_event(void* self, void* e) {
    QsciScintillaBase_QBaseResizeEvent((QsciScintillaBase*)self, (QResizeEvent*)e);
}

void q_sciscintillabase_scroll_contents_by(void* self, int dx, int dy) {
    QsciScintillaBase_ScrollContentsBy((QsciScintillaBase*)self, dx, dy);
}

void q_sciscintillabase_on_scroll_contents_by(void* self, void (*callback)(void*, int, int)) {
    QsciScintillaBase_OnScrollContentsBy((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QsciScintillaBase_QBaseScrollContentsBy((QsciScintillaBase*)self, dx, dy);
}

void q_sciscintillabase_set_scroll_bars(void* self) {
    QsciScintillaBase_SetScrollBars((QsciScintillaBase*)self);
}

void q_sciscintillabase_on_set_scroll_bars(void* self, void (*callback)()) {
    QsciScintillaBase_OnSetScrollBars((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_qbase_set_scroll_bars(void* self) {
    QsciScintillaBase_QBaseSetScrollBars((QsciScintillaBase*)self);
}

bool q_sciscintillabase_context_menu_needed(void* self, int x, int y) {
    return QsciScintillaBase_ContextMenuNeeded((QsciScintillaBase*)self, x, y);
}

void q_sciscintillabase_on_context_menu_needed(void* self, bool (*callback)(void*, int, int)) {
    QsciScintillaBase_OnContextMenuNeeded((QsciScintillaBase*)self, (intptr_t)callback);
}

bool q_sciscintillabase_qbase_context_menu_needed(void* self, int x, int y) {
    return QsciScintillaBase_QBaseContextMenuNeeded((QsciScintillaBase*)self, x, y);
}

const char* q_sciscintillabase_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sciscintillabase_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_sciscintillabase_send_scintilla22(void* self, uint32_t msg, uint64_t wParam) {
    return QsciScintillaBase_SendScintilla22((QsciScintillaBase*)self, msg, wParam);
}

int64_t q_sciscintillabase_send_scintilla32(void* self, uint32_t msg, uint64_t wParam, int64_t lParam) {
    return QsciScintillaBase_SendScintilla32((QsciScintillaBase*)self, msg, wParam, lParam);
}

int32_t q_sciscintillabase_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_sciscintillabase_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

QScrollBar* q_sciscintillabase_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

void q_sciscintillabase_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

int32_t q_sciscintillabase_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_sciscintillabase_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

QScrollBar* q_sciscintillabase_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

void q_sciscintillabase_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

QWidget* q_sciscintillabase_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

void q_sciscintillabase_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

void q_sciscintillabase_add_scroll_bar_widget(void* self, void* widget, int32_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

libqt_list /* of QWidget* */ q_sciscintillabase_scroll_bar_widgets(void* self, int32_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

QWidget* q_sciscintillabase_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

void q_sciscintillabase_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

QSize* q_sciscintillabase_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

int32_t q_sciscintillabase_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

void q_sciscintillabase_set_size_adjust_policy(void* self, int32_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

int32_t q_sciscintillabase_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void q_sciscintillabase_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t q_sciscintillabase_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int32_t q_sciscintillabase_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void q_sciscintillabase_set_frame_shape(void* self, int32_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int32_t q_sciscintillabase_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void q_sciscintillabase_set_frame_shadow(void* self, int32_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t q_sciscintillabase_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void q_sciscintillabase_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t q_sciscintillabase_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void q_sciscintillabase_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* q_sciscintillabase_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void q_sciscintillabase_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t q_sciscintillabase_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_sciscintillabase_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_sciscintillabase_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_sciscintillabase_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_sciscintillabase_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_sciscintillabase_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_sciscintillabase_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_sciscintillabase_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_sciscintillabase_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_sciscintillabase_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_sciscintillabase_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_sciscintillabase_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_sciscintillabase_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_sciscintillabase_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_sciscintillabase_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_sciscintillabase_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_sciscintillabase_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_sciscintillabase_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_sciscintillabase_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_sciscintillabase_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_sciscintillabase_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_sciscintillabase_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_sciscintillabase_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_sciscintillabase_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_sciscintillabase_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_sciscintillabase_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_sciscintillabase_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_sciscintillabase_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_sciscintillabase_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_sciscintillabase_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_sciscintillabase_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_sciscintillabase_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_sciscintillabase_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_sciscintillabase_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_sciscintillabase_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_sciscintillabase_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_sciscintillabase_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_sciscintillabase_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_sciscintillabase_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_sciscintillabase_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_sciscintillabase_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_sciscintillabase_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_sciscintillabase_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_sciscintillabase_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_sciscintillabase_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_sciscintillabase_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_sciscintillabase_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_sciscintillabase_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_sciscintillabase_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_sciscintillabase_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_sciscintillabase_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_sciscintillabase_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_sciscintillabase_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_sciscintillabase_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_sciscintillabase_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_sciscintillabase_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_sciscintillabase_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_sciscintillabase_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_sciscintillabase_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_sciscintillabase_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_sciscintillabase_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_sciscintillabase_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_sciscintillabase_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_sciscintillabase_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_sciscintillabase_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_sciscintillabase_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_sciscintillabase_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_sciscintillabase_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_sciscintillabase_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_sciscintillabase_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_sciscintillabase_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_sciscintillabase_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_sciscintillabase_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_sciscintillabase_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_sciscintillabase_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_sciscintillabase_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_sciscintillabase_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_sciscintillabase_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_sciscintillabase_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_sciscintillabase_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_sciscintillabase_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_sciscintillabase_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_sciscintillabase_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_sciscintillabase_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_sciscintillabase_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_sciscintillabase_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_sciscintillabase_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_sciscintillabase_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_sciscintillabase_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_sciscintillabase_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_sciscintillabase_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_sciscintillabase_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_sciscintillabase_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_sciscintillabase_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_sciscintillabase_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_sciscintillabase_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_sciscintillabase_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_sciscintillabase_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_sciscintillabase_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_sciscintillabase_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sciscintillabase_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sciscintillabase_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_sciscintillabase_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_sciscintillabase_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_sciscintillabase_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sciscintillabase_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_sciscintillabase_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sciscintillabase_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_sciscintillabase_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sciscintillabase_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_sciscintillabase_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_sciscintillabase_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_sciscintillabase_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_sciscintillabase_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sciscintillabase_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_sciscintillabase_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_sciscintillabase_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_sciscintillabase_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sciscintillabase_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_sciscintillabase_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sciscintillabase_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sciscintillabase_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_sciscintillabase_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sciscintillabase_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_sciscintillabase_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_sciscintillabase_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_sciscintillabase_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_sciscintillabase_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_sciscintillabase_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_sciscintillabase_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_sciscintillabase_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_sciscintillabase_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_sciscintillabase_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_sciscintillabase_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_sciscintillabase_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_sciscintillabase_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_sciscintillabase_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_sciscintillabase_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_sciscintillabase_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_sciscintillabase_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_sciscintillabase_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_sciscintillabase_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_sciscintillabase_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_sciscintillabase_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_sciscintillabase_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_sciscintillabase_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_sciscintillabase_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_sciscintillabase_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_sciscintillabase_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_sciscintillabase_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_sciscintillabase_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_sciscintillabase_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_sciscintillabase_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_sciscintillabase_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_sciscintillabase_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_sciscintillabase_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_sciscintillabase_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_sciscintillabase_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_sciscintillabase_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_sciscintillabase_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_sciscintillabase_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_sciscintillabase_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_sciscintillabase_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_sciscintillabase_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_sciscintillabase_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_sciscintillabase_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_sciscintillabase_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_sciscintillabase_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_sciscintillabase_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_sciscintillabase_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_sciscintillabase_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_sciscintillabase_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_sciscintillabase_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_sciscintillabase_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_sciscintillabase_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_sciscintillabase_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_sciscintillabase_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_sciscintillabase_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_sciscintillabase_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_sciscintillabase_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_sciscintillabase_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_sciscintillabase_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_sciscintillabase_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_sciscintillabase_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_sciscintillabase_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_sciscintillabase_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_sciscintillabase_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_sciscintillabase_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_sciscintillabase_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_sciscintillabase_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_sciscintillabase_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_sciscintillabase_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_sciscintillabase_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_sciscintillabase_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_sciscintillabase_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_sciscintillabase_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_sciscintillabase_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_sciscintillabase_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_sciscintillabase_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_sciscintillabase_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_sciscintillabase_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_sciscintillabase_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_sciscintillabase_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_sciscintillabase_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_sciscintillabase_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_sciscintillabase_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_sciscintillabase_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_sciscintillabase_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_sciscintillabase_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_sciscintillabase_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_sciscintillabase_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_sciscintillabase_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_sciscintillabase_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_sciscintillabase_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_sciscintillabase_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_sciscintillabase_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_sciscintillabase_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_sciscintillabase_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_sciscintillabase_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_sciscintillabase_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_sciscintillabase_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_sciscintillabase_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_sciscintillabase_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_sciscintillabase_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_sciscintillabase_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_sciscintillabase_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_sciscintillabase_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_sciscintillabase_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t q_sciscintillabase_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_sciscintillabase_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_sciscintillabase_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t q_sciscintillabase_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_sciscintillabase_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_sciscintillabase_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_sciscintillabase_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_sciscintillabase_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_sciscintillabase_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_sciscintillabase_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_sciscintillabase_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_sciscintillabase_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_sciscintillabase_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_sciscintillabase_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_sciscintillabase_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_sciscintillabase_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_sciscintillabase_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_sciscintillabase_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_sciscintillabase_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_sciscintillabase_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_sciscintillabase_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_sciscintillabase_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_sciscintillabase_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_sciscintillabase_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_sciscintillabase_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_sciscintillabase_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_sciscintillabase_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t q_sciscintillabase_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_sciscintillabase_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_sciscintillabase_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_sciscintillabase_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_sciscintillabase_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_sciscintillabase_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_sciscintillabase_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_sciscintillabase_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_sciscintillabase_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_sciscintillabase_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_sciscintillabase_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_sciscintillabase_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_sciscintillabase_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_sciscintillabase_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_sciscintillabase_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_sciscintillabase_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_sciscintillabase_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_sciscintillabase_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sciscintillabase_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_sciscintillabase_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_sciscintillabase_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_sciscintillabase_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_sciscintillabase_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_sciscintillabase_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_sciscintillabase_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_sciscintillabase_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_sciscintillabase_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_sciscintillabase_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_sciscintillabase_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_sciscintillabase_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_sciscintillabase_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_sciscintillabase_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_sciscintillabase_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_sciscintillabase_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_sciscintillabase_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_sciscintillabase_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_sciscintillabase_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_sciscintillabase_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_sciscintillabase_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_sciscintillabase_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_sciscintillabase_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_sciscintillabase_dynamic_property_names");
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

QBindingStorage* q_sciscintillabase_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_sciscintillabase_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_sciscintillabase_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_sciscintillabase_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_sciscintillabase_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_sciscintillabase_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_sciscintillabase_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_sciscintillabase_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_sciscintillabase_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_sciscintillabase_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_sciscintillabase_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_sciscintillabase_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_sciscintillabase_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_sciscintillabase_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_sciscintillabase_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_sciscintillabase_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_sciscintillabase_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_sciscintillabase_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_sciscintillabase_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_sciscintillabase_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_sciscintillabase_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_sciscintillabase_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_sciscintillabase_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_sciscintillabase_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_sciscintillabase_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_sciscintillabase_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QSize* q_sciscintillabase_minimum_size_hint(void* self) {
    return QsciScintillaBase_MinimumSizeHint((QsciScintillaBase*)self);
}

QSize* q_sciscintillabase_qbase_minimum_size_hint(void* self) {
    return QsciScintillaBase_QBaseMinimumSizeHint((QsciScintillaBase*)self);
}

void q_sciscintillabase_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QsciScintillaBase_OnMinimumSizeHint((QsciScintillaBase*)self, (intptr_t)callback);
}

QSize* q_sciscintillabase_size_hint(void* self) {
    return QsciScintillaBase_SizeHint((QsciScintillaBase*)self);
}

QSize* q_sciscintillabase_qbase_size_hint(void* self) {
    return QsciScintillaBase_QBaseSizeHint((QsciScintillaBase*)self);
}

void q_sciscintillabase_on_size_hint(void* self, QSize* (*callback)()) {
    QsciScintillaBase_OnSizeHint((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_setup_viewport(void* self, void* viewport) {
    QsciScintillaBase_SetupViewport((QsciScintillaBase*)self, (QWidget*)viewport);
}

void q_sciscintillabase_qbase_setup_viewport(void* self, void* viewport) {
    QsciScintillaBase_QBaseSetupViewport((QsciScintillaBase*)self, (QWidget*)viewport);
}

void q_sciscintillabase_on_setup_viewport(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnSetupViewport((QsciScintillaBase*)self, (intptr_t)callback);
}

bool q_sciscintillabase_event_filter(void* self, void* param1, void* param2) {
    return QsciScintillaBase_EventFilter((QsciScintillaBase*)self, (QObject*)param1, (QEvent*)param2);
}

bool q_sciscintillabase_qbase_event_filter(void* self, void* param1, void* param2) {
    return QsciScintillaBase_QBaseEventFilter((QsciScintillaBase*)self, (QObject*)param1, (QEvent*)param2);
}

void q_sciscintillabase_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciScintillaBase_OnEventFilter((QsciScintillaBase*)self, (intptr_t)callback);
}

bool q_sciscintillabase_event(void* self, void* param1) {
    return QsciScintillaBase_Event((QsciScintillaBase*)self, (QEvent*)param1);
}

bool q_sciscintillabase_qbase_event(void* self, void* param1) {
    return QsciScintillaBase_QBaseEvent((QsciScintillaBase*)self, (QEvent*)param1);
}

void q_sciscintillabase_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciScintillaBase_OnEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

bool q_sciscintillabase_viewport_event(void* self, void* param1) {
    return QsciScintillaBase_ViewportEvent((QsciScintillaBase*)self, (QEvent*)param1);
}

bool q_sciscintillabase_qbase_viewport_event(void* self, void* param1) {
    return QsciScintillaBase_QBaseViewportEvent((QsciScintillaBase*)self, (QEvent*)param1);
}

void q_sciscintillabase_on_viewport_event(void* self, bool (*callback)(void*, void*)) {
    QsciScintillaBase_OnViewportEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_wheel_event(void* self, void* param1) {
    QsciScintillaBase_WheelEvent((QsciScintillaBase*)self, (QWheelEvent*)param1);
}

void q_sciscintillabase_qbase_wheel_event(void* self, void* param1) {
    QsciScintillaBase_QBaseWheelEvent((QsciScintillaBase*)self, (QWheelEvent*)param1);
}

void q_sciscintillabase_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnWheelEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

QSize* q_sciscintillabase_viewport_size_hint(void* self) {
    return QsciScintillaBase_ViewportSizeHint((QsciScintillaBase*)self);
}

QSize* q_sciscintillabase_qbase_viewport_size_hint(void* self) {
    return QsciScintillaBase_QBaseViewportSizeHint((QsciScintillaBase*)self);
}

void q_sciscintillabase_on_viewport_size_hint(void* self, QSize* (*callback)()) {
    QsciScintillaBase_OnViewportSizeHint((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_init_style_option(void* self, void* option) {
    QsciScintillaBase_InitStyleOption((QsciScintillaBase*)self, (QStyleOptionFrame*)option);
}

void q_sciscintillabase_qbase_init_style_option(void* self, void* option) {
    QsciScintillaBase_QBaseInitStyleOption((QsciScintillaBase*)self, (QStyleOptionFrame*)option);
}

void q_sciscintillabase_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnInitStyleOption((QsciScintillaBase*)self, (intptr_t)callback);
}

int32_t q_sciscintillabase_dev_type(void* self) {
    return QsciScintillaBase_DevType((QsciScintillaBase*)self);
}

int32_t q_sciscintillabase_qbase_dev_type(void* self) {
    return QsciScintillaBase_QBaseDevType((QsciScintillaBase*)self);
}

void q_sciscintillabase_on_dev_type(void* self, int32_t (*callback)()) {
    QsciScintillaBase_OnDevType((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_set_visible(void* self, bool visible) {
    QsciScintillaBase_SetVisible((QsciScintillaBase*)self, visible);
}

void q_sciscintillabase_qbase_set_visible(void* self, bool visible) {
    QsciScintillaBase_QBaseSetVisible((QsciScintillaBase*)self, visible);
}

void q_sciscintillabase_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QsciScintillaBase_OnSetVisible((QsciScintillaBase*)self, (intptr_t)callback);
}

int32_t q_sciscintillabase_height_for_width(void* self, int param1) {
    return QsciScintillaBase_HeightForWidth((QsciScintillaBase*)self, param1);
}

int32_t q_sciscintillabase_qbase_height_for_width(void* self, int param1) {
    return QsciScintillaBase_QBaseHeightForWidth((QsciScintillaBase*)self, param1);
}

void q_sciscintillabase_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QsciScintillaBase_OnHeightForWidth((QsciScintillaBase*)self, (intptr_t)callback);
}

bool q_sciscintillabase_has_height_for_width(void* self) {
    return QsciScintillaBase_HasHeightForWidth((QsciScintillaBase*)self);
}

bool q_sciscintillabase_qbase_has_height_for_width(void* self) {
    return QsciScintillaBase_QBaseHasHeightForWidth((QsciScintillaBase*)self);
}

void q_sciscintillabase_on_has_height_for_width(void* self, bool (*callback)()) {
    QsciScintillaBase_OnHasHeightForWidth((QsciScintillaBase*)self, (intptr_t)callback);
}

QPaintEngine* q_sciscintillabase_paint_engine(void* self) {
    return QsciScintillaBase_PaintEngine((QsciScintillaBase*)self);
}

QPaintEngine* q_sciscintillabase_qbase_paint_engine(void* self) {
    return QsciScintillaBase_QBasePaintEngine((QsciScintillaBase*)self);
}

void q_sciscintillabase_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QsciScintillaBase_OnPaintEngine((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_key_release_event(void* self, void* event) {
    QsciScintillaBase_KeyReleaseEvent((QsciScintillaBase*)self, (QKeyEvent*)event);
}

void q_sciscintillabase_qbase_key_release_event(void* self, void* event) {
    QsciScintillaBase_QBaseKeyReleaseEvent((QsciScintillaBase*)self, (QKeyEvent*)event);
}

void q_sciscintillabase_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnKeyReleaseEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_enter_event(void* self, void* event) {
    QsciScintillaBase_EnterEvent((QsciScintillaBase*)self, (QEnterEvent*)event);
}

void q_sciscintillabase_qbase_enter_event(void* self, void* event) {
    QsciScintillaBase_QBaseEnterEvent((QsciScintillaBase*)self, (QEnterEvent*)event);
}

void q_sciscintillabase_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnEnterEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_leave_event(void* self, void* event) {
    QsciScintillaBase_LeaveEvent((QsciScintillaBase*)self, (QEvent*)event);
}

void q_sciscintillabase_qbase_leave_event(void* self, void* event) {
    QsciScintillaBase_QBaseLeaveEvent((QsciScintillaBase*)self, (QEvent*)event);
}

void q_sciscintillabase_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnLeaveEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_move_event(void* self, void* event) {
    QsciScintillaBase_MoveEvent((QsciScintillaBase*)self, (QMoveEvent*)event);
}

void q_sciscintillabase_qbase_move_event(void* self, void* event) {
    QsciScintillaBase_QBaseMoveEvent((QsciScintillaBase*)self, (QMoveEvent*)event);
}

void q_sciscintillabase_on_move_event(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnMoveEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_close_event(void* self, void* event) {
    QsciScintillaBase_CloseEvent((QsciScintillaBase*)self, (QCloseEvent*)event);
}

void q_sciscintillabase_qbase_close_event(void* self, void* event) {
    QsciScintillaBase_QBaseCloseEvent((QsciScintillaBase*)self, (QCloseEvent*)event);
}

void q_sciscintillabase_on_close_event(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnCloseEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_tablet_event(void* self, void* event) {
    QsciScintillaBase_TabletEvent((QsciScintillaBase*)self, (QTabletEvent*)event);
}

void q_sciscintillabase_qbase_tablet_event(void* self, void* event) {
    QsciScintillaBase_QBaseTabletEvent((QsciScintillaBase*)self, (QTabletEvent*)event);
}

void q_sciscintillabase_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnTabletEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_action_event(void* self, void* event) {
    QsciScintillaBase_ActionEvent((QsciScintillaBase*)self, (QActionEvent*)event);
}

void q_sciscintillabase_qbase_action_event(void* self, void* event) {
    QsciScintillaBase_QBaseActionEvent((QsciScintillaBase*)self, (QActionEvent*)event);
}

void q_sciscintillabase_on_action_event(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnActionEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_show_event(void* self, void* event) {
    QsciScintillaBase_ShowEvent((QsciScintillaBase*)self, (QShowEvent*)event);
}

void q_sciscintillabase_qbase_show_event(void* self, void* event) {
    QsciScintillaBase_QBaseShowEvent((QsciScintillaBase*)self, (QShowEvent*)event);
}

void q_sciscintillabase_on_show_event(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnShowEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_hide_event(void* self, void* event) {
    QsciScintillaBase_HideEvent((QsciScintillaBase*)self, (QHideEvent*)event);
}

void q_sciscintillabase_qbase_hide_event(void* self, void* event) {
    QsciScintillaBase_QBaseHideEvent((QsciScintillaBase*)self, (QHideEvent*)event);
}

void q_sciscintillabase_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnHideEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

bool q_sciscintillabase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QsciScintillaBase_NativeEvent((QsciScintillaBase*)self, qstring(eventType), message, result);
}

bool q_sciscintillabase_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QsciScintillaBase_QBaseNativeEvent((QsciScintillaBase*)self, qstring(eventType), message, result);
}

void q_sciscintillabase_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QsciScintillaBase_OnNativeEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

int32_t q_sciscintillabase_metric(void* self, int32_t param1) {
    return QsciScintillaBase_Metric((QsciScintillaBase*)self, param1);
}

int32_t q_sciscintillabase_qbase_metric(void* self, int32_t param1) {
    return QsciScintillaBase_QBaseMetric((QsciScintillaBase*)self, param1);
}

void q_sciscintillabase_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QsciScintillaBase_OnMetric((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_init_painter(void* self, void* painter) {
    QsciScintillaBase_InitPainter((QsciScintillaBase*)self, (QPainter*)painter);
}

void q_sciscintillabase_qbase_init_painter(void* self, void* painter) {
    QsciScintillaBase_QBaseInitPainter((QsciScintillaBase*)self, (QPainter*)painter);
}

void q_sciscintillabase_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnInitPainter((QsciScintillaBase*)self, (intptr_t)callback);
}

QPaintDevice* q_sciscintillabase_redirected(void* self, void* offset) {
    return QsciScintillaBase_Redirected((QsciScintillaBase*)self, (QPoint*)offset);
}

QPaintDevice* q_sciscintillabase_qbase_redirected(void* self, void* offset) {
    return QsciScintillaBase_QBaseRedirected((QsciScintillaBase*)self, (QPoint*)offset);
}

void q_sciscintillabase_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QsciScintillaBase_OnRedirected((QsciScintillaBase*)self, (intptr_t)callback);
}

QPainter* q_sciscintillabase_shared_painter(void* self) {
    return QsciScintillaBase_SharedPainter((QsciScintillaBase*)self);
}

QPainter* q_sciscintillabase_qbase_shared_painter(void* self) {
    return QsciScintillaBase_QBaseSharedPainter((QsciScintillaBase*)self);
}

void q_sciscintillabase_on_shared_painter(void* self, QPainter* (*callback)()) {
    QsciScintillaBase_OnSharedPainter((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_timer_event(void* self, void* event) {
    QsciScintillaBase_TimerEvent((QsciScintillaBase*)self, (QTimerEvent*)event);
}

void q_sciscintillabase_qbase_timer_event(void* self, void* event) {
    QsciScintillaBase_QBaseTimerEvent((QsciScintillaBase*)self, (QTimerEvent*)event);
}

void q_sciscintillabase_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnTimerEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_child_event(void* self, void* event) {
    QsciScintillaBase_ChildEvent((QsciScintillaBase*)self, (QChildEvent*)event);
}

void q_sciscintillabase_qbase_child_event(void* self, void* event) {
    QsciScintillaBase_QBaseChildEvent((QsciScintillaBase*)self, (QChildEvent*)event);
}

void q_sciscintillabase_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnChildEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_custom_event(void* self, void* event) {
    QsciScintillaBase_CustomEvent((QsciScintillaBase*)self, (QEvent*)event);
}

void q_sciscintillabase_qbase_custom_event(void* self, void* event) {
    QsciScintillaBase_QBaseCustomEvent((QsciScintillaBase*)self, (QEvent*)event);
}

void q_sciscintillabase_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnCustomEvent((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_connect_notify(void* self, void* signal) {
    QsciScintillaBase_ConnectNotify((QsciScintillaBase*)self, (QMetaMethod*)signal);
}

void q_sciscintillabase_qbase_connect_notify(void* self, void* signal) {
    QsciScintillaBase_QBaseConnectNotify((QsciScintillaBase*)self, (QMetaMethod*)signal);
}

void q_sciscintillabase_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnConnectNotify((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_disconnect_notify(void* self, void* signal) {
    QsciScintillaBase_DisconnectNotify((QsciScintillaBase*)self, (QMetaMethod*)signal);
}

void q_sciscintillabase_qbase_disconnect_notify(void* self, void* signal) {
    QsciScintillaBase_QBaseDisconnectNotify((QsciScintillaBase*)self, (QMetaMethod*)signal);
}

void q_sciscintillabase_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnDisconnectNotify((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QsciScintillaBase_SetViewportMargins((QsciScintillaBase*)self, left, top, right, bottom);
}

void q_sciscintillabase_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QsciScintillaBase_QBaseSetViewportMargins((QsciScintillaBase*)self, left, top, right, bottom);
}

void q_sciscintillabase_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int)) {
    QsciScintillaBase_OnSetViewportMargins((QsciScintillaBase*)self, (intptr_t)callback);
}

QMargins* q_sciscintillabase_viewport_margins(void* self) {
    return QsciScintillaBase_ViewportMargins((QsciScintillaBase*)self);
}

QMargins* q_sciscintillabase_qbase_viewport_margins(void* self) {
    return QsciScintillaBase_QBaseViewportMargins((QsciScintillaBase*)self);
}

void q_sciscintillabase_on_viewport_margins(void* self, QMargins* (*callback)()) {
    QsciScintillaBase_OnViewportMargins((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_draw_frame(void* self, void* param1) {
    QsciScintillaBase_DrawFrame((QsciScintillaBase*)self, (QPainter*)param1);
}

void q_sciscintillabase_qbase_draw_frame(void* self, void* param1) {
    QsciScintillaBase_QBaseDrawFrame((QsciScintillaBase*)self, (QPainter*)param1);
}

void q_sciscintillabase_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    QsciScintillaBase_OnDrawFrame((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_update_micro_focus(void* self) {
    QsciScintillaBase_UpdateMicroFocus((QsciScintillaBase*)self);
}

void q_sciscintillabase_qbase_update_micro_focus(void* self) {
    QsciScintillaBase_QBaseUpdateMicroFocus((QsciScintillaBase*)self);
}

void q_sciscintillabase_on_update_micro_focus(void* self, void (*callback)()) {
    QsciScintillaBase_OnUpdateMicroFocus((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_create(void* self) {
    QsciScintillaBase_Create((QsciScintillaBase*)self);
}

void q_sciscintillabase_qbase_create(void* self) {
    QsciScintillaBase_QBaseCreate((QsciScintillaBase*)self);
}

void q_sciscintillabase_on_create(void* self, void (*callback)()) {
    QsciScintillaBase_OnCreate((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_destroy(void* self) {
    QsciScintillaBase_Destroy((QsciScintillaBase*)self);
}

void q_sciscintillabase_qbase_destroy(void* self) {
    QsciScintillaBase_QBaseDestroy((QsciScintillaBase*)self);
}

void q_sciscintillabase_on_destroy(void* self, void (*callback)()) {
    QsciScintillaBase_OnDestroy((QsciScintillaBase*)self, (intptr_t)callback);
}

bool q_sciscintillabase_focus_next_child(void* self) {
    return QsciScintillaBase_FocusNextChild((QsciScintillaBase*)self);
}

bool q_sciscintillabase_qbase_focus_next_child(void* self) {
    return QsciScintillaBase_QBaseFocusNextChild((QsciScintillaBase*)self);
}

void q_sciscintillabase_on_focus_next_child(void* self, bool (*callback)()) {
    QsciScintillaBase_OnFocusNextChild((QsciScintillaBase*)self, (intptr_t)callback);
}

bool q_sciscintillabase_focus_previous_child(void* self) {
    return QsciScintillaBase_FocusPreviousChild((QsciScintillaBase*)self);
}

bool q_sciscintillabase_qbase_focus_previous_child(void* self) {
    return QsciScintillaBase_QBaseFocusPreviousChild((QsciScintillaBase*)self);
}

void q_sciscintillabase_on_focus_previous_child(void* self, bool (*callback)()) {
    QsciScintillaBase_OnFocusPreviousChild((QsciScintillaBase*)self, (intptr_t)callback);
}

QObject* q_sciscintillabase_sender(void* self) {
    return QsciScintillaBase_Sender((QsciScintillaBase*)self);
}

QObject* q_sciscintillabase_qbase_sender(void* self) {
    return QsciScintillaBase_QBaseSender((QsciScintillaBase*)self);
}

void q_sciscintillabase_on_sender(void* self, QObject* (*callback)()) {
    QsciScintillaBase_OnSender((QsciScintillaBase*)self, (intptr_t)callback);
}

int32_t q_sciscintillabase_sender_signal_index(void* self) {
    return QsciScintillaBase_SenderSignalIndex((QsciScintillaBase*)self);
}

int32_t q_sciscintillabase_qbase_sender_signal_index(void* self) {
    return QsciScintillaBase_QBaseSenderSignalIndex((QsciScintillaBase*)self);
}

void q_sciscintillabase_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciScintillaBase_OnSenderSignalIndex((QsciScintillaBase*)self, (intptr_t)callback);
}

int32_t q_sciscintillabase_receivers(void* self, const char* signal) {
    return QsciScintillaBase_Receivers((QsciScintillaBase*)self, signal);
}

int32_t q_sciscintillabase_qbase_receivers(void* self, const char* signal) {
    return QsciScintillaBase_QBaseReceivers((QsciScintillaBase*)self, signal);
}

void q_sciscintillabase_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciScintillaBase_OnReceivers((QsciScintillaBase*)self, (intptr_t)callback);
}

bool q_sciscintillabase_is_signal_connected(void* self, void* signal) {
    return QsciScintillaBase_IsSignalConnected((QsciScintillaBase*)self, (QMetaMethod*)signal);
}

bool q_sciscintillabase_qbase_is_signal_connected(void* self, void* signal) {
    return QsciScintillaBase_QBaseIsSignalConnected((QsciScintillaBase*)self, (QMetaMethod*)signal);
}

void q_sciscintillabase_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciScintillaBase_OnIsSignalConnected((QsciScintillaBase*)self, (intptr_t)callback);
}

double q_sciscintillabase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QsciScintillaBase_GetDecodedMetricF((QsciScintillaBase*)self, metricA, metricB);
}

double q_sciscintillabase_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QsciScintillaBase_QBaseGetDecodedMetricF((QsciScintillaBase*)self, metricA, metricB);
}

void q_sciscintillabase_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QsciScintillaBase_OnGetDecodedMetricF((QsciScintillaBase*)self, (intptr_t)callback);
}

void q_sciscintillabase_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_sciscintillabase_delete(void* self) {
    QsciScintillaBase_Delete((QsciScintillaBase*)(self));
}
