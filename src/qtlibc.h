#pragma once
#ifndef QT6C_LIBQT_H
#define QT6C_LIBQT_H

#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

// Forward declarations

struct libqt_string;
struct libqt_strview;
struct libqt_list;
struct libqt_bitarray;
struct libqt_map;
struct libqt_pair;

typedef struct libqt_string libqt_string;
typedef struct libqt_strview libqt_strview;
typedef struct libqt_list libqt_list;
typedef struct libqt_bitarray libqt_bitarray;
typedef struct libqt_map libqt_map;
typedef struct libqt_pair libqt_pair;

// Structs representing Qt-allocated memory
// QString
struct libqt_string {
    size_t len;
    char* data;
};

// QAnyStringView, QByteArrayView, and similar view types
struct libqt_strview {
    size_t len;
    const char* ptr;
};

// QList
struct libqt_list {
    size_t len;
    union {
        void* ptr;
        int* ints;
        uint16_t* uint16_ts;
        unsigned int* unsignedints;
        double* doubles;
    } data;
};

// QBitArray
struct libqt_bitarray {
    size_t len;
    uint8_t* data;
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

// Helper functions for common cases

static libqt_string qstring(const char* string) {
    libqt_string str = {0}; // Initialize to zero
    if (string) {
        str.len = strlen(string);
        // we malloc char* to ensure proper alignment even though
        // it is wasteful... we can do better
        str.data = (char*)malloc((str.len + 1) * sizeof(char*));
        if (str.data) {
            memcpy(str.data, string, str.len);
            str.data[str.len] = '\0';
        } else {
            str.len = 0;
        }
    }
    return str;
}

static libqt_strview qstrview(const char* string) {
    libqt_strview view = {0}; // Initialize to zero
    if (string) {
        view.ptr = string;
        view.len = strlen(string);
    }
    return view;
}

static libqt_list qstrlist(void* items, size_t len) {
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
        free(str->data);
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

    // we malloc char* to ensure proper alignment even though
    // it is wasteful... we can do better
    char* result = (char*)malloc((str.len + 1) * sizeof(char*));
    if (result) {
        memcpy(result, str.data, str.len);
        result[str.len] = '\0';
    }
    return result;
}

#ifdef __cplusplus
}
#endif

#endif
