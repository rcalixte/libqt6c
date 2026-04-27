#pragma once
#ifndef SRC_TEXTTOSPEECH_QT6C_LIBQTEXTTOSPEECHENGINE_H
#define SRC_TEXTTOSPEECH_QT6C_LIBQTEXTTOSPEECHENGINE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html)

/// q_texttospeechengine_new constructs a new QTextToSpeechEngine object.
///
QTextToSpeechEngine* q_texttospeechengine_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html)

/// q_texttospeechengine_new2 constructs a new QTextToSpeechEngine object.
///
/// @param parent QObject*
///
QTextToSpeechEngine* q_texttospeechengine_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QTextToSpeechEngine*
///
const QMetaObject* q_texttospeechengine_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QTextToSpeechEngine*
/// @param callback const QMetaObject* func()
///
void q_texttospeechengine_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_texttospeechengine_super_meta_object` instead
///
#define q_texttospeechengine_qbase_meta_object q_texttospeechengine_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QTextToSpeechEngine*
///
const QMetaObject* q_texttospeechengine_super_meta_object(void* self);

/// @param self QTextToSpeechEngine*
/// @param param1 const char*
///
void* q_texttospeechengine_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QTextToSpeechEngine*
/// @param callback void* func(QTextToSpeechEngine* self, const char* param1)
///
void q_texttospeechengine_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_texttospeechengine_super_metacast` instead
///
#define q_texttospeechengine_qbase_metacast q_texttospeechengine_super_metacast

/// Base class method implementation
///
/// @param self QTextToSpeechEngine*
/// @param param1 const char*
///
void* q_texttospeechengine_super_metacast(void* self, const char* param1);

/// @param self QTextToSpeechEngine*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_texttospeechengine_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QTextToSpeechEngine*
/// @param callback int32_t func(QTextToSpeechEngine* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_texttospeechengine_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_texttospeechengine_super_metacall` instead
///
#define q_texttospeechengine_qbase_metacall q_texttospeechengine_super_metacall

