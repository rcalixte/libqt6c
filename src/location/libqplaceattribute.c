#include "libqplaceattribute.hpp"
#include "libqplaceattribute.h"

QPlaceAttribute* q_placeattribute_new() {
    return QPlaceAttribute_new();
}

QPlaceAttribute* q_placeattribute_new2(void* other) {
    return QPlaceAttribute_new2((QPlaceAttribute*)other);
}

void q_placeattribute_operator_assign(void* self, void* other) {
    QPlaceAttribute_OperatorAssign((QPlaceAttribute*)self, (QPlaceAttribute*)other);
}

void q_placeattribute_swap(void* self, void* other) {
    QPlaceAttribute_Swap((QPlaceAttribute*)self, (QPlaceAttribute*)other);
}

const char* q_placeattribute_label(void* self) {
    libqt_string _str = QPlaceAttribute_Label((QPlaceAttribute*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_placeattribute_set_label(void* self, const char* label) {
    QPlaceAttribute_SetLabel((QPlaceAttribute*)self, qstring(label));
}

const char* q_placeattribute_text(void* self) {
    libqt_string _str = QPlaceAttribute_Text((QPlaceAttribute*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_placeattribute_set_text(void* self, const char* text) {
    QPlaceAttribute_SetText((QPlaceAttribute*)self, qstring(text));
}

bool q_placeattribute_is_empty(void* self) {
    return QPlaceAttribute_IsEmpty((QPlaceAttribute*)self);
}

void q_placeattribute_delete(void* self) {
    QPlaceAttribute_Delete((QPlaceAttribute*)(self));
}
