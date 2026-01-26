#include "../extras-attica/libprovider.hpp"
#include "libcategorymetadata.hpp"
#include "libentry.hpp"
#include "libprovidercore.hpp"
#include "libresultsstream.hpp"
#include "libsearchpreset.hpp"
#include "libsearchrequest.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libenginebase.hpp"
#include "libenginebase.h"

KNSCore__EngineBase* k_nscore__enginebase_new() {
    return KNSCore__EngineBase_new();
}

KNSCore__EngineBase* k_nscore__enginebase_new2(void* parent) {
    return KNSCore__EngineBase_new2((QObject*)parent);
}

const QMetaObject* k_nscore__enginebase_meta_object(void* self) {
    return KNSCore__EngineBase_MetaObject((KNSCore__EngineBase*)self);
}

void k_nscore__enginebase_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KNSCore__EngineBase_OnMetaObject((KNSCore__EngineBase*)self, (intptr_t)callback);
}

const QMetaObject* k_nscore__enginebase_qbase_meta_object(void* self) {
    return KNSCore__EngineBase_QBaseMetaObject((KNSCore__EngineBase*)self);
}

void* k_nscore__enginebase_metacast(void* self, const char* param1) {
    return KNSCore__EngineBase_Metacast((KNSCore__EngineBase*)self, param1);
}

void k_nscore__enginebase_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KNSCore__EngineBase_OnMetacast((KNSCore__EngineBase*)self, (intptr_t)callback);
}

void* k_nscore__enginebase_qbase_metacast(void* self, const char* param1) {
    return KNSCore__EngineBase_QBaseMetacast((KNSCore__EngineBase*)self, param1);
}

int32_t k_nscore__enginebase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KNSCore__EngineBase_Metacall((KNSCore__EngineBase*)self, param1, param2, param3);
}

void k_nscore__enginebase_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KNSCore__EngineBase_OnMetacall((KNSCore__EngineBase*)self, (intptr_t)callback);
}

int32_t k_nscore__enginebase_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KNSCore__EngineBase_QBaseMetacall((KNSCore__EngineBase*)self, param1, param2, param3);
}

