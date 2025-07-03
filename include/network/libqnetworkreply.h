#pragma once
#ifndef SRC_NETWORKQT6C_LIBQNETWORKREPLY_H
#define SRC_NETWORKQT6C_LIBQNETWORKREPLY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqiodevice.h"
#include "../libqiodevicebase.h"
#include "../libqmetaobject.h"
#include "libqnetworkaccessmanager.h"
#include "libqnetworkrequest.h"
#include "../libqobject.h"
#include "libqsslconfiguration.h"
#include "libqsslerror.h"
#include "libqsslpresharedkeyauthenticator.h"
#include <string.h>
#include "../libqurl.h"
#include "../libqvariant.h"

/// https://doc.qt.io/qt-6/qnetworkreply.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QNetworkReply* self ```
const QMetaObject* q_networkreply_meta_object(void* self);

/// ``` QNetworkReply* self, const char* param1 ```
void* q_networkreply_metacast(void* self, const char* param1);

/// ``` QNetworkReply* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_networkreply_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_networkreply_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#close)
///
/// ``` QNetworkReply* self ```
void q_networkreply_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#isSequential)
///
/// ``` QNetworkReply* self ```
bool q_networkreply_is_sequential(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#readBufferSize)
///
/// ``` QNetworkReply* self ```
long long q_networkreply_read_buffer_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#setReadBufferSize)
///
/// ``` QNetworkReply* self, long long size ```
void q_networkreply_set_read_buffer_size(void* self, long long size);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#manager)
///
/// ``` QNetworkReply* self ```
QNetworkAccessManager* q_networkreply_manager(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#operation)
///
/// ``` QNetworkReply* self ```
int64_t q_networkreply_operation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#request)
///
/// ``` QNetworkReply* self ```
QNetworkRequest* q_networkreply_request(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#error)
///
/// ``` QNetworkReply* self ```
int64_t q_networkreply_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#isFinished)
///
/// ``` QNetworkReply* self ```
bool q_networkreply_is_finished(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#isRunning)
///
/// ``` QNetworkReply* self ```
bool q_networkreply_is_running(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#url)
///
/// ``` QNetworkReply* self ```
QUrl* q_networkreply_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#header)
///
/// ``` QNetworkReply* self, enum QNetworkRequest__KnownHeaders header ```
QVariant* q_networkreply_header(void* self, int64_t header);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#hasRawHeader)
///
/// ``` QNetworkReply* self, const char* headerName ```
bool q_networkreply_has_raw_header(void* self, const char* headerName);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#rawHeaderList)
///
/// ``` QNetworkReply* self ```
const char** q_networkreply_raw_header_list(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#rawHeader)
///
/// ``` QNetworkReply* self, const char* headerName ```
char* q_networkreply_raw_header(void* self, const char* headerName);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#rawHeaderPairs)
///
/// ``` QNetworkReply* self ```
libqt_list /* of libqt_pair  tuple of char* and char*  */ q_networkreply_raw_header_pairs(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#attribute)
///
/// ``` QNetworkReply* self, enum QNetworkRequest__Attribute code ```
QVariant* q_networkreply_attribute(void* self, int64_t code);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#sslConfiguration)
///
/// ``` QNetworkReply* self ```
QSslConfiguration* q_networkreply_ssl_configuration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#setSslConfiguration)
///
/// ``` QNetworkReply* self, QSslConfiguration* configuration ```
void q_networkreply_set_ssl_configuration(void* self, void* configuration);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#ignoreSslErrors)
///
/// ``` QNetworkReply* self, libqt_list /* of QSslError* */ errors ```
void q_networkreply_ignore_ssl_errors(void* self, libqt_list errors);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#abort)
///
/// ``` QNetworkReply* self ```
void q_networkreply_abort(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#ignoreSslErrors)
///
/// ``` QNetworkReply* self ```
void q_networkreply_ignore_ssl_errors2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#socketStartedConnecting)
///
/// ``` QNetworkReply* self ```
void q_networkreply_socket_started_connecting(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#socketStartedConnecting)
///
/// ``` QNetworkReply* self, void (*slot)(QNetworkReply*) ```
void q_networkreply_on_socket_started_connecting(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#requestSent)
///
/// ``` QNetworkReply* self ```
void q_networkreply_request_sent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#requestSent)
///
/// ``` QNetworkReply* self, void (*slot)(QNetworkReply*) ```
void q_networkreply_on_request_sent(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#metaDataChanged)
///
/// ``` QNetworkReply* self ```
void q_networkreply_meta_data_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#metaDataChanged)
///
/// ``` QNetworkReply* self, void (*slot)(QNetworkReply*) ```
void q_networkreply_on_meta_data_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#finished)
///
/// ``` QNetworkReply* self ```
void q_networkreply_finished(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#finished)
///
/// ``` QNetworkReply* self, void (*slot)(QNetworkReply*) ```
void q_networkreply_on_finished(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#errorOccurred)
///
/// ``` QNetworkReply* self, enum QNetworkReply__NetworkError param1 ```
void q_networkreply_error_occurred(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#errorOccurred)
///
/// ``` QNetworkReply* self, void (*slot)(QNetworkReply*, enum QNetworkReply__NetworkError) ```
void q_networkreply_on_error_occurred(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#encrypted)
///
/// ``` QNetworkReply* self ```
void q_networkreply_encrypted(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#encrypted)
///
/// ``` QNetworkReply* self, void (*slot)(QNetworkReply*) ```
void q_networkreply_on_encrypted(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#sslErrors)
///
/// ``` QNetworkReply* self, libqt_list /* of QSslError* */ errors ```
void q_networkreply_ssl_errors(void* self, libqt_list errors);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#sslErrors)
///
/// ``` QNetworkReply* self, void (*slot)(QNetworkReply*, libqt_list /* of QSslError* */ errors ) ```
void q_networkreply_on_ssl_errors(void* self, void (*slot)(void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#preSharedKeyAuthenticationRequired)
///
/// ``` QNetworkReply* self, QSslPreSharedKeyAuthenticator* authenticator ```
void q_networkreply_pre_shared_key_authentication_required(void* self, void* authenticator);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#preSharedKeyAuthenticationRequired)
///
/// ``` QNetworkReply* self, void (*slot)(QNetworkReply*, QSslPreSharedKeyAuthenticator*) ```
void q_networkreply_on_pre_shared_key_authentication_required(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#redirected)
///
/// ``` QNetworkReply* self, QUrl* url ```
void q_networkreply_redirected(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#redirected)
///
/// ``` QNetworkReply* self, void (*slot)(QNetworkReply*, QUrl*) ```
void q_networkreply_on_redirected(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#redirectAllowed)
///
/// ``` QNetworkReply* self ```
void q_networkreply_redirect_allowed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#redirectAllowed)
///
/// ``` QNetworkReply* self, void (*slot)(QNetworkReply*) ```
void q_networkreply_on_redirect_allowed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#uploadProgress)
///
/// ``` QNetworkReply* self, long long bytesSent, long long bytesTotal ```
void q_networkreply_upload_progress(void* self, long long bytesSent, long long bytesTotal);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#uploadProgress)
///
/// ``` QNetworkReply* self, void (*slot)(QNetworkReply*, long long, long long) ```
void q_networkreply_on_upload_progress(void* self, void (*slot)(void*, long long, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#downloadProgress)
///
/// ``` QNetworkReply* self, long long bytesReceived, long long bytesTotal ```
void q_networkreply_download_progress(void* self, long long bytesReceived, long long bytesTotal);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#downloadProgress)
///
/// ``` QNetworkReply* self, void (*slot)(QNetworkReply*, long long, long long) ```
void q_networkreply_on_download_progress(void* self, void (*slot)(void*, long long, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_networkreply_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_networkreply_tr3(const char* s, const char* c, int n);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// ``` QNetworkReply* self ```
int64_t q_networkreply_open_mode(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// ``` QNetworkReply* self, bool enabled ```
void q_networkreply_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// ``` QNetworkReply* self ```
bool q_networkreply_is_text_mode_enabled(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// ``` QNetworkReply* self ```
bool q_networkreply_is_open(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// ``` QNetworkReply* self ```
bool q_networkreply_is_readable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// ``` QNetworkReply* self ```
bool q_networkreply_is_writable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// ``` QNetworkReply* self ```
int32_t q_networkreply_read_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// ``` QNetworkReply* self ```
int32_t q_networkreply_write_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// ``` QNetworkReply* self ```
int32_t q_networkreply_current_read_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// ``` QNetworkReply* self, int channel ```
void q_networkreply_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// ``` QNetworkReply* self ```
int32_t q_networkreply_current_write_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// ``` QNetworkReply* self, int channel ```
void q_networkreply_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// ``` QNetworkReply* self, int mode ```
bool q_networkreply_open(void* self, int64_t mode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// ``` QNetworkReply* self ```
long long q_networkreply_pos(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// ``` QNetworkReply* self ```
long long q_networkreply_size(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// ``` QNetworkReply* self, long long pos ```
bool q_networkreply_seek(void* self, long long pos);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// ``` QNetworkReply* self ```
bool q_networkreply_at_end(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// ``` QNetworkReply* self ```
bool q_networkreply_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// ``` QNetworkReply* self ```
long long q_networkreply_bytes_available(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// ``` QNetworkReply* self ```
long long q_networkreply_bytes_to_write(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QNetworkReply* self, char* data, long long maxlen ```
long long q_networkreply_read(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QNetworkReply* self, long long maxlen ```
char* q_networkreply_read_with_maxlen(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// ``` QNetworkReply* self ```
char* q_networkreply_read_all(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QNetworkReply* self, char* data, long long maxlen ```
long long q_networkreply_read_line(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QNetworkReply* self ```
char* q_networkreply_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// ``` QNetworkReply* self ```
bool q_networkreply_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// ``` QNetworkReply* self ```
void q_networkreply_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// ``` QNetworkReply* self ```
void q_networkreply_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// ``` QNetworkReply* self ```
void q_networkreply_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// ``` QNetworkReply* self ```
bool q_networkreply_is_transaction_started(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QNetworkReply* self, const char* data, long long lenVal ```
long long q_networkreply_write(void* self, const char* data, long long lenVal);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QNetworkReply* self, const char* data ```
long long q_networkreply_write_with_data(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QNetworkReply* self, const char* data ```
long long q_networkreply_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QNetworkReply* self, char* data, long long maxlen ```
long long q_networkreply_peek(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QNetworkReply* self, long long maxlen ```
char* q_networkreply_peek_with_maxlen(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// ``` QNetworkReply* self, long long maxSize ```
long long q_networkreply_skip(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// ``` QNetworkReply* self, int msecs ```
bool q_networkreply_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// ``` QNetworkReply* self, int msecs ```
bool q_networkreply_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// ``` QNetworkReply* self, char c ```
void q_networkreply_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// ``` QNetworkReply* self, char c ```
bool q_networkreply_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// ``` QNetworkReply* self, char* c ```
bool q_networkreply_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// ``` QNetworkReply* self ```
const char* q_networkreply_error_string(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QNetworkReply* self ```
void q_networkreply_ready_read(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QNetworkReply* self, void (*slot)(QIODevice*) ```
void q_networkreply_on_ready_read(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QNetworkReply* self, int channel ```
void q_networkreply_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QNetworkReply* self, void (*slot)(QIODevice*, int) ```
void q_networkreply_on_channel_ready_read(void* self, void (*slot)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QNetworkReply* self, long long bytes ```
void q_networkreply_bytes_written(void* self, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QNetworkReply* self, void (*slot)(QIODevice*, long long) ```
void q_networkreply_on_bytes_written(void* self, void (*slot)(void*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QNetworkReply* self, int channel, long long bytes ```
void q_networkreply_channel_bytes_written(void* self, int channel, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QNetworkReply* self, void (*slot)(QIODevice*, int, long long) ```
void q_networkreply_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QNetworkReply* self ```
void q_networkreply_about_to_close(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QNetworkReply* self, void (*slot)(QIODevice*) ```
void q_networkreply_on_about_to_close(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QNetworkReply* self ```
void q_networkreply_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QNetworkReply* self, void (*slot)(QIODevice*) ```
void q_networkreply_on_read_channel_finished(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QNetworkReply* self, long long maxlen ```
char* q_networkreply_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QNetworkReply* self, QEvent* event ```
bool q_networkreply_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QNetworkReply* self, QObject* watched, QEvent* event ```
bool q_networkreply_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QNetworkReply* self ```
const char* q_networkreply_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QNetworkReply* self, char* name ```
void q_networkreply_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QNetworkReply* self ```
bool q_networkreply_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QNetworkReply* self ```
bool q_networkreply_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QNetworkReply* self ```
bool q_networkreply_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QNetworkReply* self ```
bool q_networkreply_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QNetworkReply* self, bool b ```
bool q_networkreply_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QNetworkReply* self ```
QThread* q_networkreply_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QNetworkReply* self, QThread* thread ```
void q_networkreply_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QNetworkReply* self, int interval ```
int32_t q_networkreply_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QNetworkReply* self, int id ```
void q_networkreply_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QNetworkReply* self ```
libqt_list /* of QObject* */ q_networkreply_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QNetworkReply* self, QObject* parent ```
void q_networkreply_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QNetworkReply* self, QObject* filterObj ```
void q_networkreply_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QNetworkReply* self, QObject* obj ```
void q_networkreply_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_networkreply_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QNetworkReply* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_networkreply_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_networkreply_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_networkreply_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QNetworkReply* self ```
void q_networkreply_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QNetworkReply* self ```
void q_networkreply_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QNetworkReply* self, const char* name, QVariant* value ```
bool q_networkreply_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QNetworkReply* self, const char* name ```
QVariant* q_networkreply_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QNetworkReply* self ```
const char** q_networkreply_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QNetworkReply* self ```
QBindingStorage* q_networkreply_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QNetworkReply* self ```
const QBindingStorage* q_networkreply_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QNetworkReply* self ```
void q_networkreply_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QNetworkReply* self, void (*slot)(QObject*) ```
void q_networkreply_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QNetworkReply* self ```
QObject* q_networkreply_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QNetworkReply* self, const char* classname ```
bool q_networkreply_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QNetworkReply* self ```
void q_networkreply_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QNetworkReply* self, int interval, enum Qt__TimerType timerType ```
int32_t q_networkreply_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_networkreply_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QNetworkReply* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_networkreply_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QNetworkReply* self, QObject* param1 ```
void q_networkreply_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QNetworkReply* self, void (*slot)(QObject*, QObject*) ```
void q_networkreply_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QNetworkReply* self, void (*slot)(QObject*, const char*) ```
void q_networkreply_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#dtor.QNetworkReply)
///
/// Delete this object from C++ memory.
///
/// ``` QNetworkReply* self ```
void q_networkreply_delete(void* self);

/// https://doc.qt.io/qt-6/qnetworkreply.html#types

typedef enum {
    QNETWORKREPLY_NETWORKERROR_NOERROR = 0,
    QNETWORKREPLY_NETWORKERROR_CONNECTIONREFUSEDERROR = 1,
    QNETWORKREPLY_NETWORKERROR_REMOTEHOSTCLOSEDERROR = 2,
    QNETWORKREPLY_NETWORKERROR_HOSTNOTFOUNDERROR = 3,
    QNETWORKREPLY_NETWORKERROR_TIMEOUTERROR = 4,
    QNETWORKREPLY_NETWORKERROR_OPERATIONCANCELEDERROR = 5,
    QNETWORKREPLY_NETWORKERROR_SSLHANDSHAKEFAILEDERROR = 6,
    QNETWORKREPLY_NETWORKERROR_TEMPORARYNETWORKFAILUREERROR = 7,
    QNETWORKREPLY_NETWORKERROR_NETWORKSESSIONFAILEDERROR = 8,
    QNETWORKREPLY_NETWORKERROR_BACKGROUNDREQUESTNOTALLOWEDERROR = 9,
    QNETWORKREPLY_NETWORKERROR_TOOMANYREDIRECTSERROR = 10,
    QNETWORKREPLY_NETWORKERROR_INSECUREREDIRECTERROR = 11,
    QNETWORKREPLY_NETWORKERROR_UNKNOWNNETWORKERROR = 99,
    QNETWORKREPLY_NETWORKERROR_PROXYCONNECTIONREFUSEDERROR = 101,
    QNETWORKREPLY_NETWORKERROR_PROXYCONNECTIONCLOSEDERROR = 102,
    QNETWORKREPLY_NETWORKERROR_PROXYNOTFOUNDERROR = 103,
    QNETWORKREPLY_NETWORKERROR_PROXYTIMEOUTERROR = 104,
    QNETWORKREPLY_NETWORKERROR_PROXYAUTHENTICATIONREQUIREDERROR = 105,
    QNETWORKREPLY_NETWORKERROR_UNKNOWNPROXYERROR = 199,
    QNETWORKREPLY_NETWORKERROR_CONTENTACCESSDENIED = 201,
    QNETWORKREPLY_NETWORKERROR_CONTENTOPERATIONNOTPERMITTEDERROR = 202,
    QNETWORKREPLY_NETWORKERROR_CONTENTNOTFOUNDERROR = 203,
    QNETWORKREPLY_NETWORKERROR_AUTHENTICATIONREQUIREDERROR = 204,
    QNETWORKREPLY_NETWORKERROR_CONTENTRESENDERROR = 205,
    QNETWORKREPLY_NETWORKERROR_CONTENTCONFLICTERROR = 206,
    QNETWORKREPLY_NETWORKERROR_CONTENTGONEERROR = 207,
    QNETWORKREPLY_NETWORKERROR_UNKNOWNCONTENTERROR = 299,
    QNETWORKREPLY_NETWORKERROR_PROTOCOLUNKNOWNERROR = 301,
    QNETWORKREPLY_NETWORKERROR_PROTOCOLINVALIDOPERATIONERROR = 302,
    QNETWORKREPLY_NETWORKERROR_PROTOCOLFAILURE = 399,
    QNETWORKREPLY_NETWORKERROR_INTERNALSERVERERROR = 401,
    QNETWORKREPLY_NETWORKERROR_OPERATIONNOTIMPLEMENTEDERROR = 402,
    QNETWORKREPLY_NETWORKERROR_SERVICEUNAVAILABLEERROR = 403,
    QNETWORKREPLY_NETWORKERROR_UNKNOWNSERVERERROR = 499
} QNetworkReply__NetworkError;

#endif
