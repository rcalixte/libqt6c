#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUSQT6C_LIBQDBUSPENDINGREPLY_H
#define SRC_POSIX_EXTRAS_DBUSQT6C_LIBQDBUSPENDINGREPLY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qdbuspendingreplybase.html

/// Inherited from QDBusPendingCall
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdbuspendingcall.html#operator-eq)
///
/// @param self QDBusPendingReplyBase*
/// @param other QDBusPendingCall*
void q_dbuspendingreplybase_operator_assign(void* self, void* other);

/// Inherited from QDBusPendingCall
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdbuspendingcall.html#swap)
///
/// @param self QDBusPendingReplyBase*
/// @param other QDBusPendingCall*
void q_dbuspendingreplybase_swap(void* self, void* other);

/// Inherited from QDBusPendingCall
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdbuspendingcall.html#isFinished)
///
/// @param self QDBusPendingReplyBase*
bool q_dbuspendingreplybase_is_finished(void* self);

/// Inherited from QDBusPendingCall
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdbuspendingcall.html#waitForFinished)
///
/// @param self QDBusPendingReplyBase*
void q_dbuspendingreplybase_wait_for_finished(void* self);

/// Inherited from QDBusPendingCall
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdbuspendingcall.html#isError)
///
/// @param self QDBusPendingReplyBase*
bool q_dbuspendingreplybase_is_error(void* self);

/// Inherited from QDBusPendingCall
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdbuspendingcall.html#isValid)
///
/// @param self QDBusPendingReplyBase*
bool q_dbuspendingreplybase_is_valid(void* self);

/// Inherited from QDBusPendingCall
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdbuspendingcall.html#error)
///
/// @param self QDBusPendingReplyBase*
QDBusError* q_dbuspendingreplybase_error(void* self);

/// Inherited from QDBusPendingCall
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdbuspendingcall.html#reply)
///
/// @param self QDBusPendingReplyBase*
QDBusMessage* q_dbuspendingreplybase_reply(void* self);

/// Inherited from QDBusPendingCall
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdbuspendingcall.html#fromError)
///
/// @param errorVal QDBusError*
QDBusPendingCall* q_dbuspendingreplybase_from_error(void* errorVal);

/// Inherited from QDBusPendingCall
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdbuspendingcall.html#fromCompletedCall)
///
/// @param message QDBusMessage*
QDBusPendingCall* q_dbuspendingreplybase_from_completed_call(void* message);
#endif
