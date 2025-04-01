#include "libqfont.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqtextoption.hpp"
#include "libqtransform.hpp"
#include "libqstatictext.hpp"
#include "libqstatictext.h"

QStaticText* q_statictext_new() {
    return QStaticText_new();
}

QStaticText* q_statictext_new2(const char* text) {
    return QStaticText_new2(qstring(text));
}

QStaticText* q_statictext_new3(void* other) {
    return QStaticText_new3((QStaticText*)other);
}

void q_statictext_operator_assign(void* self, void* param1) {
    QStaticText_OperatorAssign((QStaticText*)self, (QStaticText*)param1);
}

void q_statictext_swap(void* self, void* other) {
    QStaticText_Swap((QStaticText*)self, (QStaticText*)other);
}

void q_statictext_set_text(void* self, const char* text) {
    QStaticText_SetText((QStaticText*)self, qstring(text));
}

const char* q_statictext_text(void* self) {
    libqt_string _str = QStaticText_Text((QStaticText*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_statictext_set_text_format(void* self, int64_t textFormat) {
    QStaticText_SetTextFormat((QStaticText*)self, textFormat);
}

int64_t q_statictext_text_format(void* self) {
    return QStaticText_TextFormat((QStaticText*)self);
}

void q_statictext_set_text_width(void* self, double textWidth) {
    QStaticText_SetTextWidth((QStaticText*)self, textWidth);
}

double q_statictext_text_width(void* self) {
    return QStaticText_TextWidth((QStaticText*)self);
}

void q_statictext_set_text_option(void* self, void* textOption) {
    QStaticText_SetTextOption((QStaticText*)self, (QTextOption*)textOption);
}

QTextOption* q_statictext_text_option(void* self) {
    return QStaticText_TextOption((QStaticText*)self);
}

QSizeF* q_statictext_size(void* self) {
    return QStaticText_Size((QStaticText*)self);
}

void q_statictext_prepare(void* self) {
    QStaticText_Prepare((QStaticText*)self);
}

void q_statictext_set_performance_hint(void* self, int64_t performanceHint) {
    QStaticText_SetPerformanceHint((QStaticText*)self, performanceHint);
}

int64_t q_statictext_performance_hint(void* self) {
    return QStaticText_PerformanceHint((QStaticText*)self);
}

bool q_statictext_operator_equal(void* self, void* param1) {
    return QStaticText_OperatorEqual((QStaticText*)self, (QStaticText*)param1);
}

bool q_statictext_operator_not_equal(void* self, void* param1) {
    return QStaticText_OperatorNotEqual((QStaticText*)self, (QStaticText*)param1);
}

void q_statictext_prepare1(void* self, void* matrix) {
    QStaticText_Prepare1((QStaticText*)self, (QTransform*)matrix);
}

void q_statictext_prepare2(void* self, void* matrix, void* font) {
    QStaticText_Prepare2((QStaticText*)self, (QTransform*)matrix, (QFont*)font);
}

void q_statictext_delete(void* self) {
    QStaticText_Delete((QStaticText*)(self));
}
