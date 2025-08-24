#include "../libqcoreevent.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "libkcursor.hpp"
#include "libkcursor.h"

KCursor* k_cursor_new(void* other) {
    return KCursor_new((KCursor*)other);
}

KCursor* k_cursor_new2(void* other) {
    return KCursor_new2((KCursor*)other);
}

void k_cursor_copy_assign(void* self, void* other) {
    KCursor_CopyAssign((KCursor*)self, (KCursor*)other);
}

void k_cursor_move_assign(void* self, void* other) {
    KCursor_MoveAssign((KCursor*)self, (KCursor*)other);
}

void k_cursor_set_auto_hide_cursor(void* w, bool enable) {
    KCursor_SetAutoHideCursor((QWidget*)w, enable);
}

void k_cursor_set_hide_cursor_delay(int ms) {
    KCursor_SetHideCursorDelay(ms);
}

int32_t k_cursor_hide_cursor_delay() {
    return KCursor_HideCursorDelay();
}

void k_cursor_auto_hide_event_filter(void* param1, void* param2) {
    KCursor_AutoHideEventFilter((QObject*)param1, (QEvent*)param2);
}

void k_cursor_set_auto_hide_cursor3(void* w, bool enable, bool customEventFilter) {
    KCursor_SetAutoHideCursor3((QWidget*)w, enable, customEventFilter);
}

void k_cursor_delete(void* self) {
    KCursor_Delete((KCursor*)(self));
}
