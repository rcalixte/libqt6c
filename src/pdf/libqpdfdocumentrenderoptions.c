#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include "libqpdfdocumentrenderoptions.hpp"
#include "libqpdfdocumentrenderoptions.h"

QPdfDocumentRenderOptions* q_pdfdocumentrenderoptions_new(void* other) {
    return QPdfDocumentRenderOptions_new((QPdfDocumentRenderOptions*)other);
}

QPdfDocumentRenderOptions* q_pdfdocumentrenderoptions_new2(void* other) {
    return QPdfDocumentRenderOptions_new2((QPdfDocumentRenderOptions*)other);
}

QPdfDocumentRenderOptions* q_pdfdocumentrenderoptions_new3() {
    return QPdfDocumentRenderOptions_new3();
}

QPdfDocumentRenderOptions* q_pdfdocumentrenderoptions_new4(void* param1) {
    return QPdfDocumentRenderOptions_new4((QPdfDocumentRenderOptions*)param1);
}

void q_pdfdocumentrenderoptions_copy_assign(void* self, void* other) {
    QPdfDocumentRenderOptions_CopyAssign((QPdfDocumentRenderOptions*)self, (QPdfDocumentRenderOptions*)other);
}

void q_pdfdocumentrenderoptions_move_assign(void* self, void* other) {
    QPdfDocumentRenderOptions_MoveAssign((QPdfDocumentRenderOptions*)self, (QPdfDocumentRenderOptions*)other);
}

int32_t q_pdfdocumentrenderoptions_rotation(void* self) {
    return QPdfDocumentRenderOptions_Rotation((QPdfDocumentRenderOptions*)self);
}

void q_pdfdocumentrenderoptions_set_rotation(void* self, int32_t r) {
    QPdfDocumentRenderOptions_SetRotation((QPdfDocumentRenderOptions*)self, r);
}

int64_t q_pdfdocumentrenderoptions_render_flags(void* self) {
    return QPdfDocumentRenderOptions_RenderFlags((QPdfDocumentRenderOptions*)self);
}

void q_pdfdocumentrenderoptions_set_render_flags(void* self, int64_t r) {
    QPdfDocumentRenderOptions_SetRenderFlags((QPdfDocumentRenderOptions*)self, r);
}

QRect* q_pdfdocumentrenderoptions_scaled_clip_rect(void* self) {
    return QPdfDocumentRenderOptions_ScaledClipRect((QPdfDocumentRenderOptions*)self);
}

void q_pdfdocumentrenderoptions_set_scaled_clip_rect(void* self, void* r) {
    QPdfDocumentRenderOptions_SetScaledClipRect((QPdfDocumentRenderOptions*)self, (QRect*)r);
}

QSize* q_pdfdocumentrenderoptions_scaled_size(void* self) {
    return QPdfDocumentRenderOptions_ScaledSize((QPdfDocumentRenderOptions*)self);
}

void q_pdfdocumentrenderoptions_set_scaled_size(void* self, void* s) {
    QPdfDocumentRenderOptions_SetScaledSize((QPdfDocumentRenderOptions*)self, (QSize*)s);
}

void q_pdfdocumentrenderoptions_delete(void* self) {
    QPdfDocumentRenderOptions_Delete((QPdfDocumentRenderOptions*)(self));
}
