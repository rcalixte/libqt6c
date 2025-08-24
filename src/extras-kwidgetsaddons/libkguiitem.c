#include "../libqicon.hpp"
#include "../libqpushbutton.hpp"
#include "libkguiitem.hpp"
#include "libkguiitem.h"

KGuiItem* k_guiitem_new() {
    return KGuiItem_new();
}

KGuiItem* k_guiitem_new2(const char* text) {
    return KGuiItem_new2(qstring(text));
}

KGuiItem* k_guiitem_new3(const char* text, void* icon) {
    return KGuiItem_new3(qstring(text), (QIcon*)icon);
}

KGuiItem* k_guiitem_new4(void* other) {
    return KGuiItem_new4((KGuiItem*)other);
}

KGuiItem* k_guiitem_new5(const char* text, const char* iconName) {
    return KGuiItem_new5(qstring(text), qstring(iconName));
}

KGuiItem* k_guiitem_new6(const char* text, const char* iconName, const char* toolTip) {
    return KGuiItem_new6(qstring(text), qstring(iconName), qstring(toolTip));
}

KGuiItem* k_guiitem_new7(const char* text, const char* iconName, const char* toolTip, const char* whatsThis) {
    return KGuiItem_new7(qstring(text), qstring(iconName), qstring(toolTip), qstring(whatsThis));
}

KGuiItem* k_guiitem_new8(const char* text, void* icon, const char* toolTip) {
    return KGuiItem_new8(qstring(text), (QIcon*)icon, qstring(toolTip));
}

KGuiItem* k_guiitem_new9(const char* text, void* icon, const char* toolTip, const char* whatsThis) {
    return KGuiItem_new9(qstring(text), (QIcon*)icon, qstring(toolTip), qstring(whatsThis));
}

void k_guiitem_operator_assign(void* self, void* other) {
    KGuiItem_OperatorAssign((KGuiItem*)self, (KGuiItem*)other);
}

void k_guiitem_set_text(void* self, const char* text) {
    KGuiItem_SetText((KGuiItem*)self, qstring(text));
}

const char* k_guiitem_text(void* self) {
    libqt_string _str = KGuiItem_Text((KGuiItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_guiitem_plain_text(void* self) {
    libqt_string _str = KGuiItem_PlainText((KGuiItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_guiitem_set_icon(void* self, void* iconset) {
    KGuiItem_SetIcon((KGuiItem*)self, (QIcon*)iconset);
}

QIcon* k_guiitem_icon(void* self) {
    return KGuiItem_Icon((KGuiItem*)self);
}

void k_guiitem_set_icon_name(void* self, const char* iconName) {
    KGuiItem_SetIconName((KGuiItem*)self, qstring(iconName));
}

const char* k_guiitem_icon_name(void* self) {
    libqt_string _str = KGuiItem_IconName((KGuiItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_guiitem_has_icon(void* self) {
    return KGuiItem_HasIcon((KGuiItem*)self);
}

void k_guiitem_set_tool_tip(void* self, const char* tooltip) {
    KGuiItem_SetToolTip((KGuiItem*)self, qstring(tooltip));
}

const char* k_guiitem_tool_tip(void* self) {
    libqt_string _str = KGuiItem_ToolTip((KGuiItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_guiitem_set_whats_this(void* self, const char* whatsThis) {
    KGuiItem_SetWhatsThis((KGuiItem*)self, qstring(whatsThis));
}

const char* k_guiitem_whats_this(void* self) {
    libqt_string _str = KGuiItem_WhatsThis((KGuiItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_guiitem_set_enabled(void* self, bool enable) {
    KGuiItem_SetEnabled((KGuiItem*)self, enable);
}

bool k_guiitem_is_enabled(void* self) {
    return KGuiItem_IsEnabled((KGuiItem*)self);
}

void k_guiitem_assign(void* button, void* item) {
    KGuiItem_Assign((QPushButton*)button, (KGuiItem*)item);
}

void k_guiitem_delete(void* self) {
    KGuiItem_Delete((KGuiItem*)(self));
}
