#include "../libqobject.hpp"
#include "../libqwindow.hpp"
#include "libkjobwindows.hpp"
#include "libkjobwindows.h"

void k_jobwindows_set_window(void* param1, void* param2) {
    KJobWindows_SetWindow((QObject*)param1, (QWindow*)param2);
}

QWindow* k_jobwindows_window(void* param1) {
    return KJobWindows_Window((QObject*)param1);
}
