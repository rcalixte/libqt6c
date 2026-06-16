#include "../extras-kwidgetsaddons/libkactionmenu.hpp"
#include "../extras-kcolorscheme/libkcolorschememanager.hpp"
#include "../libqobject.hpp"
#include "libkcolorschememenu.hpp"
#include "libkcolorschememenu.h"

KActionMenu* k_colorschememenu_create_menu(void* manager, void* parent) {
    return KColorSchemeMenu_CreateMenu((KColorSchemeManager*)manager, (QObject*)parent);
}
