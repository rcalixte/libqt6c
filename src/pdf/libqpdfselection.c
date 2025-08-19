#include "../libqrect.hpp"
#include "libqpdfselection.hpp"
#include "libqpdfselection.h"

QPdfSelection* q_pdfselection_new(void* other) {
    return QPdfSelection_new((QPdfSelection*)other);
}

void q_pdfselection_operator_assign(void* self, void* other) {
    QPdfSelection_OperatorAssign((QPdfSelection*)self, (QPdfSelection*)other);
}

void q_pdfselection_swap(void* self, void* other) {
    QPdfSelection_Swap((QPdfSelection*)self, (QPdfSelection*)other);
}

bool q_pdfselection_is_valid(void* self) {
    return QPdfSelection_IsValid((QPdfSelection*)self);
}

const char* q_pdfselection_text(void* self) {
    libqt_string _str = QPdfSelection_Text((QPdfSelection*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QRectF* q_pdfselection_bounding_rectangle(void* self) {
    return QPdfSelection_BoundingRectangle((QPdfSelection*)self);
}

int32_t q_pdfselection_start_index(void* self) {
    return QPdfSelection_StartIndex((QPdfSelection*)self);
}

int32_t q_pdfselection_end_index(void* self) {
    return QPdfSelection_EndIndex((QPdfSelection*)self);
}

void q_pdfselection_copy_to_clipboard(void* self) {
    QPdfSelection_CopyToClipboard((QPdfSelection*)self);
}

void q_pdfselection_copy_to_clipboard1(void* self, int32_t mode) {
    QPdfSelection_CopyToClipboard1((QPdfSelection*)self, mode);
}

void q_pdfselection_delete(void* self) {
    QPdfSelection_Delete((QPdfSelection*)(self));
}
