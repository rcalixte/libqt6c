#include "libqquickstyle.hpp"
#include "libqquickstyle.h"

QQuickStyle* q_quickstyle_new(void* other) {
    return QQuickStyle_New((QQuickStyle*)other);
}

QQuickStyle* q_quickstyle_new2(void* other) {
    return QQuickStyle_New2((QQuickStyle*)other);
}

void q_quickstyle_copy_assign(void* self, void* other) {
    QQuickStyle_CopyAssign((QQuickStyle*)self, (QQuickStyle*)other);
}

void q_quickstyle_move_assign(void* self, void* other) {
    QQuickStyle_MoveAssign((QQuickStyle*)self, (QQuickStyle*)other);
}

const char* q_quickstyle_name() {
    libqt_string _str = QQuickStyle_Name();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickstyle_set_style(const char* style) {
    QQuickStyle_SetStyle(qstring(style));
}

void q_quickstyle_set_fallback_style(const char* style) {
    QQuickStyle_SetFallbackStyle(qstring(style));
}

void q_quickstyle_delete(void* self) {
    QQuickStyle_Delete((QQuickStyle*)(self));
}
