#pragma once
#ifndef SRCQT6C_LIBQTEXTOPTION_H
#define SRCQT6C_LIBQTEXTOPTION_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtextoption.html

/// q_textoption_new constructs a new QTextOption object.
///
QTextOption* q_textoption_new();

/// q_textoption_new2 constructs a new QTextOption object.
///
/// @param alignment flag of enum Qt__AlignmentFlag
QTextOption* q_textoption_new2(int64_t alignment);

/// q_textoption_new3 constructs a new QTextOption object.
///
/// @param o QTextOption*
QTextOption* q_textoption_new3(void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#operator-eq)
///
/// @param self QTextOption*
/// @param o QTextOption*
void q_textoption_operator_assign(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#setAlignment)
///
/// @param self QTextOption*
/// @param alignment flag of enum Qt__AlignmentFlag
void q_textoption_set_alignment(void* self, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#alignment)
///
/// @param self QTextOption*
///
/// @return flag of enum Qt__AlignmentFlag
int64_t q_textoption_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#setTextDirection)
///
/// @param self QTextOption*
/// @param aDirection enum Qt__LayoutDirection
void q_textoption_set_text_direction(void* self, int32_t aDirection);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#textDirection)
///
/// @param self QTextOption*
///
/// @return enum Qt__LayoutDirection
int32_t q_textoption_text_direction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#setWrapMode)
///
/// @param self QTextOption*
/// @param wrap enum QTextOption__WrapMode
void q_textoption_set_wrap_mode(void* self, int32_t wrap);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#wrapMode)
///
/// @param self QTextOption*
///
/// @return enum QTextOption__WrapMode
int32_t q_textoption_wrap_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#setFlags)
///
/// @param self QTextOption*
/// @param flags flag of enum QTextOption__Flag
void q_textoption_set_flags(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#flags)
///
/// @param self QTextOption*
///
/// @return flag of enum QTextOption__Flag
int64_t q_textoption_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#setTabStopDistance)
///
/// @param self QTextOption*
/// @param tabStopDistance double
void q_textoption_set_tab_stop_distance(void* self, double tabStopDistance);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#tabStopDistance)
///
/// @param self QTextOption*
double q_textoption_tab_stop_distance(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#setTabArray)
///
/// @param self QTextOption*
/// @param tabStops libqt_list /* of double */
void q_textoption_set_tab_array(void* self, libqt_list tabStops);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#tabArray)
///
/// @param self QTextOption*
libqt_list /* of double */ q_textoption_tab_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#setTabs)
///
/// @param self QTextOption*
/// @param tabStops libqt_list /* of QTextOption__Tab* */
void q_textoption_set_tabs(void* self, libqt_list tabStops);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#tabs)
///
/// @param self QTextOption*
libqt_list /* of QTextOption__Tab* */ q_textoption_tabs(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#setUseDesignMetrics)
///
/// @param self QTextOption*
/// @param b bool
void q_textoption_set_use_design_metrics(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#useDesignMetrics)
///
/// @param self QTextOption*
bool q_textoption_use_design_metrics(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#dtor.QTextOption)
///
/// Delete this object from C++ memory.
///
/// @param self QTextOption*
void q_textoption_delete(void* self);

/// https://doc.qt.io/qt-6/qtextoption-tab.html

/// q_textoption__tab_new constructs a new QTextOption::Tab object.
///
/// @param other QTextOption__Tab*
QTextOption__Tab* q_textoption__tab_new(void* other);

/// q_textoption__tab_new2 constructs a new QTextOption::Tab object and invalidates the source QTextOption::Tab object.
///
/// @param other QTextOption__Tab*
QTextOption__Tab* q_textoption__tab_new2(void* other);

/// q_textoption__tab_new3 constructs a new QTextOption::Tab object.
///
QTextOption__Tab* q_textoption__tab_new3();

/// q_textoption__tab_new4 constructs a new QTextOption::Tab object.
///
/// @param pos double
/// @param tabType enum QTextOption__TabType
QTextOption__Tab* q_textoption__tab_new4(double pos, int32_t tabType);

/// q_textoption__tab_new5 constructs a new QTextOption::Tab object.
///
/// @param pos double
/// @param tabType enum QTextOption__TabType
/// @param delim QChar*
QTextOption__Tab* q_textoption__tab_new5(double pos, int32_t tabType, void* delim);

/// q_textoption__tab_copy_assign shallow copies `other` into `self`.
///
/// @param self QTextOption__Tab*
/// @param other QTextOption__Tab*
void q_textoption__tab_copy_assign(void* self, void* other);

/// q_textoption__tab_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QTextOption__Tab*
/// @param other QTextOption__Tab*
void q_textoption__tab_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption-tab.html#operator-eq-eq)
///
/// @param self QTextOption__Tab*
/// @param other QTextOption__Tab*
bool q_textoption__tab_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption-tab.html#operator-not-eq)
///
/// @param self QTextOption__Tab*
/// @param other QTextOption__Tab*
bool q_textoption__tab_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption-tab.html#position-var)
///
/// @param self QTextOption__Tab*
double q_textoption__tab_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption-tab.html#position-var)
///
/// @param self QTextOption__Tab*
/// @param position double
void q_textoption__tab_set_position(void* self, double position);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption-tab.html#type-var)
///
/// @param self QTextOption__Tab*
///
/// @return enum QTextOption__TabType
int32_t q_textoption__tab_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption-tab.html#type-var)
///
/// @param self QTextOption__Tab*
/// @param type enum QTextOption__TabType
void q_textoption__tab_set_type(void* self, int32_t _type);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption-tab.html#delimiter-var)
///
/// @param self QTextOption__Tab*
QChar* q_textoption__tab_delimiter(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption-tab.html#delimiter-var)
///
/// @param self QTextOption__Tab*
/// @param delimiter QChar*
void q_textoption__tab_set_delimiter(void* self, void* delimiter);

/// Delete this object from C++ memory.
///
/// @param self QTextOption__Tab*
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
