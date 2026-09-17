#include "libqbytearrayalgorithms.hpp"
#include "libqbytearrayalgorithms.h"

const void* q_qbytearrayalgorithms_qmemrchr(void* s, int needle, uintptr_t n) {
    return qbytearrayalgorithms_Qmemrchr(s, needle, n);
}

char* q_qbytearrayalgorithms_qstrdup(const char* param1) {
    return qbytearrayalgorithms_Qstrdup(param1);
}

uintptr_t q_qbytearrayalgorithms_qstrlen(const char* str) {
    return qbytearrayalgorithms_Qstrlen(str);
}

uintptr_t q_qbytearrayalgorithms_qstrnlen(const char* str, uintptr_t maxlen) {
    return qbytearrayalgorithms_Qstrnlen(str, maxlen);
}

char* q_qbytearrayalgorithms_qstrcpy(char* dst, const char* src) {
    return qbytearrayalgorithms_Qstrcpy(dst, src);
}

char* q_qbytearrayalgorithms_qstrncpy(char* dst, const char* src, uintptr_t _len) {
    return qbytearrayalgorithms_Qstrncpy(dst, src, _len);
}

int32_t q_qbytearrayalgorithms_qstrcmp(const char* str1, const char* str2) {
    return qbytearrayalgorithms_Qstrcmp(str1, str2);
}

int32_t q_qbytearrayalgorithms_qstrncmp(const char* str1, const char* str2, uintptr_t _len) {
    return qbytearrayalgorithms_Qstrncmp(str1, str2, _len);
}

int32_t q_qbytearrayalgorithms_qstricmp(const char* param1, const char* param2) {
    return qbytearrayalgorithms_Qstricmp(param1, param2);
}

int32_t q_qbytearrayalgorithms_qstrnicmp(const char* param1, const char* param2, uintptr_t _len) {
    return qbytearrayalgorithms_Qstrnicmp(param1, param2, _len);
}

int32_t q_qbytearrayalgorithms_qstrnicmp2(const char* param1, intptr_t param2, const char* param3, intptr_t param4) {
    return qbytearrayalgorithms_Qstrnicmp2(param1, param2, param3, param4);
}

uint16_t q_qbytearrayalgorithms_q_checksum(char* data, int32_t standard) {
    return qbytearrayalgorithms_QChecksum(qstring(data), standard);
}
