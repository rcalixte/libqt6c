#include "libqbytearrayalgorithms.hpp"
#include "libqbytearrayalgorithms.h"

const void* q_qbytearrayalgorithms_h_qmemrchr(void* s, int needle, uintptr_t n) {
    return qbytearrayalgorithms_h_Qmemrchr(s, needle, n);
}

char* q_qbytearrayalgorithms_h_qstrdup(const char* param1) {
    return qbytearrayalgorithms_h_Qstrdup(param1);
}

uintptr_t q_qbytearrayalgorithms_h_qstrlen(const char* str) {
    return qbytearrayalgorithms_h_Qstrlen(str);
}

uintptr_t q_qbytearrayalgorithms_h_qstrnlen(const char* str, uintptr_t maxlen) {
    return qbytearrayalgorithms_h_Qstrnlen(str, maxlen);
}

char* q_qbytearrayalgorithms_h_qstrcpy(char* dst, const char* src) {
    return qbytearrayalgorithms_h_Qstrcpy(dst, src);
}

char* q_qbytearrayalgorithms_h_qstrncpy(char* dst, const char* src, uintptr_t _len) {
    return qbytearrayalgorithms_h_Qstrncpy(dst, src, _len);
}

int32_t q_qbytearrayalgorithms_h_qstrcmp(const char* str1, const char* str2) {
    return qbytearrayalgorithms_h_Qstrcmp(str1, str2);
}

int32_t q_qbytearrayalgorithms_h_qstrncmp(const char* str1, const char* str2, uintptr_t _len) {
    return qbytearrayalgorithms_h_Qstrncmp(str1, str2, _len);
}

int32_t q_qbytearrayalgorithms_h_qstricmp(const char* param1, const char* param2) {
    return qbytearrayalgorithms_h_Qstricmp(param1, param2);
}

int32_t q_qbytearrayalgorithms_h_qstrnicmp(const char* param1, const char* param2, uintptr_t _len) {
    return qbytearrayalgorithms_h_Qstrnicmp(param1, param2, _len);
}

int32_t q_qbytearrayalgorithms_h_qstrnicmp2(const char* param1, intptr_t param2, const char* param3, intptr_t param4) {
    return qbytearrayalgorithms_h_Qstrnicmp2(param1, param2, param3, param4);
}
