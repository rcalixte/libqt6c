#include "libqcolorspace.hpp"
#include "libqurl.hpp"
#include "libqpdfoutputintent.hpp"
#include "libqpdfoutputintent.h"

QPdfOutputIntent* q_pdfoutputintent_new() {
    return QPdfOutputIntent_new();
}

QPdfOutputIntent* q_pdfoutputintent_new2(void* other) {
    return QPdfOutputIntent_new2((QPdfOutputIntent*)other);
}

void q_pdfoutputintent_operator_assign(void* self, void* other) {
    QPdfOutputIntent_OperatorAssign((QPdfOutputIntent*)self, (QPdfOutputIntent*)other);
}

void q_pdfoutputintent_swap(void* self, void* other) {
    QPdfOutputIntent_Swap((QPdfOutputIntent*)self, (QPdfOutputIntent*)other);
}

const char* q_pdfoutputintent_output_condition_identifier(void* self) {
    libqt_string _str = QPdfOutputIntent_OutputConditionIdentifier((QPdfOutputIntent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfoutputintent_set_output_condition_identifier(void* self, const char* identifier) {
    QPdfOutputIntent_SetOutputConditionIdentifier((QPdfOutputIntent*)self, qstring(identifier));
}

const char* q_pdfoutputintent_output_condition(void* self) {
    libqt_string _str = QPdfOutputIntent_OutputCondition((QPdfOutputIntent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfoutputintent_set_output_condition(void* self, const char* condition) {
    QPdfOutputIntent_SetOutputCondition((QPdfOutputIntent*)self, qstring(condition));
}

QUrl* q_pdfoutputintent_registry_name(void* self) {
    return QPdfOutputIntent_RegistryName((QPdfOutputIntent*)self);
}

void q_pdfoutputintent_set_registry_name(void* self, void* name) {
    QPdfOutputIntent_SetRegistryName((QPdfOutputIntent*)self, (QUrl*)name);
}

QColorSpace* q_pdfoutputintent_output_profile(void* self) {
    return QPdfOutputIntent_OutputProfile((QPdfOutputIntent*)self);
}

void q_pdfoutputintent_set_output_profile(void* self, void* profile) {
    QPdfOutputIntent_SetOutputProfile((QPdfOutputIntent*)self, (QColorSpace*)profile);
}

void q_pdfoutputintent_delete(void* self) {
    QPdfOutputIntent_Delete((QPdfOutputIntent*)(self));
}
