#pragma once
#ifndef SRC_NETWORKQT6C_LIBQFORMDATABUILDER_H
#define SRC_NETWORKQT6C_LIBQFORMDATABUILDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qformdatapartbuilder.html

/// q_formdatapartbuilder_new constructs a new QFormDataPartBuilder object.
///
///
QFormDataPartBuilder* q_formdatapartbuilder_new();

/// q_formdatapartbuilder_new2 constructs a new QFormDataPartBuilder object.
///
/// ``` QFormDataPartBuilder* param1 ```
QFormDataPartBuilder* q_formdatapartbuilder_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qformdatapartbuilder.html#swap)
///
/// ``` QFormDataPartBuilder* self, QFormDataPartBuilder* other ```
void q_formdatapartbuilder_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qformdatapartbuilder.html#setBody)
///
/// ``` QFormDataPartBuilder* self, const char* data ```
QFormDataPartBuilder* q_formdatapartbuilder_set_body(void* self, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qformdatapartbuilder.html#setBodyDevice)
///
/// ``` QFormDataPartBuilder* self, QIODevice* body ```
QFormDataPartBuilder* q_formdatapartbuilder_set_body_device(void* self, void* body);

/// [Qt documentation](https://doc.qt.io/qt-6/qformdatapartbuilder.html#setHeaders)
///
/// ``` QFormDataPartBuilder* self, QHttpHeaders* headers ```
QFormDataPartBuilder* q_formdatapartbuilder_set_headers(void* self, void* headers);

/// [Qt documentation](https://doc.qt.io/qt-6/qformdatapartbuilder.html#setBody)
///
/// ``` QFormDataPartBuilder* self, const char* data, char* fileName ```
QFormDataPartBuilder* q_formdatapartbuilder_set_body2(void* self, const char* data, char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qformdatapartbuilder.html#setBody)
///
/// ``` QFormDataPartBuilder* self, const char* data, char* fileName, char* mimeType ```
QFormDataPartBuilder* q_formdatapartbuilder_set_body3(void* self, const char* data, char* fileName, char* mimeType);

/// [Qt documentation](https://doc.qt.io/qt-6/qformdatapartbuilder.html#setBodyDevice)
///
/// ``` QFormDataPartBuilder* self, QIODevice* body, char* fileName ```
QFormDataPartBuilder* q_formdatapartbuilder_set_body_device2(void* self, void* body, char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qformdatapartbuilder.html#setBodyDevice)
///
/// ``` QFormDataPartBuilder* self, QIODevice* body, char* fileName, char* mimeType ```
QFormDataPartBuilder* q_formdatapartbuilder_set_body_device3(void* self, void* body, char* fileName, char* mimeType);

/// [Qt documentation](https://doc.qt.io/qt-6/qformdatapartbuilder.html#dtor.QFormDataPartBuilder)
///
/// Delete this object from C++ memory.
///
/// ``` QFormDataPartBuilder* self ```
void q_formdatapartbuilder_delete(void* self);

/// https://doc.qt.io/qt-6/qformdatabuilder.html

/// q_formdatabuilder_new constructs a new QFormDataBuilder object.
///
///
QFormDataBuilder* q_formdatabuilder_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qformdatabuilder.html#swap)
///
/// ``` QFormDataBuilder* self, QFormDataBuilder* other ```
void q_formdatabuilder_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qformdatabuilder.html#part)
///
/// ``` QFormDataBuilder* self, char* name ```
QFormDataPartBuilder* q_formdatabuilder_part(void* self, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qformdatabuilder.html#dtor.QFormDataBuilder)
///
/// Delete this object from C++ memory.
///
/// ``` QFormDataBuilder* self ```
void q_formdatabuilder_delete(void* self);

/// https://doc.qt.io/qt-6/qformdatabuilder.html#types

typedef enum {
    QFORMDATABUILDER_OPTION_DEFAULT = 0,
    QFORMDATABUILDER_OPTION_OMITRFC8187ENCODEDFILENAME = 1,
    QFORMDATABUILDER_OPTION_USERFC7578PERCENTENCODEDFILENAME = 2,
    QFORMDATABUILDER_OPTION_PREFERLATIN1ENCODEDFILENAME = 4,
    QFORMDATABUILDER_OPTION_STRICTRFC7578 = 3
} QFormDataBuilder__Option;

#endif
