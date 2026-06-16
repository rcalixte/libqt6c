#include "../libqaction.hpp"
#include "../libqobject.hpp"
#include "libkstylemanager.hpp"
#include "libkstylemanager.h"

void k_stylemanager_init_style() {
    KStyleManager_InitStyle();
}

QAction* k_stylemanager_create_configure_action(void* parent) {
    return KStyleManager_CreateConfigureAction((QObject*)parent);
}
