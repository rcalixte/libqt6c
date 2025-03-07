#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include <string.h>
#include "libqscistyle.hpp"
#include "libqscistyle.h"

/// https://doc.qt.io/qt-6/qscistyle.html

/// q_scistyle_new constructs a new QsciStyle object.
///
///
QsciStyle* q_scistyle_new() {
    return QsciStyle_new();
}

/// q_scistyle_new2 constructs a new QsciStyle object.
///
/// ``` int style, const char* description, QColor* color, QColor* paper, QFont* font ```
QsciStyle* q_scistyle_new2(int style, const char* description, void* color, void* paper, void* font) {
    return QsciStyle_new2(style, qstring(description), (QColor*)color, (QColor*)paper, (QFont*)font);
}

/// q_scistyle_new3 constructs a new QsciStyle object.
///
/// ``` QsciStyle* param1 ```
QsciStyle* q_scistyle_new3(void* param1) {
    return QsciStyle_new3((QsciStyle*)param1);
}

/// q_scistyle_new4 constructs a new QsciStyle object.
///
/// ``` int style ```
QsciStyle* q_scistyle_new4(int style) {
    return QsciStyle_new4(style);
}

/// q_scistyle_new5 constructs a new QsciStyle object.
///
/// ``` int style, const char* description, QColor* color, QColor* paper, QFont* font, bool eolFill ```
QsciStyle* q_scistyle_new5(int style, const char* description, void* color, void* paper, void* font, bool eolFill) {
    return QsciStyle_new5(style, qstring(description), (QColor*)color, (QColor*)paper, (QFont*)font, eolFill);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscistyle.html#apply)
///
/// ``` QsciStyle* self, QsciScintillaBase* sci ```
void q_scistyle_apply(void* self, void* sci) {
    QsciStyle_Apply((QsciStyle*)self, (QsciScintillaBase*)sci);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscistyle.html#setStyle)
///
/// ``` QsciStyle* self, int style ```
void q_scistyle_set_style(void* self, int style) {
    QsciStyle_SetStyle((QsciStyle*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscistyle.html#style)
///
/// ``` QsciStyle* self ```
int32_t q_scistyle_style(void* self) {
    return QsciStyle_Style((QsciStyle*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscistyle.html#setDescription)
///
/// ``` QsciStyle* self, const char* description ```
void q_scistyle_set_description(void* self, const char* description) {
    QsciStyle_SetDescription((QsciStyle*)self, qstring(description));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscistyle.html#description)
///
/// ``` QsciStyle* self ```
const char* q_scistyle_description(void* self) {
    libqt_string _str = QsciStyle_Description((QsciStyle*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscistyle.html#setColor)
///
/// ``` QsciStyle* self, QColor* color ```
void q_scistyle_set_color(void* self, void* color) {
    QsciStyle_SetColor((QsciStyle*)self, (QColor*)color);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscistyle.html#color)
///
/// ``` QsciStyle* self ```
QColor* q_scistyle_color(void* self) {
    return QsciStyle_Color((QsciStyle*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscistyle.html#setPaper)
///
/// ``` QsciStyle* self, QColor* paper ```
void q_scistyle_set_paper(void* self, void* paper) {
    QsciStyle_SetPaper((QsciStyle*)self, (QColor*)paper);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscistyle.html#paper)
///
/// ``` QsciStyle* self ```
QColor* q_scistyle_paper(void* self) {
    return QsciStyle_Paper((QsciStyle*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscistyle.html#setFont)
///
/// ``` QsciStyle* self, QFont* font ```
void q_scistyle_set_font(void* self, void* font) {
    QsciStyle_SetFont((QsciStyle*)self, (QFont*)font);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscistyle.html#font)
///
/// ``` QsciStyle* self ```
QFont* q_scistyle_font(void* self) {
    return QsciStyle_Font((QsciStyle*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscistyle.html#setEolFill)
///
/// ``` QsciStyle* self, bool fill ```
void q_scistyle_set_eol_fill(void* self, bool fill) {
    QsciStyle_SetEolFill((QsciStyle*)self, fill);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscistyle.html#eolFill)
///
/// ``` QsciStyle* self ```
bool q_scistyle_eol_fill(void* self) {
    return QsciStyle_EolFill((QsciStyle*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscistyle.html#setTextCase)
///
/// ``` QsciStyle* self, enum QsciStyle__TextCase text_case ```
void q_scistyle_set_text_case(void* self, int64_t text_case) {
    QsciStyle_SetTextCase((QsciStyle*)self, text_case);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscistyle.html#textCase)
///
/// ``` QsciStyle* self ```
int64_t q_scistyle_text_case(void* self) {
    return QsciStyle_TextCase((QsciStyle*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscistyle.html#setVisible)
///
/// ``` QsciStyle* self, bool visible ```
void q_scistyle_set_visible(void* self, bool visible) {
    QsciStyle_SetVisible((QsciStyle*)self, visible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscistyle.html#visible)
///
/// ``` QsciStyle* self ```
bool q_scistyle_visible(void* self) {
    return QsciStyle_Visible((QsciStyle*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscistyle.html#setChangeable)
///
/// ``` QsciStyle* self, bool changeable ```
void q_scistyle_set_changeable(void* self, bool changeable) {
    QsciStyle_SetChangeable((QsciStyle*)self, changeable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscistyle.html#changeable)
///
/// ``` QsciStyle* self ```
bool q_scistyle_changeable(void* self) {
    return QsciStyle_Changeable((QsciStyle*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscistyle.html#setHotspot)
///
/// ``` QsciStyle* self, bool hotspot ```
void q_scistyle_set_hotspot(void* self, bool hotspot) {
    QsciStyle_SetHotspot((QsciStyle*)self, hotspot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscistyle.html#hotspot)
///
/// ``` QsciStyle* self ```
bool q_scistyle_hotspot(void* self) {
    return QsciStyle_Hotspot((QsciStyle*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscistyle.html#refresh)
///
/// ``` QsciStyle* self ```
void q_scistyle_refresh(void* self) {
    QsciStyle_Refresh((QsciStyle*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QsciStyle* self ```
void q_scistyle_delete(void* self) {
    QsciStyle_Delete((QsciStyle*)(self));
}