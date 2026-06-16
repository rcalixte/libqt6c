#pragma once
#ifndef SRC_EXTRAS_KCONFIGWIDGETS_QT6C_LIBKSTANDARDACTION_H
#define SRC_EXTRAS_KCONFIGWIDGETS_QT6C_LIBKSTANDARDACTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kstandardaction.html)

/// [Upstream resources](https://api.kde.org/kstandardaction.html#create)
///
/// @param id enum KStandardAction__StandardAction
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_create(int32_t id, void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#_k_createInternal)
///
/// @param id enum KStandardAction__StandardAction
/// @param parent QObject*
///
QAction* k_standardaction_k_create_internal(int32_t id, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param id enum KStandardAction__StandardAction
///
const char* k_standardaction_name(int32_t id);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#stdNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** k_standardaction_std_names();

/// [Upstream resources](https://api.kde.org/kstandardaction.html#actionIds)
///
/// @return libqt_list of enum KStandardAction__StandardAction
///
libqt_list k_standardaction_action_ids();

/// [Upstream resources](https://api.kde.org/kstandardaction.html#shortcutForActionId)
///
/// @param id enum KStandardAction__StandardAction
///
/// @return enum KStandardShortcut__StandardShortcut
///
int32_t k_standardaction_shortcut_for_action_id(int32_t id);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#openNew)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_open_new(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#open)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_open(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#openRecent)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
KRecentFilesAction* k_standardaction_open_recent(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#save)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_save(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#saveAs)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_save_as(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#revert)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_revert(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#close)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_close(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#print)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_print(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#printPreview)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_print_preview(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#mail)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_mail(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#quit)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_quit(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#undo)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_undo(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#redo)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_redo(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#cut)
///
/// @param parent QObject*
///
QAction* k_standardaction_cut(void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#copy)
///
/// @param parent QObject*
///
QAction* k_standardaction_copy(void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#paste)
///
/// @param parent QObject*
///
QAction* k_standardaction_paste(void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#clear)
///
/// @param parent QObject*
///
QAction* k_standardaction_clear(void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#selectAll)
///
/// @param parent QObject*
///
QAction* k_standardaction_select_all(void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#cut)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_cut2(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#copy)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_copy2(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#paste)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_paste2(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#clear)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_clear2(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#selectAll)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_select_all2(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#deselect)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_deselect(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#find)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_find(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#findNext)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_find_next(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#findPrev)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_find_prev(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#replace)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_replace(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#actualSize)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_actual_size(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#fitToPage)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_fit_to_page(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#fitToWidth)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_fit_to_width(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#fitToHeight)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_fit_to_height(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#zoomIn)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_zoom_in(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#zoomOut)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_zoom_out(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#zoom)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_zoom(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#redisplay)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_redisplay(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#up)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_up(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#back)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_back(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#forward)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_forward(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#home)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_home(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#prior)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_prior(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#next)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_next(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#goTo)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_go_to(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#gotoPage)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_goto_page(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#gotoLine)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_goto_line(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#firstPage)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_first_page(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#lastPage)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_last_page(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#documentBack)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_document_back(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#documentForward)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_document_forward(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#addBookmark)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_add_bookmark(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#editBookmarks)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_edit_bookmarks(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#spelling)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_spelling(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#showMenubar)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
KToggleAction* k_standardaction_show_menubar(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#showStatusbar)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
KToggleAction* k_standardaction_show_statusbar(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#fullScreen)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param window QWidget*
/// @param parent QObject*
///
KToggleFullScreenAction* k_standardaction_full_screen(void* recvr, const char* slot, void* window, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#keyBindings)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_key_bindings(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#preferences)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_preferences(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#configureToolbars)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_configure_toolbars(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#configureNotifications)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_configure_notifications(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#switchApplicationLanguage)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_switch_application_language(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#helpContents)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_help_contents(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#whatsThis)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_whats_this(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#reportBug)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_report_bug(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#aboutApp)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_about_app(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#aboutKDE)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_about_k_d_e(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#deleteFile)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_delete_file(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#renameFile)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_rename_file(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#moveToTrash)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_move_to_trash(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#donate)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
QAction* k_standardaction_donate(void* recvr, const char* slot, void* parent);

/// [Upstream resources](https://api.kde.org/kstandardaction.html#hamburgerMenu)
///
/// @param recvr QObject*
/// @param slot const char*
/// @param parent QObject*
///
KHamburgerMenu* k_standardaction_hamburger_menu(void* recvr, const char* slot, void* parent);

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
