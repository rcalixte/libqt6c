#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBJOBUIDELEGATEFACTORY_H
#define SRC_EXTRAS_KIO_QT6C_LIBJOBUIDELEGATEFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kio-jobuidelegatefactory.html

/// [Qt documentation](https://api.kde.org/kio-jobuidelegatefactory.html#createDelegate)
///
/// @param self KIO__JobUiDelegateFactory*
KJobUiDelegate* k_io__jobuidelegatefactory_create_delegate(void* self);

/// [Qt documentation](https://api.kde.org/kio-jobuidelegatefactory.html#createDelegate)
///
/// @param self KIO__JobUiDelegateFactory*
/// @param flags flag of enum KJobUiDelegate__Flag
/// @param window QWidget*
KJobUiDelegate* k_io__jobuidelegatefactory_create_delegate2(void* self, int32_t flags, void* window);

/// https://api.kde.org/kio.html

/// [Qt documentation](https://api.kde.org/kio.html#createDefaultJobUiDelegate)
///
KJobUiDelegate* k_io_create_default_job_ui_delegate();

/// [Qt documentation](https://api.kde.org/kio.html#createDefaultJobUiDelegate)
///
/// @param param1 flag of enum KJobUiDelegate__Flag
/// @param param2 QWidget*
KJobUiDelegate* k_io_create_default_job_ui_delegate2(int32_t param1, void* param2);

/// [Qt documentation](https://api.kde.org/kio.html#defaultJobUiDelegateFactory)
///
KIO__JobUiDelegateFactory* k_io_default_job_ui_delegate_factory();

/// [Qt documentation](https://api.kde.org/kio.html#setDefaultJobUiDelegateFactory)
///
/// @param param1 KIO__JobUiDelegateFactory*
void k_io_set_default_job_ui_delegate_factory(void* param1);
#endif
