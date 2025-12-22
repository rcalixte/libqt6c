#pragma once
#ifndef SRC_EXTRAS_KCONFIGWIDGETS_QT6C_LIBKSTANDARDACTION_H
#define SRC_EXTRAS_KCONFIGWIDGETS_QT6C_LIBKSTANDARDACTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kstandardaction.html)

/// [Upstream resources](https://api.kde.org/kstandardaction.html#create)
///
/// @param param1 enum KStandardAction__StandardAction
/// @param param2 QObject*
/// @param param3 const char*
/// @param param4 QObject*
///
QAction* k_standardaction_create(int32_t param1, void* param2, const char* param3, void* param4);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#_k_createInternal)
///
/// @param param1 enum KStandardAction__StandardAction
/// @param param2 QObject*
///
QAction* k_standardaction_k_create_internal(int32_t param1, void* param2);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 enum KStandardAction__StandardAction
///
const char* k_standardaction_name(int32_t param1);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#stdNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** k_standardaction_std_names();

/// [Upstream resources](https://api.kde.org/kstandardaction.html#actionIds)
///
/// @return libqt_list of enum KStandardAction__StandardAction
///
libqt_list /* of int32_t */ k_standardaction_action_ids();

/// [Upstream resources](https://api.kde.org/kstandardaction.html#shortcutForActionId)
///
/// @param param1 enum KStandardAction__StandardAction
///
/// @return enum KStandardShortcut__StandardShortcut
///
int32_t k_standardaction_shortcut_for_action_id(int32_t param1);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#openNew)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_open_new(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#open)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_open(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#openRecent)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
KRecentFilesAction* k_standardaction_open_recent(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#save)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_save(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#saveAs)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_save_as(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#revert)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_revert(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#close)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_close(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#print)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_print(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#printPreview)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_print_preview(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#mail)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_mail(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#quit)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_quit(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#undo)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_undo(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#redo)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_redo(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#cut)
///
/// @param param1 QObject*
///
QAction* k_standardaction_cut(void* param1);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#copy)
///
/// @param param1 QObject*
///
QAction* k_standardaction_copy(void* param1);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#paste)
///
/// @param param1 QObject*
///
QAction* k_standardaction_paste(void* param1);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#clear)
///
/// @param param1 QObject*
///
QAction* k_standardaction_clear(void* param1);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#selectAll)
///
/// @param param1 QObject*
///
QAction* k_standardaction_select_all(void* param1);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#cut)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_cut2(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#copy)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_copy2(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#paste)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_paste2(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#clear)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_clear2(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#selectAll)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_select_all2(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#deselect)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_deselect(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#find)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_find(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#findNext)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_find_next(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#findPrev)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_find_prev(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#replace)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_replace(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#actualSize)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_actual_size(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#fitToPage)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_fit_to_page(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#fitToWidth)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_fit_to_width(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#fitToHeight)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_fit_to_height(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#zoomIn)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_zoom_in(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#zoomOut)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_zoom_out(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#zoom)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_zoom(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#redisplay)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_redisplay(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#up)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_up(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#back)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_back(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#forward)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_forward(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#home)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_home(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#prior)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_prior(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#next)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_next(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#goTo)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_go_to(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#gotoPage)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_goto_page(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#gotoLine)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_goto_line(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#firstPage)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_first_page(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#lastPage)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_last_page(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#documentBack)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_document_back(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#documentForward)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_document_forward(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#addBookmark)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_add_bookmark(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#editBookmarks)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_edit_bookmarks(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#spelling)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_spelling(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#showMenubar)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
KToggleAction* k_standardaction_show_menubar(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#showStatusbar)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
KToggleAction* k_standardaction_show_statusbar(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#fullScreen)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QWidget*
/// @param param4 QObject*
///
KToggleFullScreenAction* k_standardaction_full_screen(void* param1, const char* param2, void* param3, void* param4);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#keyBindings)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_key_bindings(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#preferences)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_preferences(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#configureToolbars)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_configure_toolbars(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#configureNotifications)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_configure_notifications(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#switchApplicationLanguage)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_switch_application_language(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#helpContents)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_help_contents(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#whatsThis)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_whats_this(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#reportBug)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_report_bug(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#aboutApp)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_about_app(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#aboutKDE)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_about_k_d_e(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#deleteFile)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_delete_file(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#renameFile)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_rename_file(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#moveToTrash)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_move_to_trash(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#donate)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
QAction* k_standardaction_donate(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#hamburgerMenu)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QObject*
///
KHamburgerMenu* k_standardaction_hamburger_menu(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#public-types)

typedef enum {
    KSTANDARDACTION_STANDARDACTION_ACTIONNONE = 0,
    KSTANDARDACTION_STANDARDACTION_NEW = 1,
    KSTANDARDACTION_STANDARDACTION_OPEN = 2,
    KSTANDARDACTION_STANDARDACTION_OPENRECENT = 3,
    KSTANDARDACTION_STANDARDACTION_SAVE = 4,
    KSTANDARDACTION_STANDARDACTION_SAVEAS = 5,
    KSTANDARDACTION_STANDARDACTION_REVERT = 6,
    KSTANDARDACTION_STANDARDACTION_CLOSE = 7,
    KSTANDARDACTION_STANDARDACTION_PRINT = 8,
    KSTANDARDACTION_STANDARDACTION_PRINTPREVIEW = 9,
    KSTANDARDACTION_STANDARDACTION_MAIL = 10,
    KSTANDARDACTION_STANDARDACTION_QUIT = 11,
    KSTANDARDACTION_STANDARDACTION_UNDO = 12,
    KSTANDARDACTION_STANDARDACTION_REDO = 13,
    KSTANDARDACTION_STANDARDACTION_CUT = 14,
    KSTANDARDACTION_STANDARDACTION_COPY = 15,
    KSTANDARDACTION_STANDARDACTION_PASTE = 16,
    KSTANDARDACTION_STANDARDACTION_SELECTALL = 17,
    KSTANDARDACTION_STANDARDACTION_DESELECT = 18,
    KSTANDARDACTION_STANDARDACTION_FIND = 19,
    KSTANDARDACTION_STANDARDACTION_FINDNEXT = 20,
    KSTANDARDACTION_STANDARDACTION_FINDPREV = 21,
    KSTANDARDACTION_STANDARDACTION_REPLACE = 22,
    KSTANDARDACTION_STANDARDACTION_ACTUALSIZE = 23,
    KSTANDARDACTION_STANDARDACTION_FITTOPAGE = 24,
    KSTANDARDACTION_STANDARDACTION_FITTOWIDTH = 25,
    KSTANDARDACTION_STANDARDACTION_FITTOHEIGHT = 26,
    KSTANDARDACTION_STANDARDACTION_ZOOMIN = 27,
    KSTANDARDACTION_STANDARDACTION_ZOOMOUT = 28,
    KSTANDARDACTION_STANDARDACTION_ZOOM = 29,
    KSTANDARDACTION_STANDARDACTION_REDISPLAY = 30,
    KSTANDARDACTION_STANDARDACTION_UP = 31,
    KSTANDARDACTION_STANDARDACTION_BACK = 32,
    KSTANDARDACTION_STANDARDACTION_FORWARD = 33,
    KSTANDARDACTION_STANDARDACTION_HOME = 34,
    KSTANDARDACTION_STANDARDACTION_PRIOR = 35,
    KSTANDARDACTION_STANDARDACTION_NEXT = 36,
    KSTANDARDACTION_STANDARDACTION_GOTO = 37,
    KSTANDARDACTION_STANDARDACTION_GOTOPAGE = 38,
    KSTANDARDACTION_STANDARDACTION_GOTOLINE = 39,
    KSTANDARDACTION_STANDARDACTION_FIRSTPAGE = 40,
    KSTANDARDACTION_STANDARDACTION_LASTPAGE = 41,
    KSTANDARDACTION_STANDARDACTION_DOCUMENTBACK = 42,
    KSTANDARDACTION_STANDARDACTION_DOCUMENTFORWARD = 43,
    KSTANDARDACTION_STANDARDACTION_ADDBOOKMARK = 44,
    KSTANDARDACTION_STANDARDACTION_EDITBOOKMARKS = 45,
    KSTANDARDACTION_STANDARDACTION_SPELLING = 46,
    KSTANDARDACTION_STANDARDACTION_SHOWMENUBAR = 47,
    KSTANDARDACTION_STANDARDACTION_SHOWTOOLBAR = 48,
    KSTANDARDACTION_STANDARDACTION_SHOWSTATUSBAR = 49,
    KSTANDARDACTION_STANDARDACTION_KEYBINDINGS = 50,
    KSTANDARDACTION_STANDARDACTION_PREFERENCES = 51,
    KSTANDARDACTION_STANDARDACTION_CONFIGURETOOLBARS = 52,
    KSTANDARDACTION_STANDARDACTION_HELPCONTENTS = 53,
    KSTANDARDACTION_STANDARDACTION_WHATSTHIS = 54,
    KSTANDARDACTION_STANDARDACTION_REPORTBUG = 55,
    KSTANDARDACTION_STANDARDACTION_ABOUTAPP = 56,
    KSTANDARDACTION_STANDARDACTION_ABOUTKDE = 57,
    KSTANDARDACTION_STANDARDACTION_CONFIGURENOTIFICATIONS = 58,
    KSTANDARDACTION_STANDARDACTION_FULLSCREEN = 59,
    KSTANDARDACTION_STANDARDACTION_CLEAR = 60,
    KSTANDARDACTION_STANDARDACTION_SWITCHAPPLICATIONLANGUAGE = 61,
    KSTANDARDACTION_STANDARDACTION_DELETEFILE = 62,
    KSTANDARDACTION_STANDARDACTION_RENAMEFILE = 63,
    KSTANDARDACTION_STANDARDACTION_MOVETOTRASH = 64,
    KSTANDARDACTION_STANDARDACTION_DONATE = 65,
    KSTANDARDACTION_STANDARDACTION_HAMBURGERMENU = 66
} KStandardAction__StandardAction;

#endif
