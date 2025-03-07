#pragma once
#ifndef SRCC_LIBQLINE_HPP
#define SRCC_LIBQLINE_HPP

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QLine QLine;
typedef struct QLineF QLineF;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
#endif

#ifdef __cplusplus
typedef QLineF::IntersectType IntersectType;       // C++ QFlags
typedef QLineF::IntersectionType IntersectionType; // C++ enum
#else
typedef int IntersectType;    // C ABI QFlags
typedef int IntersectionType; // C ABI enum
#endif

QLine* QLine_new(QLine* other);
QLine* QLine_new2(QLine* other);
QLine* QLine_new3();
QLine* QLine_new4(QPoint* pt1, QPoint* pt2);
QLine* QLine_new5(int x1, int y1, int x2, int y2);
QLine* QLine_new6(QLine* param1);
void QLine_CopyAssign(QLine* self, QLine* other);
void QLine_MoveAssign(QLine* self, QLine* other);
bool QLine_IsNull(const QLine* self);
QPoint* QLine_P1(const QLine* self);
QPoint* QLine_P2(const QLine* self);
int QLine_X1(const QLine* self);
int QLine_Y1(const QLine* self);
int QLine_X2(const QLine* self);
int QLine_Y2(const QLine* self);
int QLine_Dx(const QLine* self);
int QLine_Dy(const QLine* self);
void QLine_Translate(QLine* self, QPoint* p);
void QLine_Translate2(QLine* self, int dx, int dy);
QLine* QLine_Translated(const QLine* self, QPoint* p);
QLine* QLine_Translated2(const QLine* self, int dx, int dy);
QPoint* QLine_Center(const QLine* self);
void QLine_SetP1(QLine* self, QPoint* p1);
void QLine_SetP2(QLine* self, QPoint* p2);
void QLine_SetPoints(QLine* self, QPoint* p1, QPoint* p2);
void QLine_SetLine(QLine* self, int x1, int y1, int x2, int y2);
bool QLine_OperatorEqual(const QLine* self, QLine* d);
bool QLine_OperatorNotEqual(const QLine* self, QLine* d);
QLineF* QLine_ToLineF(const QLine* self);
void QLine_Delete(QLine* self);

QLineF* QLineF_new(QLineF* other);
QLineF* QLineF_new2(QLineF* other);
QLineF* QLineF_new3();
QLineF* QLineF_new4(QPointF* pt1, QPointF* pt2);
QLineF* QLineF_new5(double x1, double y1, double x2, double y2);
QLineF* QLineF_new6(QLine* line);
QLineF* QLineF_new7(QLineF* param1);
void QLineF_CopyAssign(QLineF* self, QLineF* other);
void QLineF_MoveAssign(QLineF* self, QLineF* other);
QLineF* QLineF_FromPolar(double length, double angle);
bool QLineF_IsNull(const QLineF* self);
QPointF* QLineF_P1(const QLineF* self);
QPointF* QLineF_P2(const QLineF* self);
double QLineF_X1(const QLineF* self);
double QLineF_Y1(const QLineF* self);
double QLineF_X2(const QLineF* self);
double QLineF_Y2(const QLineF* self);
double QLineF_Dx(const QLineF* self);
double QLineF_Dy(const QLineF* self);
double QLineF_Length(const QLineF* self);
void QLineF_SetLength(QLineF* self, double lenVal);
double QLineF_Angle(const QLineF* self);
void QLineF_SetAngle(QLineF* self, double angle);
double QLineF_AngleTo(const QLineF* self, QLineF* l);
QLineF* QLineF_UnitVector(const QLineF* self);
QLineF* QLineF_NormalVector(const QLineF* self);
int QLineF_Intersects(const QLineF* self, QLineF* l);
QPointF* QLineF_PointAt(const QLineF* self, double t);
void QLineF_Translate(QLineF* self, QPointF* p);
void QLineF_Translate2(QLineF* self, double dx, double dy);
QLineF* QLineF_Translated(const QLineF* self, QPointF* p);
QLineF* QLineF_Translated2(const QLineF* self, double dx, double dy);
QPointF* QLineF_Center(const QLineF* self);
void QLineF_SetP1(QLineF* self, QPointF* p1);
void QLineF_SetP2(QLineF* self, QPointF* p2);
void QLineF_SetPoints(QLineF* self, QPointF* p1, QPointF* p2);
void QLineF_SetLine(QLineF* self, double x1, double y1, double x2, double y2);
bool QLineF_OperatorEqual(const QLineF* self, QLineF* d);
bool QLineF_OperatorNotEqual(const QLineF* self, QLineF* d);
QLine* QLineF_ToLine(const QLineF* self);
int QLineF_Intersects2(const QLineF* self, QLineF* l, QPointF* intersectionPoint);
void QLineF_Delete(QLineF* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
