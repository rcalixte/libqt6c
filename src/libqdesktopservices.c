#include "libqobject.hpp"
#include <string.h>
#include "libqurl.hpp"
#include "libqdesktopservices.hpp"
#include "libqdesktopservices.h"

QDesktopServices* q_desktopservices_new(void* other) {
    return QDesktopServices_new((QDesktopServices*)other);
}

QDesktopServices* q_desktopservices_new2(void* other) {
    return QDesktopServices_new2((QDesktopServices*)other);
}

void q_desktopservices_copy_assign(void* self, void* other) {
    QDesktopServices_CopyAssign((QDesktopServices*)self, (QDesktopServices*)other);
}

void q_desktopservices_move_assign(void* self, void* other) {
    QDesktopServices_MoveAssign((QDesktopServices*)self, (QDesktopServices*)other);
}

bool q_desktopservices_open_url(void* url) {
    return QDesktopServices_OpenUrl((QUrl*)url);
}

void q_desktopservices_set_url_handler(const char* scheme, void* receiver, const char* method) {
    QDesktopServices_SetUrlHandler(qstring(scheme), (QObject*)receiver, method);
}

void q_desktopservices_unset_url_handler(const char* scheme) {
    QDesktopServices_UnsetUrlHandler(qstring(scheme));
}

void q_desktopservices_delete(void* self) {
    QDesktopServices_Delete((QDesktopServices*)(self));
}
