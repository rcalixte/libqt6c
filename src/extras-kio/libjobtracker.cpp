#include <KJobTrackerInterface>
#include <jobtracker.h>
#include "libjobtracker.hpp"
#include "libjobtracker.hxx"

KJobTrackerInterface* KIO_GetJobTracker() {
    return KIO::getJobTracker();
}

void KIO_SetJobTracker(KJobTrackerInterface* param1) {
    KIO::setJobTracker(param1);
}
