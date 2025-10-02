#include "libfoldingregion.hpp"
#include "libfoldingregion.h"

KSyntaxHighlighting__FoldingRegion* k_syntaxhighlighting__foldingregion_new(void* other) {
    return KSyntaxHighlighting__FoldingRegion_new((KSyntaxHighlighting__FoldingRegion*)other);
}

KSyntaxHighlighting__FoldingRegion* k_syntaxhighlighting__foldingregion_new2(void* other) {
    return KSyntaxHighlighting__FoldingRegion_new2((KSyntaxHighlighting__FoldingRegion*)other);
}

KSyntaxHighlighting__FoldingRegion* k_syntaxhighlighting__foldingregion_new3() {
    return KSyntaxHighlighting__FoldingRegion_new3();
}

KSyntaxHighlighting__FoldingRegion* k_syntaxhighlighting__foldingregion_new4(void* param1) {
    return KSyntaxHighlighting__FoldingRegion_new4((KSyntaxHighlighting__FoldingRegion*)param1);
}

void k_syntaxhighlighting__foldingregion_copy_assign(void* self, void* other) {
    KSyntaxHighlighting__FoldingRegion_CopyAssign((KSyntaxHighlighting__FoldingRegion*)self, (KSyntaxHighlighting__FoldingRegion*)other);
}

void k_syntaxhighlighting__foldingregion_move_assign(void* self, void* other) {
    KSyntaxHighlighting__FoldingRegion_MoveAssign((KSyntaxHighlighting__FoldingRegion*)self, (KSyntaxHighlighting__FoldingRegion*)other);
}

bool k_syntaxhighlighting__foldingregion_operator_equal(void* self, void* other) {
    return KSyntaxHighlighting__FoldingRegion_OperatorEqual((KSyntaxHighlighting__FoldingRegion*)self, (KSyntaxHighlighting__FoldingRegion*)other);
}

bool k_syntaxhighlighting__foldingregion_is_valid(void* self) {
    return KSyntaxHighlighting__FoldingRegion_IsValid((KSyntaxHighlighting__FoldingRegion*)self);
}

int32_t k_syntaxhighlighting__foldingregion_id(void* self) {
    return KSyntaxHighlighting__FoldingRegion_Id((KSyntaxHighlighting__FoldingRegion*)self);
}

int32_t k_syntaxhighlighting__foldingregion_type(void* self) {
    return KSyntaxHighlighting__FoldingRegion_Type((KSyntaxHighlighting__FoldingRegion*)self);
}

KSyntaxHighlighting__FoldingRegion* k_syntaxhighlighting__foldingregion_sibling(void* self) {
    return KSyntaxHighlighting__FoldingRegion_Sibling((KSyntaxHighlighting__FoldingRegion*)self);
}

void k_syntaxhighlighting__foldingregion_delete(void* self) {
    KSyntaxHighlighting__FoldingRegion_Delete((KSyntaxHighlighting__FoldingRegion*)(self));
}
