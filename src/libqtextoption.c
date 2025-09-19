#include "libqchar.hpp"
#include "libqtextoption.hpp"
#include "libqtextoption.h"

QTextOption* q_textoption_new() {
    return QTextOption_new();
}

QTextOption* q_textoption_new2(int32_t alignment) {
    return QTextOption_new2(alignment);
}

QTextOption* q_textoption_new3(void* o) {
    return QTextOption_new3((QTextOption*)o);
}

void q_textoption_operator_assign(void* self, void* o) {
    QTextOption_OperatorAssign((QTextOption*)self, (QTextOption*)o);
}

void q_textoption_set_alignment(void* self, int32_t alignment) {
    QTextOption_SetAlignment((QTextOption*)self, alignment);
}

int32_t q_textoption_alignment(void* self) {
    return QTextOption_Alignment((QTextOption*)self);
}

void q_textoption_set_text_direction(void* self, int32_t aDirection) {
    QTextOption_SetTextDirection((QTextOption*)self, aDirection);
}

int32_t q_textoption_text_direction(void* self) {
    return QTextOption_TextDirection((QTextOption*)self);
}

void q_textoption_set_wrap_mode(void* self, int32_t wrap) {
    QTextOption_SetWrapMode((QTextOption*)self, wrap);
}

int32_t q_textoption_wrap_mode(void* self) {
    return QTextOption_WrapMode((QTextOption*)self);
}

void q_textoption_set_flags(void* self, int64_t flags) {
    QTextOption_SetFlags((QTextOption*)self, flags);
}

int64_t q_textoption_flags(void* self) {
    return QTextOption_Flags((QTextOption*)self);
}

void q_textoption_set_tab_stop_distance(void* self, double tabStopDistance) {
    QTextOption_SetTabStopDistance((QTextOption*)self, tabStopDistance);
}

double q_textoption_tab_stop_distance(void* self) {
    return QTextOption_TabStopDistance((QTextOption*)self);
}

void q_textoption_set_tab_array(void* self, libqt_list tabStops) {
    QTextOption_SetTabArray((QTextOption*)self, tabStops);
}

libqt_list /* of double */ q_textoption_tab_array(void* self) {
    libqt_list _arr = QTextOption_TabArray((QTextOption*)self);
    return _arr;
}

void q_textoption_set_tabs(void* self, libqt_list tabStops) {
    QTextOption_SetTabs((QTextOption*)self, tabStops);
}

libqt_list /* of QTextOption__Tab* */ q_textoption_tabs(void* self) {
    libqt_list _arr = QTextOption_Tabs((QTextOption*)self);
    return _arr;
}

void q_textoption_set_use_design_metrics(void* self, bool b) {
    QTextOption_SetUseDesignMetrics((QTextOption*)self, b);
}

bool q_textoption_use_design_metrics(void* self) {
    return QTextOption_UseDesignMetrics((QTextOption*)self);
}

void q_textoption_delete(void* self) {
    QTextOption_Delete((QTextOption*)(self));
}

QTextOption__Tab* q_textoption__tab_new(void* other) {
    return QTextOption__Tab_new((QTextOption__Tab*)other);
}

QTextOption__Tab* q_textoption__tab_new2(void* other) {
    return QTextOption__Tab_new2((QTextOption__Tab*)other);
}

QTextOption__Tab* q_textoption__tab_new3() {
    return QTextOption__Tab_new3();
}

QTextOption__Tab* q_textoption__tab_new4(double pos, int32_t tabType) {
    return QTextOption__Tab_new4(pos, tabType);
}

QTextOption__Tab* q_textoption__tab_new5(double pos, int32_t tabType, void* delim) {
    return QTextOption__Tab_new5(pos, tabType, (QChar*)delim);
}

void q_textoption__tab_copy_assign(void* self, void* other) {
    QTextOption__Tab_CopyAssign((QTextOption__Tab*)self, (QTextOption__Tab*)other);
}

void q_textoption__tab_move_assign(void* self, void* other) {
    QTextOption__Tab_MoveAssign((QTextOption__Tab*)self, (QTextOption__Tab*)other);
}

bool q_textoption__tab_operator_equal(void* self, void* other) {
    return QTextOption__Tab_OperatorEqual((QTextOption__Tab*)self, (QTextOption__Tab*)other);
}

bool q_textoption__tab_operator_not_equal(void* self, void* other) {
    return QTextOption__Tab_OperatorNotEqual((QTextOption__Tab*)self, (QTextOption__Tab*)other);
}

double q_textoption__tab_position(void* self) {
    return QTextOption__Tab_Position((QTextOption__Tab*)self);
}

void q_textoption__tab_set_position(void* self, double position) {
    QTextOption__Tab_SetPosition((QTextOption__Tab*)self, position);
}

int32_t q_textoption__tab_type(void* self) {
    return QTextOption__Tab_Type((QTextOption__Tab*)self);
}

void q_textoption__tab_set_type(void* self, int32_t type) {
    QTextOption__Tab_SetType((QTextOption__Tab*)self, type);
}

QChar* q_textoption__tab_delimiter(void* self) {
    return QTextOption__Tab_Delimiter((QTextOption__Tab*)self);
}

void q_textoption__tab_set_delimiter(void* self, void* delimiter) {
    QTextOption__Tab_SetDelimiter((QTextOption__Tab*)self, (QChar*)delimiter);
}

void q_textoption__tab_delete(void* self) {
    QTextOption__Tab_Delete((QTextOption__Tab*)(self));
}
