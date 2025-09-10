#include "libkbookmark.hpp"
#include "libkbookmarkactioninterface.hpp"
#include "libkbookmarkactioninterface.h"

KBookmarkActionInterface* k_bookmarkactioninterface_new(void* bk) {
    return KBookmarkActionInterface_new((KBookmark*)bk);
}

KBookmarkActionInterface* k_bookmarkactioninterface_new2(void* param1) {
    return KBookmarkActionInterface_new2((KBookmarkActionInterface*)param1);
}

const KBookmark* k_bookmarkactioninterface_bookmark(void* self) {
    return KBookmarkActionInterface_Bookmark((KBookmarkActionInterface*)self);
}

void k_bookmarkactioninterface_delete(void* self) {
    KBookmarkActionInterface_Delete((KBookmarkActionInterface*)(self));
}
