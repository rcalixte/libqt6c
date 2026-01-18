#include "libkhamburgermenu.hpp"
#include "libkrecentfilesaction.hpp"
#include "../extras-kwidgetsaddons/libktoggleaction.hpp"
#include "../extras-kwidgetsaddons/libktogglefullscreenaction.hpp"
#include "../libqaction.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "libkstandardaction.hpp"
#include "libkstandardaction.h"

QAction* k_standardaction_create(int32_t param1, void* param2, const char* param3, void* param4) {
    return KStandardAction_Create(param1, (QObject*)param2, param3, (QObject*)param4);
}

QAction* k_standardaction_k_create_internal(int32_t param1, void* param2) {
    return KStandardAction_KCreateInternal(param1, (QObject*)param2);
}

const char* k_standardaction_name(int32_t param1) {
    libqt_string _str = KStandardAction_Name(param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_standardaction_std_names() {
    libqt_list _arr = KStandardAction_StdNames();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_standardaction_std_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

libqt_list /* of enum KStandardAction__StandardAction */ k_standardaction_action_ids() {
    libqt_list _arr = KStandardAction_ActionIds();
    return _arr;
}

int32_t k_standardaction_shortcut_for_action_id(int32_t param1) {
    return KStandardAction_ShortcutForActionId(param1);
}

QAction* k_standardaction_open_new(void* param1, const char* param2, void* param3) {
    return KStandardAction_OpenNew((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_open(void* param1, const char* param2, void* param3) {
    return KStandardAction_Open((QObject*)param1, param2, (QObject*)param3);
}

KRecentFilesAction* k_standardaction_open_recent(void* param1, const char* param2, void* param3) {
    return KStandardAction_OpenRecent((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_save(void* param1, const char* param2, void* param3) {
    return KStandardAction_Save((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_save_as(void* param1, const char* param2, void* param3) {
    return KStandardAction_SaveAs((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_revert(void* param1, const char* param2, void* param3) {
    return KStandardAction_Revert((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_close(void* param1, const char* param2, void* param3) {
    return KStandardAction_Close((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_print(void* param1, const char* param2, void* param3) {
    return KStandardAction_Print((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_print_preview(void* param1, const char* param2, void* param3) {
    return KStandardAction_PrintPreview((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_mail(void* param1, const char* param2, void* param3) {
    return KStandardAction_Mail((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_quit(void* param1, const char* param2, void* param3) {
    return KStandardAction_Quit((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_undo(void* param1, const char* param2, void* param3) {
    return KStandardAction_Undo((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_redo(void* param1, const char* param2, void* param3) {
    return KStandardAction_Redo((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_cut(void* param1) {
    return KStandardAction_Cut((QObject*)param1);
}

QAction* k_standardaction_copy(void* param1) {
    return KStandardAction_Copy((QObject*)param1);
}

QAction* k_standardaction_paste(void* param1) {
    return KStandardAction_Paste((QObject*)param1);
}

QAction* k_standardaction_clear(void* param1) {
    return KStandardAction_Clear((QObject*)param1);
}

QAction* k_standardaction_select_all(void* param1) {
    return KStandardAction_SelectAll((QObject*)param1);
}

QAction* k_standardaction_cut2(void* param1, const char* param2, void* param3) {
    return KStandardAction_Cut2((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_copy2(void* param1, const char* param2, void* param3) {
    return KStandardAction_Copy2((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_paste2(void* param1, const char* param2, void* param3) {
    return KStandardAction_Paste2((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_clear2(void* param1, const char* param2, void* param3) {
    return KStandardAction_Clear2((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_select_all2(void* param1, const char* param2, void* param3) {
    return KStandardAction_SelectAll2((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_deselect(void* param1, const char* param2, void* param3) {
    return KStandardAction_Deselect((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_find(void* param1, const char* param2, void* param3) {
    return KStandardAction_Find((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_find_next(void* param1, const char* param2, void* param3) {
    return KStandardAction_FindNext((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_find_prev(void* param1, const char* param2, void* param3) {
    return KStandardAction_FindPrev((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_replace(void* param1, const char* param2, void* param3) {
    return KStandardAction_Replace((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_actual_size(void* param1, const char* param2, void* param3) {
    return KStandardAction_ActualSize((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_fit_to_page(void* param1, const char* param2, void* param3) {
    return KStandardAction_FitToPage((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_fit_to_width(void* param1, const char* param2, void* param3) {
    return KStandardAction_FitToWidth((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_fit_to_height(void* param1, const char* param2, void* param3) {
    return KStandardAction_FitToHeight((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_zoom_in(void* param1, const char* param2, void* param3) {
    return KStandardAction_ZoomIn((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_zoom_out(void* param1, const char* param2, void* param3) {
    return KStandardAction_ZoomOut((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_zoom(void* param1, const char* param2, void* param3) {
    return KStandardAction_Zoom((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_redisplay(void* param1, const char* param2, void* param3) {
    return KStandardAction_Redisplay((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_up(void* param1, const char* param2, void* param3) {
    return KStandardAction_Up((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_back(void* param1, const char* param2, void* param3) {
    return KStandardAction_Back((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_forward(void* param1, const char* param2, void* param3) {
    return KStandardAction_Forward((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_home(void* param1, const char* param2, void* param3) {
    return KStandardAction_Home((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_prior(void* param1, const char* param2, void* param3) {
    return KStandardAction_Prior((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_next(void* param1, const char* param2, void* param3) {
    return KStandardAction_Next((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_go_to(void* param1, const char* param2, void* param3) {
    return KStandardAction_GoTo((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_goto_page(void* param1, const char* param2, void* param3) {
    return KStandardAction_GotoPage((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_goto_line(void* param1, const char* param2, void* param3) {
    return KStandardAction_GotoLine((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_first_page(void* param1, const char* param2, void* param3) {
    return KStandardAction_FirstPage((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_last_page(void* param1, const char* param2, void* param3) {
    return KStandardAction_LastPage((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_document_back(void* param1, const char* param2, void* param3) {
    return KStandardAction_DocumentBack((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_document_forward(void* param1, const char* param2, void* param3) {
    return KStandardAction_DocumentForward((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_add_bookmark(void* param1, const char* param2, void* param3) {
    return KStandardAction_AddBookmark((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_edit_bookmarks(void* param1, const char* param2, void* param3) {
    return KStandardAction_EditBookmarks((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_spelling(void* param1, const char* param2, void* param3) {
    return KStandardAction_Spelling((QObject*)param1, param2, (QObject*)param3);
}

KToggleAction* k_standardaction_show_menubar(void* param1, const char* param2, void* param3) {
    return KStandardAction_ShowMenubar((QObject*)param1, param2, (QObject*)param3);
}

KToggleAction* k_standardaction_show_statusbar(void* param1, const char* param2, void* param3) {
    return KStandardAction_ShowStatusbar((QObject*)param1, param2, (QObject*)param3);
}

KToggleFullScreenAction* k_standardaction_full_screen(void* param1, const char* param2, void* param3, void* param4) {
    return KStandardAction_FullScreen((QObject*)param1, param2, (QWidget*)param3, (QObject*)param4);
}

QAction* k_standardaction_key_bindings(void* param1, const char* param2, void* param3) {
    return KStandardAction_KeyBindings((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_preferences(void* param1, const char* param2, void* param3) {
    return KStandardAction_Preferences((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_configure_toolbars(void* param1, const char* param2, void* param3) {
    return KStandardAction_ConfigureToolbars((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_configure_notifications(void* param1, const char* param2, void* param3) {
    return KStandardAction_ConfigureNotifications((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_switch_application_language(void* param1, const char* param2, void* param3) {
    return KStandardAction_SwitchApplicationLanguage((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_help_contents(void* param1, const char* param2, void* param3) {
    return KStandardAction_HelpContents((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_whats_this(void* param1, const char* param2, void* param3) {
    return KStandardAction_WhatsThis((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_report_bug(void* param1, const char* param2, void* param3) {
    return KStandardAction_ReportBug((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_about_app(void* param1, const char* param2, void* param3) {
    return KStandardAction_AboutApp((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_about_k_d_e(void* param1, const char* param2, void* param3) {
    return KStandardAction_AboutKDE((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_delete_file(void* param1, const char* param2, void* param3) {
    return KStandardAction_DeleteFile((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_rename_file(void* param1, const char* param2, void* param3) {
    return KStandardAction_RenameFile((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_move_to_trash(void* param1, const char* param2, void* param3) {
    return KStandardAction_MoveToTrash((QObject*)param1, param2, (QObject*)param3);
}

QAction* k_standardaction_donate(void* param1, const char* param2, void* param3) {
    return KStandardAction_Donate((QObject*)param1, param2, (QObject*)param3);
}

KHamburgerMenu* k_standardaction_hamburger_menu(void* param1, const char* param2, void* param3) {
    return KStandardAction_HamburgerMenu((QObject*)param1, param2, (QObject*)param3);
}
