#include "../libqdatetime.hpp"
#include "libatticautils.hpp"
#include "libatticautils.h"

Attica__Utils* k_attica__utils_new(void* other) {
    return Attica__Utils_new((Attica__Utils*)other);
}

Attica__Utils* k_attica__utils_new2(void* other) {
    return Attica__Utils_new2((Attica__Utils*)other);
}

void k_attica__utils_copy_assign(void* self, void* other) {
    Attica__Utils_CopyAssign((Attica__Utils*)self, (Attica__Utils*)other);
}

void k_attica__utils_move_assign(void* self, void* other) {
    Attica__Utils_MoveAssign((Attica__Utils*)self, (Attica__Utils*)other);
}

QDateTime* k_attica__utils_parse_qt_date_time_iso8601(const char* str) {
    return Attica__Utils_ParseQtDateTimeIso8601(qstring(str));
}

const char* k_attica__utils_to_string(int32_t operation) {
    return Attica__Utils_ToString(operation);
}

void k_attica__utils_delete(void* self) {
    Attica__Utils_Delete((Attica__Utils*)(self));
}
