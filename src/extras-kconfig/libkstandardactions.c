#include "libkstandardactions_p.hpp"
#include "../libqaction.hpp"
#include "../libqobject.hpp"
#include "libkstandardactions.hpp"
#include "libkstandardactions.h"

QAction* k_standardactions_kgui_create_internal(int32_t param1, void* param2) {
    return KStandardActions_KguiCreateInternal(param1, (QObject*)param2);
}

const char* k_standardactions_name(int32_t param1) {
    libqt_string _str = KStandardActions_Name(param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of int32_t */ k_standardactions_action_ids() {
    libqt_list _arr = KStandardActions_ActionIds();
    return _arr;
}

int32_t k_standardactions_shortcut_for_action_id(int32_t param1) {
    return KStandardActions_ShortcutForActionId(param1);
}
