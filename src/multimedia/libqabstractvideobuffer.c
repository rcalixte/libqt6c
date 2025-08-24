#include "libqvideoframeformat.hpp"
#include "libqabstractvideobuffer.hpp"
#include "libqabstractvideobuffer.h"

void q_abstractvideobuffer_unmap(void* self) {
    QAbstractVideoBuffer_Unmap((QAbstractVideoBuffer*)self);
}

QVideoFrameFormat* q_abstractvideobuffer_format(void* self) {
    return QAbstractVideoBuffer_Format((QAbstractVideoBuffer*)self);
}

void q_abstractvideobuffer_delete(void* self) {
    QAbstractVideoBuffer_Delete((QAbstractVideoBuffer*)(self));
}

QAbstractVideoBuffer__MapData* q_abstractvideobuffer__mapdata_new(void* other) {
    return QAbstractVideoBuffer__MapData_new((QAbstractVideoBuffer__MapData*)other);
}

QAbstractVideoBuffer__MapData* q_abstractvideobuffer__mapdata_new2(void* other) {
    return QAbstractVideoBuffer__MapData_new2((QAbstractVideoBuffer__MapData*)other);
}

void q_abstractvideobuffer__mapdata_copy_assign(void* self, void* other) {
    QAbstractVideoBuffer__MapData_CopyAssign((QAbstractVideoBuffer__MapData*)self, (QAbstractVideoBuffer__MapData*)other);
}

void q_abstractvideobuffer__mapdata_move_assign(void* self, void* other) {
    QAbstractVideoBuffer__MapData_MoveAssign((QAbstractVideoBuffer__MapData*)self, (QAbstractVideoBuffer__MapData*)other);
}

int32_t q_abstractvideobuffer__mapdata_plane_count(void* self) {
    return QAbstractVideoBuffer__MapData_PlaneCount((QAbstractVideoBuffer__MapData*)self);
}

void q_abstractvideobuffer__mapdata_set_plane_count(void* self, int planeCount) {
    QAbstractVideoBuffer__MapData_SetPlaneCount((QAbstractVideoBuffer__MapData*)self, planeCount);
}

void q_abstractvideobuffer__mapdata_delete(void* self) {
    QAbstractVideoBuffer__MapData_Delete((QAbstractVideoBuffer__MapData*)(self));
}
