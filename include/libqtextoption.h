#pragma once
#ifndef SRCQT6C_LIBQTEXTOPTION_H
#define SRCQT6C_LIBQTEXTOPTION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtextoption.html

/// q_textoption_new constructs a new QTextOption object.
///
///
QTextOption* q_textoption_new();

/// q_textoption_new2 constructs a new QTextOption object.
///
/// ``` int alignment ```
QTextOption* q_textoption_new2(int64_t alignment);

/// q_textoption_new3 constructs a new QTextOption object.
///
/// ``` QTextOption* o ```
QTextOption* q_textoption_new3(void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#operator-eq)
///
/// ``` QTextOption* self, QTextOption* o ```
void q_textoption_operator_assign(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#setAlignment)
///
/// ``` QTextOption* self, int alignment ```
void q_textoption_set_alignment(void* self, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#alignment)
///
/// ``` QTextOption* self ```
int64_t q_textoption_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#setTextDirection)
///
/// ``` QTextOption* self, enum Qt__LayoutDirection aDirection ```
void q_textoption_set_text_direction(void* self, int64_t aDirection);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#textDirection)
///
/// ``` QTextOption* self ```
int64_t q_textoption_text_direction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#setWrapMode)
///
/// ``` QTextOption* self, enum QTextOption__WrapMode wrap ```
void q_textoption_set_wrap_mode(void* self, int64_t wrap);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#wrapMode)
///
/// ``` QTextOption* self ```
int64_t q_textoption_wrap_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#setFlags)
///
/// ``` QTextOption* self, int flags ```
void q_textoption_set_flags(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#flags)
///
/// ``` QTextOption* self ```
int64_t q_textoption_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#setTabStopDistance)
///
/// ``` QTextOption* self, double tabStopDistance ```
void q_textoption_set_tab_stop_distance(void* self, double tabStopDistance);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#tabStopDistance)
///
/// ``` QTextOption* self ```
double q_textoption_tab_stop_distance(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#setTabArray)
///
/// ``` QTextOption* self, libqt_list /* of double */ tabStops ```
void q_textoption_set_tab_array(void* self, libqt_list tabStops);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#tabArray)
///
/// ``` QTextOption* self ```
libqt_list /* of double */ q_textoption_tab_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#setTabs)
///
/// ``` QTextOption* self, libqt_list /* of QTextOption__Tab* */ tabStops ```
void q_textoption_set_tabs(void* self, libqt_list tabStops);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#tabs)
///
/// ``` QTextOption* self ```
libqt_list /* of QTextOption__Tab* */ q_textoption_tabs(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#setUseDesignMetrics)
///
/// ``` QTextOption* self, bool b ```
void q_textoption_set_use_design_metrics(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#useDesignMetrics)
///
/// ``` QTextOption* self ```
bool q_textoption_use_design_metrics(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#dtor.QTextOption)
///
/// Delete this object from C++ memory.
///
/// ``` QTextOption* self ```
void q_textoption_delete(void* self);

/// https://doc.qt.io/qt-6/qtextoption-tab.html

/// q_textoption__tab_new constructs a new QTextOption::Tab object.
///
/// ``` QTextOption__Tab* other ```
QTextOption__Tab* q_textoption__tab_new(void* other);

/// q_textoption__tab_new2 constructs a new QTextOption::Tab object and invalidates the source QTextOption::Tab object.
///
/// ``` QTextOption__Tab* other ```
QTextOption__Tab* q_textoption__tab_new2(void* other);

/// q_textoption__tab_new3 constructs a new QTextOption::Tab object.
///
///
QTextOption__Tab* q_textoption__tab_new3();

/// q_textoption__tab_new4 constructs a new QTextOption::Tab object.
///
/// ``` double pos, enum QTextOption__TabType tabType ```
QTextOption__Tab* q_textoption__tab_new4(double pos, int64_t tabType);

/// q_textoption__tab_new5 constructs a new QTextOption::Tab object.
///
/// ``` double pos, enum QTextOption__TabType tabType, QChar* delim ```
QTextOption__Tab* q_textoption__tab_new5(double pos, int64_t tabType, void* delim);

/// q_textoption__tab_copy_assign shallow copies `other` into `self`.
///
/// ``` QTextOption__Tab* self, QTextOption__Tab* other ```
void q_textoption__tab_copy_assign(void* self, void* other);

/// q_textoption__tab_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QTextOption__Tab* self, QTextOption__Tab* other ```
void q_textoption__tab_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption__tab.html#operator-eq-eq)
///
/// ``` QTextOption__Tab* self, QTextOption__Tab* other ```
bool q_textoption__tab_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption__tab.html#operator-not-eq)
///
/// ``` QTextOption__Tab* self, QTextOption__Tab* other ```
bool q_textoption__tab_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption::tab.html#dtor.QTextOption::Tab)
///
/// Delete this object from C++ memory.
///
/// ``` QTextOption__Tab* self ```
void q_textoption__tab_delete(void* self);

/// https://doc.qt.io/qt-6/qtextoption.html#types

typedef enum {
    QTEXTOPTION_TABTYPE_LEFTTAB = 0,
    QTEXTOPTION_TABTYPE_RIGHTTAB = 1,
    QTEXTOPTION_TABTYPE_CENTERTAB = 2,
    QTEXTOPTION_TABTYPE_DELIMITERTAB = 3
} QTextOption__TabType;

typedef enum {
    QTEXTOPTION_WRAPMODE_NOWRAP = 0,
    QTEXTOPTION_WRAPMODE_WORDWRAP = 1,
    QTEXTOPTION_WRAPMODE_MANUALWRAP = 2,
    QTEXTOPTION_WRAPMODE_WRAPANYWHERE = 3,
    QTEXTOPTION_WRAPMODE_WRAPATWORDBOUNDARYORANYWHERE = 4
} QTextOption__WrapMode;

typedef enum {
    QTEXTOPTION_FLAG_SHOWTABSANDSPACES = 1,
    QTEXTOPTION_FLAG_SHOWLINEANDPARAGRAPHSEPARATORS = 2,
    QTEXTOPTION_FLAG_ADDSPACEFORLINEANDPARAGRAPHSEPARATORS = 4,
    QTEXTOPTION_FLAG_SUPPRESSCOLORS = 8,
    QTEXTOPTION_FLAG_SHOWDOCUMENTTERMINATOR = 16,
    QTEXTOPTION_FLAG_INCLUDETRAILINGSPACES = 2147483648
} QTextOption__Flag;

#endif
