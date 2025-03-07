#include "libqhttp2configuration.hpp"
#include "libqhttp2configuration.h"

/// https://doc.qt.io/qt-6/qhttp2configuration.html

/// q_http2configuration_new constructs a new QHttp2Configuration object.
///
///
QHttp2Configuration* q_http2configuration_new() {
    return QHttp2Configuration_new();
}

/// q_http2configuration_new2 constructs a new QHttp2Configuration object.
///
/// ``` QHttp2Configuration* other ```
QHttp2Configuration* q_http2configuration_new2(void* other) {
    return QHttp2Configuration_new2((QHttp2Configuration*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#operator=)
///
/// ``` QHttp2Configuration* self, QHttp2Configuration* other ```
void q_http2configuration_operator_assign(void* self, void* other) {
    QHttp2Configuration_OperatorAssign((QHttp2Configuration*)self, (QHttp2Configuration*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#setServerPushEnabled)
///
/// ``` QHttp2Configuration* self, bool enable ```
void q_http2configuration_set_server_push_enabled(void* self, bool enable) {
    QHttp2Configuration_SetServerPushEnabled((QHttp2Configuration*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#serverPushEnabled)
///
/// ``` QHttp2Configuration* self ```
bool q_http2configuration_server_push_enabled(void* self) {
    return QHttp2Configuration_ServerPushEnabled((QHttp2Configuration*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#setHuffmanCompressionEnabled)
///
/// ``` QHttp2Configuration* self, bool enable ```
void q_http2configuration_set_huffman_compression_enabled(void* self, bool enable) {
    QHttp2Configuration_SetHuffmanCompressionEnabled((QHttp2Configuration*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#huffmanCompressionEnabled)
///
/// ``` QHttp2Configuration* self ```
bool q_http2configuration_huffman_compression_enabled(void* self) {
    return QHttp2Configuration_HuffmanCompressionEnabled((QHttp2Configuration*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#setSessionReceiveWindowSize)
///
/// ``` QHttp2Configuration* self, uint32_t size ```
bool q_http2configuration_set_session_receive_window_size(void* self, uint32_t size) {
    return QHttp2Configuration_SetSessionReceiveWindowSize((QHttp2Configuration*)self, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#sessionReceiveWindowSize)
///
/// ``` QHttp2Configuration* self ```
uint32_t q_http2configuration_session_receive_window_size(void* self) {
    return QHttp2Configuration_SessionReceiveWindowSize((QHttp2Configuration*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#setStreamReceiveWindowSize)
///
/// ``` QHttp2Configuration* self, uint32_t size ```
bool q_http2configuration_set_stream_receive_window_size(void* self, uint32_t size) {
    return QHttp2Configuration_SetStreamReceiveWindowSize((QHttp2Configuration*)self, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#streamReceiveWindowSize)
///
/// ``` QHttp2Configuration* self ```
uint32_t q_http2configuration_stream_receive_window_size(void* self) {
    return QHttp2Configuration_StreamReceiveWindowSize((QHttp2Configuration*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#setMaxFrameSize)
///
/// ``` QHttp2Configuration* self, uint32_t size ```
bool q_http2configuration_set_max_frame_size(void* self, uint32_t size) {
    return QHttp2Configuration_SetMaxFrameSize((QHttp2Configuration*)self, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#maxFrameSize)
///
/// ``` QHttp2Configuration* self ```
uint32_t q_http2configuration_max_frame_size(void* self) {
    return QHttp2Configuration_MaxFrameSize((QHttp2Configuration*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp2configuration.html#swap)
///
/// ``` QHttp2Configuration* self, QHttp2Configuration* other ```
void q_http2configuration_swap(void* self, void* other) {
    QHttp2Configuration_Swap((QHttp2Configuration*)self, (QHttp2Configuration*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QHttp2Configuration* self ```
void q_http2configuration_delete(void* self) {
    QHttp2Configuration_Delete((QHttp2Configuration*)(self));
}