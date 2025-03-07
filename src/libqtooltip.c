#include "libqfont.hpp"
#include "libqpalette.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include <string.h>
#include "libqwidget.hpp"
#include "libqtooltip.hpp"
#include "libqtooltip.h"

/// https://doc.qt.io/qt-6/qtooltip.html

/// q_tooltip_new constructs a new QToolTip object.
///
/// ``` QToolTip* other ```
QToolTip* q_tooltip_new(void* other) {
    return QToolTip_new((QToolTip*)other);
}

/// q_tooltip_new2 constructs a new QToolTip object and invalidates the source QToolTip object.
///
/// ``` QToolTip* other ```
QToolTip* q_tooltip_new2(void* other) {
    return QToolTip_new2((QToolTip*)other);
}

/// q_tooltip_copy_assign shallow copies `other` into `self`.
///
/// ``` QToolTip* self, QToolTip* other ```
void q_tooltip_copy_assign(void* self, void* other) {
    QToolTip_CopyAssign((QToolTip*)self, (QToolTip*)other);
}

/// q_tooltip_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QToolTip* self, QToolTip* other ```
void q_tooltip_move_assign(void* self, void* other) {
    QToolTip_MoveAssign((QToolTip*)self, (QToolTip*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#showText)
///
/// ``` QPoint* pos, const char* text ```
void q_tooltip_show_text(void* pos, const char* text) {
    QToolTip_ShowText((QPoint*)pos, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#hideText)
///
///
void q_tooltip_hide_text() {
    QToolTip_HideText();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#isVisible)
///
///
bool q_tooltip_is_visible() {
    return QToolTip_IsVisible();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#text)
///
///
const char* q_tooltip_text() {
    libqt_string _str = QToolTip_Text();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#palette)
///
///
QPalette* q_tooltip_palette() {
    return QToolTip_Palette();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#setPalette)
///
/// ``` QPalette* palette ```
void q_tooltip_set_palette(void* palette) {
    QToolTip_SetPalette((QPalette*)palette);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#font)
///
///
QFont* q_tooltip_font() {
    return QToolTip_Font();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#setFont)
///
/// ``` QFont* font ```
void q_tooltip_set_font(void* font) {
    QToolTip_SetFont((QFont*)font);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#showText)
///
/// ``` QPoint* pos, const char* text, QWidget* w ```
void q_tooltip_show_text3(void* pos, const char* text, void* w) {
    QToolTip_ShowText3((QPoint*)pos, qstring(text), (QWidget*)w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#showText)
///
/// ``` QPoint* pos, const char* text, QWidget* w, QRect* rect ```
void q_tooltip_show_text4(void* pos, const char* text, void* w, void* rect) {
    QToolTip_ShowText4((QPoint*)pos, qstring(text), (QWidget*)w, (QRect*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#showText)
///
/// ``` QPoint* pos, const char* text, QWidget* w, QRect* rect, int msecShowTime ```
void q_tooltip_show_text5(void* pos, const char* text, void* w, void* rect, int msecShowTime) {
    QToolTip_ShowText5((QPoint*)pos, qstring(text), (QWidget*)w, (QRect*)rect, msecShowTime);
}

/// Delete this object from C++ memory.
///
/// ``` QToolTip* self ```
void q_tooltip_delete(void* self) {
    QToolTip_Delete((QToolTip*)(self));
}