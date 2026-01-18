#include "../libqurl.hpp"
#include "libqwebengineloadinginfo.hpp"
#include "libqwebengineloadinginfo.h"

QWebEngineLoadingInfo* q_webengineloadinginfo_new(void* other) {
    return QWebEngineLoadingInfo_new((QWebEngineLoadingInfo*)other);
}

void q_webengineloadinginfo_operator_assign(void* self, void* other) {
    QWebEngineLoadingInfo_OperatorAssign((QWebEngineLoadingInfo*)self, (QWebEngineLoadingInfo*)other);
}

QUrl* q_webengineloadinginfo_url(void* self) {
    return QWebEngineLoadingInfo_Url((QWebEngineLoadingInfo*)self);
}

bool q_webengineloadinginfo_is_error_page(void* self) {
    return QWebEngineLoadingInfo_IsErrorPage((QWebEngineLoadingInfo*)self);
}

int32_t q_webengineloadinginfo_status(void* self) {
    return QWebEngineLoadingInfo_Status((QWebEngineLoadingInfo*)self);
}

const char* q_webengineloadinginfo_error_string(void* self) {
    libqt_string _str = QWebEngineLoadingInfo_ErrorString((QWebEngineLoadingInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_webengineloadinginfo_error_domain(void* self) {
    return QWebEngineLoadingInfo_ErrorDomain((QWebEngineLoadingInfo*)self);
}

int32_t q_webengineloadinginfo_error_code(void* self) {
    return QWebEngineLoadingInfo_ErrorCode((QWebEngineLoadingInfo*)self);
}

libqt_map /* of char* to char** */ q_webengineloadinginfo_response_headers(void* self) {
    // Convert QMultiMap<QByteArray,QByteArray> to libqt_map
    libqt_map _out = QWebEngineLoadingInfo_ResponseHeaders((QWebEngineLoadingInfo*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in q_webengineloadinginfo_response_headers\n");
        abort();
    }
    libqt_list* _out_values = (libqt_list*)_out.values;
    char*** _ret_values = (char***)malloc(_ret.len * sizeof(char**));
    if (_ret_values == NULL) {
        free(_ret_keys);
        free(_out.keys);
        free(_out.values);
        fprintf(stderr, "Failed to allocate memory for map value containers in q_webengineloadinginfo_response_headers\n");
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
            fprintf(stderr, "Failed to allocate memory for map keys in q_webengineloadinginfo_response_headers\n");
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
            fprintf(stderr, "Failed to allocate memory for map values in q_webengineloadinginfo_response_headers\n");
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
                fprintf(stderr, "Failed to allocate memory for map value keys in q_webengineloadinginfo_response_headers\n");
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

void q_webengineloadinginfo_delete(void* self) {
    QWebEngineLoadingInfo_Delete((QWebEngineLoadingInfo*)(self));
}
