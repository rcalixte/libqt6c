#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBTRANSLATORENGINEPLUGIN_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBTRANSLATORENGINEPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)

/// k_texttranslator__translatorengineplugin_new constructs a new TextTranslator::TranslatorEnginePlugin object.
///
TextTranslator__TranslatorEnginePlugin* k_texttranslator__translatorengineplugin_new();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)

/// k_texttranslator__translatorengineplugin_new2 constructs a new TextTranslator::TranslatorEnginePlugin object.
///
/// @param parent QObject*
///
TextTranslator__TranslatorEnginePlugin* k_texttranslator__translatorengineplugin_new2(void* parent);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
const QMetaObject* k_texttranslator__translatorengineplugin_meta_object(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param callback const QMetaObject* func()
///
void k_texttranslator__translatorengineplugin_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineplugin_super_meta_object` instead
///
#define k_texttranslator__translatorengineplugin_qbase_meta_object k_texttranslator__translatorengineplugin_super_meta_object

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// Base class method implementation
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
const QMetaObject* k_texttranslator__translatorengineplugin_super_meta_object(void* self);

/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param param1 const char*
///
void* k_texttranslator__translatorengineplugin_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param callback void* func(TextTranslator__TranslatorEnginePlugin* self, const char* param1)
///
void k_texttranslator__translatorengineplugin_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineplugin_super_metacast` instead
///
#define k_texttranslator__translatorengineplugin_qbase_metacast k_texttranslator__translatorengineplugin_super_metacast

/// Base class method implementation
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param param1 const char*
///
void* k_texttranslator__translatorengineplugin_super_metacast(void* self, const char* param1);

/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_texttranslator__translatorengineplugin_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param callback int32_t func(TextTranslator__TranslatorEnginePlugin* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_texttranslator__translatorengineplugin_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineplugin_super_metacall` instead
///
#define k_texttranslator__translatorengineplugin_qbase_metacall k_texttranslator__translatorengineplugin_super_metacall

/// Base class method implementation
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_texttranslator__translatorengineplugin_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_texttranslator__translatorengineplugin_tr(const char* s);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
void k_texttranslator__translatorengineplugin_translate(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param callback void func()
///
void k_texttranslator__translatorengineplugin_on_translate(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineplugin_super_translate` instead
///
#define k_texttranslator__translatorengineplugin_qbase_translate k_texttranslator__translatorengineplugin_super_translate

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// Base class method implementation
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
void k_texttranslator__translatorengineplugin_super_translate(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
const char* k_texttranslator__translatorengineplugin_result_translate(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param text const char*
///
void k_texttranslator__translatorengineplugin_set_input_text(void* self, const char* text);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param language const char*
///
void k_texttranslator__translatorengineplugin_set_from(void* self, const char* language);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param language const char*
///
void k_texttranslator__translatorengineplugin_set_to(void* self, const char* language);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param result const char*
///
void k_texttranslator__translatorengineplugin_set_result(void* self, const char* result);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param debug const char*
///
void k_texttranslator__translatorengineplugin_set_json_debug(void* self, const char* debug);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
const char* k_texttranslator__translatorengineplugin_input_text(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
const char* k_texttranslator__translatorengineplugin_from(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
const char* k_texttranslator__translatorengineplugin_to(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
const char* k_texttranslator__translatorengineplugin_result(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
const char* k_texttranslator__translatorengineplugin_json_debug(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
void k_texttranslator__translatorengineplugin_clear(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
void k_texttranslator__translatorengineplugin_translate_done(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param callback void func(TextTranslator__TranslatorEnginePlugin* self)
///
void k_texttranslator__translatorengineplugin_on_translate_done(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param errorMessage const char*
///
void k_texttranslator__translatorengineplugin_translate_failed(void* self, const char* errorMessage);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param callback void func(TextTranslator__TranslatorEnginePlugin* self, const char* errorMessage)
///
void k_texttranslator__translatorengineplugin_on_translate_failed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
void k_texttranslator__translatorengineplugin_languages_changed(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param callback void func(TextTranslator__TranslatorEnginePlugin* self)
///
void k_texttranslator__translatorengineplugin_on_languages_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param result const char*
///
void k_texttranslator__translatorengineplugin_append_result(void* self, const char* result);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param callback void func(TextTranslator__TranslatorEnginePlugin* self, const char* result)
///
void k_texttranslator__translatorengineplugin_on_append_result(void* self, void (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineplugin_super_append_result` instead
///
#define k_texttranslator__translatorengineplugin_qbase_append_result k_texttranslator__translatorengineplugin_super_append_result

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// Base class method implementation
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param result const char*
///
void k_texttranslator__translatorengineplugin_super_append_result(void* self, const char* result);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param error enum QNetworkReply__NetworkError
///
void k_texttranslator__translatorengineplugin_slot_error(void* self, int32_t error);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param callback void func(TextTranslator__TranslatorEnginePlugin* self, enum QNetworkReply__NetworkError error)
///
void k_texttranslator__translatorengineplugin_on_slot_error(void* self, void (*callback)(void*, int32_t));

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineplugin_super_slot_error` instead
///
#define k_texttranslator__translatorengineplugin_qbase_slot_error k_texttranslator__translatorengineplugin_super_slot_error

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// Base class method implementation
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param error enum QNetworkReply__NetworkError
///
void k_texttranslator__translatorengineplugin_super_slot_error(void* self, int32_t error);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
bool k_texttranslator__translatorengineplugin_verify_from_and_to_language(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param callback bool func()
///
void k_texttranslator__translatorengineplugin_on_verify_from_and_to_language(void* self, bool (*callback)());

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineplugin_super_verify_from_and_to_language` instead
///
#define k_texttranslator__translatorengineplugin_qbase_verify_from_and_to_language k_texttranslator__translatorengineplugin_super_verify_from_and_to_language

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// Base class method implementation
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
bool k_texttranslator__translatorengineplugin_super_verify_from_and_to_language(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
bool k_texttranslator__translatorengineplugin_has_debug(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param callback bool func()
///
void k_texttranslator__translatorengineplugin_on_has_debug(void* self, bool (*callback)());

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineplugin_super_has_debug` instead
///
#define k_texttranslator__translatorengineplugin_qbase_has_debug k_texttranslator__translatorengineplugin_super_has_debug

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// Base class method implementation
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
bool k_texttranslator__translatorengineplugin_super_has_debug(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param langStr const char*
///
const char* k_texttranslator__translatorengineplugin_language_code(void* self, const char* langStr);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param callback const char* func(TextTranslator__TranslatorEnginePlugin* self, const char* langStr)
///
void k_texttranslator__translatorengineplugin_on_language_code(void* self, const char* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineplugin_super_language_code` instead
///
#define k_texttranslator__translatorengineplugin_qbase_language_code k_texttranslator__translatorengineplugin_super_language_code

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// Base class method implementation
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param langStr const char*
///
const char* k_texttranslator__translatorengineplugin_super_language_code(void* self, const char* langStr);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_texttranslator__translatorengineplugin_tr2(const char* s, const char* c);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_texttranslator__translatorengineplugin_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
const char* k_texttranslator__translatorengineplugin_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param name const char*
///
void k_texttranslator__translatorengineplugin_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
bool k_texttranslator__translatorengineplugin_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
bool k_texttranslator__translatorengineplugin_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
bool k_texttranslator__translatorengineplugin_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
bool k_texttranslator__translatorengineplugin_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param b bool
///
bool k_texttranslator__translatorengineplugin_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
QThread* k_texttranslator__translatorengineplugin_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param thread QThread*
///
bool k_texttranslator__translatorengineplugin_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param interval int
///
int32_t k_texttranslator__translatorengineplugin_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param time int64_t of nanoseconds
///
int32_t k_texttranslator__translatorengineplugin_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param id int
///
void k_texttranslator__translatorengineplugin_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param id enum Qt__TimerId
///
void k_texttranslator__translatorengineplugin_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
/// @return libqt_list of QObject*
///
libqt_list k_texttranslator__translatorengineplugin_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param parent QObject*
///
void k_texttranslator__translatorengineplugin_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param filterObj QObject*
///
void k_texttranslator__translatorengineplugin_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param obj QObject*
///
void k_texttranslator__translatorengineplugin_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_texttranslator__translatorengineplugin_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_texttranslator__translatorengineplugin_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_texttranslator__translatorengineplugin_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texttranslator__translatorengineplugin_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_texttranslator__translatorengineplugin_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
bool k_texttranslator__translatorengineplugin_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param receiver QObject*
///
bool k_texttranslator__translatorengineplugin_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_texttranslator__translatorengineplugin_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
void k_texttranslator__translatorengineplugin_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
void k_texttranslator__translatorengineplugin_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param name const char*
/// @param value QVariant*
///
bool k_texttranslator__translatorengineplugin_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param name const char*
///
QVariant* k_texttranslator__translatorengineplugin_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
const char** k_texttranslator__translatorengineplugin_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
QBindingStorage* k_texttranslator__translatorengineplugin_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
const QBindingStorage* k_texttranslator__translatorengineplugin_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
void k_texttranslator__translatorengineplugin_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param callback void func(TextTranslator__TranslatorEnginePlugin* self)
///
void k_texttranslator__translatorengineplugin_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
QObject* k_texttranslator__translatorengineplugin_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param classname const char*
///
bool k_texttranslator__translatorengineplugin_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
void k_texttranslator__translatorengineplugin_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_texttranslator__translatorengineplugin_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_texttranslator__translatorengineplugin_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_texttranslator__translatorengineplugin_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_texttranslator__translatorengineplugin_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_texttranslator__translatorengineplugin_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param signal const char*
///
bool k_texttranslator__translatorengineplugin_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_texttranslator__translatorengineplugin_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texttranslator__translatorengineplugin_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texttranslator__translatorengineplugin_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param param1 QObject*
///
void k_texttranslator__translatorengineplugin_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param callback void func(TextTranslator__TranslatorEnginePlugin* self, QObject* param1)
///
void k_texttranslator__translatorengineplugin_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param event QEvent*
///
bool k_texttranslator__translatorengineplugin_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineplugin_super_event` instead
///
#define k_texttranslator__translatorengineplugin_qbase_event k_texttranslator__translatorengineplugin_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param event QEvent*
///
bool k_texttranslator__translatorengineplugin_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param callback bool func(TextTranslator__TranslatorEnginePlugin* self, QEvent* event)
///
void k_texttranslator__translatorengineplugin_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_texttranslator__translatorengineplugin_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineplugin_super_event_filter` instead
///
#define k_texttranslator__translatorengineplugin_qbase_event_filter k_texttranslator__translatorengineplugin_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_texttranslator__translatorengineplugin_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param callback bool func(TextTranslator__TranslatorEnginePlugin* self, QObject* watched, QEvent* event)
///
void k_texttranslator__translatorengineplugin_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param event QTimerEvent*
///
void k_texttranslator__translatorengineplugin_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineplugin_super_timer_event` instead
///
#define k_texttranslator__translatorengineplugin_qbase_timer_event k_texttranslator__translatorengineplugin_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param event QTimerEvent*
///
void k_texttranslator__translatorengineplugin_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param callback void func(TextTranslator__TranslatorEnginePlugin* self, QTimerEvent* event)
///
void k_texttranslator__translatorengineplugin_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param event QChildEvent*
///
void k_texttranslator__translatorengineplugin_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineplugin_super_child_event` instead
///
#define k_texttranslator__translatorengineplugin_qbase_child_event k_texttranslator__translatorengineplugin_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param event QChildEvent*
///
void k_texttranslator__translatorengineplugin_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param callback void func(TextTranslator__TranslatorEnginePlugin* self, QChildEvent* event)
///
void k_texttranslator__translatorengineplugin_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param event QEvent*
///
void k_texttranslator__translatorengineplugin_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineplugin_super_custom_event` instead
///
#define k_texttranslator__translatorengineplugin_qbase_custom_event k_texttranslator__translatorengineplugin_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param event QEvent*
///
void k_texttranslator__translatorengineplugin_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param callback void func(TextTranslator__TranslatorEnginePlugin* self, QEvent* event)
///
void k_texttranslator__translatorengineplugin_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param signal QMetaMethod*
///
void k_texttranslator__translatorengineplugin_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineplugin_super_connect_notify` instead
///
#define k_texttranslator__translatorengineplugin_qbase_connect_notify k_texttranslator__translatorengineplugin_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param signal QMetaMethod*
///
void k_texttranslator__translatorengineplugin_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param callback void func(TextTranslator__TranslatorEnginePlugin* self, QMetaMethod* signal)
///
void k_texttranslator__translatorengineplugin_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param signal QMetaMethod*
///
void k_texttranslator__translatorengineplugin_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineplugin_super_disconnect_notify` instead
///
#define k_texttranslator__translatorengineplugin_qbase_disconnect_notify k_texttranslator__translatorengineplugin_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param signal QMetaMethod*
///
void k_texttranslator__translatorengineplugin_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param callback void func(TextTranslator__TranslatorEnginePlugin* self, QMetaMethod* signal)
///
void k_texttranslator__translatorengineplugin_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
QObject* k_texttranslator__translatorengineplugin_sender(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineplugin_super_sender` instead
///
#define k_texttranslator__translatorengineplugin_qbase_sender k_texttranslator__translatorengineplugin_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
QObject* k_texttranslator__translatorengineplugin_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param callback QObject* func()
///
void k_texttranslator__translatorengineplugin_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
int32_t k_texttranslator__translatorengineplugin_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineplugin_super_sender_signal_index` instead
///
#define k_texttranslator__translatorengineplugin_qbase_sender_signal_index k_texttranslator__translatorengineplugin_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
int32_t k_texttranslator__translatorengineplugin_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param callback int32_t func()
///
void k_texttranslator__translatorengineplugin_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param signal const char*
///
int32_t k_texttranslator__translatorengineplugin_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineplugin_super_receivers` instead
///
#define k_texttranslator__translatorengineplugin_qbase_receivers k_texttranslator__translatorengineplugin_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param signal const char*
///
int32_t k_texttranslator__translatorengineplugin_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param callback int32_t func(TextTranslator__TranslatorEnginePlugin* self, const char* signal)
///
void k_texttranslator__translatorengineplugin_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param signal QMetaMethod*
///
bool k_texttranslator__translatorengineplugin_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineplugin_super_is_signal_connected` instead
///
#define k_texttranslator__translatorengineplugin_qbase_is_signal_connected k_texttranslator__translatorengineplugin_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param signal QMetaMethod*
///
bool k_texttranslator__translatorengineplugin_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param callback bool func(TextTranslator__TranslatorEnginePlugin* self, QMetaMethod* signal)
///
void k_texttranslator__translatorengineplugin_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self TextTranslator__TranslatorEnginePlugin*
/// @param callback void func(TextTranslator__TranslatorEnginePlugin* self, const char* objectName)
///
void k_texttranslator__translatorengineplugin_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextTranslator__TranslatorEnginePlugin*
///
void k_texttranslator__translatorengineplugin_delete(void* self);

#endif
