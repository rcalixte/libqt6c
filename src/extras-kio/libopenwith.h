#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBOPENWITH_H
#define SRC_EXTRAS_KIO_QT6C_LIBOPENWITH_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kio-openwith.html)

/// k_io__openwith_new constructs a new KIO::OpenWith object.
///
/// @param other KIO__OpenWith*
///
KIO__OpenWith* k_io__openwith_new(void* other);

/// [Upstream resources](https://api.kde.org/kio-openwith.html)

/// k_io__openwith_new2 constructs a new KIO::OpenWith object and invalidates the source KIO::OpenWith object.
///
/// @param other KIO__OpenWith*
///
KIO__OpenWith* k_io__openwith_new2(void* other);

/// k_io__openwith_copy_assign shallow copies `other` into `self`.
///
/// @param self KIO__OpenWith*
/// @param other KIO__OpenWith*
///
void k_io__openwith_copy_assign(void* self, void* other);

/// k_io__openwith_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self KIO__OpenWith*
/// @param other KIO__OpenWith*
///
void k_io__openwith_move_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// @param self KIO__OpenWith*
///
void k_io__openwith_delete(void* self);

/// [Upstream resources](https://api.kde.org/kio-openwith-acceptresult.html)

/// k_io__openwith__acceptresult_new constructs a new KIO::OpenWith::AcceptResult object.
///
/// @param param1 KIO__OpenWith__AcceptResult*
///
KIO__OpenWith__AcceptResult* k_io__openwith__acceptresult_new(void* param1);

/// [Upstream resources](https://api.kde.org/kio-openwith-acceptresult.html#accept-var)
///
/// @param self KIO__OpenWith__AcceptResult*
///
bool k_io__openwith__acceptresult_accept(void* self);

/// [Upstream resources](https://api.kde.org/kio-openwith-acceptresult.html#accept-var)
///
/// @param self KIO__OpenWith__AcceptResult*
/// @param accept bool
///
void k_io__openwith__acceptresult_set_accept(void* self, bool accept);

/// [Upstream resources](https://api.kde.org/kio-openwith-acceptresult.html#error-var)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIO__OpenWith__AcceptResult*
///
const char* k_io__openwith__acceptresult_error(void* self);

/// [Upstream resources](https://api.kde.org/kio-openwith-acceptresult.html#error-var)
///
/// @param self KIO__OpenWith__AcceptResult*
/// @param error const char*
///
void k_io__openwith__acceptresult_set_error(void* self, const char* error);

/// [Upstream resources](https://api.kde.org/kio-openwith-acceptresult.html#rebuildSycoca-var)
///
/// @param self KIO__OpenWith__AcceptResult*
///
bool k_io__openwith__acceptresult_rebuild_sycoca(void* self);

/// [Upstream resources](https://api.kde.org/kio-openwith-acceptresult.html#rebuildSycoca-var)
///
/// @param self KIO__OpenWith__AcceptResult*
/// @param rebuildSycoca bool
///
void k_io__openwith__acceptresult_set_rebuild_sycoca(void* self, bool rebuildSycoca);

/// [Upstream resources](https://api.kde.org/kio-openwith-acceptresult.html#operator-eq)
///
/// @param self KIO__OpenWith__AcceptResult*
/// @param param1 KIO__OpenWith__AcceptResult*
///
void k_io__openwith__acceptresult_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self KIO__OpenWith__AcceptResult*
///
void k_io__openwith__acceptresult_delete(void* self);

#endif
