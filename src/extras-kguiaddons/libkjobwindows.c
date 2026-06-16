#include "../libqobject.hpp"
#include "../libqwindow.hpp"
#include "libkjobwindows.hpp"
#include "libkjobwindows.h"

void k_jobwindows_set_window(void* job, void* window) {
    KJobWindows_SetWindow((QObject*)job, (QWindow*)window);
}

QWindow* k_jobwindows_window(void* job) {
    return KJobWindows_Window((QObject*)job);
}
