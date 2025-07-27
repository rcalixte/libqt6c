#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "libqsciscintillabase.hpp"
#include "libqscistyle.hpp"
#include "libqscistyle.h"

QsciStyle* q_scistyle_new() {
    return QsciStyle_new();
}

QsciStyle* q_scistyle_new2(int style, const char* description, void* color, void* paper, void* font) {
    return QsciStyle_new2(style, qstring(description), (QColor*)color, (QColor*)paper, (QFont*)font);
}

QsciStyle* q_scistyle_new3(void* param1) {
    return QsciStyle_new3((QsciStyle*)param1);
}

QsciStyle* q_scistyle_new4(int style) {
    return QsciStyle_new4(style);
}

QsciStyle* q_scistyle_new5(int style, const char* description, void* color, void* paper, void* font, bool eolFill) {
    return QsciStyle_new5(style, qstring(description), (QColor*)color, (QColor*)paper, (QFont*)font, eolFill);
}

void q_scistyle_apply(void* self, void* sci) {
    QsciStyle_Apply((QsciStyle*)self, (QsciScintillaBase*)sci);
}

void q_scistyle_set_style(void* self, int style) {
    QsciStyle_SetStyle((QsciStyle*)self, style);
}

int32_t q_scistyle_style(void* self) {
    return QsciStyle_Style((QsciStyle*)self);
}

void q_scistyle_set_description(void* self, const char* description) {
    QsciStyle_SetDescription((QsciStyle*)self, qstring(description));
}

const char* q_scistyle_description(void* self) {
    libqt_string _str = QsciStyle_Description((QsciStyle*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scistyle_set_color(void* self, void* color) {
    QsciStyle_SetColor((QsciStyle*)self, (QColor*)color);
}

QColor* q_scistyle_color(void* self) {
    return QsciStyle_Color((QsciStyle*)self);
}

void q_scistyle_set_paper(void* self, void* paper) {
    QsciStyle_SetPaper((QsciStyle*)self, (QColor*)paper);
}

QColor* q_scistyle_paper(void* self) {
    return QsciStyle_Paper((QsciStyle*)self);
}

void q_scistyle_set_font(void* self, void* font) {
    QsciStyle_SetFont((QsciStyle*)self, (QFont*)font);
}

QFont* q_scistyle_font(void* self) {
    return QsciStyle_Font((QsciStyle*)self);
}

void q_scistyle_set_eol_fill(void* self, bool fill) {
    QsciStyle_SetEolFill((QsciStyle*)self, fill);
}

bool q_scistyle_eol_fill(void* self) {
    return QsciStyle_EolFill((QsciStyle*)self);
}

void q_scistyle_set_text_case(void* self, int64_t text_case) {
    QsciStyle_SetTextCase((QsciStyle*)self, text_case);
}

int64_t q_scistyle_text_case(void* self) {
    return QsciStyle_TextCase((QsciStyle*)self);
}

void q_scistyle_set_visible(void* self, bool visible) {
    QsciStyle_SetVisible((QsciStyle*)self, visible);
}

bool q_scistyle_visible(void* self) {
    return QsciStyle_Visible((QsciStyle*)self);
}

void q_scistyle_set_changeable(void* self, bool changeable) {
    QsciStyle_SetChangeable((QsciStyle*)self, changeable);
}

bool q_scistyle_changeable(void* self) {
    return QsciStyle_Changeable((QsciStyle*)self);
}

void q_scistyle_set_hotspot(void* self, bool hotspot) {
    QsciStyle_SetHotspot((QsciStyle*)self, hotspot);
}

bool q_scistyle_hotspot(void* self) {
    return QsciStyle_Hotspot((QsciStyle*)self);
}

void q_scistyle_refresh(void* self) {
    QsciStyle_Refresh((QsciStyle*)self);
}

void q_scistyle_delete(void* self) {
    QsciStyle_Delete((QsciStyle*)(self));
}
