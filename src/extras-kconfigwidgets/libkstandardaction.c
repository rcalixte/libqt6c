#include "libkhamburgermenu.hpp"
#include "libkrecentfilesaction.hpp"
#include "../extras-kwidgetsaddons/libktoggleaction.hpp"
#include "../extras-kwidgetsaddons/libktogglefullscreenaction.hpp"
#include "../libqaction.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "libkstandardaction.hpp"
#include "libkstandardaction.h"

QAction* k_standardaction_create(int32_t id, const void* recvr, const char* slot, void* parent) {
    return KStandardAction_Create(id, (QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_k_create_internal(int32_t id, void* parent) {
    return KStandardAction_KCreateInternal(id, (QObject*)parent);
}

const char* k_standardaction_name(int32_t id) {
    libqt_string _str = KStandardAction_Name(id);
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
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

libqt_list /* of enum KStandardAction__StandardAction */ k_standardaction_action_ids() {
    libqt_list _arr = KStandardAction_ActionIds();
    return _arr;
}

int32_t k_standardaction_shortcut_for_action_id(int32_t id) {
    return KStandardAction_ShortcutForActionId(id);
}

QAction* k_standardaction_open_new(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_OpenNew((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_open(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_Open((QObject*)recvr, slot, (QObject*)parent);
}

KRecentFilesAction* k_standardaction_open_recent(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_OpenRecent((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_save(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_Save((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_save_as(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_SaveAs((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_revert(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_Revert((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_close(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_Close((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_print(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_Print((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_print_preview(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_PrintPreview((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_mail(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_Mail((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_quit(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_Quit((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_undo(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_Undo((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_redo(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_Redo((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_cut(void* parent) {
    return KStandardAction_Cut((QObject*)parent);
}

QAction* k_standardaction_copy(void* parent) {
    return KStandardAction_Copy((QObject*)parent);
}

QAction* k_standardaction_paste(void* parent) {
    return KStandardAction_Paste((QObject*)parent);
}

QAction* k_standardaction_clear(void* parent) {
    return KStandardAction_Clear((QObject*)parent);
}

QAction* k_standardaction_select_all(void* parent) {
    return KStandardAction_SelectAll((QObject*)parent);
}

QAction* k_standardaction_cut2(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_Cut2((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_copy2(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_Copy2((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_paste2(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_Paste2((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_clear2(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_Clear2((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_select_all2(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_SelectAll2((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_deselect(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_Deselect((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_find(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_Find((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_find_next(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_FindNext((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_find_prev(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_FindPrev((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_replace(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_Replace((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_actual_size(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_ActualSize((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_fit_to_page(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_FitToPage((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_fit_to_width(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_FitToWidth((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_fit_to_height(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_FitToHeight((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_zoom_in(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_ZoomIn((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_zoom_out(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_ZoomOut((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_zoom(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_Zoom((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_redisplay(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_Redisplay((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_up(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_Up((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_back(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_Back((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_forward(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_Forward((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_home(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_Home((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_prior(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_Prior((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_next(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_Next((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_go_to(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_GoTo((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_goto_page(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_GotoPage((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_goto_line(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_GotoLine((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_first_page(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_FirstPage((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_last_page(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_LastPage((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_document_back(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_DocumentBack((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_document_forward(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_DocumentForward((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_add_bookmark(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_AddBookmark((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_edit_bookmarks(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_EditBookmarks((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_spelling(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_Spelling((QObject*)recvr, slot, (QObject*)parent);
}

KToggleAction* k_standardaction_show_menubar(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_ShowMenubar((QObject*)recvr, slot, (QObject*)parent);
}

KToggleAction* k_standardaction_show_statusbar(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_ShowStatusbar((QObject*)recvr, slot, (QObject*)parent);
}

KToggleFullScreenAction* k_standardaction_full_screen(const void* recvr, const char* slot, void* window, void* parent) {
    return KStandardAction_FullScreen((QObject*)recvr, slot, (QWidget*)window, (QObject*)parent);
}

QAction* k_standardaction_key_bindings(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_KeyBindings((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_preferences(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_Preferences((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_configure_toolbars(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_ConfigureToolbars((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_configure_notifications(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_ConfigureNotifications((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_switch_application_language(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_SwitchApplicationLanguage((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_help_contents(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_HelpContents((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_whats_this(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_WhatsThis((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_report_bug(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_ReportBug((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_about_app(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_AboutApp((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_about_k_d_e(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_AboutKDE((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_delete_file(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_DeleteFile((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_rename_file(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_RenameFile((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_move_to_trash(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_MoveToTrash((QObject*)recvr, slot, (QObject*)parent);
}

QAction* k_standardaction_donate(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_Donate((QObject*)recvr, slot, (QObject*)parent);
}

KHamburgerMenu* k_standardaction_hamburger_menu(const void* recvr, const char* slot, void* parent) {
    return KStandardAction_HamburgerMenu((QObject*)recvr, slot, (QObject*)parent);
}
