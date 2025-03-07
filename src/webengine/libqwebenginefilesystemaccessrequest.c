#include "../libqurl.hpp"
#include "libqwebenginefilesystemaccessrequest.hpp"
#include "libqwebenginefilesystemaccessrequest.h"

/// https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html

/// q_webenginefilesystemaccessrequest_new constructs a new QWebEngineFileSystemAccessRequest object.
///
/// ``` QWebEngineFileSystemAccessRequest* other ```
QWebEngineFileSystemAccessRequest* q_webenginefilesystemaccessrequest_new(void* other) {
    return QWebEngineFileSystemAccessRequest_new((QWebEngineFileSystemAccessRequest*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#operator=)
///
/// ``` QWebEngineFileSystemAccessRequest* self, QWebEngineFileSystemAccessRequest* other ```
void q_webenginefilesystemaccessrequest_operator_assign(void* self, void* other) {
    QWebEngineFileSystemAccessRequest_OperatorAssign((QWebEngineFileSystemAccessRequest*)self, (QWebEngineFileSystemAccessRequest*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#swap)
///
/// ``` QWebEngineFileSystemAccessRequest* self, QWebEngineFileSystemAccessRequest* other ```
void q_webenginefilesystemaccessrequest_swap(void* self, void* other) {
    QWebEngineFileSystemAccessRequest_Swap((QWebEngineFileSystemAccessRequest*)self, (QWebEngineFileSystemAccessRequest*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#accept)
///
/// ``` QWebEngineFileSystemAccessRequest* self ```
void q_webenginefilesystemaccessrequest_accept(void* self) {
    QWebEngineFileSystemAccessRequest_Accept((QWebEngineFileSystemAccessRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#reject)
///
/// ``` QWebEngineFileSystemAccessRequest* self ```
void q_webenginefilesystemaccessrequest_reject(void* self) {
    QWebEngineFileSystemAccessRequest_Reject((QWebEngineFileSystemAccessRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#origin)
///
/// ``` QWebEngineFileSystemAccessRequest* self ```
QUrl* q_webenginefilesystemaccessrequest_origin(void* self) {
    return QWebEngineFileSystemAccessRequest_Origin((QWebEngineFileSystemAccessRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#filePath)
///
/// ``` QWebEngineFileSystemAccessRequest* self ```
QUrl* q_webenginefilesystemaccessrequest_file_path(void* self) {
    return QWebEngineFileSystemAccessRequest_FilePath((QWebEngineFileSystemAccessRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#handleType)
///
/// ``` QWebEngineFileSystemAccessRequest* self ```
int64_t q_webenginefilesystemaccessrequest_handle_type(void* self) {
    return QWebEngineFileSystemAccessRequest_HandleType((QWebEngineFileSystemAccessRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#accessFlags)
///
/// ``` QWebEngineFileSystemAccessRequest* self ```
int64_t q_webenginefilesystemaccessrequest_access_flags(void* self) {
    return QWebEngineFileSystemAccessRequest_AccessFlags((QWebEngineFileSystemAccessRequest*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QWebEngineFileSystemAccessRequest* self ```
void q_webenginefilesystemaccessrequest_delete(void* self) {
    QWebEngineFileSystemAccessRequest_Delete((QWebEngineFileSystemAccessRequest*)(self));
}