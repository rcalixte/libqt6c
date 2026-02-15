#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQFORMDATABUILDER_H
#define SRC_NETWORK_QT6C_LIBQFORMDATABUILDER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qformdatapartbuilder.html)

/// q_formdatapartbuilder_new constructs a new QFormDataPartBuilder object.
///
QFormDataPartBuilder* q_formdatapartbuilder_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qformdatapartbuilder.html)

/// q_formdatapartbuilder_new2 constructs a new QFormDataPartBuilder object.
///
/// @param param1 QFormDataPartBuilder*
///
QFormDataPartBuilder* q_formdatapartbuilder_new2(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qformdatapartbuilder.html#swap)
///
/// @param self QFormDataPartBuilder*
/// @param other QFormDataPartBuilder*
///
void q_formdatapartbuilder_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qformdatapartbuilder.html#setBody)
///
/// @param self QFormDataPartBuilder*
/// @param data char*
///
QFormDataPartBuilder* q_formdatapartbuilder_set_body(void* self, char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qformdatapartbuilder.html#setBodyDevice)
///
/// @param self QFormDataPartBuilder*
/// @param body QIODevice*
///
QFormDataPartBuilder* q_formdatapartbuilder_set_body_device(void* self, void* body);

/// [Upstream resources](https://doc.qt.io/qt-6/qformdatapartbuilder.html#setHeaders)
///
/// @param self QFormDataPartBuilder*
/// @param headers QHttpHeaders*
///
QFormDataPartBuilder* q_formdatapartbuilder_set_headers(void* self, void* headers);

/// [Upstream resources](https://doc.qt.io/qt-6/qformdatapartbuilder.html#setBody)
///
/// @param self QFormDataPartBuilder*
/// @param data char*
/// @param fileName const char*
///
QFormDataPartBuilder* q_formdatapartbuilder_set_body2(void* self, char* data, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qformdatapartbuilder.html#setBody)
///
/// @param self QFormDataPartBuilder*
/// @param data char*
/// @param fileName const char*
/// @param mimeType const char*
///
QFormDataPartBuilder* q_formdatapartbuilder_set_body3(void* self, char* data, const char* fileName, const char* mimeType);

/// [Upstream resources](https://doc.qt.io/qt-6/qformdatapartbuilder.html#setBodyDevice)
///
/// @param self QFormDataPartBuilder*
/// @param body QIODevice*
/// @param fileName const char*
///
QFormDataPartBuilder* q_formdatapartbuilder_set_body_device2(void* self, void* body, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qformdatapartbuilder.html#setBodyDevice)
///
/// @param self QFormDataPartBuilder*
/// @param body QIODevice*
/// @param fileName const char*
/// @param mimeType const char*
///
QFormDataPartBuilder* q_formdatapartbuilder_set_body_device3(void* self, void* body, const char* fileName, const char* mimeType);

/// [Upstream resources](https://doc.qt.io/qt-6/qformdatapartbuilder.html#dtor.QFormDataPartBuilder)
///
/// Delete this object from C++ memory.
///
/// @param self QFormDataPartBuilder*
///
void q_formdatapartbuilder_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qformdatabuilder.html)

/// q_formdatabuilder_new constructs a new QFormDataBuilder object.
///
QFormDataBuilder* q_formdatabuilder_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qformdatabuilder.html#swap)
///
/// @param self QFormDataBuilder*
/// @param other QFormDataBuilder*
///
void q_formdatabuilder_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qformdatabuilder.html#part)
///
/// @param self QFormDataBuilder*
/// @param name const char*
///
QFormDataPartBuilder* q_formdatabuilder_part(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qformdatabuilder.html#dtor.QFormDataBuilder)
///
/// Delete this object from C++ memory.
///
/// @param self QFormDataBuilder*
///
void q_formdatabuilder_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qformdatabuilder.html#public-types)

typedef enum {
    QFORMDATABUILDER_OPTION_DEFAULT = 0,
    QFORMDATABUILDER_OPTION_OMITRFC8187ENCODEDFILENAME = 1,
    QFORMDATABUILDER_OPTION_USERFC7578PERCENTENCODEDFILENAME = 2,
    QFORMDATABUILDER_OPTION_PREFERLATIN1ENCODEDFILENAME = 4,
    QFORMDATABUILDER_OPTION_STRICTRFC7578 = 3
} QFormDataBuilder__Option;

#endif
