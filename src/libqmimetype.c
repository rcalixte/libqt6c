#include <string.h>
#include "libqmimetype.hpp"
#include "libqmimetype.h"

/// https://doc.qt.io/qt-6/qmimetype.html

/// q_mimetype_new constructs a new QMimeType object.
///
///
QMimeType* q_mimetype_new() {
    return QMimeType_new();
}

/// q_mimetype_new2 constructs a new QMimeType object.
///
/// ``` QMimeType* other ```
QMimeType* q_mimetype_new2(void* other) {
    return QMimeType_new2((QMimeType*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#operator=)
///
/// ``` QMimeType* self, QMimeType* other ```
void q_mimetype_operator_assign(void* self, void* other) {
    QMimeType_OperatorAssign((QMimeType*)self, (QMimeType*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#swap)
///
/// ``` QMimeType* self, QMimeType* other ```
void q_mimetype_swap(void* self, void* other) {
    QMimeType_Swap((QMimeType*)self, (QMimeType*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#operator==)
///
/// ``` QMimeType* self, QMimeType* other ```
bool q_mimetype_operator_equal(void* self, void* other) {
    return QMimeType_OperatorEqual((QMimeType*)self, (QMimeType*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#operator!=)
///
/// ``` QMimeType* self, QMimeType* other ```
bool q_mimetype_operator_not_equal(void* self, void* other) {
    return QMimeType_OperatorNotEqual((QMimeType*)self, (QMimeType*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#isValid)
///
/// ``` QMimeType* self ```
bool q_mimetype_is_valid(void* self) {
    return QMimeType_IsValid((QMimeType*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#isDefault)
///
/// ``` QMimeType* self ```
bool q_mimetype_is_default(void* self) {
    return QMimeType_IsDefault((QMimeType*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#name)
///
/// ``` QMimeType* self ```
const char* q_mimetype_name(void* self) {
    libqt_string _str = QMimeType_Name((QMimeType*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#comment)
///
/// ``` QMimeType* self ```
const char* q_mimetype_comment(void* self) {
    libqt_string _str = QMimeType_Comment((QMimeType*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#genericIconName)
///
/// ``` QMimeType* self ```
const char* q_mimetype_generic_icon_name(void* self) {
    libqt_string _str = QMimeType_GenericIconName((QMimeType*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#iconName)
///
/// ``` QMimeType* self ```
const char* q_mimetype_icon_name(void* self) {
    libqt_string _str = QMimeType_IconName((QMimeType*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#globPatterns)
///
/// ``` QMimeType* self ```
const char** q_mimetype_glob_patterns(void* self) {
    libqt_list _arr = QMimeType_GlobPatterns((QMimeType*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#parentMimeTypes)
///
/// ``` QMimeType* self ```
const char** q_mimetype_parent_mime_types(void* self) {
    libqt_list _arr = QMimeType_ParentMimeTypes((QMimeType*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#allAncestors)
///
/// ``` QMimeType* self ```
const char** q_mimetype_all_ancestors(void* self) {
    libqt_list _arr = QMimeType_AllAncestors((QMimeType*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#aliases)
///
/// ``` QMimeType* self ```
const char** q_mimetype_aliases(void* self) {
    libqt_list _arr = QMimeType_Aliases((QMimeType*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#suffixes)
///
/// ``` QMimeType* self ```
const char** q_mimetype_suffixes(void* self) {
    libqt_list _arr = QMimeType_Suffixes((QMimeType*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#preferredSuffix)
///
/// ``` QMimeType* self ```
const char* q_mimetype_preferred_suffix(void* self) {
    libqt_string _str = QMimeType_PreferredSuffix((QMimeType*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#inherits)
///
/// ``` QMimeType* self, const char* mimeTypeName ```
bool q_mimetype_inherits(void* self, const char* mimeTypeName) {
    return QMimeType_Inherits((QMimeType*)self, qstring(mimeTypeName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#filterString)
///
/// ``` QMimeType* self ```
const char* q_mimetype_filter_string(void* self) {
    libqt_string _str = QMimeType_FilterString((QMimeType*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QMimeType* self ```
void q_mimetype_delete(void* self) {
    QMimeType_Delete((QMimeType*)(self));
}