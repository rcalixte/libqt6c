#include "../libqcolor.hpp"
#include "../libqpalette.hpp"
#include "libkiconcolors.hpp"
#include "libkiconcolors.h"

KIconColors* k_iconcolors_new() {
    return KIconColors_new();
}

KIconColors* k_iconcolors_new2(void* color) {
    return KIconColors_new2((QColor*)color);
}

KIconColors* k_iconcolors_new3(void* palette) {
    return KIconColors_new3((QPalette*)palette);
}

KIconColors* k_iconcolors_new4(void* other) {
    return KIconColors_new4((KIconColors*)other);
}

void k_iconcolors_operator_assign(void* self, void* other) {
    KIconColors_OperatorAssign((KIconColors*)self, (KIconColors*)other);
}

QColor* k_iconcolors_text(void* self) {
    return KIconColors_Text((KIconColors*)self);
}

QColor* k_iconcolors_highlight(void* self) {
    return KIconColors_Highlight((KIconColors*)self);
}

QColor* k_iconcolors_highlighted_text(void* self) {
    return KIconColors_HighlightedText((KIconColors*)self);
}

QColor* k_iconcolors_accent(void* self) {
    return KIconColors_Accent((KIconColors*)self);
}

QColor* k_iconcolors_background(void* self) {
    return KIconColors_Background((KIconColors*)self);
}

QColor* k_iconcolors_neutral_text(void* self) {
    return KIconColors_NeutralText((KIconColors*)self);
}

QColor* k_iconcolors_positive_text(void* self) {
    return KIconColors_PositiveText((KIconColors*)self);
}

QColor* k_iconcolors_negative_text(void* self) {
    return KIconColors_NegativeText((KIconColors*)self);
}

QColor* k_iconcolors_active_text(void* self) {
    return KIconColors_ActiveText((KIconColors*)self);
}

void k_iconcolors_set_text(void* self, void* color) {
    KIconColors_SetText((KIconColors*)self, (QColor*)color);
}

void k_iconcolors_set_highlight(void* self, void* color) {
    KIconColors_SetHighlight((KIconColors*)self, (QColor*)color);
}

void k_iconcolors_set_highlighted_text(void* self, void* color) {
    KIconColors_SetHighlightedText((KIconColors*)self, (QColor*)color);
}

void k_iconcolors_set_accent(void* self, void* color) {
    KIconColors_SetAccent((KIconColors*)self, (QColor*)color);
}

void k_iconcolors_set_background(void* self, void* color) {
    KIconColors_SetBackground((KIconColors*)self, (QColor*)color);
}

void k_iconcolors_set_neutral_text(void* self, void* color) {
    KIconColors_SetNeutralText((KIconColors*)self, (QColor*)color);
}

void k_iconcolors_set_positive_text(void* self, void* color) {
    KIconColors_SetPositiveText((KIconColors*)self, (QColor*)color);
}

void k_iconcolors_set_negative_text(void* self, void* color) {
    KIconColors_SetNegativeText((KIconColors*)self, (QColor*)color);
}

void k_iconcolors_set_active_text(void* self, void* color) {
    KIconColors_SetActiveText((KIconColors*)self, (QColor*)color);
}

void k_iconcolors_delete(void* self) {
    KIconColors_Delete((KIconColors*)(self));
}
