#include "libqpoint.hpp"
#include "libqwindow.hpp"
#include "libqtestsupport_gui.hpp"
#include "libqtestsupport_gui.h"

QTest__QTouchEventSequence* q_test__qtoucheventsequence_press(void* self, int touchId, void* pt) {
    return QTest__QTouchEventSequence_Press((QTest__QTouchEventSequence*)self, touchId, (QPoint*)pt);
}

QTest__QTouchEventSequence* q_test__qtoucheventsequence_move(void* self, int touchId, void* pt) {
    return QTest__QTouchEventSequence_Move((QTest__QTouchEventSequence*)self, touchId, (QPoint*)pt);
}

QTest__QTouchEventSequence* q_test__qtoucheventsequence_release(void* self, int touchId, void* pt) {
    return QTest__QTouchEventSequence_Release((QTest__QTouchEventSequence*)self, touchId, (QPoint*)pt);
}

QTest__QTouchEventSequence* q_test__qtoucheventsequence_stationary(void* self, int touchId) {
    return QTest__QTouchEventSequence_Stationary((QTest__QTouchEventSequence*)self, touchId);
}

bool q_test__qtoucheventsequence_commit(void* self, bool processEvents) {
    return QTest__QTouchEventSequence_Commit((QTest__QTouchEventSequence*)self, processEvents);
}

QTest__QTouchEventSequence* q_test__qtoucheventsequence_press3(void* self, int touchId, void* pt, void* window) {
    return QTest__QTouchEventSequence_Press3((QTest__QTouchEventSequence*)self, touchId, (QPoint*)pt, (QWindow*)window);
}

QTest__QTouchEventSequence* q_test__qtoucheventsequence_move3(void* self, int touchId, void* pt, void* window) {
    return QTest__QTouchEventSequence_Move3((QTest__QTouchEventSequence*)self, touchId, (QPoint*)pt, (QWindow*)window);
}

QTest__QTouchEventSequence* q_test__qtoucheventsequence_release3(void* self, int touchId, void* pt, void* window) {
    return QTest__QTouchEventSequence_Release3((QTest__QTouchEventSequence*)self, touchId, (QPoint*)pt, (QWindow*)window);
}

void q_test__qtoucheventsequence_delete(void* self) {
    QTest__QTouchEventSequence_Delete((QTest__QTouchEventSequence*)(self));
}
