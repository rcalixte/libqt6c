#include "libcursor.hpp"
#include "libdocument.hpp"
#include "liblinerange.hpp"
#include "libmovingcursor.hpp"
#include "libmovingrangefeedback.hpp"
#include "librange.hpp"
#include "libview.hpp"
#include "libmovingrange.hpp"
#include "libmovingrange.h"

void k_texteditor__movingrange_set_insert_behaviors(void* self, int32_t insertBehaviors) {
    KTextEditor__MovingRange_SetInsertBehaviors((KTextEditor__MovingRange*)self, insertBehaviors);
}

int32_t k_texteditor__movingrange_insert_behaviors(void* self) {
    return KTextEditor__MovingRange_InsertBehaviors((KTextEditor__MovingRange*)self);
}

void k_texteditor__movingrange_set_empty_behavior(void* self, int32_t emptyBehavior) {
    KTextEditor__MovingRange_SetEmptyBehavior((KTextEditor__MovingRange*)self, emptyBehavior);
}

int32_t k_texteditor__movingrange_empty_behavior(void* self) {
    return KTextEditor__MovingRange_EmptyBehavior((KTextEditor__MovingRange*)self);
}

KTextEditor__Document* k_texteditor__movingrange_document(void* self) {
    return KTextEditor__MovingRange_Document((KTextEditor__MovingRange*)self);
}

void k_texteditor__movingrange_set_range(void* self, void* range) {
    KTextEditor__MovingRange_SetRange((KTextEditor__MovingRange*)self, (KTextEditor__Range*)range);
}

const KTextEditor__MovingCursor* k_texteditor__movingrange_start(void* self) {
    return KTextEditor__MovingRange_Start((KTextEditor__MovingRange*)self);
}

const KTextEditor__MovingCursor* k_texteditor__movingrange_end(void* self) {
    return KTextEditor__MovingRange_End((KTextEditor__MovingRange*)self);
}

KTextEditor__View* k_texteditor__movingrange_view(void* self) {
    return KTextEditor__MovingRange_View((KTextEditor__MovingRange*)self);
}

void k_texteditor__movingrange_set_view(void* self, void* view) {
    KTextEditor__MovingRange_SetView((KTextEditor__MovingRange*)self, (KTextEditor__View*)view);
}

bool k_texteditor__movingrange_attribute_only_for_views(void* self) {
    return KTextEditor__MovingRange_AttributeOnlyForViews((KTextEditor__MovingRange*)self);
}

void k_texteditor__movingrange_set_attribute_only_for_views(void* self, bool onlyForViews) {
    KTextEditor__MovingRange_SetAttributeOnlyForViews((KTextEditor__MovingRange*)self, onlyForViews);
}

KTextEditor__MovingRangeFeedback* k_texteditor__movingrange_feedback(void* self) {
    return KTextEditor__MovingRange_Feedback((KTextEditor__MovingRange*)self);
}

void k_texteditor__movingrange_set_feedback(void* self, void* feedback) {
    KTextEditor__MovingRange_SetFeedback((KTextEditor__MovingRange*)self, (KTextEditor__MovingRangeFeedback*)feedback);
}

double k_texteditor__movingrange_z_depth(void* self) {
    return KTextEditor__MovingRange_ZDepth((KTextEditor__MovingRange*)self);
}

void k_texteditor__movingrange_set_z_depth(void* self, double zDepth) {
    KTextEditor__MovingRange_SetZDepth((KTextEditor__MovingRange*)self, zDepth);
}

void k_texteditor__movingrange_set_range4(void* self, void* start, void* end) {
    KTextEditor__MovingRange_SetRange4((KTextEditor__MovingRange*)self, (KTextEditor__Cursor*)start, (KTextEditor__Cursor*)end);
}

const KTextEditor__Range* k_texteditor__movingrange_to_range(void* self) {
    return KTextEditor__MovingRange_ToRange((KTextEditor__MovingRange*)self);
}

KTextEditor__LineRange* k_texteditor__movingrange_to_line_range(void* self) {
    return KTextEditor__MovingRange_ToLineRange((KTextEditor__MovingRange*)self);
}

bool k_texteditor__movingrange_is_empty(void* self) {
    return KTextEditor__MovingRange_IsEmpty((KTextEditor__MovingRange*)self);
}

bool k_texteditor__movingrange_contains(void* self, void* range) {
    return KTextEditor__MovingRange_Contains((KTextEditor__MovingRange*)self, (KTextEditor__Range*)range);
}

bool k_texteditor__movingrange_contains2(void* self, void* cursor) {
    return KTextEditor__MovingRange_Contains2((KTextEditor__MovingRange*)self, (KTextEditor__Cursor*)cursor);
}

bool k_texteditor__movingrange_contains_line(void* self, int line) {
    return KTextEditor__MovingRange_ContainsLine((KTextEditor__MovingRange*)self, line);
}

bool k_texteditor__movingrange_contains_column(void* self, int column) {
    return KTextEditor__MovingRange_ContainsColumn((KTextEditor__MovingRange*)self, column);
}

bool k_texteditor__movingrange_overlaps(void* self, void* range) {
    return KTextEditor__MovingRange_Overlaps((KTextEditor__MovingRange*)self, (KTextEditor__Range*)range);
}

bool k_texteditor__movingrange_overlaps_line(void* self, int line) {
    return KTextEditor__MovingRange_OverlapsLine((KTextEditor__MovingRange*)self, line);
}

bool k_texteditor__movingrange_overlaps_column(void* self, int column) {
    return KTextEditor__MovingRange_OverlapsColumn((KTextEditor__MovingRange*)self, column);
}

bool k_texteditor__movingrange_on_single_line(void* self) {
    return KTextEditor__MovingRange_OnSingleLine((KTextEditor__MovingRange*)self);
}

int32_t k_texteditor__movingrange_number_of_lines(void* self) {
    return KTextEditor__MovingRange_NumberOfLines((KTextEditor__MovingRange*)self);
}

void k_texteditor__movingrange_delete(void* self) {
    KTextEditor__MovingRange_Delete((KTextEditor__MovingRange*)(self));
}
