#pragma once
#ifndef SRC_TEXTTOSPEECH_QT6C_LIBQTEXTTOSPEECH_H
#define SRC_TEXTTOSPEECH_QT6C_LIBQTEXTTOSPEECH_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html)

/// q_texttospeech_new constructs a new QTextToSpeech object.
///
QTextToSpeech* q_texttospeech_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html)

/// q_texttospeech_new2 constructs a new QTextToSpeech object.
///
/// @param engine const char*
///
QTextToSpeech* q_texttospeech_new2(const char* engine);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html)

/// q_texttospeech_new3 constructs a new QTextToSpeech object.
///
/// @param engine const char*
/// @param params libqt_map of const char* to QVariant*
///
QTextToSpeech* q_texttospeech_new3(const char* engine, libqt_map params);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html)

/// q_texttospeech_new4 constructs a new QTextToSpeech object.
///
/// @param parent QObject*
///
QTextToSpeech* q_texttospeech_new4(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html)

/// q_texttospeech_new5 constructs a new QTextToSpeech object.
///
/// @param engine const char*
/// @param parent QObject*
///
QTextToSpeech* q_texttospeech_new5(const char* engine, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html)

/// q_texttospeech_new6 constructs a new QTextToSpeech object.
///
/// @param engine const char*
/// @param params libqt_map of const char* to QVariant*
/// @param parent QObject*
///
QTextToSpeech* q_texttospeech_new6(const char* engine, libqt_map params, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QTextToSpeech*
///
const QMetaObject* q_texttospeech_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QTextToSpeech*
/// @param callback const QMetaObject* func()
///
void q_texttospeech_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_texttospeech_super_meta_object` instead
///
#define q_texttospeech_qbase_meta_object q_texttospeech_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QTextToSpeech*
///
const QMetaObject* q_texttospeech_super_meta_object(void* self);

/// @param self QTextToSpeech*
/// @param param1 const char*
///
void* q_texttospeech_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QTextToSpeech*
/// @param callback void* func(QTextToSpeech* self, const char* param1)
///
void q_texttospeech_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_texttospeech_super_metacast` instead
///
#define q_texttospeech_qbase_metacast q_texttospeech_super_metacast

/// Base class method implementation
///
/// @param self QTextToSpeech*
/// @param param1 const char*
///
void* q_texttospeech_super_metacast(void* self, const char* param1);

/// @param self QTextToSpeech*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_texttospeech_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QTextToSpeech*
/// @param callback int32_t func(QTextToSpeech* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_texttospeech_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_texttospeech_super_metacall` instead
///
#define q_texttospeech_qbase_metacall q_texttospeech_super_metacall

/// Base class method implementation
///
/// @param self QTextToSpeech*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_texttospeech_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_texttospeech_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#setEngine)
///
/// @param self QTextToSpeech*
/// @param engine const char*
///
bool q_texttospeech_set_engine(void* self, const char* engine);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#engine)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextToSpeech*
///
const char* q_texttospeech_engine(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#engineCapabilities)
///
/// @param self QTextToSpeech*
///
/// @return flag of enum QTextToSpeech__Capability
///
int32_t q_texttospeech_engine_capabilities(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#state)
///
/// @param self QTextToSpeech*
///
/// @return enum QTextToSpeech__State
///
int32_t q_texttospeech_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#errorReason)
///
/// @param self QTextToSpeech*
///
/// @return enum QTextToSpeech__ErrorReason
///
int32_t q_texttospeech_error_reason(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextToSpeech*
///
const char* q_texttospeech_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#availableLocales)
///
/// @param self QTextToSpeech*
///
/// @return libqt_list of QLocale*
///
libqt_list q_texttospeech_available_locales(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#locale)
///
/// @param self QTextToSpeech*
///
QLocale* q_texttospeech_locale(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#voice)
///
/// @param self QTextToSpeech*
///
QVoice* q_texttospeech_voice(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#availableVoices)
///
/// @param self QTextToSpeech*
///
/// @return libqt_list of QVoice*
///
libqt_list q_texttospeech_available_voices(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#rate)
///
/// @param self QTextToSpeech*
///
double q_texttospeech_rate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#pitch)
///
/// @param self QTextToSpeech*
///
double q_texttospeech_pitch(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#volume)
///
/// @param self QTextToSpeech*
///
double q_texttospeech_volume(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#availableEngines)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** q_texttospeech_available_engines();

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#say)
///
/// @param self QTextToSpeech*
/// @param text const char*
///
void q_texttospeech_say(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#enqueue)
///
/// @param self QTextToSpeech*
/// @param text const char*
///
intptr_t q_texttospeech_enqueue(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#stop)
///
/// @param self QTextToSpeech*
///
void q_texttospeech_stop(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#pause)
///
/// @param self QTextToSpeech*
///
void q_texttospeech_pause(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#resume)
///
/// @param self QTextToSpeech*
///
void q_texttospeech_resume(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#setLocale)
///
/// @param self QTextToSpeech*
/// @param locale QLocale*
///
void q_texttospeech_set_locale(void* self, void* locale);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#setRate)
///
/// @param self QTextToSpeech*
/// @param rate double
///
void q_texttospeech_set_rate(void* self, double rate);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#setPitch)
///
/// @param self QTextToSpeech*
/// @param pitch double
///
void q_texttospeech_set_pitch(void* self, double pitch);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#setVolume)
///
/// @param self QTextToSpeech*
/// @param volume double
///
void q_texttospeech_set_volume(void* self, double volume);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#setVoice)
///
/// @param self QTextToSpeech*
/// @param voice QVoice*
///
void q_texttospeech_set_voice(void* self, void* voice);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#engineChanged)
///
/// @param self QTextToSpeech*
/// @param engine const char*
///
void q_texttospeech_engine_changed(void* self, const char* engine);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#engineChanged)
///
/// @param self QTextToSpeech*
/// @param callback void func(QTextToSpeech* self, const char* engine)
///
void q_texttospeech_on_engine_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#stateChanged)
///
/// @param self QTextToSpeech*
/// @param state enum QTextToSpeech__State
///
void q_texttospeech_state_changed(void* self, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#stateChanged)
///
/// @param self QTextToSpeech*
/// @param callback void func(QTextToSpeech* self, enum QTextToSpeech__State state)
///
void q_texttospeech_on_state_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#errorOccurred)
///
/// @param self QTextToSpeech*
/// @param error enum QTextToSpeech__ErrorReason
/// @param errorString const char*
///
void q_texttospeech_error_occurred(void* self, int32_t error, const char* errorString);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#errorOccurred)
///
/// @param self QTextToSpeech*
/// @param callback void func(QTextToSpeech* self, enum QTextToSpeech__ErrorReason error, const char* errorString)
///
void q_texttospeech_on_error_occurred(void* self, void (*callback)(void*, int32_t, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#localeChanged)
///
/// @param self QTextToSpeech*
/// @param locale QLocale*
///
void q_texttospeech_locale_changed(void* self, void* locale);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#localeChanged)
///
/// @param self QTextToSpeech*
/// @param callback void func(QTextToSpeech* self, QLocale* locale)
///
void q_texttospeech_on_locale_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#rateChanged)
///
/// @param self QTextToSpeech*
/// @param rate double
///
void q_texttospeech_rate_changed(void* self, double rate);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#rateChanged)
///
/// @param self QTextToSpeech*
/// @param callback void func(QTextToSpeech* self, double rate)
///
void q_texttospeech_on_rate_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#pitchChanged)
///
/// @param self QTextToSpeech*
/// @param pitch double
///
void q_texttospeech_pitch_changed(void* self, double pitch);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#pitchChanged)
///
/// @param self QTextToSpeech*
/// @param callback void func(QTextToSpeech* self, double pitch)
///
void q_texttospeech_on_pitch_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#volumeChanged)
///
/// @param self QTextToSpeech*
/// @param volume double
///
void q_texttospeech_volume_changed(void* self, double volume);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#volumeChanged)
///
/// @param self QTextToSpeech*
/// @param callback void func(QTextToSpeech* self, double volume)
///
void q_texttospeech_on_volume_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#voiceChanged)
///
/// @param self QTextToSpeech*
/// @param voice QVoice*
///
void q_texttospeech_voice_changed(void* self, void* voice);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#voiceChanged)
///
/// @param self QTextToSpeech*
/// @param callback void func(QTextToSpeech* self, QVoice* voice)
///
void q_texttospeech_on_voice_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#sayingWord)
///
/// @param self QTextToSpeech*
/// @param word const char*
/// @param id intptr_t
/// @param start intptr_t
/// @param length intptr_t
///
void q_texttospeech_saying_word(void* self, const char* word, intptr_t id, intptr_t start, intptr_t length);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#sayingWord)
///
/// @param self QTextToSpeech*
/// @param callback void func(QTextToSpeech* self, const char* word, intptr_t id, intptr_t start, intptr_t length)
///
void q_texttospeech_on_saying_word(void* self, void (*callback)(void*, const char*, intptr_t, intptr_t, intptr_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#aboutToSynthesize)
///
/// @param self QTextToSpeech*
/// @param id intptr_t
///
void q_texttospeech_about_to_synthesize(void* self, intptr_t id);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#aboutToSynthesize)
///
/// @param self QTextToSpeech*
/// @param callback void func(QTextToSpeech* self, intptr_t id)
///
void q_texttospeech_on_about_to_synthesize(void* self, void (*callback)(void*, intptr_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#allVoices)
///
/// @param self QTextToSpeech*
/// @param locale QLocale*
///
/// @return libqt_list of QVoice*
///
libqt_list q_texttospeech_all_voices(void* self, void* locale);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#allVoices)
///
/// Allows for overriding the related default method
///
/// @param self QTextToSpeech*
/// @param callback libqt_list of QVoice* func(QTextToSpeech* self, QLocale* locale)
///
void q_texttospeech_on_all_voices(void* self, libqt_list (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_texttospeech_super_all_voices` instead
///
#define q_texttospeech_qbase_all_voices q_texttospeech_super_all_voices

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#allVoices)
///
/// Base class method implementation
///
/// @param self QTextToSpeech*
/// @param locale QLocale*
///
/// @return libqt_list of QVoice*
///
libqt_list q_texttospeech_super_all_voices(void* self, void* locale);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_texttospeech_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_texttospeech_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#setEngine)
///
/// @param self QTextToSpeech*
/// @param engine const char*
/// @param params libqt_map of const char* to QVariant*
///
bool q_texttospeech_set_engine2(void* self, const char* engine, libqt_map params);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#stop)
///
/// @param self QTextToSpeech*
/// @param boundaryHint enum QTextToSpeech__BoundaryHint
///
void q_texttospeech_stop1(void* self, int32_t boundaryHint);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#pause)
///
/// @param self QTextToSpeech*
/// @param boundaryHint enum QTextToSpeech__BoundaryHint
///
void q_texttospeech_pause1(void* self, int32_t boundaryHint);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextToSpeech*
///
const char* q_texttospeech_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTextToSpeech*
/// @param name const char*
///
void q_texttospeech_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QTextToSpeech*
///
bool q_texttospeech_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QTextToSpeech*
///
bool q_texttospeech_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QTextToSpeech*
///
bool q_texttospeech_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QTextToSpeech*
///
bool q_texttospeech_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QTextToSpeech*
/// @param b bool
///
bool q_texttospeech_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QTextToSpeech*
///
QThread* q_texttospeech_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTextToSpeech*
/// @param thread QThread*
///
bool q_texttospeech_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextToSpeech*
/// @param interval int
///
int32_t q_texttospeech_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextToSpeech*
/// @param time int64_t of nanoseconds
///
int32_t q_texttospeech_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTextToSpeech*
/// @param id int
///
void q_texttospeech_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTextToSpeech*
/// @param id enum Qt__TimerId
///
void q_texttospeech_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QTextToSpeech*
///
/// @return libqt_list of QObject*
///
libqt_list q_texttospeech_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QTextToSpeech*
/// @param parent QObject*
///
void q_texttospeech_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QTextToSpeech*
/// @param filterObj QObject*
///
void q_texttospeech_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QTextToSpeech*
/// @param obj QObject*
///
void q_texttospeech_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_texttospeech_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_texttospeech_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTextToSpeech*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_texttospeech_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_texttospeech_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_texttospeech_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QTextToSpeech*
///
bool q_texttospeech_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QTextToSpeech*
/// @param receiver QObject*
///
bool q_texttospeech_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_texttospeech_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QTextToSpeech*
///
void q_texttospeech_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QTextToSpeech*
///
void q_texttospeech_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTextToSpeech*
/// @param name const char*
/// @param value QVariant*
///
bool q_texttospeech_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QTextToSpeech*
/// @param name const char*
///
QVariant* q_texttospeech_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QTextToSpeech*
///
const char** q_texttospeech_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTextToSpeech*
///
QBindingStorage* q_texttospeech_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTextToSpeech*
///
const QBindingStorage* q_texttospeech_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextToSpeech*
///
void q_texttospeech_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextToSpeech*
/// @param callback void func(QTextToSpeech* self)
///
void q_texttospeech_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QTextToSpeech*
///
QObject* q_texttospeech_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QTextToSpeech*
/// @param classname const char*
///
bool q_texttospeech_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTextToSpeech*
///
void q_texttospeech_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextToSpeech*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_texttospeech_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextToSpeech*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_texttospeech_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_texttospeech_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_texttospeech_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTextToSpeech*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_texttospeech_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QTextToSpeech*
/// @param signal const char*
///
bool q_texttospeech_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QTextToSpeech*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_texttospeech_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QTextToSpeech*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_texttospeech_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QTextToSpeech*
/// @param receiver QObject*
/// @param member const char*
///
bool q_texttospeech_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextToSpeech*
/// @param param1 QObject*
///
void q_texttospeech_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextToSpeech*
/// @param callback void func(QTextToSpeech* self, QObject* param1)
///
void q_texttospeech_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextToSpeech*
/// @param event QEvent*
///
bool q_texttospeech_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_texttospeech_super_event` instead
///
#define q_texttospeech_qbase_event q_texttospeech_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextToSpeech*
/// @param event QEvent*
///
bool q_texttospeech_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextToSpeech*
/// @param callback bool func(QTextToSpeech* self, QEvent* event)
///
void q_texttospeech_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextToSpeech*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_texttospeech_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_texttospeech_super_event_filter` instead
///
#define q_texttospeech_qbase_event_filter q_texttospeech_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextToSpeech*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_texttospeech_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextToSpeech*
/// @param callback bool func(QTextToSpeech* self, QObject* watched, QEvent* event)
///
void q_texttospeech_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextToSpeech*
/// @param event QTimerEvent*
///
void q_texttospeech_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_texttospeech_super_timer_event` instead
///
#define q_texttospeech_qbase_timer_event q_texttospeech_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextToSpeech*
/// @param event QTimerEvent*
///
void q_texttospeech_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextToSpeech*
/// @param callback void func(QTextToSpeech* self, QTimerEvent* event)
///
void q_texttospeech_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextToSpeech*
/// @param event QChildEvent*
///
void q_texttospeech_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_texttospeech_super_child_event` instead
///
#define q_texttospeech_qbase_child_event q_texttospeech_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextToSpeech*
/// @param event QChildEvent*
///
void q_texttospeech_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextToSpeech*
/// @param callback void func(QTextToSpeech* self, QChildEvent* event)
///
void q_texttospeech_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextToSpeech*
/// @param event QEvent*
///
void q_texttospeech_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_texttospeech_super_custom_event` instead
///
#define q_texttospeech_qbase_custom_event q_texttospeech_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextToSpeech*
/// @param event QEvent*
///
void q_texttospeech_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextToSpeech*
/// @param callback void func(QTextToSpeech* self, QEvent* event)
///
void q_texttospeech_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextToSpeech*
/// @param signal QMetaMethod*
///
void q_texttospeech_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_texttospeech_super_connect_notify` instead
///
#define q_texttospeech_qbase_connect_notify q_texttospeech_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextToSpeech*
/// @param signal QMetaMethod*
///
void q_texttospeech_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextToSpeech*
/// @param callback void func(QTextToSpeech* self, QMetaMethod* signal)
///
void q_texttospeech_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextToSpeech*
/// @param signal QMetaMethod*
///
void q_texttospeech_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_texttospeech_super_disconnect_notify` instead
///
#define q_texttospeech_qbase_disconnect_notify q_texttospeech_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextToSpeech*
/// @param signal QMetaMethod*
///
void q_texttospeech_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextToSpeech*
/// @param callback void func(QTextToSpeech* self, QMetaMethod* signal)
///
void q_texttospeech_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextToSpeech*
///
QObject* q_texttospeech_sender(void* self);

/// @warning DEPRECATED: Use `q_texttospeech_super_sender` instead
///
#define q_texttospeech_qbase_sender q_texttospeech_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextToSpeech*
///
QObject* q_texttospeech_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextToSpeech*
/// @param callback QObject* func()
///
void q_texttospeech_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextToSpeech*
///
int32_t q_texttospeech_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_texttospeech_super_sender_signal_index` instead
///
#define q_texttospeech_qbase_sender_signal_index q_texttospeech_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextToSpeech*
///
int32_t q_texttospeech_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextToSpeech*
/// @param callback int32_t func()
///
void q_texttospeech_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextToSpeech*
/// @param signal const char*
///
int32_t q_texttospeech_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_texttospeech_super_receivers` instead
///
#define q_texttospeech_qbase_receivers q_texttospeech_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextToSpeech*
/// @param signal const char*
///
int32_t q_texttospeech_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextToSpeech*
/// @param callback int32_t func(QTextToSpeech* self, const char* signal)
///
void q_texttospeech_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextToSpeech*
/// @param signal QMetaMethod*
///
bool q_texttospeech_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_texttospeech_super_is_signal_connected` instead
///
#define q_texttospeech_qbase_is_signal_connected q_texttospeech_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextToSpeech*
/// @param signal QMetaMethod*
///
bool q_texttospeech_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextToSpeech*
/// @param callback bool func(QTextToSpeech* self, QMetaMethod* signal)
///
void q_texttospeech_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTextToSpeech*
/// @param callback void func(QTextToSpeech* self, const char* objectName)
///
void q_texttospeech_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#dtor.QTextToSpeech)
///
/// Delete this object from C++ memory.
///
/// @param self QTextToSpeech*
///
void q_texttospeech_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#public-types)

typedef enum {
    QTEXTTOSPEECH_STATE_READY = 0,
    QTEXTTOSPEECH_STATE_SPEAKING = 1,
    QTEXTTOSPEECH_STATE_PAUSED = 2,
    QTEXTTOSPEECH_STATE_ERROR = 3,
    QTEXTTOSPEECH_STATE_SYNTHESIZING = 4
} QTextToSpeech__State;

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#public-types)

typedef enum {
    QTEXTTOSPEECH_ERRORREASON_NOERROR = 0,
    QTEXTTOSPEECH_ERRORREASON_INITIALIZATION = 1,
    QTEXTTOSPEECH_ERRORREASON_CONFIGURATION = 2,
    QTEXTTOSPEECH_ERRORREASON_INPUT = 3,
    QTEXTTOSPEECH_ERRORREASON_PLAYBACK = 4
} QTextToSpeech__ErrorReason;

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#public-types)

typedef enum {
    QTEXTTOSPEECH_BOUNDARYHINT_DEFAULT = 0,
    QTEXTTOSPEECH_BOUNDARYHINT_IMMEDIATE = 1,
    QTEXTTOSPEECH_BOUNDARYHINT_WORD = 2,
    QTEXTTOSPEECH_BOUNDARYHINT_SENTENCE = 3,
    QTEXTTOSPEECH_BOUNDARYHINT_UTTERANCE = 4
} QTextToSpeech__BoundaryHint;

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#public-types)

typedef enum {
    QTEXTTOSPEECH_CAPABILITY_NONE = 0,
    QTEXTTOSPEECH_CAPABILITY_SPEAK = 1,
    QTEXTTOSPEECH_CAPABILITY_PAUSERESUME = 2,
    QTEXTTOSPEECH_CAPABILITY_WORDBYWORDPROGRESS = 4,
    QTEXTTOSPEECH_CAPABILITY_SYNTHESIZE = 8
} QTextToSpeech__Capability;

#endif
