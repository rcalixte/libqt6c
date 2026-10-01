#pragma once
#ifndef TEXTTOSPEECH_LIBQTEXTTOSPEECHENGINE_H
#define TEXTTOSPEECH_LIBQTEXTTOSPEECHENGINE_H

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
/// @param self const QTextToSpeechEngine*
///
const QMetaObject* q_texttospeechengine_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QTextToSpeechEngine*
/// @param callback const QMetaObject* func(const QTextToSpeechEngine* self)
///
void q_texttospeechengine_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QTextToSpeechEngine*
///
const QMetaObject* q_texttospeechengine_super_meta_object(const void* self);

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
/// @param self const QTextToSpeechEngine*
///
/// @return flag of enum QTextToSpeech__Capability
///
int32_t q_texttospeechengine_capabilities(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#capabilities)
///
/// Allows for overriding the related default method
///
/// @param self const QTextToSpeechEngine*
/// @param callback int32_t func(const QTextToSpeechEngine* self)
///
void q_texttospeechengine_on_capabilities(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#capabilities)
///
/// Base class method implementation
///
/// @param self const QTextToSpeechEngine*
///
/// @return flag of enum QTextToSpeech__Capability
///
int32_t q_texttospeechengine_super_capabilities(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#availableLocales)
///
/// @warning This method must be implemented with `q_texttospeechengine_on_available_locales` before it can be called.
///
/// @param self const QTextToSpeechEngine*
///
/// @return libqt_list of QLocale*
///
libqt_list q_texttospeechengine_available_locales(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#availableLocales)
///
/// Allows for overriding the related default method
///
/// @param self const QTextToSpeechEngine*
/// @param callback libqt_list of QLocale* func(const QTextToSpeechEngine* self)
///
void q_texttospeechengine_on_available_locales(const void* self, libqt_list (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#availableVoices)
///
/// @warning This method must be implemented with `q_texttospeechengine_on_available_voices` before it can be called.
///
/// @param self const QTextToSpeechEngine*
///
/// @return libqt_list of QVoice*
///
libqt_list q_texttospeechengine_available_voices(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#availableVoices)
///
/// Allows for overriding the related default method
///
/// @param self const QTextToSpeechEngine*
/// @param callback libqt_list of QVoice* func(const QTextToSpeechEngine* self)
///
void q_texttospeechengine_on_available_voices(const void* self, libqt_list (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#say)
///
/// @warning This method must be implemented with `q_texttospeechengine_on_say` before it can be called.
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

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#synthesize)
///
/// @warning This method must be implemented with `q_texttospeechengine_on_synthesize` before it can be called.
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

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#stop)
///
/// @warning This method must be implemented with `q_texttospeechengine_on_stop` before it can be called.
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

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#pause)
///
/// @warning This method must be implemented with `q_texttospeechengine_on_pause` before it can be called.
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

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#resume)
///
/// @warning This method must be implemented with `q_texttospeechengine_on_resume` before it can be called.
///
/// @param self QTextToSpeechEngine*
///
void q_texttospeechengine_resume(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#resume)
///
/// Allows for overriding the related default method
///
/// @param self QTextToSpeechEngine*
/// @param callback void func(QTextToSpeechEngine* self)
///
void q_texttospeechengine_on_resume(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#rate)
///
/// @warning This method must be implemented with `q_texttospeechengine_on_rate` before it can be called.
///
/// @param self const QTextToSpeechEngine*
///
double q_texttospeechengine_rate(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#rate)
///
/// Allows for overriding the related default method
///
/// @param self const QTextToSpeechEngine*
/// @param callback double func(const QTextToSpeechEngine* self)
///
void q_texttospeechengine_on_rate(const void* self, double (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setRate)
///
/// @warning This method must be implemented with `q_texttospeechengine_on_set_rate` before it can be called.
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

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#pitch)
///
/// @warning This method must be implemented with `q_texttospeechengine_on_pitch` before it can be called.
///
/// @param self const QTextToSpeechEngine*
///
double q_texttospeechengine_pitch(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#pitch)
///
/// Allows for overriding the related default method
///
/// @param self const QTextToSpeechEngine*
/// @param callback double func(const QTextToSpeechEngine* self)
///
void q_texttospeechengine_on_pitch(const void* self, double (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setPitch)
///
/// @warning This method must be implemented with `q_texttospeechengine_on_set_pitch` before it can be called.
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

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#locale)
///
/// @warning This method must be implemented with `q_texttospeechengine_on_locale` before it can be called.
///
/// @param self const QTextToSpeechEngine*
///
QLocale* q_texttospeechengine_locale(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#locale)
///
/// Allows for overriding the related default method
///
/// @param self const QTextToSpeechEngine*
/// @param callback QLocale* func(const QTextToSpeechEngine* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_texttospeechengine_on_locale(const void* self, QLocale* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setLocale)
///
/// @warning This method must be implemented with `q_texttospeechengine_on_set_locale` before it can be called.
///
/// @param self QTextToSpeechEngine*
/// @param locale QLocale*
///
bool q_texttospeechengine_set_locale(void* self, const void* locale);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setLocale)
///
/// Allows for overriding the related default method
///
/// @param self QTextToSpeechEngine*
/// @param callback bool func(QTextToSpeechEngine* self, QLocale* locale)
///
void q_texttospeechengine_on_set_locale(void* self, bool (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#volume)
///
/// @warning This method must be implemented with `q_texttospeechengine_on_volume` before it can be called.
///
/// @param self const QTextToSpeechEngine*
///
double q_texttospeechengine_volume(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#volume)
///
/// Allows for overriding the related default method
///
/// @param self const QTextToSpeechEngine*
/// @param callback double func(const QTextToSpeechEngine* self)
///
void q_texttospeechengine_on_volume(const void* self, double (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setVolume)
///
/// @warning This method must be implemented with `q_texttospeechengine_on_set_volume` before it can be called.
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

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#voice)
///
/// @warning This method must be implemented with `q_texttospeechengine_on_voice` before it can be called.
///
/// @param self const QTextToSpeechEngine*
///
QVoice* q_texttospeechengine_voice(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#voice)
///
/// Allows for overriding the related default method
///
/// @param self const QTextToSpeechEngine*
/// @param callback QVoice* func(const QTextToSpeechEngine* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_texttospeechengine_on_voice(const void* self, QVoice* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setVoice)
///
/// @warning This method must be implemented with `q_texttospeechengine_on_set_voice` before it can be called.
///
/// @param self QTextToSpeechEngine*
/// @param voice QVoice*
///
bool q_texttospeechengine_set_voice(void* self, const void* voice);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setVoice)
///
/// Allows for overriding the related default method
///
/// @param self QTextToSpeechEngine*
/// @param callback bool func(QTextToSpeechEngine* self, QVoice* voice)
///
void q_texttospeechengine_on_set_voice(void* self, bool (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#state)
///
/// @warning This method must be implemented with `q_texttospeechengine_on_state` before it can be called.
///
/// @param self const QTextToSpeechEngine*
///
/// @return enum QTextToSpeech__State
///
int32_t q_texttospeechengine_state(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#state)
///
/// Allows for overriding the related default method
///
/// @param self const QTextToSpeechEngine*
/// @param callback int32_t func(const QTextToSpeechEngine* self)
///
void q_texttospeechengine_on_state(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#errorReason)
///
/// @warning This method must be implemented with `q_texttospeechengine_on_error_reason` before it can be called.
///
/// @param self const QTextToSpeechEngine*
///
/// @return enum QTextToSpeech__ErrorReason
///
int32_t q_texttospeechengine_error_reason(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#errorReason)
///
/// Allows for overriding the related default method
///
/// @param self const QTextToSpeechEngine*
/// @param callback int32_t func(const QTextToSpeechEngine* self)
///
void q_texttospeechengine_on_error_reason(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#errorString)
///
/// @warning This method must be implemented with `q_texttospeechengine_on_error_string` before it can be called.
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTextToSpeechEngine*
///
const char* q_texttospeechengine_error_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#errorString)
///
/// Allows for overriding the related default method
///
/// @param self const QTextToSpeechEngine*
/// @param callback const char* func(const QTextToSpeechEngine* self)
///
void q_texttospeechengine_on_error_string(const void* self, const char* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#createVoice)
///
/// @param self QTextToSpeechEngine*
/// @param name const char*
/// @param locale QLocale*
/// @param gender enum QVoice__Gender
/// @param age enum QVoice__Age
/// @param data QVariant*
///
QVoice* q_texttospeechengine_create_voice(void* self, const char* name, const void* locale, int32_t gender, int32_t age, const void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#voiceData)
///
/// @param self QTextToSpeechEngine*
/// @param voice QVoice*
///
QVariant* q_texttospeechengine_voice_data(void* self, const void* voice);

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
void q_texttospeechengine_synthesized(void* self, const void* format, char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#synthesized)
///
/// @param self QTextToSpeechEngine*
/// @param callback void func(QTextToSpeechEngine* self, QAudioFormat* format, libqt_string data)
///
void q_texttospeechengine_on_synthesized(void* self, void (*callback)(void*, const void*, libqt_string));

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
/// @param self const QTextToSpeechEngine*
///
const char* q_texttospeechengine_object_name(const void* self);

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
/// @param self const QTextToSpeechEngine*
///
bool q_texttospeechengine_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QTextToSpeechEngine*
///
bool q_texttospeechengine_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QTextToSpeechEngine*
///
bool q_texttospeechengine_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QTextToSpeechEngine*
///
bool q_texttospeechengine_signals_blocked(const void* self);

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
/// @param self const QTextToSpeechEngine*
///
QThread* q_texttospeechengine_thread(const void* self);

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
/// @param self const QTextToSpeechEngine*
///
/// @return libqt_list of QObject*
///
libqt_list q_texttospeechengine_children(const void* self);

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
QMetaObject__Connection* q_texttospeechengine_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_texttospeechengine_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QTextToSpeechEngine*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_texttospeechengine_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_texttospeechengine_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_texttospeechengine_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextToSpeechEngine*
///
bool q_texttospeechengine_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextToSpeechEngine*
/// @param receiver QObject*
///
bool q_texttospeechengine_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_texttospeechengine_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QTextToSpeechEngine*
///
void q_texttospeechengine_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QTextToSpeechEngine*
///
void q_texttospeechengine_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTextToSpeechEngine*
/// @param name const char*
/// @param value QVariant*
///
bool q_texttospeechengine_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QTextToSpeechEngine*
/// @param name const char*
///
QVariant* q_texttospeechengine_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QTextToSpeechEngine*
///
const char** q_texttospeechengine_dynamic_property_names(const void* self);

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
/// @param self const QTextToSpeechEngine*
///
const QBindingStorage* q_texttospeechengine_binding_storage2(const void* self);

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
/// @param self const QTextToSpeechEngine*
///
QObject* q_texttospeechengine_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QTextToSpeechEngine*
/// @param classname const char*
///
bool q_texttospeechengine_inherits(const void* self, const char* classname);

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
QMetaObject__Connection* q_texttospeechengine_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_texttospeechengine_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QTextToSpeechEngine*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_texttospeechengine_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextToSpeechEngine*
/// @param signal const char*
///
bool q_texttospeechengine_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextToSpeechEngine*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_texttospeechengine_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextToSpeechEngine*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_texttospeechengine_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextToSpeechEngine*
/// @param receiver QObject*
/// @param member const char*
///
bool q_texttospeechengine_disconnect23(const void* self, const void* receiver, const char* member);

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
void q_texttospeechengine_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param signal QMetaMethod*
///
void q_texttospeechengine_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param callback void func(QTextToSpeechEngine* self, QMetaMethod* signal)
///
void q_texttospeechengine_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param signal QMetaMethod*
///
void q_texttospeechengine_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param signal QMetaMethod*
///
void q_texttospeechengine_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextToSpeechEngine*
/// @param callback void func(QTextToSpeechEngine* self, QMetaMethod* signal)
///
void q_texttospeechengine_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTextToSpeechEngine*
///
QObject* q_texttospeechengine_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTextToSpeechEngine*
///
QObject* q_texttospeechengine_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QTextToSpeechEngine*
/// @param callback QObject* func(QTextToSpeechEngine* self)
///
void q_texttospeechengine_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTextToSpeechEngine*
///
int32_t q_texttospeechengine_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTextToSpeechEngine*
///
int32_t q_texttospeechengine_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QTextToSpeechEngine*
/// @param callback int32_t func(QTextToSpeechEngine* self)
///
void q_texttospeechengine_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTextToSpeechEngine*
/// @param signal const char*
///
int32_t q_texttospeechengine_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTextToSpeechEngine*
/// @param signal const char*
///
int32_t q_texttospeechengine_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QTextToSpeechEngine*
/// @param callback int32_t func(QTextToSpeechEngine* self, const char* signal)
///
void q_texttospeechengine_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTextToSpeechEngine*
/// @param signal QMetaMethod*
///
bool q_texttospeechengine_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTextToSpeechEngine*
/// @param signal QMetaMethod*
///
bool q_texttospeechengine_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QTextToSpeechEngine*
/// @param callback bool func(QTextToSpeechEngine* self, QMetaMethod* signal)
///
void q_texttospeechengine_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

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
