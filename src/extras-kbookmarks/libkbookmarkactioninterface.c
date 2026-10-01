#include "libkbookmark.hpp"
#include "libkbookmarkactioninterface.hpp"
#include "libkbookmarkactioninterface.h"

KBookmarkActionInterface* k_bookmarkactioninterface_new(const void* bk) {
    return KBookmarkActionInterface_New((KBookmark*)bk);
}

KBookmarkActionInterface* k_bookmarkactioninterface_new2(const void* param1) {
    return KBookmarkActionInterface_New2((KBookmarkActionInterface*)param1);
}

const KBookmark* k_bookmarkactioninterface_bookmark(const void* self) {
    return KBookmarkActionInterface_Bookmark((KBookmarkActionInterface*)self);
}

void k_bookmarkactioninterface_delete(void* self) {
    KBookmarkActionInterface_Delete((KBookmarkActionInterface*)(self));
}
