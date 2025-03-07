#include "../libqabstractscrollarea.hpp"
#include "../libqaction.hpp"
#include "../libqevent.hpp"
#include "../libqanystringview.hpp"
#include "../libqbackingstore.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqbitmap.hpp"
#include "../libqcolor.hpp"
#include "../libqcursor.hpp"
#include "../libqfont.hpp"
#include "../libqfontinfo.hpp"
#include "../libqfontmetrics.hpp"
#include "../libqframe.hpp"
#include "../libqgraphicseffect.hpp"
#include "../libqgraphicsproxywidget.hpp"
#include "../libqicon.hpp"
#include "../libqimage.hpp"
#include "../libqkeysequence.hpp"
#include "../libqlayout.hpp"
#include "../libqlocale.hpp"
#include "../libqmargins.hpp"
#include "../libqmetaobject.hpp"
#include "../libqmimedata.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpalette.hpp"
#include "../libqpixmap.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "../libqregion.hpp"
#include "../libqscreen.hpp"
#include "../libqscrollbar.hpp"
#include "../libqsize.hpp"
#include "../libqsizepolicy.hpp"
#include <string.h>
#include "../libqstyle.hpp"
#include "../libqstyleoption.hpp"
#include "../libqthread.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "../libqwindow.hpp"
#include "../libqcoreevent.hpp"
#include "libqsciscintillabase.hpp"
#include "libqsciscintillabase.h"

/// https://doc.qt.io/qt-6/qsciscintillabase.html

/// q_sciscintillabase_new constructs a new QsciScintillaBase object.
///
/// ``` QWidget* parent ```
QsciScintillaBase* q_sciscintillabase_new(void* parent) {
    return QsciScintillaBase_new((QWidget*)parent);
}

