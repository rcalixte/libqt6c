#pragma once
#ifndef SRC_EXTRAS_KSERVICE_QT6C_LIBKSERVICE_H
#define SRC_EXTRAS_KSERVICE_QT6C_LIBKSERVICE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kservice.html

/// k_service_new constructs a new KService object.
///
/// @param name const char*
/// @param exec const char*
/// @param icon const char*
KService* k_service_new(const char* name, const char* exec, const char* icon);

/// k_service_new2 constructs a new KService object.
///
/// @param fullpath const char*
KService* k_service_new2(const char* fullpath);

/// k_service_new3 constructs a new KService object.
///
/// @param config KDesktopFile*
KService* k_service_new3(void* config);

/// k_service_new4 constructs a new KService object.
///
/// @param other KService*
KService* k_service_new4(void* other);

/// k_service_new5 constructs a new KService object.
///
/// @param config KDesktopFile*
/// @param entryPath const char*
KService* k_service_new5(void* config, const char* entryPath);

/// [Upstream resources](https://api.kde.org/kservice.html#isApplication)
///
/// @param self KService*
bool k_service_is_application(void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#exec)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KService*
const char* k_service_exec(void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#icon)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KService*
const char* k_service_icon(void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#terminal)
///
/// @param self KService*
bool k_service_terminal(void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#terminalOptions)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KService*
const char* k_service_terminal_options(void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#runOnDiscreteGpu)
///
/// @param self KService*
bool k_service_run_on_discrete_gpu(void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#substituteUid)
///
/// @param self KService*
bool k_service_substitute_uid(void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#username)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KService*
const char* k_service_username(void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#desktopEntryName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KService*
const char* k_service_desktop_entry_name(void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#menuId)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KService*
const char* k_service_menu_id(void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#storageId)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KService*
const char* k_service_storage_id(void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#workingDirectory)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KService*
const char* k_service_working_directory(void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#comment)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KService*
const char* k_service_comment(void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#genericName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KService*
const char* k_service_generic_name(void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#untranslatedGenericName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KService*
const char* k_service_untranslated_generic_name(void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#untranslatedName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KService*
const char* k_service_untranslated_name(void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#keywords)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KService*
const char** k_service_keywords(void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#categories)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KService*
const char** k_service_categories(void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#mimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KService*
const char** k_service_mime_types(void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#schemeHandlers)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KService*
const char** k_service_scheme_handlers(void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#supportedProtocols)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KService*
const char** k_service_supported_protocols(void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#hasMimeType)
///
/// @param self KService*
/// @param mimeType const char*
bool k_service_has_mime_type(void* self, const char* mimeType);

/// [Upstream resources](https://api.kde.org/kservice.html#actions)
///
/// @param self KService*
libqt_list /* of KServiceAction* */ k_service_actions(void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#allowMultipleFiles)
///
/// @param self KService*
bool k_service_allow_multiple_files(void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#noDisplay)
///
/// @param self KService*
bool k_service_no_display(void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#showInCurrentDesktop)
///
/// @param self KService*
bool k_service_show_in_current_desktop(void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#showOnCurrentPlatform)
///
/// @param self KService*
bool k_service_show_on_current_platform(void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#docPath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KService*
const char* k_service_doc_path(void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#locateLocal)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KService*
const char* k_service_locate_local(void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#setMenuId)
///
/// @param self KService*
/// @param menuId const char*
void k_service_set_menu_id(void* self, const char* menuId);

/// [Upstream resources](https://api.kde.org/kservice.html#setTerminal)
///
/// @param self KService*
/// @param b bool
void k_service_set_terminal(void* self, bool b);

/// [Upstream resources](https://api.kde.org/kservice.html#setTerminalOptions)
///
/// @param self KService*
/// @param options const char*
void k_service_set_terminal_options(void* self, const char* options);

/// [Upstream resources](https://api.kde.org/kservice.html#setExec)
///
/// @param self KService*
/// @param exec const char*
void k_service_set_exec(void* self, const char* exec);

/// [Upstream resources](https://api.kde.org/kservice.html#setWorkingDirectory)
///
/// @param self KService*
/// @param workingDir const char*
void k_service_set_working_directory(void* self, const char* workingDir);

/// [Upstream resources](https://api.kde.org/kservice.html#newServicePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param showInMenu bool
/// @param suggestedName const char*
const char* k_service_new_service_path(bool showInMenu, const char* suggestedName);

/// [Upstream resources](https://api.kde.org/kservice.html#aliasFor)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KService*
const char* k_service_alias_for(void* self);

/// Inherited from KSycocaEntry
///
/// [Upstream resources](https://api.kde.org/ksycocaentry.html#isType)
///
/// @param self KService*
/// @param t enum KSycocaEntry__KSycocaType
bool k_service_is_type(void* self, int32_t t);

/// Inherited from KSycocaEntry
///
/// [Upstream resources](https://api.kde.org/ksycocaentry.html#sycocaType)
///
/// @param self KService*
///
/// @return enum KSycocaEntry__KSycocaType
int32_t k_service_sycoca_type(void* self);

/// Inherited from KSycocaEntry
///
/// [Upstream resources](https://api.kde.org/ksycocaentry.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KService*
const char* k_service_name(void* self);

/// Inherited from KSycocaEntry
///
/// [Upstream resources](https://api.kde.org/ksycocaentry.html#entryPath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KService*
const char* k_service_entry_path(void* self);

/// Inherited from KSycocaEntry
///
/// [Upstream resources](https://api.kde.org/ksycocaentry.html#isValid)
///
/// @param self KService*
bool k_service_is_valid(void* self);

/// Inherited from KSycocaEntry
///
/// [Upstream resources](https://api.kde.org/ksycocaentry.html#isDeleted)
///
/// @param self KService*
bool k_service_is_deleted(void* self);

/// Inherited from KSycocaEntry
///
/// [Upstream resources](https://api.kde.org/ksycocaentry.html#setDeleted)
///
/// @param self KService*
/// @param deleted bool
void k_service_set_deleted(void* self, bool deleted);

/// Inherited from KSycocaEntry
///
/// [Upstream resources](https://api.kde.org/ksycocaentry.html#isSeparator)
///
/// @param self KService*
bool k_service_is_separator(void* self);

/// [Upstream resources](https://api.kde.org/kservice.html#dtor.KService)
///
/// Delete this object from C++ memory.
///
/// @param self KService*
void k_service_delete(void* self);

#endif
