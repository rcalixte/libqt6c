#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCISCINTILLABASE_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCISCINTILLABASE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html

/// q_sciscintillabase_new constructs a new QsciScintillaBase object.
///
/// @param parent QWidget*
QsciScintillaBase* q_sciscintillabase_new(void* parent);

/// q_sciscintillabase_new2 constructs a new QsciScintillaBase object.
///
QsciScintillaBase* q_sciscintillabase_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QsciScintillaBase*
const QMetaObject* q_sciscintillabase_meta_object(void* self);

/// @param self QsciScintillaBase*
/// @param param1 const char*
void* q_sciscintillabase_metacast(void* self, const char* param1);

/// @param self QsciScintillaBase*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_sciscintillabase_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QsciScintillaBase*
/// @param callback int32_t fn(QsciScintillaBase*, enum QMetaObject__Call, int, void*)
void q_sciscintillabase_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QsciScintillaBase*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_sciscintillabase_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_sciscintillabase_tr(const char* s);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
QsciScintillaBase* q_sciscintillabase_pool();

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param scrollBar QScrollBar*
void q_sciscintillabase_replace_horizontal_scroll_bar(void* self, void* scrollBar);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param scrollBar QScrollBar*
void q_sciscintillabase_replace_vertical_scroll_bar(void* self, void* scrollBar);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param msg uint32_t
int64_t q_sciscintillabase_send_scintilla(void* self, uint32_t msg);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param msg uint32_t
/// @param wParam uint64_t
/// @param lParam void*
int64_t q_sciscintillabase_send_scintilla2(void* self, uint32_t msg, uint64_t wParam, void* lParam);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param msg uint32_t
/// @param wParam uintptr_t
/// @param lParam const char*
int64_t q_sciscintillabase_send_scintilla3(void* self, uint32_t msg, uintptr_t wParam, const char* lParam);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param msg uint32_t
/// @param lParam const char*
int64_t q_sciscintillabase_send_scintilla4(void* self, uint32_t msg, const char* lParam);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param msg uint32_t
/// @param wParam const char*
/// @param lParam const char*
int64_t q_sciscintillabase_send_scintilla5(void* self, uint32_t msg, const char* wParam, const char* lParam);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param msg uint32_t
/// @param wParam int64_t
int64_t q_sciscintillabase_send_scintilla6(void* self, uint32_t msg, int64_t wParam);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param msg uint32_t
/// @param wParam int
int64_t q_sciscintillabase_send_scintilla7(void* self, uint32_t msg, int wParam);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param msg uint32_t
/// @param cpMin int64_t
/// @param cpMax int64_t
/// @param lpstrText char*
int64_t q_sciscintillabase_send_scintilla8(void* self, uint32_t msg, int64_t cpMin, int64_t cpMax, char* lpstrText);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param msg uint32_t
/// @param wParam uint64_t
/// @param col QColor*
int64_t q_sciscintillabase_send_scintilla9(void* self, uint32_t msg, uint64_t wParam, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param msg uint32_t
/// @param col QColor*
int64_t q_sciscintillabase_send_scintilla10(void* self, uint32_t msg, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param msg uint32_t
/// @param wParam uint64_t
/// @param hdc QPainter*
/// @param rc QRect*
/// @param cpMin int64_t
/// @param cpMax int64_t
int64_t q_sciscintillabase_send_scintilla11(void* self, uint32_t msg, uint64_t wParam, void* hdc, void* rc, int64_t cpMin, int64_t cpMax);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param msg uint32_t
/// @param wParam uint64_t
/// @param lParam QPixmap*
int64_t q_sciscintillabase_send_scintilla12(void* self, uint32_t msg, uint64_t wParam, void* lParam);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param msg uint32_t
/// @param wParam uint64_t
/// @param lParam QImage*
int64_t q_sciscintillabase_send_scintilla13(void* self, uint32_t msg, uint64_t wParam, void* lParam);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param msg uint32_t
void* q_sciscintillabase_send_scintilla_ptr_result(void* self, uint32_t msg);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param qt_key int
/// @param modifiers int*
int32_t q_sciscintillabase_command_key(int qt_key, int* modifiers);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param yes bool
void q_sciscintillabase_q_s_c_n__s_e_l_c_h_a_n_g_e_d(void* self, bool yes);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_s_c_n__a_u_t_o_c_c_a_n_c_e_l_l_e_d(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_s_c_n__a_u_t_o_c_c_h_a_r_d_e_l_e_t_e_d(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param selection const char*
/// @param position int
/// @param ch int
/// @param method int
void q_sciscintillabase_s_c_n__a_u_t_o_c_c_o_m_p_l_e_t_e_d(void* self, const char* selection, int position, int ch, int method);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param selection const char*
/// @param position int
/// @param ch int
/// @param method int
void q_sciscintillabase_s_c_n__a_u_t_o_c_s_e_l_e_c_t_i_o_n(void* self, const char* selection, int position, int ch, int method);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param selection const char*
/// @param position int
void q_sciscintillabase_s_c_n__a_u_t_o_c_s_e_l_e_c_t_i_o_n2(void* self, const char* selection, int position);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param selection const char*
/// @param id int
/// @param position int
void q_sciscintillabase_s_c_n__a_u_t_o_c_s_e_l_e_c_t_i_o_n_c_h_a_n_g_e(void* self, const char* selection, int id, int position);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_s_c_e_n__c_h_a_n_g_e(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param direction int
void q_sciscintillabase_s_c_n__c_a_l_l_t_i_p_c_l_i_c_k(void* self, int direction);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param charadded int
void q_sciscintillabase_s_c_n__c_h_a_r_a_d_d_e_d(void* self, int charadded);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param position int
/// @param line int
/// @param modifiers int
void q_sciscintillabase_s_c_n__d_o_u_b_l_e_c_l_i_c_k(void* self, int position, int line, int modifiers);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param position int
/// @param x int
/// @param y int
void q_sciscintillabase_s_c_n__d_w_e_l_l_e_n_d(void* self, int position, int x, int y);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param position int
/// @param x int
/// @param y int
void q_sciscintillabase_s_c_n__d_w_e_l_l_s_t_a_r_t(void* self, int position, int x, int y);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_s_c_n__f_o_c_u_s_i_n(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_s_c_n__f_o_c_u_s_o_u_t(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param position int
/// @param modifiers int
void q_sciscintillabase_s_c_n__h_o_t_s_p_o_t_c_l_i_c_k(void* self, int position, int modifiers);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param position int
/// @param modifiers int
void q_sciscintillabase_s_c_n__h_o_t_s_p_o_t_d_o_u_b_l_e_c_l_i_c_k(void* self, int position, int modifiers);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param position int
/// @param modifiers int
void q_sciscintillabase_s_c_n__h_o_t_s_p_o_t_r_e_l_e_a_s_e_c_l_i_c_k(void* self, int position, int modifiers);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param position int
/// @param modifiers int
void q_sciscintillabase_s_c_n__i_n_d_i_c_a_t_o_r_c_l_i_c_k(void* self, int position, int modifiers);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param position int
/// @param modifiers int
void q_sciscintillabase_s_c_n__i_n_d_i_c_a_t_o_r_r_e_l_e_a_s_e(void* self, int position, int modifiers);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param param1 uint32_t
/// @param param2 uint64_t
/// @param param3 void*
void q_sciscintillabase_s_c_n__m_a_c_r_o_r_e_c_o_r_d(void* self, uint32_t param1, uint64_t param2, void* param3);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param position int
/// @param modifiers int
/// @param margin int
void q_sciscintillabase_s_c_n__m_a_r_g_i_n_c_l_i_c_k(void* self, int position, int modifiers, int margin);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param position int
/// @param modifiers int
/// @param margin int
void q_sciscintillabase_s_c_n__m_a_r_g_i_n_r_i_g_h_t_c_l_i_c_k(void* self, int position, int modifiers, int margin);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param param1 int
/// @param param2 int
/// @param param3 const char*
/// @param param4 int
/// @param param5 int
/// @param param6 int
/// @param param7 int
/// @param param8 int
/// @param param9 int
/// @param param10 int
void q_sciscintillabase_s_c_n__m_o_d_i_f_i_e_d(void* self, int param1, int param2, const char* param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_s_c_n__m_o_d_i_f_y_a_t_t_e_m_p_t_r_o(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param param1 int
/// @param param2 int
void q_sciscintillabase_s_c_n__n_e_e_d_s_h_o_w_n(void* self, int param1, int param2);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_s_c_n__p_a_i_n_t_e_d(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_s_c_n__s_a_v_e_p_o_i_n_t_l_e_f_t(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_s_c_n__s_a_v_e_p_o_i_n_t_r_e_a_c_h_e_d(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param position int
void q_sciscintillabase_s_c_n__s_t_y_l_e_n_e_e_d_e_d(void* self, int position);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param url QUrl*
void q_sciscintillabase_s_c_n__u_r_i_d_r_o_p_p_e_d(void* self, void* url);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param updated int
void q_sciscintillabase_s_c_n__u_p_d_a_t_e_u_i(void* self, int updated);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param selection const char*
/// @param id int
/// @param ch int
/// @param method int
/// @param position int
void q_sciscintillabase_s_c_n__u_s_e_r_l_i_s_t_s_e_l_e_c_t_i_o_n(void* self, const char* selection, int id, int ch, int method, int position);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param selection const char*
/// @param id int
/// @param ch int
/// @param method int
void q_sciscintillabase_s_c_n__u_s_e_r_l_i_s_t_s_e_l_e_c_t_i_o_n2(void* self, const char* selection, int id, int ch, int method);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param selection const char*
/// @param id int
void q_sciscintillabase_s_c_n__u_s_e_r_l_i_s_t_s_e_l_e_c_t_i_o_n3(void* self, const char* selection, int id);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_s_c_n__z_o_o_m(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param source QMimeData*
bool q_sciscintillabase_can_insert_from_mime_data(void* self, void* source);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintillaBase*
/// @param callback bool fn(QsciScintillaBase*, QMimeData*)
void q_sciscintillabase_on_can_insert_from_mime_data(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Base class method implementation
///
/// @param self QsciScintillaBase*
/// @param source QMimeData*
bool q_sciscintillabase_qbase_can_insert_from_mime_data(void* self, void* source);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciScintillaBase*
/// @param source QMimeData*
/// @param rectangular bool*
char* q_sciscintillabase_from_mime_data(void* self, void* source, bool* rectangular);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintillaBase*
/// @param callback char* fn(QsciScintillaBase*, QMimeData*, bool*)
void q_sciscintillabase_on_from_mime_data(void* self, char* (*callback)(void*, void*, bool*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Base class method implementation
///
/// @param self QsciScintillaBase*
/// @param source QMimeData*
/// @param rectangular bool*
char* q_sciscintillabase_qbase_from_mime_data(void* self, void* source, bool* rectangular);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param text const char*
/// @param rectangular bool
QMimeData* q_sciscintillabase_to_mime_data(void* self, const char* text, bool rectangular);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintillaBase*
/// @param callback QMimeData* fn(QsciScintillaBase*, const char*, bool)
void q_sciscintillabase_on_to_mime_data(void* self, QMimeData* (*callback)(void*, const char*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Base class method implementation
///
/// @param self QsciScintillaBase*
/// @param text const char*
/// @param rectangular bool
QMimeData* q_sciscintillabase_qbase_to_mime_data(void* self, const char* text, bool rectangular);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param e QEvent*
void q_sciscintillabase_change_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QEvent*)
void q_sciscintillabase_on_change_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Base class method implementation
///
/// @param self QsciScintillaBase*
/// @param e QEvent*
void q_sciscintillabase_qbase_change_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param e QContextMenuEvent*
void q_sciscintillabase_context_menu_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QContextMenuEvent*)
void q_sciscintillabase_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Base class method implementation
///
/// @param self QsciScintillaBase*
/// @param e QContextMenuEvent*
void q_sciscintillabase_qbase_context_menu_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param e QDragEnterEvent*
void q_sciscintillabase_drag_enter_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QDragEnterEvent*)
void q_sciscintillabase_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Base class method implementation
///
/// @param self QsciScintillaBase*
/// @param e QDragEnterEvent*
void q_sciscintillabase_qbase_drag_enter_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param e QDragLeaveEvent*
void q_sciscintillabase_drag_leave_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QDragLeaveEvent*)
void q_sciscintillabase_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Base class method implementation
///
/// @param self QsciScintillaBase*
/// @param e QDragLeaveEvent*
void q_sciscintillabase_qbase_drag_leave_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param e QDragMoveEvent*
void q_sciscintillabase_drag_move_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QDragMoveEvent*)
void q_sciscintillabase_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Base class method implementation
///
/// @param self QsciScintillaBase*
/// @param e QDragMoveEvent*
void q_sciscintillabase_qbase_drag_move_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param e QDropEvent*
void q_sciscintillabase_drop_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QDropEvent*)
void q_sciscintillabase_on_drop_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Base class method implementation
///
/// @param self QsciScintillaBase*
/// @param e QDropEvent*
void q_sciscintillabase_qbase_drop_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param e QFocusEvent*
void q_sciscintillabase_focus_in_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QFocusEvent*)
void q_sciscintillabase_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Base class method implementation
///
/// @param self QsciScintillaBase*
/// @param e QFocusEvent*
void q_sciscintillabase_qbase_focus_in_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param e QFocusEvent*
void q_sciscintillabase_focus_out_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QFocusEvent*)
void q_sciscintillabase_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Base class method implementation
///
/// @param self QsciScintillaBase*
/// @param e QFocusEvent*
void q_sciscintillabase_qbase_focus_out_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param next bool
bool q_sciscintillabase_focus_next_prev_child(void* self, bool next);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintillaBase*
/// @param callback bool fn(QsciScintillaBase*, bool)
void q_sciscintillabase_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Base class method implementation
///
/// @param self QsciScintillaBase*
/// @param next bool
bool q_sciscintillabase_qbase_focus_next_prev_child(void* self, bool next);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param e QKeyEvent*
void q_sciscintillabase_key_press_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QKeyEvent*)
void q_sciscintillabase_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Base class method implementation
///
/// @param self QsciScintillaBase*
/// @param e QKeyEvent*
void q_sciscintillabase_qbase_key_press_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param event QInputMethodEvent*
void q_sciscintillabase_input_method_event(void* self, void* event);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QInputMethodEvent*)
void q_sciscintillabase_on_input_method_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Base class method implementation
///
/// @param self QsciScintillaBase*
/// @param event QInputMethodEvent*
void q_sciscintillabase_qbase_input_method_event(void* self, void* event);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param e QMouseEvent*
void q_sciscintillabase_mouse_double_click_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QMouseEvent*)
void q_sciscintillabase_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Base class method implementation
///
/// @param self QsciScintillaBase*
/// @param e QMouseEvent*
void q_sciscintillabase_qbase_mouse_double_click_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param e QMouseEvent*
void q_sciscintillabase_mouse_move_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QMouseEvent*)
void q_sciscintillabase_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Base class method implementation
///
/// @param self QsciScintillaBase*
/// @param e QMouseEvent*
void q_sciscintillabase_qbase_mouse_move_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param e QMouseEvent*
void q_sciscintillabase_mouse_press_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QMouseEvent*)
void q_sciscintillabase_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Base class method implementation
///
/// @param self QsciScintillaBase*
/// @param e QMouseEvent*
void q_sciscintillabase_qbase_mouse_press_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param e QMouseEvent*
void q_sciscintillabase_mouse_release_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QMouseEvent*)
void q_sciscintillabase_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Base class method implementation
///
/// @param self QsciScintillaBase*
/// @param e QMouseEvent*
void q_sciscintillabase_qbase_mouse_release_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param e QPaintEvent*
void q_sciscintillabase_paint_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QPaintEvent*)
void q_sciscintillabase_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Base class method implementation
///
/// @param self QsciScintillaBase*
/// @param e QPaintEvent*
void q_sciscintillabase_qbase_paint_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param e QResizeEvent*
void q_sciscintillabase_resize_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QResizeEvent*)
void q_sciscintillabase_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Base class method implementation
///
/// @param self QsciScintillaBase*
/// @param e QResizeEvent*
void q_sciscintillabase_qbase_resize_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param dx int
/// @param dy int
void q_sciscintillabase_scroll_contents_by(void* self, int dx, int dy);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, int, int)
void q_sciscintillabase_on_scroll_contents_by(void* self, void (*callback)(void*, int, int));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Base class method implementation
///
/// @param self QsciScintillaBase*
/// @param dx int
/// @param dy int
void q_sciscintillabase_qbase_scroll_contents_by(void* self, int dx, int dy);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_set_scroll_bars(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintillaBase*
/// @param callback void fn()
void q_sciscintillabase_on_set_scroll_bars(void* self, void (*callback)());

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Base class method implementation
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_qbase_set_scroll_bars(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param x int
/// @param y int
bool q_sciscintillabase_context_menu_needed(void* self, int x, int y);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintillaBase*
/// @param callback bool fn(QsciScintillaBase*, int, int)
void q_sciscintillabase_on_context_menu_needed(void* self, bool (*callback)(void*, int, int));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Base class method implementation
///
/// @param self QsciScintillaBase*
/// @param x int
/// @param y int
bool q_sciscintillabase_qbase_context_menu_needed(void* self, int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_sciscintillabase_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_sciscintillabase_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param msg uint32_t
/// @param wParam uint64_t
int64_t q_sciscintillabase_send_scintilla22(void* self, uint32_t msg, uint64_t wParam);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintillaBase*
/// @param msg uint32_t
/// @param wParam uint64_t
/// @param lParam int64_t
int64_t q_sciscintillabase_send_scintilla32(void* self, uint32_t msg, uint64_t wParam, int64_t lParam);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// @param self QsciScintillaBase*
///
/// @return enum Qt__ScrollBarPolicy
int32_t q_sciscintillabase_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// @param self QsciScintillaBase*
/// @param verticalScrollBarPolicy enum Qt__ScrollBarPolicy
void q_sciscintillabase_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// @param self QsciScintillaBase*
QScrollBar* q_sciscintillabase_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// @param self QsciScintillaBase*
/// @param scrollbar QScrollBar*
void q_sciscintillabase_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// @param self QsciScintillaBase*
///
/// @return enum Qt__ScrollBarPolicy
int32_t q_sciscintillabase_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// @param self QsciScintillaBase*
/// @param horizontalScrollBarPolicy enum Qt__ScrollBarPolicy
void q_sciscintillabase_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// @param self QsciScintillaBase*
QScrollBar* q_sciscintillabase_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// @param self QsciScintillaBase*
/// @param scrollbar QScrollBar*
void q_sciscintillabase_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// @param self QsciScintillaBase*
QWidget* q_sciscintillabase_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// @param self QsciScintillaBase*
/// @param widget QWidget*
void q_sciscintillabase_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// @param self QsciScintillaBase*
/// @param widget QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
void q_sciscintillabase_add_scroll_bar_widget(void* self, void* widget, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// @param self QsciScintillaBase*
/// @param alignment flag of enum Qt__AlignmentFlag
libqt_list /* of QWidget* */ q_sciscintillabase_scroll_bar_widgets(void* self, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// @param self QsciScintillaBase*
QWidget* q_sciscintillabase_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// @param self QsciScintillaBase*
/// @param widget QWidget*
void q_sciscintillabase_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// @param self QsciScintillaBase*
QSize* q_sciscintillabase_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// @param self QsciScintillaBase*
///
/// @return enum QAbstractScrollArea__SizeAdjustPolicy
int32_t q_sciscintillabase_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// @param self QsciScintillaBase*
/// @param policy enum QAbstractScrollArea__SizeAdjustPolicy
void q_sciscintillabase_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self QsciScintillaBase*
int32_t q_sciscintillabase_frame_style(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self QsciScintillaBase*
/// @param frameStyle int
void q_sciscintillabase_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self QsciScintillaBase*
int32_t q_sciscintillabase_frame_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self QsciScintillaBase*
///
/// @return enum QFrame__Shape
int32_t q_sciscintillabase_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self QsciScintillaBase*
/// @param frameShape enum QFrame__Shape
void q_sciscintillabase_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self QsciScintillaBase*
///
/// @return enum QFrame__Shadow
int32_t q_sciscintillabase_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self QsciScintillaBase*
/// @param frameShadow enum QFrame__Shadow
void q_sciscintillabase_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self QsciScintillaBase*
int32_t q_sciscintillabase_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self QsciScintillaBase*
/// @param lineWidth int
void q_sciscintillabase_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self QsciScintillaBase*
int32_t q_sciscintillabase_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self QsciScintillaBase*
/// @param midLineWidth int
void q_sciscintillabase_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self QsciScintillaBase*
QRect* q_sciscintillabase_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self QsciScintillaBase*
/// @param frameRect QRect*
void q_sciscintillabase_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QsciScintillaBase*
uintptr_t q_sciscintillabase_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QsciScintillaBase*
uintptr_t q_sciscintillabase_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QsciScintillaBase*
uintptr_t q_sciscintillabase_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QsciScintillaBase*
QStyle* q_sciscintillabase_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QsciScintillaBase*
/// @param style QStyle*
void q_sciscintillabase_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QsciScintillaBase*
///
/// @return enum Qt__WindowModality
int32_t q_sciscintillabase_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QsciScintillaBase*
/// @param windowModality enum Qt__WindowModality
void q_sciscintillabase_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QsciScintillaBase*
/// @param param1 QWidget*
bool q_sciscintillabase_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QsciScintillaBase*
/// @param enabled bool
void q_sciscintillabase_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QsciScintillaBase*
/// @param disabled bool
void q_sciscintillabase_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QsciScintillaBase*
/// @param windowModified bool
void q_sciscintillabase_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QsciScintillaBase*
QRect* q_sciscintillabase_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QsciScintillaBase*
const QRect* q_sciscintillabase_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QsciScintillaBase*
QRect* q_sciscintillabase_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QsciScintillaBase*
int32_t q_sciscintillabase_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QsciScintillaBase*
int32_t q_sciscintillabase_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QsciScintillaBase*
QPoint* q_sciscintillabase_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QsciScintillaBase*
QSize* q_sciscintillabase_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QsciScintillaBase*
QSize* q_sciscintillabase_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QsciScintillaBase*
int32_t q_sciscintillabase_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QsciScintillaBase*
int32_t q_sciscintillabase_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QsciScintillaBase*
QRect* q_sciscintillabase_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QsciScintillaBase*
QRect* q_sciscintillabase_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QsciScintillaBase*
QRegion* q_sciscintillabase_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QsciScintillaBase*
QSize* q_sciscintillabase_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QsciScintillaBase*
QSize* q_sciscintillabase_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QsciScintillaBase*
int32_t q_sciscintillabase_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QsciScintillaBase*
int32_t q_sciscintillabase_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QsciScintillaBase*
int32_t q_sciscintillabase_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QsciScintillaBase*
int32_t q_sciscintillabase_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QsciScintillaBase*
/// @param minimumSize QSize*
void q_sciscintillabase_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QsciScintillaBase*
/// @param minw int
/// @param minh int
void q_sciscintillabase_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QsciScintillaBase*
/// @param maximumSize QSize*
void q_sciscintillabase_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QsciScintillaBase*
/// @param maxw int
/// @param maxh int
void q_sciscintillabase_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QsciScintillaBase*
/// @param minw int
void q_sciscintillabase_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QsciScintillaBase*
/// @param minh int
void q_sciscintillabase_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QsciScintillaBase*
/// @param maxw int
void q_sciscintillabase_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QsciScintillaBase*
/// @param maxh int
void q_sciscintillabase_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QsciScintillaBase*
QSize* q_sciscintillabase_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QsciScintillaBase*
/// @param sizeIncrement QSize*
void q_sciscintillabase_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QsciScintillaBase*
/// @param w int
/// @param h int
void q_sciscintillabase_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QsciScintillaBase*
QSize* q_sciscintillabase_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QsciScintillaBase*
/// @param baseSize QSize*
void q_sciscintillabase_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QsciScintillaBase*
/// @param basew int
/// @param baseh int
void q_sciscintillabase_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QsciScintillaBase*
/// @param fixedSize QSize*
void q_sciscintillabase_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QsciScintillaBase*
/// @param w int
/// @param h int
void q_sciscintillabase_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QsciScintillaBase*
/// @param w int
void q_sciscintillabase_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QsciScintillaBase*
/// @param h int
void q_sciscintillabase_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QsciScintillaBase*
/// @param param1 QPointF*
QPointF* q_sciscintillabase_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QsciScintillaBase*
/// @param param1 QPoint*
QPoint* q_sciscintillabase_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QsciScintillaBase*
/// @param param1 QPointF*
QPointF* q_sciscintillabase_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QsciScintillaBase*
/// @param param1 QPoint*
QPoint* q_sciscintillabase_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QsciScintillaBase*
/// @param param1 QPointF*
QPointF* q_sciscintillabase_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QsciScintillaBase*
/// @param param1 QPoint*
QPoint* q_sciscintillabase_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QsciScintillaBase*
/// @param param1 QPointF*
QPointF* q_sciscintillabase_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QsciScintillaBase*
/// @param param1 QPoint*
QPoint* q_sciscintillabase_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QsciScintillaBase*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_sciscintillabase_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QsciScintillaBase*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_sciscintillabase_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QsciScintillaBase*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_sciscintillabase_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QsciScintillaBase*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_sciscintillabase_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QsciScintillaBase*
QWidget* q_sciscintillabase_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QsciScintillaBase*
QWidget* q_sciscintillabase_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QsciScintillaBase*
QWidget* q_sciscintillabase_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QsciScintillaBase*
const QPalette* q_sciscintillabase_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QsciScintillaBase*
/// @param palette QPalette*
void q_sciscintillabase_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QsciScintillaBase*
/// @param backgroundRole enum QPalette__ColorRole
void q_sciscintillabase_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QsciScintillaBase*
///
/// @return enum QPalette__ColorRole
int32_t q_sciscintillabase_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QsciScintillaBase*
/// @param foregroundRole enum QPalette__ColorRole
void q_sciscintillabase_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QsciScintillaBase*
///
/// @return enum QPalette__ColorRole
int32_t q_sciscintillabase_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QsciScintillaBase*
const QFont* q_sciscintillabase_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QsciScintillaBase*
/// @param font QFont*
void q_sciscintillabase_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QsciScintillaBase*
QFontMetrics* q_sciscintillabase_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QsciScintillaBase*
QFontInfo* q_sciscintillabase_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QsciScintillaBase*
QCursor* q_sciscintillabase_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QsciScintillaBase*
/// @param cursor QCursor*
void q_sciscintillabase_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QsciScintillaBase*
/// @param enable bool
void q_sciscintillabase_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QsciScintillaBase*
/// @param enable bool
void q_sciscintillabase_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QsciScintillaBase*
/// @param mask QBitmap*
void q_sciscintillabase_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QsciScintillaBase*
/// @param mask QRegion*
void q_sciscintillabase_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QsciScintillaBase*
QRegion* q_sciscintillabase_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QsciScintillaBase*
/// @param target QPaintDevice*
void q_sciscintillabase_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QsciScintillaBase*
/// @param painter QPainter*
void q_sciscintillabase_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QsciScintillaBase*
QPixmap* q_sciscintillabase_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QsciScintillaBase*
QGraphicsEffect* q_sciscintillabase_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QsciScintillaBase*
/// @param effect QGraphicsEffect*
void q_sciscintillabase_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QsciScintillaBase*
/// @param typeVal enum Qt__GestureType
void q_sciscintillabase_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QsciScintillaBase*
/// @param typeVal enum Qt__GestureType
void q_sciscintillabase_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QsciScintillaBase*
/// @param windowTitle const char*
void q_sciscintillabase_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QsciScintillaBase*
/// @param styleSheet const char*
void q_sciscintillabase_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciScintillaBase*
const char* q_sciscintillabase_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciScintillaBase*
const char* q_sciscintillabase_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QsciScintillaBase*
/// @param icon QIcon*
void q_sciscintillabase_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QsciScintillaBase*
QIcon* q_sciscintillabase_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QsciScintillaBase*
/// @param windowIconText const char*
void q_sciscintillabase_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciScintillaBase*
const char* q_sciscintillabase_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QsciScintillaBase*
/// @param windowRole const char*
void q_sciscintillabase_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciScintillaBase*
const char* q_sciscintillabase_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QsciScintillaBase*
/// @param filePath const char*
void q_sciscintillabase_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciScintillaBase*
const char* q_sciscintillabase_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QsciScintillaBase*
/// @param level double
void q_sciscintillabase_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QsciScintillaBase*
double q_sciscintillabase_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QsciScintillaBase*
/// @param toolTip const char*
void q_sciscintillabase_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciScintillaBase*
const char* q_sciscintillabase_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QsciScintillaBase*
/// @param msec int
void q_sciscintillabase_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QsciScintillaBase*
int32_t q_sciscintillabase_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QsciScintillaBase*
/// @param statusTip const char*
void q_sciscintillabase_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciScintillaBase*
const char* q_sciscintillabase_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QsciScintillaBase*
/// @param whatsThis const char*
void q_sciscintillabase_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciScintillaBase*
const char* q_sciscintillabase_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciScintillaBase*
const char* q_sciscintillabase_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QsciScintillaBase*
/// @param name const char*
void q_sciscintillabase_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciScintillaBase*
const char* q_sciscintillabase_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QsciScintillaBase*
/// @param description const char*
void q_sciscintillabase_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QsciScintillaBase*
/// @param direction enum Qt__LayoutDirection
void q_sciscintillabase_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QsciScintillaBase*
///
/// @return enum Qt__LayoutDirection
int32_t q_sciscintillabase_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QsciScintillaBase*
/// @param locale QLocale*
void q_sciscintillabase_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QsciScintillaBase*
QLocale* q_sciscintillabase_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QsciScintillaBase*
/// @param reason enum Qt__FocusReason
void q_sciscintillabase_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QsciScintillaBase*
///
/// @return enum Qt__FocusPolicy
int32_t q_sciscintillabase_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QsciScintillaBase*
/// @param policy enum Qt__FocusPolicy
void q_sciscintillabase_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void q_sciscintillabase_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QsciScintillaBase*
/// @param focusProxy QWidget*
void q_sciscintillabase_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QsciScintillaBase*
QWidget* q_sciscintillabase_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QsciScintillaBase*
///
/// @return enum Qt__ContextMenuPolicy
int32_t q_sciscintillabase_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QsciScintillaBase*
/// @param policy enum Qt__ContextMenuPolicy
void q_sciscintillabase_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QsciScintillaBase*
/// @param param1 QCursor*
void q_sciscintillabase_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QsciScintillaBase*
/// @param key QKeySequence*
int32_t q_sciscintillabase_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QsciScintillaBase*
/// @param id int
void q_sciscintillabase_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QsciScintillaBase*
/// @param id int
void q_sciscintillabase_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QsciScintillaBase*
/// @param id int
void q_sciscintillabase_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_sciscintillabase_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_sciscintillabase_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QsciScintillaBase*
/// @param enable bool
void q_sciscintillabase_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QsciScintillaBase*
QGraphicsProxyWidget* q_sciscintillabase_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QsciScintillaBase*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_sciscintillabase_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QsciScintillaBase*
/// @param param1 QRect*
void q_sciscintillabase_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QsciScintillaBase*
/// @param param1 QRegion*
void q_sciscintillabase_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QsciScintillaBase*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_sciscintillabase_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QsciScintillaBase*
/// @param param1 QRect*
void q_sciscintillabase_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QsciScintillaBase*
/// @param param1 QRegion*
void q_sciscintillabase_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QsciScintillaBase*
/// @param hidden bool
void q_sciscintillabase_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QsciScintillaBase*
/// @param param1 QWidget*
void q_sciscintillabase_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QsciScintillaBase*
/// @param x int
/// @param y int
void q_sciscintillabase_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QsciScintillaBase*
/// @param param1 QPoint*
void q_sciscintillabase_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QsciScintillaBase*
/// @param w int
/// @param h int
void q_sciscintillabase_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QsciScintillaBase*
/// @param param1 QSize*
void q_sciscintillabase_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QsciScintillaBase*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_sciscintillabase_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QsciScintillaBase*
/// @param geometry QRect*
void q_sciscintillabase_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciScintillaBase*
char* q_sciscintillabase_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QsciScintillaBase*
/// @param geometry const char*
bool q_sciscintillabase_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QsciScintillaBase*
/// @param param1 QWidget*
bool q_sciscintillabase_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QsciScintillaBase*
///
/// @return flag of enum Qt__WindowState
int64_t q_sciscintillabase_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QsciScintillaBase*
/// @param state flag of enum Qt__WindowState
void q_sciscintillabase_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QsciScintillaBase*
/// @param state flag of enum Qt__WindowState
void q_sciscintillabase_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QsciScintillaBase*
QSizePolicy* q_sciscintillabase_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QsciScintillaBase*
/// @param sizePolicy QSizePolicy*
void q_sciscintillabase_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QsciScintillaBase*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void q_sciscintillabase_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QsciScintillaBase*
QRegion* q_sciscintillabase_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QsciScintillaBase*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void q_sciscintillabase_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QsciScintillaBase*
/// @param margins QMargins*
void q_sciscintillabase_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QsciScintillaBase*
QMargins* q_sciscintillabase_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QsciScintillaBase*
QRect* q_sciscintillabase_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QsciScintillaBase*
QLayout* q_sciscintillabase_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QsciScintillaBase*
/// @param layout QLayout*
void q_sciscintillabase_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QsciScintillaBase*
/// @param parent QWidget*
void q_sciscintillabase_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QsciScintillaBase*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void q_sciscintillabase_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QsciScintillaBase*
/// @param dx int
/// @param dy int
void q_sciscintillabase_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QsciScintillaBase*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void q_sciscintillabase_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QsciScintillaBase*
QWidget* q_sciscintillabase_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QsciScintillaBase*
QWidget* q_sciscintillabase_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QsciScintillaBase*
QWidget* q_sciscintillabase_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QsciScintillaBase*
/// @param on bool
void q_sciscintillabase_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QsciScintillaBase*
/// @param action QAction*
void q_sciscintillabase_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QsciScintillaBase*
/// @param actions libqt_list /* of QAction* */
void q_sciscintillabase_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QsciScintillaBase*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void q_sciscintillabase_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QsciScintillaBase*
/// @param before QAction*
/// @param action QAction*
void q_sciscintillabase_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QsciScintillaBase*
/// @param action QAction*
void q_sciscintillabase_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QsciScintillaBase*
libqt_list /* of QAction* */ q_sciscintillabase_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QsciScintillaBase*
/// @param text const char*
QAction* q_sciscintillabase_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QsciScintillaBase*
/// @param icon QIcon*
/// @param text const char*
QAction* q_sciscintillabase_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QsciScintillaBase*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_sciscintillabase_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QsciScintillaBase*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_sciscintillabase_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QsciScintillaBase*
QWidget* q_sciscintillabase_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QsciScintillaBase*
/// @param typeVal flag of enum Qt__WindowType
void q_sciscintillabase_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QsciScintillaBase*
///
/// @return flag of enum Qt__WindowType
int64_t q_sciscintillabase_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QsciScintillaBase*
/// @param param1 enum Qt__WindowType
void q_sciscintillabase_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QsciScintillaBase*
/// @param typeVal flag of enum Qt__WindowType
void q_sciscintillabase_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QsciScintillaBase*
///
/// @return enum Qt__WindowType
int64_t q_sciscintillabase_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* q_sciscintillabase_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QsciScintillaBase*
/// @param x int
/// @param y int
QWidget* q_sciscintillabase_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QsciScintillaBase*
/// @param p QPoint*
QWidget* q_sciscintillabase_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QsciScintillaBase*
/// @param p QPointF*
QWidget* q_sciscintillabase_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QsciScintillaBase*
/// @param param1 enum Qt__WidgetAttribute
void q_sciscintillabase_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QsciScintillaBase*
/// @param param1 enum Qt__WidgetAttribute
bool q_sciscintillabase_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QsciScintillaBase*
/// @param child QWidget*
bool q_sciscintillabase_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QsciScintillaBase*
/// @param enabled bool
void q_sciscintillabase_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QsciScintillaBase*
QBackingStore* q_sciscintillabase_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QsciScintillaBase*
QWindow* q_sciscintillabase_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QsciScintillaBase*
QScreen* q_sciscintillabase_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QsciScintillaBase*
/// @param screen QScreen*
void q_sciscintillabase_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* q_sciscintillabase_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QsciScintillaBase*
/// @param title const char*
void q_sciscintillabase_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, const char*)
void q_sciscintillabase_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QsciScintillaBase*
/// @param icon QIcon*
void q_sciscintillabase_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QIcon*)
void q_sciscintillabase_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QsciScintillaBase*
/// @param iconText const char*
void q_sciscintillabase_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, const char*)
void q_sciscintillabase_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QsciScintillaBase*
/// @param pos QPoint*
void q_sciscintillabase_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QPoint*)
void q_sciscintillabase_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QsciScintillaBase*
///
/// @return flag of enum Qt__InputMethodHint
int64_t q_sciscintillabase_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QsciScintillaBase*
/// @param hints flag of enum Qt__InputMethodHint
void q_sciscintillabase_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QsciScintillaBase*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void q_sciscintillabase_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QsciScintillaBase*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void q_sciscintillabase_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QsciScintillaBase*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void q_sciscintillabase_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QsciScintillaBase*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void q_sciscintillabase_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QsciScintillaBase*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void q_sciscintillabase_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QsciScintillaBase*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void q_sciscintillabase_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QsciScintillaBase*
/// @param rectangle QRect*
QPixmap* q_sciscintillabase_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QsciScintillaBase*
/// @param typeVal enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void q_sciscintillabase_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QsciScintillaBase*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t q_sciscintillabase_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QsciScintillaBase*
/// @param id int
/// @param enable bool
void q_sciscintillabase_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QsciScintillaBase*
/// @param id int
/// @param enable bool
void q_sciscintillabase_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QsciScintillaBase*
/// @param param1 enum Qt__WindowType
/// @param on bool
void q_sciscintillabase_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QsciScintillaBase*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void q_sciscintillabase_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* q_sciscintillabase_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* q_sciscintillabase_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciScintillaBase*
const char* q_sciscintillabase_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QsciScintillaBase*
/// @param name char*
void q_sciscintillabase_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QsciScintillaBase*
/// @param b bool
bool q_sciscintillabase_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QsciScintillaBase*
QThread* q_sciscintillabase_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QsciScintillaBase*
/// @param thread QThread*
bool q_sciscintillabase_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciScintillaBase*
/// @param interval int
int32_t q_sciscintillabase_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciScintillaBase*
/// @param id int
void q_sciscintillabase_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciScintillaBase*
/// @param id enum Qt__TimerId
void q_sciscintillabase_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QsciScintillaBase*
libqt_list /* of QObject* */ q_sciscintillabase_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QsciScintillaBase*
/// @param filterObj QObject*
void q_sciscintillabase_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QsciScintillaBase*
/// @param obj QObject*
void q_sciscintillabase_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_sciscintillabase_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QsciScintillaBase*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_sciscintillabase_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_sciscintillabase_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_sciscintillabase_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QsciScintillaBase*
/// @param name const char*
/// @param value QVariant*
bool q_sciscintillabase_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QsciScintillaBase*
/// @param name const char*
QVariant* q_sciscintillabase_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciScintillaBase*
const char** q_sciscintillabase_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QsciScintillaBase*
QBindingStorage* q_sciscintillabase_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QsciScintillaBase*
const QBindingStorage* q_sciscintillabase_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*)
void q_sciscintillabase_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QsciScintillaBase*
QObject* q_sciscintillabase_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QsciScintillaBase*
/// @param classname const char*
bool q_sciscintillabase_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QsciScintillaBase*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_sciscintillabase_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciScintillaBase*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_sciscintillabase_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_sciscintillabase_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QsciScintillaBase*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_sciscintillabase_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciScintillaBase*
/// @param param1 QObject*
void q_sciscintillabase_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QObject*)
void q_sciscintillabase_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QsciScintillaBase*
int32_t q_sciscintillabase_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QsciScintillaBase*
int32_t q_sciscintillabase_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QsciScintillaBase*
int32_t q_sciscintillabase_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QsciScintillaBase*
int32_t q_sciscintillabase_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QsciScintillaBase*
int32_t q_sciscintillabase_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QsciScintillaBase*
int32_t q_sciscintillabase_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QsciScintillaBase*
double q_sciscintillabase_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QsciScintillaBase*
double q_sciscintillabase_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QsciScintillaBase*
int32_t q_sciscintillabase_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QsciScintillaBase*
int32_t q_sciscintillabase_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_sciscintillabase_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t q_sciscintillabase_encode_metric_f(int32_t metric, double value);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
QSize* q_sciscintillabase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
QSize* q_sciscintillabase_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback QSize* fn()
void q_sciscintillabase_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
QSize* q_sciscintillabase_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
QSize* q_sciscintillabase_qbase_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback QSize* fn()
void q_sciscintillabase_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param viewport QWidget*
void q_sciscintillabase_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param viewport QWidget*
void q_sciscintillabase_qbase_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QWidget*)
void q_sciscintillabase_on_setup_viewport(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param param1 QObject*
/// @param param2 QEvent*
bool q_sciscintillabase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param param1 QObject*
/// @param param2 QEvent*
bool q_sciscintillabase_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback bool fn(QsciScintillaBase*, QObject*, QEvent*)
void q_sciscintillabase_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param param1 QEvent*
bool q_sciscintillabase_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param param1 QEvent*
bool q_sciscintillabase_qbase_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback bool fn(QsciScintillaBase*, QEvent*)
void q_sciscintillabase_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param param1 QEvent*
bool q_sciscintillabase_viewport_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param param1 QEvent*
bool q_sciscintillabase_qbase_viewport_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback bool fn(QsciScintillaBase*, QEvent*)
void q_sciscintillabase_on_viewport_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param param1 QWheelEvent*
void q_sciscintillabase_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param param1 QWheelEvent*
void q_sciscintillabase_qbase_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QWheelEvent*)
void q_sciscintillabase_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
QSize* q_sciscintillabase_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
QSize* q_sciscintillabase_qbase_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback QSize* fn()
void q_sciscintillabase_on_viewport_size_hint(void* self, QSize* (*callback)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param option QStyleOptionFrame*
void q_sciscintillabase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param option QStyleOptionFrame*
void q_sciscintillabase_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QStyleOptionFrame*)
void q_sciscintillabase_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
int32_t q_sciscintillabase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
int32_t q_sciscintillabase_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback int32_t fn()
void q_sciscintillabase_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param visible bool
void q_sciscintillabase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param visible bool
void q_sciscintillabase_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, bool)
void q_sciscintillabase_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param param1 int
int32_t q_sciscintillabase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param param1 int
int32_t q_sciscintillabase_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback int32_t fn(QsciScintillaBase*, int)
void q_sciscintillabase_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback bool fn()
void q_sciscintillabase_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
QPaintEngine* q_sciscintillabase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
QPaintEngine* q_sciscintillabase_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback QPaintEngine* fn()
void q_sciscintillabase_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param event QKeyEvent*
void q_sciscintillabase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param event QKeyEvent*
void q_sciscintillabase_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QKeyEvent*)
void q_sciscintillabase_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param event QEnterEvent*
void q_sciscintillabase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param event QEnterEvent*
void q_sciscintillabase_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QEnterEvent*)
void q_sciscintillabase_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param event QEvent*
void q_sciscintillabase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param event QEvent*
void q_sciscintillabase_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QEvent*)
void q_sciscintillabase_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param event QMoveEvent*
void q_sciscintillabase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param event QMoveEvent*
void q_sciscintillabase_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QMoveEvent*)
void q_sciscintillabase_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param event QCloseEvent*
void q_sciscintillabase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param event QCloseEvent*
void q_sciscintillabase_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QCloseEvent*)
void q_sciscintillabase_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param event QTabletEvent*
void q_sciscintillabase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param event QTabletEvent*
void q_sciscintillabase_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QTabletEvent*)
void q_sciscintillabase_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param event QActionEvent*
void q_sciscintillabase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param event QActionEvent*
void q_sciscintillabase_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QActionEvent*)
void q_sciscintillabase_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param event QShowEvent*
void q_sciscintillabase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param event QShowEvent*
void q_sciscintillabase_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QShowEvent*)
void q_sciscintillabase_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param event QHideEvent*
void q_sciscintillabase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param event QHideEvent*
void q_sciscintillabase_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QHideEvent*)
void q_sciscintillabase_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_sciscintillabase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_sciscintillabase_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback bool fn(QsciScintillaBase*, const char*, void*, intptr_t*)
void q_sciscintillabase_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_sciscintillabase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_sciscintillabase_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback int32_t fn(QsciScintillaBase*, enum QPaintDevice__PaintDeviceMetric)
void q_sciscintillabase_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param painter QPainter*
void q_sciscintillabase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param painter QPainter*
void q_sciscintillabase_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QPainter*)
void q_sciscintillabase_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param offset QPoint*
QPaintDevice* q_sciscintillabase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param offset QPoint*
QPaintDevice* q_sciscintillabase_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback QPaintDevice* fn(QsciScintillaBase*, QPoint*)
void q_sciscintillabase_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
QPainter* q_sciscintillabase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
QPainter* q_sciscintillabase_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback QPainter* fn()
void q_sciscintillabase_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param param1 enum Qt__InputMethodQuery
QVariant* q_sciscintillabase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param param1 enum Qt__InputMethodQuery
QVariant* q_sciscintillabase_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback QVariant* fn(QsciScintillaBase*, enum Qt__InputMethodQuery)
void q_sciscintillabase_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param event QTimerEvent*
void q_sciscintillabase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param event QTimerEvent*
void q_sciscintillabase_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QTimerEvent*)
void q_sciscintillabase_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param event QChildEvent*
void q_sciscintillabase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param event QChildEvent*
void q_sciscintillabase_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QChildEvent*)
void q_sciscintillabase_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param event QEvent*
void q_sciscintillabase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param event QEvent*
void q_sciscintillabase_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QEvent*)
void q_sciscintillabase_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param signal QMetaMethod*
void q_sciscintillabase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param signal QMetaMethod*
void q_sciscintillabase_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QMetaMethod*)
void q_sciscintillabase_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param signal QMetaMethod*
void q_sciscintillabase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param signal QMetaMethod*
void q_sciscintillabase_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QMetaMethod*)
void q_sciscintillabase_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void q_sciscintillabase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void q_sciscintillabase_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, int, int, int, int)
void q_sciscintillabase_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
QMargins* q_sciscintillabase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
QMargins* q_sciscintillabase_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback QMargins* fn()
void q_sciscintillabase_on_viewport_margins(void* self, QMargins* (*callback)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param param1 QPainter*
void q_sciscintillabase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param param1 QPainter*
void q_sciscintillabase_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, QPainter*)
void q_sciscintillabase_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback void fn()
void q_sciscintillabase_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback void fn()
void q_sciscintillabase_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback void fn()
void q_sciscintillabase_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback bool fn()
void q_sciscintillabase_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
bool q_sciscintillabase_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback bool fn()
void q_sciscintillabase_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
QObject* q_sciscintillabase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
QObject* q_sciscintillabase_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback QObject* fn()
void q_sciscintillabase_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
int32_t q_sciscintillabase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
int32_t q_sciscintillabase_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback int32_t fn()
void q_sciscintillabase_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param signal const char*
int32_t q_sciscintillabase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param signal const char*
int32_t q_sciscintillabase_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback int32_t fn(QsciScintillaBase*, const char*)
void q_sciscintillabase_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param signal QMetaMethod*
bool q_sciscintillabase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param signal QMetaMethod*
bool q_sciscintillabase_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback bool fn(QsciScintillaBase*, QMetaMethod*)
void q_sciscintillabase_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_sciscintillabase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_sciscintillabase_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintillaBase*
/// @param callback double fn(QsciScintillaBase*, enum QPaintDevice__PaintDeviceMetric, enum QPaintDevice__PaintDeviceMetric)
void q_sciscintillabase_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QsciScintillaBase*
/// @param callback void fn(QsciScintillaBase*, const char*)
void q_sciscintillabase_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Delete this object from C++ memory.
///
/// @param self QsciScintillaBase*
void q_sciscintillabase_delete(void* self);

