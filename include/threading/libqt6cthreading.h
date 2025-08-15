#pragma once
#ifndef SRCQT6C_LIBQT6CTHREADING_H
#define SRCQT6C_LIBQT6CTHREADING_H

#include <stdlib.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

/// Direct execution in caller's thread (not thread-safe)
///
/// This executes the callback immediately in the current
/// thread which is not necessarily the main thread.
///
/// [Qt documentation](https://doc.qt.io/qt-6/threads-qobject.html)
///
/// @param self void*
/// @param callback void fn(void*)
void q_threading_exec_now(void* self, void (*callback)(void*));

/// Auto execution in main thread (thread-safe)
///
/// If the signal is in the same thread as the receiver,
/// this will be the same as `q_threading_exec_now`.
///
/// If the signal is in a different thread, this will
/// be the same as `q_threading_async`.
///
/// [Qt documentation](https://doc.qt.io/qt-6/threads-qobject.html)
///
/// @param self void*
/// @param callback void fn(void*)
void q_threading_exec(void* self, void (*callback)(void*));

/// Unique auto execution in main thread (thread-safe)
///
/// This runs the callback only if it does not duplicate
/// the signal emission.
///
/// [Qt documentation](https://doc.qt.io/qt-6/threads-qobject.html)
///
/// @param self void*
/// @param callback void fn(void*)
void q_threading_exec_unique(void* self, void (*callback)(void*));

/// Single-shot execution in main thread (thread-safe)
///
/// This runs the callback only once.
///
/// [Qt documentation](https://doc.qt.io/qt-6/threads-qobject.html)
///
/// @param self void*
/// @param callback void fn(void*)
void q_threading_exec_once(void* self, void (*callback)(void*));

/// Non-blocking execution in main thread (thread-safe)
///
/// This runs the callback in the main Qt thread.
/// You should use this whenever you need to
/// access the main Qt GUI from a non-GUI thread.
///
/// [Qt documentation](https://doc.qt.io/qt-6/threads-qobject.html)
///
/// @param self void*
/// @param callback void fn(void*)
void q_threading_async(void* self, void (*callback)(void*));

/// Unique non-blocking execution in main thread (thread-safe)
///
/// This runs the callback only if it does not duplicate
/// the signal emission.
///
/// [Qt documentation](https://doc.qt.io/qt-6/threads-qobject.html)
///
/// @param self void*
/// @param callback void fn(void*)
void q_threading_async_unique(void* self, void (*callback)(void*));

/// Single-shot non-blocking execution in main thread (thread-safe)
///
/// This runs the callback only once.
///
/// [Qt documentation](https://doc.qt.io/qt-6/threads-qobject.html)
///
/// @param self void*
/// @param callback void fn(void*)
void q_threading_async_once(void* self, void (*callback)(void*));

/// Unique single-shot non-blocking execution in main thread (thread-safe)
///
/// This runs the callback only once if it does not duplicate
/// the signal emission.
///
/// [Qt documentation](https://doc.qt.io/qt-6/threads-qobject.html)
///
/// @param self void*
/// @param callback void fn(void*)
void q_threading_async_unique_once(void* self, void (*callback)(void*));

/// Blocking execution in main thread (thread-safe)
///
/// This runs the callback in the main Qt thread.
/// You should use this whenever you need to
/// access the main Qt GUI from a non-GUI thread in
/// a synchronous manner.
///
/// Be careful with this, as it will block the
/// main thread until the callback is finished.
/// This has the risk of freezing the GUI or even
/// potential deadlocks. If the slot function in the
/// receiver tries to send a signal back to the
/// emitting thread using a `BlockingQueuedConnection`,
/// a deadlock can occur.
///
/// This should only be used when you absolutely
/// need to ensure synchronous execution of the
/// callback.
///
/// This is not recommended for most cases.
///
/// [Qt documentation](https://doc.qt.io/qt-6/threads-qobject.html)
///
/// @param self void*
/// @param callback void fn(void*)
void q_threading_sync(void* self, void (*callback)(void*));

/// Unique blocking execution in main thread (thread-safe)
///
/// This runs the callback only if it does not duplicate
/// the signal emission. All of the cautions from `q_threading_sync`
/// apply here as well.
///
/// [Qt documentation](https://doc.qt.io/qt-6/threads-qobject.html)
///
/// @param self void*
/// @param callback void fn(void*)
void q_threading_sync_unique(void* self, void (*callback)(void*));

/// Single-shot blocking execution in main thread (thread-safe)
///
/// This runs the callback only once. All of the cautions from
/// `q_threading_sync` apply here as well.
///
/// [Qt documentation](https://doc.qt.io/qt-6/threads-qobject.html)
///
/// @param self void*
/// @param callback void fn(void*)
void q_threading_sync_once(void* self, void (*callback)(void*));

/// Unique single-shot blocking execution in main thread (thread-safe)
///
/// This runs the callback only once if it does not duplicate
/// the signal emission. All of the cautions from `q_threading_sync`
/// apply here as well.
///
/// [Qt documentation](https://doc.qt.io/qt-6/threads-qobject.html)
///
/// @param self void*
/// @param callback void fn(void*)
void q_threading_sync_unique_once(void* self, void (*callback)(void*));

#ifdef __cplusplus
}
#endif

#endif
