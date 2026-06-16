#include "libkstandardactions_p.hpp"
#include "../libqaction.hpp"
#include "../libqobject.hpp"
#include "libkstandardactions.hpp"
#include "libkstandardactions.h"

QAction* k_standardactions_kgui_create_internal(int32_t id, void* parent) {
    return KStandardActions_KguiCreateInternal(id, (QObject*)parent);
}

const char* k_standardactions_name(int32_t id) {
    libqt_string _str = KStandardActions_Name(id);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of enum KStandardActions__StandardAction */ k_standardactions_action_ids() {
    libqt_list _arr = KStandardActions_ActionIds();
    return _arr;
}

int32_t k_standardactions_shortcut_for_action_id(int32_t id) {
    return KStandardActions_ShortcutForActionId(id);
}
