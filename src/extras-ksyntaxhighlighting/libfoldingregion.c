#include "libfoldingregion.hpp"
#include "libfoldingregion.h"

KSyntaxHighlighting__FoldingRegion* k_syntaxhighlighting__foldingregion_new(const void* other) {
    return KSyntaxHighlighting__FoldingRegion_New((KSyntaxHighlighting__FoldingRegion*)other);
}

KSyntaxHighlighting__FoldingRegion* k_syntaxhighlighting__foldingregion_new2(void* other) {
    return KSyntaxHighlighting__FoldingRegion_New2((KSyntaxHighlighting__FoldingRegion*)other);
}

KSyntaxHighlighting__FoldingRegion* k_syntaxhighlighting__foldingregion_new3() {
    return KSyntaxHighlighting__FoldingRegion_New3();
}

KSyntaxHighlighting__FoldingRegion* k_syntaxhighlighting__foldingregion_new4(const void* param1) {
    return KSyntaxHighlighting__FoldingRegion_New4((KSyntaxHighlighting__FoldingRegion*)param1);
}

void k_syntaxhighlighting__foldingregion_copy_assign(void* self, void* other) {
    KSyntaxHighlighting__FoldingRegion_CopyAssign((KSyntaxHighlighting__FoldingRegion*)self, (KSyntaxHighlighting__FoldingRegion*)other);
}

void k_syntaxhighlighting__foldingregion_move_assign(void* self, void* other) {
    KSyntaxHighlighting__FoldingRegion_MoveAssign((KSyntaxHighlighting__FoldingRegion*)self, (KSyntaxHighlighting__FoldingRegion*)other);
}

bool k_syntaxhighlighting__foldingregion_operator_equal(const void* self, const void* other) {
    return KSyntaxHighlighting__FoldingRegion_OperatorEqual((KSyntaxHighlighting__FoldingRegion*)self, (KSyntaxHighlighting__FoldingRegion*)other);
}

bool k_syntaxhighlighting__foldingregion_is_valid(const void* self) {
    return KSyntaxHighlighting__FoldingRegion_IsValid((KSyntaxHighlighting__FoldingRegion*)self);
}

int32_t k_syntaxhighlighting__foldingregion_id(const void* self) {
    return KSyntaxHighlighting__FoldingRegion_Id((KSyntaxHighlighting__FoldingRegion*)self);
}

int32_t k_syntaxhighlighting__foldingregion_type(const void* self) {
    return KSyntaxHighlighting__FoldingRegion_Type((KSyntaxHighlighting__FoldingRegion*)self);
}

KSyntaxHighlighting__FoldingRegion* k_syntaxhighlighting__foldingregion_sibling(const void* self) {
    return KSyntaxHighlighting__FoldingRegion_Sibling((KSyntaxHighlighting__FoldingRegion*)self);
}

void k_syntaxhighlighting__foldingregion_delete(void* self) {
    KSyntaxHighlighting__FoldingRegion_Delete((KSyntaxHighlighting__FoldingRegion*)(self));
}
