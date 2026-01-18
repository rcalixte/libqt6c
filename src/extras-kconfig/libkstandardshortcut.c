#include "libkstandardshortcutwatcher.hpp"
#include "../libqkeysequence.hpp"
#include "libkstandardshortcut.hpp"
#include "libkstandardshortcut.h"

libqt_list /* of QKeySequence* */ k_standardshortcut_shortcut(int32_t param1) {
    libqt_list _arr = KStandardShortcut_Shortcut(param1);
    return _arr;
}

const char* k_standardshortcut_name(int32_t param1) {
    libqt_string _str = KStandardShortcut_Name(param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_standardshortcut_label(int32_t param1) {
    libqt_string _str = KStandardShortcut_Label(param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_standardshortcut_whats_this(int32_t param1) {
    libqt_string _str = KStandardShortcut_WhatsThis(param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_standardshortcut_find(void* param1) {
    return KStandardShortcut_Find((QKeySequence*)param1);
}

int32_t k_standardshortcut_find_by_name(const char* param1) {
    return KStandardShortcut_FindByName(qstring(param1));
}

libqt_list /* of QKeySequence* */ k_standardshortcut_hardcoded_default_shortcut(int32_t param1) {
    libqt_list _arr = KStandardShortcut_HardcodedDefaultShortcut(param1);
    return _arr;
}

void k_standardshortcut_save_shortcut(int32_t param1, libqt_list /* of QKeySequence* */ param2) {
    KStandardShortcut_SaveShortcut(param1, param2);
}

int32_t k_standardshortcut_category(int32_t param1) {
    return KStandardShortcut_Category(param1);
}

libqt_list /* of QKeySequence* */ k_standardshortcut_open() {
    libqt_list _arr = KStandardShortcut_Open();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_open_new() {
    libqt_list _arr = KStandardShortcut_OpenNew();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_close() {
    libqt_list _arr = KStandardShortcut_Close();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_save() {
    libqt_list _arr = KStandardShortcut_Save();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_print() {
    libqt_list _arr = KStandardShortcut_Print();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_quit() {
    libqt_list _arr = KStandardShortcut_Quit();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_undo() {
    libqt_list _arr = KStandardShortcut_Undo();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_redo() {
    libqt_list _arr = KStandardShortcut_Redo();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_cut() {
    libqt_list _arr = KStandardShortcut_Cut();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_copy() {
    libqt_list _arr = KStandardShortcut_Copy();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_paste() {
    libqt_list _arr = KStandardShortcut_Paste();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_paste_selection() {
    libqt_list _arr = KStandardShortcut_PasteSelection();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_select_all() {
    libqt_list _arr = KStandardShortcut_SelectAll();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_delete_word_back() {
    libqt_list _arr = KStandardShortcut_DeleteWordBack();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_delete_word_forward() {
    libqt_list _arr = KStandardShortcut_DeleteWordForward();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_find2() {
    libqt_list _arr = KStandardShortcut_Find2();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_find_next() {
    libqt_list _arr = KStandardShortcut_FindNext();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_find_prev() {
    libqt_list _arr = KStandardShortcut_FindPrev();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_replace() {
    libqt_list _arr = KStandardShortcut_Replace();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_zoom_in() {
    libqt_list _arr = KStandardShortcut_ZoomIn();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_zoom_out() {
    libqt_list _arr = KStandardShortcut_ZoomOut();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_home() {
    libqt_list _arr = KStandardShortcut_Home();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_begin() {
    libqt_list _arr = KStandardShortcut_Begin();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_end() {
    libqt_list _arr = KStandardShortcut_End();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_beginning_of_line() {
    libqt_list _arr = KStandardShortcut_BeginningOfLine();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_end_of_line() {
    libqt_list _arr = KStandardShortcut_EndOfLine();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_prior() {
    libqt_list _arr = KStandardShortcut_Prior();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_next() {
    libqt_list _arr = KStandardShortcut_Next();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_goto_line() {
    libqt_list _arr = KStandardShortcut_GotoLine();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_add_bookmark() {
    libqt_list _arr = KStandardShortcut_AddBookmark();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_tab_next() {
    libqt_list _arr = KStandardShortcut_TabNext();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_tab_prev() {
    libqt_list _arr = KStandardShortcut_TabPrev();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_full_screen() {
    libqt_list _arr = KStandardShortcut_FullScreen();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_help() {
    libqt_list _arr = KStandardShortcut_Help();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_completion() {
    libqt_list _arr = KStandardShortcut_Completion();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_prev_completion() {
    libqt_list _arr = KStandardShortcut_PrevCompletion();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_next_completion() {
    libqt_list _arr = KStandardShortcut_NextCompletion();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_substring_completion() {
    libqt_list _arr = KStandardShortcut_SubstringCompletion();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_rotate_up() {
    libqt_list _arr = KStandardShortcut_RotateUp();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_rotate_down() {
    libqt_list _arr = KStandardShortcut_RotateDown();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_whats_this2() {
    libqt_list _arr = KStandardShortcut_WhatsThis2();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_reload() {
    libqt_list _arr = KStandardShortcut_Reload();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_up() {
    libqt_list _arr = KStandardShortcut_Up();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_back() {
    libqt_list _arr = KStandardShortcut_Back();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_forward() {
    libqt_list _arr = KStandardShortcut_Forward();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_backward_word() {
    libqt_list _arr = KStandardShortcut_BackwardWord();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_forward_word() {
    libqt_list _arr = KStandardShortcut_ForwardWord();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_show_menubar() {
    libqt_list _arr = KStandardShortcut_ShowMenubar();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_delete_file() {
    libqt_list _arr = KStandardShortcut_DeleteFile();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_rename_file() {
    libqt_list _arr = KStandardShortcut_RenameFile();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_create_folder() {
    libqt_list _arr = KStandardShortcut_CreateFolder();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_move_to_trash() {
    libqt_list _arr = KStandardShortcut_MoveToTrash();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_preferences() {
    libqt_list _arr = KStandardShortcut_Preferences();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_show_hide_hidden_files() {
    libqt_list _arr = KStandardShortcut_ShowHideHiddenFiles();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_open_main_menu() {
    libqt_list _arr = KStandardShortcut_OpenMainMenu();
    return _arr;
}

libqt_list /* of QKeySequence* */ k_standardshortcut_open_context_menu() {
    libqt_list _arr = KStandardShortcut_OpenContextMenu();
    return _arr;
}
