#include "libqwebengineurlscheme.hpp"
#include "libqwebengineurlscheme.h"

/// https://doc.qt.io/qt-6/qwebengineurlscheme.html

/// q_webengineurlscheme_new constructs a new QWebEngineUrlScheme object.
///
///
QWebEngineUrlScheme* q_webengineurlscheme_new() {
    return QWebEngineUrlScheme_new();
}

/// q_webengineurlscheme_new2 constructs a new QWebEngineUrlScheme object.
///
/// ``` const char* name ```
QWebEngineUrlScheme* q_webengineurlscheme_new2(const char* name) {
    return QWebEngineUrlScheme_new2(qstring(name));
}

/// q_webengineurlscheme_new3 constructs a new QWebEngineUrlScheme object.
///
/// ``` QWebEngineUrlScheme* that ```
QWebEngineUrlScheme* q_webengineurlscheme_new3(void* that) {
    return QWebEngineUrlScheme_new3((QWebEngineUrlScheme*)that);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlscheme.html#operator=)
///
/// ``` QWebEngineUrlScheme* self, QWebEngineUrlScheme* that ```
void q_webengineurlscheme_operator_assign(void* self, void* that) {
    QWebEngineUrlScheme_OperatorAssign((QWebEngineUrlScheme*)self, (QWebEngineUrlScheme*)that);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlscheme.html#operator==)
///
/// ``` QWebEngineUrlScheme* self, QWebEngineUrlScheme* that ```
bool q_webengineurlscheme_operator_equal(void* self, void* that) {
    return QWebEngineUrlScheme_OperatorEqual((QWebEngineUrlScheme*)self, (QWebEngineUrlScheme*)that);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlscheme.html#operator!=)
///
/// ``` QWebEngineUrlScheme* self, QWebEngineUrlScheme* that ```
bool q_webengineurlscheme_operator_not_equal(void* self, void* that) {
    return QWebEngineUrlScheme_OperatorNotEqual((QWebEngineUrlScheme*)self, (QWebEngineUrlScheme*)that);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlscheme.html#name)
///
/// ``` QWebEngineUrlScheme* self ```
char* q_webengineurlscheme_name(void* self) {
    libqt_string _str = QWebEngineUrlScheme_Name((QWebEngineUrlScheme*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlscheme.html#setName)
///
/// ``` QWebEngineUrlScheme* self, const char* newValue ```
void q_webengineurlscheme_set_name(void* self, const char* newValue) {
    QWebEngineUrlScheme_SetName((QWebEngineUrlScheme*)self, qstring(newValue));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlscheme.html#syntax)
///
/// ``` QWebEngineUrlScheme* self ```
int64_t q_webengineurlscheme_syntax(void* self) {
    return QWebEngineUrlScheme_Syntax((QWebEngineUrlScheme*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlscheme.html#setSyntax)
///
/// ``` QWebEngineUrlScheme* self, enum QWebEngineUrlScheme__Syntax newValue ```
void q_webengineurlscheme_set_syntax(void* self, int64_t newValue) {
    QWebEngineUrlScheme_SetSyntax((QWebEngineUrlScheme*)self, newValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlscheme.html#defaultPort)
///
/// ``` QWebEngineUrlScheme* self ```
int32_t q_webengineurlscheme_default_port(void* self) {
    return QWebEngineUrlScheme_DefaultPort((QWebEngineUrlScheme*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlscheme.html#setDefaultPort)
///
/// ``` QWebEngineUrlScheme* self, int newValue ```
void q_webengineurlscheme_set_default_port(void* self, int newValue) {
    QWebEngineUrlScheme_SetDefaultPort((QWebEngineUrlScheme*)self, newValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlscheme.html#flags)
///
/// ``` QWebEngineUrlScheme* self ```
int64_t q_webengineurlscheme_flags(void* self) {
    return QWebEngineUrlScheme_Flags((QWebEngineUrlScheme*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlscheme.html#setFlags)
///
/// ``` QWebEngineUrlScheme* self, int newValue ```
void q_webengineurlscheme_set_flags(void* self, int64_t newValue) {
    QWebEngineUrlScheme_SetFlags((QWebEngineUrlScheme*)self, newValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlscheme.html#registerScheme)
///
/// ``` QWebEngineUrlScheme* scheme ```
void q_webengineurlscheme_register_scheme(void* scheme) {
    QWebEngineUrlScheme_RegisterScheme((QWebEngineUrlScheme*)scheme);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlscheme.html#schemeByName)
///
/// ``` const char* name ```
QWebEngineUrlScheme* q_webengineurlscheme_scheme_by_name(const char* name) {
    return QWebEngineUrlScheme_SchemeByName(qstring(name));
}

/// Delete this object from C++ memory.
///
/// ``` QWebEngineUrlScheme* self ```
void q_webengineurlscheme_delete(void* self) {
    QWebEngineUrlScheme_Delete((QWebEngineUrlScheme*)(self));
}