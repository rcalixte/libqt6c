#include "../extras-kwidgetsaddons/libkactionmenu.hpp"
#include "../extras-kcolorscheme/libkcolorschememanager.hpp"
#include "../libqobject.hpp"
#include "libkcolorschememenu.hpp"
#include "libkcolorschememenu.h"

KActionMenu* k_colorschememenu_create_menu(void* param1, void* param2) {
    return KColorSchemeMenu_CreateMenu((KColorSchemeManager*)param1, (QObject*)param2);
}
