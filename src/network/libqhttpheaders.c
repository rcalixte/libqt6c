#include "../libqanystringview.hpp"
#include "../libqbytearrayview.hpp"
#include "libqhttpheaders.hpp"
#include "libqhttpheaders.h"

QHttpHeaders* q_httpheaders_new() {
    return QHttpHeaders_new();
}

QHttpHeaders* q_httpheaders_new2(void* other) {
    return QHttpHeaders_new2((QHttpHeaders*)other);
}

void q_httpheaders_operator_assign(void* self, void* other) {
    QHttpHeaders_OperatorAssign((QHttpHeaders*)self, (QHttpHeaders*)other);
}

void q_httpheaders_swap(void* self, void* other) {
    QHttpHeaders_Swap((QHttpHeaders*)self, (QHttpHeaders*)other);
}

bool q_httpheaders_append(void* self, char* name, char* value) {
    return QHttpHeaders_Append((QHttpHeaders*)self, name, value);
}

bool q_httpheaders_append2(void* self, int32_t name, char* value) {
    return QHttpHeaders_Append2((QHttpHeaders*)self, name, value);
}

bool q_httpheaders_insert(void* self, int64_t i, char* name, char* value) {
    return QHttpHeaders_Insert((QHttpHeaders*)self, i, name, value);
}

bool q_httpheaders_insert2(void* self, int64_t i, int32_t name, char* value) {
    return QHttpHeaders_Insert2((QHttpHeaders*)self, i, name, value);
}

bool q_httpheaders_replace(void* self, int64_t i, char* name, char* newValue) {
    return QHttpHeaders_Replace((QHttpHeaders*)self, i, name, newValue);
}

bool q_httpheaders_replace2(void* self, int64_t i, int32_t name, char* newValue) {
    return QHttpHeaders_Replace2((QHttpHeaders*)self, i, name, newValue);
}

bool q_httpheaders_replace_or_append(void* self, char* name, char* newValue) {
    return QHttpHeaders_ReplaceOrAppend((QHttpHeaders*)self, name, newValue);
}

bool q_httpheaders_replace_or_append2(void* self, int32_t name, char* newValue) {
    return QHttpHeaders_ReplaceOrAppend2((QHttpHeaders*)self, name, newValue);
}

bool q_httpheaders_contains(void* self, char* name) {
    return QHttpHeaders_Contains((QHttpHeaders*)self, name);
}

bool q_httpheaders_contains2(void* self, int32_t name) {
    return QHttpHeaders_Contains2((QHttpHeaders*)self, name);
}

void q_httpheaders_clear(void* self) {
    QHttpHeaders_Clear((QHttpHeaders*)self);
}

void q_httpheaders_remove_all(void* self, char* name) {
    QHttpHeaders_RemoveAll((QHttpHeaders*)self, name);
}

void q_httpheaders_remove_all2(void* self, int32_t name) {
    QHttpHeaders_RemoveAll2((QHttpHeaders*)self, name);
}

void q_httpheaders_remove_at(void* self, int64_t i) {
    QHttpHeaders_RemoveAt((QHttpHeaders*)self, i);
}

