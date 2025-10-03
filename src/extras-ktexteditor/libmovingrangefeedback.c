#include "libmovingrange.hpp"
#include "libview.hpp"
#include "libmovingrangefeedback.hpp"
#include "libmovingrangefeedback.h"

KTextEditor__MovingRangeFeedback* k_texteditor__movingrangefeedback_new() {
    return KTextEditor__MovingRangeFeedback_new();
}

void k_texteditor__movingrangefeedback_range_empty(void* self, void* range) {
    KTextEditor__MovingRangeFeedback_RangeEmpty((KTextEditor__MovingRangeFeedback*)self, (KTextEditor__MovingRange*)range);
}

void k_texteditor__movingrangefeedback_on_range_empty(void* self, void (*callback)(void*, void*)) {
    KTextEditor__MovingRangeFeedback_OnRangeEmpty((KTextEditor__MovingRangeFeedback*)self, (intptr_t)callback);
}

void k_texteditor__movingrangefeedback_qbase_range_empty(void* self, void* range) {
    KTextEditor__MovingRangeFeedback_QBaseRangeEmpty((KTextEditor__MovingRangeFeedback*)self, (KTextEditor__MovingRange*)range);
}

void k_texteditor__movingrangefeedback_range_invalid(void* self, void* range) {
    KTextEditor__MovingRangeFeedback_RangeInvalid((KTextEditor__MovingRangeFeedback*)self, (KTextEditor__MovingRange*)range);
}

void k_texteditor__movingrangefeedback_on_range_invalid(void* self, void (*callback)(void*, void*)) {
    KTextEditor__MovingRangeFeedback_OnRangeInvalid((KTextEditor__MovingRangeFeedback*)self, (intptr_t)callback);
}

void k_texteditor__movingrangefeedback_qbase_range_invalid(void* self, void* range) {
    KTextEditor__MovingRangeFeedback_QBaseRangeInvalid((KTextEditor__MovingRangeFeedback*)self, (KTextEditor__MovingRange*)range);
}

void k_texteditor__movingrangefeedback_mouse_entered_range(void* self, void* range, void* view) {
    KTextEditor__MovingRangeFeedback_MouseEnteredRange((KTextEditor__MovingRangeFeedback*)self, (KTextEditor__MovingRange*)range, (KTextEditor__View*)view);
}

void k_texteditor__movingrangefeedback_on_mouse_entered_range(void* self, void (*callback)(void*, void*, void*)) {
    KTextEditor__MovingRangeFeedback_OnMouseEnteredRange((KTextEditor__MovingRangeFeedback*)self, (intptr_t)callback);
}

void k_texteditor__movingrangefeedback_qbase_mouse_entered_range(void* self, void* range, void* view) {
    KTextEditor__MovingRangeFeedback_QBaseMouseEnteredRange((KTextEditor__MovingRangeFeedback*)self, (KTextEditor__MovingRange*)range, (KTextEditor__View*)view);
}

void k_texteditor__movingrangefeedback_mouse_exited_range(void* self, void* range, void* view) {
    KTextEditor__MovingRangeFeedback_MouseExitedRange((KTextEditor__MovingRangeFeedback*)self, (KTextEditor__MovingRange*)range, (KTextEditor__View*)view);
}

void k_texteditor__movingrangefeedback_on_mouse_exited_range(void* self, void (*callback)(void*, void*, void*)) {
    KTextEditor__MovingRangeFeedback_OnMouseExitedRange((KTextEditor__MovingRangeFeedback*)self, (intptr_t)callback);
}

void k_texteditor__movingrangefeedback_qbase_mouse_exited_range(void* self, void* range, void* view) {
    KTextEditor__MovingRangeFeedback_QBaseMouseExitedRange((KTextEditor__MovingRangeFeedback*)self, (KTextEditor__MovingRange*)range, (KTextEditor__View*)view);
}

void k_texteditor__movingrangefeedback_caret_entered_range(void* self, void* range, void* view) {
    KTextEditor__MovingRangeFeedback_CaretEnteredRange((KTextEditor__MovingRangeFeedback*)self, (KTextEditor__MovingRange*)range, (KTextEditor__View*)view);
}

void k_texteditor__movingrangefeedback_on_caret_entered_range(void* self, void (*callback)(void*, void*, void*)) {
    KTextEditor__MovingRangeFeedback_OnCaretEnteredRange((KTextEditor__MovingRangeFeedback*)self, (intptr_t)callback);
}

void k_texteditor__movingrangefeedback_qbase_caret_entered_range(void* self, void* range, void* view) {
    KTextEditor__MovingRangeFeedback_QBaseCaretEnteredRange((KTextEditor__MovingRangeFeedback*)self, (KTextEditor__MovingRange*)range, (KTextEditor__View*)view);
}

void k_texteditor__movingrangefeedback_caret_exited_range(void* self, void* range, void* view) {
    KTextEditor__MovingRangeFeedback_CaretExitedRange((KTextEditor__MovingRangeFeedback*)self, (KTextEditor__MovingRange*)range, (KTextEditor__View*)view);
}

void k_texteditor__movingrangefeedback_on_caret_exited_range(void* self, void (*callback)(void*, void*, void*)) {
    KTextEditor__MovingRangeFeedback_OnCaretExitedRange((KTextEditor__MovingRangeFeedback*)self, (intptr_t)callback);
}

void k_texteditor__movingrangefeedback_qbase_caret_exited_range(void* self, void* range, void* view) {
    KTextEditor__MovingRangeFeedback_QBaseCaretExitedRange((KTextEditor__MovingRangeFeedback*)self, (KTextEditor__MovingRange*)range, (KTextEditor__View*)view);
}

void k_texteditor__movingrangefeedback_delete(void* self) {
    KTextEditor__MovingRangeFeedback_Delete((KTextEditor__MovingRangeFeedback*)(self));
}
