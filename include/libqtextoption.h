#pragma once
#ifndef SRCQT6C_LIBQTEXTOPTION_H
#define SRCQT6C_LIBQTEXTOPTION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqchar.h"

QTextOption* q_textoption_new();
QTextOption* q_textoption_new2(int64_t alignment);
QTextOption* q_textoption_new3(void* o);
void q_textoption_operator_assign(void* self, void* o);
void q_textoption_set_alignment(void* self, int64_t alignment);
int64_t q_textoption_alignment(void* self);
void q_textoption_set_text_direction(void* self, int64_t aDirection);
int64_t q_textoption_text_direction(void* self);
void q_textoption_set_wrap_mode(void* self, int64_t wrap);
int64_t q_textoption_wrap_mode(void* self);
void q_textoption_set_flags(void* self, int64_t flags);
int64_t q_textoption_flags(void* self);
void q_textoption_set_tab_stop_distance(void* self, double tabStopDistance);
double q_textoption_tab_stop_distance(void* self);
void q_textoption_set_tab_array(void* self, double* tabStops[]);
libqt_list /* of double */ q_textoption_tab_array(void* self);
void q_textoption_set_tabs(void* self, void* tabStops[]);
libqt_list /* of QTextOption__Tab* */ q_textoption_tabs(void* self);
void q_textoption_set_use_design_metrics(void* self, bool b);
bool q_textoption_use_design_metrics(void* self);
void q_textoption_delete(void* self);

QTextOption__Tab* q_textoption__tab_new(void* other);
QTextOption__Tab* q_textoption__tab_new2(void* other);
QTextOption__Tab* q_textoption__tab_new3();
QTextOption__Tab* q_textoption__tab_new4(double pos, int64_t tabType);
QTextOption__Tab* q_textoption__tab_new5(double pos, int64_t tabType, void* delim);
void q_textoption__tab_copy_assign(void* self, void* other);
void q_textoption__tab_move_assign(void* self, void* other);
bool q_textoption__tab_operator_equal(void* self, void* other);
bool q_textoption__tab_operator_not_equal(void* self, void* other);
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
