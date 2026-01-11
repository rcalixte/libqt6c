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

const char* q_stringconverter_name_for_encoding(int32_t e) {
    return QStringConverter_NameForEncoding(e);
}

const char** q_stringconverter_available_codecs() {
    libqt_list _arr = QStringConverter_AvailableCodecs();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_stringconverter_available_codecs");
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

QStringConverterBase__State* q_stringconverterbase__state_new() {
    return QStringConverterBase__State_new();
}

QStringConverterBase__State* q_stringconverterbase__state_new2(int32_t f) {
    return QStringConverterBase__State_new2(f);
}

void q_stringconverterbase__state_clear(void* self) {
    QStringConverterBase__State_Clear((QStringConverterBase__State*)self);
}

void q_stringconverterbase__state_reset(void* self) {
    QStringConverterBase__State_Reset((QStringConverterBase__State*)self);
}

int32_t q_stringconverterbase__state_flags(void* self) {
    return QStringConverterBase__State_Flags((QStringConverterBase__State*)self);
}

void q_stringconverterbase__state_set_flags(void* self, int32_t flags) {
    QStringConverterBase__State_SetFlags((QStringConverterBase__State*)self, flags);
}

int32_t q_stringconverterbase__state_internal_state(void* self) {
    return QStringConverterBase__State_InternalState((QStringConverterBase__State*)self);
}

void q_stringconverterbase__state_set_internal_state(void* self, int internalState) {
    QStringConverterBase__State_SetInternalState((QStringConverterBase__State*)self, internalState);
}

int64_t q_stringconverterbase__state_remaining_chars(void* self) {
    return QStringConverterBase__State_RemainingChars((QStringConverterBase__State*)self);
}

void q_stringconverterbase__state_set_remaining_chars(void* self, int64_t remainingChars) {
    QStringConverterBase__State_SetRemainingChars((QStringConverterBase__State*)self, remainingChars);
}

int64_t q_stringconverterbase__state_invalid_chars(void* self) {
    return QStringConverterBase__State_InvalidChars((QStringConverterBase__State*)self);
}

void q_stringconverterbase__state_set_invalid_chars(void* self, int64_t invalidChars) {
    QStringConverterBase__State_SetInvalidChars((QStringConverterBase__State*)self, invalidChars);
}

void q_stringconverterbase__state_delete(void* self) {
    QStringConverterBase__State_Delete((QStringConverterBase__State*)(self));
}
