#pragma once
#ifndef SRCQT6C_LIBQSCROLLERPROPERTIES_H
#define SRCQT6C_LIBQSCROLLERPROPERTIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqvariant.h"

/// https://doc.qt.io/qt-6/qscrollerproperties.html

/// q_scrollerproperties_new constructs a new QScrollerProperties object.
///
///
QScrollerProperties* q_scrollerproperties_new();

/// q_scrollerproperties_new2 constructs a new QScrollerProperties object.
///
/// ``` QScrollerProperties* sp ```
QScrollerProperties* q_scrollerproperties_new2(void* sp);

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollerproperties.html#operator=)
///
/// ``` QScrollerProperties* self, QScrollerProperties* sp ```
void q_scrollerproperties_operator_assign(void* self, void* sp);

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollerproperties.html#operator==)
///
/// ``` QScrollerProperties* self, QScrollerProperties* sp ```
bool q_scrollerproperties_operator_equal(void* self, void* sp);

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollerproperties.html#operator!=)
///
/// ``` QScrollerProperties* self, QScrollerProperties* sp ```
bool q_scrollerproperties_operator_not_equal(void* self, void* sp);

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollerproperties.html#setDefaultScrollerProperties)
///
/// ``` QScrollerProperties* sp ```
void q_scrollerproperties_set_default_scroller_properties(void* sp);

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollerproperties.html#unsetDefaultScrollerProperties)
///
///
void q_scrollerproperties_unset_default_scroller_properties();

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollerproperties.html#scrollMetric)
///
/// ``` QScrollerProperties* self, enum QScrollerProperties__ScrollMetric metric ```
QVariant* q_scrollerproperties_scroll_metric(void* self, int64_t metric);

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollerproperties.html#setScrollMetric)
///
/// ``` QScrollerProperties* self, enum QScrollerProperties__ScrollMetric metric, QVariant* value ```
void q_scrollerproperties_set_scroll_metric(void* self, int64_t metric, void* value);

/// Delete this object from C++ memory.
///
/// ``` QScrollerProperties* self ```
void q_scrollerproperties_delete(void* self);

/// https://doc.qt.io/qt-6/qscrollerproperties.html#types

typedef enum {
    QSCROLLERPROPERTIES_OVERSHOOTPOLICY_OVERSHOOTWHENSCROLLABLE = 0,
    QSCROLLERPROPERTIES_OVERSHOOTPOLICY_OVERSHOOTALWAYSOFF = 1,
    QSCROLLERPROPERTIES_OVERSHOOTPOLICY_OVERSHOOTALWAYSON = 2
} QScrollerProperties__OvershootPolicy;

typedef enum {
    QSCROLLERPROPERTIES_FRAMERATES_STANDARD = 0,
    QSCROLLERPROPERTIES_FRAMERATES_FPS60 = 1,
    QSCROLLERPROPERTIES_FRAMERATES_FPS30 = 2,
    QSCROLLERPROPERTIES_FRAMERATES_FPS20 = 3
} QScrollerProperties__FrameRates;

typedef enum {
    QSCROLLERPROPERTIES_SCROLLMETRIC_MOUSEPRESSEVENTDELAY = 0,
    QSCROLLERPROPERTIES_SCROLLMETRIC_DRAGSTARTDISTANCE = 1,
    QSCROLLERPROPERTIES_SCROLLMETRIC_DRAGVELOCITYSMOOTHINGFACTOR = 2,
    QSCROLLERPROPERTIES_SCROLLMETRIC_AXISLOCKTHRESHOLD = 3,
    QSCROLLERPROPERTIES_SCROLLMETRIC_SCROLLINGCURVE = 4,
    QSCROLLERPROPERTIES_SCROLLMETRIC_DECELERATIONFACTOR = 5,
    QSCROLLERPROPERTIES_SCROLLMETRIC_MINIMUMVELOCITY = 6,
    QSCROLLERPROPERTIES_SCROLLMETRIC_MAXIMUMVELOCITY = 7,
    QSCROLLERPROPERTIES_SCROLLMETRIC_MAXIMUMCLICKTHROUGHVELOCITY = 8,
    QSCROLLERPROPERTIES_SCROLLMETRIC_ACCELERATINGFLICKMAXIMUMTIME = 9,
    QSCROLLERPROPERTIES_SCROLLMETRIC_ACCELERATINGFLICKSPEEDUPFACTOR = 10,
    QSCROLLERPROPERTIES_SCROLLMETRIC_SNAPPOSITIONRATIO = 11,
    QSCROLLERPROPERTIES_SCROLLMETRIC_SNAPTIME = 12,
    QSCROLLERPROPERTIES_SCROLLMETRIC_OVERSHOOTDRAGRESISTANCEFACTOR = 13,
    QSCROLLERPROPERTIES_SCROLLMETRIC_OVERSHOOTDRAGDISTANCEFACTOR = 14,
    QSCROLLERPROPERTIES_SCROLLMETRIC_OVERSHOOTSCROLLDISTANCEFACTOR = 15,
    QSCROLLERPROPERTIES_SCROLLMETRIC_OVERSHOOTSCROLLTIME = 16,
    QSCROLLERPROPERTIES_SCROLLMETRIC_HORIZONTALOVERSHOOTPOLICY = 17,
    QSCROLLERPROPERTIES_SCROLLMETRIC_VERTICALOVERSHOOTPOLICY = 18,
    QSCROLLERPROPERTIES_SCROLLMETRIC_FRAMERATE = 19,
    QSCROLLERPROPERTIES_SCROLLMETRIC_SCROLLMETRICCOUNT = 20
} QScrollerProperties__ScrollMetric;

#endif
