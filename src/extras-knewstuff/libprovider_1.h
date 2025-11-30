#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFF_QT6C_LIBPROVIDER_H
#define SRC_EXTRAS_KNEWSTUFF_QT6C_LIBPROVIDER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/knscore-provider.html

/// k_nscore__provider_new constructs a new KNSCore::Provider object.
///
KNSCore__Provider* k_nscore__provider_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KNSCore__Provider*
const QMetaObject* k_nscore__provider_meta_object(void* self);

/// @param self KNSCore__Provider*
/// @param param1 const char*
void* k_nscore__provider_metacast(void* self, const char* param1);

/// @param self KNSCore__Provider*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_nscore__provider_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KNSCore__Provider*
/// @param callback int32_t func(KNSCore__Provider* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_nscore__provider_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KNSCore__Provider*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_nscore__provider_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_nscore__provider_tr(const char* s);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#id)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Provider*
const char* k_nscore__provider_id(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#id)
///
/// Allows for overriding the related default method
///
/// @param self KNSCore__Provider*
/// @param callback const char* func()
void k_nscore__provider_on_id(void* self, const char* (*callback)());

/// [Upstream resources](https://api.kde.org/knscore-provider.html#id)
///
/// Base class method implementation
///
/// @param self KNSCore__Provider*
const char* k_nscore__provider_qbase_id(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#setProviderXML)
///
/// @param self KNSCore__Provider*
/// @param xmldata QDomElement*
bool k_nscore__provider_set_provider_x_m_l(void* self, void* xmldata);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#setProviderXML)
///
/// Allows for overriding the related default method
///
/// @param self KNSCore__Provider*
/// @param callback bool func(KNSCore__Provider* self, QDomElement* xmldata)
void k_nscore__provider_on_set_provider_x_m_l(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/knscore-provider.html#setProviderXML)
///
/// Base class method implementation
///
/// @param self KNSCore__Provider*
/// @param xmldata QDomElement*
bool k_nscore__provider_qbase_set_provider_x_m_l(void* self, void* xmldata);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#isInitialized)
///
/// @param self KNSCore__Provider*
bool k_nscore__provider_is_initialized(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#isInitialized)
///
/// Allows for overriding the related default method
///
/// @param self KNSCore__Provider*
/// @param callback bool func()
void k_nscore__provider_on_is_initialized(void* self, bool (*callback)());

/// [Upstream resources](https://api.kde.org/knscore-provider.html#isInitialized)
///
/// Base class method implementation
///
/// @param self KNSCore__Provider*
bool k_nscore__provider_qbase_is_initialized(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#setCachedEntries)
///
/// @param self KNSCore__Provider*
/// @param cachedEntries libqt_list /* of KNSCore__Entry* */
void k_nscore__provider_set_cached_entries(void* self, libqt_list cachedEntries);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#setCachedEntries)
///
/// Allows for overriding the related default method
///
/// @param self KNSCore__Provider*
/// @param callback void func(KNSCore__Provider* self, KNSCore__Entry** cachedEntries)
void k_nscore__provider_on_set_cached_entries(void* self, void (*callback)(void*, KNSCore__Entry**));

/// [Upstream resources](https://api.kde.org/knscore-provider.html#setCachedEntries)
///
/// Base class method implementation
///
/// @param self KNSCore__Provider*
/// @param cachedEntries libqt_list /* of KNSCore__Entry* */
void k_nscore__provider_qbase_set_cached_entries(void* self, libqt_list cachedEntries);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Provider*
const char* k_nscore__provider_name(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#name)
///
/// Allows for overriding the related default method
///
/// @param self KNSCore__Provider*
/// @param callback const char* func()
void k_nscore__provider_on_name(void* self, const char* (*callback)());

/// [Upstream resources](https://api.kde.org/knscore-provider.html#name)
///
/// Base class method implementation
///
/// @param self KNSCore__Provider*
const char* k_nscore__provider_qbase_name(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#icon)
///
/// @param self KNSCore__Provider*
QUrl* k_nscore__provider_icon(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#icon)
///
/// Allows for overriding the related default method
///
/// @param self KNSCore__Provider*
/// @param callback QUrl* func()
void k_nscore__provider_on_icon(void* self, QUrl* (*callback)());

/// [Upstream resources](https://api.kde.org/knscore-provider.html#icon)
///
/// Base class method implementation
///
/// @param self KNSCore__Provider*
QUrl* k_nscore__provider_qbase_icon(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#loadEntries)
///
/// @param self KNSCore__Provider*
/// @param request KNSCore__Provider__SearchRequest*
void k_nscore__provider_load_entries(void* self, void* request);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#loadEntries)
///
/// Allows for overriding the related default method
///
/// @param self KNSCore__Provider*
/// @param callback void func(KNSCore__Provider* self, KNSCore__Provider__SearchRequest* request)
void k_nscore__provider_on_load_entries(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/knscore-provider.html#loadEntries)
///
/// Base class method implementation
///
/// @param self KNSCore__Provider*
/// @param request KNSCore__Provider__SearchRequest*
void k_nscore__provider_qbase_load_entries(void* self, void* request);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#loadEntryDetails)
///
/// @param self KNSCore__Provider*
/// @param param1 KNSCore__Entry*
void k_nscore__provider_load_entry_details(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#loadEntryDetails)
///
/// Allows for overriding the related default method
///
/// @param self KNSCore__Provider*
/// @param callback void func(KNSCore__Provider* self, KNSCore__Entry* param1)
void k_nscore__provider_on_load_entry_details(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/knscore-provider.html#loadEntryDetails)
///
/// Base class method implementation
///
/// @param self KNSCore__Provider*
/// @param param1 KNSCore__Entry*
void k_nscore__provider_qbase_load_entry_details(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#loadPayloadLink)
///
/// @param self KNSCore__Provider*
/// @param entry KNSCore__Entry*
/// @param linkId int
void k_nscore__provider_load_payload_link(void* self, void* entry, int linkId);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#loadPayloadLink)
///
/// Allows for overriding the related default method
///
/// @param self KNSCore__Provider*
/// @param callback void func(KNSCore__Provider* self, KNSCore__Entry* entry, int linkId)
void k_nscore__provider_on_load_payload_link(void* self, void (*callback)(void*, void*, int));

/// [Upstream resources](https://api.kde.org/knscore-provider.html#loadPayloadLink)
///
/// Base class method implementation
///
/// @param self KNSCore__Provider*
/// @param entry KNSCore__Entry*
/// @param linkId int
void k_nscore__provider_qbase_load_payload_link(void* self, void* entry, int linkId);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#loadComments)
///
/// @param self KNSCore__Provider*
/// @param param1 KNSCore__Entry*
/// @param param2 int
/// @param param3 int
void k_nscore__provider_load_comments(void* self, void* param1, int param2, int param3);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#loadComments)
///
/// Allows for overriding the related default method
///
/// @param self KNSCore__Provider*
/// @param callback void func(KNSCore__Provider* self, KNSCore__Entry* param1, int param2, int param3)
void k_nscore__provider_on_load_comments(void* self, void (*callback)(void*, void*, int, int));

/// [Upstream resources](https://api.kde.org/knscore-provider.html#loadComments)
///
/// Base class method implementation
///
/// @param self KNSCore__Provider*
/// @param param1 KNSCore__Entry*
/// @param param2 int
/// @param param3 int
void k_nscore__provider_qbase_load_comments(void* self, void* param1, int param2, int param3);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#loadPerson)
///
/// @param self KNSCore__Provider*
/// @param param1 const char*
void k_nscore__provider_load_person(void* self, const char* param1);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#loadPerson)
///
/// Allows for overriding the related default method
///
/// @param self KNSCore__Provider*
/// @param callback void func(KNSCore__Provider* self, const char* param1)
void k_nscore__provider_on_load_person(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/knscore-provider.html#loadPerson)
///
/// Base class method implementation
///
/// @param self KNSCore__Provider*
/// @param param1 const char*
void k_nscore__provider_qbase_load_person(void* self, const char* param1);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#loadBasics)
///
/// @param self KNSCore__Provider*
void k_nscore__provider_load_basics(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#loadBasics)
///
/// Allows for overriding the related default method
///
/// @param self KNSCore__Provider*
/// @param callback void func()
void k_nscore__provider_on_load_basics(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/knscore-provider.html#loadBasics)
///
/// Base class method implementation
///
/// @param self KNSCore__Provider*
void k_nscore__provider_qbase_load_basics(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#version)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Provider*
const char* k_nscore__provider_version(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#setVersion)
///
/// @param self KNSCore__Provider*
/// @param version const char*
void k_nscore__provider_set_version(void* self, const char* version);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#website)
///
/// @param self KNSCore__Provider*
QUrl* k_nscore__provider_website(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#setWebsite)
///
/// @param self KNSCore__Provider*
/// @param website QUrl*
void k_nscore__provider_set_website(void* self, void* website);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#host)
///
/// @param self KNSCore__Provider*
QUrl* k_nscore__provider_host(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#setHost)
///
/// @param self KNSCore__Provider*
/// @param host QUrl*
void k_nscore__provider_set_host(void* self, void* host);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#contactEmail)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Provider*
const char* k_nscore__provider_contact_email(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#setContactEmail)
///
/// @param self KNSCore__Provider*
/// @param contactEmail const char*
void k_nscore__provider_set_contact_email(void* self, const char* contactEmail);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#supportsSsl)
///
/// @param self KNSCore__Provider*
bool k_nscore__provider_supports_ssl(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#setSupportsSsl)
///
/// @param self KNSCore__Provider*
/// @param supportsSsl bool
void k_nscore__provider_set_supports_ssl(void* self, bool supportsSsl);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#userCanVote)
///
/// @param self KNSCore__Provider*
bool k_nscore__provider_user_can_vote(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#userCanVote)
///
/// Allows for overriding the related default method
///
/// @param self KNSCore__Provider*
/// @param callback bool func()
void k_nscore__provider_on_user_can_vote(void* self, bool (*callback)());

/// [Upstream resources](https://api.kde.org/knscore-provider.html#userCanVote)
///
/// Base class method implementation
///
/// @param self KNSCore__Provider*
bool k_nscore__provider_qbase_user_can_vote(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#vote)
///
/// @param self KNSCore__Provider*
/// @param param1 KNSCore__Entry*
/// @param param2 uint32_t
void k_nscore__provider_vote(void* self, void* param1, uint32_t param2);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#vote)
///
/// Allows for overriding the related default method
///
/// @param self KNSCore__Provider*
/// @param callback void func(KNSCore__Provider* self, KNSCore__Entry* param1, uint32_t param2)
void k_nscore__provider_on_vote(void* self, void (*callback)(void*, void*, uint32_t));

/// [Upstream resources](https://api.kde.org/knscore-provider.html#vote)
///
/// Base class method implementation
///
/// @param self KNSCore__Provider*
/// @param param1 KNSCore__Entry*
/// @param param2 uint32_t
void k_nscore__provider_qbase_vote(void* self, void* param1, uint32_t param2);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#userCanBecomeFan)
///
/// @param self KNSCore__Provider*
bool k_nscore__provider_user_can_become_fan(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#userCanBecomeFan)
///
/// Allows for overriding the related default method
///
/// @param self KNSCore__Provider*
/// @param callback bool func()
void k_nscore__provider_on_user_can_become_fan(void* self, bool (*callback)());

/// [Upstream resources](https://api.kde.org/knscore-provider.html#userCanBecomeFan)
///
/// Base class method implementation
///
/// @param self KNSCore__Provider*
bool k_nscore__provider_qbase_user_can_become_fan(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#becomeFan)
///
/// @param self KNSCore__Provider*
/// @param param1 KNSCore__Entry*
void k_nscore__provider_become_fan(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#becomeFan)
///
/// Allows for overriding the related default method
///
/// @param self KNSCore__Provider*
/// @param callback void func(KNSCore__Provider* self, KNSCore__Entry* param1)
void k_nscore__provider_on_become_fan(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/knscore-provider.html#becomeFan)
///
/// Base class method implementation
///
/// @param self KNSCore__Provider*
/// @param param1 KNSCore__Entry*
void k_nscore__provider_qbase_become_fan(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#setTagFilter)
///
/// @param self KNSCore__Provider*
/// @param tagFilter const char**
void k_nscore__provider_set_tag_filter(void* self, const char* tagFilter[static 1]);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#tagFilter)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Provider*
const char** k_nscore__provider_tag_filter(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#setDownloadTagFilter)
///
/// @param self KNSCore__Provider*
/// @param downloadTagFilter const char**
void k_nscore__provider_set_download_tag_filter(void* self, const char* downloadTagFilter[static 1]);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#downloadTagFilter)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Provider*
const char** k_nscore__provider_download_tag_filter(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#providerInitialized)
///
/// @param self KNSCore__Provider*
/// @param param1 KNSCore__Provider*
void k_nscore__provider_provider_initialized(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#providerInitialized)
///
/// @param self KNSCore__Provider*
/// @param callback void func(KNSCore__Provider* self, KNSCore__Provider* param1)
void k_nscore__provider_on_provider_initialized(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/knscore-provider.html#loadingFinished)
///
/// @param self KNSCore__Provider*
/// @param param1 KNSCore__Provider__SearchRequest*
/// @param param2 libqt_list /* of KNSCore__Entry* */
void k_nscore__provider_loading_finished(void* self, void* param1, libqt_list param2);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#loadingFinished)
///
/// @param self KNSCore__Provider*
/// @param callback void func(KNSCore__Provider* self, KNSCore__Provider__SearchRequest* param1, KNSCore__Entry** param2)
void k_nscore__provider_on_loading_finished(void* self, void (*callback)(void*, void*, KNSCore__Entry**));

/// [Upstream resources](https://api.kde.org/knscore-provider.html#loadingFailed)
///
/// @param self KNSCore__Provider*
/// @param param1 KNSCore__Provider__SearchRequest*
void k_nscore__provider_loading_failed(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#loadingFailed)
///
/// @param self KNSCore__Provider*
/// @param callback void func(KNSCore__Provider* self, KNSCore__Provider__SearchRequest* param1)
void k_nscore__provider_on_loading_failed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/knscore-provider.html#entryDetailsLoaded)
///
/// @param self KNSCore__Provider*
/// @param param1 KNSCore__Entry*
void k_nscore__provider_entry_details_loaded(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#entryDetailsLoaded)
///
/// @param self KNSCore__Provider*
/// @param callback void func(KNSCore__Provider* self, KNSCore__Entry* param1)
void k_nscore__provider_on_entry_details_loaded(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/knscore-provider.html#payloadLinkLoaded)
///
/// @param self KNSCore__Provider*
/// @param param1 KNSCore__Entry*
void k_nscore__provider_payload_link_loaded(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#payloadLinkLoaded)
///
/// @param self KNSCore__Provider*
/// @param callback void func(KNSCore__Provider* self, KNSCore__Entry* param1)
void k_nscore__provider_on_payload_link_loaded(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/knscore-provider.html#basicsLoaded)
///
/// @param self KNSCore__Provider*
void k_nscore__provider_basics_loaded(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#basicsLoaded)
///
/// @param self KNSCore__Provider*
/// @param callback void func(KNSCore__Provider* self)
void k_nscore__provider_on_basics_loaded(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/knscore-provider.html#searchPresetsLoaded)
///
/// @param self KNSCore__Provider*
/// @param presets libqt_list /* of KNSCore__Provider__SearchPreset* */
void k_nscore__provider_search_presets_loaded(void* self, libqt_list presets);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#searchPresetsLoaded)
///
/// @param self KNSCore__Provider*
/// @param callback void func(KNSCore__Provider* self, KNSCore__Provider__SearchPreset** presets)
void k_nscore__provider_on_search_presets_loaded(void* self, void (*callback)(void*, KNSCore__Provider__SearchPreset**));

/// [Upstream resources](https://api.kde.org/knscore-provider.html#signalInformation)
///
/// @param self KNSCore__Provider*
/// @param param1 const char*
void k_nscore__provider_signal_information(void* self, const char* param1);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#signalInformation)
///
/// @param self KNSCore__Provider*
/// @param callback void func(KNSCore__Provider* self, const char* param1)
void k_nscore__provider_on_signal_information(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/knscore-provider.html#signalError)
///
/// @param self KNSCore__Provider*
/// @param param1 const char*
void k_nscore__provider_signal_error(void* self, const char* param1);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#signalError)
///
/// @param self KNSCore__Provider*
/// @param callback void func(KNSCore__Provider* self, const char* param1)
void k_nscore__provider_on_signal_error(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/knscore-provider.html#signalErrorCode)
///
/// @param self KNSCore__Provider*
/// @param errorCode enum KNSCore__ErrorCode__ErrorCode
/// @param message const char*
/// @param metadata QVariant*
void k_nscore__provider_signal_error_code(void* self, int32_t errorCode, const char* message, void* metadata);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#signalErrorCode)
///
/// @param self KNSCore__Provider*
/// @param callback void func(KNSCore__Provider* self, enum KNSCore__ErrorCode__ErrorCode errorCode, const char* message, QVariant* metadata)
void k_nscore__provider_on_signal_error_code(void* self, void (*callback)(void*, int32_t, const char*, void*));

/// [Upstream resources](https://api.kde.org/knscore-provider.html#categoriesMetadataLoded)
///
/// @param self KNSCore__Provider*
/// @param categories libqt_list /* of KNSCore__Provider__CategoryMetadata* */
void k_nscore__provider_categories_metadata_loded(void* self, libqt_list categories);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#categoriesMetadataLoded)
///
/// @param self KNSCore__Provider*
/// @param callback void func(KNSCore__Provider* self, KNSCore__Provider__CategoryMetadata** categories)
void k_nscore__provider_on_categories_metadata_loded(void* self, void (*callback)(void*, KNSCore__Provider__CategoryMetadata**));

/// [Upstream resources](https://api.kde.org/knscore-provider.html#tagFilterChanged)
///
/// @param self KNSCore__Provider*
void k_nscore__provider_tag_filter_changed(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#tagFilterChanged)
///
/// @param self KNSCore__Provider*
/// @param callback void func(KNSCore__Provider* self)
void k_nscore__provider_on_tag_filter_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/knscore-provider.html#downloadTagFilterChanged)
///
/// @param self KNSCore__Provider*
void k_nscore__provider_download_tag_filter_changed(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#downloadTagFilterChanged)
///
/// @param self KNSCore__Provider*
/// @param callback void func(KNSCore__Provider* self)
void k_nscore__provider_on_download_tag_filter_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/knscore-provider.html#setName)
///
/// @param self KNSCore__Provider*
/// @param name const char*
void k_nscore__provider_set_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#setName)
///
/// Allows for overriding the related default method
///
/// @param self KNSCore__Provider*
/// @param callback void func(KNSCore__Provider* self, const char* name)
void k_nscore__provider_on_set_name(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/knscore-provider.html#setName)
///
/// Base class method implementation
///
/// @param self KNSCore__Provider*
/// @param name const char*
void k_nscore__provider_qbase_set_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#setIcon)
///
/// @param self KNSCore__Provider*
/// @param icon QUrl*
void k_nscore__provider_set_icon(void* self, void* icon);

/// [Upstream resources](https://api.kde.org/knscore-provider.html#setIcon)
///
/// Allows for overriding the related default method
///
/// @param self KNSCore__Provider*
/// @param callback void func(KNSCore__Provider* self, QUrl* icon)
void k_nscore__provider_on_set_icon(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/knscore-provider.html#setIcon)
///
/// Base class method implementation
///
/// @param self KNSCore__Provider*
/// @param icon QUrl*
void k_nscore__provider_qbase_set_icon(void* self, void* icon);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_nscore__provider_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_nscore__provider_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Provider*
const char* k_nscore__provider_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KNSCore__Provider*
/// @param name char*
void k_nscore__provider_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KNSCore__Provider*
bool k_nscore__provider_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KNSCore__Provider*
bool k_nscore__provider_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KNSCore__Provider*
bool k_nscore__provider_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KNSCore__Provider*
bool k_nscore__provider_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KNSCore__Provider*
/// @param b bool
bool k_nscore__provider_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KNSCore__Provider*
QThread* k_nscore__provider_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KNSCore__Provider*
/// @param thread QThread*
bool k_nscore__provider_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNSCore__Provider*
/// @param interval int
int32_t k_nscore__provider_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNSCore__Provider*
/// @param id int
void k_nscore__provider_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNSCore__Provider*
/// @param id enum Qt__TimerId
void k_nscore__provider_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KNSCore__Provider*
libqt_list /* of QObject* */ k_nscore__provider_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KNSCore__Provider*
/// @param parent QObject*
void k_nscore__provider_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KNSCore__Provider*
/// @param filterObj QObject*
void k_nscore__provider_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KNSCore__Provider*
/// @param obj QObject*
void k_nscore__provider_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_nscore__provider_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KNSCore__Provider*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_nscore__provider_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_nscore__provider_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_nscore__provider_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KNSCore__Provider*
void k_nscore__provider_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KNSCore__Provider*
void k_nscore__provider_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KNSCore__Provider*
/// @param name const char*
/// @param value QVariant*
bool k_nscore__provider_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KNSCore__Provider*
/// @param name const char*
QVariant* k_nscore__provider_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Provider*
const char** k_nscore__provider_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KNSCore__Provider*
QBindingStorage* k_nscore__provider_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KNSCore__Provider*
const QBindingStorage* k_nscore__provider_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__Provider*
void k_nscore__provider_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__Provider*
/// @param callback void func(KNSCore__Provider* self)
void k_nscore__provider_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KNSCore__Provider*
QObject* k_nscore__provider_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KNSCore__Provider*
/// @param classname const char*
bool k_nscore__provider_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KNSCore__Provider*
void k_nscore__provider_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KNSCore__Provider*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_nscore__provider_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNSCore__Provider*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_nscore__provider_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_nscore__provider_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KNSCore__Provider*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_nscore__provider_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__Provider*
/// @param param1 QObject*
void k_nscore__provider_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__Provider*
/// @param callback void func(KNSCore__Provider* self, QObject* param1)
void k_nscore__provider_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__Provider*
/// @param event QEvent*
bool k_nscore__provider_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__Provider*
/// @param event QEvent*
bool k_nscore__provider_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__Provider*
/// @param callback bool func(KNSCore__Provider* self, QEvent* event)
void k_nscore__provider_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__Provider*
/// @param watched QObject*
/// @param event QEvent*
bool k_nscore__provider_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__Provider*
/// @param watched QObject*
/// @param event QEvent*
bool k_nscore__provider_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__Provider*
/// @param callback bool func(KNSCore__Provider* self, QObject* watched, QEvent* event)
void k_nscore__provider_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__Provider*
/// @param event QTimerEvent*
void k_nscore__provider_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__Provider*
/// @param event QTimerEvent*
void k_nscore__provider_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__Provider*
/// @param callback void func(KNSCore__Provider* self, QTimerEvent* event)
void k_nscore__provider_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__Provider*
/// @param event QChildEvent*
void k_nscore__provider_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__Provider*
/// @param event QChildEvent*
void k_nscore__provider_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__Provider*
/// @param callback void func(KNSCore__Provider* self, QChildEvent* event)
void k_nscore__provider_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__Provider*
/// @param event QEvent*
void k_nscore__provider_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__Provider*
/// @param event QEvent*
void k_nscore__provider_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__Provider*
/// @param callback void func(KNSCore__Provider* self, QEvent* event)
void k_nscore__provider_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__Provider*
/// @param signal QMetaMethod*
void k_nscore__provider_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__Provider*
/// @param signal QMetaMethod*
void k_nscore__provider_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__Provider*
/// @param callback void func(KNSCore__Provider* self, QMetaMethod* signal)
void k_nscore__provider_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__Provider*
/// @param signal QMetaMethod*
void k_nscore__provider_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__Provider*
/// @param signal QMetaMethod*
void k_nscore__provider_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__Provider*
/// @param callback void func(KNSCore__Provider* self, QMetaMethod* signal)
void k_nscore__provider_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__Provider*
QObject* k_nscore__provider_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__Provider*
QObject* k_nscore__provider_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__Provider*
/// @param callback QObject* func()
void k_nscore__provider_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__Provider*
int32_t k_nscore__provider_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__Provider*
int32_t k_nscore__provider_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__Provider*
/// @param callback int32_t func()
void k_nscore__provider_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__Provider*
/// @param signal const char*
int32_t k_nscore__provider_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__Provider*
/// @param signal const char*
int32_t k_nscore__provider_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__Provider*
/// @param callback int32_t func(KNSCore__Provider* self, const char* signal)
void k_nscore__provider_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__Provider*
/// @param signal QMetaMethod*
bool k_nscore__provider_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__Provider*
/// @param signal QMetaMethod*
bool k_nscore__provider_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__Provider*
/// @param callback bool func(KNSCore__Provider* self, QMetaMethod* signal)
void k_nscore__provider_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__Provider*
/// @param callback void func(KNSCore__Provider* self, const char* objectName)
void k_nscore__provider_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KNSCore__Provider*
void k_nscore__provider_delete(void* self);

/// https://api.kde.org/knscore-provider-searchrequest.html

/// k_nscore__provider__searchrequest_new constructs a new KNSCore::Provider::SearchRequest object.
///
KNSCore__Provider__SearchRequest* k_nscore__provider__searchrequest_new();

/// k_nscore__provider__searchrequest_new2 constructs a new KNSCore::Provider::SearchRequest object.
///
/// @param param1 KNSCore__Provider__SearchRequest*
KNSCore__Provider__SearchRequest* k_nscore__provider__searchrequest_new2(void* param1);

/// k_nscore__provider__searchrequest_new3 constructs a new KNSCore::Provider::SearchRequest object.
///
/// @param sortMode_ enum KNSCore__Provider__SortMode
KNSCore__Provider__SearchRequest* k_nscore__provider__searchrequest_new3(int32_t sortMode_);

/// k_nscore__provider__searchrequest_new4 constructs a new KNSCore::Provider::SearchRequest object.
///
/// @param sortMode_ enum KNSCore__Provider__SortMode
/// @param filter_ enum KNSCore__Provider__Filter
KNSCore__Provider__SearchRequest* k_nscore__provider__searchrequest_new4(int32_t sortMode_, int32_t filter_);

/// k_nscore__provider__searchrequest_new5 constructs a new KNSCore::Provider::SearchRequest object.
///
/// @param sortMode_ enum KNSCore__Provider__SortMode
/// @param filter_ enum KNSCore__Provider__Filter
/// @param searchTerm_ const char*
KNSCore__Provider__SearchRequest* k_nscore__provider__searchrequest_new5(int32_t sortMode_, int32_t filter_, const char* searchTerm_);

/// k_nscore__provider__searchrequest_new6 constructs a new KNSCore::Provider::SearchRequest object.
///
/// @param sortMode_ enum KNSCore__Provider__SortMode
/// @param filter_ enum KNSCore__Provider__Filter
/// @param searchTerm_ const char*
/// @param categories_ const char**
KNSCore__Provider__SearchRequest* k_nscore__provider__searchrequest_new6(int32_t sortMode_, int32_t filter_, const char* searchTerm_, const char* categories_[static 1]);

/// k_nscore__provider__searchrequest_new7 constructs a new KNSCore::Provider::SearchRequest object.
///
/// @param sortMode_ enum KNSCore__Provider__SortMode
/// @param filter_ enum KNSCore__Provider__Filter
/// @param searchTerm_ const char*
/// @param categories_ const char**
/// @param page_ int
KNSCore__Provider__SearchRequest* k_nscore__provider__searchrequest_new7(int32_t sortMode_, int32_t filter_, const char* searchTerm_, const char* categories_[static 1], int page_);

/// k_nscore__provider__searchrequest_new8 constructs a new KNSCore::Provider::SearchRequest object.
///
/// @param sortMode_ enum KNSCore__Provider__SortMode
/// @param filter_ enum KNSCore__Provider__Filter
/// @param searchTerm_ const char*
/// @param categories_ const char**
/// @param page_ int
/// @param pageSize_ int
KNSCore__Provider__SearchRequest* k_nscore__provider__searchrequest_new8(int32_t sortMode_, int32_t filter_, const char* searchTerm_, const char* categories_[static 1], int page_, int pageSize_);

/// [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#sortMode-var)
///
/// @param self KNSCore__Provider__SearchRequest*
///
/// @return enum KNSCore__Provider__SortMode
int32_t k_nscore__provider__searchrequest_sort_mode(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#sortMode-var)
///
/// @param self KNSCore__Provider__SearchRequest*
/// @param sortMode enum KNSCore__Provider__SortMode
void k_nscore__provider__searchrequest_set_sort_mode(void* self, int32_t sortMode);

/// [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#filter-var)
///
/// @param self KNSCore__Provider__SearchRequest*
///
/// @return enum KNSCore__Provider__Filter
int32_t k_nscore__provider__searchrequest_filter(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#filter-var)
///
/// @param self KNSCore__Provider__SearchRequest*
/// @param filter enum KNSCore__Provider__Filter
void k_nscore__provider__searchrequest_set_filter(void* self, int32_t filter);

/// [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#searchTerm-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Provider__SearchRequest*
const char* k_nscore__provider__searchrequest_search_term(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#searchTerm-var)
///
/// @param self KNSCore__Provider__SearchRequest*
/// @param searchTerm const char*
void k_nscore__provider__searchrequest_set_search_term(void* self, const char* searchTerm);

/// [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#categories-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Provider__SearchRequest*
const char** k_nscore__provider__searchrequest_categories(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#categories-var)
///
/// @param self KNSCore__Provider__SearchRequest*
/// @param categories const char**
void k_nscore__provider__searchrequest_set_categories(void* self, const char* categories[static 1]);

/// [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#page-var)
///
/// @param self KNSCore__Provider__SearchRequest*
int32_t k_nscore__provider__searchrequest_page(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#page-var)
///
/// @param self KNSCore__Provider__SearchRequest*
/// @param page int
void k_nscore__provider__searchrequest_set_page(void* self, int page);

/// [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#pageSize-var)
///
/// @param self KNSCore__Provider__SearchRequest*
int32_t k_nscore__provider__searchrequest_page_size(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#pageSize-var)
///
/// @param self KNSCore__Provider__SearchRequest*
/// @param pageSize int
void k_nscore__provider__searchrequest_set_page_size(void* self, int pageSize);

/// [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#hashForRequest)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Provider__SearchRequest*
const char* k_nscore__provider__searchrequest_hash_for_request(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#operator-eq-eq)
///
/// @param self KNSCore__Provider__SearchRequest*
/// @param other KNSCore__Provider__SearchRequest*
bool k_nscore__provider__searchrequest_operator_equal(void* self, void* other);

/// [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#operator-eq)
///
/// @param self KNSCore__Provider__SearchRequest*
/// @param param1 KNSCore__Provider__SearchRequest*
void k_nscore__provider__searchrequest_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self KNSCore__Provider__SearchRequest*
void k_nscore__provider__searchrequest_delete(void* self);

/// https://api.kde.org/knscore-provider-categorymetadata.html

/// k_nscore__provider__categorymetadata_new constructs a new KNSCore::Provider::CategoryMetadata object.
///
/// @param param1 KNSCore__Provider__CategoryMetadata*
KNSCore__Provider__CategoryMetadata* k_nscore__provider__categorymetadata_new(void* param1);

/// [Upstream resources](https://api.kde.org/knscore-provider-categorymetadata.html#id-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Provider__CategoryMetadata*
const char* k_nscore__provider__categorymetadata_id(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider-categorymetadata.html#id-var)
///
/// @param self KNSCore__Provider__CategoryMetadata*
/// @param id const char*
void k_nscore__provider__categorymetadata_set_id(void* self, const char* id);

/// [Upstream resources](https://api.kde.org/knscore-provider-categorymetadata.html#name-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Provider__CategoryMetadata*
const char* k_nscore__provider__categorymetadata_name(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider-categorymetadata.html#name-var)
///
/// @param self KNSCore__Provider__CategoryMetadata*
/// @param name const char*
void k_nscore__provider__categorymetadata_set_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/knscore-provider-categorymetadata.html#displayName-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Provider__CategoryMetadata*
const char* k_nscore__provider__categorymetadata_display_name(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider-categorymetadata.html#displayName-var)
///
/// @param self KNSCore__Provider__CategoryMetadata*
/// @param displayName const char*
void k_nscore__provider__categorymetadata_set_display_name(void* self, const char* displayName);

/// [Upstream resources](https://api.kde.org/knscore-provider-categorymetadata.html#operator-eq)
///
/// @param self KNSCore__Provider__CategoryMetadata*
/// @param param1 KNSCore__Provider__CategoryMetadata*
void k_nscore__provider__categorymetadata_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self KNSCore__Provider__CategoryMetadata*
void k_nscore__provider__categorymetadata_delete(void* self);

/// https://api.kde.org/knscore-provider-searchpreset.html

/// k_nscore__provider__searchpreset_new constructs a new KNSCore::Provider::SearchPreset object.
///
/// @param param1 KNSCore__Provider__SearchPreset*
KNSCore__Provider__SearchPreset* k_nscore__provider__searchpreset_new(void* param1);

/// [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#request-var)
///
/// @param self KNSCore__Provider__SearchPreset*
KNSCore__Provider__SearchRequest* k_nscore__provider__searchpreset_request(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#request-var)
///
/// @param self KNSCore__Provider__SearchPreset*
/// @param request KNSCore__Provider__SearchRequest*
void k_nscore__provider__searchpreset_set_request(void* self, void* request);

/// [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#displayName-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Provider__SearchPreset*
const char* k_nscore__provider__searchpreset_display_name(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#displayName-var)
///
/// @param self KNSCore__Provider__SearchPreset*
/// @param displayName const char*
void k_nscore__provider__searchpreset_set_display_name(void* self, const char* displayName);

/// [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#iconName-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Provider__SearchPreset*
const char* k_nscore__provider__searchpreset_icon_name(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#iconName-var)
///
/// @param self KNSCore__Provider__SearchPreset*
/// @param iconName const char*
void k_nscore__provider__searchpreset_set_icon_name(void* self, const char* iconName);

/// [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#type-var)
///
/// @param self KNSCore__Provider__SearchPreset*
///
/// @return enum KNSCore__Provider__SearchPresetTypes
int32_t k_nscore__provider__searchpreset_type(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#type-var)
///
/// @param self KNSCore__Provider__SearchPreset*
/// @param type enum KNSCore__Provider__SearchPresetTypes
void k_nscore__provider__searchpreset_set_type(void* self, int32_t type);

/// [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#providerId-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Provider__SearchPreset*
const char* k_nscore__provider__searchpreset_provider_id(void* self);

/// [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#providerId-var)
///
/// @param self KNSCore__Provider__SearchPreset*
/// @param providerId const char*
void k_nscore__provider__searchpreset_set_provider_id(void* self, const char* providerId);

/// [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#operator-eq)
///
/// @param self KNSCore__Provider__SearchPreset*
/// @param param1 KNSCore__Provider__SearchPreset*
void k_nscore__provider__searchpreset_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self KNSCore__Provider__SearchPreset*
void k_nscore__provider__searchpreset_delete(void* self);

/// https://api.kde.org/knscore-provider.html#types

typedef enum {
    KNSCORE_PROVIDER_SORTMODE_NEWEST = 0,
    KNSCORE_PROVIDER_SORTMODE_ALPHABETICAL = 1,
    KNSCORE_PROVIDER_SORTMODE_RATING = 2,
    KNSCORE_PROVIDER_SORTMODE_DOWNLOADS = 3
} KNSCore__Provider__SortMode;

typedef enum {
    KNSCORE_PROVIDER_FILTER_NONE = 0,
    KNSCORE_PROVIDER_FILTER_INSTALLED = 1,
    KNSCORE_PROVIDER_FILTER_UPDATES = 2,
    KNSCORE_PROVIDER_FILTER_EXACTENTRYID = 3
} KNSCore__Provider__Filter;

typedef enum {
    KNSCORE_PROVIDER_SEARCHPRESETTYPES_NOPRESETTYPE = 0,
    KNSCORE_PROVIDER_SEARCHPRESETTYPES_GOBACK = 1,
    KNSCORE_PROVIDER_SEARCHPRESETTYPES_ROOT = 2,
    KNSCORE_PROVIDER_SEARCHPRESETTYPES_START = 3,
    KNSCORE_PROVIDER_SEARCHPRESETTYPES_POPULAR = 4,
    KNSCORE_PROVIDER_SEARCHPRESETTYPES_FEATURED = 5,
    KNSCORE_PROVIDER_SEARCHPRESETTYPES_RECOMMENDED = 6,
    KNSCORE_PROVIDER_SEARCHPRESETTYPES_SHELF = 7,
    KNSCORE_PROVIDER_SEARCHPRESETTYPES_SUBSCRIPTION = 8,
    KNSCORE_PROVIDER_SEARCHPRESETTYPES_NEW = 9,
    KNSCORE_PROVIDER_SEARCHPRESETTYPES_FOLDERUP = 10,
    KNSCORE_PROVIDER_SEARCHPRESETTYPES_ALLENTRIES = 11
} KNSCore__Provider__SearchPresetTypes;

#endif
