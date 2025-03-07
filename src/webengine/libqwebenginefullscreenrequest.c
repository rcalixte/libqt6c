#include "../libqurl.hpp"
#include "libqwebenginefullscreenrequest.hpp"
#include "libqwebenginefullscreenrequest.h"

/// https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html

/// q_webenginefullscreenrequest_new constructs a new QWebEngineFullScreenRequest object.
///
/// ``` QWebEngineFullScreenRequest* other ```
QWebEngineFullScreenRequest* q_webenginefullscreenrequest_new(void* other) {
    return QWebEngineFullScreenRequest_new((QWebEngineFullScreenRequest*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#operator=)
///
/// ``` QWebEngineFullScreenRequest* self, QWebEngineFullScreenRequest* other ```
void q_webenginefullscreenrequest_operator_assign(void* self, void* other) {
    QWebEngineFullScreenRequest_OperatorAssign((QWebEngineFullScreenRequest*)self, (QWebEngineFullScreenRequest*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#reject)
///
/// ``` QWebEngineFullScreenRequest* self ```
void q_webenginefullscreenrequest_reject(void* self) {
    QWebEngineFullScreenRequest_Reject((QWebEngineFullScreenRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#accept)
///
/// ``` QWebEngineFullScreenRequest* self ```
void q_webenginefullscreenrequest_accept(void* self) {
    QWebEngineFullScreenRequest_Accept((QWebEngineFullScreenRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#toggleOn)
///
/// ``` QWebEngineFullScreenRequest* self ```
bool q_webenginefullscreenrequest_toggle_on(void* self) {
    return QWebEngineFullScreenRequest_ToggleOn((QWebEngineFullScreenRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#origin)
///
/// ``` QWebEngineFullScreenRequest* self ```
QUrl* q_webenginefullscreenrequest_origin(void* self) {
    return QWebEngineFullScreenRequest_Origin((QWebEngineFullScreenRequest*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QWebEngineFullScreenRequest* self ```
void q_webenginefullscreenrequest_delete(void* self) {
    QWebEngineFullScreenRequest_Delete((QWebEngineFullScreenRequest*)(self));
}