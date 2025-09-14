#include "../extras-kcoreaddons/libkjobtrackerinterface.hpp"
#include "libjobtracker.hpp"
#include "libjobtracker.h"

KJobTrackerInterface* k_io_get_job_tracker() {
    return KIO_GetJobTracker();
}

void k_io_set_job_tracker(void* param1) {
    KIO_SetJobTracker((KJobTrackerInterface*)param1);
}
