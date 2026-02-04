#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQNETWORKREPLY_H
#define SRC_NETWORK_QT6C_LIBQNETWORKREPLY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QNetworkReply*
///
const QMetaObject* q_networkreply_meta_object(void* self);

/// @param self QNetworkReply*
/// @param param1 const char*
///
void* q_networkreply_metacast(void* self, const char* param1);

/// @param self QNetworkReply*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_networkreply_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_networkreply_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#close)
///
/// @param self QNetworkReply*
///
void q_networkreply_close(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#isSequential)
///
/// @param self QNetworkReply*
///
bool q_networkreply_is_sequential(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#readBufferSize)
///
/// @param self QNetworkReply*
///
long long q_networkreply_read_buffer_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#setReadBufferSize)
///
/// @param self QNetworkReply*
/// @param size long long
///
void q_networkreply_set_read_buffer_size(void* self, long long size);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#manager)
///
/// @param self QNetworkReply*
///
QNetworkAccessManager* q_networkreply_manager(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#operation)
///
/// @param self QNetworkReply*
///
/// @return enum QNetworkAccessManager__Operation
///
int32_t q_networkreply_operation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#request)
///
/// @param self QNetworkReply*
///
QNetworkRequest* q_networkreply_request(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#error)
///
/// @param self QNetworkReply*
///
/// @return enum QNetworkReply__NetworkError
///
int32_t q_networkreply_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#isFinished)
///
/// @param self QNetworkReply*
///
bool q_networkreply_is_finished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#isRunning)
///
/// @param self QNetworkReply*
///
bool q_networkreply_is_running(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#url)
///
/// @param self QNetworkReply*
///
QUrl* q_networkreply_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#header)
///
/// @param self QNetworkReply*
/// @param header enum QNetworkRequest__KnownHeaders
///
QVariant* q_networkreply_header(void* self, int32_t header);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#hasRawHeader)
///
/// @param self QNetworkReply*
/// @param headerName char*
///
bool q_networkreply_has_raw_header(void* self, char* headerName);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#rawHeaderList)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QNetworkReply*
///
const char** q_networkreply_raw_header_list(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#rawHeader)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QNetworkReply*
/// @param headerName char*
///
char* q_networkreply_raw_header(void* self, char* headerName);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#rawHeaderPairs)
///
/// @param self QNetworkReply*
///
/// @return libqt_list of libqt_pair tuple of char* and char*
///
libqt_list q_networkreply_raw_header_pairs(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#headers)
///
/// @param self QNetworkReply*
///
QHttpHeaders* q_networkreply_headers(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#attribute)
///
/// @param self QNetworkReply*
/// @param code enum QNetworkRequest__Attribute
///
QVariant* q_networkreply_attribute(void* self, int32_t code);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#sslConfiguration)
///
/// @param self QNetworkReply*
///
QSslConfiguration* q_networkreply_ssl_configuration(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#setSslConfiguration)
///
/// @param self QNetworkReply*
/// @param configuration QSslConfiguration*
///
void q_networkreply_set_ssl_configuration(void* self, void* configuration);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#ignoreSslErrors)
///
/// @param self QNetworkReply*
/// @param errors libqt_list of QSslError*
///
void q_networkreply_ignore_ssl_errors(void* self, libqt_list errors);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#abort)
///
/// @param self QNetworkReply*
///
void q_networkreply_abort(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#ignoreSslErrors)
///
/// @param self QNetworkReply*
///
void q_networkreply_ignore_ssl_errors2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#socketStartedConnecting)
///
/// @param self QNetworkReply*
///
void q_networkreply_socket_started_connecting(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#socketStartedConnecting)
///
/// @param self QNetworkReply*
/// @param callback void func(QNetworkReply* self)
///
void q_networkreply_on_socket_started_connecting(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#requestSent)
///
/// @param self QNetworkReply*
///
void q_networkreply_request_sent(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#requestSent)
///
/// @param self QNetworkReply*
/// @param callback void func(QNetworkReply* self)
///
void q_networkreply_on_request_sent(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#metaDataChanged)
///
/// @param self QNetworkReply*
///
void q_networkreply_meta_data_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#metaDataChanged)
///
/// @param self QNetworkReply*
/// @param callback void func(QNetworkReply* self)
///
void q_networkreply_on_meta_data_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#finished)
///
/// @param self QNetworkReply*
///
void q_networkreply_finished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#finished)
///
/// @param self QNetworkReply*
/// @param callback void func(QNetworkReply* self)
///
void q_networkreply_on_finished(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#errorOccurred)
///
/// @param self QNetworkReply*
/// @param param1 enum QNetworkReply__NetworkError
///
void q_networkreply_error_occurred(void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#errorOccurred)
///
/// @param self QNetworkReply*
/// @param callback void func(QNetworkReply* self, enum QNetworkReply__NetworkError param1)
///
void q_networkreply_on_error_occurred(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#encrypted)
///
/// @param self QNetworkReply*
///
void q_networkreply_encrypted(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#encrypted)
///
/// @param self QNetworkReply*
/// @param callback void func(QNetworkReply* self)
///
void q_networkreply_on_encrypted(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#sslErrors)
///
/// @param self QNetworkReply*
/// @param errors libqt_list of QSslError*
///
void q_networkreply_ssl_errors(void* self, libqt_list errors);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#sslErrors)
///
/// @param self QNetworkReply*
/// @param callback void func(QNetworkReply* self, libqt_list of QSslError* errors)
///
void q_networkreply_on_ssl_errors(void* self, void (*callback)(void*, libqt_list));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#preSharedKeyAuthenticationRequired)
///
/// @param self QNetworkReply*
/// @param authenticator QSslPreSharedKeyAuthenticator*
///
void q_networkreply_pre_shared_key_authentication_required(void* self, void* authenticator);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#preSharedKeyAuthenticationRequired)
///
/// @param self QNetworkReply*
/// @param callback void func(QNetworkReply* self, QSslPreSharedKeyAuthenticator* authenticator)
///
void q_networkreply_on_pre_shared_key_authentication_required(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#redirected)
///
/// @param self QNetworkReply*
/// @param url QUrl*
///
void q_networkreply_redirected(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#redirected)
///
/// @param self QNetworkReply*
/// @param callback void func(QNetworkReply* self, QUrl* url)
///
void q_networkreply_on_redirected(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#redirectAllowed)
///
/// @param self QNetworkReply*
///
void q_networkreply_redirect_allowed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#redirectAllowed)
///
/// @param self QNetworkReply*
/// @param callback void func(QNetworkReply* self)
///
void q_networkreply_on_redirect_allowed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#uploadProgress)
///
/// @param self QNetworkReply*
/// @param bytesSent long long
/// @param bytesTotal long long
///
void q_networkreply_upload_progress(void* self, long long bytesSent, long long bytesTotal);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#uploadProgress)
///
/// @param self QNetworkReply*
/// @param callback void func(QNetworkReply* self, long long bytesSent, long long bytesTotal)
///
void q_networkreply_on_upload_progress(void* self, void (*callback)(void*, long long, long long));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#downloadProgress)
///
/// @param self QNetworkReply*
/// @param bytesReceived long long
/// @param bytesTotal long long
///
void q_networkreply_download_progress(void* self, long long bytesReceived, long long bytesTotal);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#downloadProgress)
///
/// @param self QNetworkReply*
/// @param callback void func(QNetworkReply* self, long long bytesReceived, long long bytesTotal)
///
void q_networkreply_on_download_progress(void* self, void (*callback)(void*, long long, long long));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_networkreply_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_networkreply_tr3(const char* s, const char* c, int n);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// @param self QNetworkReply*
///
/// @return flag of enum QIODeviceBase__OpenModeFlag
///
int32_t q_networkreply_open_mode(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// @param self QNetworkReply*
/// @param enabled bool
///
void q_networkreply_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// @param self QNetworkReply*
///
bool q_networkreply_is_text_mode_enabled(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// @param self QNetworkReply*
///
bool q_networkreply_is_open(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// @param self QNetworkReply*
///
bool q_networkreply_is_readable(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// @param self QNetworkReply*
///
bool q_networkreply_is_writable(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// @param self QNetworkReply*
///
int32_t q_networkreply_read_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// @param self QNetworkReply*
///
int32_t q_networkreply_write_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// @param self QNetworkReply*
///
int32_t q_networkreply_current_read_channel(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// @param self QNetworkReply*
/// @param channel int
///
void q_networkreply_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// @param self QNetworkReply*
///
int32_t q_networkreply_current_write_channel(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// @param self QNetworkReply*
/// @param channel int
///
void q_networkreply_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// @param self QNetworkReply*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
bool q_networkreply_open(void* self, int32_t mode);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// @param self QNetworkReply*
///
long long q_networkreply_pos(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// @param self QNetworkReply*
///
long long q_networkreply_size(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// @param self QNetworkReply*
/// @param pos long long
///
bool q_networkreply_seek(void* self, long long pos);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// @param self QNetworkReply*
///
bool q_networkreply_at_end(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// @param self QNetworkReply*
///
bool q_networkreply_reset(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// @param self QNetworkReply*
///
long long q_networkreply_bytes_available(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// @param self QNetworkReply*
///
long long q_networkreply_bytes_to_write(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @param self QNetworkReply*
/// @param data char*
/// @param maxlen long long
///
long long q_networkreply_read(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QNetworkReply*
/// @param maxlen long long
///
char* q_networkreply_read2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QNetworkReply*
///
char* q_networkreply_read_all(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @param self QNetworkReply*
/// @param data char*
/// @param maxlen long long
///
long long q_networkreply_read_line(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QNetworkReply*
///
char* q_networkreply_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// @param self QNetworkReply*
///
bool q_networkreply_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// @param self QNetworkReply*
///
void q_networkreply_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// @param self QNetworkReply*
///
void q_networkreply_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// @param self QNetworkReply*
///
void q_networkreply_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// @param self QNetworkReply*
///
bool q_networkreply_is_transaction_started(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QNetworkReply*
/// @param data const char*
/// @param lenVal long long
///
long long q_networkreply_write(void* self, const char* data, long long lenVal);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QNetworkReply*
/// @param data const char*
///
long long q_networkreply_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QNetworkReply*
/// @param data const char*
///
long long q_networkreply_write3(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @param self QNetworkReply*
/// @param data char*
/// @param maxlen long long
///
long long q_networkreply_peek(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QNetworkReply*
/// @param maxlen long long
///
char* q_networkreply_peek2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// @param self QNetworkReply*
/// @param maxSize long long
///
long long q_networkreply_skip(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// @param self QNetworkReply*
/// @param msecs int
///
bool q_networkreply_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// @param self QNetworkReply*
/// @param msecs int
///
bool q_networkreply_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// @param self QNetworkReply*
/// @param c char
///
void q_networkreply_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// @param self QNetworkReply*
/// @param c char
///
bool q_networkreply_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// @param self QNetworkReply*
/// @param c char*
///
bool q_networkreply_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QNetworkReply*
///
const char* q_networkreply_error_string(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QNetworkReply*
///
void q_networkreply_ready_read(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QNetworkReply*
/// @param callback void func(QNetworkReply* self)
///
void q_networkreply_on_ready_read(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QNetworkReply*
/// @param channel int
///
void q_networkreply_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QNetworkReply*
/// @param callback void func(QNetworkReply* self, int channel)
///
void q_networkreply_on_channel_ready_read(void* self, void (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QNetworkReply*
/// @param bytes long long
///
void q_networkreply_bytes_written(void* self, long long bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QNetworkReply*
/// @param callback void func(QNetworkReply* self, long long bytes)
///
void q_networkreply_on_bytes_written(void* self, void (*callback)(void*, long long));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QNetworkReply*
/// @param channel int
/// @param bytes long long
///
void q_networkreply_channel_bytes_written(void* self, int channel, long long bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QNetworkReply*
/// @param callback void func(QNetworkReply* self, int channel, long long bytes)
///
void q_networkreply_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QNetworkReply*
///
void q_networkreply_about_to_close(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QNetworkReply*
/// @param callback void func(QNetworkReply* self)
///
void q_networkreply_on_about_to_close(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QNetworkReply*
///
void q_networkreply_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QNetworkReply*
/// @param callback void func(QNetworkReply* self)
///
void q_networkreply_on_read_channel_finished(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QNetworkReply*
/// @param maxlen long long
///
char* q_networkreply_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QNetworkReply*
/// @param event QEvent*
///
bool q_networkreply_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QNetworkReply*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_networkreply_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QNetworkReply*
///
const char* q_networkreply_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QNetworkReply*
/// @param name char*
///
void q_networkreply_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QNetworkReply*
///
bool q_networkreply_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QNetworkReply*
///
bool q_networkreply_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QNetworkReply*
///
bool q_networkreply_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QNetworkReply*
///
bool q_networkreply_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QNetworkReply*
/// @param b bool
///
bool q_networkreply_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QNetworkReply*
///
QThread* q_networkreply_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QNetworkReply*
/// @param thread QThread*
///
bool q_networkreply_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QNetworkReply*
/// @param interval int
///
int32_t q_networkreply_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QNetworkReply*
/// @param time int64_t of nanoseconds
///
int32_t q_networkreply_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QNetworkReply*
/// @param id int
///
void q_networkreply_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QNetworkReply*
/// @param id enum Qt__TimerId
///
void q_networkreply_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QNetworkReply*
///
/// @return libqt_list of QObject*
///
libqt_list q_networkreply_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QNetworkReply*
/// @param parent QObject*
///
void q_networkreply_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QNetworkReply*
/// @param filterObj QObject*
///
void q_networkreply_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QNetworkReply*
/// @param obj QObject*
///
void q_networkreply_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_networkreply_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_networkreply_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QNetworkReply*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_networkreply_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_networkreply_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_networkreply_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QNetworkReply*
///
bool q_networkreply_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QNetworkReply*
/// @param receiver QObject*
///
bool q_networkreply_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_networkreply_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QNetworkReply*
///
void q_networkreply_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QNetworkReply*
///
void q_networkreply_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QNetworkReply*
/// @param name const char*
/// @param value QVariant*
///
bool q_networkreply_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QNetworkReply*
/// @param name const char*
///
QVariant* q_networkreply_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QNetworkReply*
///
const char** q_networkreply_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QNetworkReply*
///
QBindingStorage* q_networkreply_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QNetworkReply*
///
const QBindingStorage* q_networkreply_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QNetworkReply*
///
void q_networkreply_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QNetworkReply*
/// @param callback void func(QNetworkReply* self)
///
void q_networkreply_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QNetworkReply*
///
QObject* q_networkreply_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QNetworkReply*
/// @param classname const char*
///
bool q_networkreply_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QNetworkReply*
///
void q_networkreply_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QNetworkReply*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_networkreply_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QNetworkReply*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_networkreply_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_networkreply_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_networkreply_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QNetworkReply*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_networkreply_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QNetworkReply*
/// @param signal const char*
///
bool q_networkreply_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QNetworkReply*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_networkreply_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QNetworkReply*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_networkreply_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QNetworkReply*
/// @param receiver QObject*
/// @param member const char*
///
bool q_networkreply_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QNetworkReply*
/// @param param1 QObject*
///
void q_networkreply_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QNetworkReply*
/// @param callback void func(QNetworkReply* self, QObject* param1)
///
void q_networkreply_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QNetworkReply*
/// @param callback void func(QNetworkReply* self, const char* objectName)
///
void q_networkreply_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#dtor.QNetworkReply)
///
/// Delete this object from C++ memory.
///
/// @param self QNetworkReply*
///
void q_networkreply_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#public-types)

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
