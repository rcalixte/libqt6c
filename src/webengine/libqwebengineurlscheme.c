#include "libqwebengineurlscheme.hpp"
#include "libqwebengineurlscheme.h"

QWebEngineUrlScheme* q_webengineurlscheme_new() {
    return QWebEngineUrlScheme_new();
}

QWebEngineUrlScheme* q_webengineurlscheme_new2(char* name) {
    return QWebEngineUrlScheme_new2(qstring(name));
}

QWebEngineUrlScheme* q_webengineurlscheme_new3(void* that) {
    return QWebEngineUrlScheme_new3((QWebEngineUrlScheme*)that);
}

void q_webengineurlscheme_operator_assign(void* self, void* that) {
    QWebEngineUrlScheme_OperatorAssign((QWebEngineUrlScheme*)self, (QWebEngineUrlScheme*)that);
}

bool q_webengineurlscheme_operator_equal(void* self, void* that) {
    return QWebEngineUrlScheme_OperatorEqual((QWebEngineUrlScheme*)self, (QWebEngineUrlScheme*)that);
}

bool q_webengineurlscheme_operator_not_equal(void* self, void* that) {
    return QWebEngineUrlScheme_OperatorNotEqual((QWebEngineUrlScheme*)self, (QWebEngineUrlScheme*)that);
}

char* q_webengineurlscheme_name(void* self) {
    libqt_string _str = QWebEngineUrlScheme_Name((QWebEngineUrlScheme*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webengineurlscheme_set_name(void* self, char* newValue) {
    QWebEngineUrlScheme_SetName((QWebEngineUrlScheme*)self, qstring(newValue));
}

int32_t q_webengineurlscheme_syntax(void* self) {
    return QWebEngineUrlScheme_Syntax((QWebEngineUrlScheme*)self);
}

void q_webengineurlscheme_set_syntax(void* self, int32_t newValue) {
    QWebEngineUrlScheme_SetSyntax((QWebEngineUrlScheme*)self, newValue);
}

int32_t q_webengineurlscheme_default_port(void* self) {
    return QWebEngineUrlScheme_DefaultPort((QWebEngineUrlScheme*)self);
}

void q_webengineurlscheme_set_default_port(void* self, int newValue) {
    QWebEngineUrlScheme_SetDefaultPort((QWebEngineUrlScheme*)self, newValue);
}

int32_t q_webengineurlscheme_flags(void* self) {
    return QWebEngineUrlScheme_Flags((QWebEngineUrlScheme*)self);
}

void q_webengineurlscheme_set_flags(void* self, int32_t newValue) {
    QWebEngineUrlScheme_SetFlags((QWebEngineUrlScheme*)self, newValue);
}

void q_webengineurlscheme_register_scheme(void* scheme) {
    QWebEngineUrlScheme_RegisterScheme((QWebEngineUrlScheme*)scheme);
}

QWebEngineUrlScheme* q_webengineurlscheme_scheme_by_name(char* name) {
    return QWebEngineUrlScheme_SchemeByName(qstring(name));
}

void q_webengineurlscheme_delete(void* self) {
    QWebEngineUrlScheme_Delete((QWebEngineUrlScheme*)(self));
}
