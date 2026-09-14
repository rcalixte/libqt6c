#pragma once
#ifndef LIBQTESTSUPPORT_GUI_H
#define LIBQTESTSUPPORT_GUI_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qtestsupport-gui-h.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qtestsupport-gui-h.html#qt_handleTouchEvent)
///
/// @param w QWindow*
/// @param device QPointingDevice*
/// @param points libqt_list of QEventPoint*
/// @param mods flag of enum Qt__KeyboardModifier
///
void q_qtestsupport_gui_h_handle_touch_event(void* w, void* device, libqt_list points, int32_t mods);

/// [Upstream resources](https://doc.qt.io/qt-6/qtestsupport-gui-h.html#qt_handleTouchEventv2)
///
/// @param w QWindow*
/// @param device QPointingDevice*
/// @param points libqt_list of QEventPoint*
/// @param mods flag of enum Qt__KeyboardModifier
///
bool q_qtestsupport_gui_h_handle_touch_eventv2(void* w, void* device, libqt_list points, int32_t mods);

/// [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#press)
///
/// @param self QTest__QTouchEventSequence*
/// @param touchId int
/// @param pt QPoint*
///
QTest__QTouchEventSequence* q_test__qtoucheventsequence_press(void* self, int touchId, void* pt);

/// [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#move)
///
/// @param self QTest__QTouchEventSequence*
/// @param touchId int
/// @param pt QPoint*
///
QTest__QTouchEventSequence* q_test__qtoucheventsequence_move(void* self, int touchId, void* pt);

/// [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#release)
///
/// @param self QTest__QTouchEventSequence*
/// @param touchId int
/// @param pt QPoint*
///
QTest__QTouchEventSequence* q_test__qtoucheventsequence_release(void* self, int touchId, void* pt);

/// [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#stationary)
///
/// @param self QTest__QTouchEventSequence*
/// @param touchId int
///
QTest__QTouchEventSequence* q_test__qtoucheventsequence_stationary(void* self, int touchId);

/// [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#commit)
///
/// @param self QTest__QTouchEventSequence*
/// @param processEvents bool
///
bool q_test__qtoucheventsequence_commit(void* self, bool processEvents);

/// [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#press)
///
/// @param self QTest__QTouchEventSequence*
/// @param touchId int
/// @param pt QPoint*
/// @param window QWindow*
///
QTest__QTouchEventSequence* q_test__qtoucheventsequence_press3(void* self, int touchId, void* pt, void* window);

/// [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#move)
///
/// @param self QTest__QTouchEventSequence*
/// @param touchId int
/// @param pt QPoint*
/// @param window QWindow*
///
QTest__QTouchEventSequence* q_test__qtoucheventsequence_move3(void* self, int touchId, void* pt, void* window);

/// [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#release)
///
/// @param self QTest__QTouchEventSequence*
/// @param touchId int
/// @param pt QPoint*
/// @param window QWindow*
///
QTest__QTouchEventSequence* q_test__qtoucheventsequence_release3(void* self, int touchId, void* pt, void* window);

/// Delete this object from C++ memory.
///
/// @param self QTest__QTouchEventSequence*
///
void q_test__qtoucheventsequence_delete(void* self);

#endif
