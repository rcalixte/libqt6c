#include "libqstringconverter.hpp"
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

const char* q_stringconverter_name_for_encoding(int64_t e) {
    return QStringConverter_NameForEncoding(e);
}

QStringConverterBase__State* q_stringconverterbase__state_new() {
    return QStringConverterBase__State_new();
}

QStringConverterBase__State* q_stringconverterbase__state_new2(int64_t f) {
    return QStringConverterBase__State_new2(f);
}

void q_stringconverterbase__state_clear(void* self) {
    QStringConverterBase__State_Clear((QStringConverterBase__State*)self);
}

void q_stringconverterbase__state_reset(void* self) {
    QStringConverterBase__State_Reset((QStringConverterBase__State*)self);
}

void q_stringconverterbase__state_delete(void* self) {
    QStringConverterBase__State_Delete((QStringConverterBase__State*)(self));
}
