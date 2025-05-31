#pragma once
#ifndef SRC_NETWORKQT6C_LIBQHTTP2CONFIGURATION_H
#define SRC_NETWORKQT6C_LIBQHTTP2CONFIGURATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qhttp2configuration.html

/// q_http2configuration_new constructs a new QHttp2Configuration object.
///
///
QHttp2Configuration* q_http2configuration_new();

/// q_http2configuration_new2 constructs a new QHttp2Configuration object.
///
/// ``` QHttp2Configuration* other ```
QHttp2Configuration* q_http2configuration_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#operator=)
///
/// ``` QHttp2Configuration* self, QHttp2Configuration* other ```
void q_http2configuration_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#setServerPushEnabled)
///
/// ``` QHttp2Configuration* self, bool enable ```
void q_http2configuration_set_server_push_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#serverPushEnabled)
///
/// ``` QHttp2Configuration* self ```
bool q_http2configuration_server_push_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#setHuffmanCompressionEnabled)
///
/// ``` QHttp2Configuration* self, bool enable ```
void q_http2configuration_set_huffman_compression_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#huffmanCompressionEnabled)
///
/// ``` QHttp2Configuration* self ```
bool q_http2configuration_huffman_compression_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#setSessionReceiveWindowSize)
///
/// ``` QHttp2Configuration* self, uint32_t size ```
bool q_http2configuration_set_session_receive_window_size(void* self, uint32_t size);

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#sessionReceiveWindowSize)
///
/// ``` QHttp2Configuration* self ```
uint32_t q_http2configuration_session_receive_window_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#setStreamReceiveWindowSize)
///
/// ``` QHttp2Configuration* self, uint32_t size ```
bool q_http2configuration_set_stream_receive_window_size(void* self, uint32_t size);

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#streamReceiveWindowSize)
///
/// ``` QHttp2Configuration* self ```
uint32_t q_http2configuration_stream_receive_window_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#setMaxFrameSize)
///
/// ``` QHttp2Configuration* self, uint32_t size ```
bool q_http2configuration_set_max_frame_size(void* self, uint32_t size);

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#maxFrameSize)
///
/// ``` QHttp2Configuration* self ```
uint32_t q_http2configuration_max_frame_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#swap)
///
/// ``` QHttp2Configuration* self, QHttp2Configuration* other ```
void q_http2configuration_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#dtor.QHttp2Configuration)
///
/// Delete this object from C++ memory.
///
/// ``` QHttp2Configuration* self ```
void q_http2configuration_delete(void* self);

#endif
