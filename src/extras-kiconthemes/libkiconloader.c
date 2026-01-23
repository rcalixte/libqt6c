#include "libkiconcolors.hpp"
#include "libkiconeffect.hpp"
#include "libkicontheme.hpp"
#include "../libqcoreevent.hpp"
#include "../libqicon.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqmovie.hpp"
#include "../libqobject.hpp"
#include "../libqpalette.hpp"
#include "../libqpixmap.hpp"
#include "libkiconloader.hpp"
#include "libkiconloader.h"

KIconLoader* k_iconloader_new() {
    return KIconLoader_new();
}

KIconLoader* k_iconloader_new2(const char* appname) {
    return KIconLoader_new2(qstring(appname));
}

KIconLoader* k_iconloader_new3(const char* appname, const char* extraSearchPaths[static 1]) {
    size_t extraSearchPaths_len = libqt_strv_length(extraSearchPaths);
    libqt_string* extraSearchPaths_qstr = (libqt_string*)malloc(extraSearchPaths_len * sizeof(libqt_string));
    if (extraSearchPaths_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_iconloader_new3\n");
        abort();
    }
    for (size_t i = 0; i < extraSearchPaths_len; ++i) {
        extraSearchPaths_qstr[i] = qstring(extraSearchPaths[i]);
    }
    libqt_list extraSearchPaths_list = qlist(extraSearchPaths_qstr, extraSearchPaths_len);

    KIconLoader* _out = KIconLoader_new3(qstring(appname), extraSearchPaths_list);
    free(extraSearchPaths_qstr);
    return _out;
}

KIconLoader* k_iconloader_new4(const char* appname, const char* extraSearchPaths[static 1], void* parent) {
    size_t extraSearchPaths_len = libqt_strv_length(extraSearchPaths);
    libqt_string* extraSearchPaths_qstr = (libqt_string*)malloc(extraSearchPaths_len * sizeof(libqt_string));
    if (extraSearchPaths_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_iconloader_new4\n");
        abort();
    }
    for (size_t i = 0; i < extraSearchPaths_len; ++i) {
        extraSearchPaths_qstr[i] = qstring(extraSearchPaths[i]);
    }
    libqt_list extraSearchPaths_list = qlist(extraSearchPaths_qstr, extraSearchPaths_len);

    KIconLoader* _out = KIconLoader_new4(qstring(appname), extraSearchPaths_list, (QObject*)parent);
    free(extraSearchPaths_qstr);
    return _out;
}

const QMetaObject* k_iconloader_meta_object(void* self) {
    return KIconLoader_MetaObject((KIconLoader*)self);
}

void* k_iconloader_metacast(void* self, const char* param1) {
    return KIconLoader_Metacast((KIconLoader*)self, param1);
}

int32_t k_iconloader_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIconLoader_Metacall((KIconLoader*)self, param1, param2, param3);
}

void k_iconloader_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KIconLoader_OnMetacall((KIconLoader*)self, (intptr_t)callback);
}

int32_t k_iconloader_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIconLoader_QBaseMetacall((KIconLoader*)self, param1, param2, param3);
}

const char* k_iconloader_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KIconLoader* k_iconloader_global() {
    return KIconLoader_Global();
}

void k_iconloader_add_app_dir(void* self, const char* appname) {
    KIconLoader_AddAppDir((KIconLoader*)self, qstring(appname));
}

QPixmap* k_iconloader_load_icon(void* self, const char* name, int32_t group) {
    return KIconLoader_LoadIcon((KIconLoader*)self, qstring(name), group);
}

QPixmap* k_iconloader_load_mime_type_icon(void* self, const char* iconName, int32_t group) {
    return KIconLoader_LoadMimeTypeIcon((KIconLoader*)self, qstring(iconName), group);
}

