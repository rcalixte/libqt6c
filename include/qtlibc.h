#pragma once
#ifndef QT6C_LIBQT_H
#define QT6C_LIBQT_H

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
typedef int pid_t;
typedef unsigned int dev_t;
typedef unsigned int gid_t;
typedef unsigned int uid_t;
typedef unsigned short mode_t;
#else
#include <unistd.h>
#if defined(__linux__)
#include <xcb/xproto.h>
#endif
#endif

#ifdef __cplusplus
extern "C" {
#endif

#if defined(__GNUC__) || defined(__clang__)
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif

// Forward declarations

struct libqt_string;
struct libqt_list;
struct libqt_map;
struct libqt_pair;

typedef struct libqt_string libqt_string;
typedef struct libqt_list libqt_list;
typedef struct libqt_map libqt_map;
typedef struct libqt_pair libqt_pair;

// Structs representing Qt-allocated memory

// QString
struct libqt_string {
    size_t len;
    const char* data;
};

// QList
struct libqt_list {
    size_t len;
    union {
        char* chars;
        double* doubles;
        float* floats;
        int* ints;
        intptr_t* ptrdiffs;
        long long* longlongs;
        uint16_t* uint16_ts;
        uint32_t* uint32_ts;
        uint64_t* uint64_ts;
        uintptr_t* uintptrs;
        unsigned char* unsignedchars;
        unsigned int* unsignedints;
        void* ptr;
    } data;
};

// QMap
struct libqt_map {
    size_t len;
    void* keys;
    void* values;
};

// QPair
struct libqt_pair {
    void* first;
    void* second;
};

// Generic function to free Qt-allocated memory
static inline void libqt_free(const void* ptr) { free((void*)ptr); }

// Helper functions for common cases

static libqt_string qstring(const char* string) {
    libqt_string str = {0, NULL}; // Initialize to zero and NULL
    if (string) {
        str.len = strlen(string);
        str.data = string;
    }
    return str;
}

static libqt_list qlist(void* items, size_t len) {
    libqt_list arr;
    arr.data.ptr = items;
    arr.len = len;
    return arr;
}

static libqt_pair qpair(void* first, void* second) {
    libqt_pair pair;
    pair.first = first;
    pair.second = second;
    return pair;
}

static inline void libqt_string_free(libqt_string* str) {
    if (str && str->data) {
        free((void*)str->data);
        str->data = NULL;
        str->len = 0;
    }
}

static size_t libqt_strv_length(const char** strv) {
    size_t len = 0;
    if (strv != NULL) {
        while (strv[len] != NULL) {
            len++;
        }
    }
    return len;
}

static char* qstring_to_char(libqt_string str) {
    if (!str.data || str.len == 0) {
        return NULL;
    }

    char* result = (char*)malloc(str.len + 1);
    if (result == NULL) {
        fprintf(stderr, "Memory allocation failed in qstring_to_char");
        abort();
    }
    memcpy(result, str.data, str.len);
    result[str.len] = '\0';
    return result;
}

#ifdef __cplusplus
}
#endif

#endif
