#include "libqeventpoint.hpp"
#include "libqpoint.hpp"
#include "libqtestsupport_gui.hpp"
#include "libqwidget.hpp"
#include "libqtestsupport_widgets.hpp"
#include "libqtestsupport_widgets.h"

QTest__QTouchEventWidgetSequence* q_test__qtoucheventwidgetsequence_new(void* param1) {
    return QTest__QTouchEventWidgetSequence_new((QTest__QTouchEventWidgetSequence*)param1);
}

QTest__QTouchEventWidgetSequence* q_test__qtoucheventwidgetsequence_press(void* self, int touchId, void* pt) {
    return QTest__QTouchEventWidgetSequence_Press((QTest__QTouchEventWidgetSequence*)self, touchId, (QPoint*)pt);
}

QTest__QTouchEventWidgetSequence* q_test__qtoucheventwidgetsequence_move(void* self, int touchId, void* pt) {
    return QTest__QTouchEventWidgetSequence_Move((QTest__QTouchEventWidgetSequence*)self, touchId, (QPoint*)pt);
}

QTest__QTouchEventWidgetSequence* q_test__qtoucheventwidgetsequence_release(void* self, int touchId, void* pt) {
    return QTest__QTouchEventWidgetSequence_Release((QTest__QTouchEventWidgetSequence*)self, touchId, (QPoint*)pt);
}

QTest__QTouchEventWidgetSequence* q_test__qtoucheventwidgetsequence_stationary(void* self, int touchId) {
    return QTest__QTouchEventWidgetSequence_Stationary((QTest__QTouchEventWidgetSequence*)self, touchId);
}

void q_test__qtoucheventwidgetsequence_on_stationary(void* self, QTest__QTouchEventWidgetSequence* (*callback)(void*, int)) {
    QTest__QTouchEventWidgetSequence_OnStationary((QTest__QTouchEventWidgetSequence*)self, (intptr_t)callback);
}

QTest__QTouchEventWidgetSequence* q_test__qtoucheventwidgetsequence_super_stationary(void* self, int touchId) {
    return QTest__QTouchEventWidgetSequence_SuperStationary((QTest__QTouchEventWidgetSequence*)self, touchId);
}

bool q_test__qtoucheventwidgetsequence_commit(void* self, bool processEvents) {
    return QTest__QTouchEventWidgetSequence_Commit((QTest__QTouchEventWidgetSequence*)self, processEvents);
}

void q_test__qtoucheventwidgetsequence_on_commit(void* self, bool (*callback)(void*, bool)) {
    QTest__QTouchEventWidgetSequence_OnCommit((QTest__QTouchEventWidgetSequence*)self, (intptr_t)callback);
}

bool q_test__qtoucheventwidgetsequence_super_commit(void* self, bool processEvents) {
    return QTest__QTouchEventWidgetSequence_SuperCommit((QTest__QTouchEventWidgetSequence*)self, processEvents);
}

QTest__QTouchEventWidgetSequence* q_test__qtoucheventwidgetsequence_press3(void* self, int touchId, void* pt, void* widget) {
    return QTest__QTouchEventWidgetSequence_Press3((QTest__QTouchEventWidgetSequence*)self, touchId, (QPoint*)pt, (QWidget*)widget);
}

QTest__QTouchEventWidgetSequence* q_test__qtoucheventwidgetsequence_move3(void* self, int touchId, void* pt, void* widget) {
    return QTest__QTouchEventWidgetSequence_Move3((QTest__QTouchEventWidgetSequence*)self, touchId, (QPoint*)pt, (QWidget*)widget);
}

QTest__QTouchEventWidgetSequence* q_test__qtoucheventwidgetsequence_release3(void* self, int touchId, void* pt, void* widget) {
    return QTest__QTouchEventWidgetSequence_Release3((QTest__QTouchEventWidgetSequence*)self, touchId, (QPoint*)pt, (QWidget*)widget);
}

QEventPoint* q_test__qtoucheventwidgetsequence_point(void* self, int touchId) {
    return QTest__QTouchEventWidgetSequence_Point((QTest__QTouchEventWidgetSequence*)self, touchId);
}

QEventPoint* q_test__qtoucheventwidgetsequence_super_point(void* self, int touchId) {
    return QTest__QTouchEventWidgetSequence_SuperPoint((QTest__QTouchEventWidgetSequence*)self, touchId);
}

void q_test__qtoucheventwidgetsequence_on_point(void* self, QEventPoint* (*callback)(void*, int)) {
    QTest__QTouchEventWidgetSequence_OnPoint((QTest__QTouchEventWidgetSequence*)self, (intptr_t)callback);
}

QEventPoint* q_test__qtoucheventwidgetsequence_point_or_previous_point(void* self, int touchId) {
    return QTest__QTouchEventWidgetSequence_PointOrPreviousPoint((QTest__QTouchEventWidgetSequence*)self, touchId);
}

QEventPoint* q_test__qtoucheventwidgetsequence_super_point_or_previous_point(void* self, int touchId) {
    return QTest__QTouchEventWidgetSequence_SuperPointOrPreviousPoint((QTest__QTouchEventWidgetSequence*)self, touchId);
}

void q_test__qtoucheventwidgetsequence_on_point_or_previous_point(void* self, QEventPoint* (*callback)(void*, int)) {
    QTest__QTouchEventWidgetSequence_OnPointOrPreviousPoint((QTest__QTouchEventWidgetSequence*)self, (intptr_t)callback);
}

void q_test__qtoucheventwidgetsequence_delete(void* self) {
    QTest__QTouchEventWidgetSequence_Delete((QTest__QTouchEventWidgetSequence*)(self));
}
