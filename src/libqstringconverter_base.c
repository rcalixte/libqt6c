#include "libqbytearrayview.hpp"
#include "libqstringconverter_base.hpp"
#include "libqstringconverter_base.h"

bool q_stringconverter_is_valid(void* self) {
    return QStringConverter_IsValid((QStringConverter*)self);
}

void q_stringconverter_reset_state(void* self) {
    QStringConverter_ResetState((QStringConverter*)self);
}

bool q_stringconverter_has_error(void* self) {
    return QStringConverter_HasError((QStringConverter*)self);
}

const char* q_stringconverter_name(void* self) {
    return QStringConverter_Name((QStringConverter*)self);
}

int32_t q_stringconverter_encoding_for_name(const char* name) {
    return QStringConverter_EncodingForName(name);
}

const char* q_stringconverter_name_for_encoding(int32_t e) {
    return QStringConverter_NameForEncoding(e);
}

int32_t q_stringconverter_encoding_for_data(char* data) {
    return QStringConverter_EncodingForData(qstring(data));
}

int32_t q_stringconverter_encoding_for_html(char* data) {
    return QStringConverter_EncodingForHtml(qstring(data));
}

const char** q_stringconverter_available_codecs() {
    libqt_list _arr = QStringConverter_AvailableCodecs();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_stringconverter_available_codecs\n");
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
