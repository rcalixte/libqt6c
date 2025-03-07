#include "libqchar.hpp"
#include "libqtextoption.hpp"
#include "libqtextoption.h"

/// https://doc.qt.io/qt-6/qtextoption.html

/// q_textoption_new constructs a new QTextOption object.
///
///
QTextOption* q_textoption_new() {
    return QTextOption_new();
}

/// q_textoption_new2 constructs a new QTextOption object.
///
/// ``` int alignment ```
QTextOption* q_textoption_new2(int64_t alignment) {
    return QTextOption_new2(alignment);
}

/// q_textoption_new3 constructs a new QTextOption object.
///
/// ``` QTextOption* o ```
QTextOption* q_textoption_new3(void* o) {
    return QTextOption_new3((QTextOption*)o);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#operator=)
///
/// ``` QTextOption* self, QTextOption* o ```
void q_textoption_operator_assign(void* self, void* o) {
    QTextOption_OperatorAssign((QTextOption*)self, (QTextOption*)o);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#setAlignment)
///
/// ``` QTextOption* self, int alignment ```
void q_textoption_set_alignment(void* self, int64_t alignment) {
    QTextOption_SetAlignment((QTextOption*)self, alignment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#alignment)
///
/// ``` QTextOption* self ```
int64_t q_textoption_alignment(void* self) {
    return QTextOption_Alignment((QTextOption*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#setTextDirection)
///
/// ``` QTextOption* self, enum Qt__LayoutDirection aDirection ```
void q_textoption_set_text_direction(void* self, int64_t aDirection) {
    QTextOption_SetTextDirection((QTextOption*)self, aDirection);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#textDirection)
///
/// ``` QTextOption* self ```
int64_t q_textoption_text_direction(void* self) {
    return QTextOption_TextDirection((QTextOption*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#setWrapMode)
///
/// ``` QTextOption* self, enum QTextOption__WrapMode wrap ```
void q_textoption_set_wrap_mode(void* self, int64_t wrap) {
    QTextOption_SetWrapMode((QTextOption*)self, wrap);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#wrapMode)
///
/// ``` QTextOption* self ```
int64_t q_textoption_wrap_mode(void* self) {
    return QTextOption_WrapMode((QTextOption*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#setFlags)
///
/// ``` QTextOption* self, int flags ```
void q_textoption_set_flags(void* self, int64_t flags) {
    QTextOption_SetFlags((QTextOption*)self, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#flags)
///
/// ``` QTextOption* self ```
int64_t q_textoption_flags(void* self) {
    return QTextOption_Flags((QTextOption*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#setTabStopDistance)
///
/// ``` QTextOption* self, double tabStopDistance ```
void q_textoption_set_tab_stop_distance(void* self, double tabStopDistance) {
    QTextOption_SetTabStopDistance((QTextOption*)self, tabStopDistance);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#tabStopDistance)
///
/// ``` QTextOption* self ```
double q_textoption_tab_stop_distance(void* self) {
    return QTextOption_TabStopDistance((QTextOption*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#setTabArray)
///
/// ``` QTextOption* self, double* tabStops[] ```
void q_textoption_set_tab_array(void* self, double* tabStops[]) {
    size_t tabStops_len = 0;
    while (tabStops[tabStops_len] != NULL) {
        tabStops_len++;
    }
    libqt_list tabStops_list = {
        .len = tabStops_len,
        .data = {(double*)tabStops},
    };
    QTextOption_SetTabArray((QTextOption*)self, tabStops_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#tabArray)
///
/// ``` QTextOption* self ```
libqt_list /* of double */ q_textoption_tab_array(void* self) {
    libqt_list _arr = QTextOption_TabArray((QTextOption*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#setTabs)
///
/// ``` QTextOption* self, QTextOption__Tab* tabStops[] ```
void q_textoption_set_tabs(void* self, void* tabStops[]) {
    QTextOption__Tab** tabStops_arr = (QTextOption__Tab**)tabStops;
    size_t tabStops_len = 0;
    while (tabStops_arr[tabStops_len] != NULL) {
        tabStops_len++;
    }
    libqt_list tabStops_list = {
        .len = tabStops_len,
        .data = {(QTextOption__Tab*)tabStops},
    };
    QTextOption_SetTabs((QTextOption*)self, tabStops_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#tabs)
///
/// ``` QTextOption* self ```
libqt_list /* of QTextOption__Tab* */ q_textoption_tabs(void* self) {
    libqt_list _arr = QTextOption_Tabs((QTextOption*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#setUseDesignMetrics)
///
/// ``` QTextOption* self, bool b ```
void q_textoption_set_use_design_metrics(void* self, bool b) {
    QTextOption_SetUseDesignMetrics((QTextOption*)self, b);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption.html#useDesignMetrics)
///
/// ``` QTextOption* self ```
bool q_textoption_use_design_metrics(void* self) {
    return QTextOption_UseDesignMetrics((QTextOption*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QTextOption* self ```
void q_textoption_delete(void* self) {
    QTextOption_Delete((QTextOption*)(self));
}

/// https://doc.qt.io/qt-6/qtextoption-tab.html

/// q_textoption__tab_new constructs a new QTextOption::Tab object.
///
/// ``` QTextOption__Tab* other ```
QTextOption__Tab* q_textoption__tab_new(void* other) {
    return QTextOption__Tab_new((QTextOption__Tab*)other);
}

/// q_textoption__tab_new2 constructs a new QTextOption::Tab object and invalidates the source QTextOption::Tab object.
///
/// ``` QTextOption__Tab* other ```
QTextOption__Tab* q_textoption__tab_new2(void* other) {
    return QTextOption__Tab_new2((QTextOption__Tab*)other);
}

/// q_textoption__tab_new3 constructs a new QTextOption::Tab object.
///
///
QTextOption__Tab* q_textoption__tab_new3() {
    return QTextOption__Tab_new3();
}

/// q_textoption__tab_new4 constructs a new QTextOption::Tab object.
///
/// ``` double pos, enum QTextOption__TabType tabType ```
QTextOption__Tab* q_textoption__tab_new4(double pos, int64_t tabType) {
    return QTextOption__Tab_new4(pos, tabType);
}

/// q_textoption__tab_new5 constructs a new QTextOption::Tab object.
///
/// ``` double pos, enum QTextOption__TabType tabType, QChar* delim ```
QTextOption__Tab* q_textoption__tab_new5(double pos, int64_t tabType, void* delim) {
    return QTextOption__Tab_new5(pos, tabType, (QChar*)delim);
}

/// q_textoption__tab_copy_assign shallow copies `other` into `self`.
///
/// ``` QTextOption__Tab* self, QTextOption__Tab* other ```
void q_textoption__tab_copy_assign(void* self, void* other) {
    QTextOption__Tab_CopyAssign((QTextOption__Tab*)self, (QTextOption__Tab*)other);
}

/// q_textoption__tab_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QTextOption__Tab* self, QTextOption__Tab* other ```
void q_textoption__tab_move_assign(void* self, void* other) {
    QTextOption__Tab_MoveAssign((QTextOption__Tab*)self, (QTextOption__Tab*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption__tab.html#operator==)
///
/// ``` QTextOption__Tab* self, QTextOption__Tab* other ```
bool q_textoption__tab_operator_equal(void* self, void* other) {
    return QTextOption__Tab_OperatorEqual((QTextOption__Tab*)self, (QTextOption__Tab*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextoption__tab.html#operator!=)
///
/// ``` QTextOption__Tab* self, QTextOption__Tab* other ```
bool q_textoption__tab_operator_not_equal(void* self, void* other) {
    return QTextOption__Tab_OperatorNotEqual((QTextOption__Tab*)self, (QTextOption__Tab*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QTextOption__Tab* self ```
void q_textoption__tab_delete(void* self) {
    QTextOption__Tab_Delete((QTextOption__Tab*)(self));
}