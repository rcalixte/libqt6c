#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "../libqwindow.hpp"
#include "libkjobwidgets.hpp"
#include "libkjobwidgets.h"

void k_jobwidgets_set_window(void* param1, void* param2) {
    KJobWidgets_SetWindow((QObject*)param1, (QWidget*)param2);
}

void k_jobwidgets_set_window_handle(void* param1, void* param2) {
    KJobWidgets_SetWindowHandle((QObject*)param1, (QWindow*)param2);
}

QWidget* k_jobwidgets_window(void* param1) {
    return KJobWidgets_Window((QObject*)param1);
}

QWindow* k_jobwidgets_window_handle(void* param1) {
    return KJobWidgets_WindowHandle((QObject*)param1);
}

void k_jobwidgets_update_user_timestamp(void* param1, uint64_t param2) {
    KJobWidgets_UpdateUserTimestamp((QObject*)param1, param2);
}

uint64_t k_jobwidgets_user_timestamp(void* param1) {
    return KJobWidgets_UserTimestamp((QObject*)param1);
}
