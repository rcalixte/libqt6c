#include "../libqbytearrayview.hpp"
#include "libkencodingprober.hpp"
#include "libkencodingprober.h"

KEncodingProber* k_encodingprober_new() {
    return KEncodingProber_new();
}

KEncodingProber* k_encodingprober_new2(int32_t proberType) {
    return KEncodingProber_new2(proberType);
}

const char* k_encodingprober_tr(const char* sourceText) {
    libqt_string _str = KEncodingProber_Tr(sourceText);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_encodingprober_reset(void* self) {
    KEncodingProber_Reset((KEncodingProber*)self);
}

int32_t k_encodingprober_feed(void* self, const char* data) {
    libqt_string data_string = qstring(data);
    return KEncodingProber_Feed((KEncodingProber*)self, (QByteArrayView*)&data_string);
}

int32_t k_encodingprober_feed2(void* self, const char* data, int64_t lenVal) {
    return KEncodingProber_Feed2((KEncodingProber*)self, data, lenVal);
}

int32_t k_encodingprober_state(void* self) {
    return KEncodingProber_State((KEncodingProber*)self);
}

char* k_encodingprober_encoding(void* self) {
    libqt_string _str = KEncodingProber_Encoding((KEncodingProber*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

float k_encodingprober_confidence(void* self) {
    return KEncodingProber_Confidence((KEncodingProber*)self);
}

int32_t k_encodingprober_prober_type(void* self) {
    return KEncodingProber_ProberType((KEncodingProber*)self);
}

void k_encodingprober_set_prober_type(void* self, int32_t proberType) {
    KEncodingProber_SetProberType((KEncodingProber*)self, proberType);
}

int32_t k_encodingprober_prober_type_for_name(const char* lang) {
    return KEncodingProber_ProberTypeForName(qstring(lang));
}

const char* k_encodingprober_name_for_prober_type(int32_t proberType) {
    libqt_string _str = KEncodingProber_NameForProberType(proberType);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_encodingprober_tr2(const char* sourceText, const char* disambiguation) {
    libqt_string _str = KEncodingProber_Tr2(sourceText, disambiguation);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_encodingprober_tr3(const char* sourceText, const char* disambiguation, int n) {
    libqt_string _str = KEncodingProber_Tr3(sourceText, disambiguation, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_encodingprober_delete(void* self) {
    KEncodingProber_Delete((KEncodingProber*)(self));
}
