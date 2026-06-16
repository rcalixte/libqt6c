#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "../libqwindow.hpp"
#include "libkjobwidgets.hpp"
#include "libkjobwidgets.h"

void k_jobwidgets_set_window(void* job, void* widget) {
    KJobWidgets_SetWindow((QObject*)job, (QWidget*)widget);
}

void k_jobwidgets_set_window_handle(void* job, void* window) {
    KJobWidgets_SetWindowHandle((QObject*)job, (QWindow*)window);
}

QWidget* k_jobwidgets_window(void* job) {
    return KJobWidgets_Window((QObject*)job);
}

QWindow* k_jobwidgets_window_handle(void* job) {
    return KJobWidgets_WindowHandle((QObject*)job);
}

void k_jobwidgets_update_user_timestamp(void* job, uintptr_t time) {
    KJobWidgets_UpdateUserTimestamp((QObject*)job, time);
}

uintptr_t k_jobwidgets_user_timestamp(void* job) {
    return KJobWidgets_UserTimestamp((QObject*)job);
}
