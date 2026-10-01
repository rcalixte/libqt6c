#pragma once
#ifndef EXTRAS_KSERVICE_LIBKSERVICE_H
#define EXTRAS_KSERVICE_LIBKSERVICE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kservice.html)

/// k_service_new constructs a new KService object.
///
/// @param name const char*
/// @param exec const char*
/// @param icon const char*
///
KService* k_service_new(const char* name, const char* exec, const char* icon);

/// [Upstream resources](https://api.kde.org/kservice.html)

/// k_service_new2 constructs a new KService object.
///
/// @param fullpath const char*
///
KService* k_service_new2(const char* fullpath);

/// [Upstream resources](https://api.kde.org/kservice.html)

/// k_service_new3 constructs a new KService object.
///
/// @param config KDesktopFile*
///
KService* k_service_new3(const void* config);

/// [Upstream resources](https://api.kde.org/kservice.html)

/// k_service_new4 constructs a new KService object.
///
/// @param other KService*
///
KService* k_service_new4(const void* other);

/// [Upstream resources](https://api.kde.org/kservice.html)

/// k_service_new5 constructs a new KService object.
///
/// @param config KDesktopFile*
/// @param entryPath const char*
///
KService* k_service_new5(const void* config, const char* entryPath);

/// [Upstream resources](https://api.kde.org/kservice.html#isApplication)
///
/// @param self const KService*
///
bool k_service_is_application(const void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#exec)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KService*
///
const char* k_service_exec(const void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#icon)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KService*
///
const char* k_service_icon(const void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#terminal)
///
/// @param self const KService*
///
bool k_service_terminal(const void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#terminalOptions)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KService*
///
const char* k_service_terminal_options(const void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#runOnDiscreteGpu)
///
/// @param self const KService*
///
bool k_service_run_on_discrete_gpu(const void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#substituteUid)
///
/// @param self const KService*
///
bool k_service_substitute_uid(const void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#username)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KService*
///
const char* k_service_username(const void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#desktopEntryName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KService*
///
const char* k_service_desktop_entry_name(const void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#menuId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KService*
///
const char* k_service_menu_id(const void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#storageId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KService*
///
const char* k_service_storage_id(const void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#workingDirectory)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KService*
///
const char* k_service_working_directory(const void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#comment)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KService*
///
const char* k_service_comment(const void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#genericName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KService*
///
const char* k_service_generic_name(const void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#untranslatedGenericName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KService*
///
const char* k_service_untranslated_generic_name(const void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#untranslatedName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KService*
///
const char* k_service_untranslated_name(const void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#keywords)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KService*
///
const char** k_service_keywords(const void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#categories)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KService*
///
const char** k_service_categories(const void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KService*
///
const char** k_service_mime_types(const void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#schemeHandlers)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KService*
///
const char** k_service_scheme_handlers(const void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#supportedProtocols)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KService*
///
const char** k_service_supported_protocols(const void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#hasMimeType)
///
/// @param self const KService*
/// @param mimeType const char*
///
bool k_service_has_mime_type(const void* self, const char* mimeType);

/// [Upstream resources](https://api.kde.org/kservice.html#actions)
///
/// @param self const KService*
///
/// @return libqt_list of KServiceAction*
///
libqt_list k_service_actions(const void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#allowMultipleFiles)
///
/// @param self const KService*
///
bool k_service_allow_multiple_files(const void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#noDisplay)
///
/// @param self const KService*
///
bool k_service_no_display(const void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#showInCurrentDesktop)
///
/// @param self const KService*
///
bool k_service_show_in_current_desktop(const void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#showOnCurrentPlatform)
///
/// @param self const KService*
///
bool k_service_show_on_current_platform(const void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#docPath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KService*
///
const char* k_service_doc_path(const void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#locateLocal)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KService*
///
const char* k_service_locate_local(const void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#setMenuId)
///
/// @param self KService*
/// @param menuId const char*
///
void k_service_set_menu_id(void* self, const char* menuId);

/// [Upstream resources](https://api.kde.org/kservice.html#setTerminal)
///
/// @param self KService*
/// @param b bool
///
void k_service_set_terminal(void* self, bool b);

/// [Upstream resources](https://api.kde.org/kservice.html#setTerminalOptions)
///
/// @param self KService*
/// @param options const char*
///
void k_service_set_terminal_options(void* self, const char* options);

/// [Upstream resources](https://api.kde.org/kservice.html#setExec)
///
/// @param self KService*
/// @param exec const char*
///
void k_service_set_exec(void* self, const char* exec);

/// [Upstream resources](https://api.kde.org/kservice.html#setWorkingDirectory)
///
/// @param self KService*
/// @param workingDir const char*
///
void k_service_set_working_directory(void* self, const char* workingDir);

/// [Upstream resources](https://api.kde.org/kservice.html#newServicePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param showInMenu bool
/// @param suggestedName const char*
///
const char* k_service_new_service_path(bool showInMenu, const char* suggestedName);

/// [Upstream resources](https://api.kde.org/kservice.html#aliasFor)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KService*
///
const char* k_service_alias_for(const void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#startupNotify)
///
/// @param self const KService*
///
bool k_service_startup_notify(const void* self);

/// Inherited from KSycocaEntry
///
/// [Upstream resources](https://api.kde.org/ksycocaentry.html#isType)
///
/// @param self const KService*
/// @param t enum KSycocaEntry__KSycocaType
///
bool k_service_is_type(const void* self, int32_t t);

/// Inherited from KSycocaEntry
///
/// [Upstream resources](https://api.kde.org/ksycocaentry.html#sycocaType)
///
/// @param self const KService*
///
/// @return enum KSycocaEntry__KSycocaType
///
int32_t k_service_sycoca_type(const void* self);

/// Inherited from KSycocaEntry
///
/// [Upstream resources](https://api.kde.org/ksycocaentry.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KService*
///
const char* k_service_name(const void* self);

/// Inherited from KSycocaEntry
///
/// [Upstream resources](https://api.kde.org/ksycocaentry.html#entryPath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KService*
///
const char* k_service_entry_path(const void* self);

/// Inherited from KSycocaEntry
///
/// [Upstream resources](https://api.kde.org/ksycocaentry.html#isValid)
///
/// @param self const KService*
///
bool k_service_is_valid(const void* self);

/// Inherited from KSycocaEntry
///
/// [Upstream resources](https://api.kde.org/ksycocaentry.html#isDeleted)
///
/// @param self const KService*
///
bool k_service_is_deleted(const void* self);

/// Inherited from KSycocaEntry
///
/// [Upstream resources](https://api.kde.org/ksycocaentry.html#setDeleted)
///
/// @param self KService*
/// @param deleted bool
///
void k_service_set_deleted(void* self, bool deleted);

/// Inherited from KSycocaEntry
///
/// [Upstream resources](https://api.kde.org/ksycocaentry.html#isSeparator)
///
/// @param self const KService*
///
bool k_service_is_separator(const void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#dtor.KService)
///
/// Delete this object from C++ memory.
///
/// @param self KService*
///
void k_service_delete(void* self);

#endif
