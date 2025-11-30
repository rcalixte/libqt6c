#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBSESSIONCONFIGINTERFACE_H
#define SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBSESSIONCONFIGINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/ktexteditor-sessionconfiginterface.html

/// k_texteditor__sessionconfiginterface_new constructs a new KTextEditor::SessionConfigInterface object.
///
KTextEditor__SessionConfigInterface* k_texteditor__sessionconfiginterface_new();

/// [Upstream resources](https://api.kde.org/ktexteditor-sessionconfiginterface.html#readSessionConfig)
///
/// @param self KTextEditor__SessionConfigInterface*
/// @param config KConfigGroup*
void k_texteditor__sessionconfiginterface_read_session_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/ktexteditor-sessionconfiginterface.html#readSessionConfig)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__SessionConfigInterface*
/// @param callback void func(KTextEditor__SessionConfigInterface* self, KConfigGroup* config)
void k_texteditor__sessionconfiginterface_on_read_session_config(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-sessionconfiginterface.html#readSessionConfig)
///
/// Base class method implementation
///
/// @param self KTextEditor__SessionConfigInterface*
/// @param config KConfigGroup*
void k_texteditor__sessionconfiginterface_qbase_read_session_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/ktexteditor-sessionconfiginterface.html#writeSessionConfig)
///
/// @param self KTextEditor__SessionConfigInterface*
/// @param config KConfigGroup*
void k_texteditor__sessionconfiginterface_write_session_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/ktexteditor-sessionconfiginterface.html#writeSessionConfig)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__SessionConfigInterface*
/// @param callback void func(KTextEditor__SessionConfigInterface* self, KConfigGroup* config)
void k_texteditor__sessionconfiginterface_on_write_session_config(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-sessionconfiginterface.html#writeSessionConfig)
///
/// Base class method implementation
///
/// @param self KTextEditor__SessionConfigInterface*
/// @param config KConfigGroup*
void k_texteditor__sessionconfiginterface_qbase_write_session_config(void* self, void* config);

/// Delete this object from C++ memory.
///
/// @param self KTextEditor__SessionConfigInterface*
void k_texteditor__sessionconfiginterface_delete(void* self);

#endif