typedef enum {
    QSCISCINTILLABASE__SCI_START = 2000,
    QSCISCINTILLABASE__SCI_OPTIONAL_START = 3000,
    QSCISCINTILLABASE__SCI_LEXER_START = 4000,
    QSCISCINTILLABASE__SCI_ADDTEXT = 2001,
    QSCISCINTILLABASE__SCI_ADDSTYLEDTEXT = 2002,
    QSCISCINTILLABASE__SCI_INSERTTEXT = 2003,
    QSCISCINTILLABASE__SCI_CLEARALL = 2004,
    QSCISCINTILLABASE__SCI_CLEARDOCUMENTSTYLE = 2005,
    QSCISCINTILLABASE__SCI_GETLENGTH = 2006,
    QSCISCINTILLABASE__SCI_GETCHARAT = 2007,
    QSCISCINTILLABASE__SCI_GETCURRENTPOS = 2008,
    QSCISCINTILLABASE__SCI_GETANCHOR = 2009,
    QSCISCINTILLABASE__SCI_GETSTYLEAT = 2010,
    QSCISCINTILLABASE__SCI_REDO = 2011,
    QSCISCINTILLABASE__SCI_SETUNDOCOLLECTION = 2012,
    QSCISCINTILLABASE__SCI_SELECTALL = 2013,
    QSCISCINTILLABASE__SCI_SETSAVEPOINT = 2014,
    QSCISCINTILLABASE__SCI_GETSTYLEDTEXT = 2015,
    QSCISCINTILLABASE__SCI_CANREDO = 2016,
    QSCISCINTILLABASE__SCI_MARKERLINEFROMHANDLE = 2017,
    QSCISCINTILLABASE__SCI_MARKERDELETEHANDLE = 2018,
    QSCISCINTILLABASE__SCI_GETUNDOCOLLECTION = 2019,
    QSCISCINTILLABASE__SCI_GETVIEWWS = 2020,
    QSCISCINTILLABASE__SCI_SETVIEWWS = 2021,
    QSCISCINTILLABASE__SCI_POSITIONFROMPOINT = 2022,
    QSCISCINTILLABASE__SCI_POSITIONFROMPOINTCLOSE = 2023,
    QSCISCINTILLABASE__SCI_GOTOLINE = 2024,
    QSCISCINTILLABASE__SCI_GOTOPOS = 2025,
    QSCISCINTILLABASE__SCI_SETANCHOR = 2026,
    QSCISCINTILLABASE__SCI_GETCURLINE = 2027,
    QSCISCINTILLABASE__SCI_GETENDSTYLED = 2028,
    QSCISCINTILLABASE__SCI_CONVERTEOLS = 2029,
    QSCISCINTILLABASE__SCI_GETEOLMODE = 2030,
    QSCISCINTILLABASE__SCI_SETEOLMODE = 2031,
    QSCISCINTILLABASE__SCI_STARTSTYLING = 2032,
    QSCISCINTILLABASE__SCI_SETSTYLING = 2033,
    QSCISCINTILLABASE__SCI_GETBUFFEREDDRAW = 2034,
    QSCISCINTILLABASE__SCI_SETBUFFEREDDRAW = 2035,
    QSCISCINTILLABASE__SCI_SETTABWIDTH = 2036,
    QSCISCINTILLABASE__SCI_GETTABWIDTH = 2121,
    QSCISCINTILLABASE__SCI_SETCODEPAGE = 2037,
    QSCISCINTILLABASE__SCI_MARKERDEFINE = 2040,
    QSCISCINTILLABASE__SCI_MARKERSETFORE = 2041,
    QSCISCINTILLABASE__SCI_MARKERSETBACK = 2042,
    QSCISCINTILLABASE__SCI_MARKERADD = 2043,
    QSCISCINTILLABASE__SCI_MARKERDELETE = 2044,
    QSCISCINTILLABASE__SCI_MARKERDELETEALL = 2045,
    QSCISCINTILLABASE__SCI_MARKERGET = 2046,
    QSCISCINTILLABASE__SCI_MARKERNEXT = 2047,
    QSCISCINTILLABASE__SCI_MARKERPREVIOUS = 2048,
    QSCISCINTILLABASE__SCI_MARKERDEFINEPIXMAP = 2049,
    QSCISCINTILLABASE__SCI_SETMARGINTYPEN = 2240,
    QSCISCINTILLABASE__SCI_GETMARGINTYPEN = 2241,
    QSCISCINTILLABASE__SCI_SETMARGINWIDTHN = 2242,
    QSCISCINTILLABASE__SCI_GETMARGINWIDTHN = 2243,
    QSCISCINTILLABASE__SCI_SETMARGINMASKN = 2244,
    QSCISCINTILLABASE__SCI_GETMARGINMASKN = 2245,
    QSCISCINTILLABASE__SCI_SETMARGINSENSITIVEN = 2246,
    QSCISCINTILLABASE__SCI_GETMARGINSENSITIVEN = 2247,
    QSCISCINTILLABASE__SCI_SETMARGINCURSORN = 2248,
    QSCISCINTILLABASE__SCI_GETMARGINCURSORN = 2249,
    QSCISCINTILLABASE__SCI_STYLECLEARALL = 2050,
    QSCISCINTILLABASE__SCI_STYLESETFORE = 2051,
    QSCISCINTILLABASE__SCI_STYLESETBACK = 2052,
    QSCISCINTILLABASE__SCI_STYLESETBOLD = 2053,
    QSCISCINTILLABASE__SCI_STYLESETITALIC = 2054,
    QSCISCINTILLABASE__SCI_STYLESETSIZE = 2055,
    QSCISCINTILLABASE__SCI_STYLESETFONT = 2056,
    QSCISCINTILLABASE__SCI_STYLESETEOLFILLED = 2057,
    QSCISCINTILLABASE__SCI_STYLERESETDEFAULT = 2058,
    QSCISCINTILLABASE__SCI_STYLESETUNDERLINE = 2059,
    QSCISCINTILLABASE__SCI_STYLESETCASE = 2060,
    QSCISCINTILLABASE__SCI_STYLESETSIZEFRACTIONAL = 2061,
    QSCISCINTILLABASE__SCI_STYLEGETSIZEFRACTIONAL = 2062,
    QSCISCINTILLABASE__SCI_STYLESETWEIGHT = 2063,
    QSCISCINTILLABASE__SCI_STYLEGETWEIGHT = 2064,
    QSCISCINTILLABASE__SCI_STYLESETCHARACTERSET = 2066,
    QSCISCINTILLABASE__SCI_SETSELFORE = 2067,
    QSCISCINTILLABASE__SCI_SETSELBACK = 2068,
    QSCISCINTILLABASE__SCI_SETCARETFORE = 2069,
    QSCISCINTILLABASE__SCI_ASSIGNCMDKEY = 2070,
    QSCISCINTILLABASE__SCI_CLEARCMDKEY = 2071,
    QSCISCINTILLABASE__SCI_CLEARALLCMDKEYS = 2072,
    QSCISCINTILLABASE__SCI_SETSTYLINGEX = 2073,
    QSCISCINTILLABASE__SCI_STYLESETVISIBLE = 2074,
    QSCISCINTILLABASE__SCI_GETCARETPERIOD = 2075,
    QSCISCINTILLABASE__SCI_SETCARETPERIOD = 2076,
    QSCISCINTILLABASE__SCI_SETWORDCHARS = 2077,
    QSCISCINTILLABASE__SCI_BEGINUNDOACTION = 2078,
    QSCISCINTILLABASE__SCI_ENDUNDOACTION = 2079,
    QSCISCINTILLABASE__SCI_INDICSETSTYLE = 2080,
    QSCISCINTILLABASE__SCI_INDICGETSTYLE = 2081,
    QSCISCINTILLABASE__SCI_INDICSETFORE = 2082,
    QSCISCINTILLABASE__SCI_INDICGETFORE = 2083,
    QSCISCINTILLABASE__SCI_SETWHITESPACEFORE = 2084,
    QSCISCINTILLABASE__SCI_SETWHITESPACEBACK = 2085,
    QSCISCINTILLABASE__SCI_SETWHITESPACESIZE = 2086,
    QSCISCINTILLABASE__SCI_GETWHITESPACESIZE = 2087,
    QSCISCINTILLABASE__SCI_SETSTYLEBITS = 2090,
    QSCISCINTILLABASE__SCI_GETSTYLEBITS = 2091,
    QSCISCINTILLABASE__SCI_SETLINESTATE = 2092,
    QSCISCINTILLABASE__SCI_GETLINESTATE = 2093,
    QSCISCINTILLABASE__SCI_GETMAXLINESTATE = 2094,
    QSCISCINTILLABASE__SCI_GETCARETLINEVISIBLE = 2095,
    QSCISCINTILLABASE__SCI_SETCARETLINEVISIBLE = 2096,
    QSCISCINTILLABASE__SCI_GETCARETLINEBACK = 2097,
    QSCISCINTILLABASE__SCI_SETCARETLINEBACK = 2098,
    QSCISCINTILLABASE__SCI_STYLESETCHANGEABLE = 2099,
    QSCISCINTILLABASE__SCI_AUTOCSHOW = 2100,
    QSCISCINTILLABASE__SCI_AUTOCCANCEL = 2101,
    QSCISCINTILLABASE__SCI_AUTOCACTIVE = 2102,
    QSCISCINTILLABASE__SCI_AUTOCPOSSTART = 2103,
    QSCISCINTILLABASE__SCI_AUTOCCOMPLETE = 2104,
    QSCISCINTILLABASE__SCI_AUTOCSTOPS = 2105,
    QSCISCINTILLABASE__SCI_AUTOCSETSEPARATOR = 2106,
    QSCISCINTILLABASE__SCI_AUTOCGETSEPARATOR = 2107,
    QSCISCINTILLABASE__SCI_AUTOCSELECT = 2108,
    QSCISCINTILLABASE__SCI_AUTOCSETCANCELATSTART = 2110,
    QSCISCINTILLABASE__SCI_AUTOCGETCANCELATSTART = 2111,
    QSCISCINTILLABASE__SCI_AUTOCSETFILLUPS = 2112,
    QSCISCINTILLABASE__SCI_AUTOCSETCHOOSESINGLE = 2113,
    QSCISCINTILLABASE__SCI_AUTOCGETCHOOSESINGLE = 2114,
    QSCISCINTILLABASE__SCI_AUTOCSETIGNORECASE = 2115,
    QSCISCINTILLABASE__SCI_AUTOCGETIGNORECASE = 2116,
    QSCISCINTILLABASE__SCI_USERLISTSHOW = 2117,
    QSCISCINTILLABASE__SCI_AUTOCSETAUTOHIDE = 2118,
    QSCISCINTILLABASE__SCI_AUTOCGETAUTOHIDE = 2119,
    QSCISCINTILLABASE__SCI_AUTOCSETDROPRESTOFWORD = 2270,
    QSCISCINTILLABASE__SCI_AUTOCGETDROPRESTOFWORD = 2271,
    QSCISCINTILLABASE__SCI_SETINDENT = 2122,
    QSCISCINTILLABASE__SCI_GETINDENT = 2123,
    QSCISCINTILLABASE__SCI_SETUSETABS = 2124,
    QSCISCINTILLABASE__SCI_GETUSETABS = 2125,
    QSCISCINTILLABASE__SCI_SETLINEINDENTATION = 2126,
    QSCISCINTILLABASE__SCI_GETLINEINDENTATION = 2127,
    QSCISCINTILLABASE__SCI_GETLINEINDENTPOSITION = 2128,
    QSCISCINTILLABASE__SCI_GETCOLUMN = 2129,
    QSCISCINTILLABASE__SCI_SETHSCROLLBAR = 2130,
    QSCISCINTILLABASE__SCI_GETHSCROLLBAR = 2131,
    QSCISCINTILLABASE__SCI_SETINDENTATIONGUIDES = 2132,
    QSCISCINTILLABASE__SCI_GETINDENTATIONGUIDES = 2133,
    QSCISCINTILLABASE__SCI_SETHIGHLIGHTGUIDE = 2134,
    QSCISCINTILLABASE__SCI_GETHIGHLIGHTGUIDE = 2135,
    QSCISCINTILLABASE__SCI_GETLINEENDPOSITION = 2136,
    QSCISCINTILLABASE__SCI_GETCODEPAGE = 2137,
    QSCISCINTILLABASE__SCI_GETCARETFORE = 2138,
    QSCISCINTILLABASE__SCI_GETREADONLY = 2140,
    QSCISCINTILLABASE__SCI_SETCURRENTPOS = 2141,
    QSCISCINTILLABASE__SCI_SETSELECTIONSTART = 2142,
    QSCISCINTILLABASE__SCI_GETSELECTIONSTART = 2143,
    QSCISCINTILLABASE__SCI_SETSELECTIONEND = 2144,
    QSCISCINTILLABASE__SCI_GETSELECTIONEND = 2145,
    QSCISCINTILLABASE__SCI_SETPRINTMAGNIFICATION = 2146,
    QSCISCINTILLABASE__SCI_GETPRINTMAGNIFICATION = 2147,
    QSCISCINTILLABASE__SCI_SETPRINTCOLOURMODE = 2148,
    QSCISCINTILLABASE__SCI_GETPRINTCOLOURMODE = 2149,
    QSCISCINTILLABASE__SCI_FINDTEXT = 2150,
    QSCISCINTILLABASE__SCI_FORMATRANGE = 2151,
    QSCISCINTILLABASE__SCI_GETFIRSTVISIBLELINE = 2152,
    QSCISCINTILLABASE__SCI_GETLINE = 2153,
    QSCISCINTILLABASE__SCI_GETLINECOUNT = 2154,
    QSCISCINTILLABASE__SCI_SETMARGINLEFT = 2155,
    QSCISCINTILLABASE__SCI_GETMARGINLEFT = 2156,
    QSCISCINTILLABASE__SCI_SETMARGINRIGHT = 2157,
    QSCISCINTILLABASE__SCI_GETMARGINRIGHT = 2158,
    QSCISCINTILLABASE__SCI_GETMODIFY = 2159,
    QSCISCINTILLABASE__SCI_SETSEL = 2160,
    QSCISCINTILLABASE__SCI_GETSELTEXT = 2161,
    QSCISCINTILLABASE__SCI_GETTEXTRANGE = 2162,
    QSCISCINTILLABASE__SCI_HIDESELECTION = 2163,
    QSCISCINTILLABASE__SCI_POINTXFROMPOSITION = 2164,
    QSCISCINTILLABASE__SCI_POINTYFROMPOSITION = 2165,
    QSCISCINTILLABASE__SCI_LINEFROMPOSITION = 2166,
    QSCISCINTILLABASE__SCI_POSITIONFROMLINE = 2167,
    QSCISCINTILLABASE__SCI_LINESCROLL = 2168,
    QSCISCINTILLABASE__SCI_SCROLLCARET = 2169,
    QSCISCINTILLABASE__SCI_REPLACESEL = 2170,
    QSCISCINTILLABASE__SCI_SETREADONLY = 2171,
    QSCISCINTILLABASE__SCI_NULL = 2172,
    QSCISCINTILLABASE__SCI_CANPASTE = 2173,
    QSCISCINTILLABASE__SCI_CANUNDO = 2174,
    QSCISCINTILLABASE__SCI_EMPTYUNDOBUFFER = 2175,
    QSCISCINTILLABASE__SCI_UNDO = 2176,
    QSCISCINTILLABASE__SCI_CUT = 2177,
    QSCISCINTILLABASE__SCI_COPY = 2178,
    QSCISCINTILLABASE__SCI_PASTE = 2179,
    QSCISCINTILLABASE__SCI_CLEAR = 2180,
    QSCISCINTILLABASE__SCI_SETTEXT = 2181,
    QSCISCINTILLABASE__SCI_GETTEXT = 2182,
    QSCISCINTILLABASE__SCI_GETTEXTLENGTH = 2183,
    QSCISCINTILLABASE__SCI_GETDIRECTFUNCTION = 2184,
    QSCISCINTILLABASE__SCI_GETDIRECTPOINTER = 2185,
    QSCISCINTILLABASE__SCI_SETOVERTYPE = 2186,
    QSCISCINTILLABASE__SCI_GETOVERTYPE = 2187,
    QSCISCINTILLABASE__SCI_SETCARETWIDTH = 2188,
    QSCISCINTILLABASE__SCI_GETCARETWIDTH = 2189,
    QSCISCINTILLABASE__SCI_SETTARGETSTART = 2190,
    QSCISCINTILLABASE__SCI_GETTARGETSTART = 2191,
    QSCISCINTILLABASE__SCI_SETTARGETEND = 2192,
    QSCISCINTILLABASE__SCI_GETTARGETEND = 2193,
    QSCISCINTILLABASE__SCI_REPLACETARGET = 2194,
    QSCISCINTILLABASE__SCI_REPLACETARGETRE = 2195,
    QSCISCINTILLABASE__SCI_SEARCHINTARGET = 2197,
    QSCISCINTILLABASE__SCI_SETSEARCHFLAGS = 2198,
    QSCISCINTILLABASE__SCI_GETSEARCHFLAGS = 2199,
    QSCISCINTILLABASE__SCI_CALLTIPSHOW = 2200,
    QSCISCINTILLABASE__SCI_CALLTIPCANCEL = 2201,
    QSCISCINTILLABASE__SCI_CALLTIPACTIVE = 2202,
    QSCISCINTILLABASE__SCI_CALLTIPPOSSTART = 2203,
    QSCISCINTILLABASE__SCI_CALLTIPSETHLT = 2204,
    QSCISCINTILLABASE__SCI_CALLTIPSETBACK = 2205,
    QSCISCINTILLABASE__SCI_CALLTIPSETFORE = 2206,
    QSCISCINTILLABASE__SCI_CALLTIPSETFOREHLT = 2207,
    QSCISCINTILLABASE__SCI_AUTOCSETMAXWIDTH = 2208,
    QSCISCINTILLABASE__SCI_AUTOCGETMAXWIDTH = 2209,
    QSCISCINTILLABASE__SCI_AUTOCSETMAXHEIGHT = 2210,
    QSCISCINTILLABASE__SCI_AUTOCGETMAXHEIGHT = 2211,
    QSCISCINTILLABASE__SCI_CALLTIPUSESTYLE = 2212,
    QSCISCINTILLABASE__SCI_CALLTIPSETPOSITION = 2213,
    QSCISCINTILLABASE__SCI_CALLTIPSETPOSSTART = 2214,
    QSCISCINTILLABASE__SCI_VISIBLEFROMDOCLINE = 2220,
    QSCISCINTILLABASE__SCI_DOCLINEFROMVISIBLE = 2221,
    QSCISCINTILLABASE__SCI_SETFOLDLEVEL = 2222,
    QSCISCINTILLABASE__SCI_GETFOLDLEVEL = 2223,
    QSCISCINTILLABASE__SCI_GETLASTCHILD = 2224,
    QSCISCINTILLABASE__SCI_GETFOLDPARENT = 2225,
    QSCISCINTILLABASE__SCI_SHOWLINES = 2226,
    QSCISCINTILLABASE__SCI_HIDELINES = 2227,
    QSCISCINTILLABASE__SCI_GETLINEVISIBLE = 2228,
    QSCISCINTILLABASE__SCI_SETFOLDEXPANDED = 2229,
    QSCISCINTILLABASE__SCI_GETFOLDEXPANDED = 2230,
    QSCISCINTILLABASE__SCI_TOGGLEFOLD = 2231,
    QSCISCINTILLABASE__SCI_ENSUREVISIBLE = 2232,
    QSCISCINTILLABASE__SCI_SETFOLDFLAGS = 2233,
    QSCISCINTILLABASE__SCI_ENSUREVISIBLEENFORCEPOLICY = 2234,
    QSCISCINTILLABASE__SCI_WRAPCOUNT = 2235,
    QSCISCINTILLABASE__SCI_GETALLLINESVISIBLE = 2236,
    QSCISCINTILLABASE__SCI_FOLDLINE = 2237,
    QSCISCINTILLABASE__SCI_FOLDCHILDREN = 2238,
    QSCISCINTILLABASE__SCI_EXPANDCHILDREN = 2239,
    QSCISCINTILLABASE__SCI_SETMARGINBACKN = 2250,
    QSCISCINTILLABASE__SCI_GETMARGINBACKN = 2251,
    QSCISCINTILLABASE__SCI_SETMARGINS = 2252,
    QSCISCINTILLABASE__SCI_GETMARGINS = 2253,
    QSCISCINTILLABASE__SCI_SETTABINDENTS = 2260,
    QSCISCINTILLABASE__SCI_GETTABINDENTS = 2261,
    QSCISCINTILLABASE__SCI_SETBACKSPACEUNINDENTS = 2262,
    QSCISCINTILLABASE__SCI_GETBACKSPACEUNINDENTS = 2263,
    QSCISCINTILLABASE__SCI_SETMOUSEDWELLTIME = 2264,
    QSCISCINTILLABASE__SCI_GETMOUSEDWELLTIME = 2265,
    QSCISCINTILLABASE__SCI_WORDSTARTPOSITION = 2266,
    QSCISCINTILLABASE__SCI_WORDENDPOSITION = 2267,
    QSCISCINTILLABASE__SCI_SETWRAPMODE = 2268,
    QSCISCINTILLABASE__SCI_GETWRAPMODE = 2269,
    QSCISCINTILLABASE__SCI_SETLAYOUTCACHE = 2272,
    QSCISCINTILLABASE__SCI_GETLAYOUTCACHE = 2273,
    QSCISCINTILLABASE__SCI_SETSCROLLWIDTH = 2274,
    QSCISCINTILLABASE__SCI_GETSCROLLWIDTH = 2275,
    QSCISCINTILLABASE__SCI_TEXTWIDTH = 2276,
    QSCISCINTILLABASE__SCI_SETENDATLASTLINE = 2277,
    QSCISCINTILLABASE__SCI_GETENDATLASTLINE = 2278,
    QSCISCINTILLABASE__SCI_TEXTHEIGHT = 2279,
    QSCISCINTILLABASE__SCI_SETVSCROLLBAR = 2280,
    QSCISCINTILLABASE__SCI_GETVSCROLLBAR = 2281,
    QSCISCINTILLABASE__SCI_APPENDTEXT = 2282,
    QSCISCINTILLABASE__SCI_GETTWOPHASEDRAW = 2283,
    QSCISCINTILLABASE__SCI_SETTWOPHASEDRAW = 2284,
    QSCISCINTILLABASE__SCI_AUTOCGETTYPESEPARATOR = 2285,
    QSCISCINTILLABASE__SCI_AUTOCSETTYPESEPARATOR = 2286,
    QSCISCINTILLABASE__SCI_TARGETFROMSELECTION = 2287,
    QSCISCINTILLABASE__SCI_LINESJOIN = 2288,
    QSCISCINTILLABASE__SCI_LINESSPLIT = 2289,
    QSCISCINTILLABASE__SCI_SETFOLDMARGINCOLOUR = 2290,
    QSCISCINTILLABASE__SCI_SETFOLDMARGINHICOLOUR = 2291,
    QSCISCINTILLABASE__SCI_MARKERSETBACKSELECTED = 2292,
    QSCISCINTILLABASE__SCI_MARKERENABLEHIGHLIGHT = 2293,
    QSCISCINTILLABASE__SCI_LINEDOWN = 2300,
    QSCISCINTILLABASE__SCI_LINEDOWNEXTEND = 2301,
    QSCISCINTILLABASE__SCI_LINEUP = 2302,
    QSCISCINTILLABASE__SCI_LINEUPEXTEND = 2303,
    QSCISCINTILLABASE__SCI_CHARLEFT = 2304,
    QSCISCINTILLABASE__SCI_CHARLEFTEXTEND = 2305,
    QSCISCINTILLABASE__SCI_CHARRIGHT = 2306,
    QSCISCINTILLABASE__SCI_CHARRIGHTEXTEND = 2307,
    QSCISCINTILLABASE__SCI_WORDLEFT = 2308,
    QSCISCINTILLABASE__SCI_WORDLEFTEXTEND = 2309,
    QSCISCINTILLABASE__SCI_WORDRIGHT = 2310,
    QSCISCINTILLABASE__SCI_WORDRIGHTEXTEND = 2311,
    QSCISCINTILLABASE__SCI_HOME = 2312,
    QSCISCINTILLABASE__SCI_HOMEEXTEND = 2313,
    QSCISCINTILLABASE__SCI_LINEEND = 2314,
    QSCISCINTILLABASE__SCI_LINEENDEXTEND = 2315,
    QSCISCINTILLABASE__SCI_DOCUMENTSTART = 2316,
    QSCISCINTILLABASE__SCI_DOCUMENTSTARTEXTEND = 2317,
    QSCISCINTILLABASE__SCI_DOCUMENTEND = 2318,
    QSCISCINTILLABASE__SCI_DOCUMENTENDEXTEND = 2319,
    QSCISCINTILLABASE__SCI_PAGEUP = 2320,
    QSCISCINTILLABASE__SCI_PAGEUPEXTEND = 2321,
    QSCISCINTILLABASE__SCI_PAGEDOWN = 2322,
    QSCISCINTILLABASE__SCI_PAGEDOWNEXTEND = 2323,
    QSCISCINTILLABASE__SCI_EDITTOGGLEOVERTYPE = 2324,
    QSCISCINTILLABASE__SCI_CANCEL = 2325,
    QSCISCINTILLABASE__SCI_DELETEBACK = 2326,
    QSCISCINTILLABASE__SCI_TAB = 2327,
    QSCISCINTILLABASE__SCI_BACKTAB = 2328,
    QSCISCINTILLABASE__SCI_NEWLINE = 2329,
    QSCISCINTILLABASE__SCI_FORMFEED = 2330,
    QSCISCINTILLABASE__SCI_VCHOME = 2331,
    QSCISCINTILLABASE__SCI_VCHOMEEXTEND = 2332,
    QSCISCINTILLABASE__SCI_ZOOMIN = 2333,
    QSCISCINTILLABASE__SCI_ZOOMOUT = 2334,
    QSCISCINTILLABASE__SCI_DELWORDLEFT = 2335,
    QSCISCINTILLABASE__SCI_DELWORDRIGHT = 2336,
    QSCISCINTILLABASE__SCI_LINECUT = 2337,
    QSCISCINTILLABASE__SCI_LINEDELETE = 2338,
    QSCISCINTILLABASE__SCI_LINETRANSPOSE = 2339,
    QSCISCINTILLABASE__SCI_LOWERCASE = 2340,
    QSCISCINTILLABASE__SCI_UPPERCASE = 2341,
    QSCISCINTILLABASE__SCI_LINESCROLLDOWN = 2342,
    QSCISCINTILLABASE__SCI_LINESCROLLUP = 2343,
    QSCISCINTILLABASE__SCI_DELETEBACKNOTLINE = 2344,
    QSCISCINTILLABASE__SCI_HOMEDISPLAY = 2345,
    QSCISCINTILLABASE__SCI_HOMEDISPLAYEXTEND = 2346,
    QSCISCINTILLABASE__SCI_LINEENDDISPLAY = 2347,
    QSCISCINTILLABASE__SCI_LINEENDDISPLAYEXTEND = 2348,
    QSCISCINTILLABASE__SCI_MOVECARETINSIDEVIEW = 2401,
    QSCISCINTILLABASE__SCI_LINELENGTH = 2350,
    QSCISCINTILLABASE__SCI_BRACEHIGHLIGHT = 2351,
    QSCISCINTILLABASE__SCI_BRACEBADLIGHT = 2352,
    QSCISCINTILLABASE__SCI_BRACEMATCH = 2353,
    QSCISCINTILLABASE__SCI_LINEREVERSE = 2354,
    QSCISCINTILLABASE__SCI_GETVIEWEOL = 2355,
    QSCISCINTILLABASE__SCI_SETVIEWEOL = 2356,
    QSCISCINTILLABASE__SCI_GETDOCPOINTER = 2357,
    QSCISCINTILLABASE__SCI_SETDOCPOINTER = 2358,
    QSCISCINTILLABASE__SCI_SETMODEVENTMASK = 2359,
    QSCISCINTILLABASE__SCI_GETEDGECOLUMN = 2360,
    QSCISCINTILLABASE__SCI_SETEDGECOLUMN = 2361,
    QSCISCINTILLABASE__SCI_GETEDGEMODE = 2362,
    QSCISCINTILLABASE__SCI_SETEDGEMODE = 2363,
    QSCISCINTILLABASE__SCI_GETEDGECOLOUR = 2364,
    QSCISCINTILLABASE__SCI_SETEDGECOLOUR = 2365,
    QSCISCINTILLABASE__SCI_SEARCHANCHOR = 2366,
    QSCISCINTILLABASE__SCI_SEARCHNEXT = 2367,
    QSCISCINTILLABASE__SCI_SEARCHPREV = 2368,
    QSCISCINTILLABASE__SCI_LINESONSCREEN = 2370,
    QSCISCINTILLABASE__SCI_USEPOPUP = 2371,
    QSCISCINTILLABASE__SCI_SELECTIONISRECTANGLE = 2372,
    QSCISCINTILLABASE__SCI_SETZOOM = 2373,
    QSCISCINTILLABASE__SCI_GETZOOM = 2374,
    QSCISCINTILLABASE__SCI_CREATEDOCUMENT = 2375,
    QSCISCINTILLABASE__SCI_ADDREFDOCUMENT = 2376,
    QSCISCINTILLABASE__SCI_RELEASEDOCUMENT = 2377,
    QSCISCINTILLABASE__SCI_GETMODEVENTMASK = 2378,
    QSCISCINTILLABASE__SCI_SETFOCUS = 2380,
    QSCISCINTILLABASE__SCI_GETFOCUS = 2381,
    QSCISCINTILLABASE__SCI_SETSTATUS = 2382,
    QSCISCINTILLABASE__SCI_GETSTATUS = 2383,
    QSCISCINTILLABASE__SCI_SETMOUSEDOWNCAPTURES = 2384,
    QSCISCINTILLABASE__SCI_GETMOUSEDOWNCAPTURES = 2385,
    QSCISCINTILLABASE__SCI_SETCURSOR = 2386,
    QSCISCINTILLABASE__SCI_GETCURSOR = 2387,
    QSCISCINTILLABASE__SCI_SETCONTROLCHARSYMBOL = 2388,
    QSCISCINTILLABASE__SCI_GETCONTROLCHARSYMBOL = 2389,
    QSCISCINTILLABASE__SCI_WORDPARTLEFT = 2390,
    QSCISCINTILLABASE__SCI_WORDPARTLEFTEXTEND = 2391,
    QSCISCINTILLABASE__SCI_WORDPARTRIGHT = 2392,
    QSCISCINTILLABASE__SCI_WORDPARTRIGHTEXTEND = 2393,
    QSCISCINTILLABASE__SCI_SETVISIBLEPOLICY = 2394,
    QSCISCINTILLABASE__SCI_DELLINELEFT = 2395,
    QSCISCINTILLABASE__SCI_DELLINERIGHT = 2396,
    QSCISCINTILLABASE__SCI_SETXOFFSET = 2397,
    QSCISCINTILLABASE__SCI_GETXOFFSET = 2398,
    QSCISCINTILLABASE__SCI_CHOOSECARETX = 2399,
    QSCISCINTILLABASE__SCI_GRABFOCUS = 2400,
    QSCISCINTILLABASE__SCI_SETXCARETPOLICY = 2402,
    QSCISCINTILLABASE__SCI_SETYCARETPOLICY = 2403,
    QSCISCINTILLABASE__SCI_LINEDUPLICATE = 2404,
    QSCISCINTILLABASE__SCI_REGISTERIMAGE = 2405,
    QSCISCINTILLABASE__SCI_SETPRINTWRAPMODE = 2406,
    QSCISCINTILLABASE__SCI_GETPRINTWRAPMODE = 2407,
    QSCISCINTILLABASE__SCI_CLEARREGISTEREDIMAGES = 2408,
    QSCISCINTILLABASE__SCI_STYLESETHOTSPOT = 2409,
    QSCISCINTILLABASE__SCI_SETHOTSPOTACTIVEFORE = 2410,
    QSCISCINTILLABASE__SCI_SETHOTSPOTACTIVEBACK = 2411,
    QSCISCINTILLABASE__SCI_SETHOTSPOTACTIVEUNDERLINE = 2412,
    QSCISCINTILLABASE__SCI_PARADOWN = 2413,
    QSCISCINTILLABASE__SCI_PARADOWNEXTEND = 2414,
    QSCISCINTILLABASE__SCI_PARAUP = 2415,
    QSCISCINTILLABASE__SCI_PARAUPEXTEND = 2416,
    QSCISCINTILLABASE__SCI_POSITIONBEFORE = 2417,
    QSCISCINTILLABASE__SCI_POSITIONAFTER = 2418,
    QSCISCINTILLABASE__SCI_COPYRANGE = 2419,
    QSCISCINTILLABASE__SCI_COPYTEXT = 2420,
    QSCISCINTILLABASE__SCI_SETHOTSPOTSINGLELINE = 2421,
    QSCISCINTILLABASE__SCI_SETSELECTIONMODE = 2422,
    QSCISCINTILLABASE__SCI_GETSELECTIONMODE = 2423,
    QSCISCINTILLABASE__SCI_GETLINESELSTARTPOSITION = 2424,
    QSCISCINTILLABASE__SCI_GETLINESELENDPOSITION = 2425,
    QSCISCINTILLABASE__SCI_LINEDOWNRECTEXTEND = 2426,
    QSCISCINTILLABASE__SCI_LINEUPRECTEXTEND = 2427,
    QSCISCINTILLABASE__SCI_CHARLEFTRECTEXTEND = 2428,
    QSCISCINTILLABASE__SCI_CHARRIGHTRECTEXTEND = 2429,
    QSCISCINTILLABASE__SCI_HOMERECTEXTEND = 2430,
    QSCISCINTILLABASE__SCI_VCHOMERECTEXTEND = 2431,
    QSCISCINTILLABASE__SCI_LINEENDRECTEXTEND = 2432,
    QSCISCINTILLABASE__SCI_PAGEUPRECTEXTEND = 2433,
    QSCISCINTILLABASE__SCI_PAGEDOWNRECTEXTEND = 2434,
    QSCISCINTILLABASE__SCI_STUTTEREDPAGEUP = 2435,
    QSCISCINTILLABASE__SCI_STUTTEREDPAGEUPEXTEND = 2436,
    QSCISCINTILLABASE__SCI_STUTTEREDPAGEDOWN = 2437,
    QSCISCINTILLABASE__SCI_STUTTEREDPAGEDOWNEXTEND = 2438,
    QSCISCINTILLABASE__SCI_WORDLEFTEND = 2439,
    QSCISCINTILLABASE__SCI_WORDLEFTENDEXTEND = 2440,
    QSCISCINTILLABASE__SCI_WORDRIGHTEND = 2441,
    QSCISCINTILLABASE__SCI_WORDRIGHTENDEXTEND = 2442,
    QSCISCINTILLABASE__SCI_SETWHITESPACECHARS = 2443,
    QSCISCINTILLABASE__SCI_SETCHARSDEFAULT = 2444,
    QSCISCINTILLABASE__SCI_AUTOCGETCURRENT = 2445,
    QSCISCINTILLABASE__SCI_ALLOCATE = 2446,
    QSCISCINTILLABASE__SCI_HOMEWRAP = 2349,
    QSCISCINTILLABASE__SCI_HOMEWRAPEXTEND = 2450,
    QSCISCINTILLABASE__SCI_LINEENDWRAP = 2451,
    QSCISCINTILLABASE__SCI_LINEENDWRAPEXTEND = 2452,
    QSCISCINTILLABASE__SCI_VCHOMEWRAP = 2453,
    QSCISCINTILLABASE__SCI_VCHOMEWRAPEXTEND = 2454,
    QSCISCINTILLABASE__SCI_LINECOPY = 2455,
    QSCISCINTILLABASE__SCI_FINDCOLUMN = 2456,
    QSCISCINTILLABASE__SCI_GETCARETSTICKY = 2457,
    QSCISCINTILLABASE__SCI_SETCARETSTICKY = 2458,
    QSCISCINTILLABASE__SCI_TOGGLECARETSTICKY = 2459,
    QSCISCINTILLABASE__SCI_SETWRAPVISUALFLAGS = 2460,
    QSCISCINTILLABASE__SCI_GETWRAPVISUALFLAGS = 2461,
    QSCISCINTILLABASE__SCI_SETWRAPVISUALFLAGSLOCATION = 2462,
    QSCISCINTILLABASE__SCI_GETWRAPVISUALFLAGSLOCATION = 2463,
    QSCISCINTILLABASE__SCI_SETWRAPSTARTINDENT = 2464,
    QSCISCINTILLABASE__SCI_GETWRAPSTARTINDENT = 2465,
    QSCISCINTILLABASE__SCI_MARKERADDSET = 2466,
    QSCISCINTILLABASE__SCI_SETPASTECONVERTENDINGS = 2467,
    QSCISCINTILLABASE__SCI_GETPASTECONVERTENDINGS = 2468,
    QSCISCINTILLABASE__SCI_SELECTIONDUPLICATE = 2469,
    QSCISCINTILLABASE__SCI_SETCARETLINEBACKALPHA = 2470,
    QSCISCINTILLABASE__SCI_GETCARETLINEBACKALPHA = 2471,
    QSCISCINTILLABASE__SCI_SETWRAPINDENTMODE = 2472,
    QSCISCINTILLABASE__SCI_GETWRAPINDENTMODE = 2473,
    QSCISCINTILLABASE__SCI_MARKERSETALPHA = 2476,
    QSCISCINTILLABASE__SCI_GETSELALPHA = 2477,
    QSCISCINTILLABASE__SCI_SETSELALPHA = 2478,
    QSCISCINTILLABASE__SCI_GETSELEOLFILLED = 2479,
    QSCISCINTILLABASE__SCI_SETSELEOLFILLED = 2480,
    QSCISCINTILLABASE__SCI_STYLEGETFORE = 2481,
    QSCISCINTILLABASE__SCI_STYLEGETBACK = 2482,
    QSCISCINTILLABASE__SCI_STYLEGETBOLD = 2483,
    QSCISCINTILLABASE__SCI_STYLEGETITALIC = 2484,
    QSCISCINTILLABASE__SCI_STYLEGETSIZE = 2485,
    QSCISCINTILLABASE__SCI_STYLEGETFONT = 2486,
    QSCISCINTILLABASE__SCI_STYLEGETEOLFILLED = 2487,
    QSCISCINTILLABASE__SCI_STYLEGETUNDERLINE = 2488,
    QSCISCINTILLABASE__SCI_STYLEGETCASE = 2489,
    QSCISCINTILLABASE__SCI_STYLEGETCHARACTERSET = 2490,
    QSCISCINTILLABASE__SCI_STYLEGETVISIBLE = 2491,
    QSCISCINTILLABASE__SCI_STYLEGETCHANGEABLE = 2492,
    QSCISCINTILLABASE__SCI_STYLEGETHOTSPOT = 2493,
    QSCISCINTILLABASE__SCI_GETHOTSPOTACTIVEFORE = 2494,
    QSCISCINTILLABASE__SCI_GETHOTSPOTACTIVEBACK = 2495,
    QSCISCINTILLABASE__SCI_GETHOTSPOTACTIVEUNDERLINE = 2496,
    QSCISCINTILLABASE__SCI_GETHOTSPOTSINGLELINE = 2497,
    QSCISCINTILLABASE__SCI_BRACEHIGHLIGHTINDICATOR = 2498,
    QSCISCINTILLABASE__SCI_BRACEBADLIGHTINDICATOR = 2499,
    QSCISCINTILLABASE__SCI_SETINDICATORCURRENT = 2500,
    QSCISCINTILLABASE__SCI_GETINDICATORCURRENT = 2501,
    QSCISCINTILLABASE__SCI_SETINDICATORVALUE = 2502,
    QSCISCINTILLABASE__SCI_GETINDICATORVALUE = 2503,
    QSCISCINTILLABASE__SCI_INDICATORFILLRANGE = 2504,
    QSCISCINTILLABASE__SCI_INDICATORCLEARRANGE = 2505,
    QSCISCINTILLABASE__SCI_INDICATORALLONFOR = 2506,
    QSCISCINTILLABASE__SCI_INDICATORVALUEAT = 2507,
    QSCISCINTILLABASE__SCI_INDICATORSTART = 2508,
    QSCISCINTILLABASE__SCI_INDICATOREND = 2509,
    QSCISCINTILLABASE__SCI_INDICSETUNDER = 2510,
    QSCISCINTILLABASE__SCI_INDICGETUNDER = 2511,
    QSCISCINTILLABASE__SCI_SETCARETSTYLE = 2512,
    QSCISCINTILLABASE__SCI_GETCARETSTYLE = 2513,
    QSCISCINTILLABASE__SCI_SETPOSITIONCACHE = 2514,
    QSCISCINTILLABASE__SCI_GETPOSITIONCACHE = 2515,
    QSCISCINTILLABASE__SCI_SETSCROLLWIDTHTRACKING = 2516,
    QSCISCINTILLABASE__SCI_GETSCROLLWIDTHTRACKING = 2517,
    QSCISCINTILLABASE__SCI_DELWORDRIGHTEND = 2518,
    QSCISCINTILLABASE__SCI_COPYALLOWLINE = 2519,
    QSCISCINTILLABASE__SCI_GETCHARACTERPOINTER = 2520,
    QSCISCINTILLABASE__SCI_INDICSETALPHA = 2523,
    QSCISCINTILLABASE__SCI_INDICGETALPHA = 2524,
    QSCISCINTILLABASE__SCI_SETEXTRAASCENT = 2525,
    QSCISCINTILLABASE__SCI_GETEXTRAASCENT = 2526,
    QSCISCINTILLABASE__SCI_SETEXTRADESCENT = 2527,
    QSCISCINTILLABASE__SCI_GETEXTRADESCENT = 2528,
    QSCISCINTILLABASE__SCI_MARKERSYMBOLDEFINED = 2529,
    QSCISCINTILLABASE__SCI_MARGINSETTEXT = 2530,
    QSCISCINTILLABASE__SCI_MARGINGETTEXT = 2531,
    QSCISCINTILLABASE__SCI_MARGINSETSTYLE = 2532,
    QSCISCINTILLABASE__SCI_MARGINGETSTYLE = 2533,
    QSCISCINTILLABASE__SCI_MARGINSETSTYLES = 2534,
    QSCISCINTILLABASE__SCI_MARGINGETSTYLES = 2535,
    QSCISCINTILLABASE__SCI_MARGINTEXTCLEARALL = 2536,
    QSCISCINTILLABASE__SCI_MARGINSETSTYLEOFFSET = 2537,
    QSCISCINTILLABASE__SCI_MARGINGETSTYLEOFFSET = 2538,
    QSCISCINTILLABASE__SCI_SETMARGINOPTIONS = 2539,
    QSCISCINTILLABASE__SCI_ANNOTATIONSETTEXT = 2540,
    QSCISCINTILLABASE__SCI_ANNOTATIONGETTEXT = 2541,
    QSCISCINTILLABASE__SCI_ANNOTATIONSETSTYLE = 2542,
    QSCISCINTILLABASE__SCI_ANNOTATIONGETSTYLE = 2543,
    QSCISCINTILLABASE__SCI_ANNOTATIONSETSTYLES = 2544,
    QSCISCINTILLABASE__SCI_ANNOTATIONGETSTYLES = 2545,
    QSCISCINTILLABASE__SCI_ANNOTATIONGETLINES = 2546,
    QSCISCINTILLABASE__SCI_ANNOTATIONCLEARALL = 2547,
    QSCISCINTILLABASE__SCI_ANNOTATIONSETVISIBLE = 2548,
    QSCISCINTILLABASE__SCI_ANNOTATIONGETVISIBLE = 2549,
    QSCISCINTILLABASE__SCI_ANNOTATIONSETSTYLEOFFSET = 2550,
    QSCISCINTILLABASE__SCI_ANNOTATIONGETSTYLEOFFSET = 2551,
    QSCISCINTILLABASE__SCI_RELEASEALLEXTENDEDSTYLES = 2552,
    QSCISCINTILLABASE__SCI_ALLOCATEEXTENDEDSTYLES = 2553,
    QSCISCINTILLABASE__SCI_SETEMPTYSELECTION = 2556,
    QSCISCINTILLABASE__SCI_GETMARGINOPTIONS = 2557,
    QSCISCINTILLABASE__SCI_INDICSETOUTLINEALPHA = 2558,
    QSCISCINTILLABASE__SCI_INDICGETOUTLINEALPHA = 2559,
    QSCISCINTILLABASE__SCI_ADDUNDOACTION = 2560,
    QSCISCINTILLABASE__SCI_CHARPOSITIONFROMPOINT = 2561,
    QSCISCINTILLABASE__SCI_CHARPOSITIONFROMPOINTCLOSE = 2562,
    QSCISCINTILLABASE__SCI_SETMULTIPLESELECTION = 2563,
    QSCISCINTILLABASE__SCI_GETMULTIPLESELECTION = 2564,
    QSCISCINTILLABASE__SCI_SETADDITIONALSELECTIONTYPING = 2565,
    QSCISCINTILLABASE__SCI_GETADDITIONALSELECTIONTYPING = 2566,
    QSCISCINTILLABASE__SCI_SETADDITIONALCARETSBLINK = 2567,
    QSCISCINTILLABASE__SCI_GETADDITIONALCARETSBLINK = 2568,
    QSCISCINTILLABASE__SCI_SCROLLRANGE = 2569,
    QSCISCINTILLABASE__SCI_GETSELECTIONS = 2570,
    QSCISCINTILLABASE__SCI_CLEARSELECTIONS = 2571,
    QSCISCINTILLABASE__SCI_SETSELECTION = 2572,
    QSCISCINTILLABASE__SCI_ADDSELECTION = 2573,
    QSCISCINTILLABASE__SCI_SETMAINSELECTION = 2574,
    QSCISCINTILLABASE__SCI_GETMAINSELECTION = 2575,
    QSCISCINTILLABASE__SCI_SETSELECTIONNCARET = 2576,
    QSCISCINTILLABASE__SCI_GETSELECTIONNCARET = 2577,
    QSCISCINTILLABASE__SCI_SETSELECTIONNANCHOR = 2578,
    QSCISCINTILLABASE__SCI_GETSELECTIONNANCHOR = 2579,
    QSCISCINTILLABASE__SCI_SETSELECTIONNCARETVIRTUALSPACE = 2580,
    QSCISCINTILLABASE__SCI_GETSELECTIONNCARETVIRTUALSPACE = 2581,
    QSCISCINTILLABASE__SCI_SETSELECTIONNANCHORVIRTUALSPACE = 2582,
    QSCISCINTILLABASE__SCI_GETSELECTIONNANCHORVIRTUALSPACE = 2583,
    QSCISCINTILLABASE__SCI_SETSELECTIONNSTART = 2584,
    QSCISCINTILLABASE__SCI_GETSELECTIONNSTART = 2585,
    QSCISCINTILLABASE__SCI_SETSELECTIONNEND = 2586,
    QSCISCINTILLABASE__SCI_GETSELECTIONNEND = 2587,
    QSCISCINTILLABASE__SCI_SETRECTANGULARSELECTIONCARET = 2588,
    QSCISCINTILLABASE__SCI_GETRECTANGULARSELECTIONCARET = 2589,
    QSCISCINTILLABASE__SCI_SETRECTANGULARSELECTIONANCHOR = 2590,
    QSCISCINTILLABASE__SCI_GETRECTANGULARSELECTIONANCHOR = 2591,
    QSCISCINTILLABASE__SCI_SETRECTANGULARSELECTIONCARETVIRTUALSPACE = 2592,
    QSCISCINTILLABASE__SCI_GETRECTANGULARSELECTIONCARETVIRTUALSPACE = 2593,
    QSCISCINTILLABASE__SCI_SETRECTANGULARSELECTIONANCHORVIRTUALSPACE = 2594,
    QSCISCINTILLABASE__SCI_GETRECTANGULARSELECTIONANCHORVIRTUALSPACE = 2595,
    QSCISCINTILLABASE__SCI_SETVIRTUALSPACEOPTIONS = 2596,
    QSCISCINTILLABASE__SCI_GETVIRTUALSPACEOPTIONS = 2597,
    QSCISCINTILLABASE__SCI_SETRECTANGULARSELECTIONMODIFIER = 2598,
    QSCISCINTILLABASE__SCI_GETRECTANGULARSELECTIONMODIFIER = 2599,
    QSCISCINTILLABASE__SCI_SETADDITIONALSELFORE = 2600,
    QSCISCINTILLABASE__SCI_SETADDITIONALSELBACK = 2601,
    QSCISCINTILLABASE__SCI_SETADDITIONALSELALPHA = 2602,
    QSCISCINTILLABASE__SCI_GETADDITIONALSELALPHA = 2603,
    QSCISCINTILLABASE__SCI_SETADDITIONALCARETFORE = 2604,
    QSCISCINTILLABASE__SCI_GETADDITIONALCARETFORE = 2605,
    QSCISCINTILLABASE__SCI_ROTATESELECTION = 2606,
    QSCISCINTILLABASE__SCI_SWAPMAINANCHORCARET = 2607,
    QSCISCINTILLABASE__SCI_SETADDITIONALCARETSVISIBLE = 2608,
    QSCISCINTILLABASE__SCI_GETADDITIONALCARETSVISIBLE = 2609,
    QSCISCINTILLABASE__SCI_AUTOCGETCURRENTTEXT = 2610,
    QSCISCINTILLABASE__SCI_SETFONTQUALITY = 2611,
    QSCISCINTILLABASE__SCI_GETFONTQUALITY = 2612,
    QSCISCINTILLABASE__SCI_SETFIRSTVISIBLELINE = 2613,
    QSCISCINTILLABASE__SCI_SETMULTIPASTE = 2614,
    QSCISCINTILLABASE__SCI_GETMULTIPASTE = 2615,
    QSCISCINTILLABASE__SCI_GETTAG = 2616,
    QSCISCINTILLABASE__SCI_CHANGELEXERSTATE = 2617,
    QSCISCINTILLABASE__SCI_CONTRACTEDFOLDNEXT = 2618,
    QSCISCINTILLABASE__SCI_VERTICALCENTRECARET = 2619,
    QSCISCINTILLABASE__SCI_MOVESELECTEDLINESUP = 2620,
    QSCISCINTILLABASE__SCI_MOVESELECTEDLINESDOWN = 2621,
    QSCISCINTILLABASE__SCI_SETIDENTIFIER = 2622,
    QSCISCINTILLABASE__SCI_GETIDENTIFIER = 2623,
    QSCISCINTILLABASE__SCI_RGBAIMAGESETWIDTH = 2624,
    QSCISCINTILLABASE__SCI_RGBAIMAGESETHEIGHT = 2625,
    QSCISCINTILLABASE__SCI_MARKERDEFINERGBAIMAGE = 2626,
    QSCISCINTILLABASE__SCI_REGISTERRGBAIMAGE = 2627,
    QSCISCINTILLABASE__SCI_SCROLLTOSTART = 2628,
    QSCISCINTILLABASE__SCI_SCROLLTOEND = 2629,
    QSCISCINTILLABASE__SCI_SETTECHNOLOGY = 2630,
    QSCISCINTILLABASE__SCI_GETTECHNOLOGY = 2631,
    QSCISCINTILLABASE__SCI_CREATELOADER = 2632,
    QSCISCINTILLABASE__SCI_COUNTCHARACTERS = 2633,
    QSCISCINTILLABASE__SCI_AUTOCSETCASEINSENSITIVEBEHAVIOUR = 2634,
    QSCISCINTILLABASE__SCI_AUTOCGETCASEINSENSITIVEBEHAVIOUR = 2635,
    QSCISCINTILLABASE__SCI_AUTOCSETMULTI = 2636,
    QSCISCINTILLABASE__SCI_AUTOCGETMULTI = 2637,
    QSCISCINTILLABASE__SCI_FINDINDICATORSHOW = 2640,
    QSCISCINTILLABASE__SCI_FINDINDICATORFLASH = 2641,
    QSCISCINTILLABASE__SCI_FINDINDICATORHIDE = 2642,
    QSCISCINTILLABASE__SCI_GETRANGEPOINTER = 2643,
    QSCISCINTILLABASE__SCI_GETGAPPOSITION = 2644,
    QSCISCINTILLABASE__SCI_DELETERANGE = 2645,
    QSCISCINTILLABASE__SCI_GETWORDCHARS = 2646,
    QSCISCINTILLABASE__SCI_GETWHITESPACECHARS = 2647,
    QSCISCINTILLABASE__SCI_SETPUNCTUATIONCHARS = 2648,
    QSCISCINTILLABASE__SCI_GETPUNCTUATIONCHARS = 2649,
    QSCISCINTILLABASE__SCI_GETSELECTIONEMPTY = 2650,
    QSCISCINTILLABASE__SCI_RGBAIMAGESETSCALE = 2651,
    QSCISCINTILLABASE__SCI_VCHOMEDISPLAY = 2652,
    QSCISCINTILLABASE__SCI_VCHOMEDISPLAYEXTEND = 2653,
    QSCISCINTILLABASE__SCI_GETCARETLINEVISIBLEALWAYS = 2654,
    QSCISCINTILLABASE__SCI_SETCARETLINEVISIBLEALWAYS = 2655,
    QSCISCINTILLABASE__SCI_SETLINEENDTYPESALLOWED = 2656,
    QSCISCINTILLABASE__SCI_GETLINEENDTYPESALLOWED = 2657,
    QSCISCINTILLABASE__SCI_GETLINEENDTYPESACTIVE = 2658,
    QSCISCINTILLABASE__SCI_AUTOCSETORDER = 2660,
    QSCISCINTILLABASE__SCI_AUTOCGETORDER = 2661,
    QSCISCINTILLABASE__SCI_FOLDALL = 2662,
    QSCISCINTILLABASE__SCI_SETAUTOMATICFOLD = 2663,
    QSCISCINTILLABASE__SCI_GETAUTOMATICFOLD = 2664,
    QSCISCINTILLABASE__SCI_SETREPRESENTATION = 2665,
    QSCISCINTILLABASE__SCI_GETREPRESENTATION = 2666,
    QSCISCINTILLABASE__SCI_CLEARREPRESENTATION = 2667,
    QSCISCINTILLABASE__SCI_SETMOUSESELECTIONRECTANGULARSWITCH = 2668,
    QSCISCINTILLABASE__SCI_GETMOUSESELECTIONRECTANGULARSWITCH = 2669,
    QSCISCINTILLABASE__SCI_POSITIONRELATIVE = 2670,
    QSCISCINTILLABASE__SCI_DROPSELECTIONN = 2671,
    QSCISCINTILLABASE__SCI_CHANGEINSERTION = 2672,
    QSCISCINTILLABASE__SCI_GETPHASESDRAW = 2673,
    QSCISCINTILLABASE__SCI_SETPHASESDRAW = 2674,
    QSCISCINTILLABASE__SCI_CLEARTABSTOPS = 2675,
    QSCISCINTILLABASE__SCI_ADDTABSTOP = 2676,
    QSCISCINTILLABASE__SCI_GETNEXTTABSTOP = 2677,
    QSCISCINTILLABASE__SCI_GETIMEINTERACTION = 2678,
    QSCISCINTILLABASE__SCI_SETIMEINTERACTION = 2679,
    QSCISCINTILLABASE__SCI_INDICSETHOVERSTYLE = 2680,
    QSCISCINTILLABASE__SCI_INDICGETHOVERSTYLE = 2681,
    QSCISCINTILLABASE__SCI_INDICSETHOVERFORE = 2682,
    QSCISCINTILLABASE__SCI_INDICGETHOVERFORE = 2683,
    QSCISCINTILLABASE__SCI_INDICSETFLAGS = 2684,
    QSCISCINTILLABASE__SCI_INDICGETFLAGS = 2685,
    QSCISCINTILLABASE__SCI_SETTARGETRANGE = 2686,
    QSCISCINTILLABASE__SCI_GETTARGETTEXT = 2687,
    QSCISCINTILLABASE__SCI_MULTIPLESELECTADDNEXT = 2688,
    QSCISCINTILLABASE__SCI_MULTIPLESELECTADDEACH = 2689,
    QSCISCINTILLABASE__SCI_TARGETWHOLEDOCUMENT = 2690,
    QSCISCINTILLABASE__SCI_ISRANGEWORD = 2691,
    QSCISCINTILLABASE__SCI_SETIDLESTYLING = 2692,
    QSCISCINTILLABASE__SCI_GETIDLESTYLING = 2693,
    QSCISCINTILLABASE__SCI_MULTIEDGEADDLINE = 2694,
    QSCISCINTILLABASE__SCI_MULTIEDGECLEARALL = 2695,
    QSCISCINTILLABASE__SCI_SETMOUSEWHEELCAPTURES = 2696,
    QSCISCINTILLABASE__SCI_GETMOUSEWHEELCAPTURES = 2697,
    QSCISCINTILLABASE__SCI_GETTABDRAWMODE = 2698,
    QSCISCINTILLABASE__SCI_SETTABDRAWMODE = 2699,
    QSCISCINTILLABASE__SCI_TOGGLEFOLDSHOWTEXT = 2700,
    QSCISCINTILLABASE__SCI_FOLDDISPLAYTEXTSETSTYLE = 2701,
    QSCISCINTILLABASE__SCI_SETACCESSIBILITY = 2702,
    QSCISCINTILLABASE__SCI_GETACCESSIBILITY = 2703,
    QSCISCINTILLABASE__SCI_GETCARETLINEFRAME = 2704,
    QSCISCINTILLABASE__SCI_SETCARETLINEFRAME = 2705,
    QSCISCINTILLABASE__SCI_STARTRECORD = 3001,
    QSCISCINTILLABASE__SCI_STOPRECORD = 3002,
    QSCISCINTILLABASE__SCI_SETLEXER = 4001,
    QSCISCINTILLABASE__SCI_GETLEXER = 4002,
    QSCISCINTILLABASE__SCI_COLOURISE = 4003,
    QSCISCINTILLABASE__SCI_SETPROPERTY = 4004,
    QSCISCINTILLABASE__SCI_SETKEYWORDS = 4005,
    QSCISCINTILLABASE__SCI_SETLEXERLANGUAGE = 4006,
    QSCISCINTILLABASE__SCI_LOADLEXERLIBRARY = 4007,
    QSCISCINTILLABASE__SCI_GETPROPERTY = 4008,
    QSCISCINTILLABASE__SCI_GETPROPERTYEXPANDED = 4009,
    QSCISCINTILLABASE__SCI_GETPROPERTYINT = 4010,
    QSCISCINTILLABASE__SCI_GETSTYLEBITSNEEDED = 4011,
    QSCISCINTILLABASE__SCI_GETLEXERLANGUAGE = 4012,
    QSCISCINTILLABASE__SCI_PRIVATELEXERCALL = 4013,
    QSCISCINTILLABASE__SCI_PROPERTYNAMES = 4014,
    QSCISCINTILLABASE__SCI_PROPERTYTYPE = 4015,
    QSCISCINTILLABASE__SCI_DESCRIBEPROPERTY = 4016,
    QSCISCINTILLABASE__SCI_DESCRIBEKEYWORDSETS = 4017,
    QSCISCINTILLABASE__SCI_GETLINEENDTYPESSUPPORTED = 4018,
    QSCISCINTILLABASE__SCI_ALLOCATESUBSTYLES = 4020,
    QSCISCINTILLABASE__SCI_GETSUBSTYLESSTART = 4021,
    QSCISCINTILLABASE__SCI_GETSUBSTYLESLENGTH = 4022,
    QSCISCINTILLABASE__SCI_GETSTYLEFROMSUBSTYLE = 4027,
    QSCISCINTILLABASE__SCI_GETPRIMARYSTYLEFROMSTYLE = 4028,
    QSCISCINTILLABASE__SCI_FREESUBSTYLES = 4023,
    QSCISCINTILLABASE__SCI_SETIDENTIFIERS = 4024,
    QSCISCINTILLABASE__SCI_DISTANCETOSECONDARYSTYLES = 4025,
    QSCISCINTILLABASE__SCI_GETSUBSTYLEBASES = 4026,
    QSCISCINTILLABASE__SCI_GETLINECHARACTERINDEX = 2710,
    QSCISCINTILLABASE__SCI_ALLOCATELINECHARACTERINDEX = 2711,
    QSCISCINTILLABASE__SCI_RELEASELINECHARACTERINDEX = 2712,
    QSCISCINTILLABASE__SCI_LINEFROMINDEXPOSITION = 2713,
    QSCISCINTILLABASE__SCI_INDEXPOSITIONFROMLINE = 2714,
    QSCISCINTILLABASE__SCI_COUNTCODEUNITS = 2715,
    QSCISCINTILLABASE__SCI_POSITIONRELATIVECODEUNITS = 2716,
    QSCISCINTILLABASE__SCI_GETNAMEDSTYLES = 4029,
    QSCISCINTILLABASE__SCI_NAMEOFSTYLE = 4030,
    QSCISCINTILLABASE__SCI_TAGSOFSTYLE = 4031,
    QSCISCINTILLABASE__SCI_DESCRIPTIONOFSTYLE = 4032,
    QSCISCINTILLABASE__SCI_GETMOVEEXTENDSSELECTION = 2706,
    QSCISCINTILLABASE__SCI_SETCOMMANDEVENTS = 2717,
    QSCISCINTILLABASE__SCI_GETCOMMANDEVENTS = 2718,
    QSCISCINTILLABASE__SCI_GETDOCUMENTOPTIONS = 2379,
    QSCISCINTILLABASE__SC_AC_FILLUP = 1,
    QSCISCINTILLABASE__SC_AC_DOUBLECLICK = 2,
    QSCISCINTILLABASE__SC_AC_TAB = 3,
    QSCISCINTILLABASE__SC_AC_NEWLINE = 4,
    QSCISCINTILLABASE__SC_AC_COMMAND = 5,
    QSCISCINTILLABASE__SC_ALPHA_TRANSPARENT = 0,
    QSCISCINTILLABASE__SC_ALPHA_OPAQUE = 255,
    QSCISCINTILLABASE__SC_ALPHA_NOALPHA = 256,
    QSCISCINTILLABASE__SC_CARETSTICKY_OFF = 0,
    QSCISCINTILLABASE__SC_CARETSTICKY_ON = 1,
    QSCISCINTILLABASE__SC_CARETSTICKY_WHITESPACE = 2,
    QSCISCINTILLABASE__SC_DOCUMENTOPTION_DEFAULT = 0,
    QSCISCINTILLABASE__SC_DOCUMENTOPTION_STYLES_NONE = 1,
    QSCISCINTILLABASE__SC_DOCUMENTOPTION_TEXT_LARGE = 256,
    QSCISCINTILLABASE__SC_EFF_QUALITY_MASK = 15,
    QSCISCINTILLABASE__SC_EFF_QUALITY_DEFAULT = 0,
    QSCISCINTILLABASE__SC_EFF_QUALITY_NON_ANTIALIASED = 1,
    QSCISCINTILLABASE__SC_EFF_QUALITY_ANTIALIASED = 2,
    QSCISCINTILLABASE__SC_EFF_QUALITY_LCD_OPTIMIZED = 3,
    QSCISCINTILLABASE__SC_IDLESTYLING_NONE = 0,
    QSCISCINTILLABASE__SC_IDLESTYLING_TOVISIBLE = 1,
    QSCISCINTILLABASE__SC_IDLESTYLING_AFTERVISIBLE = 2,
    QSCISCINTILLABASE__SC_IDLESTYLING_ALL = 3,
    QSCISCINTILLABASE__SC_IME_WINDOWED = 0,
    QSCISCINTILLABASE__SC_IME_INLINE = 1,
    QSCISCINTILLABASE__SC_LINECHARACTERINDEX_NONE = 0,
    QSCISCINTILLABASE__SC_LINECHARACTERINDEX_UTF32 = 1,
    QSCISCINTILLABASE__SC_LINECHARACTERINDEX_UTF16 = 2,
    QSCISCINTILLABASE__SC_MARGINOPTION_NONE = 0,
    QSCISCINTILLABASE__SC_MARGINOPTION_SUBLINESELECT = 1,
    QSCISCINTILLABASE__SC_MULTIAUTOC_ONCE = 0,
    QSCISCINTILLABASE__SC_MULTIAUTOC_EACH = 1,
    QSCISCINTILLABASE__SC_MULTIPASTE_ONCE = 0,
    QSCISCINTILLABASE__SC_MULTIPASTE_EACH = 1,
    QSCISCINTILLABASE__SC_POPUP_NEVER = 0,
    QSCISCINTILLABASE__SC_POPUP_ALL = 1,
    QSCISCINTILLABASE__SC_POPUP_TEXT = 2,
    QSCISCINTILLABASE__SC_SEL_STREAM = 0,
    QSCISCINTILLABASE__SC_SEL_RECTANGLE = 1,
    QSCISCINTILLABASE__SC_SEL_LINES = 2,
    QSCISCINTILLABASE__SC_SEL_THIN = 3,
    QSCISCINTILLABASE__SC_STATUS_OK = 0,
    QSCISCINTILLABASE__SC_STATUS_FAILURE = 1,
    QSCISCINTILLABASE__SC_STATUS_BADALLOC = 2,
    QSCISCINTILLABASE__SC_STATUS_WARN_START = 1000,
    QSCISCINTILLABASE__SC_STATUS_WARNREGEX = 1001,
    QSCISCINTILLABASE__SC_TYPE_BOOLEAN = 0,
    QSCISCINTILLABASE__SC_TYPE_INTEGER = 1,
    QSCISCINTILLABASE__SC_TYPE_STRING = 2,
    QSCISCINTILLABASE__SC_UPDATE_CONTENT = 1,
    QSCISCINTILLABASE__SC_UPDATE_SELECTION = 2,
    QSCISCINTILLABASE__SC_UPDATE_V_SCROLL = 4,
    QSCISCINTILLABASE__SC_UPDATE_H_SCROLL = 8,
    QSCISCINTILLABASE__SC_WRAPVISUALFLAG_NONE = 0,
    QSCISCINTILLABASE__SC_WRAPVISUALFLAG_END = 1,
    QSCISCINTILLABASE__SC_WRAPVISUALFLAG_START = 2,
    QSCISCINTILLABASE__SC_WRAPVISUALFLAG_MARGIN = 4,
    QSCISCINTILLABASE__SC_WRAPVISUALFLAGLOC_DEFAULT = 0,
    QSCISCINTILLABASE__SC_WRAPVISUALFLAGLOC_END_BY_TEXT = 1,
    QSCISCINTILLABASE__SC_WRAPVISUALFLAGLOC_START_BY_TEXT = 2,
    QSCISCINTILLABASE__SCTD_LONGARROW = 0,
    QSCISCINTILLABASE__SCTD_STRIKEOUT = 1,
    QSCISCINTILLABASE__SCVS_NONE = 0,
    QSCISCINTILLABASE__SCVS_RECTANGULARSELECTION = 1,
    QSCISCINTILLABASE__SCVS_USERACCESSIBLE = 2,
    QSCISCINTILLABASE__SCVS_NOWRAPLINESTART = 4,
    QSCISCINTILLABASE__SCWS_INVISIBLE = 0,
    QSCISCINTILLABASE__SCWS_VISIBLEALWAYS = 1,
    QSCISCINTILLABASE__SCWS_VISIBLEAFTERINDENT = 2,
    QSCISCINTILLABASE__SCWS_VISIBLEONLYININDENT = 3,
    QSCISCINTILLABASE__SC_EOL_CRLF = 0,
    QSCISCINTILLABASE__SC_EOL_CR = 1,
    QSCISCINTILLABASE__SC_EOL_LF = 2,
    QSCISCINTILLABASE__SC_CP_DBCS = 1,
    QSCISCINTILLABASE__SC_CP_UTF8 = 65001,
    QSCISCINTILLABASE__SC_MARK_CIRCLE = 0,
    QSCISCINTILLABASE__SC_MARK_ROUNDRECT = 1,
    QSCISCINTILLABASE__SC_MARK_ARROW = 2,
    QSCISCINTILLABASE__SC_MARK_SMALLRECT = 3,
    QSCISCINTILLABASE__SC_MARK_SHORTARROW = 4,
    QSCISCINTILLABASE__SC_MARK_EMPTY = 5,
    QSCISCINTILLABASE__SC_MARK_ARROWDOWN = 6,
    QSCISCINTILLABASE__SC_MARK_MINUS = 7,
    QSCISCINTILLABASE__SC_MARK_PLUS = 8,
    QSCISCINTILLABASE__SC_MARK_VLINE = 9,
    QSCISCINTILLABASE__SC_MARK_LCORNER = 10,
    QSCISCINTILLABASE__SC_MARK_TCORNER = 11,
    QSCISCINTILLABASE__SC_MARK_BOXPLUS = 12,
    QSCISCINTILLABASE__SC_MARK_BOXPLUSCONNECTED = 13,
    QSCISCINTILLABASE__SC_MARK_BOXMINUS = 14,
    QSCISCINTILLABASE__SC_MARK_BOXMINUSCONNECTED = 15,
    QSCISCINTILLABASE__SC_MARK_LCORNERCURVE = 16,
    QSCISCINTILLABASE__SC_MARK_TCORNERCURVE = 17,
    QSCISCINTILLABASE__SC_MARK_CIRCLEPLUS = 18,
    QSCISCINTILLABASE__SC_MARK_CIRCLEPLUSCONNECTED = 19,
    QSCISCINTILLABASE__SC_MARK_CIRCLEMINUS = 20,
    QSCISCINTILLABASE__SC_MARK_CIRCLEMINUSCONNECTED = 21,
    QSCISCINTILLABASE__SC_MARK_BACKGROUND = 22,
    QSCISCINTILLABASE__SC_MARK_DOTDOTDOT = 23,
    QSCISCINTILLABASE__SC_MARK_ARROWS = 24,
    QSCISCINTILLABASE__SC_MARK_PIXMAP = 25,
    QSCISCINTILLABASE__SC_MARK_FULLRECT = 26,
    QSCISCINTILLABASE__SC_MARK_LEFTRECT = 27,
    QSCISCINTILLABASE__SC_MARK_AVAILABLE = 28,
    QSCISCINTILLABASE__SC_MARK_UNDERLINE = 29,
    QSCISCINTILLABASE__SC_MARK_RGBAIMAGE = 30,
    QSCISCINTILLABASE__SC_MARK_BOOKMARK = 31,
    QSCISCINTILLABASE__SC_MARK_CHARACTER = 10000,
    QSCISCINTILLABASE__SC_MARKNUM_FOLDEREND = 25,
    QSCISCINTILLABASE__SC_MARKNUM_FOLDEROPENMID = 26,
    QSCISCINTILLABASE__SC_MARKNUM_FOLDERMIDTAIL = 27,
    QSCISCINTILLABASE__SC_MARKNUM_FOLDERTAIL = 28,
    QSCISCINTILLABASE__SC_MARKNUM_FOLDERSUB = 29,
    QSCISCINTILLABASE__SC_MARKNUM_FOLDER = 30,
    QSCISCINTILLABASE__SC_MARKNUM_FOLDEROPEN = 31,
    QSCISCINTILLABASE__SC_MASK_FOLDERS = 4261412864,
    QSCISCINTILLABASE__SC_MARGIN_SYMBOL = 0,
    QSCISCINTILLABASE__SC_MARGIN_NUMBER = 1,
    QSCISCINTILLABASE__SC_MARGIN_BACK = 2,
    QSCISCINTILLABASE__SC_MARGIN_FORE = 3,
    QSCISCINTILLABASE__SC_MARGIN_TEXT = 4,
    QSCISCINTILLABASE__SC_MARGIN_RTEXT = 5,
    QSCISCINTILLABASE__SC_MARGIN_COLOUR = 6,
    QSCISCINTILLABASE__STYLE_DEFAULT = 32,
    QSCISCINTILLABASE__STYLE_LINENUMBER = 33,
    QSCISCINTILLABASE__STYLE_BRACELIGHT = 34,
    QSCISCINTILLABASE__STYLE_BRACEBAD = 35,
    QSCISCINTILLABASE__STYLE_CONTROLCHAR = 36,
    QSCISCINTILLABASE__STYLE_INDENTGUIDE = 37,
    QSCISCINTILLABASE__STYLE_CALLTIP = 38,
    QSCISCINTILLABASE__STYLE_FOLDDISPLAYTEXT = 39,
    QSCISCINTILLABASE__STYLE_LASTPREDEFINED = 39,
    QSCISCINTILLABASE__STYLE_MAX = 255,
    QSCISCINTILLABASE__SC_CHARSET_ANSI = 0,
    QSCISCINTILLABASE__SC_CHARSET_DEFAULT = 1,
    QSCISCINTILLABASE__SC_CHARSET_BALTIC = 186,
    QSCISCINTILLABASE__SC_CHARSET_CHINESEBIG5 = 136,
    QSCISCINTILLABASE__SC_CHARSET_EASTEUROPE = 238,
    QSCISCINTILLABASE__SC_CHARSET_GB2312 = 134,
    QSCISCINTILLABASE__SC_CHARSET_GREEK = 161,
    QSCISCINTILLABASE__SC_CHARSET_HANGUL = 129,
    QSCISCINTILLABASE__SC_CHARSET_MAC = 77,
    QSCISCINTILLABASE__SC_CHARSET_OEM = 255,
    QSCISCINTILLABASE__SC_CHARSET_RUSSIAN = 204,
    QSCISCINTILLABASE__SC_CHARSET_OEM866 = 866,
    QSCISCINTILLABASE__SC_CHARSET_CYRILLIC = 1251,
    QSCISCINTILLABASE__SC_CHARSET_SHIFTJIS = 128,
    QSCISCINTILLABASE__SC_CHARSET_SYMBOL = 2,
    QSCISCINTILLABASE__SC_CHARSET_TURKISH = 162,
    QSCISCINTILLABASE__SC_CHARSET_JOHAB = 130,
    QSCISCINTILLABASE__SC_CHARSET_HEBREW = 177,
    QSCISCINTILLABASE__SC_CHARSET_ARABIC = 178,
    QSCISCINTILLABASE__SC_CHARSET_VIETNAMESE = 163,
    QSCISCINTILLABASE__SC_CHARSET_THAI = 222,
    QSCISCINTILLABASE__SC_CHARSET_8859_15 = 1000,
    QSCISCINTILLABASE__SC_CASE_MIXED = 0,
    QSCISCINTILLABASE__SC_CASE_UPPER = 1,
    QSCISCINTILLABASE__SC_CASE_LOWER = 2,
    QSCISCINTILLABASE__SC_CASE_CAMEL = 3,
    QSCISCINTILLABASE__SC_IV_NONE = 0,
    QSCISCINTILLABASE__SC_IV_REAL = 1,
    QSCISCINTILLABASE__SC_IV_LOOKFORWARD = 2,
    QSCISCINTILLABASE__SC_IV_LOOKBOTH = 3,
    QSCISCINTILLABASE__INDIC_PLAIN = 0,
    QSCISCINTILLABASE__INDIC_SQUIGGLE = 1,
    QSCISCINTILLABASE__INDIC_TT = 2,
    QSCISCINTILLABASE__INDIC_DIAGONAL = 3,
    QSCISCINTILLABASE__INDIC_STRIKE = 4,
    QSCISCINTILLABASE__INDIC_HIDDEN = 5,
    QSCISCINTILLABASE__INDIC_BOX = 6,
    QSCISCINTILLABASE__INDIC_ROUNDBOX = 7,
    QSCISCINTILLABASE__INDIC_STRAIGHTBOX = 8,
    QSCISCINTILLABASE__INDIC_DASH = 9,
    QSCISCINTILLABASE__INDIC_DOTS = 10,
    QSCISCINTILLABASE__INDIC_SQUIGGLELOW = 11,
    QSCISCINTILLABASE__INDIC_DOTBOX = 12,
    QSCISCINTILLABASE__INDIC_SQUIGGLEPIXMAP = 13,
    QSCISCINTILLABASE__INDIC_COMPOSITIONTHICK = 14,
    QSCISCINTILLABASE__INDIC_COMPOSITIONTHIN = 15,
    QSCISCINTILLABASE__INDIC_FULLBOX = 16,
    QSCISCINTILLABASE__INDIC_TEXTFORE = 17,
    QSCISCINTILLABASE__INDIC_POINT = 18,
    QSCISCINTILLABASE__INDIC_POINTCHARACTER = 19,
    QSCISCINTILLABASE__INDIC_GRADIENT = 20,
    QSCISCINTILLABASE__INDIC_GRADIENTCENTRE = 21,
    QSCISCINTILLABASE__INDIC_IME = 32,
    QSCISCINTILLABASE__INDIC_IME_MAX = 35,
    QSCISCINTILLABASE__INDIC_CONTAINER = 8,
    QSCISCINTILLABASE__INDIC_MAX = 35,
    QSCISCINTILLABASE__INDIC0_MASK = 32,
    QSCISCINTILLABASE__INDIC1_MASK = 64,
    QSCISCINTILLABASE__INDIC2_MASK = 128,
    QSCISCINTILLABASE__INDICS_MASK = 224,
    QSCISCINTILLABASE__SC_INDICVALUEBIT = 16777216,
    QSCISCINTILLABASE__SC_INDICVALUEMASK = 16777215,
    QSCISCINTILLABASE__SC_INDICFLAG_VALUEBEFORE = 1,
    QSCISCINTILLABASE__SC_PRINT_NORMAL = 0,
    QSCISCINTILLABASE__SC_PRINT_INVERTLIGHT = 1,
    QSCISCINTILLABASE__SC_PRINT_BLACKONWHITE = 2,
    QSCISCINTILLABASE__SC_PRINT_COLOURONWHITE = 3,
    QSCISCINTILLABASE__SC_PRINT_COLOURONWHITEDEFAULTBG = 4,
    QSCISCINTILLABASE__SC_PRINT_SCREENCOLOURS = 5,
    QSCISCINTILLABASE__SCFIND_WHOLEWORD = 2,
    QSCISCINTILLABASE__SCFIND_MATCHCASE = 4,
    QSCISCINTILLABASE__SCFIND_WORDSTART = 1048576,
    QSCISCINTILLABASE__SCFIND_REGEXP = 2097152,
    QSCISCINTILLABASE__SCFIND_POSIX = 4194304,
    QSCISCINTILLABASE__SCFIND_CXX11REGEX = 8388608,
    QSCISCINTILLABASE__SC_FOLDDISPLAYTEXT_HIDDEN = 0,
    QSCISCINTILLABASE__SC_FOLDDISPLAYTEXT_STANDARD = 1,
    QSCISCINTILLABASE__SC_FOLDDISPLAYTEXT_BOXED = 2,
    QSCISCINTILLABASE__SC_FOLDLEVELBASE = 1024,
    QSCISCINTILLABASE__SC_FOLDLEVELWHITEFLAG = 4096,
    QSCISCINTILLABASE__SC_FOLDLEVELHEADERFLAG = 8192,
    QSCISCINTILLABASE__SC_FOLDLEVELNUMBERMASK = 4095,
    QSCISCINTILLABASE__SC_FOLDFLAG_LINEBEFORE_EXPANDED = 2,
    QSCISCINTILLABASE__SC_FOLDFLAG_LINEBEFORE_CONTRACTED = 4,
    QSCISCINTILLABASE__SC_FOLDFLAG_LINEAFTER_EXPANDED = 8,
    QSCISCINTILLABASE__SC_FOLDFLAG_LINEAFTER_CONTRACTED = 16,
    QSCISCINTILLABASE__SC_FOLDFLAG_LEVELNUMBERS = 64,
    QSCISCINTILLABASE__SC_FOLDFLAG_LINESTATE = 128,
    QSCISCINTILLABASE__SC_LINE_END_TYPE_DEFAULT = 0,
    QSCISCINTILLABASE__SC_LINE_END_TYPE_UNICODE = 1,
    QSCISCINTILLABASE__SC_TIME_FOREVER = 10000000,
    QSCISCINTILLABASE__SC_WRAP_NONE = 0,
    QSCISCINTILLABASE__SC_WRAP_WORD = 1,
    QSCISCINTILLABASE__SC_WRAP_CHAR = 2,
    QSCISCINTILLABASE__SC_WRAP_WHITESPACE = 3,
    QSCISCINTILLABASE__SC_WRAPINDENT_FIXED = 0,
    QSCISCINTILLABASE__SC_WRAPINDENT_SAME = 1,
    QSCISCINTILLABASE__SC_WRAPINDENT_INDENT = 2,
    QSCISCINTILLABASE__SC_WRAPINDENT_DEEPINDENT = 3,
    QSCISCINTILLABASE__SC_CACHE_NONE = 0,
    QSCISCINTILLABASE__SC_CACHE_CARET = 1,
    QSCISCINTILLABASE__SC_CACHE_PAGE = 2,
    QSCISCINTILLABASE__SC_CACHE_DOCUMENT = 3,
    QSCISCINTILLABASE__SC_PHASES_ONE = 0,
    QSCISCINTILLABASE__SC_PHASES_TWO = 1,
    QSCISCINTILLABASE__SC_PHASES_MULTIPLE = 2,
    QSCISCINTILLABASE__ANNOTATION_HIDDEN = 0,
    QSCISCINTILLABASE__ANNOTATION_STANDARD = 1,
    QSCISCINTILLABASE__ANNOTATION_BOXED = 2,
    QSCISCINTILLABASE__ANNOTATION_INDENTED = 3,
    QSCISCINTILLABASE__EDGE_NONE = 0,
    QSCISCINTILLABASE__EDGE_LINE = 1,
    QSCISCINTILLABASE__EDGE_BACKGROUND = 2,
    QSCISCINTILLABASE__EDGE_MULTILINE = 3,
    QSCISCINTILLABASE__SC_CURSORNORMAL = -1,
    QSCISCINTILLABASE__SC_CURSORARROW = 2,
    QSCISCINTILLABASE__SC_CURSORWAIT = 4,
    QSCISCINTILLABASE__SC_CURSORREVERSEARROW = 7,
    QSCISCINTILLABASE__UNDO_MAY_COALESCE = 1,
    QSCISCINTILLABASE__VISIBLE_SLOP = 1,
    QSCISCINTILLABASE__VISIBLE_STRICT = 4,
    QSCISCINTILLABASE__CARET_SLOP = 1,
    QSCISCINTILLABASE__CARET_STRICT = 4,
    QSCISCINTILLABASE__CARET_JUMPS = 16,
    QSCISCINTILLABASE__CARET_EVEN = 8,
    QSCISCINTILLABASE__CARETSTYLE_INVISIBLE = 0,
    QSCISCINTILLABASE__CARETSTYLE_LINE = 1,
    QSCISCINTILLABASE__CARETSTYLE_BLOCK = 2,
    QSCISCINTILLABASE__SC_MOD_INSERTTEXT = 1,
    QSCISCINTILLABASE__SC_MOD_DELETETEXT = 2,
    QSCISCINTILLABASE__SC_MOD_CHANGESTYLE = 4,
    QSCISCINTILLABASE__SC_MOD_CHANGEFOLD = 8,
    QSCISCINTILLABASE__SC_PERFORMED_USER = 16,
    QSCISCINTILLABASE__SC_PERFORMED_UNDO = 32,
    QSCISCINTILLABASE__SC_PERFORMED_REDO = 64,
    QSCISCINTILLABASE__SC_MULTISTEPUNDOREDO = 128,
    QSCISCINTILLABASE__SC_LASTSTEPINUNDOREDO = 256,
    QSCISCINTILLABASE__SC_MOD_CHANGEMARKER = 512,
    QSCISCINTILLABASE__SC_MOD_BEFOREINSERT = 1024,
    QSCISCINTILLABASE__SC_MOD_BEFOREDELETE = 2048,
    QSCISCINTILLABASE__SC_MULTILINEUNDOREDO = 4096,
    QSCISCINTILLABASE__SC_STARTACTION = 8192,
    QSCISCINTILLABASE__SC_MOD_CHANGEINDICATOR = 16384,
    QSCISCINTILLABASE__SC_MOD_CHANGELINESTATE = 32768,
    QSCISCINTILLABASE__SC_MOD_CHANGEMARGIN = 65536,
    QSCISCINTILLABASE__SC_MOD_CHANGEANNOTATION = 131072,
    QSCISCINTILLABASE__SC_MOD_CONTAINER = 262144,
    QSCISCINTILLABASE__SC_MOD_LEXERSTATE = 524288,
    QSCISCINTILLABASE__SC_MOD_INSERTCHECK = 1048576,
    QSCISCINTILLABASE__SC_MOD_CHANGETABSTOPS = 2097152,
    QSCISCINTILLABASE__SC_MODEVENTMASKALL = 4194303,
    QSCISCINTILLABASE__SCK_DOWN = 300,
    QSCISCINTILLABASE__SCK_UP = 301,
    QSCISCINTILLABASE__SCK_LEFT = 302,
    QSCISCINTILLABASE__SCK_RIGHT = 303,
    QSCISCINTILLABASE__SCK_HOME = 304,
    QSCISCINTILLABASE__SCK_END = 305,
    QSCISCINTILLABASE__SCK_PRIOR = 306,
    QSCISCINTILLABASE__SCK_NEXT = 307,
    QSCISCINTILLABASE__SCK_DELETE = 308,
    QSCISCINTILLABASE__SCK_INSERT = 309,
    QSCISCINTILLABASE__SCK_ESCAPE = 7,
    QSCISCINTILLABASE__SCK_BACK = 8,
    QSCISCINTILLABASE__SCK_TAB = 9,
    QSCISCINTILLABASE__SCK_RETURN = 13,
    QSCISCINTILLABASE__SCK_ADD = 310,
    QSCISCINTILLABASE__SCK_SUBTRACT = 311,
    QSCISCINTILLABASE__SCK_DIVIDE = 312,
    QSCISCINTILLABASE__SCK_WIN = 313,
    QSCISCINTILLABASE__SCK_RWIN = 314,
    QSCISCINTILLABASE__SCK_MENU = 315,
    QSCISCINTILLABASE__SCMOD_NORM = 0,
    QSCISCINTILLABASE__SCMOD_SHIFT = 1,
    QSCISCINTILLABASE__SCMOD_CTRL = 2,
    QSCISCINTILLABASE__SCMOD_ALT = 4,
    QSCISCINTILLABASE__SCMOD_SUPER = 8,
    QSCISCINTILLABASE__SCMOD_META = 16,
    QSCISCINTILLABASE__SCLEX_CONTAINER = 0,
    QSCISCINTILLABASE__SCLEX_NULL = 1,
    QSCISCINTILLABASE__SCLEX_PYTHON = 2,
    QSCISCINTILLABASE__SCLEX_CPP = 3,
    QSCISCINTILLABASE__SCLEX_HTML = 4,
    QSCISCINTILLABASE__SCLEX_XML = 5,
    QSCISCINTILLABASE__SCLEX_PERL = 6,
    QSCISCINTILLABASE__SCLEX_SQL = 7,
    QSCISCINTILLABASE__SCLEX_VB = 8,
    QSCISCINTILLABASE__SCLEX_PROPERTIES = 9,
    QSCISCINTILLABASE__SCLEX_ERRORLIST = 10,
    QSCISCINTILLABASE__SCLEX_MAKEFILE = 11,
    QSCISCINTILLABASE__SCLEX_BATCH = 12,
    QSCISCINTILLABASE__SCLEX_LATEX = 14,
    QSCISCINTILLABASE__SCLEX_LUA = 15,
    QSCISCINTILLABASE__SCLEX_DIFF = 16,
    QSCISCINTILLABASE__SCLEX_CONF = 17,
    QSCISCINTILLABASE__SCLEX_PASCAL = 18,
    QSCISCINTILLABASE__SCLEX_AVE = 19,
    QSCISCINTILLABASE__SCLEX_ADA = 20,
    QSCISCINTILLABASE__SCLEX_LISP = 21,
    QSCISCINTILLABASE__SCLEX_RUBY = 22,
    QSCISCINTILLABASE__SCLEX_EIFFEL = 23,
    QSCISCINTILLABASE__SCLEX_EIFFELKW = 24,
    QSCISCINTILLABASE__SCLEX_TCL = 25,
    QSCISCINTILLABASE__SCLEX_NNCRONTAB = 26,
    QSCISCINTILLABASE__SCLEX_BULLANT = 27,
    QSCISCINTILLABASE__SCLEX_VBSCRIPT = 28,
    QSCISCINTILLABASE__SCLEX_ASP = 4,
    QSCISCINTILLABASE__SCLEX_PHP = 4,
    QSCISCINTILLABASE__SCLEX_BAAN = 31,
    QSCISCINTILLABASE__SCLEX_MATLAB = 32,
    QSCISCINTILLABASE__SCLEX_SCRIPTOL = 33,
    QSCISCINTILLABASE__SCLEX_ASM = 34,
    QSCISCINTILLABASE__SCLEX_CPPNOCASE = 35,
    QSCISCINTILLABASE__SCLEX_FORTRAN = 36,
    QSCISCINTILLABASE__SCLEX_F77 = 37,
    QSCISCINTILLABASE__SCLEX_CSS = 38,
    QSCISCINTILLABASE__SCLEX_POV = 39,
    QSCISCINTILLABASE__SCLEX_LOUT = 40,
    QSCISCINTILLABASE__SCLEX_ESCRIPT = 41,
    QSCISCINTILLABASE__SCLEX_PS = 42,
    QSCISCINTILLABASE__SCLEX_NSIS = 43,
    QSCISCINTILLABASE__SCLEX_MMIXAL = 44,
    QSCISCINTILLABASE__SCLEX_CLW = 45,
    QSCISCINTILLABASE__SCLEX_CLWNOCASE = 46,
    QSCISCINTILLABASE__SCLEX_LOT = 47,
    QSCISCINTILLABASE__SCLEX_YAML = 48,
    QSCISCINTILLABASE__SCLEX_TEX = 49,
    QSCISCINTILLABASE__SCLEX_METAPOST = 50,
    QSCISCINTILLABASE__SCLEX_POWERBASIC = 51,
    QSCISCINTILLABASE__SCLEX_FORTH = 52,
    QSCISCINTILLABASE__SCLEX_ERLANG = 53,
    QSCISCINTILLABASE__SCLEX_OCTAVE = 54,
    QSCISCINTILLABASE__SCLEX_MSSQL = 55,
    QSCISCINTILLABASE__SCLEX_VERILOG = 56,
    QSCISCINTILLABASE__SCLEX_KIX = 57,
    QSCISCINTILLABASE__SCLEX_GUI4CLI = 58,
    QSCISCINTILLABASE__SCLEX_SPECMAN = 59,
    QSCISCINTILLABASE__SCLEX_AU3 = 60,
    QSCISCINTILLABASE__SCLEX_APDL = 61,
    QSCISCINTILLABASE__SCLEX_BASH = 62,
    QSCISCINTILLABASE__SCLEX_ASN1 = 63,
    QSCISCINTILLABASE__SCLEX_VHDL = 64,
    QSCISCINTILLABASE__SCLEX_CAML = 65,
    QSCISCINTILLABASE__SCLEX_BLITZBASIC = 66,
    QSCISCINTILLABASE__SCLEX_PUREBASIC = 67,
    QSCISCINTILLABASE__SCLEX_HASKELL = 68,
    QSCISCINTILLABASE__SCLEX_PHPSCRIPT = 69,
    QSCISCINTILLABASE__SCLEX_TADS3 = 70,
    QSCISCINTILLABASE__SCLEX_REBOL = 71,
    QSCISCINTILLABASE__SCLEX_SMALLTALK = 72,
    QSCISCINTILLABASE__SCLEX_FLAGSHIP = 73,
    QSCISCINTILLABASE__SCLEX_CSOUND = 74,
    QSCISCINTILLABASE__SCLEX_FREEBASIC = 75,
    QSCISCINTILLABASE__SCLEX_INNOSETUP = 76,
    QSCISCINTILLABASE__SCLEX_OPAL = 77,
    QSCISCINTILLABASE__SCLEX_SPICE = 78,
    QSCISCINTILLABASE__SCLEX_D = 79,
    QSCISCINTILLABASE__SCLEX_CMAKE = 80,
    QSCISCINTILLABASE__SCLEX_GAP = 81,
    QSCISCINTILLABASE__SCLEX_PLM = 82,
    QSCISCINTILLABASE__SCLEX_PROGRESS = 83,
    QSCISCINTILLABASE__SCLEX_ABAQUS = 84,
    QSCISCINTILLABASE__SCLEX_ASYMPTOTE = 85,
    QSCISCINTILLABASE__SCLEX_R = 86,
    QSCISCINTILLABASE__SCLEX_MAGIK = 87,
    QSCISCINTILLABASE__SCLEX_POWERSHELL = 88,
    QSCISCINTILLABASE__SCLEX_MYSQL = 89,
    QSCISCINTILLABASE__SCLEX_PO = 90,
    QSCISCINTILLABASE__SCLEX_TAL = 91,
    QSCISCINTILLABASE__SCLEX_COBOL = 92,
    QSCISCINTILLABASE__SCLEX_TACL = 93,
    QSCISCINTILLABASE__SCLEX_SORCUS = 94,
    QSCISCINTILLABASE__SCLEX_POWERPRO = 95,
    QSCISCINTILLABASE__SCLEX_NIMROD = 96,
    QSCISCINTILLABASE__SCLEX_SML = 97,
    QSCISCINTILLABASE__SCLEX_MARKDOWN = 98,
    QSCISCINTILLABASE__SCLEX_TXT2TAGS = 99,
    QSCISCINTILLABASE__SCLEX_A68K = 100,
    QSCISCINTILLABASE__SCLEX_MODULA = 101,
    QSCISCINTILLABASE__SCLEX_COFFEESCRIPT = 102,
    QSCISCINTILLABASE__SCLEX_TCMD = 103,
    QSCISCINTILLABASE__SCLEX_AVS = 104,
    QSCISCINTILLABASE__SCLEX_ECL = 105,
    QSCISCINTILLABASE__SCLEX_OSCRIPT = 106,
    QSCISCINTILLABASE__SCLEX_VISUALPROLOG = 107,
    QSCISCINTILLABASE__SCLEX_LITERATEHASKELL = 108,
    QSCISCINTILLABASE__SCLEX_STTXT = 109,
    QSCISCINTILLABASE__SCLEX_KVIRC = 110,
    QSCISCINTILLABASE__SCLEX_RUST = 111,
    QSCISCINTILLABASE__SCLEX_DMAP = 112,
    QSCISCINTILLABASE__SCLEX_AS = 113,
    QSCISCINTILLABASE__SCLEX_DMIS = 114,
    QSCISCINTILLABASE__SCLEX_REGISTRY = 115,
    QSCISCINTILLABASE__SCLEX_BIBTEX = 116,
    QSCISCINTILLABASE__SCLEX_SREC = 117,
    QSCISCINTILLABASE__SCLEX_IHEX = 118,
    QSCISCINTILLABASE__SCLEX_TEHEX = 119,
    QSCISCINTILLABASE__SCLEX_JSON = 120,
    QSCISCINTILLABASE__SCLEX_EDIFACT = 121,
    QSCISCINTILLABASE__SCLEX_INDENT = 122,
    QSCISCINTILLABASE__SCLEX_MAXIMA = 123,
    QSCISCINTILLABASE__SCLEX_STATA = 124,
    QSCISCINTILLABASE__SCLEX_SAS = 125,
    QSCISCINTILLABASE__SC_WEIGHT_NORMAL = 400,
    QSCISCINTILLABASE__SC_WEIGHT_SEMIBOLD = 600,
    QSCISCINTILLABASE__SC_WEIGHT_BOLD = 700,
    QSCISCINTILLABASE__SC_TECHNOLOGY_DEFAULT = 0,
    QSCISCINTILLABASE__SC_TECHNOLOGY_DIRECTWRITE = 1,
    QSCISCINTILLABASE__SC_TECHNOLOGY_DIRECTWRITERETAIN = 2,
    QSCISCINTILLABASE__SC_TECHNOLOGY_DIRECTWRITEDC = 3,
    QSCISCINTILLABASE__SC_CASEINSENSITIVEBEHAVIOUR_RESPECTCASE = 0,
    QSCISCINTILLABASE__SC_CASEINSENSITIVEBEHAVIOUR_IGNORECASE = 1,
    QSCISCINTILLABASE__SC_FONT_SIZE_MULTIPLIER = 100,
    QSCISCINTILLABASE__SC_FOLDACTION_CONTRACT = 0,
    QSCISCINTILLABASE__SC_FOLDACTION_EXPAND = 1,
    QSCISCINTILLABASE__SC_FOLDACTION_TOGGLE = 2,
    QSCISCINTILLABASE__SC_AUTOMATICFOLD_SHOW = 1,
    QSCISCINTILLABASE__SC_AUTOMATICFOLD_CLICK = 2,
    QSCISCINTILLABASE__SC_AUTOMATICFOLD_CHANGE = 4,
    QSCISCINTILLABASE__SC_ORDER_PRESORTED = 0,
    QSCISCINTILLABASE__SC_ORDER_PERFORMSORT = 1,
    QSCISCINTILLABASE__SC_ORDER_CUSTOM = 2
} QsciScintillaBase__;

#endif
