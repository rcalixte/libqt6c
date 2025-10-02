#include "libstate.hpp"
#include "libstate.h"

KSyntaxHighlighting__State* k_syntaxhighlighting__state_new() {
    return KSyntaxHighlighting__State_new();
}

KSyntaxHighlighting__State* k_syntaxhighlighting__state_new2(void* other) {
    return KSyntaxHighlighting__State_new2((KSyntaxHighlighting__State*)other);
}

void k_syntaxhighlighting__state_operator_assign(void* self, void* rhs) {
    KSyntaxHighlighting__State_OperatorAssign((KSyntaxHighlighting__State*)self, (KSyntaxHighlighting__State*)rhs);
}

bool k_syntaxhighlighting__state_operator_equal(void* self, void* other) {
    return KSyntaxHighlighting__State_OperatorEqual((KSyntaxHighlighting__State*)self, (KSyntaxHighlighting__State*)other);
}

bool k_syntaxhighlighting__state_operator_not_equal(void* self, void* other) {
    return KSyntaxHighlighting__State_OperatorNotEqual((KSyntaxHighlighting__State*)self, (KSyntaxHighlighting__State*)other);
}

bool k_syntaxhighlighting__state_indentation_based_folding_enabled(void* self) {
    return KSyntaxHighlighting__State_IndentationBasedFoldingEnabled((KSyntaxHighlighting__State*)self);
}

void k_syntaxhighlighting__state_delete(void* self) {
    KSyntaxHighlighting__State_Delete((KSyntaxHighlighting__State*)(self));
}