const char* k_iconloader_icon_path(void* self, const char* name, int group_or_size) {
    libqt_string _str = KIconLoader_IconPath((KIconLoader*)self, qstring(name), group_or_size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_iconloader_icon_path2(void* self, const char* name, int group_or_size, bool canReturnNull, double scale) {
    libqt_string _str = KIconLoader_IconPath2((KIconLoader*)self, qstring(name), group_or_size, canReturnNull, scale);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QMovie* k_iconloader_load_movie(void* self, const char* name, int32_t group) {
    return KIconLoader_LoadMovie((KIconLoader*)self, qstring(name), group);
}

const char* k_iconloader_movie_path(void* self, const char* name, int32_t group) {
    libqt_string _str = KIconLoader_MoviePath((KIconLoader*)self, qstring(name), group);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_iconloader_load_animated(void* self, const char* name, int32_t group) {
    libqt_list _arr = KIconLoader_LoadAnimated((KIconLoader*)self, qstring(name), group);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_iconloader_load_animated\n");
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

const char** k_iconloader_query_icons(void* self) {
    libqt_list _arr = KIconLoader_QueryIcons((KIconLoader*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_iconloader_query_icons\n");
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

const char** k_iconloader_query_icons2(void* self, int group_or_size) {
    libqt_list _arr = KIconLoader_QueryIcons2((KIconLoader*)self, group_or_size);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_iconloader_query_icons2\n");
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

const char** k_iconloader_query_icons_by_context(void* self, int group_or_size) {
    libqt_list _arr = KIconLoader_QueryIconsByContext((KIconLoader*)self, group_or_size);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_iconloader_query_icons_by_context\n");
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

bool k_iconloader_has_context(void* self, int32_t context) {
    return KIconLoader_HasContext((KIconLoader*)self, context);
}

const char** k_iconloader_query_icons_by_dir(void* self, const char* iconsDir) {
    libqt_list _arr = KIconLoader_QueryIconsByDir((KIconLoader*)self, qstring(iconsDir));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_iconloader_query_icons_by_dir\n");
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

const char** k_iconloader_search_paths(void* self) {
    libqt_list _arr = KIconLoader_SearchPaths((KIconLoader*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_iconloader_search_paths\n");
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

int32_t k_iconloader_current_size(void* self, int32_t group) {
    return KIconLoader_CurrentSize((KIconLoader*)self, group);
}

KIconTheme* k_iconloader_theme(void* self) {
    return KIconLoader_Theme((KIconLoader*)self);
}

KIconEffect* k_iconloader_icon_effect(void* self) {
    return KIconLoader_IconEffect((KIconLoader*)self);
}

void k_iconloader_reconfigure(void* self, const char* appname) {
    KIconLoader_Reconfigure((KIconLoader*)self, qstring(appname));
}

QPixmap* k_iconloader_unknown() {
    return KIconLoader_Unknown();
}

void k_iconloader_draw_overlays(void* self, const char* overlays[static 1], void* pixmap, int32_t group) {
    size_t overlays_len = libqt_strv_length(overlays);
    libqt_string* overlays_qstr = (libqt_string*)malloc(overlays_len * sizeof(libqt_string));
    if (overlays_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_iconloader_draw_overlays\n");
        abort();
    }
    for (size_t i = 0; i < overlays_len; ++i) {
        overlays_qstr[i] = qstring(overlays[i]);
    }
    libqt_list overlays_list = qlist(overlays_qstr, overlays_len);
    KIconLoader_DrawOverlays((KIconLoader*)self, overlays_list, (QPixmap*)pixmap, group);
    free(overlays_qstr);
}

bool k_iconloader_has_icon(void* self, const char* iconName) {
    return KIconLoader_HasIcon((KIconLoader*)self, qstring(iconName));
}

void k_iconloader_set_custom_palette(void* self, void* palette) {
    KIconLoader_SetCustomPalette((KIconLoader*)self, (QPalette*)palette);
}

QPalette* k_iconloader_custom_palette(void* self) {
    return KIconLoader_CustomPalette((KIconLoader*)self);
}

void k_iconloader_reset_palette(void* self) {
    KIconLoader_ResetPalette((KIconLoader*)self);
}

bool k_iconloader_has_custom_palette(void* self) {
    return KIconLoader_HasCustomPalette((KIconLoader*)self);
}

void k_iconloader_new_icon_loader(void* self) {
    KIconLoader_NewIconLoader((KIconLoader*)self);
}

void k_iconloader_emit_change(int32_t group) {
    KIconLoader_EmitChange(group);
}

void k_iconloader_icon_loader_settings_changed(void* self) {
    KIconLoader_IconLoaderSettingsChanged((KIconLoader*)self);
}

void k_iconloader_on_icon_loader_settings_changed(void* self, void (*callback)(void*)) {
    KIconLoader_Connect_IconLoaderSettingsChanged((KIconLoader*)self, (intptr_t)callback);
}

void k_iconloader_icon_changed(void* self, int group) {
    KIconLoader_IconChanged((KIconLoader*)self, group);
}

void k_iconloader_on_icon_changed(void* self, void (*callback)(void*, int)) {
    KIconLoader_Connect_IconChanged((KIconLoader*)self, (intptr_t)callback);
}

const char* k_iconloader_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_iconloader_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_iconloader_add_app_dir2(void* self, const char* appname, const char* themeBaseDir) {
    KIconLoader_AddAppDir2((KIconLoader*)self, qstring(appname), qstring(themeBaseDir));
}

QPixmap* k_iconloader_load_icon3(void* self, const char* name, int32_t group, int size) {
    return KIconLoader_LoadIcon3((KIconLoader*)self, qstring(name), group, size);
}

QPixmap* k_iconloader_load_icon4(void* self, const char* name, int32_t group, int size, int state) {
    return KIconLoader_LoadIcon4((KIconLoader*)self, qstring(name), group, size, state);
}

QPixmap* k_iconloader_load_icon5(void* self, const char* name, int32_t group, int size, int state, const char* overlays[static 1]) {
    size_t overlays_len = libqt_strv_length(overlays);
    libqt_string* overlays_qstr = (libqt_string*)malloc(overlays_len * sizeof(libqt_string));
    if (overlays_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_iconloader_load_icon5\n");
        abort();
    }
    for (size_t i = 0; i < overlays_len; ++i) {
        overlays_qstr[i] = qstring(overlays[i]);
    }
    libqt_list overlays_list = qlist(overlays_qstr, overlays_len);
    QPixmap* _out = KIconLoader_LoadIcon5((KIconLoader*)self, qstring(name), group, size, state, overlays_list);
    free(overlays_qstr);
    return _out;
}

QPixmap* k_iconloader_load_mime_type_icon3(void* self, const char* iconName, int32_t group, int size) {
    return KIconLoader_LoadMimeTypeIcon3((KIconLoader*)self, qstring(iconName), group, size);
}

QPixmap* k_iconloader_load_mime_type_icon4(void* self, const char* iconName, int32_t group, int size, int state) {
    return KIconLoader_LoadMimeTypeIcon4((KIconLoader*)self, qstring(iconName), group, size, state);
}

QPixmap* k_iconloader_load_mime_type_icon5(void* self, const char* iconName, int32_t group, int size, int state, const char* overlays[static 1]) {
    size_t overlays_len = libqt_strv_length(overlays);
    libqt_string* overlays_qstr = (libqt_string*)malloc(overlays_len * sizeof(libqt_string));
    if (overlays_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_iconloader_load_mime_type_icon5\n");
        abort();
    }
    for (size_t i = 0; i < overlays_len; ++i) {
        overlays_qstr[i] = qstring(overlays[i]);
    }
    libqt_list overlays_list = qlist(overlays_qstr, overlays_len);
    QPixmap* _out = KIconLoader_LoadMimeTypeIcon5((KIconLoader*)self, qstring(iconName), group, size, state, overlays_list);
    free(overlays_qstr);
    return _out;
}

const char* k_iconloader_icon_path3(void* self, const char* name, int group_or_size, bool canReturnNull) {
    libqt_string _str = KIconLoader_IconPath3((KIconLoader*)self, qstring(name), group_or_size, canReturnNull);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QMovie* k_iconloader_load_movie3(void* self, const char* name, int32_t group, int size) {
    return KIconLoader_LoadMovie3((KIconLoader*)self, qstring(name), group, size);
}

QMovie* k_iconloader_load_movie4(void* self, const char* name, int32_t group, int size, void* parent) {
    return KIconLoader_LoadMovie4((KIconLoader*)self, qstring(name), group, size, (QObject*)parent);
}

const char* k_iconloader_movie_path3(void* self, const char* name, int32_t group, int size) {
    libqt_string _str = KIconLoader_MoviePath3((KIconLoader*)self, qstring(name), group, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_iconloader_load_animated3(void* self, const char* name, int32_t group, int size) {
    libqt_list _arr = KIconLoader_LoadAnimated3((KIconLoader*)self, qstring(name), group, size);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_iconloader_load_animated3\n");
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

const char** k_iconloader_query_icons22(void* self, int group_or_size, int32_t context) {
    libqt_list _arr = KIconLoader_QueryIcons22((KIconLoader*)self, group_or_size, context);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_iconloader_query_icons22\n");
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

const char** k_iconloader_query_icons_by_context2(void* self, int group_or_size, int32_t context) {
    libqt_list _arr = KIconLoader_QueryIconsByContext2((KIconLoader*)self, group_or_size, context);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_iconloader_query_icons_by_context2\n");
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

void k_iconloader_reconfigure2(void* self, const char* appname, const char* extraSearchPaths[static 1]) {
    size_t extraSearchPaths_len = libqt_strv_length(extraSearchPaths);
    libqt_string* extraSearchPaths_qstr = (libqt_string*)malloc(extraSearchPaths_len * sizeof(libqt_string));
    if (extraSearchPaths_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_iconloader_reconfigure2\n");
        abort();
    }
    for (size_t i = 0; i < extraSearchPaths_len; ++i) {
        extraSearchPaths_qstr[i] = qstring(extraSearchPaths[i]);
    }
    libqt_list extraSearchPaths_list = qlist(extraSearchPaths_qstr, extraSearchPaths_len);
    KIconLoader_Reconfigure2((KIconLoader*)self, qstring(appname), extraSearchPaths_list);
    free(extraSearchPaths_qstr);
}

void k_iconloader_draw_overlays4(void* self, const char* overlays[static 1], void* pixmap, int32_t group, int state) {
    size_t overlays_len = libqt_strv_length(overlays);
    libqt_string* overlays_qstr = (libqt_string*)malloc(overlays_len * sizeof(libqt_string));
    if (overlays_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_iconloader_draw_overlays4\n");
        abort();
    }
    for (size_t i = 0; i < overlays_len; ++i) {
        overlays_qstr[i] = qstring(overlays[i]);
    }
    libqt_list overlays_list = qlist(overlays_qstr, overlays_len);
    KIconLoader_DrawOverlays4((KIconLoader*)self, overlays_list, (QPixmap*)pixmap, group, state);
    free(overlays_qstr);
}

const char* k_iconloader_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_iconloader_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_iconloader_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_iconloader_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_iconloader_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_iconloader_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_iconloader_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_iconloader_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_iconloader_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_iconloader_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_iconloader_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_iconloader_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_iconloader_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_iconloader_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_iconloader_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_iconloader_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_iconloader_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_iconloader_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_iconloader_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_iconloader_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_iconloader_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_iconloader_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_iconloader_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_iconloader_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_iconloader_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_iconloader_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_iconloader_dynamic_property_names\n");
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

QBindingStorage* k_iconloader_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_iconloader_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_iconloader_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_iconloader_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_iconloader_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_iconloader_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_iconloader_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_iconloader_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_iconloader_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_iconloader_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_iconloader_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_iconloader_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_iconloader_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_iconloader_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_iconloader_event(void* self, void* event) {
    return KIconLoader_Event((KIconLoader*)self, (QEvent*)event);
}

bool k_iconloader_qbase_event(void* self, void* event) {
    return KIconLoader_QBaseEvent((KIconLoader*)self, (QEvent*)event);
}

void k_iconloader_on_event(void* self, bool (*callback)(void*, void*)) {
    KIconLoader_OnEvent((KIconLoader*)self, (intptr_t)callback);
}

bool k_iconloader_event_filter(void* self, void* watched, void* event) {
    return KIconLoader_EventFilter((KIconLoader*)self, (QObject*)watched, (QEvent*)event);
}

bool k_iconloader_qbase_event_filter(void* self, void* watched, void* event) {
    return KIconLoader_QBaseEventFilter((KIconLoader*)self, (QObject*)watched, (QEvent*)event);
}

void k_iconloader_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KIconLoader_OnEventFilter((KIconLoader*)self, (intptr_t)callback);
}

void k_iconloader_timer_event(void* self, void* event) {
    KIconLoader_TimerEvent((KIconLoader*)self, (QTimerEvent*)event);
}

void k_iconloader_qbase_timer_event(void* self, void* event) {
    KIconLoader_QBaseTimerEvent((KIconLoader*)self, (QTimerEvent*)event);
}

void k_iconloader_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KIconLoader_OnTimerEvent((KIconLoader*)self, (intptr_t)callback);
}

void k_iconloader_child_event(void* self, void* event) {
    KIconLoader_ChildEvent((KIconLoader*)self, (QChildEvent*)event);
}

void k_iconloader_qbase_child_event(void* self, void* event) {
    KIconLoader_QBaseChildEvent((KIconLoader*)self, (QChildEvent*)event);
}

void k_iconloader_on_child_event(void* self, void (*callback)(void*, void*)) {
    KIconLoader_OnChildEvent((KIconLoader*)self, (intptr_t)callback);
}

void k_iconloader_custom_event(void* self, void* event) {
    KIconLoader_CustomEvent((KIconLoader*)self, (QEvent*)event);
}

void k_iconloader_qbase_custom_event(void* self, void* event) {
    KIconLoader_QBaseCustomEvent((KIconLoader*)self, (QEvent*)event);
}

void k_iconloader_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KIconLoader_OnCustomEvent((KIconLoader*)self, (intptr_t)callback);
}

void k_iconloader_connect_notify(void* self, void* signal) {
    KIconLoader_ConnectNotify((KIconLoader*)self, (QMetaMethod*)signal);
}

void k_iconloader_qbase_connect_notify(void* self, void* signal) {
    KIconLoader_QBaseConnectNotify((KIconLoader*)self, (QMetaMethod*)signal);
}

void k_iconloader_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KIconLoader_OnConnectNotify((KIconLoader*)self, (intptr_t)callback);
}

void k_iconloader_disconnect_notify(void* self, void* signal) {
    KIconLoader_DisconnectNotify((KIconLoader*)self, (QMetaMethod*)signal);
}

void k_iconloader_qbase_disconnect_notify(void* self, void* signal) {
    KIconLoader_QBaseDisconnectNotify((KIconLoader*)self, (QMetaMethod*)signal);
}

void k_iconloader_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KIconLoader_OnDisconnectNotify((KIconLoader*)self, (intptr_t)callback);
}

QObject* k_iconloader_sender(void* self) {
    return KIconLoader_Sender((KIconLoader*)self);
}

QObject* k_iconloader_qbase_sender(void* self) {
    return KIconLoader_QBaseSender((KIconLoader*)self);
}

void k_iconloader_on_sender(void* self, QObject* (*callback)()) {
    KIconLoader_OnSender((KIconLoader*)self, (intptr_t)callback);
}

int32_t k_iconloader_sender_signal_index(void* self) {
    return KIconLoader_SenderSignalIndex((KIconLoader*)self);
}

int32_t k_iconloader_qbase_sender_signal_index(void* self) {
    return KIconLoader_QBaseSenderSignalIndex((KIconLoader*)self);
}

void k_iconloader_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KIconLoader_OnSenderSignalIndex((KIconLoader*)self, (intptr_t)callback);
}

int32_t k_iconloader_receivers(void* self, const char* signal) {
    return KIconLoader_Receivers((KIconLoader*)self, signal);
}

int32_t k_iconloader_qbase_receivers(void* self, const char* signal) {
    return KIconLoader_QBaseReceivers((KIconLoader*)self, signal);
}

void k_iconloader_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KIconLoader_OnReceivers((KIconLoader*)self, (intptr_t)callback);
}

bool k_iconloader_is_signal_connected(void* self, void* signal) {
    return KIconLoader_IsSignalConnected((KIconLoader*)self, (QMetaMethod*)signal);
}

bool k_iconloader_qbase_is_signal_connected(void* self, void* signal) {
    return KIconLoader_QBaseIsSignalConnected((KIconLoader*)self, (QMetaMethod*)signal);
}

void k_iconloader_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KIconLoader_OnIsSignalConnected((KIconLoader*)self, (intptr_t)callback);
}

void k_iconloader_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_iconloader_delete(void* self) {
    KIconLoader_Delete((KIconLoader*)(self));
}

QIcon* k_de_icon(const char* param1, void* param2) {
    return KDE_Icon(qstring(param1), (KIconLoader*)param2);
}

QIcon* k_de_icon2(const char* param1, void* param2, void* param3) {
    return KDE_Icon2(qstring(param1), (KIconColors*)param2, (KIconLoader*)param3);
}

QIcon* k_de_icon3(const char* param1, const char* param2[static 1], void* param3) {
    size_t param2_len = libqt_strv_length(param2);
    libqt_string* param2_qstr = (libqt_string*)malloc(param2_len * sizeof(libqt_string));
    if (param2_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_de_icon3\n");
        abort();
    }
    for (size_t i = 0; i < param2_len; ++i) {
        param2_qstr[i] = qstring(param2[i]);
    }
    libqt_list param2_list = qlist(param2_qstr, param2_len);
    QIcon* _out = KDE_Icon3(qstring(param1), param2_list, (KIconLoader*)param3);
    free(param2_qstr);
    return _out;
}
