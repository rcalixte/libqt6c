#pragma once
#ifndef SRC_TEXTTOSPEECH_QT6C_LIBQTEXTTOSPEECHPLUGIN_H
#define SRC_TEXTTOSPEECH_QT6C_LIBQTEXTTOSPEECHPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechplugin.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechplugin.html#operator-eq)
///
/// @param self QTextToSpeechPlugin*
/// @param param1 QTextToSpeechPlugin*
///
void q_texttospeechplugin_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechplugin.html#dtor.QTextToSpeechPlugin)
///
/// Delete this object from C++ memory.
///
/// @param self QTextToSpeechPlugin*
///
void q_texttospeechplugin_delete(void* self);

#endif
