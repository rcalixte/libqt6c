#include "libkcursorsaver.hpp"
#include "libkcursorsaver.h"

KCursorSaver* k_cursorsaver_new(int32_t shape) {
    return KCursorSaver_new(shape);
}

void k_cursorsaver_restore_cursor(void* self) {
    KCursorSaver_RestoreCursor((KCursorSaver*)self);
}

void k_cursorsaver_delete(void* self) {
    KCursorSaver_Delete((KCursorSaver*)(self));
}
