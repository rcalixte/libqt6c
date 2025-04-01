#include "libqvariant.hpp"
#include "libqscrollerproperties.hpp"
#include "libqscrollerproperties.h"

QScrollerProperties* q_scrollerproperties_new() {
    return QScrollerProperties_new();
}

QScrollerProperties* q_scrollerproperties_new2(void* sp) {
    return QScrollerProperties_new2((QScrollerProperties*)sp);
}

void q_scrollerproperties_operator_assign(void* self, void* sp) {
    QScrollerProperties_OperatorAssign((QScrollerProperties*)self, (QScrollerProperties*)sp);
}

bool q_scrollerproperties_operator_equal(void* self, void* sp) {
    return QScrollerProperties_OperatorEqual((QScrollerProperties*)self, (QScrollerProperties*)sp);
}

bool q_scrollerproperties_operator_not_equal(void* self, void* sp) {
    return QScrollerProperties_OperatorNotEqual((QScrollerProperties*)self, (QScrollerProperties*)sp);
}

void q_scrollerproperties_set_default_scroller_properties(void* sp) {
    QScrollerProperties_SetDefaultScrollerProperties((QScrollerProperties*)sp);
}

void q_scrollerproperties_unset_default_scroller_properties() {
    QScrollerProperties_UnsetDefaultScrollerProperties();
}

QVariant* q_scrollerproperties_scroll_metric(void* self, int64_t metric) {
    return QScrollerProperties_ScrollMetric((QScrollerProperties*)self, metric);
}

void q_scrollerproperties_set_scroll_metric(void* self, int64_t metric, void* value) {
    QScrollerProperties_SetScrollMetric((QScrollerProperties*)self, metric, (QVariant*)value);
}

void q_scrollerproperties_delete(void* self) {
    QScrollerProperties_Delete((QScrollerProperties*)(self));
}
