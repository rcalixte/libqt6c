#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBJOBTRACKER_H
#define SRC_EXTRAS_KIO_QT6C_LIBJOBTRACKER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kio.html

/// [Qt documentation](https://api.kde.org/kio.html#getJobTracker)
///
KJobTrackerInterface* k_io_get_job_tracker();

/// [Qt documentation](https://api.kde.org/kio.html#setJobTracker)
///
/// @param param1 KJobTrackerInterface*
void k_io_set_job_tracker(void* param1);
#endif
