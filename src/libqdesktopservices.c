#include "libqobject.hpp"
#include <string.h>
#include "libqurl.hpp"
#include "libqdesktopservices.hpp"
#include "libqdesktopservices.h"

/// https://doc.qt.io/qt-6/qdesktopservices.html

/// q_desktopservices_new constructs a new QDesktopServices object.
///
/// ``` QDesktopServices* other ```
QDesktopServices* q_desktopservices_new(void* other) {
    return QDesktopServices_new((QDesktopServices*)other);
}

/// q_desktopservices_new2 constructs a new QDesktopServices object and invalidates the source QDesktopServices object.
///
/// ``` QDesktopServices* other ```
QDesktopServices* q_desktopservices_new2(void* other) {
    return QDesktopServices_new2((QDesktopServices*)other);
}

/// q_desktopservices_copy_assign shallow copies `other` into `self`.
///
/// ``` QDesktopServices* self, QDesktopServices* other ```
void q_desktopservices_copy_assign(void* self, void* other) {
    QDesktopServices_CopyAssign((QDesktopServices*)self, (QDesktopServices*)other);
}

/// q_desktopservices_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QDesktopServices* self, QDesktopServices* other ```
void q_desktopservices_move_assign(void* self, void* other) {
    QDesktopServices_MoveAssign((QDesktopServices*)self, (QDesktopServices*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdesktopservices.html#openUrl)
///
/// ``` QUrl* url ```
bool q_desktopservices_open_url(void* url) {
    return QDesktopServices_OpenUrl((QUrl*)url);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdesktopservices.html#setUrlHandler)
///
/// ``` const char* scheme, QObject* receiver, const char* method ```
void q_desktopservices_set_url_handler(const char* scheme, void* receiver, const char* method) {
    QDesktopServices_SetUrlHandler(qstring(scheme), (QObject*)receiver, method);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdesktopservices.html#unsetUrlHandler)
///
/// ``` const char* scheme ```
void q_desktopservices_unset_url_handler(const char* scheme) {
    QDesktopServices_UnsetUrlHandler(qstring(scheme));
}

/// Delete this object from C++ memory.
///
/// ``` QDesktopServices* self ```
void q_desktopservices_delete(void* self) {
    QDesktopServices_Delete((QDesktopServices*)(self));
}