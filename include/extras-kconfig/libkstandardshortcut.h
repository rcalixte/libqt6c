#pragma once
#ifndef SRC_EXTRAS_KCONFIG_QT6C_LIBKSTANDARDSHORTCUT_H
#define SRC_EXTRAS_KCONFIG_QT6C_LIBKSTANDARDSHORTCUT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kstandardshortcut.html

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#shortcut)
///
/// @param param1 enum KStandardShortcut__StandardShortcut
libqt_list /* of QKeySequence* */ k_standardshortcut_shortcut(int32_t param1);

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 enum KStandardShortcut__StandardShortcut
const char* k_standardshortcut_name(int32_t param1);

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#label)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 enum KStandardShortcut__StandardShortcut
const char* k_standardshortcut_label(int32_t param1);

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 enum KStandardShortcut__StandardShortcut
const char* k_standardshortcut_whats_this(int32_t param1);

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#find)
///
/// @param param1 QKeySequence*
///
/// @return enum KStandardShortcut__StandardShortcut
int32_t k_standardshortcut_find(void* param1);

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#findByName)
///
/// @param param1 const char*
///
/// @return enum KStandardShortcut__StandardShortcut
int32_t k_standardshortcut_find_by_name(const char* param1);

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#hardcodedDefaultShortcut)
///
/// @param param1 enum KStandardShortcut__StandardShortcut
libqt_list /* of QKeySequence* */ k_standardshortcut_hardcoded_default_shortcut(int32_t param1);

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#saveShortcut)
///
/// @param param1 enum KStandardShortcut__StandardShortcut
/// @param param2 libqt_list /* of QKeySequence* */
void k_standardshortcut_save_shortcut(int32_t param1, libqt_list param2);

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#category)
///
/// @param param1 enum KStandardShortcut__StandardShortcut
///
/// @return enum KStandardShortcut__Category
int32_t k_standardshortcut_category(int32_t param1);

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#open)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_open();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#openNew)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_open_new();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#close)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_close();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#save)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_save();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#print)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_print();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#quit)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_quit();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#undo)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_undo();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#redo)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_redo();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#cut)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_cut();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#copy)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_copy();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#paste)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_paste();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#pasteSelection)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_paste_selection();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#selectAll)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_select_all();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#deleteWordBack)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_delete_word_back();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#deleteWordForward)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_delete_word_forward();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#find)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_find2();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#findNext)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_find_next();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#findPrev)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_find_prev();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#replace)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_replace();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#zoomIn)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_zoom_in();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#zoomOut)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_zoom_out();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#home)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_home();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#begin)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_begin();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#end)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_end();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#beginningOfLine)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_beginning_of_line();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#endOfLine)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_end_of_line();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#prior)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_prior();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#next)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_next();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#gotoLine)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_goto_line();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#addBookmark)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_add_bookmark();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#tabNext)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_tab_next();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#tabPrev)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_tab_prev();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#fullScreen)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_full_screen();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#help)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_help();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#completion)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_completion();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#prevCompletion)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_prev_completion();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#nextCompletion)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_next_completion();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#substringCompletion)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_substring_completion();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#rotateUp)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_rotate_up();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#rotateDown)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_rotate_down();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#whatsThis)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_whats_this2();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#reload)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_reload();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#up)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_up();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#back)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_back();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#forward)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_forward();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#backwardWord)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_backward_word();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#forwardWord)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_forward_word();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#showMenubar)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_show_menubar();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#deleteFile)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_delete_file();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#renameFile)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_rename_file();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#createFolder)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_create_folder();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#moveToTrash)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_move_to_trash();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#preferences)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_preferences();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#showHideHiddenFiles)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_show_hide_hidden_files();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#openMainMenu)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_open_main_menu();

/// [Qt documentation](https://api.kde.org/kstandardshortcut.html#openContextMenu)
///
libqt_list /* of QKeySequence* */ k_standardshortcut_open_context_menu();

/// https://api.kde.org/kstandardshortcut.html#types

typedef enum {
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_ACCELNONE = 0,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_OPEN = 1,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_NEW = 2,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_CLOSE = 3,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_SAVE = 4,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_PRINT = 5,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_QUIT = 6,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_UNDO = 7,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_REDO = 8,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_CUT = 9,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_COPY = 10,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_PASTE = 11,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_PASTESELECTION = 12,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_SELECTALL = 13,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_DESELECT = 14,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_DELETEWORDBACK = 15,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_DELETEWORDFORWARD = 16,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_FIND = 17,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_FINDNEXT = 18,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_FINDPREV = 19,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_REPLACE = 20,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_HOME = 21,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_BEGIN = 22,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_END = 23,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_PRIOR = 24,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_NEXT = 25,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_UP = 26,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_BACK = 27,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_FORWARD = 28,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_RELOAD = 29,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_BEGINNINGOFLINE = 30,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_ENDOFLINE = 31,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_GOTOLINE = 32,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_BACKWARDWORD = 33,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_FORWARDWORD = 34,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_ADDBOOKMARK = 35,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_ZOOMIN = 36,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_ZOOMOUT = 37,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_FULLSCREEN = 38,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_SHOWMENUBAR = 39,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_TABNEXT = 40,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_TABPREV = 41,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_HELP = 42,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_WHATSTHIS = 43,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_TEXTCOMPLETION = 44,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_PREVCOMPLETION = 45,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_NEXTCOMPLETION = 46,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_SUBSTRINGCOMPLETION = 47,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_ROTATEUP = 48,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_ROTATEDOWN = 49,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_OPENRECENT = 50,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_SAVEAS = 51,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_REVERT = 52,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_PRINTPREVIEW = 53,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_MAIL = 54,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_CLEAR = 55,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_ACTUALSIZE = 56,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_FITTOPAGE = 57,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_FITTOWIDTH = 58,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_FITTOHEIGHT = 59,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_ZOOM = 60,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_GOTO = 61,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_GOTOPAGE = 62,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_DOCUMENTBACK = 63,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_DOCUMENTFORWARD = 64,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_EDITBOOKMARKS = 65,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_SPELLING = 66,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_SHOWTOOLBAR = 67,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_SHOWSTATUSBAR = 68,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_KEYBINDINGS = 69,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_PREFERENCES = 70,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_CONFIGURETOOLBARS = 71,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_CONFIGURENOTIFICATIONS = 72,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_REPORTBUG = 73,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_SWITCHAPPLICATIONLANGUAGE = 74,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_ABOUTAPP = 75,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_ABOUTKDE = 76,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_DELETEFILE = 77,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_RENAMEFILE = 78,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_MOVETOTRASH = 79,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_DONATE = 80,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_SHOWHIDEHIDDENFILES = 81,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_CREATEFOLDER = 82,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_OPENMAINMENU = 83,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_OPENCONTEXTMENU = 84,
    KSTANDARDSHORTCUT_STANDARDSHORTCUT_STANDARDSHORTCUTCOUNT = 85
} KStandardShortcut__StandardShortcut;

typedef enum {
    KSTANDARDSHORTCUT_CATEGORY_INVALIDCATEGORY = -1,
    KSTANDARDSHORTCUT_CATEGORY_FILE = 0,
    KSTANDARDSHORTCUT_CATEGORY_EDIT = 1,
    KSTANDARDSHORTCUT_CATEGORY_NAVIGATION = 2,
    KSTANDARDSHORTCUT_CATEGORY_VIEW = 3,
    KSTANDARDSHORTCUT_CATEGORY_SETTINGS = 4,
    KSTANDARDSHORTCUT_CATEGORY_HELP = 5
} KStandardShortcut__Category;

#endif