const char* k_nscore__enginebase_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_nscore__enginebase_available_config_files() {
    libqt_list _arr = KNSCore__EngineBase_AvailableConfigFiles();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__enginebase_available_config_files\n");
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

bool k_nscore__enginebase_init(void* self, const char* configfile) {
    return KNSCore__EngineBase_Init((KNSCore__EngineBase*)self, qstring(configfile));
}

void k_nscore__enginebase_on_init(void* self, bool (*callback)(void*, const char*)) {
    KNSCore__EngineBase_OnInit((KNSCore__EngineBase*)self, (intptr_t)callback);
}

bool k_nscore__enginebase_qbase_init(void* self, const char* configfile) {
    return KNSCore__EngineBase_QBaseInit((KNSCore__EngineBase*)self, qstring(configfile));
}

const char* k_nscore__enginebase_name(void* self) {
    libqt_string _str = KNSCore__EngineBase_Name((KNSCore__EngineBase*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_nscore__enginebase_use_label(void* self) {
    libqt_string _str = KNSCore__EngineBase_UseLabel((KNSCore__EngineBase*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__enginebase_use_label_changed(void* self) {
    KNSCore__EngineBase_UseLabelChanged((KNSCore__EngineBase*)self);
}

bool k_nscore__enginebase_upload_enabled(void* self) {
    return KNSCore__EngineBase_UploadEnabled((KNSCore__EngineBase*)self);
}

void k_nscore__enginebase_upload_enabled_changed(void* self) {
    KNSCore__EngineBase_UploadEnabledChanged((KNSCore__EngineBase*)self);
}

const char** k_nscore__enginebase_categories(void* self) {
    libqt_list _arr = KNSCore__EngineBase_Categories((KNSCore__EngineBase*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__enginebase_categories\n");
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

libqt_list /* of KNSCore__Provider__CategoryMetadata* */ k_nscore__enginebase_categories_metadata(void* self) {
    libqt_list _arr = KNSCore__EngineBase_CategoriesMetadata((KNSCore__EngineBase*)self);
    return _arr;
}

libqt_list /* of KNSCore__CategoryMetadata* */ k_nscore__enginebase_categories_metadata2(void* self) {
    libqt_list _arr = KNSCore__EngineBase_CategoriesMetadata2((KNSCore__EngineBase*)self);
    return _arr;
}

libqt_list /* of KNSCore__Provider__SearchPreset* */ k_nscore__enginebase_search_presets(void* self) {
    libqt_list _arr = KNSCore__EngineBase_SearchPresets((KNSCore__EngineBase*)self);
    return _arr;
}

libqt_list /* of KNSCore__SearchPreset* */ k_nscore__enginebase_search_presets2(void* self) {
    libqt_list _arr = KNSCore__EngineBase_SearchPresets2((KNSCore__EngineBase*)self);
    return _arr;
}

libqt_list /* of Attica__Provider* */ k_nscore__enginebase_attica_providers(void* self) {
    libqt_list _arr = KNSCore__EngineBase_AtticaProviders((KNSCore__EngineBase*)self);
    return _arr;
}

void k_nscore__enginebase_set_tag_filter(void* self, const char* filter[static 1]) {
    size_t filter_len = libqt_strv_length(filter);
    libqt_string* filter_qstr = (libqt_string*)malloc(filter_len * sizeof(libqt_string));
    if (filter_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__enginebase_set_tag_filter\n");
        abort();
    }
    for (size_t i = 0; i < filter_len; ++i) {
        filter_qstr[i] = qstring(filter[i]);
    }
    libqt_list filter_list = qlist(filter_qstr, filter_len);
    KNSCore__EngineBase_SetTagFilter((KNSCore__EngineBase*)self, filter_list);
    free(filter_qstr);
}

const char** k_nscore__enginebase_tag_filter(void* self) {
    libqt_list _arr = KNSCore__EngineBase_TagFilter((KNSCore__EngineBase*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__enginebase_tag_filter\n");
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

void k_nscore__enginebase_add_tag_filter(void* self, const char* filter) {
    KNSCore__EngineBase_AddTagFilter((KNSCore__EngineBase*)self, qstring(filter));
}

void k_nscore__enginebase_set_download_tag_filter(void* self, const char* filter[static 1]) {
    size_t filter_len = libqt_strv_length(filter);
    libqt_string* filter_qstr = (libqt_string*)malloc(filter_len * sizeof(libqt_string));
    if (filter_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__enginebase_set_download_tag_filter\n");
        abort();
    }
    for (size_t i = 0; i < filter_len; ++i) {
        filter_qstr[i] = qstring(filter[i]);
    }
    libqt_list filter_list = qlist(filter_qstr, filter_len);
    KNSCore__EngineBase_SetDownloadTagFilter((KNSCore__EngineBase*)self, filter_list);
    free(filter_qstr);
}

const char** k_nscore__enginebase_download_tag_filter(void* self) {
    libqt_list _arr = KNSCore__EngineBase_DownloadTagFilter((KNSCore__EngineBase*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__enginebase_download_tag_filter\n");
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

void k_nscore__enginebase_add_download_tag_filter(void* self, const char* filter) {
    KNSCore__EngineBase_AddDownloadTagFilter((KNSCore__EngineBase*)self, qstring(filter));
}

bool k_nscore__enginebase_user_can_vote(void* self, void* entry) {
    return KNSCore__EngineBase_UserCanVote((KNSCore__EngineBase*)self, (KNSCore__Entry*)entry);
}

void k_nscore__enginebase_vote(void* self, void* entry, uint32_t rating) {
    KNSCore__EngineBase_Vote((KNSCore__EngineBase*)self, (KNSCore__Entry*)entry, rating);
}

bool k_nscore__enginebase_user_can_become_fan(void* self, void* entry) {
    return KNSCore__EngineBase_UserCanBecomeFan((KNSCore__EngineBase*)self, (KNSCore__Entry*)entry);
}

void k_nscore__enginebase_become_fan(void* self, void* entry) {
    KNSCore__EngineBase_BecomeFan((KNSCore__EngineBase*)self, (KNSCore__Entry*)entry);
}

const char** k_nscore__enginebase_provider_i_ds(void* self) {
    libqt_list _arr = KNSCore__EngineBase_ProviderIDs((KNSCore__EngineBase*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__enginebase_provider_i_ds\n");
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

bool k_nscore__enginebase_has_adoption_command(void* self) {
    return KNSCore__EngineBase_HasAdoptionCommand((KNSCore__EngineBase*)self);
}

KNSCore__ResultsStream* k_nscore__enginebase_search(void* self, void* request) {
    return KNSCore__EngineBase_Search((KNSCore__EngineBase*)self, (KNSCore__Provider__SearchRequest*)request);
}

KNSCore__ResultsStream* k_nscore__enginebase_search2(void* self, void* request) {
    return KNSCore__EngineBase_Search2((KNSCore__EngineBase*)self, (KNSCore__SearchRequest*)request);
}

int32_t k_nscore__enginebase_content_warning_type(void* self) {
    return KNSCore__EngineBase_ContentWarningType((KNSCore__EngineBase*)self);
}

void k_nscore__enginebase_content_warning_type_changed(void* self) {
    KNSCore__EngineBase_ContentWarningTypeChanged((KNSCore__EngineBase*)self);
}

void k_nscore__enginebase_signal_message(void* self, const char* message) {
    KNSCore__EngineBase_SignalMessage((KNSCore__EngineBase*)self, qstring(message));
}

void k_nscore__enginebase_signal_providers_loaded(void* self) {
    KNSCore__EngineBase_SignalProvidersLoaded((KNSCore__EngineBase*)self);
}

void k_nscore__enginebase_signal_error_code(void* self, int32_t errorCode, const char* message, void* metadata) {
    KNSCore__EngineBase_SignalErrorCode((KNSCore__EngineBase*)self, errorCode, qstring(message), (QVariant*)metadata);
}

void k_nscore__enginebase_signal_categories_metadata_loded(void* self, libqt_list /* of KNSCore__Provider__CategoryMetadata* */ categories) {
    KNSCore__EngineBase_SignalCategoriesMetadataLoded((KNSCore__EngineBase*)self, categories);
}

void k_nscore__enginebase_signal_categories_metadata_loaded(void* self, libqt_list /* of KNSCore__CategoryMetadata* */ categories) {
    KNSCore__EngineBase_SignalCategoriesMetadataLoaded((KNSCore__EngineBase*)self, categories);
}

void k_nscore__enginebase_signal_search_presets_loaded(void* self, libqt_list /* of KNSCore__Provider__SearchPreset* */ presets) {
    KNSCore__EngineBase_SignalSearchPresetsLoaded((KNSCore__EngineBase*)self, presets);
}

void k_nscore__enginebase_signal_search_presets_loaded2(void* self, libqt_list /* of KNSCore__SearchPreset* */ presets) {
    KNSCore__EngineBase_SignalSearchPresetsLoaded2((KNSCore__EngineBase*)self, presets);
}

void k_nscore__enginebase_providers_changed(void* self) {
    KNSCore__EngineBase_ProvidersChanged((KNSCore__EngineBase*)self);
}

void k_nscore__enginebase_loading_provider(void* self) {
    KNSCore__EngineBase_LoadingProvider((KNSCore__EngineBase*)self);
}

void k_nscore__enginebase_provider_added(void* self, void* provider) {
    KNSCore__EngineBase_ProviderAdded((KNSCore__EngineBase*)self, (KNSCore__ProviderCore*)provider);
}

void k_nscore__enginebase_update_status(void* self) {
    KNSCore__EngineBase_UpdateStatus((KNSCore__EngineBase*)self);
}

void k_nscore__enginebase_on_update_status(void* self, void (*callback)()) {
    KNSCore__EngineBase_OnUpdateStatus((KNSCore__EngineBase*)self, (intptr_t)callback);
}

void k_nscore__enginebase_qbase_update_status(void* self) {
    KNSCore__EngineBase_QBaseUpdateStatus((KNSCore__EngineBase*)self);
}

const char* k_nscore__enginebase_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_nscore__enginebase_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_nscore__enginebase_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__enginebase_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_nscore__enginebase_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_nscore__enginebase_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_nscore__enginebase_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_nscore__enginebase_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_nscore__enginebase_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_nscore__enginebase_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_nscore__enginebase_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_nscore__enginebase_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_nscore__enginebase_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_nscore__enginebase_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_nscore__enginebase_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_nscore__enginebase_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_nscore__enginebase_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_nscore__enginebase_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_nscore__enginebase_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_nscore__enginebase_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_nscore__enginebase_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_nscore__enginebase_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_nscore__enginebase_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_nscore__enginebase_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_nscore__enginebase_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_nscore__enginebase_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_nscore__enginebase_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_nscore__enginebase_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__enginebase_dynamic_property_names\n");
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

QBindingStorage* k_nscore__enginebase_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_nscore__enginebase_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_nscore__enginebase_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_nscore__enginebase_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_nscore__enginebase_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_nscore__enginebase_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_nscore__enginebase_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_nscore__enginebase_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_nscore__enginebase_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_nscore__enginebase_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_nscore__enginebase_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_nscore__enginebase_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_nscore__enginebase_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_nscore__enginebase_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_nscore__enginebase_event(void* self, void* event) {
    return KNSCore__EngineBase_Event((KNSCore__EngineBase*)self, (QEvent*)event);
}

bool k_nscore__enginebase_qbase_event(void* self, void* event) {
    return KNSCore__EngineBase_QBaseEvent((KNSCore__EngineBase*)self, (QEvent*)event);
}

void k_nscore__enginebase_on_event(void* self, bool (*callback)(void*, void*)) {
    KNSCore__EngineBase_OnEvent((KNSCore__EngineBase*)self, (intptr_t)callback);
}

bool k_nscore__enginebase_event_filter(void* self, void* watched, void* event) {
    return KNSCore__EngineBase_EventFilter((KNSCore__EngineBase*)self, (QObject*)watched, (QEvent*)event);
}

bool k_nscore__enginebase_qbase_event_filter(void* self, void* watched, void* event) {
    return KNSCore__EngineBase_QBaseEventFilter((KNSCore__EngineBase*)self, (QObject*)watched, (QEvent*)event);
}

void k_nscore__enginebase_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KNSCore__EngineBase_OnEventFilter((KNSCore__EngineBase*)self, (intptr_t)callback);
}

void k_nscore__enginebase_timer_event(void* self, void* event) {
    KNSCore__EngineBase_TimerEvent((KNSCore__EngineBase*)self, (QTimerEvent*)event);
}

void k_nscore__enginebase_qbase_timer_event(void* self, void* event) {
    KNSCore__EngineBase_QBaseTimerEvent((KNSCore__EngineBase*)self, (QTimerEvent*)event);
}

void k_nscore__enginebase_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KNSCore__EngineBase_OnTimerEvent((KNSCore__EngineBase*)self, (intptr_t)callback);
}

void k_nscore__enginebase_child_event(void* self, void* event) {
    KNSCore__EngineBase_ChildEvent((KNSCore__EngineBase*)self, (QChildEvent*)event);
}

void k_nscore__enginebase_qbase_child_event(void* self, void* event) {
    KNSCore__EngineBase_QBaseChildEvent((KNSCore__EngineBase*)self, (QChildEvent*)event);
}

void k_nscore__enginebase_on_child_event(void* self, void (*callback)(void*, void*)) {
    KNSCore__EngineBase_OnChildEvent((KNSCore__EngineBase*)self, (intptr_t)callback);
}

void k_nscore__enginebase_custom_event(void* self, void* event) {
    KNSCore__EngineBase_CustomEvent((KNSCore__EngineBase*)self, (QEvent*)event);
}

void k_nscore__enginebase_qbase_custom_event(void* self, void* event) {
    KNSCore__EngineBase_QBaseCustomEvent((KNSCore__EngineBase*)self, (QEvent*)event);
}

void k_nscore__enginebase_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KNSCore__EngineBase_OnCustomEvent((KNSCore__EngineBase*)self, (intptr_t)callback);
}

void k_nscore__enginebase_connect_notify(void* self, void* signal) {
    KNSCore__EngineBase_ConnectNotify((KNSCore__EngineBase*)self, (QMetaMethod*)signal);
}

void k_nscore__enginebase_qbase_connect_notify(void* self, void* signal) {
    KNSCore__EngineBase_QBaseConnectNotify((KNSCore__EngineBase*)self, (QMetaMethod*)signal);
}

void k_nscore__enginebase_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KNSCore__EngineBase_OnConnectNotify((KNSCore__EngineBase*)self, (intptr_t)callback);
}

void k_nscore__enginebase_disconnect_notify(void* self, void* signal) {
    KNSCore__EngineBase_DisconnectNotify((KNSCore__EngineBase*)self, (QMetaMethod*)signal);
}

void k_nscore__enginebase_qbase_disconnect_notify(void* self, void* signal) {
    KNSCore__EngineBase_QBaseDisconnectNotify((KNSCore__EngineBase*)self, (QMetaMethod*)signal);
}

void k_nscore__enginebase_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KNSCore__EngineBase_OnDisconnectNotify((KNSCore__EngineBase*)self, (intptr_t)callback);
}

QObject* k_nscore__enginebase_sender(void* self) {
    return KNSCore__EngineBase_Sender((KNSCore__EngineBase*)self);
}

QObject* k_nscore__enginebase_qbase_sender(void* self) {
    return KNSCore__EngineBase_QBaseSender((KNSCore__EngineBase*)self);
}

void k_nscore__enginebase_on_sender(void* self, QObject* (*callback)()) {
    KNSCore__EngineBase_OnSender((KNSCore__EngineBase*)self, (intptr_t)callback);
}

int32_t k_nscore__enginebase_sender_signal_index(void* self) {
    return KNSCore__EngineBase_SenderSignalIndex((KNSCore__EngineBase*)self);
}

int32_t k_nscore__enginebase_qbase_sender_signal_index(void* self) {
    return KNSCore__EngineBase_QBaseSenderSignalIndex((KNSCore__EngineBase*)self);
}

void k_nscore__enginebase_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KNSCore__EngineBase_OnSenderSignalIndex((KNSCore__EngineBase*)self, (intptr_t)callback);
}

int32_t k_nscore__enginebase_receivers(void* self, const char* signal) {
    return KNSCore__EngineBase_Receivers((KNSCore__EngineBase*)self, signal);
}

int32_t k_nscore__enginebase_qbase_receivers(void* self, const char* signal) {
    return KNSCore__EngineBase_QBaseReceivers((KNSCore__EngineBase*)self, signal);
}

void k_nscore__enginebase_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KNSCore__EngineBase_OnReceivers((KNSCore__EngineBase*)self, (intptr_t)callback);
}

bool k_nscore__enginebase_is_signal_connected(void* self, void* signal) {
    return KNSCore__EngineBase_IsSignalConnected((KNSCore__EngineBase*)self, (QMetaMethod*)signal);
}

bool k_nscore__enginebase_qbase_is_signal_connected(void* self, void* signal) {
    return KNSCore__EngineBase_QBaseIsSignalConnected((KNSCore__EngineBase*)self, (QMetaMethod*)signal);
}

void k_nscore__enginebase_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KNSCore__EngineBase_OnIsSignalConnected((KNSCore__EngineBase*)self, (intptr_t)callback);
}

void k_nscore__enginebase_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_nscore__enginebase_delete(void* self) {
    KNSCore__EngineBase_Delete((KNSCore__EngineBase*)(self));
}
