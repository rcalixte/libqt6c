#include "libqvariant.hpp"
#include "libqscrollerproperties.hpp"
#include "libqscrollerproperties.h"

/// https://doc.qt.io/qt-6/qscrollerproperties.html

/// q_scrollerproperties_new constructs a new QScrollerProperties object.
///
///
QScrollerProperties* q_scrollerproperties_new() {
    return QScrollerProperties_new();
}

/// q_scrollerproperties_new2 constructs a new QScrollerProperties object.
///
/// ``` QScrollerProperties* sp ```
QScrollerProperties* q_scrollerproperties_new2(void* sp) {
    return QScrollerProperties_new2((QScrollerProperties*)sp);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollerproperties.html#operator=)
///
/// ``` QScrollerProperties* self, QScrollerProperties* sp ```
void q_scrollerproperties_operator_assign(void* self, void* sp) {
    QScrollerProperties_OperatorAssign((QScrollerProperties*)self, (QScrollerProperties*)sp);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollerproperties.html#operator==)
///
/// ``` QScrollerProperties* self, QScrollerProperties* sp ```
bool q_scrollerproperties_operator_equal(void* self, void* sp) {
    return QScrollerProperties_OperatorEqual((QScrollerProperties*)self, (QScrollerProperties*)sp);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollerproperties.html#operator!=)
///
/// ``` QScrollerProperties* self, QScrollerProperties* sp ```
bool q_scrollerproperties_operator_not_equal(void* self, void* sp) {
    return QScrollerProperties_OperatorNotEqual((QScrollerProperties*)self, (QScrollerProperties*)sp);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollerproperties.html#setDefaultScrollerProperties)
///
/// ``` QScrollerProperties* sp ```
void q_scrollerproperties_set_default_scroller_properties(void* sp) {
    QScrollerProperties_SetDefaultScrollerProperties((QScrollerProperties*)sp);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollerproperties.html#unsetDefaultScrollerProperties)
///
///
void q_scrollerproperties_unset_default_scroller_properties() {
    QScrollerProperties_UnsetDefaultScrollerProperties();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollerproperties.html#scrollMetric)
///
/// ``` QScrollerProperties* self, enum QScrollerProperties__ScrollMetric metric ```
QVariant* q_scrollerproperties_scroll_metric(void* self, int64_t metric) {
    return QScrollerProperties_ScrollMetric((QScrollerProperties*)self, metric);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollerproperties.html#setScrollMetric)
///
/// ``` QScrollerProperties* self, enum QScrollerProperties__ScrollMetric metric, QVariant* value ```
void q_scrollerproperties_set_scroll_metric(void* self, int64_t metric, void* value) {
    QScrollerProperties_SetScrollMetric((QScrollerProperties*)self, metric, (QVariant*)value);
}

/// Delete this object from C++ memory.
///
/// ``` QScrollerProperties* self ```
void q_scrollerproperties_delete(void* self) {
    QScrollerProperties_Delete((QScrollerProperties*)(self));
}