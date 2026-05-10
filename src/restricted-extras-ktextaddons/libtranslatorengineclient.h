#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBTRANSLATORENGINECLIENT_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBTRANSLATORENGINECLIENT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)

/// k_texttranslator__translatorengineclient_new constructs a new TextTranslator::TranslatorEngineClient object.
///
TextTranslator__TranslatorEngineClient* k_texttranslator__translatorengineclient_new();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)

/// k_texttranslator__translatorengineclient_new2 constructs a new TextTranslator::TranslatorEngineClient object.
///
/// @param parent QObject*
///
TextTranslator__TranslatorEngineClient* k_texttranslator__translatorengineclient_new2(void* parent);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// @param self TextTranslator__TranslatorEngineClient*
///
const QMetaObject* k_texttranslator__translatorengineclient_meta_object(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param callback const QMetaObject* func()
///
void k_texttranslator__translatorengineclient_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineclient_super_meta_object` instead
///
#define k_texttranslator__translatorengineclient_qbase_meta_object k_texttranslator__translatorengineclient_super_meta_object

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// Base class method implementation
///
/// @param self TextTranslator__TranslatorEngineClient*
///
const QMetaObject* k_texttranslator__translatorengineclient_super_meta_object(void* self);

/// @param self TextTranslator__TranslatorEngineClient*
/// @param param1 const char*
///
void* k_texttranslator__translatorengineclient_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param callback void* func(TextTranslator__TranslatorEngineClient* self, const char* param1)
///
void k_texttranslator__translatorengineclient_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineclient_super_metacast` instead
///
#define k_texttranslator__translatorengineclient_qbase_metacast k_texttranslator__translatorengineclient_super_metacast

/// Base class method implementation
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param param1 const char*
///
void* k_texttranslator__translatorengineclient_super_metacast(void* self, const char* param1);

/// @param self TextTranslator__TranslatorEngineClient*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_texttranslator__translatorengineclient_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param callback int32_t func(TextTranslator__TranslatorEngineClient* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_texttranslator__translatorengineclient_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineclient_super_metacall` instead
///
#define k_texttranslator__translatorengineclient_qbase_metacall k_texttranslator__translatorengineclient_super_metacall

/// Base class method implementation
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_texttranslator__translatorengineclient_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_texttranslator__translatorengineclient_tr(const char* s);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorEngineClient*
///
const char* k_texttranslator__translatorengineclient_name(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param callback const char* func()
///
void k_texttranslator__translatorengineclient_on_name(void* self, const char* (*callback)());

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineclient_super_name` instead
///
#define k_texttranslator__translatorengineclient_qbase_name k_texttranslator__translatorengineclient_super_name

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// Base class method implementation
///
/// @param self TextTranslator__TranslatorEngineClient*
///
const char* k_texttranslator__translatorengineclient_super_name(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorEngineClient*
///
const char* k_texttranslator__translatorengineclient_translated_name(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param callback const char* func()
///
void k_texttranslator__translatorengineclient_on_translated_name(void* self, const char* (*callback)());

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineclient_super_translated_name` instead
///
#define k_texttranslator__translatorengineclient_qbase_translated_name k_texttranslator__translatorengineclient_super_translated_name

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// Base class method implementation
///
/// @param self TextTranslator__TranslatorEngineClient*
///
const char* k_texttranslator__translatorengineclient_super_translated_name(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// @param self TextTranslator__TranslatorEngineClient*
///
TextTranslator__TranslatorEnginePlugin* k_texttranslator__translatorengineclient_create_translator(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param callback TextTranslator__TranslatorEnginePlugin* func()
///
void k_texttranslator__translatorengineclient_on_create_translator(void* self, TextTranslator__TranslatorEnginePlugin* (*callback)());

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineclient_super_create_translator` instead
///
#define k_texttranslator__translatorengineclient_qbase_create_translator k_texttranslator__translatorengineclient_super_create_translator

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// Base class method implementation
///
/// @param self TextTranslator__TranslatorEngineClient*
///
TextTranslator__TranslatorEnginePlugin* k_texttranslator__translatorengineclient_super_create_translator(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of enum TextTranslator__TranslatorUtil__Language to const char*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self TextTranslator__TranslatorEngineClient*
///
/// @return libqt_map of enum TextTranslator__TranslatorUtil__Language to const char*
///
libqt_map k_texttranslator__translatorengineclient_supported_from_languages(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param callback libqt_map of enum TextTranslator__TranslatorUtil__Language to const char* func()
///
void k_texttranslator__translatorengineclient_on_supported_from_languages(void* self, libqt_map (*callback)());

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineclient_super_supported_from_languages` instead
///
#define k_texttranslator__translatorengineclient_qbase_supported_from_languages k_texttranslator__translatorengineclient_super_supported_from_languages

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// Base class method implementation
///
/// @param self TextTranslator__TranslatorEngineClient*
///
/// @return libqt_map of enum TextTranslator__TranslatorUtil__Language to const char*
///
libqt_map k_texttranslator__translatorengineclient_super_supported_from_languages(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of enum TextTranslator__TranslatorUtil__Language to const char*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self TextTranslator__TranslatorEngineClient*
///
/// @return libqt_map of enum TextTranslator__TranslatorUtil__Language to const char*
///
libqt_map k_texttranslator__translatorengineclient_supported_to_languages(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param callback libqt_map of enum TextTranslator__TranslatorUtil__Language to const char* func()
///
void k_texttranslator__translatorengineclient_on_supported_to_languages(void* self, libqt_map (*callback)());

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineclient_super_supported_to_languages` instead
///
#define k_texttranslator__translatorengineclient_qbase_supported_to_languages k_texttranslator__translatorengineclient_super_supported_to_languages

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// Base class method implementation
///
/// @param self TextTranslator__TranslatorEngineClient*
///
/// @return libqt_map of enum TextTranslator__TranslatorUtil__Language to const char*
///
libqt_map k_texttranslator__translatorengineclient_super_supported_to_languages(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// @param self TextTranslator__TranslatorEngineClient*
///
void k_texttranslator__translatorengineclient_update_list_languages(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param callback void func()
///
void k_texttranslator__translatorengineclient_on_update_list_languages(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineclient_super_update_list_languages` instead
///
#define k_texttranslator__translatorengineclient_qbase_update_list_languages k_texttranslator__translatorengineclient_super_update_list_languages

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// Base class method implementation
///
/// @param self TextTranslator__TranslatorEngineClient*
///
void k_texttranslator__translatorengineclient_super_update_list_languages(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// @param self TextTranslator__TranslatorEngineClient*
///
bool k_texttranslator__translatorengineclient_has_configuration_dialog(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param callback bool func()
///
void k_texttranslator__translatorengineclient_on_has_configuration_dialog(void* self, bool (*callback)());

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineclient_super_has_configuration_dialog` instead
///
#define k_texttranslator__translatorengineclient_qbase_has_configuration_dialog k_texttranslator__translatorengineclient_super_has_configuration_dialog

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// Base class method implementation
///
/// @param self TextTranslator__TranslatorEngineClient*
///
bool k_texttranslator__translatorengineclient_super_has_configuration_dialog(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param parentWidget QWidget*
///
bool k_texttranslator__translatorengineclient_show_configure_dialog(void* self, void* parentWidget);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param callback bool func(TextTranslator__TranslatorEngineClient* self, QWidget* parentWidget)
///
void k_texttranslator__translatorengineclient_on_show_configure_dialog(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineclient_super_show_configure_dialog` instead
///
#define k_texttranslator__translatorengineclient_qbase_show_configure_dialog k_texttranslator__translatorengineclient_super_show_configure_dialog

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// Base class method implementation
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param parentWidget QWidget*
///
bool k_texttranslator__translatorengineclient_super_show_configure_dialog(void* self, void* parentWidget);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param languageCode const char*
///
void k_texttranslator__translatorengineclient_generate_to_list_from_current_to_language(void* self, const char* languageCode);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param callback void func(TextTranslator__TranslatorEngineClient* self, const char* languageCode)
///
void k_texttranslator__translatorengineclient_on_generate_to_list_from_current_to_language(void* self, void (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineclient_super_generate_to_list_from_current_to_language` instead
///
#define k_texttranslator__translatorengineclient_qbase_generate_to_list_from_current_to_language k_texttranslator__translatorengineclient_super_generate_to_list_from_current_to_language

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// Base class method implementation
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param languageCode const char*
///
void k_texttranslator__translatorengineclient_super_generate_to_list_from_current_to_language(void* self, const char* languageCode);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// @param self TextTranslator__TranslatorEngineClient*
///
bool k_texttranslator__translatorengineclient_has_invert_support(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param callback bool func()
///
void k_texttranslator__translatorengineclient_on_has_invert_support(void* self, bool (*callback)());

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineclient_super_has_invert_support` instead
///
#define k_texttranslator__translatorengineclient_qbase_has_invert_support k_texttranslator__translatorengineclient_super_has_invert_support

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// Base class method implementation
///
/// @param self TextTranslator__TranslatorEngineClient*
///
bool k_texttranslator__translatorengineclient_super_has_invert_support(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// @param self TextTranslator__TranslatorEngineClient*
///
/// @return enum TextTranslator__TranslatorEngineClient__EngineType
///
int32_t k_texttranslator__translatorengineclient_engine_type(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param callback int32_t func()
///
void k_texttranslator__translatorengineclient_on_engine_type(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineclient_super_engine_type` instead
///
#define k_texttranslator__translatorengineclient_qbase_engine_type k_texttranslator__translatorengineclient_super_engine_type

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// Base class method implementation
///
/// @param self TextTranslator__TranslatorEngineClient*
///
/// @return enum TextTranslator__TranslatorEngineClient__EngineType
///
int32_t k_texttranslator__translatorengineclient_super_engine_type(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// @param self TextTranslator__TranslatorEngineClient*
///
void k_texttranslator__translatorengineclient_configure_changed(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param callback void func(TextTranslator__TranslatorEngineClient* self)
///
void k_texttranslator__translatorengineclient_on_configure_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of enum TextTranslator__TranslatorUtil__Language to const char*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self TextTranslator__TranslatorEngineClient*
///
/// @return libqt_map of enum TextTranslator__TranslatorUtil__Language to const char*
///
libqt_map k_texttranslator__translatorengineclient_fill_languages(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param callback libqt_map of enum TextTranslator__TranslatorUtil__Language to const char* func()
///
void k_texttranslator__translatorengineclient_on_fill_languages(void* self, libqt_map (*callback)());

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineclient_super_fill_languages` instead
///
#define k_texttranslator__translatorengineclient_qbase_fill_languages k_texttranslator__translatorengineclient_super_fill_languages

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// Base class method implementation
///
/// @param self TextTranslator__TranslatorEngineClient*
///
/// @return libqt_map of enum TextTranslator__TranslatorUtil__Language to const char*
///
libqt_map k_texttranslator__translatorengineclient_super_fill_languages(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param lang enum TextTranslator__TranslatorUtil__Language
///
bool k_texttranslator__translatorengineclient_is_supported(void* self, int32_t lang);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param callback bool func(TextTranslator__TranslatorEngineClient* self, enum TextTranslator__TranslatorUtil__Language lang)
///
void k_texttranslator__translatorengineclient_on_is_supported(void* self, bool (*callback)(void*, int32_t));

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineclient_super_is_supported` instead
///
#define k_texttranslator__translatorengineclient_qbase_is_supported k_texttranslator__translatorengineclient_super_is_supported

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// Base class method implementation
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param lang enum TextTranslator__TranslatorUtil__Language
///
bool k_texttranslator__translatorengineclient_super_is_supported(void* self, int32_t lang);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_texttranslator__translatorengineclient_tr2(const char* s, const char* c);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_texttranslator__translatorengineclient_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorEngineClient*
///
const char* k_texttranslator__translatorengineclient_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param name const char*
///
void k_texttranslator__translatorengineclient_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self TextTranslator__TranslatorEngineClient*
///
bool k_texttranslator__translatorengineclient_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self TextTranslator__TranslatorEngineClient*
///
bool k_texttranslator__translatorengineclient_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self TextTranslator__TranslatorEngineClient*
///
bool k_texttranslator__translatorengineclient_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self TextTranslator__TranslatorEngineClient*
///
bool k_texttranslator__translatorengineclient_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param b bool
///
bool k_texttranslator__translatorengineclient_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self TextTranslator__TranslatorEngineClient*
///
QThread* k_texttranslator__translatorengineclient_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param thread QThread*
///
bool k_texttranslator__translatorengineclient_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param interval int
///
int32_t k_texttranslator__translatorengineclient_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param time int64_t of nanoseconds
///
int32_t k_texttranslator__translatorengineclient_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param id int
///
void k_texttranslator__translatorengineclient_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param id enum Qt__TimerId
///
void k_texttranslator__translatorengineclient_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self TextTranslator__TranslatorEngineClient*
///
/// @return libqt_list of QObject*
///
libqt_list k_texttranslator__translatorengineclient_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param parent QObject*
///
void k_texttranslator__translatorengineclient_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param filterObj QObject*
///
void k_texttranslator__translatorengineclient_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param obj QObject*
///
void k_texttranslator__translatorengineclient_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_texttranslator__translatorengineclient_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_texttranslator__translatorengineclient_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_texttranslator__translatorengineclient_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texttranslator__translatorengineclient_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_texttranslator__translatorengineclient_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextTranslator__TranslatorEngineClient*
///
bool k_texttranslator__translatorengineclient_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param receiver QObject*
///
bool k_texttranslator__translatorengineclient_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_texttranslator__translatorengineclient_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self TextTranslator__TranslatorEngineClient*
///
void k_texttranslator__translatorengineclient_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self TextTranslator__TranslatorEngineClient*
///
void k_texttranslator__translatorengineclient_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param name const char*
/// @param value QVariant*
///
bool k_texttranslator__translatorengineclient_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param name const char*
///
QVariant* k_texttranslator__translatorengineclient_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextTranslator__TranslatorEngineClient*
///
const char** k_texttranslator__translatorengineclient_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextTranslator__TranslatorEngineClient*
///
QBindingStorage* k_texttranslator__translatorengineclient_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextTranslator__TranslatorEngineClient*
///
const QBindingStorage* k_texttranslator__translatorengineclient_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextTranslator__TranslatorEngineClient*
///
void k_texttranslator__translatorengineclient_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param callback void func(TextTranslator__TranslatorEngineClient* self)
///
void k_texttranslator__translatorengineclient_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self TextTranslator__TranslatorEngineClient*
///
QObject* k_texttranslator__translatorengineclient_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param classname const char*
///
bool k_texttranslator__translatorengineclient_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self TextTranslator__TranslatorEngineClient*
///
void k_texttranslator__translatorengineclient_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_texttranslator__translatorengineclient_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_texttranslator__translatorengineclient_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_texttranslator__translatorengineclient_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_texttranslator__translatorengineclient_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_texttranslator__translatorengineclient_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param signal const char*
///
bool k_texttranslator__translatorengineclient_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_texttranslator__translatorengineclient_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texttranslator__translatorengineclient_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texttranslator__translatorengineclient_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param param1 QObject*
///
void k_texttranslator__translatorengineclient_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param callback void func(TextTranslator__TranslatorEngineClient* self, QObject* param1)
///
void k_texttranslator__translatorengineclient_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param event QEvent*
///
bool k_texttranslator__translatorengineclient_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineclient_super_event` instead
///
#define k_texttranslator__translatorengineclient_qbase_event k_texttranslator__translatorengineclient_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param event QEvent*
///
bool k_texttranslator__translatorengineclient_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param callback bool func(TextTranslator__TranslatorEngineClient* self, QEvent* event)
///
void k_texttranslator__translatorengineclient_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_texttranslator__translatorengineclient_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineclient_super_event_filter` instead
///
#define k_texttranslator__translatorengineclient_qbase_event_filter k_texttranslator__translatorengineclient_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_texttranslator__translatorengineclient_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param callback bool func(TextTranslator__TranslatorEngineClient* self, QObject* watched, QEvent* event)
///
void k_texttranslator__translatorengineclient_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param event QTimerEvent*
///
void k_texttranslator__translatorengineclient_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineclient_super_timer_event` instead
///
#define k_texttranslator__translatorengineclient_qbase_timer_event k_texttranslator__translatorengineclient_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param event QTimerEvent*
///
void k_texttranslator__translatorengineclient_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param callback void func(TextTranslator__TranslatorEngineClient* self, QTimerEvent* event)
///
void k_texttranslator__translatorengineclient_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param event QChildEvent*
///
void k_texttranslator__translatorengineclient_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineclient_super_child_event` instead
///
#define k_texttranslator__translatorengineclient_qbase_child_event k_texttranslator__translatorengineclient_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param event QChildEvent*
///
void k_texttranslator__translatorengineclient_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param callback void func(TextTranslator__TranslatorEngineClient* self, QChildEvent* event)
///
void k_texttranslator__translatorengineclient_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param event QEvent*
///
void k_texttranslator__translatorengineclient_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineclient_super_custom_event` instead
///
#define k_texttranslator__translatorengineclient_qbase_custom_event k_texttranslator__translatorengineclient_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param event QEvent*
///
void k_texttranslator__translatorengineclient_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param callback void func(TextTranslator__TranslatorEngineClient* self, QEvent* event)
///
void k_texttranslator__translatorengineclient_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param signal QMetaMethod*
///
void k_texttranslator__translatorengineclient_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineclient_super_connect_notify` instead
///
#define k_texttranslator__translatorengineclient_qbase_connect_notify k_texttranslator__translatorengineclient_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param signal QMetaMethod*
///
void k_texttranslator__translatorengineclient_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param callback void func(TextTranslator__TranslatorEngineClient* self, QMetaMethod* signal)
///
void k_texttranslator__translatorengineclient_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param signal QMetaMethod*
///
void k_texttranslator__translatorengineclient_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineclient_super_disconnect_notify` instead
///
#define k_texttranslator__translatorengineclient_qbase_disconnect_notify k_texttranslator__translatorengineclient_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param signal QMetaMethod*
///
void k_texttranslator__translatorengineclient_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param callback void func(TextTranslator__TranslatorEngineClient* self, QMetaMethod* signal)
///
void k_texttranslator__translatorengineclient_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
///
QObject* k_texttranslator__translatorengineclient_sender(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineclient_super_sender` instead
///
#define k_texttranslator__translatorengineclient_qbase_sender k_texttranslator__translatorengineclient_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
///
QObject* k_texttranslator__translatorengineclient_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param callback QObject* func()
///
void k_texttranslator__translatorengineclient_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
///
int32_t k_texttranslator__translatorengineclient_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineclient_super_sender_signal_index` instead
///
#define k_texttranslator__translatorengineclient_qbase_sender_signal_index k_texttranslator__translatorengineclient_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
///
int32_t k_texttranslator__translatorengineclient_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param callback int32_t func()
///
void k_texttranslator__translatorengineclient_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param signal const char*
///
int32_t k_texttranslator__translatorengineclient_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineclient_super_receivers` instead
///
#define k_texttranslator__translatorengineclient_qbase_receivers k_texttranslator__translatorengineclient_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param signal const char*
///
int32_t k_texttranslator__translatorengineclient_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param callback int32_t func(TextTranslator__TranslatorEngineClient* self, const char* signal)
///
void k_texttranslator__translatorengineclient_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param signal QMetaMethod*
///
bool k_texttranslator__translatorengineclient_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineclient_super_is_signal_connected` instead
///
#define k_texttranslator__translatorengineclient_qbase_is_signal_connected k_texttranslator__translatorengineclient_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param signal QMetaMethod*
///
bool k_texttranslator__translatorengineclient_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param callback bool func(TextTranslator__TranslatorEngineClient* self, QMetaMethod* signal)
///
void k_texttranslator__translatorengineclient_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self TextTranslator__TranslatorEngineClient*
/// @param callback void func(TextTranslator__TranslatorEngineClient* self, const char* objectName)
///
void k_texttranslator__translatorengineclient_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextTranslator__TranslatorEngineClient*
///
void k_texttranslator__translatorengineclient_delete(void* self);

typedef enum {
    TEXTTRANSLATOR_TRANSLATORENGINECLIENT_ENGINETYPE_LOCALE = 0,
    TEXTTRANSLATOR_TRANSLATORENGINECLIENT_ENGINETYPE_NETWORK = 1
} TextTranslator__TranslatorEngineClient__EngineType;

#endif
