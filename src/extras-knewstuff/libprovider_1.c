#include "libentry.hpp"
#include "../libqcoreevent.hpp"
#include "../xml/libqdom.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "libprovider_1.hpp"
#include "libprovider_1.h"

KNSCore__Provider* k_nscore__provider_new() {
    return KNSCore__Provider_new();
}

const QMetaObject* k_nscore__provider_meta_object(void* self) {
    return KNSCore__Provider_MetaObject((KNSCore__Provider*)self);
}

void* k_nscore__provider_metacast(void* self, const char* param1) {
    return KNSCore__Provider_Metacast((KNSCore__Provider*)self, param1);
}

int32_t k_nscore__provider_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KNSCore__Provider_Metacall((KNSCore__Provider*)self, param1, param2, param3);
}

void k_nscore__provider_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KNSCore__Provider_OnMetacall((KNSCore__Provider*)self, (intptr_t)callback);
}

int32_t k_nscore__provider_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KNSCore__Provider_QBaseMetacall((KNSCore__Provider*)self, param1, param2, param3);
}

const char* k_nscore__provider_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_nscore__provider_id(void* self) {
    libqt_string _str = KNSCore__Provider_Id((KNSCore__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__provider_on_id(void* self, const char* (*callback)()) {
    KNSCore__Provider_OnId((KNSCore__Provider*)self, (intptr_t)callback);
}

const char* k_nscore__provider_qbase_id(void* self) {
    libqt_string _str = KNSCore__Provider_QBaseId((KNSCore__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_nscore__provider_set_provider_x_m_l(void* self, void* xmldata) {
    return KNSCore__Provider_SetProviderXML((KNSCore__Provider*)self, (QDomElement*)xmldata);
}

void k_nscore__provider_on_set_provider_x_m_l(void* self, bool (*callback)(void*, void*)) {
    KNSCore__Provider_OnSetProviderXML((KNSCore__Provider*)self, (intptr_t)callback);
}

bool k_nscore__provider_qbase_set_provider_x_m_l(void* self, void* xmldata) {
    return KNSCore__Provider_QBaseSetProviderXML((KNSCore__Provider*)self, (QDomElement*)xmldata);
}

bool k_nscore__provider_is_initialized(void* self) {
    return KNSCore__Provider_IsInitialized((KNSCore__Provider*)self);
}

void k_nscore__provider_on_is_initialized(void* self, bool (*callback)()) {
    KNSCore__Provider_OnIsInitialized((KNSCore__Provider*)self, (intptr_t)callback);
}

bool k_nscore__provider_qbase_is_initialized(void* self) {
    return KNSCore__Provider_QBaseIsInitialized((KNSCore__Provider*)self);
}

void k_nscore__provider_set_cached_entries(void* self, libqt_list /* of KNSCore__Entry* */ cachedEntries) {
    KNSCore__Provider_SetCachedEntries((KNSCore__Provider*)self, cachedEntries);
}

void k_nscore__provider_on_set_cached_entries(void* self, void (*callback)(void*, KNSCore__Entry**)) {
    KNSCore__Provider_OnSetCachedEntries((KNSCore__Provider*)self, (intptr_t)callback);
}

void k_nscore__provider_qbase_set_cached_entries(void* self, libqt_list /* of KNSCore__Entry* */ cachedEntries) {
    KNSCore__Provider_QBaseSetCachedEntries((KNSCore__Provider*)self, cachedEntries);
}

const char* k_nscore__provider_name(void* self) {
    libqt_string _str = KNSCore__Provider_Name((KNSCore__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__provider_on_name(void* self, const char* (*callback)()) {
    KNSCore__Provider_OnName((KNSCore__Provider*)self, (intptr_t)callback);
}

const char* k_nscore__provider_qbase_name(void* self) {
    libqt_string _str = KNSCore__Provider_QBaseName((KNSCore__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* k_nscore__provider_icon(void* self) {
    return KNSCore__Provider_Icon((KNSCore__Provider*)self);
}

void k_nscore__provider_on_icon(void* self, QUrl* (*callback)()) {
    KNSCore__Provider_OnIcon((KNSCore__Provider*)self, (intptr_t)callback);
}

QUrl* k_nscore__provider_qbase_icon(void* self) {
    return KNSCore__Provider_QBaseIcon((KNSCore__Provider*)self);
}

void k_nscore__provider_load_entries(void* self, void* request) {
    KNSCore__Provider_LoadEntries((KNSCore__Provider*)self, (KNSCore__Provider__SearchRequest*)request);
}

void k_nscore__provider_on_load_entries(void* self, void (*callback)(void*, void*)) {
    KNSCore__Provider_OnLoadEntries((KNSCore__Provider*)self, (intptr_t)callback);
}

void k_nscore__provider_qbase_load_entries(void* self, void* request) {
    KNSCore__Provider_QBaseLoadEntries((KNSCore__Provider*)self, (KNSCore__Provider__SearchRequest*)request);
}

void k_nscore__provider_load_entry_details(void* self, void* param1) {
    KNSCore__Provider_LoadEntryDetails((KNSCore__Provider*)self, (KNSCore__Entry*)param1);
}

void k_nscore__provider_on_load_entry_details(void* self, void (*callback)(void*, void*)) {
    KNSCore__Provider_OnLoadEntryDetails((KNSCore__Provider*)self, (intptr_t)callback);
}

void k_nscore__provider_qbase_load_entry_details(void* self, void* param1) {
    KNSCore__Provider_QBaseLoadEntryDetails((KNSCore__Provider*)self, (KNSCore__Entry*)param1);
}

void k_nscore__provider_load_payload_link(void* self, void* entry, int linkId) {
    KNSCore__Provider_LoadPayloadLink((KNSCore__Provider*)self, (KNSCore__Entry*)entry, linkId);
}

void k_nscore__provider_on_load_payload_link(void* self, void (*callback)(void*, void*, int)) {
    KNSCore__Provider_OnLoadPayloadLink((KNSCore__Provider*)self, (intptr_t)callback);
}

void k_nscore__provider_qbase_load_payload_link(void* self, void* entry, int linkId) {
    KNSCore__Provider_QBaseLoadPayloadLink((KNSCore__Provider*)self, (KNSCore__Entry*)entry, linkId);
}

void k_nscore__provider_load_comments(void* self, void* param1, int param2, int param3) {
    KNSCore__Provider_LoadComments((KNSCore__Provider*)self, (KNSCore__Entry*)param1, param2, param3);
}

void k_nscore__provider_on_load_comments(void* self, void (*callback)(void*, void*, int, int)) {
    KNSCore__Provider_OnLoadComments((KNSCore__Provider*)self, (intptr_t)callback);
}

void k_nscore__provider_qbase_load_comments(void* self, void* param1, int param2, int param3) {
    KNSCore__Provider_QBaseLoadComments((KNSCore__Provider*)self, (KNSCore__Entry*)param1, param2, param3);
}

void k_nscore__provider_load_person(void* self, const char* param1) {
    KNSCore__Provider_LoadPerson((KNSCore__Provider*)self, qstring(param1));
}

void k_nscore__provider_on_load_person(void* self, void (*callback)(void*, const char*)) {
    KNSCore__Provider_OnLoadPerson((KNSCore__Provider*)self, (intptr_t)callback);
}

void k_nscore__provider_qbase_load_person(void* self, const char* param1) {
    KNSCore__Provider_QBaseLoadPerson((KNSCore__Provider*)self, qstring(param1));
}

void k_nscore__provider_load_basics(void* self) {
    KNSCore__Provider_LoadBasics((KNSCore__Provider*)self);
}

void k_nscore__provider_on_load_basics(void* self, void (*callback)()) {
    KNSCore__Provider_OnLoadBasics((KNSCore__Provider*)self, (intptr_t)callback);
}

void k_nscore__provider_qbase_load_basics(void* self) {
    KNSCore__Provider_QBaseLoadBasics((KNSCore__Provider*)self);
}

const char* k_nscore__provider_version(void* self) {
    libqt_string _str = KNSCore__Provider_Version((KNSCore__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__provider_set_version(void* self, const char* version) {
    KNSCore__Provider_SetVersion((KNSCore__Provider*)self, qstring(version));
}

QUrl* k_nscore__provider_website(void* self) {
    return KNSCore__Provider_Website((KNSCore__Provider*)self);
}

void k_nscore__provider_set_website(void* self, void* website) {
    KNSCore__Provider_SetWebsite((KNSCore__Provider*)self, (QUrl*)website);
}

QUrl* k_nscore__provider_host(void* self) {
    return KNSCore__Provider_Host((KNSCore__Provider*)self);
}

void k_nscore__provider_set_host(void* self, void* host) {
    KNSCore__Provider_SetHost((KNSCore__Provider*)self, (QUrl*)host);
}

const char* k_nscore__provider_contact_email(void* self) {
    libqt_string _str = KNSCore__Provider_ContactEmail((KNSCore__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__provider_set_contact_email(void* self, const char* contactEmail) {
    KNSCore__Provider_SetContactEmail((KNSCore__Provider*)self, qstring(contactEmail));
}

bool k_nscore__provider_supports_ssl(void* self) {
    return KNSCore__Provider_SupportsSsl((KNSCore__Provider*)self);
}

void k_nscore__provider_set_supports_ssl(void* self, bool supportsSsl) {
    KNSCore__Provider_SetSupportsSsl((KNSCore__Provider*)self, supportsSsl);
}

bool k_nscore__provider_user_can_vote(void* self) {
    return KNSCore__Provider_UserCanVote((KNSCore__Provider*)self);
}

void k_nscore__provider_on_user_can_vote(void* self, bool (*callback)()) {
    KNSCore__Provider_OnUserCanVote((KNSCore__Provider*)self, (intptr_t)callback);
}

bool k_nscore__provider_qbase_user_can_vote(void* self) {
    return KNSCore__Provider_QBaseUserCanVote((KNSCore__Provider*)self);
}

void k_nscore__provider_vote(void* self, void* param1, uint32_t param2) {
    KNSCore__Provider_Vote((KNSCore__Provider*)self, (KNSCore__Entry*)param1, param2);
}

void k_nscore__provider_on_vote(void* self, void (*callback)(void*, void*, uint32_t)) {
    KNSCore__Provider_OnVote((KNSCore__Provider*)self, (intptr_t)callback);
}

void k_nscore__provider_qbase_vote(void* self, void* param1, uint32_t param2) {
    KNSCore__Provider_QBaseVote((KNSCore__Provider*)self, (KNSCore__Entry*)param1, param2);
}

bool k_nscore__provider_user_can_become_fan(void* self) {
    return KNSCore__Provider_UserCanBecomeFan((KNSCore__Provider*)self);
}

void k_nscore__provider_on_user_can_become_fan(void* self, bool (*callback)()) {
    KNSCore__Provider_OnUserCanBecomeFan((KNSCore__Provider*)self, (intptr_t)callback);
}

bool k_nscore__provider_qbase_user_can_become_fan(void* self) {
    return KNSCore__Provider_QBaseUserCanBecomeFan((KNSCore__Provider*)self);
}

void k_nscore__provider_become_fan(void* self, void* param1) {
    KNSCore__Provider_BecomeFan((KNSCore__Provider*)self, (KNSCore__Entry*)param1);
}

void k_nscore__provider_on_become_fan(void* self, void (*callback)(void*, void*)) {
    KNSCore__Provider_OnBecomeFan((KNSCore__Provider*)self, (intptr_t)callback);
}

void k_nscore__provider_qbase_become_fan(void* self, void* param1) {
    KNSCore__Provider_QBaseBecomeFan((KNSCore__Provider*)self, (KNSCore__Entry*)param1);
}

void k_nscore__provider_set_tag_filter(void* self, const char* tagFilter[static 1]) {
    size_t tagFilter_len = libqt_strv_length(tagFilter);
    libqt_string* tagFilter_qstr = (libqt_string*)malloc(tagFilter_len * sizeof(libqt_string));
    if (tagFilter_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__provider_set_tag_filter\n");
        abort();
    }
    for (size_t i = 0; i < tagFilter_len; ++i) {
        tagFilter_qstr[i] = qstring(tagFilter[i]);
    }
    libqt_list tagFilter_list = qlist(tagFilter_qstr, tagFilter_len);
    KNSCore__Provider_SetTagFilter((KNSCore__Provider*)self, tagFilter_list);
    free(tagFilter_qstr);
}

const char** k_nscore__provider_tag_filter(void* self) {
    libqt_list _arr = KNSCore__Provider_TagFilter((KNSCore__Provider*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__provider_tag_filter\n");
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

void k_nscore__provider_set_download_tag_filter(void* self, const char* downloadTagFilter[static 1]) {
    size_t downloadTagFilter_len = libqt_strv_length(downloadTagFilter);
    libqt_string* downloadTagFilter_qstr = (libqt_string*)malloc(downloadTagFilter_len * sizeof(libqt_string));
    if (downloadTagFilter_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__provider_set_download_tag_filter\n");
        abort();
    }
    for (size_t i = 0; i < downloadTagFilter_len; ++i) {
        downloadTagFilter_qstr[i] = qstring(downloadTagFilter[i]);
    }
    libqt_list downloadTagFilter_list = qlist(downloadTagFilter_qstr, downloadTagFilter_len);
    KNSCore__Provider_SetDownloadTagFilter((KNSCore__Provider*)self, downloadTagFilter_list);
    free(downloadTagFilter_qstr);
}

const char** k_nscore__provider_download_tag_filter(void* self) {
    libqt_list _arr = KNSCore__Provider_DownloadTagFilter((KNSCore__Provider*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__provider_download_tag_filter\n");
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

void k_nscore__provider_provider_initialized(void* self, void* param1) {
    KNSCore__Provider_ProviderInitialized((KNSCore__Provider*)self, (KNSCore__Provider*)param1);
}

void k_nscore__provider_on_provider_initialized(void* self, void (*callback)(void*, void*)) {
    KNSCore__Provider_Connect_ProviderInitialized((KNSCore__Provider*)self, (intptr_t)callback);
}

void k_nscore__provider_loading_finished(void* self, void* param1, libqt_list /* of KNSCore__Entry* */ param2) {
    KNSCore__Provider_LoadingFinished((KNSCore__Provider*)self, (KNSCore__Provider__SearchRequest*)param1, param2);
}

void k_nscore__provider_on_loading_finished(void* self, void (*callback)(void*, void*, KNSCore__Entry**)) {
    KNSCore__Provider_Connect_LoadingFinished((KNSCore__Provider*)self, (intptr_t)callback);
}

void k_nscore__provider_loading_failed(void* self, void* param1) {
    KNSCore__Provider_LoadingFailed((KNSCore__Provider*)self, (KNSCore__Provider__SearchRequest*)param1);
}

void k_nscore__provider_on_loading_failed(void* self, void (*callback)(void*, void*)) {
    KNSCore__Provider_Connect_LoadingFailed((KNSCore__Provider*)self, (intptr_t)callback);
}

void k_nscore__provider_entry_details_loaded(void* self, void* param1) {
    KNSCore__Provider_EntryDetailsLoaded((KNSCore__Provider*)self, (KNSCore__Entry*)param1);
}

void k_nscore__provider_on_entry_details_loaded(void* self, void (*callback)(void*, void*)) {
    KNSCore__Provider_Connect_EntryDetailsLoaded((KNSCore__Provider*)self, (intptr_t)callback);
}

void k_nscore__provider_payload_link_loaded(void* self, void* param1) {
    KNSCore__Provider_PayloadLinkLoaded((KNSCore__Provider*)self, (KNSCore__Entry*)param1);
}

void k_nscore__provider_on_payload_link_loaded(void* self, void (*callback)(void*, void*)) {
    KNSCore__Provider_Connect_PayloadLinkLoaded((KNSCore__Provider*)self, (intptr_t)callback);
}

void k_nscore__provider_basics_loaded(void* self) {
    KNSCore__Provider_BasicsLoaded((KNSCore__Provider*)self);
}

void k_nscore__provider_on_basics_loaded(void* self, void (*callback)(void*)) {
    KNSCore__Provider_Connect_BasicsLoaded((KNSCore__Provider*)self, (intptr_t)callback);
}

void k_nscore__provider_search_presets_loaded(void* self, libqt_list /* of KNSCore__Provider__SearchPreset* */ presets) {
    KNSCore__Provider_SearchPresetsLoaded((KNSCore__Provider*)self, presets);
}

void k_nscore__provider_on_search_presets_loaded(void* self, void (*callback)(void*, KNSCore__Provider__SearchPreset**)) {
    KNSCore__Provider_Connect_SearchPresetsLoaded((KNSCore__Provider*)self, (intptr_t)callback);
}

void k_nscore__provider_signal_information(void* self, const char* param1) {
    KNSCore__Provider_SignalInformation((KNSCore__Provider*)self, qstring(param1));
}

void k_nscore__provider_on_signal_information(void* self, void (*callback)(void*, const char*)) {
    KNSCore__Provider_Connect_SignalInformation((KNSCore__Provider*)self, (intptr_t)callback);
}

void k_nscore__provider_signal_error(void* self, const char* param1) {
    KNSCore__Provider_SignalError((KNSCore__Provider*)self, qstring(param1));
}

void k_nscore__provider_on_signal_error(void* self, void (*callback)(void*, const char*)) {
    KNSCore__Provider_Connect_SignalError((KNSCore__Provider*)self, (intptr_t)callback);
}

void k_nscore__provider_signal_error_code(void* self, int32_t errorCode, const char* message, void* metadata) {
    KNSCore__Provider_SignalErrorCode((KNSCore__Provider*)self, errorCode, qstring(message), (QVariant*)metadata);
}

void k_nscore__provider_on_signal_error_code(void* self, void (*callback)(void*, int32_t, const char*, void*)) {
    KNSCore__Provider_Connect_SignalErrorCode((KNSCore__Provider*)self, (intptr_t)callback);
}

void k_nscore__provider_categories_metadata_loded(void* self, libqt_list /* of KNSCore__Provider__CategoryMetadata* */ categories) {
    KNSCore__Provider_CategoriesMetadataLoded((KNSCore__Provider*)self, categories);
}

void k_nscore__provider_on_categories_metadata_loded(void* self, void (*callback)(void*, KNSCore__Provider__CategoryMetadata**)) {
    KNSCore__Provider_Connect_CategoriesMetadataLoded((KNSCore__Provider*)self, (intptr_t)callback);
}

void k_nscore__provider_tag_filter_changed(void* self) {
    KNSCore__Provider_TagFilterChanged((KNSCore__Provider*)self);
}

void k_nscore__provider_on_tag_filter_changed(void* self, void (*callback)(void*)) {
    KNSCore__Provider_Connect_TagFilterChanged((KNSCore__Provider*)self, (intptr_t)callback);
}

void k_nscore__provider_download_tag_filter_changed(void* self) {
    KNSCore__Provider_DownloadTagFilterChanged((KNSCore__Provider*)self);
}

void k_nscore__provider_on_download_tag_filter_changed(void* self, void (*callback)(void*)) {
    KNSCore__Provider_Connect_DownloadTagFilterChanged((KNSCore__Provider*)self, (intptr_t)callback);
}

void k_nscore__provider_set_name(void* self, const char* name) {
    KNSCore__Provider_SetName((KNSCore__Provider*)self, qstring(name));
}

void k_nscore__provider_on_set_name(void* self, void (*callback)(void*, const char*)) {
    KNSCore__Provider_OnSetName((KNSCore__Provider*)self, (intptr_t)callback);
}

void k_nscore__provider_qbase_set_name(void* self, const char* name) {
    KNSCore__Provider_QBaseSetName((KNSCore__Provider*)self, qstring(name));
}

void k_nscore__provider_set_icon(void* self, void* icon) {
    KNSCore__Provider_SetIcon((KNSCore__Provider*)self, (QUrl*)icon);
}

void k_nscore__provider_on_set_icon(void* self, void (*callback)(void*, void*)) {
    KNSCore__Provider_OnSetIcon((KNSCore__Provider*)self, (intptr_t)callback);
}

void k_nscore__provider_qbase_set_icon(void* self, void* icon) {
    KNSCore__Provider_QBaseSetIcon((KNSCore__Provider*)self, (QUrl*)icon);
}

const char* k_nscore__provider_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_nscore__provider_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_nscore__provider_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__provider_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_nscore__provider_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_nscore__provider_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_nscore__provider_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_nscore__provider_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_nscore__provider_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_nscore__provider_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_nscore__provider_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_nscore__provider_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_nscore__provider_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_nscore__provider_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_nscore__provider_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_nscore__provider_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_nscore__provider_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_nscore__provider_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_nscore__provider_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_nscore__provider_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_nscore__provider_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_nscore__provider_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_nscore__provider_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_nscore__provider_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_nscore__provider_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_nscore__provider_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_nscore__provider_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_nscore__provider_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__provider_dynamic_property_names\n");
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

QBindingStorage* k_nscore__provider_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_nscore__provider_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_nscore__provider_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_nscore__provider_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_nscore__provider_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_nscore__provider_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_nscore__provider_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_nscore__provider_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_nscore__provider_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_nscore__provider_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_nscore__provider_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_nscore__provider_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_nscore__provider_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_nscore__provider_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_nscore__provider_event(void* self, void* event) {
    return KNSCore__Provider_Event((KNSCore__Provider*)self, (QEvent*)event);
}

bool k_nscore__provider_qbase_event(void* self, void* event) {
    return KNSCore__Provider_QBaseEvent((KNSCore__Provider*)self, (QEvent*)event);
}

void k_nscore__provider_on_event(void* self, bool (*callback)(void*, void*)) {
    KNSCore__Provider_OnEvent((KNSCore__Provider*)self, (intptr_t)callback);
}

bool k_nscore__provider_event_filter(void* self, void* watched, void* event) {
    return KNSCore__Provider_EventFilter((KNSCore__Provider*)self, (QObject*)watched, (QEvent*)event);
}

bool k_nscore__provider_qbase_event_filter(void* self, void* watched, void* event) {
    return KNSCore__Provider_QBaseEventFilter((KNSCore__Provider*)self, (QObject*)watched, (QEvent*)event);
}

void k_nscore__provider_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KNSCore__Provider_OnEventFilter((KNSCore__Provider*)self, (intptr_t)callback);
}

void k_nscore__provider_timer_event(void* self, void* event) {
    KNSCore__Provider_TimerEvent((KNSCore__Provider*)self, (QTimerEvent*)event);
}

void k_nscore__provider_qbase_timer_event(void* self, void* event) {
    KNSCore__Provider_QBaseTimerEvent((KNSCore__Provider*)self, (QTimerEvent*)event);
}

void k_nscore__provider_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KNSCore__Provider_OnTimerEvent((KNSCore__Provider*)self, (intptr_t)callback);
}

void k_nscore__provider_child_event(void* self, void* event) {
    KNSCore__Provider_ChildEvent((KNSCore__Provider*)self, (QChildEvent*)event);
}

void k_nscore__provider_qbase_child_event(void* self, void* event) {
    KNSCore__Provider_QBaseChildEvent((KNSCore__Provider*)self, (QChildEvent*)event);
}

void k_nscore__provider_on_child_event(void* self, void (*callback)(void*, void*)) {
    KNSCore__Provider_OnChildEvent((KNSCore__Provider*)self, (intptr_t)callback);
}

void k_nscore__provider_custom_event(void* self, void* event) {
    KNSCore__Provider_CustomEvent((KNSCore__Provider*)self, (QEvent*)event);
}

void k_nscore__provider_qbase_custom_event(void* self, void* event) {
    KNSCore__Provider_QBaseCustomEvent((KNSCore__Provider*)self, (QEvent*)event);
}

void k_nscore__provider_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KNSCore__Provider_OnCustomEvent((KNSCore__Provider*)self, (intptr_t)callback);
}

void k_nscore__provider_connect_notify(void* self, void* signal) {
    KNSCore__Provider_ConnectNotify((KNSCore__Provider*)self, (QMetaMethod*)signal);
}

void k_nscore__provider_qbase_connect_notify(void* self, void* signal) {
    KNSCore__Provider_QBaseConnectNotify((KNSCore__Provider*)self, (QMetaMethod*)signal);
}

void k_nscore__provider_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KNSCore__Provider_OnConnectNotify((KNSCore__Provider*)self, (intptr_t)callback);
}

void k_nscore__provider_disconnect_notify(void* self, void* signal) {
    KNSCore__Provider_DisconnectNotify((KNSCore__Provider*)self, (QMetaMethod*)signal);
}

void k_nscore__provider_qbase_disconnect_notify(void* self, void* signal) {
    KNSCore__Provider_QBaseDisconnectNotify((KNSCore__Provider*)self, (QMetaMethod*)signal);
}

void k_nscore__provider_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KNSCore__Provider_OnDisconnectNotify((KNSCore__Provider*)self, (intptr_t)callback);
}

QObject* k_nscore__provider_sender(void* self) {
    return KNSCore__Provider_Sender((KNSCore__Provider*)self);
}

QObject* k_nscore__provider_qbase_sender(void* self) {
    return KNSCore__Provider_QBaseSender((KNSCore__Provider*)self);
}

void k_nscore__provider_on_sender(void* self, QObject* (*callback)()) {
    KNSCore__Provider_OnSender((KNSCore__Provider*)self, (intptr_t)callback);
}

int32_t k_nscore__provider_sender_signal_index(void* self) {
    return KNSCore__Provider_SenderSignalIndex((KNSCore__Provider*)self);
}

int32_t k_nscore__provider_qbase_sender_signal_index(void* self) {
    return KNSCore__Provider_QBaseSenderSignalIndex((KNSCore__Provider*)self);
}

void k_nscore__provider_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KNSCore__Provider_OnSenderSignalIndex((KNSCore__Provider*)self, (intptr_t)callback);
}

int32_t k_nscore__provider_receivers(void* self, const char* signal) {
    return KNSCore__Provider_Receivers((KNSCore__Provider*)self, signal);
}

int32_t k_nscore__provider_qbase_receivers(void* self, const char* signal) {
    return KNSCore__Provider_QBaseReceivers((KNSCore__Provider*)self, signal);
}

void k_nscore__provider_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KNSCore__Provider_OnReceivers((KNSCore__Provider*)self, (intptr_t)callback);
}

bool k_nscore__provider_is_signal_connected(void* self, void* signal) {
    return KNSCore__Provider_IsSignalConnected((KNSCore__Provider*)self, (QMetaMethod*)signal);
}

bool k_nscore__provider_qbase_is_signal_connected(void* self, void* signal) {
    return KNSCore__Provider_QBaseIsSignalConnected((KNSCore__Provider*)self, (QMetaMethod*)signal);
}

void k_nscore__provider_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KNSCore__Provider_OnIsSignalConnected((KNSCore__Provider*)self, (intptr_t)callback);
}

void k_nscore__provider_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_nscore__provider_delete(void* self) {
    KNSCore__Provider_Delete((KNSCore__Provider*)(self));
}

KNSCore__Provider__SearchRequest* k_nscore__provider__searchrequest_new() {
    return KNSCore__Provider__SearchRequest_new();
}

KNSCore__Provider__SearchRequest* k_nscore__provider__searchrequest_new2(void* param1) {
    return KNSCore__Provider__SearchRequest_new2((KNSCore__Provider__SearchRequest*)param1);
}

KNSCore__Provider__SearchRequest* k_nscore__provider__searchrequest_new3(int32_t sortMode_) {
    return KNSCore__Provider__SearchRequest_new3(sortMode_);
}

KNSCore__Provider__SearchRequest* k_nscore__provider__searchrequest_new4(int32_t sortMode_, int32_t filter_) {
    return KNSCore__Provider__SearchRequest_new4(sortMode_, filter_);
}

KNSCore__Provider__SearchRequest* k_nscore__provider__searchrequest_new5(int32_t sortMode_, int32_t filter_, const char* searchTerm_) {
    return KNSCore__Provider__SearchRequest_new5(sortMode_, filter_, qstring(searchTerm_));
}

KNSCore__Provider__SearchRequest* k_nscore__provider__searchrequest_new6(int32_t sortMode_, int32_t filter_, const char* searchTerm_, const char* categories_[static 1]) {
    size_t categories__len = libqt_strv_length(categories_);
    libqt_string* categories__qstr = (libqt_string*)malloc(categories__len * sizeof(libqt_string));
    if (categories__qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__provider__searchrequest_new6\n");
        abort();
    }
    for (size_t i = 0; i < categories__len; ++i) {
        categories__qstr[i] = qstring(categories_[i]);
    }
    libqt_list categories__list = qlist(categories__qstr, categories__len);

    KNSCore__Provider__SearchRequest* _out = KNSCore__Provider__SearchRequest_new6(sortMode_, filter_, qstring(searchTerm_), categories__list);
    free(categories__qstr);
    return _out;
}

KNSCore__Provider__SearchRequest* k_nscore__provider__searchrequest_new7(int32_t sortMode_, int32_t filter_, const char* searchTerm_, const char* categories_[static 1], int page_) {
    size_t categories__len = libqt_strv_length(categories_);
    libqt_string* categories__qstr = (libqt_string*)malloc(categories__len * sizeof(libqt_string));
    if (categories__qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__provider__searchrequest_new7\n");
        abort();
    }
    for (size_t i = 0; i < categories__len; ++i) {
        categories__qstr[i] = qstring(categories_[i]);
    }
    libqt_list categories__list = qlist(categories__qstr, categories__len);

    KNSCore__Provider__SearchRequest* _out = KNSCore__Provider__SearchRequest_new7(sortMode_, filter_, qstring(searchTerm_), categories__list, page_);
    free(categories__qstr);
    return _out;
}

KNSCore__Provider__SearchRequest* k_nscore__provider__searchrequest_new8(int32_t sortMode_, int32_t filter_, const char* searchTerm_, const char* categories_[static 1], int page_, int pageSize_) {
    size_t categories__len = libqt_strv_length(categories_);
    libqt_string* categories__qstr = (libqt_string*)malloc(categories__len * sizeof(libqt_string));
    if (categories__qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__provider__searchrequest_new8\n");
        abort();
    }
    for (size_t i = 0; i < categories__len; ++i) {
        categories__qstr[i] = qstring(categories_[i]);
    }
    libqt_list categories__list = qlist(categories__qstr, categories__len);

    KNSCore__Provider__SearchRequest* _out = KNSCore__Provider__SearchRequest_new8(sortMode_, filter_, qstring(searchTerm_), categories__list, page_, pageSize_);
    free(categories__qstr);
    return _out;
}

int32_t k_nscore__provider__searchrequest_sort_mode(void* self) {
    return KNSCore__Provider__SearchRequest_SortMode((KNSCore__Provider__SearchRequest*)self);
}

void k_nscore__provider__searchrequest_set_sort_mode(void* self, int32_t sortMode) {
    KNSCore__Provider__SearchRequest_SetSortMode((KNSCore__Provider__SearchRequest*)self, sortMode);
}

int32_t k_nscore__provider__searchrequest_filter(void* self) {
    return KNSCore__Provider__SearchRequest_Filter((KNSCore__Provider__SearchRequest*)self);
}

void k_nscore__provider__searchrequest_set_filter(void* self, int32_t filter) {
    KNSCore__Provider__SearchRequest_SetFilter((KNSCore__Provider__SearchRequest*)self, filter);
}

const char* k_nscore__provider__searchrequest_search_term(void* self) {
    libqt_string searchTerm_str = KNSCore__Provider__SearchRequest_SearchTerm((KNSCore__Provider__SearchRequest*)self);
    char* searchTerm_ret = qstring_to_char(searchTerm_str);
    libqt_string_free(&searchTerm_str);
    return searchTerm_ret;
}

void k_nscore__provider__searchrequest_set_search_term(void* self, const char* searchTerm) {
    KNSCore__Provider__SearchRequest_SetSearchTerm((KNSCore__Provider__SearchRequest*)self, qstring(searchTerm));
}

const char** k_nscore__provider__searchrequest_categories(void* self) {
    libqt_list categories_arr = KNSCore__Provider__SearchRequest_Categories((KNSCore__Provider__SearchRequest*)self);
    const libqt_string* categories_qstr = (libqt_string*)categories_arr.data.ptr;
    const char** categories_ret = (const char**)malloc((categories_arr.len + 1) * sizeof(const char*));
    if (categories_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__provider__searchrequest_categories\n");
        abort();
    }
    for (size_t i = 0; i < categories_arr.len; ++i) {
        categories_ret[i] = qstring_to_char(categories_qstr[i]);
    }
    categories_ret[categories_arr.len] = NULL;
    for (size_t i = 0; i < categories_arr.len; ++i) {
        libqt_string_free((libqt_string*)&categories_qstr[i]);
    }
    libqt_free(categories_arr.data.ptr);
    return categories_ret;
}

void k_nscore__provider__searchrequest_set_categories(void* self, const char* categories[static 1]) {
    size_t categories_len = libqt_strv_length(categories);
    libqt_string* categories_qstr = (libqt_string*)malloc(categories_len * sizeof(libqt_string));
    if (categories_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__provider__searchrequest_set_categories\n");
        abort();
    }
    for (size_t i = 0; i < categories_len; ++i) {
        categories_qstr[i] = qstring(categories[i]);
    }
    libqt_list categories_list = qlist(categories_qstr, categories_len);
    KNSCore__Provider__SearchRequest_SetCategories((KNSCore__Provider__SearchRequest*)self, categories_list);
    free(categories_qstr);
}

int32_t k_nscore__provider__searchrequest_page(void* self) {
    return KNSCore__Provider__SearchRequest_Page((KNSCore__Provider__SearchRequest*)self);
}

void k_nscore__provider__searchrequest_set_page(void* self, int page) {
    KNSCore__Provider__SearchRequest_SetPage((KNSCore__Provider__SearchRequest*)self, page);
}

int32_t k_nscore__provider__searchrequest_page_size(void* self) {
    return KNSCore__Provider__SearchRequest_PageSize((KNSCore__Provider__SearchRequest*)self);
}

void k_nscore__provider__searchrequest_set_page_size(void* self, int pageSize) {
    KNSCore__Provider__SearchRequest_SetPageSize((KNSCore__Provider__SearchRequest*)self, pageSize);
}

const char* k_nscore__provider__searchrequest_hash_for_request(void* self) {
    libqt_string _str = KNSCore__Provider__SearchRequest_HashForRequest((KNSCore__Provider__SearchRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_nscore__provider__searchrequest_operator_equal(void* self, void* other) {
    return KNSCore__Provider__SearchRequest_OperatorEqual((KNSCore__Provider__SearchRequest*)self, (KNSCore__Provider__SearchRequest*)other);
}

void k_nscore__provider__searchrequest_operator_assign(void* self, void* param1) {
    KNSCore__Provider__SearchRequest_OperatorAssign((KNSCore__Provider__SearchRequest*)self, (KNSCore__Provider__SearchRequest*)param1);
}

void k_nscore__provider__searchrequest_delete(void* self) {
    KNSCore__Provider__SearchRequest_Delete((KNSCore__Provider__SearchRequest*)(self));
}

KNSCore__Provider__CategoryMetadata* k_nscore__provider__categorymetadata_new(void* param1) {
    return KNSCore__Provider__CategoryMetadata_new((KNSCore__Provider__CategoryMetadata*)param1);
}

const char* k_nscore__provider__categorymetadata_id(void* self) {
    libqt_string id_str = KNSCore__Provider__CategoryMetadata_Id((KNSCore__Provider__CategoryMetadata*)self);
    char* id_ret = qstring_to_char(id_str);
    libqt_string_free(&id_str);
    return id_ret;
}

void k_nscore__provider__categorymetadata_set_id(void* self, const char* id) {
    KNSCore__Provider__CategoryMetadata_SetId((KNSCore__Provider__CategoryMetadata*)self, qstring(id));
}

const char* k_nscore__provider__categorymetadata_name(void* self) {
    libqt_string name_str = KNSCore__Provider__CategoryMetadata_Name((KNSCore__Provider__CategoryMetadata*)self);
    char* name_ret = qstring_to_char(name_str);
    libqt_string_free(&name_str);
    return name_ret;
}

void k_nscore__provider__categorymetadata_set_name(void* self, const char* name) {
    KNSCore__Provider__CategoryMetadata_SetName((KNSCore__Provider__CategoryMetadata*)self, qstring(name));
}

const char* k_nscore__provider__categorymetadata_display_name(void* self) {
    libqt_string displayName_str = KNSCore__Provider__CategoryMetadata_DisplayName((KNSCore__Provider__CategoryMetadata*)self);
    char* displayName_ret = qstring_to_char(displayName_str);
    libqt_string_free(&displayName_str);
    return displayName_ret;
}

void k_nscore__provider__categorymetadata_set_display_name(void* self, const char* displayName) {
    KNSCore__Provider__CategoryMetadata_SetDisplayName((KNSCore__Provider__CategoryMetadata*)self, qstring(displayName));
}

void k_nscore__provider__categorymetadata_operator_assign(void* self, void* param1) {
    KNSCore__Provider__CategoryMetadata_OperatorAssign((KNSCore__Provider__CategoryMetadata*)self, (KNSCore__Provider__CategoryMetadata*)param1);
}

void k_nscore__provider__categorymetadata_delete(void* self) {
    KNSCore__Provider__CategoryMetadata_Delete((KNSCore__Provider__CategoryMetadata*)(self));
}

KNSCore__Provider__SearchPreset* k_nscore__provider__searchpreset_new(void* param1) {
    return KNSCore__Provider__SearchPreset_new((KNSCore__Provider__SearchPreset*)param1);
}

KNSCore__Provider__SearchRequest* k_nscore__provider__searchpreset_request(void* self) {
    return KNSCore__Provider__SearchPreset_Request((KNSCore__Provider__SearchPreset*)self);
}

void k_nscore__provider__searchpreset_set_request(void* self, void* request) {
    KNSCore__Provider__SearchPreset_SetRequest((KNSCore__Provider__SearchPreset*)self, (KNSCore__Provider__SearchRequest*)request);
}

const char* k_nscore__provider__searchpreset_display_name(void* self) {
    libqt_string displayName_str = KNSCore__Provider__SearchPreset_DisplayName((KNSCore__Provider__SearchPreset*)self);
    char* displayName_ret = qstring_to_char(displayName_str);
    libqt_string_free(&displayName_str);
    return displayName_ret;
}

void k_nscore__provider__searchpreset_set_display_name(void* self, const char* displayName) {
    KNSCore__Provider__SearchPreset_SetDisplayName((KNSCore__Provider__SearchPreset*)self, qstring(displayName));
}

const char* k_nscore__provider__searchpreset_icon_name(void* self) {
    libqt_string iconName_str = KNSCore__Provider__SearchPreset_IconName((KNSCore__Provider__SearchPreset*)self);
    char* iconName_ret = qstring_to_char(iconName_str);
    libqt_string_free(&iconName_str);
    return iconName_ret;
}

void k_nscore__provider__searchpreset_set_icon_name(void* self, const char* iconName) {
    KNSCore__Provider__SearchPreset_SetIconName((KNSCore__Provider__SearchPreset*)self, qstring(iconName));
}

int32_t k_nscore__provider__searchpreset_type(void* self) {
    return KNSCore__Provider__SearchPreset_Type((KNSCore__Provider__SearchPreset*)self);
}

void k_nscore__provider__searchpreset_set_type(void* self, int32_t type) {
    KNSCore__Provider__SearchPreset_SetType((KNSCore__Provider__SearchPreset*)self, type);
}

const char* k_nscore__provider__searchpreset_provider_id(void* self) {
    libqt_string providerId_str = KNSCore__Provider__SearchPreset_ProviderId((KNSCore__Provider__SearchPreset*)self);
    char* providerId_ret = qstring_to_char(providerId_str);
    libqt_string_free(&providerId_str);
    return providerId_ret;
}

void k_nscore__provider__searchpreset_set_provider_id(void* self, const char* providerId) {
    KNSCore__Provider__SearchPreset_SetProviderId((KNSCore__Provider__SearchPreset*)self, qstring(providerId));
}

void k_nscore__provider__searchpreset_operator_assign(void* self, void* param1) {
    KNSCore__Provider__SearchPreset_OperatorAssign((KNSCore__Provider__SearchPreset*)self, (KNSCore__Provider__SearchPreset*)param1);
}

void k_nscore__provider__searchpreset_delete(void* self) {
    KNSCore__Provider__SearchPreset_Delete((KNSCore__Provider__SearchPreset*)(self));
}
