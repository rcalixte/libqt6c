#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQHTTP2CONFIGURATION_H
#define SRC_NETWORK_QT6C_LIBQHTTP2CONFIGURATION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qhttp2configuration.html

/// q_http2configuration_new constructs a new QHttp2Configuration object.
///
QHttp2Configuration* q_http2configuration_new();

/// q_http2configuration_new2 constructs a new QHttp2Configuration object.
///
/// @param other QHttp2Configuration*
QHttp2Configuration* q_http2configuration_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#operator-eq)
///
/// @param self QHttp2Configuration*
/// @param other QHttp2Configuration*
void q_http2configuration_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#setServerPushEnabled)
///
/// @param self QHttp2Configuration*
/// @param enable bool
void q_http2configuration_set_server_push_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#serverPushEnabled)
///
/// @param self QHttp2Configuration*
bool q_http2configuration_server_push_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#setHuffmanCompressionEnabled)
///
/// @param self QHttp2Configuration*
/// @param enable bool
void q_http2configuration_set_huffman_compression_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#huffmanCompressionEnabled)
///
/// @param self QHttp2Configuration*
bool q_http2configuration_huffman_compression_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#setSessionReceiveWindowSize)
///
/// @param self QHttp2Configuration*
/// @param size uint32_t
bool q_http2configuration_set_session_receive_window_size(void* self, uint32_t size);

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#sessionReceiveWindowSize)
///
/// @param self QHttp2Configuration*
uint32_t q_http2configuration_session_receive_window_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#setStreamReceiveWindowSize)
///
/// @param self QHttp2Configuration*
/// @param size uint32_t
bool q_http2configuration_set_stream_receive_window_size(void* self, uint32_t size);

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#streamReceiveWindowSize)
///
/// @param self QHttp2Configuration*
uint32_t q_http2configuration_stream_receive_window_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#setMaxFrameSize)
///
/// @param self QHttp2Configuration*
/// @param size uint32_t
bool q_http2configuration_set_max_frame_size(void* self, uint32_t size);

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#maxFrameSize)
///
/// @param self QHttp2Configuration*
uint32_t q_http2configuration_max_frame_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#swap)
///
/// @param self QHttp2Configuration*
/// @param other QHttp2Configuration*
void q_http2configuration_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#dtor.QHttp2Configuration)
///
/// Delete this object from C++ memory.
///
/// @param self QHttp2Configuration*
void q_http2configuration_delete(void* self);

#endif
