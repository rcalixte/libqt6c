#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqiodevice.hpp"
#include "../libqiodevicebase.hpp"
#include "../libqmetaobject.hpp"
#include "libqnetworkaccessmanager.hpp"
#include "libqnetworkrequest.hpp"
#include "../libqobject.hpp"
#include "libqsslconfiguration.hpp"
#include "libqsslerror.hpp"
#include "libqsslpresharedkeyauthenticator.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqnetworkreply.hpp"
#include "libqnetworkreply.h"

/// https://doc.qt.io/qt-6/qnetworkreply.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QNetworkReply* self ```
QMetaObject* q_networkreply_meta_object(void* self) {
    return QNetworkReply_MetaObject((QNetworkReply*)self);
}

/// ``` QNetworkReply* self, const char* param1 ```
void* q_networkreply_metacast(void* self, const char* param1) {
    return QNetworkReply_Metacast((QNetworkReply*)self, param1);
}

/// ``` QNetworkReply* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_networkreply_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QNetworkReply_Metacall((QNetworkReply*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_networkreply_tr(const char* s) {
    libqt_string _str = QNetworkReply_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#close)
///
/// ``` QNetworkReply* self ```
void q_networkreply_close(void* self) {
    QNetworkReply_Close((QNetworkReply*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#isSequential)
///
/// ``` QNetworkReply* self ```
bool q_networkreply_is_sequential(void* self) {
    return QNetworkReply_IsSequential((QNetworkReply*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#readBufferSize)
///
/// ``` QNetworkReply* self ```
long long q_networkreply_read_buffer_size(void* self) {
    return QNetworkReply_ReadBufferSize((QNetworkReply*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#setReadBufferSize)
///
/// ``` QNetworkReply* self, long long size ```
void q_networkreply_set_read_buffer_size(void* self, long long size) {
    QNetworkReply_SetReadBufferSize((QNetworkReply*)self, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#manager)
///
/// ``` QNetworkReply* self ```
QNetworkAccessManager* q_networkreply_manager(void* self) {
    return QNetworkReply_Manager((QNetworkReply*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#operation)
///
/// ``` QNetworkReply* self ```
int64_t q_networkreply_operation(void* self) {
    return QNetworkReply_Operation((QNetworkReply*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#request)
///
/// ``` QNetworkReply* self ```
QNetworkRequest* q_networkreply_request(void* self) {
    return QNetworkReply_Request((QNetworkReply*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#error)
///
/// ``` QNetworkReply* self ```
int64_t q_networkreply_error(void* self) {
    return QNetworkReply_Error((QNetworkReply*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#isFinished)
///
/// ``` QNetworkReply* self ```
bool q_networkreply_is_finished(void* self) {
    return QNetworkReply_IsFinished((QNetworkReply*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#isRunning)
///
/// ``` QNetworkReply* self ```
bool q_networkreply_is_running(void* self) {
    return QNetworkReply_IsRunning((QNetworkReply*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#url)
///
/// ``` QNetworkReply* self ```
QUrl* q_networkreply_url(void* self) {
    return QNetworkReply_Url((QNetworkReply*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#header)
///
/// ``` QNetworkReply* self, enum QNetworkRequest__KnownHeaders header ```
QVariant* q_networkreply_header(void* self, int64_t header) {
    return QNetworkReply_Header((QNetworkReply*)self, header);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#hasRawHeader)
///
/// ``` QNetworkReply* self, const char* headerName ```
bool q_networkreply_has_raw_header(void* self, const char* headerName) {
    return QNetworkReply_HasRawHeader((QNetworkReply*)self, qstring(headerName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#rawHeaderList)
///
/// ``` QNetworkReply* self ```
const char** q_networkreply_raw_header_list(void* self) {
    libqt_list _arr = QNetworkReply_RawHeaderList((QNetworkReply*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#rawHeader)
///
/// ``` QNetworkReply* self, const char* headerName ```
char* q_networkreply_raw_header(void* self, const char* headerName) {
    libqt_string _str = QNetworkReply_RawHeader((QNetworkReply*)self, qstring(headerName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#rawHeaderPairs)
///
/// ``` QNetworkReply* self ```
libqt_list /* of libqt_pair  tuple of char* and char*  */ q_networkreply_raw_header_pairs(void* self) {
    libqt_list _arr = QNetworkReply_RawHeaderPairs((QNetworkReply*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#attribute)
///
/// ``` QNetworkReply* self, enum QNetworkRequest__Attribute code ```
QVariant* q_networkreply_attribute(void* self, int64_t code) {
    return QNetworkReply_Attribute((QNetworkReply*)self, code);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#sslConfiguration)
///
/// ``` QNetworkReply* self ```
QSslConfiguration* q_networkreply_ssl_configuration(void* self) {
    return QNetworkReply_SslConfiguration((QNetworkReply*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#setSslConfiguration)
///
/// ``` QNetworkReply* self, QSslConfiguration* configuration ```
void q_networkreply_set_ssl_configuration(void* self, void* configuration) {
    QNetworkReply_SetSslConfiguration((QNetworkReply*)self, (QSslConfiguration*)configuration);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#ignoreSslErrors)
///
/// ``` QNetworkReply* self, QSslError* errors[] ```
void q_networkreply_ignore_ssl_errors(void* self, void* errors[]) {
    QSslError** errors_arr = (QSslError**)errors;
    size_t errors_len = 0;
    while (errors_arr[errors_len] != NULL) {
        errors_len++;
    }
    libqt_list errors_list = {
        .len = errors_len,
        .data = {(QSslError*)errors},
    };
    QNetworkReply_IgnoreSslErrors((QNetworkReply*)self, errors_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#abort)
///
/// ``` QNetworkReply* self ```
void q_networkreply_abort(void* self) {
    QNetworkReply_Abort((QNetworkReply*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#ignoreSslErrors)
///
/// ``` QNetworkReply* self ```
void q_networkreply_ignore_ssl_errors2(void* self) {
    QNetworkReply_IgnoreSslErrors2((QNetworkReply*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#socketStartedConnecting)
///
/// ``` QNetworkReply* self ```
void q_networkreply_socket_started_connecting(void* self) {
    QNetworkReply_SocketStartedConnecting((QNetworkReply*)self);
}

/// ``` QNetworkReply* self, void (*slot)(QNetworkReply*) ```
void q_networkreply_on_socket_started_connecting(void* self, void (*slot)(void*)) {
    QNetworkReply_Connect_SocketStartedConnecting((QNetworkReply*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#requestSent)
///
/// ``` QNetworkReply* self ```
void q_networkreply_request_sent(void* self) {
    QNetworkReply_RequestSent((QNetworkReply*)self);
}

/// ``` QNetworkReply* self, void (*slot)(QNetworkReply*) ```
void q_networkreply_on_request_sent(void* self, void (*slot)(void*)) {
    QNetworkReply_Connect_RequestSent((QNetworkReply*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#metaDataChanged)
///
/// ``` QNetworkReply* self ```
void q_networkreply_meta_data_changed(void* self) {
    QNetworkReply_MetaDataChanged((QNetworkReply*)self);
}

/// ``` QNetworkReply* self, void (*slot)(QNetworkReply*) ```
void q_networkreply_on_meta_data_changed(void* self, void (*slot)(void*)) {
    QNetworkReply_Connect_MetaDataChanged((QNetworkReply*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#finished)
///
/// ``` QNetworkReply* self ```
void q_networkreply_finished(void* self) {
    QNetworkReply_Finished((QNetworkReply*)self);
}

/// ``` QNetworkReply* self, void (*slot)(QNetworkReply*) ```
void q_networkreply_on_finished(void* self, void (*slot)(void*)) {
    QNetworkReply_Connect_Finished((QNetworkReply*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#errorOccurred)
///
/// ``` QNetworkReply* self, enum QNetworkReply__NetworkError param1 ```
void q_networkreply_error_occurred(void* self, int64_t param1) {
    QNetworkReply_ErrorOccurred((QNetworkReply*)self, param1);
}

/// ``` QNetworkReply* self, void (*slot)(QNetworkReply*, enum QNetworkReply__NetworkError) ```
void q_networkreply_on_error_occurred(void* self, void (*slot)(void*, int64_t)) {
    QNetworkReply_Connect_ErrorOccurred((QNetworkReply*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#encrypted)
///
/// ``` QNetworkReply* self ```
void q_networkreply_encrypted(void* self) {
    QNetworkReply_Encrypted((QNetworkReply*)self);
}

/// ``` QNetworkReply* self, void (*slot)(QNetworkReply*) ```
void q_networkreply_on_encrypted(void* self, void (*slot)(void*)) {
    QNetworkReply_Connect_Encrypted((QNetworkReply*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#sslErrors)
///
/// ``` QNetworkReply* self, QSslError* errors[] ```
void q_networkreply_ssl_errors(void* self, void* errors[]) {
    QSslError** errors_arr = (QSslError**)errors;
    size_t errors_len = 0;
    while (errors_arr[errors_len] != NULL) {
        errors_len++;
    }
    libqt_list errors_list = {
        .len = errors_len,
        .data = {(QSslError*)errors},
    };
    QNetworkReply_SslErrors((QNetworkReply*)self, errors_list);
}

/// ``` QNetworkReply* self, void (*slot)(QNetworkReply*, QSslError*[]) ```
void q_networkreply_on_ssl_errors(void* self, void (*slot)(void*, void*)) {
    QNetworkReply_Connect_SslErrors((QNetworkReply*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#preSharedKeyAuthenticationRequired)
///
/// ``` QNetworkReply* self, QSslPreSharedKeyAuthenticator* authenticator ```
void q_networkreply_pre_shared_key_authentication_required(void* self, void* authenticator) {
    QNetworkReply_PreSharedKeyAuthenticationRequired((QNetworkReply*)self, (QSslPreSharedKeyAuthenticator*)authenticator);
}

/// ``` QNetworkReply* self, void (*slot)(QNetworkReply*, QSslPreSharedKeyAuthenticator*) ```
void q_networkreply_on_pre_shared_key_authentication_required(void* self, void (*slot)(void*, void*)) {
    QNetworkReply_Connect_PreSharedKeyAuthenticationRequired((QNetworkReply*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#redirected)
///
/// ``` QNetworkReply* self, QUrl* url ```
void q_networkreply_redirected(void* self, void* url) {
    QNetworkReply_Redirected((QNetworkReply*)self, (QUrl*)url);
}

/// ``` QNetworkReply* self, void (*slot)(QNetworkReply*, QUrl*) ```
void q_networkreply_on_redirected(void* self, void (*slot)(void*, void*)) {
    QNetworkReply_Connect_Redirected((QNetworkReply*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#redirectAllowed)
///
/// ``` QNetworkReply* self ```
void q_networkreply_redirect_allowed(void* self) {
    QNetworkReply_RedirectAllowed((QNetworkReply*)self);
}

/// ``` QNetworkReply* self, void (*slot)(QNetworkReply*) ```
void q_networkreply_on_redirect_allowed(void* self, void (*slot)(void*)) {
    QNetworkReply_Connect_RedirectAllowed((QNetworkReply*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#uploadProgress)
///
/// ``` QNetworkReply* self, long long bytesSent, long long bytesTotal ```
void q_networkreply_upload_progress(void* self, long long bytesSent, long long bytesTotal) {
    QNetworkReply_UploadProgress((QNetworkReply*)self, bytesSent, bytesTotal);
}

/// ``` QNetworkReply* self, void (*slot)(QNetworkReply*, long long, long long) ```
void q_networkreply_on_upload_progress(void* self, void (*slot)(void*, long long, long long)) {
    QNetworkReply_Connect_UploadProgress((QNetworkReply*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkreply.html#downloadProgress)
///
/// ``` QNetworkReply* self, long long bytesReceived, long long bytesTotal ```
void q_networkreply_download_progress(void* self, long long bytesReceived, long long bytesTotal) {
    QNetworkReply_DownloadProgress((QNetworkReply*)self, bytesReceived, bytesTotal);
}

/// ``` QNetworkReply* self, void (*slot)(QNetworkReply*, long long, long long) ```
void q_networkreply_on_download_progress(void* self, void (*slot)(void*, long long, long long)) {
    QNetworkReply_Connect_DownloadProgress((QNetworkReply*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_networkreply_tr2(const char* s, const char* c) {
    libqt_string _str = QNetworkReply_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_networkreply_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QNetworkReply_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// ``` QNetworkReply* self ```
int64_t q_networkreply_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// ``` QNetworkReply* self, bool enabled ```
void q_networkreply_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// ``` QNetworkReply* self ```
bool q_networkreply_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// ``` QNetworkReply* self ```
bool q_networkreply_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// ``` QNetworkReply* self ```
bool q_networkreply_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// ``` QNetworkReply* self ```
bool q_networkreply_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// ``` QNetworkReply* self ```
int32_t q_networkreply_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// ``` QNetworkReply* self ```
int32_t q_networkreply_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// ``` QNetworkReply* self ```
int32_t q_networkreply_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// ``` QNetworkReply* self, int channel ```
void q_networkreply_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// ``` QNetworkReply* self ```
int32_t q_networkreply_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// ``` QNetworkReply* self, int channel ```
void q_networkreply_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// ``` QNetworkReply* self, int mode ```
bool q_networkreply_open(void* self, int64_t mode) {
    return QIODevice_Open((QIODevice*)self, mode);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// ``` QNetworkReply* self ```
long long q_networkreply_pos(void* self) {
    return QIODevice_Pos((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// ``` QNetworkReply* self ```
long long q_networkreply_size(void* self) {
    return QIODevice_Size((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// ``` QNetworkReply* self, long long pos ```
bool q_networkreply_seek(void* self, long long pos) {
    return QIODevice_Seek((QIODevice*)self, pos);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// ``` QNetworkReply* self ```
bool q_networkreply_at_end(void* self) {
    return QIODevice_AtEnd((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// ``` QNetworkReply* self ```
bool q_networkreply_reset(void* self) {
    return QIODevice_Reset((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// ``` QNetworkReply* self ```
long long q_networkreply_bytes_available(void* self) {
    return QIODevice_BytesAvailable((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// ``` QNetworkReply* self ```
long long q_networkreply_bytes_to_write(void* self) {
    return QIODevice_BytesToWrite((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QNetworkReply* self, char* data, long long maxlen ```
long long q_networkreply_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QNetworkReply* self, long long maxlen ```
char* q_networkreply_read_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// ``` QNetworkReply* self ```
char* q_networkreply_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QNetworkReply* self, char* data, long long maxlen ```
long long q_networkreply_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QNetworkReply* self ```
char* q_networkreply_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// ``` QNetworkReply* self ```
bool q_networkreply_can_read_line(void* self) {
    return QIODevice_CanReadLine((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// ``` QNetworkReply* self ```
void q_networkreply_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// ``` QNetworkReply* self ```
void q_networkreply_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// ``` QNetworkReply* self ```
void q_networkreply_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// ``` QNetworkReply* self ```
bool q_networkreply_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QNetworkReply* self, const char* data, long long lenVal ```
long long q_networkreply_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QNetworkReply* self, const char* data ```
long long q_networkreply_write_with_data(void* self, const char* data) {
    return QIODevice_WriteWithData((QIODevice*)self, data);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QNetworkReply* self, const char* data ```
long long q_networkreply_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, qstring(data));
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QNetworkReply* self, char* data, long long maxlen ```
long long q_networkreply_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QNetworkReply* self, long long maxlen ```
char* q_networkreply_peek_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_PeekWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// ``` QNetworkReply* self, long long maxSize ```
long long q_networkreply_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// ``` QNetworkReply* self, int msecs ```
bool q_networkreply_wait_for_ready_read(void* self, int msecs) {
    return QIODevice_WaitForReadyRead((QIODevice*)self, msecs);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// ``` QNetworkReply* self, int msecs ```
bool q_networkreply_wait_for_bytes_written(void* self, int msecs) {
    return QIODevice_WaitForBytesWritten((QIODevice*)self, msecs);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// ``` QNetworkReply* self, char c ```
void q_networkreply_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// ``` QNetworkReply* self, char c ```
bool q_networkreply_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// ``` QNetworkReply* self, char* c ```
bool q_networkreply_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// ``` QNetworkReply* self ```
const char* q_networkreply_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QNetworkReply* self ```
void q_networkreply_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QNetworkReply* self, void (*slot)(QIODevice*) ```
void q_networkreply_on_ready_read(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QNetworkReply* self, int channel ```
void q_networkreply_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// ``` QNetworkReply* self, void (*slot)(QIODevice*, int) ```
void q_networkreply_on_channel_ready_read(void* self, void (*slot)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QNetworkReply* self, long long bytes ```
void q_networkreply_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

/// Inherited from QIODevice
///
/// ``` QNetworkReply* self, void (*slot)(QIODevice*, long long) ```
void q_networkreply_on_bytes_written(void* self, void (*slot)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QNetworkReply* self, int channel, long long bytes ```
void q_networkreply_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

/// Inherited from QIODevice
///
/// ``` QNetworkReply* self, void (*slot)(QIODevice*, int, long long) ```
void q_networkreply_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QNetworkReply* self ```
void q_networkreply_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QNetworkReply* self, void (*slot)(QIODevice*) ```
void q_networkreply_on_about_to_close(void* self, void (*slot)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QNetworkReply* self ```
void q_networkreply_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QNetworkReply* self, void (*slot)(QIODevice*) ```
void q_networkreply_on_read_channel_finished(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QNetworkReply* self, long long maxlen ```
char* q_networkreply_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QNetworkReply* self, QEvent* event ```
bool q_networkreply_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QNetworkReply* self, QObject* watched, QEvent* event ```
bool q_networkreply_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QNetworkReply* self ```
const char* q_networkreply_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QNetworkReply* self, const char* name ```
void q_networkreply_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QNetworkReply* self ```
bool q_networkreply_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QNetworkReply* self ```
bool q_networkreply_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QNetworkReply* self ```
bool q_networkreply_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QNetworkReply* self ```
bool q_networkreply_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QNetworkReply* self, bool b ```
bool q_networkreply_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QNetworkReply* self ```
QThread* q_networkreply_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QNetworkReply* self, QThread* thread ```
void q_networkreply_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QNetworkReply* self, int interval ```
int32_t q_networkreply_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QNetworkReply* self, int id ```
void q_networkreply_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QNetworkReply* self ```
libqt_list /* of QObject* */ q_networkreply_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QNetworkReply* self, QObject* parent ```
void q_networkreply_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QNetworkReply* self, QObject* filterObj ```
void q_networkreply_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QNetworkReply* self, QObject* obj ```
void q_networkreply_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_networkreply_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QNetworkReply* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_networkreply_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_networkreply_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_networkreply_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QNetworkReply* self ```
void q_networkreply_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QNetworkReply* self ```
void q_networkreply_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QNetworkReply* self, const char* name, QVariant* value ```
bool q_networkreply_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QNetworkReply* self, const char* name ```
QVariant* q_networkreply_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QNetworkReply* self ```
const char** q_networkreply_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QNetworkReply* self ```
QBindingStorage* q_networkreply_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QNetworkReply* self ```
QBindingStorage* q_networkreply_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QNetworkReply* self ```
void q_networkreply_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QNetworkReply* self, void (*slot)(QObject*) ```
void q_networkreply_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QNetworkReply* self ```
QObject* q_networkreply_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QNetworkReply* self, const char* classname ```
bool q_networkreply_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QNetworkReply* self ```
void q_networkreply_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QNetworkReply* self, int interval, enum Qt__TimerType timerType ```
int32_t q_networkreply_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_networkreply_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QNetworkReply* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_networkreply_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QNetworkReply* self, QObject* param1 ```
void q_networkreply_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QNetworkReply* self, void (*slot)(QObject*, QObject*) ```
void q_networkreply_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QNetworkReply* self ```
void q_networkreply_delete(void* self) {
    QNetworkReply_Delete((QNetworkReply*)(self));
}