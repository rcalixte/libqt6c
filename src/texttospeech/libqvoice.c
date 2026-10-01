#include "../libqlocale.hpp"
#include "libqvoice.hpp"
#include "libqvoice.h"

QVoice* q_voice_new() {
    return QVoice_New();
}

QVoice* q_voice_new2(const void* other) {
    return QVoice_New2((QVoice*)other);
}

void q_voice_operator_assign(void* self, const void* other) {
    QVoice_OperatorAssign((QVoice*)self, (QVoice*)other);
}

void q_voice_swap(void* self, void* other) {
    QVoice_Swap((QVoice*)self, (QVoice*)other);
}

const char* q_voice_name(const void* self) {
    libqt_string _str = QVoice_Name((QVoice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QLocale* q_voice_locale(const void* self) {
    return QVoice_Locale((QVoice*)self);
}

int32_t q_voice_gender(const void* self) {
    return QVoice_Gender((QVoice*)self);
}

int32_t q_voice_age(const void* self) {
    return QVoice_Age((QVoice*)self);
}

uint16_t q_voice_language(const void* self) {
    return QVoice_Language((QVoice*)self);
}

const char* q_voice_gender_name(int32_t gender) {
    libqt_string _str = QVoice_GenderName(gender);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_voice_age_name(int32_t age) {
    libqt_string _str = QVoice_AgeName(age);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_voice_delete(void* self) {
    QVoice_Delete((QVoice*)(self));
}