/// Base class method implementation
///
/// @param self QTextToSpeechEngine*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_texttospeechengine_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_texttospeechengine_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#capabilities)
///
/// @param self QTextToSpeechEngine*
///
/// @return flag of enum QTextToSpeech__Capability
///
int32_t q_texttospeechengine_capabilities(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#capabilities)
///
/// Allows for overriding the related default method
///
/// @param self QTextToSpeechEngine*
/// @param callback int32_t func()
///
void q_texttospeechengine_on_capabilities(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `q_texttospeechengine_super_capabilities` instead
///
#define q_texttospeechengine_qbase_capabilities q_texttospeechengine_super_capabilities

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#capabilities)
///
/// Base class method implementation
///
/// @param self QTextToSpeechEngine*
///
/// @return flag of enum QTextToSpeech__Capability
///
int32_t q_texttospeechengine_super_capabilities(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#availableLocales)
///
/// @param self QTextToSpeechEngine*
///
/// @return libqt_list of QLocale*
///
libqt_list q_texttospeechengine_available_locales(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#availableLocales)
///
/// Allows for overriding the related default method
///
/// @param self QTextToSpeechEngine*
/// @param callback libqt_list of QLocale* func()
///
void q_texttospeechengine_on_available_locales(void* self, libqt_list (*callback)());

/// @warning DEPRECATED: Use `q_texttospeechengine_super_available_locales` instead
///
#define q_texttospeechengine_qbase_available_locales q_texttospeechengine_super_available_locales

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#availableLocales)
///
/// Base class method implementation
///
/// @param self QTextToSpeechEngine*
///
/// @return libqt_list of QLocale*
///
libqt_list q_texttospeechengine_super_available_locales(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#availableVoices)
///
/// @param self QTextToSpeechEngine*
///
/// @return libqt_list of QVoice*
///
libqt_list q_texttospeechengine_available_voices(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#availableVoices)
///
/// Allows for overriding the related default method
///
/// @param self QTextToSpeechEngine*
/// @param callback libqt_list of QVoice* func()
///
void q_texttospeechengine_on_available_voices(void* self, libqt_list (*callback)());

/// @warning DEPRECATED: Use `q_texttospeechengine_super_available_voices` instead
///
#define q_texttospeechengine_qbase_available_voices q_texttospeechengine_super_available_voices

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#availableVoices)
///
/// Base class method implementation
///
/// @param self QTextToSpeechEngine*
///
/// @return libqt_list of QVoice*
///
libqt_list q_texttospeechengine_super_available_voices(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#say)
///
/// @param self QTextToSpeechEngine*
/// @param text const char*
///
void q_texttospeechengine_say(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#say)
///
/// Allows for overriding the related default method
///
/// @param self QTextToSpeechEngine*
/// @param callback void func(QTextToSpeechEngine* self, const char* text)
///
void q_texttospeechengine_on_say(void* self, void (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_texttospeechengine_super_say` instead
///
#define q_texttospeechengine_qbase_say q_texttospeechengine_super_say

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#say)
///
/// Base class method implementation
///
/// @param self QTextToSpeechEngine*
/// @param text const char*
///
void q_texttospeechengine_super_say(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#synthesize)
///
/// @param self QTextToSpeechEngine*
/// @param text const char*
///
void q_texttospeechengine_synthesize(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#synthesize)
///
/// Allows for overriding the related default method
///
/// @param self QTextToSpeechEngine*
/// @param callback void func(QTextToSpeechEngine* self, const char* text)
///
void q_texttospeechengine_on_synthesize(void* self, void (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_texttospeechengine_super_synthesize` instead
///
#define q_texttospeechengine_qbase_synthesize q_texttospeechengine_super_synthesize

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#synthesize)
///
/// Base class method implementation
///
/// @param self QTextToSpeechEngine*
/// @param text const char*
///
void q_texttospeechengine_super_synthesize(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#stop)
///
/// @param self QTextToSpeechEngine*
/// @param boundaryHint enum QTextToSpeech__BoundaryHint
///
void q_texttospeechengine_stop(void* self, int32_t boundaryHint);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#stop)
///
/// Allows for overriding the related default method
///
/// @param self QTextToSpeechEngine*
/// @param callback void func(QTextToSpeechEngine* self, enum QTextToSpeech__BoundaryHint boundaryHint)
///
void q_texttospeechengine_on_stop(void* self, void (*callback)(void*, int32_t));

/// @warning DEPRECATED: Use `q_texttospeechengine_super_stop` instead
///
#define q_texttospeechengine_qbase_stop q_texttospeechengine_super_stop

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#stop)
///
/// Base class method implementation
///
/// @param self QTextToSpeechEngine*
/// @param boundaryHint enum QTextToSpeech__BoundaryHint
///
void q_texttospeechengine_super_stop(void* self, int32_t boundaryHint);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#pause)
///
/// @param self QTextToSpeechEngine*
/// @param boundaryHint enum QTextToSpeech__BoundaryHint
///
void q_texttospeechengine_pause(void* self, int32_t boundaryHint);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#pause)
///
/// Allows for overriding the related default method
///
/// @param self QTextToSpeechEngine*
/// @param callback void func(QTextToSpeechEngine* self, enum QTextToSpeech__BoundaryHint boundaryHint)
///
void q_texttospeechengine_on_pause(void* self, void (*callback)(void*, int32_t));

/// @warning DEPRECATED: Use `q_texttospeechengine_super_pause` instead
///
#define q_texttospeechengine_qbase_pause q_texttospeechengine_super_pause

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#pause)
///
/// Base class method implementation
///
/// @param self QTextToSpeechEngine*
/// @param boundaryHint enum QTextToSpeech__BoundaryHint
///
void q_texttospeechengine_super_pause(void* self, int32_t boundaryHint);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#resume)
///
/// @param self QTextToSpeechEngine*
///
void q_texttospeechengine_resume(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#resume)
///
/// Allows for overriding the related default method
///
/// @param self QTextToSpeechEngine*
/// @param callback void func()
///
void q_texttospeechengine_on_resume(void* self, void (*callback)());

/// @warning DEPRECATED: Use `q_texttospeechengine_super_resume` instead
///
#define q_texttospeechengine_qbase_resume q_texttospeechengine_super_resume

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#resume)
///
/// Base class method implementation
///
/// @param self QTextToSpeechEngine*
///
void q_texttospeechengine_super_resume(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#rate)
///
/// @param self QTextToSpeechEngine*
///
double q_texttospeechengine_rate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#rate)
///
/// Allows for overriding the related default method
///
/// @param self QTextToSpeechEngine*
/// @param callback double func()
///
void q_texttospeechengine_on_rate(void* self, double (*callback)());

/// @warning DEPRECATED: Use `q_texttospeechengine_super_rate` instead
///
#define q_texttospeechengine_qbase_rate q_texttospeechengine_super_rate

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#rate)
///
/// Base class method implementation
///
/// @param self QTextToSpeechEngine*
///
double q_texttospeechengine_super_rate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setRate)
///
/// @param self QTextToSpeechEngine*
/// @param rate double
///
bool q_texttospeechengine_set_rate(void* self, double rate);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setRate)
///
/// Allows for overriding the related default method
///
/// @param self QTextToSpeechEngine*
/// @param callback bool func(QTextToSpeechEngine* self, double rate)
///
void q_texttospeechengine_on_set_rate(void* self, bool (*callback)(void*, double));

/// @warning DEPRECATED: Use `q_texttospeechengine_super_set_rate` instead
///
#define q_texttospeechengine_qbase_set_rate q_texttospeechengine_super_set_rate

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setRate)
///
/// Base class method implementation
///
/// @param self QTextToSpeechEngine*
/// @param rate double
///
bool q_texttospeechengine_super_set_rate(void* self, double rate);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#pitch)
///
/// @param self QTextToSpeechEngine*
///
double q_texttospeechengine_pitch(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#pitch)
///
/// Allows for overriding the related default method
///
/// @param self QTextToSpeechEngine*
/// @param callback double func()
///
void q_texttospeechengine_on_pitch(void* self, double (*callback)());

/// @warning DEPRECATED: Use `q_texttospeechengine_super_pitch` instead
///
#define q_texttospeechengine_qbase_pitch q_texttospeechengine_super_pitch

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#pitch)
///
/// Base class method implementation
///
/// @param self QTextToSpeechEngine*
///
double q_texttospeechengine_super_pitch(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setPitch)
///
/// @param self QTextToSpeechEngine*
/// @param pitch double
///
bool q_texttospeechengine_set_pitch(void* self, double pitch);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setPitch)
///
/// Allows for overriding the related default method
///
/// @param self QTextToSpeechEngine*
/// @param callback bool func(QTextToSpeechEngine* self, double pitch)
///
void q_texttospeechengine_on_set_pitch(void* self, bool (*callback)(void*, double));

/// @warning DEPRECATED: Use `q_texttospeechengine_super_set_pitch` instead
///
#define q_texttospeechengine_qbase_set_pitch q_texttospeechengine_super_set_pitch

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setPitch)
///
/// Base class method implementation
///
/// @param self QTextToSpeechEngine*
/// @param pitch double
///
bool q_texttospeechengine_super_set_pitch(void* self, double pitch);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#locale)
///
/// @param self QTextToSpeechEngine*
///
QLocale* q_texttospeechengine_locale(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#locale)
///
/// Allows for overriding the related default method
///
/// @param self QTextToSpeechEngine*
/// @param callback QLocale* func()
///
void q_texttospeechengine_on_locale(void* self, QLocale* (*callback)());

/// @warning DEPRECATED: Use `q_texttospeechengine_super_locale` instead
///
#define q_texttospeechengine_qbase_locale q_texttospeechengine_super_locale

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#locale)
///
/// Base class method implementation
///
/// @param self QTextToSpeechEngine*
///
QLocale* q_texttospeechengine_super_locale(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setLocale)
///
/// @param self QTextToSpeechEngine*
/// @param locale QLocale*
///
bool q_texttospeechengine_set_locale(void* self, void* locale);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setLocale)
///
/// Allows for overriding the related default method
///
/// @param self QTextToSpeechEngine*
/// @param callback bool func(QTextToSpeechEngine* self, QLocale* locale)
///
void q_texttospeechengine_on_set_locale(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_texttospeechengine_super_set_locale` instead
///
#define q_texttospeechengine_qbase_set_locale q_texttospeechengine_super_set_locale

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setLocale)
///
/// Base class method implementation
///
/// @param self QTextToSpeechEngine*
/// @param locale QLocale*
///
bool q_texttospeechengine_super_set_locale(void* self, void* locale);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#volume)
///
/// @param self QTextToSpeechEngine*
///
double q_texttospeechengine_volume(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#volume)
///
/// Allows for overriding the related default method
///
/// @param self QTextToSpeechEngine*
/// @param callback double func()
///
void q_texttospeechengine_on_volume(void* self, double (*callback)());

/// @warning DEPRECATED: Use `q_texttospeechengine_super_volume` instead
///
#define q_texttospeechengine_qbase_volume q_texttospeechengine_super_volume

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#volume)
///
/// Base class method implementation
///
/// @param self QTextToSpeechEngine*
///
double q_texttospeechengine_super_volume(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setVolume)
///
/// @param self QTextToSpeechEngine*
/// @param volume double
///
bool q_texttospeechengine_set_volume(void* self, double volume);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setVolume)
///
/// Allows for overriding the related default method
///
/// @param self QTextToSpeechEngine*
/// @param callback bool func(QTextToSpeechEngine* self, double volume)
///
void q_texttospeechengine_on_set_volume(void* self, bool (*callback)(void*, double));

/// @warning DEPRECATED: Use `q_texttospeechengine_super_set_volume` instead
///
#define q_texttospeechengine_qbase_set_volume q_texttospeechengine_super_set_volume

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setVolume)
///
/// Base class method implementation
///
/// @param self QTextToSpeechEngine*
/// @param volume double
///
bool q_texttospeechengine_super_set_volume(void* self, double volume);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#voice)
///
/// @param self QTextToSpeechEngine*
///
QVoice* q_texttospeechengine_voice(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#voice)
///
/// Allows for overriding the related default method
///
/// @param self QTextToSpeechEngine*
/// @param callback QVoice* func()
///
void q_texttospeechengine_on_voice(void* self, QVoice* (*callback)());

/// @warning DEPRECATED: Use `q_texttospeechengine_super_voice` instead
///
#define q_texttospeechengine_qbase_voice q_texttospeechengine_super_voice

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#voice)
///
/// Base class method implementation
///
/// @param self QTextToSpeechEngine*
///
QVoice* q_texttospeechengine_super_voice(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setVoice)
///
/// @param self QTextToSpeechEngine*
/// @param voice QVoice*
///
bool q_texttospeechengine_set_voice(void* self, void* voice);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setVoice)
///
/// Allows for overriding the related default method
///
/// @param self QTextToSpeechEngine*
/// @param callback bool func(QTextToSpeechEngine* self, QVoice* voice)
///
void q_texttospeechengine_on_set_voice(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_texttospeechengine_super_set_voice` instead
///
#define q_texttospeechengine_qbase_set_voice q_texttospeechengine_super_set_voice

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setVoice)
///
/// Base class method implementation
///
/// @param self QTextToSpeechEngine*
/// @param voice QVoice*
///
bool q_texttospeechengine_super_set_voice(void* self, void* voice);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#state)
///
/// @param self QTextToSpeechEngine*
///
/// @return enum QTextToSpeech__State
///
int32_t q_texttospeechengine_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#state)
///
/// Allows for overriding the related default method
///
/// @param self QTextToSpeechEngine*
/// @param callback int32_t func()
///
void q_texttospeechengine_on_state(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `q_texttospeechengine_super_state` instead
///
#define q_texttospeechengine_qbase_state q_texttospeechengine_super_state

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#state)
///
/// Base class method implementation
///
/// @param self QTextToSpeechEngine*
///
/// @return enum QTextToSpeech__State
///
int32_t q_texttospeechengine_super_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#errorReason)
///
/// @param self QTextToSpeechEngine*
///
/// @return enum QTextToSpeech__ErrorReason
///
int32_t q_texttospeechengine_error_reason(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#errorReason)
///
/// Allows for overriding the related default method
///
/// @param self QTextToSpeechEngine*
/// @param callback int32_t func()
///
void q_texttospeechengine_on_error_reason(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `q_texttospeechengine_super_error_reason` instead
///
#define q_texttospeechengine_qbase_error_reason q_texttospeechengine_super_error_reason

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#errorReason)
///
/// Base class method implementation
///
/// @param self QTextToSpeechEngine*
///
/// @return enum QTextToSpeech__ErrorReason
///
int32_t q_texttospeechengine_super_error_reason(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextToSpeechEngine*
///
const char* q_texttospeechengine_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#errorString)
///
/// Allows for overriding the related default method
///
/// @param self QTextToSpeechEngine*
/// @param callback const char* func()
///
void q_texttospeechengine_on_error_string(void* self, const char* (*callback)());

/// @warning DEPRECATED: Use `q_texttospeechengine_super_error_string` instead
///
#define q_texttospeechengine_qbase_error_string q_texttospeechengine_super_error_string

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#errorString)
///
/// Base class method implementation
///
/// @param self QTextToSpeechEngine*
///
const char* q_texttospeechengine_super_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#createVoice)
///
/// @param self QTextToSpeechEngine*
/// @param name const char*
/// @param locale QLocale*
/// @param gender enum QVoice__Gender
/// @param age enum QVoice__Age
/// @param data QVariant*
///
QVoice* q_texttospeechengine_create_voice(void* self, const char* name, void* locale, int32_t gender, int32_t age, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#createVoice)
///
/// Allows for overriding the related default method
///
/// @param self QTextToSpeechEngine*
/// @param callback QVoice* func(QTextToSpeechEngine* self, const char* name, QLocale* locale, enum QVoice__Gender gender, enum QVoice__Age age, QVariant* data)
///
void q_texttospeechengine_on_create_voice(void* self, QVoice* (*callback)(void*, const char*, void*, int32_t, int32_t, void*));

/// @warning DEPRECATED: Use `q_texttospeechengine_super_create_voice` instead
///
#define q_texttospeechengine_qbase_create_voice q_texttospeechengine_super_create_voice

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#createVoice)
///
/// Base class method implementation
///
/// @param self QTextToSpeechEngine*
/// @param name const char*
/// @param locale QLocale*
/// @param gender enum QVoice__Gender
/// @param age enum QVoice__Age
/// @param data QVariant*
///
QVoice* q_texttospeechengine_super_create_voice(void* self, const char* name, void* locale, int32_t gender, int32_t age, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#voiceData)
///
/// @param self QTextToSpeechEngine*
/// @param voice QVoice*
///
QVariant* q_texttospeechengine_voice_data(void* self, void* voice);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#voiceData)
///
/// Allows for overriding the related default method
///
/// @param self QTextToSpeechEngine*
/// @param callback QVariant* func(QTextToSpeechEngine* self, QVoice* voice)
///
void q_texttospeechengine_on_voice_data(void* self, QVariant* (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_texttospeechengine_super_voice_data` instead
///
#define q_texttospeechengine_qbase_voice_data q_texttospeechengine_super_voice_data

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#voiceData)
///
/// Base class method implementation
///
/// @param self QTextToSpeechEngine*
/// @param voice QVoice*
///
QVariant* q_texttospeechengine_super_voice_data(void* self, void* voice);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#stateChanged)
///
/// @param self QTextToSpeechEngine*
/// @param state enum QTextToSpeech__State
///
void q_texttospeechengine_state_changed(void* self, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#stateChanged)
///
/// @param self QTextToSpeechEngine*
/// @param callback void func(QTextToSpeechEngine* self, enum QTextToSpeech__State state)
///
void q_texttospeechengine_on_state_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#errorOccurred)
///
/// @param self QTextToSpeechEngine*
/// @param error enum QTextToSpeech__ErrorReason
/// @param errorString const char*
///
void q_texttospeechengine_error_occurred(void* self, int32_t error, const char* errorString);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#errorOccurred)
///
/// @param self QTextToSpeechEngine*
/// @param callback void func(QTextToSpeechEngine* self, enum QTextToSpeech__ErrorReason error, const char* errorString)
///
void q_texttospeechengine_on_error_occurred(void* self, void (*callback)(void*, int32_t, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#sayingWord)
///
/// @param self QTextToSpeechEngine*
/// @param word const char*
/// @param start intptr_t
/// @param length intptr_t
///
void q_texttospeechengine_saying_word(void* self, const char* word, intptr_t start, intptr_t length);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#sayingWord)
///
/// @param self QTextToSpeechEngine*
/// @param callback void func(QTextToSpeechEngine* self, const char* word, intptr_t start, intptr_t length)
///
void q_texttospeechengine_on_saying_word(void* self, void (*callback)(void*, const char*, intptr_t, intptr_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#synthesized)
///
/// @param self QTextToSpeechEngine*
/// @param format QAudioFormat*
/// @param data char*
///
void q_texttospeechengine_synthesized(void* self, void* format, char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#synthesized)
///
/// @param self QTextToSpeechEngine*
/// @param callback void func(QTextToSpeechEngine* self, QAudioFormat* format, libqt_string data)
///
void q_texttospeechengine_on_synthesized(void* self, void (*callback)(void*, void*, libqt_string));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_texttospeechengine_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_texttospeechengine_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextToSpeechEngine*
///
const char* q_texttospeechengine_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTextToSpeechEngine*
/// @param name const char*
///
void q_texttospeechengine_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QTextToSpeechEngine*
///
bool q_texttospeechengine_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QTextToSpeechEngine*
///
bool q_texttospeechengine_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QTextToSpeechEngine*
///
bool q_texttospeechengine_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QTextToSpeechEngine*
///
bool q_texttospeechengine_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QTextToSpeechEngine*
/// @param b bool
///
bool q_texttospeechengine_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QTextToSpeechEngine*
///
QThread* q_texttospeechengine_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTextToSpeechEngine*
/// @param thread QThread*
///
bool q_texttospeechengine_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextToSpeechEngine*
/// @param interval int
///
int32_t q_texttospeechengine_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextToSpeechEngine*
/// @param time int64_t of nanoseconds
///
int32_t q_texttospeechengine_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTextToSpeechEngine*
/// @param id int
///
void q_texttospeechengine_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTextToSpeechEngine*
/// @param id enum Qt__TimerId
///
void q_texttospeechengine_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QTextToSpeechEngine*
///
/// @return libqt_list of QObject*
///
libqt_list q_texttospeechengine_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QTextToSpeechEngine*
/// @param parent QObject*
///
void q_texttospeechengine_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QTextToSpeechEngine*
/// @param filterObj QObject*
///
void q_texttospeechengine_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QTextToSpeechEngine*
/// @param obj QObject*
///
void q_texttospeechengine_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_texttospeechengine_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_texttospeechengine_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTextToSpeechEngine*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_texttospeechengine_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_texttospeechengine_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_texttospeechengine_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QTextToSpeechEngine*
///
bool q_texttospeechengine_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QTextToSpeechEngine*
/// @param receiver QObject*
///
bool q_texttospeechengine_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_texttospeechengine_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QTextToSpeechEngine*
///
void q_texttospeechengine_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QTextToSpeechEngine*
///
void q_texttospeechengine_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTextToSpeechEngine*
/// @param name const char*
/// @param value QVariant*
///
bool q_texttospeechengine_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QTextToSpeechEngine*
/// @param name const char*
///
QVariant* q_texttospeechengine_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QTextToSpeechEngine*
///
const char** q_texttospeechengine_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTextToSpeechEngine*
///
QBindingStorage* q_texttospeechengine_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTextToSpeechEngine*
///
const QBindingStorage* q_texttospeechengine_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextToSpeechEngine*
///
void q_texttospeechengine_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextToSpeechEngine*
/// @param callback void func(QTextToSpeechEngine* self)
///
void q_texttospeechengine_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QTextToSpeechEngine*
///
QObject* q_texttospeechengine_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QTextToSpeechEngine*
/// @param classname const char*
///
bool q_texttospeechengine_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTextToSpeechEngine*
///
void q_texttospeechengine_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextToSpeechEngine*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_texttospeechengine_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextToSpeechEngine*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_texttospeechengine_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_texttospeechengine_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_texttospeechengine_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTextToSpeechEngine*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_texttospeechengine_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QTextToSpeechEngine*
/// @param signal const char*
///
bool q_texttospeechengine_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QTextToSpeechEngine*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_texttospeechengine_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QTextToSpeechEngine*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_texttospeechengine_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QTextToSpeechEngine*
/// @param receiver QObject*
/// @param member const char*
///
bool q_texttospeechengine_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextToSpeechEngine*
/// @param param1 QObject*
///
void q_texttospeechengine_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextToSpeechEngine*
/// @param callback void func(QTextToSpeechEngine* self, QObject* param1)
///
void q_texttospeechengine_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param event QEvent*
///
bool q_texttospeechengine_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_texttospeechengine_super_event` instead
///
#define q_texttospeechengine_qbase_event q_texttospeechengine_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param event QEvent*
///
bool q_texttospeechengine_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param callback bool func(QTextToSpeechEngine* self, QEvent* event)
///
void q_texttospeechengine_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_texttospeechengine_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_texttospeechengine_super_event_filter` instead
///
#define q_texttospeechengine_qbase_event_filter q_texttospeechengine_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_texttospeechengine_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param callback bool func(QTextToSpeechEngine* self, QObject* watched, QEvent* event)
///
void q_texttospeechengine_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param event QTimerEvent*
///
void q_texttospeechengine_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_texttospeechengine_super_timer_event` instead
///
#define q_texttospeechengine_qbase_timer_event q_texttospeechengine_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param event QTimerEvent*
///
void q_texttospeechengine_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param callback void func(QTextToSpeechEngine* self, QTimerEvent* event)
///
void q_texttospeechengine_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param event QChildEvent*
///
void q_texttospeechengine_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_texttospeechengine_super_child_event` instead
///
#define q_texttospeechengine_qbase_child_event q_texttospeechengine_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param event QChildEvent*
///
void q_texttospeechengine_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param callback void func(QTextToSpeechEngine* self, QChildEvent* event)
///
void q_texttospeechengine_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param event QEvent*
///
void q_texttospeechengine_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_texttospeechengine_super_custom_event` instead
///
#define q_texttospeechengine_qbase_custom_event q_texttospeechengine_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param event QEvent*
///
void q_texttospeechengine_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param callback void func(QTextToSpeechEngine* self, QEvent* event)
///
void q_texttospeechengine_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param signal QMetaMethod*
///
void q_texttospeechengine_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_texttospeechengine_super_connect_notify` instead
///
#define q_texttospeechengine_qbase_connect_notify q_texttospeechengine_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param signal QMetaMethod*
///
void q_texttospeechengine_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param callback void func(QTextToSpeechEngine* self, QMetaMethod* signal)
///
void q_texttospeechengine_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param signal QMetaMethod*
///
void q_texttospeechengine_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_texttospeechengine_super_disconnect_notify` instead
///
#define q_texttospeechengine_qbase_disconnect_notify q_texttospeechengine_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param signal QMetaMethod*
///
void q_texttospeechengine_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param callback void func(QTextToSpeechEngine* self, QMetaMethod* signal)
///
void q_texttospeechengine_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextToSpeechEngine*
///
QObject* q_texttospeechengine_sender(void* self);

/// @warning DEPRECATED: Use `q_texttospeechengine_super_sender` instead
///
#define q_texttospeechengine_qbase_sender q_texttospeechengine_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextToSpeechEngine*
///
QObject* q_texttospeechengine_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param callback QObject* func()
///
void q_texttospeechengine_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextToSpeechEngine*
///
int32_t q_texttospeechengine_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_texttospeechengine_super_sender_signal_index` instead
///
#define q_texttospeechengine_qbase_sender_signal_index q_texttospeechengine_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextToSpeechEngine*
///
int32_t q_texttospeechengine_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param callback int32_t func()
///
void q_texttospeechengine_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param signal const char*
///
int32_t q_texttospeechengine_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_texttospeechengine_super_receivers` instead
///
#define q_texttospeechengine_qbase_receivers q_texttospeechengine_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param signal const char*
///
int32_t q_texttospeechengine_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param callback int32_t func(QTextToSpeechEngine* self, const char* signal)
///
void q_texttospeechengine_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param signal QMetaMethod*
///
bool q_texttospeechengine_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_texttospeechengine_super_is_signal_connected` instead
///
#define q_texttospeechengine_qbase_is_signal_connected q_texttospeechengine_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param signal QMetaMethod*
///
bool q_texttospeechengine_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param callback bool func(QTextToSpeechEngine* self, QMetaMethod* signal)
///
void q_texttospeechengine_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTextToSpeechEngine*
/// @param callback void func(QTextToSpeechEngine* self, const char* objectName)
///
void q_texttospeechengine_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#dtor.QTextToSpeechEngine)
///
/// Delete this object from C++ memory.
///
/// @param self QTextToSpeechEngine*
///
void q_texttospeechengine_delete(void* self);

#endif
