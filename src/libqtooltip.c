#include "libqfont.hpp"
#include "libqpalette.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqwidget.hpp"
#include "libqtooltip.hpp"
#include "libqtooltip.h"

QToolTip* q_tooltip_new(void* other) {
    return QToolTip_new((QToolTip*)other);
}

QToolTip* q_tooltip_new2(void* other) {
    return QToolTip_new2((QToolTip*)other);
}

void q_tooltip_copy_assign(void* self, void* other) {
    QToolTip_CopyAssign((QToolTip*)self, (QToolTip*)other);
}

void q_tooltip_move_assign(void* self, void* other) {
    QToolTip_MoveAssign((QToolTip*)self, (QToolTip*)other);
}

void q_tooltip_show_text(void* pos, const char* text) {
    QToolTip_ShowText((QPoint*)pos, qstring(text));
}

void q_tooltip_hide_text() {
    QToolTip_HideText();
}

bool q_tooltip_is_visible() {
    return QToolTip_IsVisible();
}

const char* q_tooltip_text() {
    libqt_string _str = QToolTip_Text();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QPalette* q_tooltip_palette() {
    return QToolTip_Palette();
}

void q_tooltip_set_palette(void* palette) {
    QToolTip_SetPalette((QPalette*)palette);
}

QFont* q_tooltip_font() {
    return QToolTip_Font();
}

void q_tooltip_set_font(void* font) {
    QToolTip_SetFont((QFont*)font);
}

void q_tooltip_show_text3(void* pos, const char* text, void* w) {
    QToolTip_ShowText3((QPoint*)pos, qstring(text), (QWidget*)w);
}

void q_tooltip_show_text4(void* pos, const char* text, void* w, void* rect) {
    QToolTip_ShowText4((QPoint*)pos, qstring(text), (QWidget*)w, (QRect*)rect);
}

void q_tooltip_show_text5(void* pos, const char* text, void* w, void* rect, int msecShowTime) {
    QToolTip_ShowText5((QPoint*)pos, qstring(text), (QWidget*)w, (QRect*)rect, msecShowTime);
}

void q_tooltip_delete(void* self) {
    QToolTip_Delete((QToolTip*)(self));
}
