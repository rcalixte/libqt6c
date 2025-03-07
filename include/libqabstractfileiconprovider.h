#pragma once
#ifndef SRCQT6C_LIBQABSTRACTFILEICONPROVIDER_H
#define SRCQT6C_LIBQABSTRACTFILEICONPROVIDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqfileinfo.h"
#include "libqicon.h"
#include <string.h>

QAbstractFileIconProvider* q_abstractfileiconprovider_new();
QIcon* q_abstractfileiconprovider_icon(void* self, int64_t param1);
void q_abstractfileiconprovider_on_icon(void* self, QIcon* (*slot)(void*, int64_t));
QIcon* q_abstractfileiconprovider_qbase_icon(void* self, int64_t param1);
QIcon* q_abstractfileiconprovider_icon_with_q_file_info(void* self, void* param1);
void q_abstractfileiconprovider_on_icon_with_q_file_info(void* self, QIcon* (*slot)(void*, void*));
QIcon* q_abstractfileiconprovider_qbase_icon_with_q_file_info(void* self, void* param1);
const char* q_abstractfileiconprovider_type(void* self, void* param1);
void q_abstractfileiconprovider_on_type(void* self, const char* (*slot)(void*, void*));
const char* q_abstractfileiconprovider_qbase_type(void* self, void* param1);
void q_abstractfileiconprovider_set_options(void* self, int64_t options);
void q_abstractfileiconprovider_on_set_options(void* self, void (*slot)(void*, int64_t));
void q_abstractfileiconprovider_qbase_set_options(void* self, int64_t options);
int64_t q_abstractfileiconprovider_options(void* self);
void q_abstractfileiconprovider_on_options(void* self, int64_t (*slot)());
int64_t q_abstractfileiconprovider_qbase_options(void* self);
void q_abstractfileiconprovider_delete(void* self);

/// https://doc.qt.io/qt-6/qabstractfileiconprovider.html#types

typedef enum {
    QABSTRACTFILEICONPROVIDER_ICONTYPE_COMPUTER = 0,
    QABSTRACTFILEICONPROVIDER_ICONTYPE_DESKTOP = 1,
    QABSTRACTFILEICONPROVIDER_ICONTYPE_TRASHCAN = 2,
    QABSTRACTFILEICONPROVIDER_ICONTYPE_NETWORK = 3,
    QABSTRACTFILEICONPROVIDER_ICONTYPE_DRIVE = 4,
    QABSTRACTFILEICONPROVIDER_ICONTYPE_FOLDER = 5,
    QABSTRACTFILEICONPROVIDER_ICONTYPE_FILE = 6
} QAbstractFileIconProvider__IconType;

typedef enum {
    QABSTRACTFILEICONPROVIDER_OPTION_DONTUSECUSTOMDIRECTORYICONS = 1
} QAbstractFileIconProvider__Option;

#endif
