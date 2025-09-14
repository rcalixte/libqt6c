#include "libopenwith.hpp"
#include "libopenwith.h"

KIO__OpenWith* k_io__openwith_new(void* other) {
    return KIO__OpenWith_new((KIO__OpenWith*)other);
}

KIO__OpenWith* k_io__openwith_new2(void* other) {
    return KIO__OpenWith_new2((KIO__OpenWith*)other);
}

void k_io__openwith_copy_assign(void* self, void* other) {
    KIO__OpenWith_CopyAssign((KIO__OpenWith*)self, (KIO__OpenWith*)other);
}

void k_io__openwith_move_assign(void* self, void* other) {
    KIO__OpenWith_MoveAssign((KIO__OpenWith*)self, (KIO__OpenWith*)other);
}

void k_io__openwith_delete(void* self) {
    KIO__OpenWith_Delete((KIO__OpenWith*)(self));
}

KIO__OpenWith__AcceptResult* k_io__openwith__acceptresult_new(void* param1) {
    return KIO__OpenWith__AcceptResult_new((KIO__OpenWith__AcceptResult*)param1);
}

bool k_io__openwith__acceptresult_accept(void* self) {
    return KIO__OpenWith__AcceptResult_Accept((KIO__OpenWith__AcceptResult*)self);
}

void k_io__openwith__acceptresult_set_accept(void* self, bool accept) {
    KIO__OpenWith__AcceptResult_SetAccept((KIO__OpenWith__AcceptResult*)self, accept);
}

const char* k_io__openwith__acceptresult_error(void* self) {
    libqt_string error_str = KIO__OpenWith__AcceptResult_Error((KIO__OpenWith__AcceptResult*)self);
    char* error_ret = qstring_to_char(error_str);
    libqt_string_free(&error_str);
    return error_ret;
}

void k_io__openwith__acceptresult_set_error(void* self, const char* error) {
    KIO__OpenWith__AcceptResult_SetError((KIO__OpenWith__AcceptResult*)self, qstring(error));
}

bool k_io__openwith__acceptresult_rebuild_sycoca(void* self) {
    return KIO__OpenWith__AcceptResult_RebuildSycoca((KIO__OpenWith__AcceptResult*)self);
}

void k_io__openwith__acceptresult_set_rebuild_sycoca(void* self, bool rebuildSycoca) {
    KIO__OpenWith__AcceptResult_SetRebuildSycoca((KIO__OpenWith__AcceptResult*)self, rebuildSycoca);
}

void k_io__openwith__acceptresult_operator_assign(void* self, void* param1) {
    KIO__OpenWith__AcceptResult_OperatorAssign((KIO__OpenWith__AcceptResult*)self, (KIO__OpenWith__AcceptResult*)param1);
}

void k_io__openwith__acceptresult_delete(void* self) {
    KIO__OpenWith__AcceptResult_Delete((KIO__OpenWith__AcceptResult*)(self));
}
