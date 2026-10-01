#include "../libqabstractitemmodel.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdatastream.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqmimedata.hpp"
#include "../libqobject.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "libcustomemoji.hpp"
#include "libcustomemojiiconmanager.hpp"
#include "libunicodeemoticon.hpp"
#include "libemojimodel.hpp"
#include "libemojimodel.h"

TextEmoticonsCore__EmojiModel* k_textemoticonscore__emojimodel_new() {
    return TextEmoticonsCore__EmojiModel_New();
}

TextEmoticonsCore__EmojiModel* k_textemoticonscore__emojimodel_new2(void* parent) {
    return TextEmoticonsCore__EmojiModel_New2((QObject*)parent);
}

const QMetaObject* k_textemoticonscore__emojimodel_meta_object(const void* self) {
    return TextEmoticonsCore__EmojiModel_MetaObject((TextEmoticonsCore__EmojiModel*)self);
}

void k_textemoticonscore__emojimodel_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    TextEmoticonsCore__EmojiModel_OnMetaObject((TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

const QMetaObject* k_textemoticonscore__emojimodel_super_meta_object(const void* self) {
    return TextEmoticonsCore__EmojiModel_SuperMetaObject((TextEmoticonsCore__EmojiModel*)self);
}

void* k_textemoticonscore__emojimodel_metacast(void* self, const char* param1) {
    return TextEmoticonsCore__EmojiModel_Metacast((TextEmoticonsCore__EmojiModel*)self, param1);
}

void k_textemoticonscore__emojimodel_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    TextEmoticonsCore__EmojiModel_OnMetacast((TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

void* k_textemoticonscore__emojimodel_super_metacast(void* self, const char* param1) {
    return TextEmoticonsCore__EmojiModel_SuperMetacast((TextEmoticonsCore__EmojiModel*)self, param1);
}

int32_t k_textemoticonscore__emojimodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextEmoticonsCore__EmojiModel_Metacall((TextEmoticonsCore__EmojiModel*)self, param1, param2, param3);
}

void k_textemoticonscore__emojimodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    TextEmoticonsCore__EmojiModel_OnMetacall((TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

int32_t k_textemoticonscore__emojimodel_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextEmoticonsCore__EmojiModel_SuperMetacall((TextEmoticonsCore__EmojiModel*)self, param1, param2, param3);
}

const char* k_textemoticonscore__emojimodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_textemoticonscore__emojimodel_row_count(const void* self, const void* parent) {
    return TextEmoticonsCore__EmojiModel_RowCount((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)parent);
}

void k_textemoticonscore__emojimodel_on_row_count(const void* self, int32_t (*callback)(const void*, const void*)) {
    TextEmoticonsCore__EmojiModel_OnRowCount((TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

int32_t k_textemoticonscore__emojimodel_super_row_count(const void* self, const void* parent) {
    return TextEmoticonsCore__EmojiModel_SuperRowCount((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)parent);
}

QVariant* k_textemoticonscore__emojimodel_data(const void* self, const void* index, int role) {
    return TextEmoticonsCore__EmojiModel_Data((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)index, role);
}

void k_textemoticonscore__emojimodel_on_data(const void* self, QVariant* (*callback)(const void*, const void*, int)) {
    TextEmoticonsCore__EmojiModel_OnData((TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

QVariant* k_textemoticonscore__emojimodel_super_data(const void* self, const void* index, int role) {
    return TextEmoticonsCore__EmojiModel_SuperData((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)index, role);
}

libqt_list /* of TextEmoticonsCore__UnicodeEmoticon* */ k_textemoticonscore__emojimodel_emoticon_list(const void* self) {
    libqt_list _arr = TextEmoticonsCore__EmojiModel_EmoticonList((TextEmoticonsCore__EmojiModel*)self);
    return _arr;
}

void k_textemoticonscore__emojimodel_set_unicode_emoticon_list(void* self, libqt_list /* of TextEmoticonsCore__UnicodeEmoticon* */ newEmoticonList) {
    TextEmoticonsCore__EmojiModel_SetUnicodeEmoticonList((TextEmoticonsCore__EmojiModel*)self, newEmoticonList);
}

libqt_list /* of TextEmoticonsCore__CustomEmoji* */ k_textemoticonscore__emojimodel_custom_emoji_list(const void* self) {
    libqt_list _arr = TextEmoticonsCore__EmojiModel_CustomEmojiList((TextEmoticonsCore__EmojiModel*)self);
    return _arr;
}

void k_textemoticonscore__emojimodel_set_custom_emoji_list(void* self, libqt_list /* of TextEmoticonsCore__CustomEmoji* */ newCustomEmojiList) {
    TextEmoticonsCore__EmojiModel_SetCustomEmojiList((TextEmoticonsCore__EmojiModel*)self, newCustomEmojiList);
}

TextEmoticonsCore__CustomEmojiIconManager* k_textemoticonscore__emojimodel_custom_emoji_icon_manager(const void* self) {
    return TextEmoticonsCore__EmojiModel_CustomEmojiIconManager((TextEmoticonsCore__EmojiModel*)self);
}

void k_textemoticonscore__emojimodel_set_custom_emoji_icon_manager(void* self, void* newCustomEmojiIconManager) {
    TextEmoticonsCore__EmojiModel_SetCustomEmojiIconManager((TextEmoticonsCore__EmojiModel*)self, (TextEmoticonsCore__CustomEmojiIconManager*)newCustomEmojiIconManager);
}

void k_textemoticonscore__emojimodel_set_exclude_emoticons(void* self, const char* emoticons[static 1]) {
    size_t emoticons_len = libqt_strv_length(emoticons);
    libqt_string* emoticons_qstr = (libqt_string*)malloc(emoticons_len * sizeof(libqt_string));
    if (emoticons_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textemoticonscore__emojimodel_set_exclude_emoticons\n");
        abort();
    }
    for (size_t i = 0; i < emoticons_len; ++i)
        emoticons_qstr[i] = qstring(emoticons[i]);
    libqt_list emoticons_list = qlist(emoticons_qstr, emoticons_len);
    TextEmoticonsCore__EmojiModel_SetExcludeEmoticons((TextEmoticonsCore__EmojiModel*)self, emoticons_list);
    free(emoticons_qstr);
}

const char* k_textemoticonscore__emojimodel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textemoticonscore__emojimodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textemoticonscore__emojimodel_has_index(const void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

QModelIndex* k_textemoticonscore__emojimodel_parent(const void* self, const void* child) {
    return QAbstractItemModel_Parent((QAbstractItemModel*)self, (QModelIndex*)child);
}

void k_textemoticonscore__emojimodel_on_parent(const void* self, QModelIndex* (*callback)(const void*, const void*)) {
    QAbstractItemModel_OnParent((QAbstractItemModel*)self, (intptr_t)callback);
}

int32_t k_textemoticonscore__emojimodel_column_count(const void* self, const void* parent) {
    return QAbstractItemModel_ColumnCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void k_textemoticonscore__emojimodel_on_column_count(const void* self, int32_t (*callback)(const void*, const void*)) {
    QAbstractItemModel_OnColumnCount((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojimodel_has_children(const void* self, const void* parent) {
    return QAbstractItemModel_HasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void k_textemoticonscore__emojimodel_on_has_children(const void* self, bool (*callback)(const void*, const void*)) {
    QAbstractItemModel_OnHasChildren((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojimodel_super_has_children(const void* self, const void* parent) {
    return QAbstractItemModel_SuperHasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

bool k_textemoticonscore__emojimodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool k_textemoticonscore__emojimodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool k_textemoticonscore__emojimodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool k_textemoticonscore__emojimodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool k_textemoticonscore__emojimodel_move_row(void* self, const void* sourceParent, int sourceRow, const void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool k_textemoticonscore__emojimodel_move_column(void* self, const void* sourceParent, int sourceColumn, const void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool k_textemoticonscore__emojimodel_check_index(const void* self, const void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void k_textemoticonscore__emojimodel_data_changed(void* self, const void* topLeft, const void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void k_textemoticonscore__emojimodel_on_data_changed(void* self, void (*callback)(void*, const void*, const void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void k_textemoticonscore__emojimodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void k_textemoticonscore__emojimodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void k_textemoticonscore__emojimodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojimodel_has_index3(const void* self, int row, int column, const void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool k_textemoticonscore__emojimodel_insert_row2(void* self, int row, const void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_textemoticonscore__emojimodel_insert_column2(void* self, int column, const void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_textemoticonscore__emojimodel_remove_row2(void* self, int row, const void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_textemoticonscore__emojimodel_remove_column2(void* self, int column, const void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_textemoticonscore__emojimodel_check_index2(const void* self, const void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void k_textemoticonscore__emojimodel_data_changed3(void* self, const void* topLeft, const void* bottomRight, libqt_list /* of int */ roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void k_textemoticonscore__emojimodel_on_data_changed3(void* self, void (*callback)(void*, const void*, const void*, libqt_list /* of int */)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_layout_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void k_textemoticonscore__emojimodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_layout_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_textemoticonscore__emojimodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_layout_about_to_be_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void k_textemoticonscore__emojimodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_layout_about_to_be_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_textemoticonscore__emojimodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* k_textemoticonscore__emojimodel_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textemoticonscore__emojimodel_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_textemoticonscore__emojimodel_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_textemoticonscore__emojimodel_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_textemoticonscore__emojimodel_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_textemoticonscore__emojimodel_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_textemoticonscore__emojimodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_textemoticonscore__emojimodel_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_textemoticonscore__emojimodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_textemoticonscore__emojimodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_textemoticonscore__emojimodel_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_textemoticonscore__emojimodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_textemoticonscore__emojimodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_textemoticonscore__emojimodel_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_textemoticonscore__emojimodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_textemoticonscore__emojimodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_textemoticonscore__emojimodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_textemoticonscore__emojimodel_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_textemoticonscore__emojimodel_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_textemoticonscore__emojimodel_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_textemoticonscore__emojimodel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_textemoticonscore__emojimodel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_textemoticonscore__emojimodel_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_textemoticonscore__emojimodel_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_textemoticonscore__emojimodel_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_textemoticonscore__emojimodel_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_textemoticonscore__emojimodel_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_textemoticonscore__emojimodel_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_textemoticonscore__emojimodel_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_textemoticonscore__emojimodel_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textemoticonscore__emojimodel_dynamic_property_names\n");
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

QBindingStorage* k_textemoticonscore__emojimodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_textemoticonscore__emojimodel_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_textemoticonscore__emojimodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_textemoticonscore__emojimodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojimodel_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_textemoticonscore__emojimodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_textemoticonscore__emojimodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_textemoticonscore__emojimodel_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_textemoticonscore__emojimodel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_textemoticonscore__emojimodel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_textemoticonscore__emojimodel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_textemoticonscore__emojimodel_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_textemoticonscore__emojimodel_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_textemoticonscore__emojimodel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_textemoticonscore__emojimodel_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_textemoticonscore__emojimodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_textemoticonscore__emojimodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QModelIndex* k_textemoticonscore__emojimodel_index(const void* self, int row, int column, const void* parent) {
    return TextEmoticonsCore__EmojiModel_Index((TextEmoticonsCore__EmojiModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* k_textemoticonscore__emojimodel_super_index(const void* self, int row, int column, const void* parent) {
    return TextEmoticonsCore__EmojiModel_SuperIndex((TextEmoticonsCore__EmojiModel*)self, row, column, (QModelIndex*)parent);
}

void k_textemoticonscore__emojimodel_on_index(const void* self, QModelIndex* (*callback)(const void*, int, int, const void*)) {
    TextEmoticonsCore__EmojiModel_OnIndex((const TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

QModelIndex* k_textemoticonscore__emojimodel_sibling(const void* self, int row, int column, const void* idx) {
    return TextEmoticonsCore__EmojiModel_Sibling((TextEmoticonsCore__EmojiModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* k_textemoticonscore__emojimodel_super_sibling(const void* self, int row, int column, const void* idx) {
    return TextEmoticonsCore__EmojiModel_SuperSibling((TextEmoticonsCore__EmojiModel*)self, row, column, (QModelIndex*)idx);
}

void k_textemoticonscore__emojimodel_on_sibling(const void* self, QModelIndex* (*callback)(const void*, int, int, const void*)) {
    TextEmoticonsCore__EmojiModel_OnSibling((const TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojimodel_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return TextEmoticonsCore__EmojiModel_DropMimeData((TextEmoticonsCore__EmojiModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_textemoticonscore__emojimodel_super_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return TextEmoticonsCore__EmojiModel_SuperDropMimeData((TextEmoticonsCore__EmojiModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_textemoticonscore__emojimodel_on_drop_mime_data(void* self, bool (*callback)(void*, const void*, int32_t, int, int, const void*)) {
    TextEmoticonsCore__EmojiModel_OnDropMimeData((TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

int32_t k_textemoticonscore__emojimodel_flags(const void* self, const void* index) {
    return TextEmoticonsCore__EmojiModel_Flags((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)index);
}

int32_t k_textemoticonscore__emojimodel_super_flags(const void* self, const void* index) {
    return TextEmoticonsCore__EmojiModel_SuperFlags((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)index);
}

void k_textemoticonscore__emojimodel_on_flags(const void* self, int32_t (*callback)(const void*, const void*)) {
    TextEmoticonsCore__EmojiModel_OnFlags((const TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojimodel_set_data(void* self, const void* index, const void* value, int role) {
    return TextEmoticonsCore__EmojiModel_SetData((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool k_textemoticonscore__emojimodel_super_set_data(void* self, const void* index, const void* value, int role) {
    return TextEmoticonsCore__EmojiModel_SuperSetData((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void k_textemoticonscore__emojimodel_on_set_data(void* self, bool (*callback)(void*, const void*, const void*, int)) {
    TextEmoticonsCore__EmojiModel_OnSetData((TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

QVariant* k_textemoticonscore__emojimodel_header_data(const void* self, int section, int32_t orientation, int role) {
    return TextEmoticonsCore__EmojiModel_HeaderData((TextEmoticonsCore__EmojiModel*)self, section, orientation, role);
}

QVariant* k_textemoticonscore__emojimodel_super_header_data(const void* self, int section, int32_t orientation, int role) {
    return TextEmoticonsCore__EmojiModel_SuperHeaderData((TextEmoticonsCore__EmojiModel*)self, section, orientation, role);
}

void k_textemoticonscore__emojimodel_on_header_data(const void* self, QVariant* (*callback)(const void*, int, int32_t, int)) {
    TextEmoticonsCore__EmojiModel_OnHeaderData((const TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojimodel_set_header_data(void* self, int section, int32_t orientation, const void* value, int role) {
    return TextEmoticonsCore__EmojiModel_SetHeaderData((TextEmoticonsCore__EmojiModel*)self, section, orientation, (QVariant*)value, role);
}

bool k_textemoticonscore__emojimodel_super_set_header_data(void* self, int section, int32_t orientation, const void* value, int role) {
    return TextEmoticonsCore__EmojiModel_SuperSetHeaderData((TextEmoticonsCore__EmojiModel*)self, section, orientation, (QVariant*)value, role);
}

void k_textemoticonscore__emojimodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, const void*, int)) {
    TextEmoticonsCore__EmojiModel_OnSetHeaderData((TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ k_textemoticonscore__emojimodel_item_data(const void* self, const void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = TextEmoticonsCore__EmojiModel_ItemData((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

libqt_map /* of int to QVariant* */ k_textemoticonscore__emojimodel_super_item_data(const void* self, const void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = TextEmoticonsCore__EmojiModel_SuperItemData((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void k_textemoticonscore__emojimodel_on_item_data(const void* self, libqt_map /* of int to QVariant* */ (*callback)(const void*, const void*)) {
    TextEmoticonsCore__EmojiModel_OnItemData((const TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojimodel_set_item_data(void* self, const void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_textemoticonscore__emojimodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_textemoticonscore__emojimodel_set_item_data\n");
        abort();
    }
    int* roles_karr = (int*)roles.keys;
    int* roles_kdest = (int*)roles_ret.keys;
    QVariant** roles_varr = (QVariant**)roles.values;
    QVariant** roles_vdest = (QVariant**)roles_ret.values;
    for (size_t i = 0; i < roles_ret.len; ++i) {
        roles_kdest[i] = roles_karr[i];
        roles_vdest[i] = roles_varr[i];
    }
    bool _out = TextEmoticonsCore__EmojiModel_SetItemData((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

bool k_textemoticonscore__emojimodel_super_set_item_data(void* self, const void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_textemoticonscore__emojimodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_textemoticonscore__emojimodel_set_item_data\n");
        abort();
    }
    int* roles_karr = (int*)roles.keys;
    int* roles_kdest = (int*)roles_ret.keys;
    QVariant** roles_varr = (QVariant**)roles.values;
    QVariant** roles_vdest = (QVariant**)roles_ret.values;
    for (size_t i = 0; i < roles_ret.len; ++i) {
        roles_kdest[i] = roles_karr[i];
        roles_vdest[i] = roles_varr[i];
    }
    bool _out = TextEmoticonsCore__EmojiModel_SuperSetItemData((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

void k_textemoticonscore__emojimodel_on_set_item_data(void* self, bool (*callback)(void*, const void*, libqt_map /* of int to QVariant* */)) {
    TextEmoticonsCore__EmojiModel_OnSetItemData((TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojimodel_clear_item_data(void* self, const void* index) {
    return TextEmoticonsCore__EmojiModel_ClearItemData((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)index);
}

bool k_textemoticonscore__emojimodel_super_clear_item_data(void* self, const void* index) {
    return TextEmoticonsCore__EmojiModel_SuperClearItemData((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)index);
}

void k_textemoticonscore__emojimodel_on_clear_item_data(void* self, bool (*callback)(void*, const void*)) {
    TextEmoticonsCore__EmojiModel_OnClearItemData((TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

const char** k_textemoticonscore__emojimodel_mime_types(const void* self) {
    libqt_list _arr = TextEmoticonsCore__EmojiModel_MimeTypes((TextEmoticonsCore__EmojiModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textemoticonscore__emojimodel_mime_types\n");
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

const char** k_textemoticonscore__emojimodel_super_mime_types(const void* self) {
    libqt_list _arr = TextEmoticonsCore__EmojiModel_SuperMimeTypes((TextEmoticonsCore__EmojiModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textemoticonscore__emojimodel_mime_types\n");
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

void k_textemoticonscore__emojimodel_on_mime_types(const void* self, const char** (*callback)(const void*)) {
    TextEmoticonsCore__EmojiModel_OnMimeTypes((const TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

QMimeData* k_textemoticonscore__emojimodel_mime_data(const void* self, libqt_list /* of QModelIndex* */ indexes) {
    return TextEmoticonsCore__EmojiModel_MimeData((TextEmoticonsCore__EmojiModel*)self, indexes);
}

QMimeData* k_textemoticonscore__emojimodel_super_mime_data(const void* self, libqt_list /* of QModelIndex* */ indexes) {
    return TextEmoticonsCore__EmojiModel_SuperMimeData((TextEmoticonsCore__EmojiModel*)self, indexes);
}

void k_textemoticonscore__emojimodel_on_mime_data(const void* self, QMimeData* (*callback)(const void*, libqt_list /* of QModelIndex* */)) {
    TextEmoticonsCore__EmojiModel_OnMimeData((const TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojimodel_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return TextEmoticonsCore__EmojiModel_CanDropMimeData((TextEmoticonsCore__EmojiModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_textemoticonscore__emojimodel_super_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return TextEmoticonsCore__EmojiModel_SuperCanDropMimeData((TextEmoticonsCore__EmojiModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_textemoticonscore__emojimodel_on_can_drop_mime_data(const void* self, bool (*callback)(const void*, const void*, int32_t, int, int, const void*)) {
    TextEmoticonsCore__EmojiModel_OnCanDropMimeData((const TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

int32_t k_textemoticonscore__emojimodel_supported_drop_actions(const void* self) {
    return TextEmoticonsCore__EmojiModel_SupportedDropActions((TextEmoticonsCore__EmojiModel*)self);
}

int32_t k_textemoticonscore__emojimodel_super_supported_drop_actions(const void* self) {
    return TextEmoticonsCore__EmojiModel_SuperSupportedDropActions((TextEmoticonsCore__EmojiModel*)self);
}

void k_textemoticonscore__emojimodel_on_supported_drop_actions(const void* self, int32_t (*callback)(const void*)) {
    TextEmoticonsCore__EmojiModel_OnSupportedDropActions((const TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

int32_t k_textemoticonscore__emojimodel_supported_drag_actions(const void* self) {
    return TextEmoticonsCore__EmojiModel_SupportedDragActions((TextEmoticonsCore__EmojiModel*)self);
}

int32_t k_textemoticonscore__emojimodel_super_supported_drag_actions(const void* self) {
    return TextEmoticonsCore__EmojiModel_SuperSupportedDragActions((TextEmoticonsCore__EmojiModel*)self);
}

void k_textemoticonscore__emojimodel_on_supported_drag_actions(const void* self, int32_t (*callback)(const void*)) {
    TextEmoticonsCore__EmojiModel_OnSupportedDragActions((const TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojimodel_insert_rows(void* self, int row, int count, const void* parent) {
    return TextEmoticonsCore__EmojiModel_InsertRows((TextEmoticonsCore__EmojiModel*)self, row, count, (QModelIndex*)parent);
}

bool k_textemoticonscore__emojimodel_super_insert_rows(void* self, int row, int count, const void* parent) {
    return TextEmoticonsCore__EmojiModel_SuperInsertRows((TextEmoticonsCore__EmojiModel*)self, row, count, (QModelIndex*)parent);
}

void k_textemoticonscore__emojimodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, const void*)) {
    TextEmoticonsCore__EmojiModel_OnInsertRows((TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojimodel_insert_columns(void* self, int column, int count, const void* parent) {
    return TextEmoticonsCore__EmojiModel_InsertColumns((TextEmoticonsCore__EmojiModel*)self, column, count, (QModelIndex*)parent);
}

bool k_textemoticonscore__emojimodel_super_insert_columns(void* self, int column, int count, const void* parent) {
    return TextEmoticonsCore__EmojiModel_SuperInsertColumns((TextEmoticonsCore__EmojiModel*)self, column, count, (QModelIndex*)parent);
}

void k_textemoticonscore__emojimodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, const void*)) {
    TextEmoticonsCore__EmojiModel_OnInsertColumns((TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojimodel_remove_rows(void* self, int row, int count, const void* parent) {
    return TextEmoticonsCore__EmojiModel_RemoveRows((TextEmoticonsCore__EmojiModel*)self, row, count, (QModelIndex*)parent);
}

bool k_textemoticonscore__emojimodel_super_remove_rows(void* self, int row, int count, const void* parent) {
    return TextEmoticonsCore__EmojiModel_SuperRemoveRows((TextEmoticonsCore__EmojiModel*)self, row, count, (QModelIndex*)parent);
}

void k_textemoticonscore__emojimodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, const void*)) {
    TextEmoticonsCore__EmojiModel_OnRemoveRows((TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojimodel_remove_columns(void* self, int column, int count, const void* parent) {
    return TextEmoticonsCore__EmojiModel_RemoveColumns((TextEmoticonsCore__EmojiModel*)self, column, count, (QModelIndex*)parent);
}

bool k_textemoticonscore__emojimodel_super_remove_columns(void* self, int column, int count, const void* parent) {
    return TextEmoticonsCore__EmojiModel_SuperRemoveColumns((TextEmoticonsCore__EmojiModel*)self, column, count, (QModelIndex*)parent);
}

void k_textemoticonscore__emojimodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, const void*)) {
    TextEmoticonsCore__EmojiModel_OnRemoveColumns((TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojimodel_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild) {
    return TextEmoticonsCore__EmojiModel_MoveRows((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_textemoticonscore__emojimodel_super_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild) {
    return TextEmoticonsCore__EmojiModel_SuperMoveRows((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_textemoticonscore__emojimodel_on_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int)) {
    TextEmoticonsCore__EmojiModel_OnMoveRows((TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojimodel_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild) {
    return TextEmoticonsCore__EmojiModel_MoveColumns((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_textemoticonscore__emojimodel_super_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild) {
    return TextEmoticonsCore__EmojiModel_SuperMoveColumns((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_textemoticonscore__emojimodel_on_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int)) {
    TextEmoticonsCore__EmojiModel_OnMoveColumns((TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_fetch_more(void* self, const void* parent) {
    TextEmoticonsCore__EmojiModel_FetchMore((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)parent);
}

void k_textemoticonscore__emojimodel_super_fetch_more(void* self, const void* parent) {
    TextEmoticonsCore__EmojiModel_SuperFetchMore((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)parent);
}

void k_textemoticonscore__emojimodel_on_fetch_more(void* self, void (*callback)(void*, const void*)) {
    TextEmoticonsCore__EmojiModel_OnFetchMore((TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojimodel_can_fetch_more(const void* self, const void* parent) {
    return TextEmoticonsCore__EmojiModel_CanFetchMore((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)parent);
}

bool k_textemoticonscore__emojimodel_super_can_fetch_more(const void* self, const void* parent) {
    return TextEmoticonsCore__EmojiModel_SuperCanFetchMore((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)parent);
}

void k_textemoticonscore__emojimodel_on_can_fetch_more(const void* self, bool (*callback)(const void*, const void*)) {
    TextEmoticonsCore__EmojiModel_OnCanFetchMore((const TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_sort(void* self, int column, int32_t order) {
    TextEmoticonsCore__EmojiModel_Sort((TextEmoticonsCore__EmojiModel*)self, column, order);
}

void k_textemoticonscore__emojimodel_super_sort(void* self, int column, int32_t order) {
    TextEmoticonsCore__EmojiModel_SuperSort((TextEmoticonsCore__EmojiModel*)self, column, order);
}

void k_textemoticonscore__emojimodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    TextEmoticonsCore__EmojiModel_OnSort((TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

QModelIndex* k_textemoticonscore__emojimodel_buddy(const void* self, const void* index) {
    return TextEmoticonsCore__EmojiModel_Buddy((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)index);
}

QModelIndex* k_textemoticonscore__emojimodel_super_buddy(const void* self, const void* index) {
    return TextEmoticonsCore__EmojiModel_SuperBuddy((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)index);
}

void k_textemoticonscore__emojimodel_on_buddy(const void* self, QModelIndex* (*callback)(const void*, const void*)) {
    TextEmoticonsCore__EmojiModel_OnBuddy((const TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_textemoticonscore__emojimodel_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags) {
    libqt_list _arr = TextEmoticonsCore__EmojiModel_Match((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_textemoticonscore__emojimodel_super_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags) {
    libqt_list _arr = TextEmoticonsCore__EmojiModel_SuperMatch((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void k_textemoticonscore__emojimodel_on_match(const void* self, libqt_list /* of QModelIndex* */ (*callback)(const void*, const void*, int, const void*, int, int32_t)) {
    TextEmoticonsCore__EmojiModel_OnMatch((const TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

QSize* k_textemoticonscore__emojimodel_span(const void* self, const void* index) {
    return TextEmoticonsCore__EmojiModel_Span((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)index);
}

QSize* k_textemoticonscore__emojimodel_super_span(const void* self, const void* index) {
    return TextEmoticonsCore__EmojiModel_SuperSpan((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)index);
}

void k_textemoticonscore__emojimodel_on_span(const void* self, QSize* (*callback)(const void*, const void*)) {
    TextEmoticonsCore__EmojiModel_OnSpan((const TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ k_textemoticonscore__emojimodel_role_names(const void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = TextEmoticonsCore__EmojiModel_RoleNames((TextEmoticonsCore__EmojiModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_textemoticonscore__emojimodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_textemoticonscore__emojimodel_role_names\n");
            abort();
        }
        memcpy(_ret_values[i], _out_values[i].data, _out_values[i].len);
        _ret_values[i][_out_values[i].len] = '\0';
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_values[i].data);
    }
    free(_out.values);
    return _ret;
}

libqt_map /* of int to char* */ k_textemoticonscore__emojimodel_super_role_names(const void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = TextEmoticonsCore__EmojiModel_SuperRoleNames((TextEmoticonsCore__EmojiModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_textemoticonscore__emojimodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_textemoticonscore__emojimodel_role_names\n");
            abort();
        }
        memcpy(_ret_values[i], _out_values[i].data, _out_values[i].len);
        _ret_values[i][_out_values[i].len] = '\0';
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_values[i].data);
    }
    free(_out.values);
    return _ret;
}

void k_textemoticonscore__emojimodel_on_role_names(const void* self, libqt_map /* of int to char* */ (*callback)(const void*)) {
    TextEmoticonsCore__EmojiModel_OnRoleNames((const TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_multi_data(const void* self, const void* index, void* roleDataSpan) {
    TextEmoticonsCore__EmojiModel_MultiData((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_textemoticonscore__emojimodel_super_multi_data(const void* self, const void* index, void* roleDataSpan) {
    TextEmoticonsCore__EmojiModel_SuperMultiData((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_textemoticonscore__emojimodel_on_multi_data(const void* self, void (*callback)(const void*, const void*, void*)) {
    TextEmoticonsCore__EmojiModel_OnMultiData((const TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojimodel_submit(void* self) {
    return TextEmoticonsCore__EmojiModel_Submit((TextEmoticonsCore__EmojiModel*)self);
}

bool k_textemoticonscore__emojimodel_super_submit(void* self) {
    return TextEmoticonsCore__EmojiModel_SuperSubmit((TextEmoticonsCore__EmojiModel*)self);
}

void k_textemoticonscore__emojimodel_on_submit(void* self, bool (*callback)(void*)) {
    TextEmoticonsCore__EmojiModel_OnSubmit((TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_revert(void* self) {
    TextEmoticonsCore__EmojiModel_Revert((TextEmoticonsCore__EmojiModel*)self);
}

void k_textemoticonscore__emojimodel_super_revert(void* self) {
    TextEmoticonsCore__EmojiModel_SuperRevert((TextEmoticonsCore__EmojiModel*)self);
}

void k_textemoticonscore__emojimodel_on_revert(void* self, void (*callback)(void*)) {
    TextEmoticonsCore__EmojiModel_OnRevert((TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_reset_internal_data(void* self) {
    TextEmoticonsCore__EmojiModel_ResetInternalData((TextEmoticonsCore__EmojiModel*)self);
}

void k_textemoticonscore__emojimodel_super_reset_internal_data(void* self) {
    TextEmoticonsCore__EmojiModel_SuperResetInternalData((TextEmoticonsCore__EmojiModel*)self);
}

void k_textemoticonscore__emojimodel_on_reset_internal_data(void* self, void (*callback)(void*)) {
    TextEmoticonsCore__EmojiModel_OnResetInternalData((TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojimodel_event(void* self, void* event) {
    return TextEmoticonsCore__EmojiModel_Event((TextEmoticonsCore__EmojiModel*)self, (QEvent*)event);
}

bool k_textemoticonscore__emojimodel_super_event(void* self, void* event) {
    return TextEmoticonsCore__EmojiModel_SuperEvent((TextEmoticonsCore__EmojiModel*)self, (QEvent*)event);
}

void k_textemoticonscore__emojimodel_on_event(void* self, bool (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiModel_OnEvent((TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojimodel_event_filter(void* self, void* watched, void* event) {
    return TextEmoticonsCore__EmojiModel_EventFilter((TextEmoticonsCore__EmojiModel*)self, (QObject*)watched, (QEvent*)event);
}

bool k_textemoticonscore__emojimodel_super_event_filter(void* self, void* watched, void* event) {
    return TextEmoticonsCore__EmojiModel_SuperEventFilter((TextEmoticonsCore__EmojiModel*)self, (QObject*)watched, (QEvent*)event);
}

void k_textemoticonscore__emojimodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    TextEmoticonsCore__EmojiModel_OnEventFilter((TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_timer_event(void* self, void* event) {
    TextEmoticonsCore__EmojiModel_TimerEvent((TextEmoticonsCore__EmojiModel*)self, (QTimerEvent*)event);
}

void k_textemoticonscore__emojimodel_super_timer_event(void* self, void* event) {
    TextEmoticonsCore__EmojiModel_SuperTimerEvent((TextEmoticonsCore__EmojiModel*)self, (QTimerEvent*)event);
}

void k_textemoticonscore__emojimodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiModel_OnTimerEvent((TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_child_event(void* self, void* event) {
    TextEmoticonsCore__EmojiModel_ChildEvent((TextEmoticonsCore__EmojiModel*)self, (QChildEvent*)event);
}

void k_textemoticonscore__emojimodel_super_child_event(void* self, void* event) {
    TextEmoticonsCore__EmojiModel_SuperChildEvent((TextEmoticonsCore__EmojiModel*)self, (QChildEvent*)event);
}

void k_textemoticonscore__emojimodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiModel_OnChildEvent((TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_custom_event(void* self, void* event) {
    TextEmoticonsCore__EmojiModel_CustomEvent((TextEmoticonsCore__EmojiModel*)self, (QEvent*)event);
}

void k_textemoticonscore__emojimodel_super_custom_event(void* self, void* event) {
    TextEmoticonsCore__EmojiModel_SuperCustomEvent((TextEmoticonsCore__EmojiModel*)self, (QEvent*)event);
}

void k_textemoticonscore__emojimodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiModel_OnCustomEvent((TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_connect_notify(void* self, const void* signal) {
    TextEmoticonsCore__EmojiModel_ConnectNotify((TextEmoticonsCore__EmojiModel*)self, (QMetaMethod*)signal);
}

void k_textemoticonscore__emojimodel_super_connect_notify(void* self, const void* signal) {
    TextEmoticonsCore__EmojiModel_SuperConnectNotify((TextEmoticonsCore__EmojiModel*)self, (QMetaMethod*)signal);
}

void k_textemoticonscore__emojimodel_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    TextEmoticonsCore__EmojiModel_OnConnectNotify((TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_disconnect_notify(void* self, const void* signal) {
    TextEmoticonsCore__EmojiModel_DisconnectNotify((TextEmoticonsCore__EmojiModel*)self, (QMetaMethod*)signal);
}

void k_textemoticonscore__emojimodel_super_disconnect_notify(void* self, const void* signal) {
    TextEmoticonsCore__EmojiModel_SuperDisconnectNotify((TextEmoticonsCore__EmojiModel*)self, (QMetaMethod*)signal);
}

void k_textemoticonscore__emojimodel_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    TextEmoticonsCore__EmojiModel_OnDisconnectNotify((TextEmoticonsCore__EmojiModel*)self, (intptr_t)callback);
}

QModelIndex* k_textemoticonscore__emojimodel_create_index(const void* self, int row, int column) {
    return TextEmoticonsCore__EmojiModel_CreateIndex((TextEmoticonsCore__EmojiModel*)self, row, column);
}

void k_textemoticonscore__emojimodel_encode_data(const void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    TextEmoticonsCore__EmojiModel_EncodeData((TextEmoticonsCore__EmojiModel*)self, indexes, (QDataStream*)stream);
}

bool k_textemoticonscore__emojimodel_decode_data(void* self, int row, int column, const void* parent, void* stream) {
    return TextEmoticonsCore__EmojiModel_DecodeData((TextEmoticonsCore__EmojiModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void k_textemoticonscore__emojimodel_begin_insert_rows(void* self, const void* parent, int first, int last) {
    TextEmoticonsCore__EmojiModel_BeginInsertRows((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)parent, first, last);
}

void k_textemoticonscore__emojimodel_end_insert_rows(void* self) {
    TextEmoticonsCore__EmojiModel_EndInsertRows((TextEmoticonsCore__EmojiModel*)self);
}

void k_textemoticonscore__emojimodel_begin_remove_rows(void* self, const void* parent, int first, int last) {
    TextEmoticonsCore__EmojiModel_BeginRemoveRows((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)parent, first, last);
}

void k_textemoticonscore__emojimodel_end_remove_rows(void* self) {
    TextEmoticonsCore__EmojiModel_EndRemoveRows((TextEmoticonsCore__EmojiModel*)self);
}

bool k_textemoticonscore__emojimodel_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow) {
    return TextEmoticonsCore__EmojiModel_BeginMoveRows((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void k_textemoticonscore__emojimodel_end_move_rows(void* self) {
    TextEmoticonsCore__EmojiModel_EndMoveRows((TextEmoticonsCore__EmojiModel*)self);
}

void k_textemoticonscore__emojimodel_begin_insert_columns(void* self, const void* parent, int first, int last) {
    TextEmoticonsCore__EmojiModel_BeginInsertColumns((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)parent, first, last);
}

void k_textemoticonscore__emojimodel_end_insert_columns(void* self) {
    TextEmoticonsCore__EmojiModel_EndInsertColumns((TextEmoticonsCore__EmojiModel*)self);
}

void k_textemoticonscore__emojimodel_begin_remove_columns(void* self, const void* parent, int first, int last) {
    TextEmoticonsCore__EmojiModel_BeginRemoveColumns((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)parent, first, last);
}

void k_textemoticonscore__emojimodel_end_remove_columns(void* self) {
    TextEmoticonsCore__EmojiModel_EndRemoveColumns((TextEmoticonsCore__EmojiModel*)self);
}

bool k_textemoticonscore__emojimodel_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn) {
    return TextEmoticonsCore__EmojiModel_BeginMoveColumns((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void k_textemoticonscore__emojimodel_end_move_columns(void* self) {
    TextEmoticonsCore__EmojiModel_EndMoveColumns((TextEmoticonsCore__EmojiModel*)self);
}

void k_textemoticonscore__emojimodel_begin_reset_model(void* self) {
    TextEmoticonsCore__EmojiModel_BeginResetModel((TextEmoticonsCore__EmojiModel*)self);
}

void k_textemoticonscore__emojimodel_end_reset_model(void* self) {
    TextEmoticonsCore__EmojiModel_EndResetModel((TextEmoticonsCore__EmojiModel*)self);
}

void k_textemoticonscore__emojimodel_change_persistent_index(void* self, const void* from, const void* to) {
    TextEmoticonsCore__EmojiModel_ChangePersistentIndex((TextEmoticonsCore__EmojiModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_textemoticonscore__emojimodel_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    TextEmoticonsCore__EmojiModel_ChangePersistentIndexList((TextEmoticonsCore__EmojiModel*)self, from, to);
}

libqt_list /* of QModelIndex* */ k_textemoticonscore__emojimodel_persistent_index_list(const void* self) {
    libqt_list _arr = TextEmoticonsCore__EmojiModel_PersistentIndexList((TextEmoticonsCore__EmojiModel*)self);
    return _arr;
}

QObject* k_textemoticonscore__emojimodel_sender(const void* self) {
    return TextEmoticonsCore__EmojiModel_Sender((TextEmoticonsCore__EmojiModel*)self);
}

int32_t k_textemoticonscore__emojimodel_sender_signal_index(const void* self) {
    return TextEmoticonsCore__EmojiModel_SenderSignalIndex((TextEmoticonsCore__EmojiModel*)self);
}

int32_t k_textemoticonscore__emojimodel_receivers(const void* self, const char* signal) {
    return TextEmoticonsCore__EmojiModel_Receivers((TextEmoticonsCore__EmojiModel*)self, signal);
}

bool k_textemoticonscore__emojimodel_is_signal_connected(const void* self, const void* signal) {
    return TextEmoticonsCore__EmojiModel_IsSignalConnected((TextEmoticonsCore__EmojiModel*)self, (QMetaMethod*)signal);
}

void k_textemoticonscore__emojimodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_on_rows_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_on_rows_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_on_columns_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_on_columns_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_on_rows_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_on_columns_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodel_delete(void* self) {
    TextEmoticonsCore__EmojiModel_Delete((TextEmoticonsCore__EmojiModel*)(self));
}
