#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKSTANDARDGUIITEM_H
#define SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKSTANDARDGUIITEM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kstandardguiitem.html

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#guiItem)
///
/// @param param1 enum KStandardGuiItem__StandardItem
KGuiItem* k_standardguiitem_gui_item(int32_t param1);

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#standardItem)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 enum KStandardGuiItem__StandardItem
const char* k_standardguiitem_standard_item(int32_t param1);

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#ok)
///
KGuiItem* k_standardguiitem_ok();

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#cancel)
///
KGuiItem* k_standardguiitem_cancel();

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#insert)
///
KGuiItem* k_standardguiitem_insert();

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#discard)
///
KGuiItem* k_standardguiitem_discard();

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#save)
///
KGuiItem* k_standardguiitem_save();

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#help)
///
KGuiItem* k_standardguiitem_help();

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#dontSave)
///
KGuiItem* k_standardguiitem_dont_save();

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#saveAs)
///
KGuiItem* k_standardguiitem_save_as();

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#apply)
///
KGuiItem* k_standardguiitem_apply();

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#clear)
///
KGuiItem* k_standardguiitem_clear();

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#defaults)
///
KGuiItem* k_standardguiitem_defaults();

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#close)
///
KGuiItem* k_standardguiitem_close();

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#closeWindow)
///
KGuiItem* k_standardguiitem_close_window();

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#closeDocument)
///
KGuiItem* k_standardguiitem_close_document();

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#print)
///
KGuiItem* k_standardguiitem_print();

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#properties)
///
KGuiItem* k_standardguiitem_properties();

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#reset)
///
KGuiItem* k_standardguiitem_reset();

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#overwrite)
///
KGuiItem* k_standardguiitem_overwrite();

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#adminMode)
///
KGuiItem* k_standardguiitem_admin_mode();

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#cont)
///
KGuiItem* k_standardguiitem_cont();

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#del)
///
KGuiItem* k_standardguiitem_del();

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#open)
///
KGuiItem* k_standardguiitem_open();

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#back)
///
/// @param param1 enum KStandardGuiItem__BidiMode
KGuiItem* k_standardguiitem_back(int32_t param1);

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#forward)
///
/// @param param1 enum KStandardGuiItem__BidiMode
KGuiItem* k_standardguiitem_forward(int32_t param1);

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#configure)
///
KGuiItem* k_standardguiitem_configure();

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#backAndForward)
///
libqt_pair /* tuple of KGuiItem* and KGuiItem* */ k_standardguiitem_back_and_forward();

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#quit)
///
KGuiItem* k_standardguiitem_quit();

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#find)
///
KGuiItem* k_standardguiitem_find();

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#stop)
///
KGuiItem* k_standardguiitem_stop();

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#add)
///
KGuiItem* k_standardguiitem_add();

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#remove)
///
KGuiItem* k_standardguiitem_remove();

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#test)
///
KGuiItem* k_standardguiitem_test();

/// [Qt documentation](https://api-staging.kde.org/kstandardguiitem.html#assign)
///
/// @param param1 QPushButton*
/// @param param2 enum KStandardGuiItem__StandardItem
void k_standardguiitem_assign(void* param1, int32_t param2);

/// https://api-staging.kde.org/kstandardguiitem.html#types

typedef enum {
    KSTANDARDGUIITEM_BIDIMODE_USERTL = 0,
    KSTANDARDGUIITEM_BIDIMODE_IGNORERTL = 1
} KStandardGuiItem__BidiMode;

typedef enum {
    KSTANDARDGUIITEM_STANDARDITEM_OK = 1,
    KSTANDARDGUIITEM_STANDARDITEM_CANCEL = 2,
    KSTANDARDGUIITEM_STANDARDITEM_DISCARD = 3,
    KSTANDARDGUIITEM_STANDARDITEM_SAVE = 4,
    KSTANDARDGUIITEM_STANDARDITEM_DONTSAVE = 5,
    KSTANDARDGUIITEM_STANDARDITEM_SAVEAS = 6,
    KSTANDARDGUIITEM_STANDARDITEM_APPLY = 7,
    KSTANDARDGUIITEM_STANDARDITEM_CLEAR = 8,
    KSTANDARDGUIITEM_STANDARDITEM_HELP = 9,
    KSTANDARDGUIITEM_STANDARDITEM_DEFAULTS = 10,
    KSTANDARDGUIITEM_STANDARDITEM_CLOSE = 11,
    KSTANDARDGUIITEM_STANDARDITEM_BACK = 12,
    KSTANDARDGUIITEM_STANDARDITEM_FORWARD = 13,
    KSTANDARDGUIITEM_STANDARDITEM_PRINT = 14,
    KSTANDARDGUIITEM_STANDARDITEM_CONTINUE = 15,
    KSTANDARDGUIITEM_STANDARDITEM_OPEN = 16,
    KSTANDARDGUIITEM_STANDARDITEM_QUIT = 17,
    KSTANDARDGUIITEM_STANDARDITEM_ADMINMODE = 18,
    KSTANDARDGUIITEM_STANDARDITEM_RESET = 19,
    KSTANDARDGUIITEM_STANDARDITEM_DELETE = 20,
    KSTANDARDGUIITEM_STANDARDITEM_INSERT = 21,
    KSTANDARDGUIITEM_STANDARDITEM_CONFIGURE = 22,
    KSTANDARDGUIITEM_STANDARDITEM_FIND = 23,
    KSTANDARDGUIITEM_STANDARDITEM_STOP = 24,
    KSTANDARDGUIITEM_STANDARDITEM_ADD = 25,
    KSTANDARDGUIITEM_STANDARDITEM_REMOVE = 26,
    KSTANDARDGUIITEM_STANDARDITEM_TEST = 27,
    KSTANDARDGUIITEM_STANDARDITEM_PROPERTIES = 28,
    KSTANDARDGUIITEM_STANDARDITEM_OVERWRITE = 29,
    KSTANDARDGUIITEM_STANDARDITEM_CLOSEWINDOW = 30,
    KSTANDARDGUIITEM_STANDARDITEM_CLOSEDOCUMENT = 31
} KStandardGuiItem__StandardItem;

#endif
