#include <string.h>
#include "libqcapturablewindow.hpp"
#include "libqcapturablewindow.h"

QCapturableWindow* q_capturablewindow_new() {
    return QCapturableWindow_new();
}

QCapturableWindow* q_capturablewindow_new2(void* other) {
    return QCapturableWindow_new2((QCapturableWindow*)other);
}

void q_capturablewindow_operator_assign(void* self, void* other) {
    QCapturableWindow_OperatorAssign((QCapturableWindow*)self, (QCapturableWindow*)other);
}

void q_capturablewindow_swap(void* self, void* other) {
    QCapturableWindow_Swap((QCapturableWindow*)self, (QCapturableWindow*)other);
}

bool q_capturablewindow_is_valid(void* self) {
    return QCapturableWindow_IsValid((QCapturableWindow*)self);
}

const char* q_capturablewindow_description(void* self) {
    libqt_string _str = QCapturableWindow_Description((QCapturableWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_capturablewindow_delete(void* self) {
    QCapturableWindow_Delete((QCapturableWindow*)(self));
}