const char* q_httpheaders_value(void* self, char* name) {
    libqt_string _str = QHttpHeaders_Value((QHttpHeaders*)self, name);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_httpheaders_value2(void* self, int32_t name) {
    libqt_string _str = QHttpHeaders_Value2((QHttpHeaders*)self, name);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_httpheaders_values(void* self, char* name) {
    libqt_list _arr = QHttpHeaders_Values((QHttpHeaders*)self, name);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_httpheaders_values\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char** q_httpheaders_values2(void* self, int32_t name) {
    libqt_list _arr = QHttpHeaders_Values2((QHttpHeaders*)self, name);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_httpheaders_values2\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char* q_httpheaders_value_at(void* self, int64_t i) {
    libqt_string _str = QHttpHeaders_ValueAt((QHttpHeaders*)self, i);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_httpheaders_combined_value(void* self, char* name) {
    libqt_string _str = QHttpHeaders_CombinedValue((QHttpHeaders*)self, name);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_httpheaders_combined_value2(void* self, int32_t name) {
    libqt_string _str = QHttpHeaders_CombinedValue2((QHttpHeaders*)self, name);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_httpheaders_size(void* self) {
    return QHttpHeaders_Size((QHttpHeaders*)self);
}

void q_httpheaders_reserve(void* self, int64_t size) {
    QHttpHeaders_Reserve((QHttpHeaders*)self, size);
}

bool q_httpheaders_is_empty(void* self) {
    return QHttpHeaders_IsEmpty((QHttpHeaders*)self);
}

const char* q_httpheaders_well_known_header_name(int32_t name) {
    libqt_string _str = QHttpHeaders_WellKnownHeaderName(name);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QHttpHeaders* q_httpheaders_from_list_of_pairs(libqt_list /* of libqt_pair tuple of char* and char* */ headers) {
    return QHttpHeaders_FromListOfPairs(headers);
}

QHttpHeaders* q_httpheaders_from_multi_map(libqt_map /* of char* to char** */ headers) {
    // Convert libqt_map to QMultiMap<QByteArray,QByteArray>
    libqt_map headers_ret;
    headers_ret.len = headers.len;
    headers_ret.keys = (libqt_string*)malloc(headers_ret.len * sizeof(libqt_string));
    if (headers_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_httpheaders_from_multi_map\n");
        abort();
    }
    headers_ret.values = (libqt_list*)malloc(headers_ret.len * sizeof(libqt_list));
    if (headers_ret.values == NULL) {
        free(headers_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_httpheaders_from_multi_map\n");
        abort();
    }
    char** headers_karr = (char**)headers.keys;
    libqt_string* headers_kdest = (libqt_string*)headers_ret.keys;
    char*** headers_varr = (char***)headers.values;
    libqt_list* headers_vdest = (libqt_list*)headers_ret.values;
    for (size_t i = 0; i < headers_ret.len; ++i) {
        headers_kdest[i] = qstring(headers_karr[i]);
        char** headers_array = headers_varr[i];
        size_t headers_value_count = libqt_strv_length((const char**)headers_array);
        libqt_string* headers_value_strings = (libqt_string*)malloc(headers_value_count * sizeof(libqt_string));
        if (headers_value_strings == NULL) {
            for (size_t j = 0; j < i; j++) {
                free(((libqt_list*)headers_ret.values)[j].data.ptr);
            }
            free(headers_ret.keys);
            free(headers_ret.values);
            fprintf(stderr, "Failed to allocate memory for map string key in q_httpheaders_from_multi_map\n");
            abort();
        }
        for (size_t j = 0; j < headers_value_count; j++) {
            headers_value_strings[j] = qstring(headers_array[j]);
        }
        headers_vdest[i].len = headers_value_count;
        headers_vdest[i].data.ptr = headers_value_strings;
    }
    QHttpHeaders* _out = QHttpHeaders_FromMultiMap(headers_ret);
    for (size_t i = 0; i < headers_ret.len; ++i) {
        free(((libqt_list*)headers_ret.values)[i].data.ptr);
    }
    free(headers_ret.keys);
    free(headers_ret.values);
    return _out;
}

QHttpHeaders* q_httpheaders_from_multi_hash(libqt_map /* of char* to char** */ headers) {
    // Convert libqt_map to QMultiHash<QByteArray,QByteArray>
    libqt_map headers_ret;
    headers_ret.len = headers.len;
    headers_ret.keys = (libqt_string*)malloc(headers_ret.len * sizeof(libqt_string));
    if (headers_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_httpheaders_from_multi_hash\n");
        abort();
    }
    headers_ret.values = (libqt_list*)malloc(headers_ret.len * sizeof(libqt_list));
    if (headers_ret.values == NULL) {
        free(headers_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_httpheaders_from_multi_hash\n");
        abort();
    }
    char** headers_karr = (char**)headers.keys;
    libqt_string* headers_kdest = (libqt_string*)headers_ret.keys;
    char*** headers_varr = (char***)headers.values;
    libqt_list* headers_vdest = (libqt_list*)headers_ret.values;
    for (size_t i = 0; i < headers_ret.len; ++i) {
        headers_kdest[i] = qstring(headers_karr[i]);
        char** headers_array = headers_varr[i];
        size_t headers_value_count = libqt_strv_length((const char**)headers_array);
        libqt_string* headers_value_strings = (libqt_string*)malloc(headers_value_count * sizeof(libqt_string));
        if (headers_value_strings == NULL) {
            for (size_t j = 0; j < i; j++) {
                free(((libqt_list*)headers_ret.values)[j].data.ptr);
            }
            free(headers_ret.keys);
            free(headers_ret.values);
            fprintf(stderr, "Failed to allocate memory for map string key in q_httpheaders_from_multi_hash\n");
            abort();
        }
        for (size_t j = 0; j < headers_value_count; j++) {
            headers_value_strings[j] = qstring(headers_array[j]);
        }
        headers_vdest[i].len = headers_value_count;
        headers_vdest[i].data.ptr = headers_value_strings;
    }
    QHttpHeaders* _out = QHttpHeaders_FromMultiHash(headers_ret);
    for (size_t i = 0; i < headers_ret.len; ++i) {
        free(((libqt_list*)headers_ret.values)[i].data.ptr);
    }
    free(headers_ret.keys);
    free(headers_ret.values);
    return _out;
}

libqt_list /* of libqt_pair tuple of char* and char* */ q_httpheaders_to_list_of_pairs(void* self) {
    libqt_list _arr = QHttpHeaders_ToListOfPairs((QHttpHeaders*)self);
    return _arr;
}

libqt_map /* of char* to char** */ q_httpheaders_to_multi_map(void* self) {
    // Convert QMultiMap<QByteArray,QByteArray> to libqt_map
    libqt_map _out = QHttpHeaders_ToMultiMap((QHttpHeaders*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in q_httpheaders_to_multi_map\n");
        abort();
    }
    libqt_list* _out_values = (libqt_list*)_out.values;
    char*** _ret_values = (char***)malloc(_ret.len * sizeof(char**));
    if (_ret_values == NULL) {
        free(_ret_keys);
        free(_out.keys);
        free(_out.values);
        fprintf(stderr, "Failed to allocate memory for map value containers in q_httpheaders_to_multi_map\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (char*)malloc(_out_keys[i].len + 1);
        if (_ret_keys[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
                for (size_t k = 0; k < ((libqt_list*)_out.values)[j].len; k++) {
                    free(_ret_values[j][k]);
                }
                free(_ret_values[j]);
            }
            free(_ret_keys);
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map keys in q_httpheaders_to_multi_map\n");
            abort();
        }
        memcpy(_ret_keys[i], _out_keys[i].data, _out_keys[i].len);
        _ret_keys[i][_out_keys[i].len] = '\0';
        libqt_list _value_list = _out_values[i];
        _ret_values[i] = (char**)malloc((_value_list.len + 1) * sizeof(char*));
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
                for (size_t k = 0; k < ((libqt_list*)_out.values)[j].len; k++) {
                    libqt_free(_ret_values[j][k]);
                }
                libqt_free(_ret_values[j]);
            }
            free(_ret_keys);
            free(_out.keys);
            free(_ret_values);
            free(_out.values);
            fprintf(stderr, "Failed to allocate memory for map values in q_httpheaders_to_multi_map\n");
            abort();
        }
        libqt_string* _value_str = (libqt_string*)_value_list.data.ptr;
        size_t j;
        for (j = 0; j < _value_list.len; j++) {
            _ret_values[i][j] = (char*)malloc(_value_str[j].len + 1);
            if (_ret_values[i][j] == NULL) {
                for (size_t k = 0; k < j; k++) {
                    free(_ret_values[i][k]);
                }
                for (size_t k = 0; k < i; k++) {
                    free(_ret_keys[k]);
                    for (size_t l = 0; l < ((libqt_list*)_out.values)[k].len; l++) {
                        free(_ret_values[k][l]);
                    }
                    free(_ret_values[k]);
                }
                free(_ret_keys);
                free(_ret_values);
                fprintf(stderr, "Failed to allocate memory for map value keys in q_httpheaders_to_multi_map\n");
                abort();
            }
            memcpy(_ret_values[i][j], _value_str[j].data, _value_str[j].len);
            _ret_values[i][j][_value_str[j].len] = '\0';
        }
        _ret_values[i][j] = NULL;
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_keys[i].data);
        libqt_string* _value_str = (libqt_string*)_out_values[i].data.ptr;
        for (size_t j = 0; j < _out_values[i].len; j++) {
            libqt_free(_value_str[j].data);
        }
        free(_out_values[i].data.ptr);
    }
    free(_out.keys);
    free(_out.values);
    return _ret;
}

libqt_map /* of char* to char** */ q_httpheaders_to_multi_hash(void* self) {
    // Convert QMultiHash<QByteArray,QByteArray> to libqt_map
    libqt_map _out = QHttpHeaders_ToMultiHash((QHttpHeaders*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in q_httpheaders_to_multi_hash\n");
        abort();
    }
    libqt_list* _out_values = (libqt_list*)_out.values;
    char*** _ret_values = (char***)malloc(_ret.len * sizeof(char**));
    if (_ret_values == NULL) {
        free(_ret_keys);
        free(_out.keys);
        free(_out.values);
        fprintf(stderr, "Failed to allocate memory for map value containers in q_httpheaders_to_multi_hash\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (char*)malloc(_out_keys[i].len + 1);
        if (_ret_keys[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
                for (size_t k = 0; k < ((libqt_list*)_out.values)[j].len; k++) {
                    free(_ret_values[j][k]);
                }
                free(_ret_values[j]);
            }
            free(_ret_keys);
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map keys in q_httpheaders_to_multi_hash\n");
            abort();
        }
        memcpy(_ret_keys[i], _out_keys[i].data, _out_keys[i].len);
        _ret_keys[i][_out_keys[i].len] = '\0';
        libqt_list _value_list = _out_values[i];
        _ret_values[i] = (char**)malloc((_value_list.len + 1) * sizeof(char*));
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
                for (size_t k = 0; k < ((libqt_list*)_out.values)[j].len; k++) {
                    libqt_free(_ret_values[j][k]);
                }
                libqt_free(_ret_values[j]);
            }
            free(_ret_keys);
            free(_out.keys);
            free(_ret_values);
            free(_out.values);
            fprintf(stderr, "Failed to allocate memory for map values in q_httpheaders_to_multi_hash\n");
            abort();
        }
        libqt_string* _value_str = (libqt_string*)_value_list.data.ptr;
        size_t j;
        for (j = 0; j < _value_list.len; j++) {
            _ret_values[i][j] = (char*)malloc(_value_str[j].len + 1);
            if (_ret_values[i][j] == NULL) {
                for (size_t k = 0; k < j; k++) {
                    free(_ret_values[i][k]);
                }
                for (size_t k = 0; k < i; k++) {
                    free(_ret_keys[k]);
                    for (size_t l = 0; l < ((libqt_list*)_out.values)[k].len; l++) {
                        free(_ret_values[k][l]);
                    }
                    free(_ret_values[k]);
                }
                free(_ret_keys);
                free(_ret_values);
                fprintf(stderr, "Failed to allocate memory for map value keys in q_httpheaders_to_multi_hash\n");
                abort();
            }
            memcpy(_ret_values[i][j], _value_str[j].data, _value_str[j].len);
            _ret_values[i][j][_value_str[j].len] = '\0';
        }
        _ret_values[i][j] = NULL;
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_keys[i].data);
        libqt_string* _value_str = (libqt_string*)_out_values[i].data.ptr;
        for (size_t j = 0; j < _out_values[i].len; j++) {
            libqt_free(_value_str[j].data);
        }
        free(_out_values[i].data.ptr);
    }
    free(_out.keys);
    free(_out.values);
    return _ret;
}

const char* q_httpheaders_value22(void* self, char* name, const char* defaultValue) {
    libqt_string _str = QHttpHeaders_Value22((QHttpHeaders*)self, name, qstring(defaultValue));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_httpheaders_value23(void* self, int32_t name, const char* defaultValue) {
    libqt_string _str = QHttpHeaders_Value23((QHttpHeaders*)self, name, qstring(defaultValue));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_httpheaders_delete(void* self) {
    QHttpHeaders_Delete((QHttpHeaders*)(self));
}
