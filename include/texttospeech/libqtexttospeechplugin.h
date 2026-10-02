#pragma once
#ifndef TEXTTOSPEECH_LIBQTEXTTOSPEECHPLUGIN_H
#define TEXTTOSPEECH_LIBQTEXTTOSPEECHPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechplugin.html)

/// q_texttospeechplugin_new constructs a new QTextToSpeechPlugin object.
///
QTextToSpeechPlugin* q_texttospeechplugin_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechplugin.html#dtor.QTextToSpeechPlugin)
///
/// Delete this object from C++ memory.
///
/// @param self QTextToSpeechPlugin*
///
void q_texttospeechplugin_delete(void* self);

#endif