/// q_sciscintillabase_new2 constructs a new QsciScintillaBase object.
///
///
QsciScintillaBase* q_sciscintillabase_new2() {
    return QsciScintillaBase_new2();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciScintillaBase* self ```
QMetaObject* q_sciscintillabase_meta_object(void* self) {
    return QsciScintillaBase_MetaObject((QsciScintillaBase*)self);
}

/// ``` QsciScintillaBase* self, const char* param1 ```
void* q_sciscintillabase_metacast(void* self, const char* param1) {
    return QsciScintillaBase_Metacast((QsciScintillaBase*)self, param1);
}

/// ``` QsciScintillaBase* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sciscintillabase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciScintillaBase_Metacall((QsciScintillaBase*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciScintillaBase* self, int32_t (*slot)(QsciScintillaBase*, enum QMetaObject__Call, int, void*) ```
void q_sciscintillabase_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciScintillaBase_OnMetacall((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciScintillaBase* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sciscintillabase_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciScintillaBase_QBaseMetacall((QsciScintillaBase*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_sciscintillabase_tr(const char* s) {
    libqt_string _str = QsciScintillaBase_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#pool)
///
///
QsciScintillaBase* q_sciscintillabase_pool() {
    return QsciScintillaBase_Pool();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#replaceHorizontalScrollBar)
///
/// ``` QsciScintillaBase* self, QScrollBar* scrollBar ```
void q_sciscintillabase_replace_horizontal_scroll_bar(void* self, void* scrollBar) {
    QsciScintillaBase_ReplaceHorizontalScrollBar((QsciScintillaBase*)self, (QScrollBar*)scrollBar);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#replaceVerticalScrollBar)
///
/// ``` QsciScintillaBase* self, QScrollBar* scrollBar ```
void q_sciscintillabase_replace_vertical_scroll_bar(void* self, void* scrollBar) {
    QsciScintillaBase_ReplaceVerticalScrollBar((QsciScintillaBase*)self, (QScrollBar*)scrollBar);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintilla)
///
/// ``` QsciScintillaBase* self, uint32_t msg ```
int64_t q_sciscintillabase_send_scintilla(void* self, uint32_t msg) {
    return QsciScintillaBase_SendScintilla((QsciScintillaBase*)self, msg);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintilla)
///
/// ``` QsciScintillaBase* self, uint32_t msg, uint64_t wParam, void* lParam ```
int64_t q_sciscintillabase_send_scintilla2(void* self, uint32_t msg, uint64_t wParam, void* lParam) {
    return QsciScintillaBase_SendScintilla2((QsciScintillaBase*)self, msg, wParam, lParam);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintilla)
///
/// ``` QsciScintillaBase* self, uint32_t msg, uintptr_t wParam, const char* lParam ```
int64_t q_sciscintillabase_send_scintilla3(void* self, uint32_t msg, uintptr_t wParam, const char* lParam) {
    return QsciScintillaBase_SendScintilla3((QsciScintillaBase*)self, msg, wParam, lParam);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintilla)
///
/// ``` QsciScintillaBase* self, uint32_t msg, const char* lParam ```
int64_t q_sciscintillabase_send_scintilla4(void* self, uint32_t msg, const char* lParam) {
    return QsciScintillaBase_SendScintilla4((QsciScintillaBase*)self, msg, lParam);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintilla)
///
/// ``` QsciScintillaBase* self, uint32_t msg, const char* wParam, const char* lParam ```
int64_t q_sciscintillabase_send_scintilla5(void* self, uint32_t msg, const char* wParam, const char* lParam) {
    return QsciScintillaBase_SendScintilla5((QsciScintillaBase*)self, msg, wParam, lParam);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintilla)
///
/// ``` QsciScintillaBase* self, uint32_t msg, int64_t wParam ```
int64_t q_sciscintillabase_send_scintilla6(void* self, uint32_t msg, int64_t wParam) {
    return QsciScintillaBase_SendScintilla6((QsciScintillaBase*)self, msg, wParam);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintilla)
///
/// ``` QsciScintillaBase* self, uint32_t msg, int wParam ```
int64_t q_sciscintillabase_send_scintilla7(void* self, uint32_t msg, int wParam) {
    return QsciScintillaBase_SendScintilla7((QsciScintillaBase*)self, msg, wParam);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintilla)
///
/// ``` QsciScintillaBase* self, uint32_t msg, int64_t cpMin, int64_t cpMax, char* lpstrText ```
int64_t q_sciscintillabase_send_scintilla8(void* self, uint32_t msg, int64_t cpMin, int64_t cpMax, char* lpstrText) {
    return QsciScintillaBase_SendScintilla8((QsciScintillaBase*)self, msg, cpMin, cpMax, lpstrText);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintilla)
///
/// ``` QsciScintillaBase* self, uint32_t msg, uint64_t wParam, QColor* col ```
int64_t q_sciscintillabase_send_scintilla9(void* self, uint32_t msg, uint64_t wParam, void* col) {
    return QsciScintillaBase_SendScintilla9((QsciScintillaBase*)self, msg, wParam, (QColor*)col);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintilla)
///
/// ``` QsciScintillaBase* self, uint32_t msg, QColor* col ```
int64_t q_sciscintillabase_send_scintilla10(void* self, uint32_t msg, void* col) {
    return QsciScintillaBase_SendScintilla10((QsciScintillaBase*)self, msg, (QColor*)col);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintilla)
///
/// ``` QsciScintillaBase* self, uint32_t msg, uint64_t wParam, QPainter* hdc, QRect* rc, int64_t cpMin, int64_t cpMax ```
int64_t q_sciscintillabase_send_scintilla11(void* self, uint32_t msg, uint64_t wParam, void* hdc, void* rc, int64_t cpMin, int64_t cpMax) {
    return QsciScintillaBase_SendScintilla11((QsciScintillaBase*)self, msg, wParam, (QPainter*)hdc, (QRect*)rc, cpMin, cpMax);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintilla)
///
/// ``` QsciScintillaBase* self, uint32_t msg, uint64_t wParam, QPixmap* lParam ```
int64_t q_sciscintillabase_send_scintilla12(void* self, uint32_t msg, uint64_t wParam, void* lParam) {
    return QsciScintillaBase_SendScintilla12((QsciScintillaBase*)self, msg, wParam, (QPixmap*)lParam);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintilla)
///
/// ``` QsciScintillaBase* self, uint32_t msg, uint64_t wParam, QImage* lParam ```
int64_t q_sciscintillabase_send_scintilla13(void* self, uint32_t msg, uint64_t wParam, void* lParam) {
    return QsciScintillaBase_SendScintilla13((QsciScintillaBase*)self, msg, wParam, (QImage*)lParam);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintillaPtrResult)
///
/// ``` QsciScintillaBase* self, uint32_t msg ```
void* q_sciscintillabase_send_scintilla_ptr_result(void* self, uint32_t msg) {
    return QsciScintillaBase_SendScintillaPtrResult((QsciScintillaBase*)self, msg);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#commandKey)
///
/// ``` int qt_key, int* modifiers ```
int32_t q_sciscintillabase_command_key(int qt_key, int* modifiers) {
    return QsciScintillaBase_CommandKey(qt_key, modifiers);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#QSCN_SELCHANGED)
///
/// ``` QsciScintillaBase* self, bool yes ```
void q_sciscintillabase_q_s_c_n__s_e_l_c_h_a_n_g_e_d(void* self, bool yes) {
    QsciScintillaBase_QSCN_SELCHANGED((QsciScintillaBase*)self, yes);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, bool) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_AUTOCCANCELLED)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_s_c_n__a_u_t_o_c_c_a_n_c_e_l_l_e_d(void* self) {
    QsciScintillaBase_SCN_AUTOCCANCELLED((QsciScintillaBase*)self);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_AUTOCCHARDELETED)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_s_c_n__a_u_t_o_c_c_h_a_r_d_e_l_e_t_e_d(void* self) {
    QsciScintillaBase_SCN_AUTOCCHARDELETED((QsciScintillaBase*)self);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_AUTOCCOMPLETED)
///
/// ``` QsciScintillaBase* self, const char* selection, int position, int ch, int method ```
void q_sciscintillabase_s_c_n__a_u_t_o_c_c_o_m_p_l_e_t_e_d(void* self, const char* selection, int position, int ch, int method) {
    QsciScintillaBase_SCN_AUTOCCOMPLETED((QsciScintillaBase*)self, selection, position, ch, method);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, const char*, int, int, int) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_AUTOCSELECTION)
///
/// ``` QsciScintillaBase* self, const char* selection, int position, int ch, int method ```
void q_sciscintillabase_s_c_n__a_u_t_o_c_s_e_l_e_c_t_i_o_n(void* self, const char* selection, int position, int ch, int method) {
    QsciScintillaBase_SCN_AUTOCSELECTION((QsciScintillaBase*)self, selection, position, ch, method);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, const char*, int, int, int) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_AUTOCSELECTION)
///
/// ``` QsciScintillaBase* self, const char* selection, int position ```
void q_sciscintillabase_s_c_n__a_u_t_o_c_s_e_l_e_c_t_i_o_n2(void* self, const char* selection, int position) {
    QsciScintillaBase_SCN_AUTOCSELECTION2((QsciScintillaBase*)self, selection, position);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, const char*, int) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_AUTOCSELECTIONCHANGE)
///
/// ``` QsciScintillaBase* self, const char* selection, int id, int position ```
void q_sciscintillabase_s_c_n__a_u_t_o_c_s_e_l_e_c_t_i_o_n_c_h_a_n_g_e(void* self, const char* selection, int id, int position) {
    QsciScintillaBase_SCN_AUTOCSELECTIONCHANGE((QsciScintillaBase*)self, selection, id, position);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, const char*, int, int) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCEN_CHANGE)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_s_c_e_n__c_h_a_n_g_e(void* self) {
    QsciScintillaBase_SCEN_CHANGE((QsciScintillaBase*)self);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_CALLTIPCLICK)
///
/// ``` QsciScintillaBase* self, int direction ```
void q_sciscintillabase_s_c_n__c_a_l_l_t_i_p_c_l_i_c_k(void* self, int direction) {
    QsciScintillaBase_SCN_CALLTIPCLICK((QsciScintillaBase*)self, direction);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, int) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_CHARADDED)
///
/// ``` QsciScintillaBase* self, int charadded ```
void q_sciscintillabase_s_c_n__c_h_a_r_a_d_d_e_d(void* self, int charadded) {
    QsciScintillaBase_SCN_CHARADDED((QsciScintillaBase*)self, charadded);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, int) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_DOUBLECLICK)
///
/// ``` QsciScintillaBase* self, int position, int line, int modifiers ```
void q_sciscintillabase_s_c_n__d_o_u_b_l_e_c_l_i_c_k(void* self, int position, int line, int modifiers) {
    QsciScintillaBase_SCN_DOUBLECLICK((QsciScintillaBase*)self, position, line, modifiers);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, int, int, int) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_DWELLEND)
///
/// ``` QsciScintillaBase* self, int position, int x, int y ```
void q_sciscintillabase_s_c_n__d_w_e_l_l_e_n_d(void* self, int position, int x, int y) {
    QsciScintillaBase_SCN_DWELLEND((QsciScintillaBase*)self, position, x, y);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, int, int, int) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_DWELLSTART)
///
/// ``` QsciScintillaBase* self, int position, int x, int y ```
void q_sciscintillabase_s_c_n__d_w_e_l_l_s_t_a_r_t(void* self, int position, int x, int y) {
    QsciScintillaBase_SCN_DWELLSTART((QsciScintillaBase*)self, position, x, y);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, int, int, int) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_FOCUSIN)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_s_c_n__f_o_c_u_s_i_n(void* self) {
    QsciScintillaBase_SCN_FOCUSIN((QsciScintillaBase*)self);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_FOCUSOUT)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_s_c_n__f_o_c_u_s_o_u_t(void* self) {
    QsciScintillaBase_SCN_FOCUSOUT((QsciScintillaBase*)self);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_HOTSPOTCLICK)
///
/// ``` QsciScintillaBase* self, int position, int modifiers ```
void q_sciscintillabase_s_c_n__h_o_t_s_p_o_t_c_l_i_c_k(void* self, int position, int modifiers) {
    QsciScintillaBase_SCN_HOTSPOTCLICK((QsciScintillaBase*)self, position, modifiers);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, int, int) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_HOTSPOTDOUBLECLICK)
///
/// ``` QsciScintillaBase* self, int position, int modifiers ```
void q_sciscintillabase_s_c_n__h_o_t_s_p_o_t_d_o_u_b_l_e_c_l_i_c_k(void* self, int position, int modifiers) {
    QsciScintillaBase_SCN_HOTSPOTDOUBLECLICK((QsciScintillaBase*)self, position, modifiers);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, int, int) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_HOTSPOTRELEASECLICK)
///
/// ``` QsciScintillaBase* self, int position, int modifiers ```
void q_sciscintillabase_s_c_n__h_o_t_s_p_o_t_r_e_l_e_a_s_e_c_l_i_c_k(void* self, int position, int modifiers) {
    QsciScintillaBase_SCN_HOTSPOTRELEASECLICK((QsciScintillaBase*)self, position, modifiers);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, int, int) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_INDICATORCLICK)
///
/// ``` QsciScintillaBase* self, int position, int modifiers ```
void q_sciscintillabase_s_c_n__i_n_d_i_c_a_t_o_r_c_l_i_c_k(void* self, int position, int modifiers) {
    QsciScintillaBase_SCN_INDICATORCLICK((QsciScintillaBase*)self, position, modifiers);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, int, int) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_INDICATORRELEASE)
///
/// ``` QsciScintillaBase* self, int position, int modifiers ```
void q_sciscintillabase_s_c_n__i_n_d_i_c_a_t_o_r_r_e_l_e_a_s_e(void* self, int position, int modifiers) {
    QsciScintillaBase_SCN_INDICATORRELEASE((QsciScintillaBase*)self, position, modifiers);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, int, int) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_MACRORECORD)
///
/// ``` QsciScintillaBase* self, uint32_t param1, uint64_t param2, void* param3 ```
void q_sciscintillabase_s_c_n__m_a_c_r_o_r_e_c_o_r_d(void* self, uint32_t param1, uint64_t param2, void* param3) {
    QsciScintillaBase_SCN_MACRORECORD((QsciScintillaBase*)self, param1, param2, param3);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, uint32_t, uint64_t, void*) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_MARGINCLICK)
///
/// ``` QsciScintillaBase* self, int position, int modifiers, int margin ```
void q_sciscintillabase_s_c_n__m_a_r_g_i_n_c_l_i_c_k(void* self, int position, int modifiers, int margin) {
    QsciScintillaBase_SCN_MARGINCLICK((QsciScintillaBase*)self, position, modifiers, margin);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, int, int, int) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_MARGINRIGHTCLICK)
///
/// ``` QsciScintillaBase* self, int position, int modifiers, int margin ```
void q_sciscintillabase_s_c_n__m_a_r_g_i_n_r_i_g_h_t_c_l_i_c_k(void* self, int position, int modifiers, int margin) {
    QsciScintillaBase_SCN_MARGINRIGHTCLICK((QsciScintillaBase*)self, position, modifiers, margin);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, int, int, int) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_MODIFIED)
///
/// ``` QsciScintillaBase* self, int param1, int param2, const char* param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10 ```
void q_sciscintillabase_s_c_n__m_o_d_i_f_i_e_d(void* self, int param1, int param2, const char* param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10) {
    QsciScintillaBase_SCN_MODIFIED((QsciScintillaBase*)self, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, int, int, const char*, int, int, int, int, int, int, int) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_MODIFYATTEMPTRO)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_s_c_n__m_o_d_i_f_y_a_t_t_e_m_p_t_r_o(void* self) {
    QsciScintillaBase_SCN_MODIFYATTEMPTRO((QsciScintillaBase*)self);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_NEEDSHOWN)
///
/// ``` QsciScintillaBase* self, int param1, int param2 ```
void q_sciscintillabase_s_c_n__n_e_e_d_s_h_o_w_n(void* self, int param1, int param2) {
    QsciScintillaBase_SCN_NEEDSHOWN((QsciScintillaBase*)self, param1, param2);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, int, int) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_PAINTED)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_s_c_n__p_a_i_n_t_e_d(void* self) {
    QsciScintillaBase_SCN_PAINTED((QsciScintillaBase*)self);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_SAVEPOINTLEFT)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_s_c_n__s_a_v_e_p_o_i_n_t_l_e_f_t(void* self) {
    QsciScintillaBase_SCN_SAVEPOINTLEFT((QsciScintillaBase*)self);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_SAVEPOINTREACHED)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_s_c_n__s_a_v_e_p_o_i_n_t_r_e_a_c_h_e_d(void* self) {
    QsciScintillaBase_SCN_SAVEPOINTREACHED((QsciScintillaBase*)self);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_STYLENEEDED)
///
/// ``` QsciScintillaBase* self, int position ```
void q_sciscintillabase_s_c_n__s_t_y_l_e_n_e_e_d_e_d(void* self, int position) {
    QsciScintillaBase_SCN_STYLENEEDED((QsciScintillaBase*)self, position);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, int) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_URIDROPPED)
///
/// ``` QsciScintillaBase* self, QUrl* url ```
void q_sciscintillabase_s_c_n__u_r_i_d_r_o_p_p_e_d(void* self, void* url) {
    QsciScintillaBase_SCN_URIDROPPED((QsciScintillaBase*)self, (QUrl*)url);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QUrl*) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_UPDATEUI)
///
/// ``` QsciScintillaBase* self, int updated ```
void q_sciscintillabase_s_c_n__u_p_d_a_t_e_u_i(void* self, int updated) {
    QsciScintillaBase_SCN_UPDATEUI((QsciScintillaBase*)self, updated);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, int) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_USERLISTSELECTION)
///
/// ``` QsciScintillaBase* self, const char* selection, int id, int ch, int method, int position ```
void q_sciscintillabase_s_c_n__u_s_e_r_l_i_s_t_s_e_l_e_c_t_i_o_n(void* self, const char* selection, int id, int ch, int method, int position) {
    QsciScintillaBase_SCN_USERLISTSELECTION((QsciScintillaBase*)self, selection, id, ch, method, position);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, const char*, int, int, int, int) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_USERLISTSELECTION)
///
/// ``` QsciScintillaBase* self, const char* selection, int id, int ch, int method ```
void q_sciscintillabase_s_c_n__u_s_e_r_l_i_s_t_s_e_l_e_c_t_i_o_n2(void* self, const char* selection, int id, int ch, int method) {
    QsciScintillaBase_SCN_USERLISTSELECTION2((QsciScintillaBase*)self, selection, id, ch, method);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, const char*, int, int, int) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_USERLISTSELECTION)
///
/// ``` QsciScintillaBase* self, const char* selection, int id ```
void q_sciscintillabase_s_c_n__u_s_e_r_l_i_s_t_s_e_l_e_c_t_i_o_n3(void* self, const char* selection, int id) {
    QsciScintillaBase_SCN_USERLISTSELECTION3((QsciScintillaBase*)self, selection, id);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, const char*, int) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_ZOOM)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_s_c_n__z_o_o_m(void* self) {
    QsciScintillaBase_SCN_ZOOM((QsciScintillaBase*)self);
}

/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#canInsertFromMimeData)
///
/// ``` QsciScintillaBase* self, QMimeData* source ```
bool q_sciscintillabase_can_insert_from_mime_data(void* self, void* source) {
    return QsciScintillaBase_CanInsertFromMimeData((QsciScintillaBase*)self, (QMimeData*)source);
}

/// Allows for overriding the related default method
///
/// ``` QsciScintillaBase* self, bool (*slot)(QsciScintillaBase*, QMimeData*) ```
void q_sciscintillabase_on_can_insert_from_mime_data(void* self, bool (*slot)(void*, void*)) {
    QsciScintillaBase_OnCanInsertFromMimeData((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciScintillaBase* self, QMimeData* source ```
bool q_sciscintillabase_qbase_can_insert_from_mime_data(void* self, void* source) {
    return QsciScintillaBase_QBaseCanInsertFromMimeData((QsciScintillaBase*)self, (QMimeData*)source);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#fromMimeData)
///
/// ``` QsciScintillaBase* self, QMimeData* source, bool* rectangular ```
char* q_sciscintillabase_from_mime_data(void* self, void* source, bool* rectangular) {
    libqt_string _str = QsciScintillaBase_FromMimeData((QsciScintillaBase*)self, (QMimeData*)source, (bool*)rectangular);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Allows for overriding the related default method
///
/// ``` QsciScintillaBase* self, char* (*slot)(QsciScintillaBase*, QMimeData*, bool*) ```
void q_sciscintillabase_on_from_mime_data(void* self, char* (*slot)(void*, void*, bool*)) {
    QsciScintillaBase_OnFromMimeData((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciScintillaBase* self, QMimeData* source, bool* rectangular ```
char* q_sciscintillabase_qbase_from_mime_data(void* self, void* source, bool* rectangular) {
    libqt_string _str = QsciScintillaBase_QBaseFromMimeData((QsciScintillaBase*)self, (QMimeData*)source, (bool*)rectangular);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#toMimeData)
///
/// ``` QsciScintillaBase* self, const char* text, bool rectangular ```
QMimeData* q_sciscintillabase_to_mime_data(void* self, const char* text, bool rectangular) {
    return QsciScintillaBase_ToMimeData((QsciScintillaBase*)self, qstring(text), rectangular);
}

/// Allows for overriding the related default method
///
/// ``` QsciScintillaBase* self, QMimeData* (*slot)(QsciScintillaBase*, const char*, bool) ```
void q_sciscintillabase_on_to_mime_data(void* self, QMimeData* (*slot)(void*, const char*, bool)) {
    QsciScintillaBase_OnToMimeData((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciScintillaBase* self, const char* text, bool rectangular ```
QMimeData* q_sciscintillabase_qbase_to_mime_data(void* self, const char* text, bool rectangular) {
    return QsciScintillaBase_QBaseToMimeData((QsciScintillaBase*)self, qstring(text), rectangular);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#changeEvent)
///
/// ``` QsciScintillaBase* self, QEvent* e ```
void q_sciscintillabase_change_event(void* self, void* e) {
    QsciScintillaBase_ChangeEvent((QsciScintillaBase*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QEvent*) ```
void q_sciscintillabase_on_change_event(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnChangeEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciScintillaBase* self, QEvent* e ```
void q_sciscintillabase_qbase_change_event(void* self, void* e) {
    QsciScintillaBase_QBaseChangeEvent((QsciScintillaBase*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#contextMenuEvent)
///
/// ``` QsciScintillaBase* self, QContextMenuEvent* e ```
void q_sciscintillabase_context_menu_event(void* self, void* e) {
    QsciScintillaBase_ContextMenuEvent((QsciScintillaBase*)self, (QContextMenuEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QContextMenuEvent*) ```
void q_sciscintillabase_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnContextMenuEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciScintillaBase* self, QContextMenuEvent* e ```
void q_sciscintillabase_qbase_context_menu_event(void* self, void* e) {
    QsciScintillaBase_QBaseContextMenuEvent((QsciScintillaBase*)self, (QContextMenuEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#dragEnterEvent)
///
/// ``` QsciScintillaBase* self, QDragEnterEvent* e ```
void q_sciscintillabase_drag_enter_event(void* self, void* e) {
    QsciScintillaBase_DragEnterEvent((QsciScintillaBase*)self, (QDragEnterEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QDragEnterEvent*) ```
void q_sciscintillabase_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnDragEnterEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciScintillaBase* self, QDragEnterEvent* e ```
void q_sciscintillabase_qbase_drag_enter_event(void* self, void* e) {
    QsciScintillaBase_QBaseDragEnterEvent((QsciScintillaBase*)self, (QDragEnterEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#dragLeaveEvent)
///
/// ``` QsciScintillaBase* self, QDragLeaveEvent* e ```
void q_sciscintillabase_drag_leave_event(void* self, void* e) {
    QsciScintillaBase_DragLeaveEvent((QsciScintillaBase*)self, (QDragLeaveEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QDragLeaveEvent*) ```
void q_sciscintillabase_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnDragLeaveEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciScintillaBase* self, QDragLeaveEvent* e ```
void q_sciscintillabase_qbase_drag_leave_event(void* self, void* e) {
    QsciScintillaBase_QBaseDragLeaveEvent((QsciScintillaBase*)self, (QDragLeaveEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#dragMoveEvent)
///
/// ``` QsciScintillaBase* self, QDragMoveEvent* e ```
void q_sciscintillabase_drag_move_event(void* self, void* e) {
    QsciScintillaBase_DragMoveEvent((QsciScintillaBase*)self, (QDragMoveEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QDragMoveEvent*) ```
void q_sciscintillabase_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnDragMoveEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciScintillaBase* self, QDragMoveEvent* e ```
void q_sciscintillabase_qbase_drag_move_event(void* self, void* e) {
    QsciScintillaBase_QBaseDragMoveEvent((QsciScintillaBase*)self, (QDragMoveEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#dropEvent)
///
/// ``` QsciScintillaBase* self, QDropEvent* e ```
void q_sciscintillabase_drop_event(void* self, void* e) {
    QsciScintillaBase_DropEvent((QsciScintillaBase*)self, (QDropEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QDropEvent*) ```
void q_sciscintillabase_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnDropEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciScintillaBase* self, QDropEvent* e ```
void q_sciscintillabase_qbase_drop_event(void* self, void* e) {
    QsciScintillaBase_QBaseDropEvent((QsciScintillaBase*)self, (QDropEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#focusInEvent)
///
/// ``` QsciScintillaBase* self, QFocusEvent* e ```
void q_sciscintillabase_focus_in_event(void* self, void* e) {
    QsciScintillaBase_FocusInEvent((QsciScintillaBase*)self, (QFocusEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QFocusEvent*) ```
void q_sciscintillabase_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnFocusInEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciScintillaBase* self, QFocusEvent* e ```
void q_sciscintillabase_qbase_focus_in_event(void* self, void* e) {
    QsciScintillaBase_QBaseFocusInEvent((QsciScintillaBase*)self, (QFocusEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#focusOutEvent)
///
/// ``` QsciScintillaBase* self, QFocusEvent* e ```
void q_sciscintillabase_focus_out_event(void* self, void* e) {
    QsciScintillaBase_FocusOutEvent((QsciScintillaBase*)self, (QFocusEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QFocusEvent*) ```
void q_sciscintillabase_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnFocusOutEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciScintillaBase* self, QFocusEvent* e ```
void q_sciscintillabase_qbase_focus_out_event(void* self, void* e) {
    QsciScintillaBase_QBaseFocusOutEvent((QsciScintillaBase*)self, (QFocusEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#focusNextPrevChild)
///
/// ``` QsciScintillaBase* self, bool next ```
bool q_sciscintillabase_focus_next_prev_child(void* self, bool next) {
    return QsciScintillaBase_FocusNextPrevChild((QsciScintillaBase*)self, next);
}

/// Allows for overriding the related default method
///
/// ``` QsciScintillaBase* self, bool (*slot)(QsciScintillaBase*, bool) ```
void q_sciscintillabase_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QsciScintillaBase_OnFocusNextPrevChild((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciScintillaBase* self, bool next ```
bool q_sciscintillabase_qbase_focus_next_prev_child(void* self, bool next) {
    return QsciScintillaBase_QBaseFocusNextPrevChild((QsciScintillaBase*)self, next);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#keyPressEvent)
///
/// ``` QsciScintillaBase* self, QKeyEvent* e ```
void q_sciscintillabase_key_press_event(void* self, void* e) {
    QsciScintillaBase_KeyPressEvent((QsciScintillaBase*)self, (QKeyEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QKeyEvent*) ```
void q_sciscintillabase_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnKeyPressEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciScintillaBase* self, QKeyEvent* e ```
void q_sciscintillabase_qbase_key_press_event(void* self, void* e) {
    QsciScintillaBase_QBaseKeyPressEvent((QsciScintillaBase*)self, (QKeyEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#inputMethodEvent)
///
/// ``` QsciScintillaBase* self, QInputMethodEvent* event ```
void q_sciscintillabase_input_method_event(void* self, void* event) {
    QsciScintillaBase_InputMethodEvent((QsciScintillaBase*)self, (QInputMethodEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QInputMethodEvent*) ```
void q_sciscintillabase_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnInputMethodEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciScintillaBase* self, QInputMethodEvent* event ```
void q_sciscintillabase_qbase_input_method_event(void* self, void* event) {
    QsciScintillaBase_QBaseInputMethodEvent((QsciScintillaBase*)self, (QInputMethodEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#mouseDoubleClickEvent)
///
/// ``` QsciScintillaBase* self, QMouseEvent* e ```
void q_sciscintillabase_mouse_double_click_event(void* self, void* e) {
    QsciScintillaBase_MouseDoubleClickEvent((QsciScintillaBase*)self, (QMouseEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QMouseEvent*) ```
void q_sciscintillabase_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnMouseDoubleClickEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciScintillaBase* self, QMouseEvent* e ```
void q_sciscintillabase_qbase_mouse_double_click_event(void* self, void* e) {
    QsciScintillaBase_QBaseMouseDoubleClickEvent((QsciScintillaBase*)self, (QMouseEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#mouseMoveEvent)
///
/// ``` QsciScintillaBase* self, QMouseEvent* e ```
void q_sciscintillabase_mouse_move_event(void* self, void* e) {
    QsciScintillaBase_MouseMoveEvent((QsciScintillaBase*)self, (QMouseEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QMouseEvent*) ```
void q_sciscintillabase_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnMouseMoveEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciScintillaBase* self, QMouseEvent* e ```
void q_sciscintillabase_qbase_mouse_move_event(void* self, void* e) {
    QsciScintillaBase_QBaseMouseMoveEvent((QsciScintillaBase*)self, (QMouseEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#mousePressEvent)
///
/// ``` QsciScintillaBase* self, QMouseEvent* e ```
void q_sciscintillabase_mouse_press_event(void* self, void* e) {
    QsciScintillaBase_MousePressEvent((QsciScintillaBase*)self, (QMouseEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QMouseEvent*) ```
void q_sciscintillabase_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnMousePressEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciScintillaBase* self, QMouseEvent* e ```
void q_sciscintillabase_qbase_mouse_press_event(void* self, void* e) {
    QsciScintillaBase_QBaseMousePressEvent((QsciScintillaBase*)self, (QMouseEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#mouseReleaseEvent)
///
/// ``` QsciScintillaBase* self, QMouseEvent* e ```
void q_sciscintillabase_mouse_release_event(void* self, void* e) {
    QsciScintillaBase_MouseReleaseEvent((QsciScintillaBase*)self, (QMouseEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QMouseEvent*) ```
void q_sciscintillabase_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnMouseReleaseEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciScintillaBase* self, QMouseEvent* e ```
void q_sciscintillabase_qbase_mouse_release_event(void* self, void* e) {
    QsciScintillaBase_QBaseMouseReleaseEvent((QsciScintillaBase*)self, (QMouseEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#paintEvent)
///
/// ``` QsciScintillaBase* self, QPaintEvent* e ```
void q_sciscintillabase_paint_event(void* self, void* e) {
    QsciScintillaBase_PaintEvent((QsciScintillaBase*)self, (QPaintEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QPaintEvent*) ```
void q_sciscintillabase_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnPaintEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciScintillaBase* self, QPaintEvent* e ```
void q_sciscintillabase_qbase_paint_event(void* self, void* e) {
    QsciScintillaBase_QBasePaintEvent((QsciScintillaBase*)self, (QPaintEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#resizeEvent)
///
/// ``` QsciScintillaBase* self, QResizeEvent* e ```
void q_sciscintillabase_resize_event(void* self, void* e) {
    QsciScintillaBase_ResizeEvent((QsciScintillaBase*)self, (QResizeEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QResizeEvent*) ```
void q_sciscintillabase_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnResizeEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciScintillaBase* self, QResizeEvent* e ```
void q_sciscintillabase_qbase_resize_event(void* self, void* e) {
    QsciScintillaBase_QBaseResizeEvent((QsciScintillaBase*)self, (QResizeEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#scrollContentsBy)
///
/// ``` QsciScintillaBase* self, int dx, int dy ```
void q_sciscintillabase_scroll_contents_by(void* self, int dx, int dy) {
    QsciScintillaBase_ScrollContentsBy((QsciScintillaBase*)self, dx, dy);
}

/// Allows for overriding the related default method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, int, int) ```
void q_sciscintillabase_on_scroll_contents_by(void* self, void (*slot)(void*, int, int)) {
    QsciScintillaBase_OnScrollContentsBy((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciScintillaBase* self, int dx, int dy ```
void q_sciscintillabase_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QsciScintillaBase_QBaseScrollContentsBy((QsciScintillaBase*)self, dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#setScrollBars)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_set_scroll_bars(void* self) {
    QsciScintillaBase_SetScrollBars((QsciScintillaBase*)self);
}

/// Allows for overriding the related default method
///
/// ``` QsciScintillaBase* self, void (*slot)() ```
void q_sciscintillabase_on_set_scroll_bars(void* self, void (*slot)()) {
    QsciScintillaBase_OnSetScrollBars((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_qbase_set_scroll_bars(void* self) {
    QsciScintillaBase_QBaseSetScrollBars((QsciScintillaBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#contextMenuNeeded)
///
/// ``` QsciScintillaBase* self, int x, int y ```
bool q_sciscintillabase_context_menu_needed(void* self, int x, int y) {
    return QsciScintillaBase_ContextMenuNeeded((QsciScintillaBase*)self, x, y);
}

/// Allows for overriding the related default method
///
/// ``` QsciScintillaBase* self, bool (*slot)(QsciScintillaBase*, int, int) ```
void q_sciscintillabase_on_context_menu_needed(void* self, bool (*slot)(void*, int, int)) {
    QsciScintillaBase_OnContextMenuNeeded((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciScintillaBase* self, int x, int y ```
bool q_sciscintillabase_qbase_context_menu_needed(void* self, int x, int y) {
    return QsciScintillaBase_QBaseContextMenuNeeded((QsciScintillaBase*)self, x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_sciscintillabase_tr2(const char* s, const char* c) {
    libqt_string _str = QsciScintillaBase_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_sciscintillabase_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciScintillaBase_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintilla)
///
/// ``` QsciScintillaBase* self, uint32_t msg, uint64_t wParam ```
int64_t q_sciscintillabase_send_scintilla22(void* self, uint32_t msg, uint64_t wParam) {
    return QsciScintillaBase_SendScintilla22((QsciScintillaBase*)self, msg, wParam);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintilla)
///
/// ``` QsciScintillaBase* self, uint32_t msg, uint64_t wParam, int64_t lParam ```
int64_t q_sciscintillabase_send_scintilla32(void* self, uint32_t msg, uint64_t wParam, int64_t lParam) {
    return QsciScintillaBase_SendScintilla32((QsciScintillaBase*)self, msg, wParam, lParam);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QsciScintillaBase* self ```
int64_t q_sciscintillabase_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QsciScintillaBase* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_sciscintillabase_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QsciScintillaBase* self ```
QScrollBar* q_sciscintillabase_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QsciScintillaBase* self, QScrollBar* scrollbar ```
void q_sciscintillabase_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QsciScintillaBase* self ```
int64_t q_sciscintillabase_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QsciScintillaBase* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_sciscintillabase_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QsciScintillaBase* self ```
QScrollBar* q_sciscintillabase_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QsciScintillaBase* self, QScrollBar* scrollbar ```
void q_sciscintillabase_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QsciScintillaBase* self ```
QWidget* q_sciscintillabase_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QsciScintillaBase* self, QWidget* widget ```
void q_sciscintillabase_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QsciScintillaBase* self, QWidget* widget, int alignment ```
void q_sciscintillabase_add_scroll_bar_widget(void* self, void* widget, int64_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QsciScintillaBase* self, int alignment ```
libqt_list /* of QWidget* */ q_sciscintillabase_scroll_bar_widgets(void* self, int64_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QsciScintillaBase* self ```
QWidget* q_sciscintillabase_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QsciScintillaBase* self, QWidget* widget ```
void q_sciscintillabase_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QsciScintillaBase* self ```
QSize* q_sciscintillabase_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QsciScintillaBase* self ```
int64_t q_sciscintillabase_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QsciScintillaBase* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_sciscintillabase_set_size_adjust_policy(void* self, int64_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QsciScintillaBase* self ```
int32_t q_sciscintillabase_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QsciScintillaBase* self, int frameStyle ```
void q_sciscintillabase_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QsciScintillaBase* self ```
int32_t q_sciscintillabase_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QsciScintillaBase* self ```
int64_t q_sciscintillabase_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QsciScintillaBase* self, enum QFrame__Shape frameShape ```
void q_sciscintillabase_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QsciScintillaBase* self ```
int64_t q_sciscintillabase_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QsciScintillaBase* self, enum QFrame__Shadow frameShadow ```
void q_sciscintillabase_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QsciScintillaBase* self ```
int32_t q_sciscintillabase_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QsciScintillaBase* self, int lineWidth ```
void q_sciscintillabase_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QsciScintillaBase* self ```
int32_t q_sciscintillabase_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QsciScintillaBase* self, int midLineWidth ```
void q_sciscintillabase_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QsciScintillaBase* self ```
QRect* q_sciscintillabase_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QsciScintillaBase* self, QRect* frameRect ```
void q_sciscintillabase_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QsciScintillaBase* self ```
uintptr_t q_sciscintillabase_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QsciScintillaBase* self ```
uintptr_t q_sciscintillabase_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QsciScintillaBase* self ```
uintptr_t q_sciscintillabase_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QsciScintillaBase* self ```
QStyle* q_sciscintillabase_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QsciScintillaBase* self, QStyle* style ```
void q_sciscintillabase_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QsciScintillaBase* self ```
int64_t q_sciscintillabase_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QsciScintillaBase* self, enum Qt__WindowModality windowModality ```
void q_sciscintillabase_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QsciScintillaBase* self, QWidget* param1 ```
bool q_sciscintillabase_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QsciScintillaBase* self, bool enabled ```
void q_sciscintillabase_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QsciScintillaBase* self, bool disabled ```
void q_sciscintillabase_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QsciScintillaBase* self, bool windowModified ```
void q_sciscintillabase_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QsciScintillaBase* self ```
QRect* q_sciscintillabase_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QsciScintillaBase* self ```
QRect* q_sciscintillabase_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QsciScintillaBase* self ```
QRect* q_sciscintillabase_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QsciScintillaBase* self ```
int32_t q_sciscintillabase_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QsciScintillaBase* self ```
int32_t q_sciscintillabase_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QsciScintillaBase* self ```
QPoint* q_sciscintillabase_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QsciScintillaBase* self ```
QSize* q_sciscintillabase_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QsciScintillaBase* self ```
QSize* q_sciscintillabase_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QsciScintillaBase* self ```
int32_t q_sciscintillabase_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QsciScintillaBase* self ```
int32_t q_sciscintillabase_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QsciScintillaBase* self ```
QRect* q_sciscintillabase_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QsciScintillaBase* self ```
QRect* q_sciscintillabase_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QsciScintillaBase* self ```
QRegion* q_sciscintillabase_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QsciScintillaBase* self ```
QSize* q_sciscintillabase_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QsciScintillaBase* self ```
QSize* q_sciscintillabase_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QsciScintillaBase* self ```
int32_t q_sciscintillabase_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QsciScintillaBase* self ```
int32_t q_sciscintillabase_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QsciScintillaBase* self ```
int32_t q_sciscintillabase_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QsciScintillaBase* self ```
int32_t q_sciscintillabase_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QsciScintillaBase* self, QSize* minimumSize ```
void q_sciscintillabase_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QsciScintillaBase* self, int minw, int minh ```
void q_sciscintillabase_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QsciScintillaBase* self, QSize* maximumSize ```
void q_sciscintillabase_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QsciScintillaBase* self, int maxw, int maxh ```
void q_sciscintillabase_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QsciScintillaBase* self, int minw ```
void q_sciscintillabase_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QsciScintillaBase* self, int minh ```
void q_sciscintillabase_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QsciScintillaBase* self, int maxw ```
void q_sciscintillabase_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QsciScintillaBase* self, int maxh ```
void q_sciscintillabase_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QsciScintillaBase* self ```
QSize* q_sciscintillabase_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QsciScintillaBase* self, QSize* sizeIncrement ```
void q_sciscintillabase_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QsciScintillaBase* self, int w, int h ```
void q_sciscintillabase_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QsciScintillaBase* self ```
QSize* q_sciscintillabase_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QsciScintillaBase* self, QSize* baseSize ```
void q_sciscintillabase_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QsciScintillaBase* self, int basew, int baseh ```
void q_sciscintillabase_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QsciScintillaBase* self, QSize* fixedSize ```
void q_sciscintillabase_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QsciScintillaBase* self, int w, int h ```
void q_sciscintillabase_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QsciScintillaBase* self, int w ```
void q_sciscintillabase_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QsciScintillaBase* self, int h ```
void q_sciscintillabase_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QsciScintillaBase* self, QPointF* param1 ```
QPointF* q_sciscintillabase_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QsciScintillaBase* self, QPoint* param1 ```
QPoint* q_sciscintillabase_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QsciScintillaBase* self, QPointF* param1 ```
QPointF* q_sciscintillabase_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QsciScintillaBase* self, QPoint* param1 ```
QPoint* q_sciscintillabase_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QsciScintillaBase* self, QPointF* param1 ```
QPointF* q_sciscintillabase_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QsciScintillaBase* self, QPoint* param1 ```
QPoint* q_sciscintillabase_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QsciScintillaBase* self, QPointF* param1 ```
QPointF* q_sciscintillabase_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QsciScintillaBase* self, QPoint* param1 ```
QPoint* q_sciscintillabase_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QsciScintillaBase* self, QWidget* param1, QPointF* param2 ```
QPointF* q_sciscintillabase_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QsciScintillaBase* self, QWidget* param1, QPoint* param2 ```
QPoint* q_sciscintillabase_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QsciScintillaBase* self, QWidget* param1, QPointF* param2 ```
QPointF* q_sciscintillabase_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QsciScintillaBase* self, QWidget* param1, QPoint* param2 ```
QPoint* q_sciscintillabase_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QsciScintillaBase* self ```
QWidget* q_sciscintillabase_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QsciScintillaBase* self ```
QWidget* q_sciscintillabase_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QsciScintillaBase* self ```
QWidget* q_sciscintillabase_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QsciScintillaBase* self ```
QPalette* q_sciscintillabase_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QsciScintillaBase* self, QPalette* palette ```
void q_sciscintillabase_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QsciScintillaBase* self, enum QPalette__ColorRole backgroundRole ```
void q_sciscintillabase_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QsciScintillaBase* self ```
int64_t q_sciscintillabase_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QsciScintillaBase* self, enum QPalette__ColorRole foregroundRole ```
void q_sciscintillabase_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QsciScintillaBase* self ```
int64_t q_sciscintillabase_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QsciScintillaBase* self ```
QFont* q_sciscintillabase_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QsciScintillaBase* self, QFont* font ```
void q_sciscintillabase_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QsciScintillaBase* self ```
QFontMetrics* q_sciscintillabase_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QsciScintillaBase* self ```
QFontInfo* q_sciscintillabase_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QsciScintillaBase* self ```
QCursor* q_sciscintillabase_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QsciScintillaBase* self, QCursor* cursor ```
void q_sciscintillabase_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QsciScintillaBase* self, bool enable ```
void q_sciscintillabase_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QsciScintillaBase* self, bool enable ```
void q_sciscintillabase_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QsciScintillaBase* self, QBitmap* mask ```
void q_sciscintillabase_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QsciScintillaBase* self, QRegion* mask ```
void q_sciscintillabase_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QsciScintillaBase* self ```
QRegion* q_sciscintillabase_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QsciScintillaBase* self, QPaintDevice* target ```
void q_sciscintillabase_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QsciScintillaBase* self, QPainter* painter ```
void q_sciscintillabase_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QsciScintillaBase* self ```
QPixmap* q_sciscintillabase_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QsciScintillaBase* self ```
QGraphicsEffect* q_sciscintillabase_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QsciScintillaBase* self, QGraphicsEffect* effect ```
void q_sciscintillabase_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QsciScintillaBase* self, enum Qt__GestureType typeVal ```
void q_sciscintillabase_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QsciScintillaBase* self, enum Qt__GestureType typeVal ```
void q_sciscintillabase_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QsciScintillaBase* self, const char* windowTitle ```
void q_sciscintillabase_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QsciScintillaBase* self, const char* styleSheet ```
void q_sciscintillabase_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QsciScintillaBase* self ```
const char* q_sciscintillabase_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QsciScintillaBase* self ```
const char* q_sciscintillabase_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QsciScintillaBase* self, QIcon* icon ```
void q_sciscintillabase_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QsciScintillaBase* self ```
QIcon* q_sciscintillabase_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QsciScintillaBase* self, const char* windowIconText ```
void q_sciscintillabase_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QsciScintillaBase* self ```
const char* q_sciscintillabase_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QsciScintillaBase* self, const char* windowRole ```
void q_sciscintillabase_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QsciScintillaBase* self ```
const char* q_sciscintillabase_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QsciScintillaBase* self, const char* filePath ```
void q_sciscintillabase_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QsciScintillaBase* self ```
const char* q_sciscintillabase_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QsciScintillaBase* self, double level ```
void q_sciscintillabase_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QsciScintillaBase* self ```
double q_sciscintillabase_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QsciScintillaBase* self, const char* toolTip ```
void q_sciscintillabase_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QsciScintillaBase* self ```
const char* q_sciscintillabase_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QsciScintillaBase* self, int msec ```
void q_sciscintillabase_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QsciScintillaBase* self ```
int32_t q_sciscintillabase_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QsciScintillaBase* self, const char* statusTip ```
void q_sciscintillabase_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QsciScintillaBase* self ```
const char* q_sciscintillabase_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QsciScintillaBase* self, const char* whatsThis ```
void q_sciscintillabase_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QsciScintillaBase* self ```
const char* q_sciscintillabase_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QsciScintillaBase* self ```
const char* q_sciscintillabase_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QsciScintillaBase* self, const char* name ```
void q_sciscintillabase_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QsciScintillaBase* self ```
const char* q_sciscintillabase_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QsciScintillaBase* self, const char* description ```
void q_sciscintillabase_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QsciScintillaBase* self, enum Qt__LayoutDirection direction ```
void q_sciscintillabase_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QsciScintillaBase* self ```
int64_t q_sciscintillabase_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QsciScintillaBase* self, QLocale* locale ```
void q_sciscintillabase_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QsciScintillaBase* self ```
QLocale* q_sciscintillabase_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QsciScintillaBase* self, enum Qt__FocusReason reason ```
void q_sciscintillabase_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QsciScintillaBase* self ```
int64_t q_sciscintillabase_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QsciScintillaBase* self, enum Qt__FocusPolicy policy ```
void q_sciscintillabase_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_sciscintillabase_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QsciScintillaBase* self, QWidget* focusProxy ```
void q_sciscintillabase_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QsciScintillaBase* self ```
QWidget* q_sciscintillabase_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QsciScintillaBase* self ```
int64_t q_sciscintillabase_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QsciScintillaBase* self, enum Qt__ContextMenuPolicy policy ```
void q_sciscintillabase_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QsciScintillaBase* self, QCursor* param1 ```
void q_sciscintillabase_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QsciScintillaBase* self, QKeySequence* key ```
int32_t q_sciscintillabase_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QsciScintillaBase* self, int id ```
void q_sciscintillabase_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QsciScintillaBase* self, int id ```
void q_sciscintillabase_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QsciScintillaBase* self, int id ```
void q_sciscintillabase_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_sciscintillabase_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_sciscintillabase_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QsciScintillaBase* self, bool enable ```
void q_sciscintillabase_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QsciScintillaBase* self ```
QGraphicsProxyWidget* q_sciscintillabase_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QsciScintillaBase* self, int x, int y, int w, int h ```
void q_sciscintillabase_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QsciScintillaBase* self, QRect* param1 ```
void q_sciscintillabase_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QsciScintillaBase* self, QRegion* param1 ```
void q_sciscintillabase_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QsciScintillaBase* self, int x, int y, int w, int h ```
void q_sciscintillabase_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QsciScintillaBase* self, QRect* param1 ```
void q_sciscintillabase_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QsciScintillaBase* self, QRegion* param1 ```
void q_sciscintillabase_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QsciScintillaBase* self, bool hidden ```
void q_sciscintillabase_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QsciScintillaBase* self, QWidget* param1 ```
void q_sciscintillabase_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QsciScintillaBase* self, int x, int y ```
void q_sciscintillabase_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QsciScintillaBase* self, QPoint* param1 ```
void q_sciscintillabase_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QsciScintillaBase* self, int w, int h ```
void q_sciscintillabase_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QsciScintillaBase* self, QSize* param1 ```
void q_sciscintillabase_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QsciScintillaBase* self, int x, int y, int w, int h ```
void q_sciscintillabase_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QsciScintillaBase* self, QRect* geometry ```
void q_sciscintillabase_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QsciScintillaBase* self ```
char* q_sciscintillabase_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QsciScintillaBase* self, const char* geometry ```
bool q_sciscintillabase_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QsciScintillaBase* self, QWidget* param1 ```
bool q_sciscintillabase_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QsciScintillaBase* self ```
int64_t q_sciscintillabase_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QsciScintillaBase* self, int state ```
void q_sciscintillabase_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QsciScintillaBase* self, int state ```
void q_sciscintillabase_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QsciScintillaBase* self ```
QSizePolicy* q_sciscintillabase_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QsciScintillaBase* self, QSizePolicy* sizePolicy ```
void q_sciscintillabase_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QsciScintillaBase* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_sciscintillabase_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QsciScintillaBase* self ```
QRegion* q_sciscintillabase_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QsciScintillaBase* self, int left, int top, int right, int bottom ```
void q_sciscintillabase_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QsciScintillaBase* self, QMargins* margins ```
void q_sciscintillabase_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QsciScintillaBase* self ```
QMargins* q_sciscintillabase_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QsciScintillaBase* self ```
QRect* q_sciscintillabase_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QsciScintillaBase* self ```
QLayout* q_sciscintillabase_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QsciScintillaBase* self, QLayout* layout ```
void q_sciscintillabase_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QsciScintillaBase* self, QWidget* parent ```
void q_sciscintillabase_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QsciScintillaBase* self, QWidget* parent, int f ```
void q_sciscintillabase_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QsciScintillaBase* self, int dx, int dy ```
void q_sciscintillabase_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QsciScintillaBase* self, int dx, int dy, QRect* param3 ```
void q_sciscintillabase_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QsciScintillaBase* self ```
QWidget* q_sciscintillabase_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QsciScintillaBase* self ```
QWidget* q_sciscintillabase_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QsciScintillaBase* self ```
QWidget* q_sciscintillabase_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QsciScintillaBase* self, bool on ```
void q_sciscintillabase_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QsciScintillaBase* self, QAction* action ```
void q_sciscintillabase_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QsciScintillaBase* self, QAction* actions[] ```
void q_sciscintillabase_add_actions(void* self, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_AddActions((QWidget*)self, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QsciScintillaBase* self, QAction* before, QAction* actions[] ```
void q_sciscintillabase_insert_actions(void* self, void* before, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QsciScintillaBase* self, QAction* before, QAction* action ```
void q_sciscintillabase_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QsciScintillaBase* self, QAction* action ```
void q_sciscintillabase_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QsciScintillaBase* self ```
libqt_list /* of QAction* */ q_sciscintillabase_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QsciScintillaBase* self, const char* text ```
QAction* q_sciscintillabase_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QsciScintillaBase* self, QIcon* icon, const char* text ```
QAction* q_sciscintillabase_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QsciScintillaBase* self, const char* text, QKeySequence* shortcut ```
QAction* q_sciscintillabase_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QsciScintillaBase* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_sciscintillabase_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QsciScintillaBase* self ```
QWidget* q_sciscintillabase_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QsciScintillaBase* self, int typeVal ```
void q_sciscintillabase_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QsciScintillaBase* self ```
int64_t q_sciscintillabase_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QsciScintillaBase* self, enum Qt__WindowType param1 ```
void q_sciscintillabase_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QsciScintillaBase* self, int typeVal ```
void q_sciscintillabase_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QsciScintillaBase* self ```
int64_t q_sciscintillabase_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_sciscintillabase_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QsciScintillaBase* self, int x, int y ```
QWidget* q_sciscintillabase_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QsciScintillaBase* self, QPoint* p ```
QWidget* q_sciscintillabase_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QsciScintillaBase* self, enum Qt__WidgetAttribute param1 ```
void q_sciscintillabase_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QsciScintillaBase* self, enum Qt__WidgetAttribute param1 ```
bool q_sciscintillabase_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QsciScintillaBase* self, QWidget* child ```
bool q_sciscintillabase_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QsciScintillaBase* self, bool enabled ```
void q_sciscintillabase_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QsciScintillaBase* self ```
QBackingStore* q_sciscintillabase_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QsciScintillaBase* self ```
QWindow* q_sciscintillabase_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QsciScintillaBase* self ```
QScreen* q_sciscintillabase_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QsciScintillaBase* self, QScreen* screen ```
void q_sciscintillabase_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_sciscintillabase_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QsciScintillaBase* self, const char* title ```
void q_sciscintillabase_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QsciScintillaBase* self, void (*slot)(QWidget*, const char*) ```
void q_sciscintillabase_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QsciScintillaBase* self, QIcon* icon ```
void q_sciscintillabase_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QsciScintillaBase* self, void (*slot)(QWidget*, QIcon*) ```
void q_sciscintillabase_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QsciScintillaBase* self, const char* iconText ```
void q_sciscintillabase_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QsciScintillaBase* self, void (*slot)(QWidget*, const char*) ```
void q_sciscintillabase_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QsciScintillaBase* self, QPoint* pos ```
void q_sciscintillabase_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QsciScintillaBase* self, void (*slot)(QWidget*, QPoint*) ```
void q_sciscintillabase_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QsciScintillaBase* self ```
int64_t q_sciscintillabase_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QsciScintillaBase* self, int hints ```
void q_sciscintillabase_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QsciScintillaBase* self, QPaintDevice* target, QPoint* targetOffset ```
void q_sciscintillabase_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QsciScintillaBase* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_sciscintillabase_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QsciScintillaBase* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_sciscintillabase_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QsciScintillaBase* self, QPainter* painter, QPoint* targetOffset ```
void q_sciscintillabase_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QsciScintillaBase* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_sciscintillabase_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QsciScintillaBase* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_sciscintillabase_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QsciScintillaBase* self, QRect* rectangle ```
QPixmap* q_sciscintillabase_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QsciScintillaBase* self, enum Qt__GestureType typeVal, int flags ```
void q_sciscintillabase_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QsciScintillaBase* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_sciscintillabase_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QsciScintillaBase* self, int id, bool enable ```
void q_sciscintillabase_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QsciScintillaBase* self, int id, bool enable ```
void q_sciscintillabase_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QsciScintillaBase* self, enum Qt__WindowType param1, bool on ```
void q_sciscintillabase_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QsciScintillaBase* self, enum Qt__WidgetAttribute param1, bool on ```
void q_sciscintillabase_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_sciscintillabase_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_sciscintillabase_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciScintillaBase* self ```
const char* q_sciscintillabase_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciScintillaBase* self, const char* name ```
void q_sciscintillabase_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciScintillaBase* self, bool b ```
bool q_sciscintillabase_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciScintillaBase* self ```
QThread* q_sciscintillabase_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciScintillaBase* self, QThread* thread ```
void q_sciscintillabase_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciScintillaBase* self, int interval ```
int32_t q_sciscintillabase_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciScintillaBase* self, int id ```
void q_sciscintillabase_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciScintillaBase* self ```
libqt_list /* of QObject* */ q_sciscintillabase_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciScintillaBase* self, QObject* filterObj ```
void q_sciscintillabase_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciScintillaBase* self, QObject* obj ```
void q_sciscintillabase_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_sciscintillabase_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciScintillaBase* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_sciscintillabase_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_sciscintillabase_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_sciscintillabase_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciScintillaBase* self, const char* name, QVariant* value ```
bool q_sciscintillabase_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciScintillaBase* self, const char* name ```
QVariant* q_sciscintillabase_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciScintillaBase* self ```
const char** q_sciscintillabase_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciScintillaBase* self ```
QBindingStorage* q_sciscintillabase_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciScintillaBase* self ```
QBindingStorage* q_sciscintillabase_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciScintillaBase* self, void (*slot)(QObject*) ```
void q_sciscintillabase_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciScintillaBase* self ```
QObject* q_sciscintillabase_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciScintillaBase* self, const char* classname ```
bool q_sciscintillabase_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciScintillaBase* self, int interval, enum Qt__TimerType timerType ```
int32_t q_sciscintillabase_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sciscintillabase_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciScintillaBase* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sciscintillabase_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciScintillaBase* self, QObject* param1 ```
void q_sciscintillabase_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciScintillaBase* self, void (*slot)(QObject*, QObject*) ```
void q_sciscintillabase_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QsciScintillaBase* self ```
int32_t q_sciscintillabase_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QsciScintillaBase* self ```
int32_t q_sciscintillabase_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QsciScintillaBase* self ```
int32_t q_sciscintillabase_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QsciScintillaBase* self ```
int32_t q_sciscintillabase_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QsciScintillaBase* self ```
int32_t q_sciscintillabase_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QsciScintillaBase* self ```
int32_t q_sciscintillabase_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QsciScintillaBase* self ```
double q_sciscintillabase_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QsciScintillaBase* self ```
double q_sciscintillabase_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QsciScintillaBase* self ```
int32_t q_sciscintillabase_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QsciScintillaBase* self ```
int32_t q_sciscintillabase_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_sciscintillabase_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self ```
QSize* q_sciscintillabase_minimum_size_hint(void* self) {
    return QsciScintillaBase_MinimumSizeHint((QsciScintillaBase*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self ```
QSize* q_sciscintillabase_qbase_minimum_size_hint(void* self) {
    return QsciScintillaBase_QBaseMinimumSizeHint((QsciScintillaBase*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QSize* (*slot)() ```
void q_sciscintillabase_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QsciScintillaBase_OnMinimumSizeHint((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self ```
QSize* q_sciscintillabase_size_hint(void* self) {
    return QsciScintillaBase_SizeHint((QsciScintillaBase*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self ```
QSize* q_sciscintillabase_qbase_size_hint(void* self) {
    return QsciScintillaBase_QBaseSizeHint((QsciScintillaBase*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QSize* (*slot)() ```
void q_sciscintillabase_on_size_hint(void* self, QSize* (*slot)()) {
    QsciScintillaBase_OnSizeHint((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self, QWidget* viewport ```
void q_sciscintillabase_setup_viewport(void* self, void* viewport) {
    QsciScintillaBase_SetupViewport((QsciScintillaBase*)self, (QWidget*)viewport);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QWidget* viewport ```
void q_sciscintillabase_qbase_setup_viewport(void* self, void* viewport) {
    QsciScintillaBase_QBaseSetupViewport((QsciScintillaBase*)self, (QWidget*)viewport);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QWidget*) ```
void q_sciscintillabase_on_setup_viewport(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnSetupViewport((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self, QObject* param1, QEvent* param2 ```
bool q_sciscintillabase_event_filter(void* self, void* param1, void* param2) {
    return QsciScintillaBase_EventFilter((QsciScintillaBase*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QObject* param1, QEvent* param2 ```
bool q_sciscintillabase_qbase_event_filter(void* self, void* param1, void* param2) {
    return QsciScintillaBase_QBaseEventFilter((QsciScintillaBase*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, bool (*slot)(QsciScintillaBase*, QObject*, QEvent*) ```
void q_sciscintillabase_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciScintillaBase_OnEventFilter((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self, QEvent* param1 ```
bool q_sciscintillabase_event(void* self, void* param1) {
    return QsciScintillaBase_Event((QsciScintillaBase*)self, (QEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QEvent* param1 ```
bool q_sciscintillabase_qbase_event(void* self, void* param1) {
    return QsciScintillaBase_QBaseEvent((QsciScintillaBase*)self, (QEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, bool (*slot)(QsciScintillaBase*, QEvent*) ```
void q_sciscintillabase_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciScintillaBase_OnEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self, QEvent* param1 ```
bool q_sciscintillabase_viewport_event(void* self, void* param1) {
    return QsciScintillaBase_ViewportEvent((QsciScintillaBase*)self, (QEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QEvent* param1 ```
bool q_sciscintillabase_qbase_viewport_event(void* self, void* param1) {
    return QsciScintillaBase_QBaseViewportEvent((QsciScintillaBase*)self, (QEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, bool (*slot)(QsciScintillaBase*, QEvent*) ```
void q_sciscintillabase_on_viewport_event(void* self, bool (*slot)(void*, void*)) {
    QsciScintillaBase_OnViewportEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self, QWheelEvent* param1 ```
void q_sciscintillabase_wheel_event(void* self, void* param1) {
    QsciScintillaBase_WheelEvent((QsciScintillaBase*)self, (QWheelEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QWheelEvent* param1 ```
void q_sciscintillabase_qbase_wheel_event(void* self, void* param1) {
    QsciScintillaBase_QBaseWheelEvent((QsciScintillaBase*)self, (QWheelEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QWheelEvent*) ```
void q_sciscintillabase_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnWheelEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self ```
QSize* q_sciscintillabase_viewport_size_hint(void* self) {
    return QsciScintillaBase_ViewportSizeHint((QsciScintillaBase*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self ```
QSize* q_sciscintillabase_qbase_viewport_size_hint(void* self) {
    return QsciScintillaBase_QBaseViewportSizeHint((QsciScintillaBase*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QSize* (*slot)() ```
void q_sciscintillabase_on_viewport_size_hint(void* self, QSize* (*slot)()) {
    QsciScintillaBase_OnViewportSizeHint((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self, QStyleOptionFrame* option ```
void q_sciscintillabase_init_style_option(void* self, void* option) {
    QsciScintillaBase_InitStyleOption((QsciScintillaBase*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QStyleOptionFrame* option ```
void q_sciscintillabase_qbase_init_style_option(void* self, void* option) {
    QsciScintillaBase_QBaseInitStyleOption((QsciScintillaBase*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QStyleOptionFrame*) ```
void q_sciscintillabase_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnInitStyleOption((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self ```
int32_t q_sciscintillabase_dev_type(void* self) {
    return QsciScintillaBase_DevType((QsciScintillaBase*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self ```
int32_t q_sciscintillabase_qbase_dev_type(void* self) {
    return QsciScintillaBase_QBaseDevType((QsciScintillaBase*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, int32_t (*slot)() ```
void q_sciscintillabase_on_dev_type(void* self, int32_t (*slot)()) {
    QsciScintillaBase_OnDevType((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self, bool visible ```
void q_sciscintillabase_set_visible(void* self, bool visible) {
    QsciScintillaBase_SetVisible((QsciScintillaBase*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self, bool visible ```
void q_sciscintillabase_qbase_set_visible(void* self, bool visible) {
    QsciScintillaBase_QBaseSetVisible((QsciScintillaBase*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, bool) ```
void q_sciscintillabase_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QsciScintillaBase_OnSetVisible((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self, int param1 ```
int32_t q_sciscintillabase_height_for_width(void* self, int param1) {
    return QsciScintillaBase_HeightForWidth((QsciScintillaBase*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self, int param1 ```
int32_t q_sciscintillabase_qbase_height_for_width(void* self, int param1) {
    return QsciScintillaBase_QBaseHeightForWidth((QsciScintillaBase*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, int32_t (*slot)(QsciScintillaBase*, int) ```
void q_sciscintillabase_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QsciScintillaBase_OnHeightForWidth((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_has_height_for_width(void* self) {
    return QsciScintillaBase_HasHeightForWidth((QsciScintillaBase*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_qbase_has_height_for_width(void* self) {
    return QsciScintillaBase_QBaseHasHeightForWidth((QsciScintillaBase*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, bool (*slot)() ```
void q_sciscintillabase_on_has_height_for_width(void* self, bool (*slot)()) {
    QsciScintillaBase_OnHasHeightForWidth((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self ```
QPaintEngine* q_sciscintillabase_paint_engine(void* self) {
    return QsciScintillaBase_PaintEngine((QsciScintillaBase*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self ```
QPaintEngine* q_sciscintillabase_qbase_paint_engine(void* self) {
    return QsciScintillaBase_QBasePaintEngine((QsciScintillaBase*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QPaintEngine* (*slot)() ```
void q_sciscintillabase_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QsciScintillaBase_OnPaintEngine((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self, QKeyEvent* event ```
void q_sciscintillabase_key_release_event(void* self, void* event) {
    QsciScintillaBase_KeyReleaseEvent((QsciScintillaBase*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QKeyEvent* event ```
void q_sciscintillabase_qbase_key_release_event(void* self, void* event) {
    QsciScintillaBase_QBaseKeyReleaseEvent((QsciScintillaBase*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QKeyEvent*) ```
void q_sciscintillabase_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnKeyReleaseEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self, QEnterEvent* event ```
void q_sciscintillabase_enter_event(void* self, void* event) {
    QsciScintillaBase_EnterEvent((QsciScintillaBase*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QEnterEvent* event ```
void q_sciscintillabase_qbase_enter_event(void* self, void* event) {
    QsciScintillaBase_QBaseEnterEvent((QsciScintillaBase*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QEnterEvent*) ```
void q_sciscintillabase_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnEnterEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self, QEvent* event ```
void q_sciscintillabase_leave_event(void* self, void* event) {
    QsciScintillaBase_LeaveEvent((QsciScintillaBase*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QEvent* event ```
void q_sciscintillabase_qbase_leave_event(void* self, void* event) {
    QsciScintillaBase_QBaseLeaveEvent((QsciScintillaBase*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QEvent*) ```
void q_sciscintillabase_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnLeaveEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self, QMoveEvent* event ```
void q_sciscintillabase_move_event(void* self, void* event) {
    QsciScintillaBase_MoveEvent((QsciScintillaBase*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QMoveEvent* event ```
void q_sciscintillabase_qbase_move_event(void* self, void* event) {
    QsciScintillaBase_QBaseMoveEvent((QsciScintillaBase*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QMoveEvent*) ```
void q_sciscintillabase_on_move_event(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnMoveEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self, QCloseEvent* event ```
void q_sciscintillabase_close_event(void* self, void* event) {
    QsciScintillaBase_CloseEvent((QsciScintillaBase*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QCloseEvent* event ```
void q_sciscintillabase_qbase_close_event(void* self, void* event) {
    QsciScintillaBase_QBaseCloseEvent((QsciScintillaBase*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QCloseEvent*) ```
void q_sciscintillabase_on_close_event(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnCloseEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self, QTabletEvent* event ```
void q_sciscintillabase_tablet_event(void* self, void* event) {
    QsciScintillaBase_TabletEvent((QsciScintillaBase*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QTabletEvent* event ```
void q_sciscintillabase_qbase_tablet_event(void* self, void* event) {
    QsciScintillaBase_QBaseTabletEvent((QsciScintillaBase*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QTabletEvent*) ```
void q_sciscintillabase_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnTabletEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self, QActionEvent* event ```
void q_sciscintillabase_action_event(void* self, void* event) {
    QsciScintillaBase_ActionEvent((QsciScintillaBase*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QActionEvent* event ```
void q_sciscintillabase_qbase_action_event(void* self, void* event) {
    QsciScintillaBase_QBaseActionEvent((QsciScintillaBase*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QActionEvent*) ```
void q_sciscintillabase_on_action_event(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnActionEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self, QShowEvent* event ```
void q_sciscintillabase_show_event(void* self, void* event) {
    QsciScintillaBase_ShowEvent((QsciScintillaBase*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QShowEvent* event ```
void q_sciscintillabase_qbase_show_event(void* self, void* event) {
    QsciScintillaBase_QBaseShowEvent((QsciScintillaBase*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QShowEvent*) ```
void q_sciscintillabase_on_show_event(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnShowEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self, QHideEvent* event ```
void q_sciscintillabase_hide_event(void* self, void* event) {
    QsciScintillaBase_HideEvent((QsciScintillaBase*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QHideEvent* event ```
void q_sciscintillabase_qbase_hide_event(void* self, void* event) {
    QsciScintillaBase_QBaseHideEvent((QsciScintillaBase*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QHideEvent*) ```
void q_sciscintillabase_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnHideEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self, const char* eventType, void* message, intptr_t* result ```
bool q_sciscintillabase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QsciScintillaBase_NativeEvent((QsciScintillaBase*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self, const char* eventType, void* message, intptr_t* result ```
bool q_sciscintillabase_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QsciScintillaBase_QBaseNativeEvent((QsciScintillaBase*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, bool (*slot)(QsciScintillaBase*, const char*, void*, intptr_t*) ```
void q_sciscintillabase_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QsciScintillaBase_OnNativeEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_sciscintillabase_metric(void* self, int64_t param1) {
    return QsciScintillaBase_Metric((QsciScintillaBase*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_sciscintillabase_qbase_metric(void* self, int64_t param1) {
    return QsciScintillaBase_QBaseMetric((QsciScintillaBase*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, int32_t (*slot)(QsciScintillaBase*, enum QPaintDevice__PaintDeviceMetric) ```
void q_sciscintillabase_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QsciScintillaBase_OnMetric((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self, QPainter* painter ```
void q_sciscintillabase_init_painter(void* self, void* painter) {
    QsciScintillaBase_InitPainter((QsciScintillaBase*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QPainter* painter ```
void q_sciscintillabase_qbase_init_painter(void* self, void* painter) {
    QsciScintillaBase_QBaseInitPainter((QsciScintillaBase*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QPainter*) ```
void q_sciscintillabase_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnInitPainter((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self, QPoint* offset ```
QPaintDevice* q_sciscintillabase_redirected(void* self, void* offset) {
    return QsciScintillaBase_Redirected((QsciScintillaBase*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QPoint* offset ```
QPaintDevice* q_sciscintillabase_qbase_redirected(void* self, void* offset) {
    return QsciScintillaBase_QBaseRedirected((QsciScintillaBase*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QPaintDevice* (*slot)(QsciScintillaBase*, QPoint*) ```
void q_sciscintillabase_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QsciScintillaBase_OnRedirected((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self ```
QPainter* q_sciscintillabase_shared_painter(void* self) {
    return QsciScintillaBase_SharedPainter((QsciScintillaBase*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self ```
QPainter* q_sciscintillabase_qbase_shared_painter(void* self) {
    return QsciScintillaBase_QBaseSharedPainter((QsciScintillaBase*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QPainter* (*slot)() ```
void q_sciscintillabase_on_shared_painter(void* self, QPainter* (*slot)()) {
    QsciScintillaBase_OnSharedPainter((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self, QTimerEvent* event ```
void q_sciscintillabase_timer_event(void* self, void* event) {
    QsciScintillaBase_TimerEvent((QsciScintillaBase*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QTimerEvent* event ```
void q_sciscintillabase_qbase_timer_event(void* self, void* event) {
    QsciScintillaBase_QBaseTimerEvent((QsciScintillaBase*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QTimerEvent*) ```
void q_sciscintillabase_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnTimerEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self, QChildEvent* event ```
void q_sciscintillabase_child_event(void* self, void* event) {
    QsciScintillaBase_ChildEvent((QsciScintillaBase*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QChildEvent* event ```
void q_sciscintillabase_qbase_child_event(void* self, void* event) {
    QsciScintillaBase_QBaseChildEvent((QsciScintillaBase*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QChildEvent*) ```
void q_sciscintillabase_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnChildEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self, QEvent* event ```
void q_sciscintillabase_custom_event(void* self, void* event) {
    QsciScintillaBase_CustomEvent((QsciScintillaBase*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QEvent* event ```
void q_sciscintillabase_qbase_custom_event(void* self, void* event) {
    QsciScintillaBase_QBaseCustomEvent((QsciScintillaBase*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QEvent*) ```
void q_sciscintillabase_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnCustomEvent((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self, QMetaMethod* signal ```
void q_sciscintillabase_connect_notify(void* self, void* signal) {
    QsciScintillaBase_ConnectNotify((QsciScintillaBase*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QMetaMethod* signal ```
void q_sciscintillabase_qbase_connect_notify(void* self, void* signal) {
    QsciScintillaBase_QBaseConnectNotify((QsciScintillaBase*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QMetaMethod*) ```
void q_sciscintillabase_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnConnectNotify((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self, QMetaMethod* signal ```
void q_sciscintillabase_disconnect_notify(void* self, void* signal) {
    QsciScintillaBase_DisconnectNotify((QsciScintillaBase*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QMetaMethod* signal ```
void q_sciscintillabase_qbase_disconnect_notify(void* self, void* signal) {
    QsciScintillaBase_QBaseDisconnectNotify((QsciScintillaBase*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QMetaMethod*) ```
void q_sciscintillabase_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnDisconnectNotify((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self, int left, int top, int right, int bottom ```
void q_sciscintillabase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QsciScintillaBase_SetViewportMargins((QsciScintillaBase*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self, int left, int top, int right, int bottom ```
void q_sciscintillabase_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QsciScintillaBase_QBaseSetViewportMargins((QsciScintillaBase*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, int, int, int, int) ```
void q_sciscintillabase_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int)) {
    QsciScintillaBase_OnSetViewportMargins((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self ```
QMargins* q_sciscintillabase_viewport_margins(void* self) {
    return QsciScintillaBase_ViewportMargins((QsciScintillaBase*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self ```
QMargins* q_sciscintillabase_qbase_viewport_margins(void* self) {
    return QsciScintillaBase_QBaseViewportMargins((QsciScintillaBase*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QMargins* (*slot)() ```
void q_sciscintillabase_on_viewport_margins(void* self, QMargins* (*slot)()) {
    QsciScintillaBase_OnViewportMargins((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self, QPainter* param1 ```
void q_sciscintillabase_draw_frame(void* self, void* param1) {
    QsciScintillaBase_DrawFrame((QsciScintillaBase*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QPainter* param1 ```
void q_sciscintillabase_qbase_draw_frame(void* self, void* param1) {
    QsciScintillaBase_QBaseDrawFrame((QsciScintillaBase*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, void (*slot)(QsciScintillaBase*, QPainter*) ```
void q_sciscintillabase_on_draw_frame(void* self, void (*slot)(void*, void*)) {
    QsciScintillaBase_OnDrawFrame((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_update_micro_focus(void* self) {
    QsciScintillaBase_UpdateMicroFocus((QsciScintillaBase*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_qbase_update_micro_focus(void* self) {
    QsciScintillaBase_QBaseUpdateMicroFocus((QsciScintillaBase*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, void (*slot)() ```
void q_sciscintillabase_on_update_micro_focus(void* self, void (*slot)()) {
    QsciScintillaBase_OnUpdateMicroFocus((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_create(void* self) {
    QsciScintillaBase_Create((QsciScintillaBase*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_qbase_create(void* self) {
    QsciScintillaBase_QBaseCreate((QsciScintillaBase*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, void (*slot)() ```
void q_sciscintillabase_on_create(void* self, void (*slot)()) {
    QsciScintillaBase_OnCreate((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_destroy(void* self) {
    QsciScintillaBase_Destroy((QsciScintillaBase*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_qbase_destroy(void* self) {
    QsciScintillaBase_QBaseDestroy((QsciScintillaBase*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, void (*slot)() ```
void q_sciscintillabase_on_destroy(void* self, void (*slot)()) {
    QsciScintillaBase_OnDestroy((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_focus_next_child(void* self) {
    return QsciScintillaBase_FocusNextChild((QsciScintillaBase*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_qbase_focus_next_child(void* self) {
    return QsciScintillaBase_QBaseFocusNextChild((QsciScintillaBase*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, bool (*slot)() ```
void q_sciscintillabase_on_focus_next_child(void* self, bool (*slot)()) {
    QsciScintillaBase_OnFocusNextChild((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_focus_previous_child(void* self) {
    return QsciScintillaBase_FocusPreviousChild((QsciScintillaBase*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self ```
bool q_sciscintillabase_qbase_focus_previous_child(void* self) {
    return QsciScintillaBase_QBaseFocusPreviousChild((QsciScintillaBase*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, bool (*slot)() ```
void q_sciscintillabase_on_focus_previous_child(void* self, bool (*slot)()) {
    QsciScintillaBase_OnFocusPreviousChild((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self ```
QObject* q_sciscintillabase_sender(void* self) {
    return QsciScintillaBase_Sender((QsciScintillaBase*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self ```
QObject* q_sciscintillabase_qbase_sender(void* self) {
    return QsciScintillaBase_QBaseSender((QsciScintillaBase*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QObject* (*slot)() ```
void q_sciscintillabase_on_sender(void* self, QObject* (*slot)()) {
    QsciScintillaBase_OnSender((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self ```
int32_t q_sciscintillabase_sender_signal_index(void* self) {
    return QsciScintillaBase_SenderSignalIndex((QsciScintillaBase*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self ```
int32_t q_sciscintillabase_qbase_sender_signal_index(void* self) {
    return QsciScintillaBase_QBaseSenderSignalIndex((QsciScintillaBase*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, int32_t (*slot)() ```
void q_sciscintillabase_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciScintillaBase_OnSenderSignalIndex((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self, const char* signal ```
int32_t q_sciscintillabase_receivers(void* self, const char* signal) {
    return QsciScintillaBase_Receivers((QsciScintillaBase*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self, const char* signal ```
int32_t q_sciscintillabase_qbase_receivers(void* self, const char* signal) {
    return QsciScintillaBase_QBaseReceivers((QsciScintillaBase*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, int32_t (*slot)(QsciScintillaBase*, const char*) ```
void q_sciscintillabase_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciScintillaBase_OnReceivers((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintillaBase* self, QMetaMethod* signal ```
bool q_sciscintillabase_is_signal_connected(void* self, void* signal) {
    return QsciScintillaBase_IsSignalConnected((QsciScintillaBase*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintillaBase* self, QMetaMethod* signal ```
bool q_sciscintillabase_qbase_is_signal_connected(void* self, void* signal) {
    return QsciScintillaBase_QBaseIsSignalConnected((QsciScintillaBase*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintillaBase* self, bool (*slot)(QsciScintillaBase*, QMetaMethod*) ```
void q_sciscintillabase_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciScintillaBase_OnIsSignalConnected((QsciScintillaBase*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciScintillaBase* self ```
void q_sciscintillabase_delete(void* self) {
    QsciScintillaBase_Delete((QsciScintillaBase*)(self));
}