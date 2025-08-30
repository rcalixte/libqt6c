#include "../libqaction.hpp"
#include "../libqobject.hpp"
#include "libkstylemanager.hpp"
#include "libkstylemanager.h"

void k_stylemanager_init_style() {
    KStyleManager_InitStyle();
}

QAction* k_stylemanager_create_configure_action(void* param1) {
    return KStyleManager_CreateConfigureAction((QObject*)param1);
}
