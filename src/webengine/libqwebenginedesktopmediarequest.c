#include "../libqabstractitemmodel.hpp"
#include "libqwebenginedesktopmediarequest.hpp"
#include "libqwebenginedesktopmediarequest.h"

QWebEngineDesktopMediaRequest* q_webenginedesktopmediarequest_new(const void* other) {
    return QWebEngineDesktopMediaRequest_New((QWebEngineDesktopMediaRequest*)other);
}

void q_webenginedesktopmediarequest_operator_assign(void* self, const void* other) {
    QWebEngineDesktopMediaRequest_OperatorAssign((QWebEngineDesktopMediaRequest*)self, (QWebEngineDesktopMediaRequest*)other);
}

void q_webenginedesktopmediarequest_swap(void* self, void* other) {
    QWebEngineDesktopMediaRequest_Swap((QWebEngineDesktopMediaRequest*)self, (QWebEngineDesktopMediaRequest*)other);
}

QAbstractListModel* q_webenginedesktopmediarequest_screens_model(const void* self) {
    return QWebEngineDesktopMediaRequest_ScreensModel((QWebEngineDesktopMediaRequest*)self);
}

QAbstractListModel* q_webenginedesktopmediarequest_windows_model(const void* self) {
    return QWebEngineDesktopMediaRequest_WindowsModel((QWebEngineDesktopMediaRequest*)self);
}

void q_webenginedesktopmediarequest_select_screen(const void* self, const void* index) {
    QWebEngineDesktopMediaRequest_SelectScreen((QWebEngineDesktopMediaRequest*)self, (QModelIndex*)index);
}

void q_webenginedesktopmediarequest_select_window(const void* self, const void* index) {
    QWebEngineDesktopMediaRequest_SelectWindow((QWebEngineDesktopMediaRequest*)self, (QModelIndex*)index);
}

void q_webenginedesktopmediarequest_cancel(const void* self) {
    QWebEngineDesktopMediaRequest_Cancel((QWebEngineDesktopMediaRequest*)self);
}

void q_webenginedesktopmediarequest_delete(void* self) {
    QWebEngineDesktopMediaRequest_Delete((QWebEngineDesktopMediaRequest*)(self));
}
