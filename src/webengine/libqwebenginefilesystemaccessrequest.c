#include "../libqurl.hpp"
#include "libqwebenginefilesystemaccessrequest.hpp"
#include "libqwebenginefilesystemaccessrequest.h"

QWebEngineFileSystemAccessRequest* q_webenginefilesystemaccessrequest_new(void* other) {
    return QWebEngineFileSystemAccessRequest_new((QWebEngineFileSystemAccessRequest*)other);
}

void q_webenginefilesystemaccessrequest_operator_assign(void* self, void* other) {
    QWebEngineFileSystemAccessRequest_OperatorAssign((QWebEngineFileSystemAccessRequest*)self, (QWebEngineFileSystemAccessRequest*)other);
}

void q_webenginefilesystemaccessrequest_swap(void* self, void* other) {
    QWebEngineFileSystemAccessRequest_Swap((QWebEngineFileSystemAccessRequest*)self, (QWebEngineFileSystemAccessRequest*)other);
}

void q_webenginefilesystemaccessrequest_accept(void* self) {
    QWebEngineFileSystemAccessRequest_Accept((QWebEngineFileSystemAccessRequest*)self);
}

void q_webenginefilesystemaccessrequest_reject(void* self) {
    QWebEngineFileSystemAccessRequest_Reject((QWebEngineFileSystemAccessRequest*)self);
}

QUrl* q_webenginefilesystemaccessrequest_origin(void* self) {
    return QWebEngineFileSystemAccessRequest_Origin((QWebEngineFileSystemAccessRequest*)self);
}

QUrl* q_webenginefilesystemaccessrequest_file_path(void* self) {
    return QWebEngineFileSystemAccessRequest_FilePath((QWebEngineFileSystemAccessRequest*)self);
}

int32_t q_webenginefilesystemaccessrequest_handle_type(void* self) {
    return QWebEngineFileSystemAccessRequest_HandleType((QWebEngineFileSystemAccessRequest*)self);
}

int64_t q_webenginefilesystemaccessrequest_access_flags(void* self) {
    return QWebEngineFileSystemAccessRequest_AccessFlags((QWebEngineFileSystemAccessRequest*)self);
}

void q_webenginefilesystemaccessrequest_delete(void* self) {
    QWebEngineFileSystemAccessRequest_Delete((QWebEngineFileSystemAccessRequest*)(self));
}
