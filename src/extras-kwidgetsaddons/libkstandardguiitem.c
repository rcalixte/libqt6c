#include "libkguiitem.hpp"
#include "../libqpushbutton.hpp"
#include "libkstandardguiitem.hpp"
#include "libkstandardguiitem.h"

KGuiItem* k_standardguiitem_gui_item(int32_t param1) {
    return KStandardGuiItem_GuiItem(param1);
}

const char* k_standardguiitem_standard_item(int32_t param1) {
    libqt_string _str = KStandardGuiItem_StandardItem(param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KGuiItem* k_standardguiitem_ok() {
    return KStandardGuiItem_Ok();
}

KGuiItem* k_standardguiitem_cancel() {
    return KStandardGuiItem_Cancel();
}

KGuiItem* k_standardguiitem_insert() {
    return KStandardGuiItem_Insert();
}

KGuiItem* k_standardguiitem_discard() {
    return KStandardGuiItem_Discard();
}

KGuiItem* k_standardguiitem_save() {
    return KStandardGuiItem_Save();
}

KGuiItem* k_standardguiitem_help() {
    return KStandardGuiItem_Help();
}

KGuiItem* k_standardguiitem_dont_save() {
    return KStandardGuiItem_DontSave();
}

KGuiItem* k_standardguiitem_save_as() {
    return KStandardGuiItem_SaveAs();
}

KGuiItem* k_standardguiitem_apply() {
    return KStandardGuiItem_Apply();
}

KGuiItem* k_standardguiitem_clear() {
    return KStandardGuiItem_Clear();
}

KGuiItem* k_standardguiitem_defaults() {
    return KStandardGuiItem_Defaults();
}

KGuiItem* k_standardguiitem_close() {
    return KStandardGuiItem_Close();
}

KGuiItem* k_standardguiitem_close_window() {
    return KStandardGuiItem_CloseWindow();
}

KGuiItem* k_standardguiitem_close_document() {
    return KStandardGuiItem_CloseDocument();
}

KGuiItem* k_standardguiitem_print() {
    return KStandardGuiItem_Print();
}

KGuiItem* k_standardguiitem_properties() {
    return KStandardGuiItem_Properties();
}

KGuiItem* k_standardguiitem_reset() {
    return KStandardGuiItem_Reset();
}

KGuiItem* k_standardguiitem_overwrite() {
    return KStandardGuiItem_Overwrite();
}

KGuiItem* k_standardguiitem_admin_mode() {
    return KStandardGuiItem_AdminMode();
}

KGuiItem* k_standardguiitem_cont() {
    return KStandardGuiItem_Cont();
}

KGuiItem* k_standardguiitem_del() {
    return KStandardGuiItem_Del();
}

KGuiItem* k_standardguiitem_open() {
    return KStandardGuiItem_Open();
}

KGuiItem* k_standardguiitem_back(int32_t param1) {
    return KStandardGuiItem_Back(param1);
}

KGuiItem* k_standardguiitem_forward(int32_t param1) {
    return KStandardGuiItem_Forward(param1);
}

KGuiItem* k_standardguiitem_configure() {
    return KStandardGuiItem_Configure();
}

pair_kguiitem_kguiitem /* tuple of KGuiItem* and KGuiItem* */ k_standardguiitem_back_and_forward() {
    return KStandardGuiItem_BackAndForward();
}

KGuiItem* k_standardguiitem_quit() {
    return KStandardGuiItem_Quit();
}

KGuiItem* k_standardguiitem_find() {
    return KStandardGuiItem_Find();
}

KGuiItem* k_standardguiitem_stop() {
    return KStandardGuiItem_Stop();
}

KGuiItem* k_standardguiitem_add() {
    return KStandardGuiItem_Add();
}

KGuiItem* k_standardguiitem_remove() {
    return KStandardGuiItem_Remove();
}

KGuiItem* k_standardguiitem_test() {
    return KStandardGuiItem_Test();
}

void k_standardguiitem_assign(void* param1, int32_t param2) {
    KStandardGuiItem_Assign((QPushButton*)param1, param2);
}
