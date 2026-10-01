#include "libdefinition.hpp"
#include "libfoldingregion.hpp"
#include "libformat.hpp"
#include "libstate.hpp"
#include "libtheme.hpp"
#include "libabstracthighlighter.hpp"
#include "libabstracthighlighter.h"

KSyntaxHighlighting__Definition* k_syntaxhighlighting__abstracthighlighter_definition(const void* self) {
    return KSyntaxHighlighting__AbstractHighlighter_Definition((KSyntaxHighlighting__AbstractHighlighter*)self);
}

void k_syntaxhighlighting__abstracthighlighter_set_definition(void* self, const void* def) {
    KSyntaxHighlighting__AbstractHighlighter_SetDefinition((KSyntaxHighlighting__AbstractHighlighter*)self, (KSyntaxHighlighting__Definition*)def);
}

KSyntaxHighlighting__Theme* k_syntaxhighlighting__abstracthighlighter_theme(const void* self) {
    return KSyntaxHighlighting__AbstractHighlighter_Theme((KSyntaxHighlighting__AbstractHighlighter*)self);
}

void k_syntaxhighlighting__abstracthighlighter_set_theme(void* self, const void* theme) {
    KSyntaxHighlighting__AbstractHighlighter_SetTheme((KSyntaxHighlighting__AbstractHighlighter*)self, (KSyntaxHighlighting__Theme*)theme);
}

void k_syntaxhighlighting__abstracthighlighter_delete(void* self) {
    KSyntaxHighlighting__AbstractHighlighter_Delete((KSyntaxHighlighting__AbstractHighlighter*)(self));
}
