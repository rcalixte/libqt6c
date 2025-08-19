#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "../libqurl.hpp"
#include "libqpdflink.hpp"
#include "libqpdflink.h"

QPdfLink* q_pdflink_new() {
    return QPdfLink_new();
}

QPdfLink* q_pdflink_new2(void* other) {
    return QPdfLink_new2((QPdfLink*)other);
}

void q_pdflink_operator_assign(void* self, void* other) {
    QPdfLink_OperatorAssign((QPdfLink*)self, (QPdfLink*)other);
}

void q_pdflink_swap(void* self, void* other) {
    QPdfLink_Swap((QPdfLink*)self, (QPdfLink*)other);
}

bool q_pdflink_is_valid(void* self) {
    return QPdfLink_IsValid((QPdfLink*)self);
}

int32_t q_pdflink_page(void* self) {
    return QPdfLink_Page((QPdfLink*)self);
}

QPointF* q_pdflink_location(void* self) {
    return QPdfLink_Location((QPdfLink*)self);
}

double q_pdflink_zoom(void* self) {
    return QPdfLink_Zoom((QPdfLink*)self);
}

QUrl* q_pdflink_url(void* self) {
    return QPdfLink_Url((QPdfLink*)self);
}

const char* q_pdflink_context_before(void* self) {
    libqt_string _str = QPdfLink_ContextBefore((QPdfLink*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pdflink_context_after(void* self) {
    libqt_string _str = QPdfLink_ContextAfter((QPdfLink*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QRectF* */ q_pdflink_rectangles(void* self) {
    libqt_list _arr = QPdfLink_Rectangles((QPdfLink*)self);
    return _arr;
}

const char* q_pdflink_to_string(void* self) {
    libqt_string _str = QPdfLink_ToString((QPdfLink*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdflink_copy_to_clipboard(void* self) {
    QPdfLink_CopyToClipboard((QPdfLink*)self);
}

void q_pdflink_copy_to_clipboard1(void* self, int32_t mode) {
    QPdfLink_CopyToClipboard1((QPdfLink*)self, mode);
}

void q_pdflink_delete(void* self) {
    QPdfLink_Delete((QPdfLink*)(self));
}
