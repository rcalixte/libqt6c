#include "../libqobject.hpp"
#include "libqqmlengine.hpp"
#include "../libqurl.hpp"
#include "libqqmlfile.hpp"
#include "libqqmlfile.h"

QQmlFile* q_qmlfile_new() {
    return QQmlFile_New();
}

QQmlFile* q_qmlfile_new2(void* engine, void* url) {
    return QQmlFile_New2((QQmlEngine*)engine, (QUrl*)url);
}

QQmlFile* q_qmlfile_new3(void* engine, const char* url) {
    return QQmlFile_New3((QQmlEngine*)engine, qstring(url));
}

bool q_qmlfile_is_null(void* self) {
    return QQmlFile_IsNull((QQmlFile*)self);
}

bool q_qmlfile_is_ready(void* self) {
    return QQmlFile_IsReady((QQmlFile*)self);
}

bool q_qmlfile_is_error(void* self) {
    return QQmlFile_IsError((QQmlFile*)self);
}

bool q_qmlfile_is_loading(void* self) {
    return QQmlFile_IsLoading((QQmlFile*)self);
}

QUrl* q_qmlfile_url(void* self) {
    return QQmlFile_Url((QQmlFile*)self);
}

int32_t q_qmlfile_status(void* self) {
    return QQmlFile_Status((QQmlFile*)self);
}

const char* q_qmlfile_error(void* self) {
    libqt_string _str = QQmlFile_Error((QQmlFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_qmlfile_size(void* self) {
    return QQmlFile_Size((QQmlFile*)self);
}

const char* q_qmlfile_data(void* self) {
    return QQmlFile_Data((QQmlFile*)self);
}

char* q_qmlfile_data_byte_array(void* self) {
    libqt_string _str = QQmlFile_DataByteArray((QQmlFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_qmlfile_load(void* self, void* param1, void* param2) {
    QQmlFile_Load((QQmlFile*)self, (QQmlEngine*)param1, (QUrl*)param2);
}

void q_qmlfile_load2(void* self, void* param1, const char* param2) {
    QQmlFile_Load2((QQmlFile*)self, (QQmlEngine*)param1, qstring(param2));
}

void q_qmlfile_clear(void* self) {
    QQmlFile_Clear((QQmlFile*)self);
}

void q_qmlfile_clear2(void* self, void* object) {
    QQmlFile_Clear2((QQmlFile*)self, (QObject*)object);
}

bool q_qmlfile_connect_finished(void* self, void* param1, const char* param2) {
    return QQmlFile_ConnectFinished((QQmlFile*)self, (QObject*)param1, param2);
}

bool q_qmlfile_connect_finished2(void* self, void* param1, int param2) {
    return QQmlFile_ConnectFinished2((QQmlFile*)self, (QObject*)param1, param2);
}

bool q_qmlfile_connect_download_progress(void* self, void* param1, const char* param2) {
    return QQmlFile_ConnectDownloadProgress((QQmlFile*)self, (QObject*)param1, param2);
}

bool q_qmlfile_connect_download_progress2(void* self, void* param1, int param2) {
    return QQmlFile_ConnectDownloadProgress2((QQmlFile*)self, (QObject*)param1, param2);
}

bool q_qmlfile_is_synchronous(const char* url) {
    return QQmlFile_IsSynchronous(qstring(url));
}

bool q_qmlfile_is_synchronous2(void* url) {
    return QQmlFile_IsSynchronous2((QUrl*)url);
}

bool q_qmlfile_is_local_file(const char* url) {
    return QQmlFile_IsLocalFile(qstring(url));
}

bool q_qmlfile_is_local_file2(void* url) {
    return QQmlFile_IsLocalFile2((QUrl*)url);
}

const char* q_qmlfile_url_to_local_file_or_qrc(const char* param1) {
    libqt_string _str = QQmlFile_UrlToLocalFileOrQrc(qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_qmlfile_url_to_local_file_or_qrc2(void* param1) {
    libqt_string _str = QQmlFile_UrlToLocalFileOrQrc2((QUrl*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_qmlfile_delete(void* self) {
    QQmlFile_Delete((QQmlFile*)(self));
}
