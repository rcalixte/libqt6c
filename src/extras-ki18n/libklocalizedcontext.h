#pragma once
#ifndef SRC_EXTRAS_KI18N_QT6C_LIBKLOCALIZEDCONTEXT_H
#define SRC_EXTRAS_KI18N_QT6C_LIBKLOCALIZEDCONTEXT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html)

/// k_localizedcontext_new constructs a new KLocalizedContext object.
///
KLocalizedContext* k_localizedcontext_new();

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html)

/// k_localizedcontext_new2 constructs a new KLocalizedContext object.
///
/// @param parent QObject*
///
KLocalizedContext* k_localizedcontext_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KLocalizedContext*
///
const QMetaObject* k_localizedcontext_meta_object(void* self);

/// @param self KLocalizedContext*
/// @param param1 const char*
///
void* k_localizedcontext_metacast(void* self, const char* param1);

/// @param self KLocalizedContext*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_localizedcontext_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KLocalizedContext*
/// @param callback int32_t func(KLocalizedContext* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_localizedcontext_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KLocalizedContext*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_localizedcontext_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_localizedcontext_tr(const char* s);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#translationDomain)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
///
const char* k_localizedcontext_translation_domain(void* self);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#setTranslationDomain)
///
/// @param self KLocalizedContext*
/// @param domain const char*
///
void k_localizedcontext_set_translation_domain(void* self, const char* domain);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18n)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param message const char*
///
const char* k_localizedcontext_i18n(void* self, const char* message);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param message const char*
///
const char* k_localizedcontext_i18nc(void* self, const char* context, const char* message);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18np)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param singular const char*
/// @param plural const char*
///
const char* k_localizedcontext_i18np(void* self, const char* singular, const char* plural);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ncp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
///
const char* k_localizedcontext_i18ncp(void* self, const char* context, const char* singular, const char* plural);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nd)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param message const char*
///
const char* k_localizedcontext_i18nd(void* self, const char* domain, const char* message);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
///
const char* k_localizedcontext_i18ndc(void* self, const char* domain, const char* context, const char* message);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
///
const char* k_localizedcontext_i18ndp(void* self, const char* domain, const char* singular, const char* plural);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndcp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
///
const char* k_localizedcontext_i18ndcp(void* self, const char* domain, const char* context, const char* singular, const char* plural);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18n)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param message const char*
///
const char* k_localizedcontext_xi18n(void* self, const char* message);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param message const char*
///
const char* k_localizedcontext_xi18nc(void* self, const char* context, const char* message);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18np)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param singular const char*
/// @param plural const char*
///
const char* k_localizedcontext_xi18np(void* self, const char* singular, const char* plural);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ncp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
///
const char* k_localizedcontext_xi18ncp(void* self, const char* context, const char* singular, const char* plural);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nd)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param message const char*
///
const char* k_localizedcontext_xi18nd(void* self, const char* domain, const char* message);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
///
const char* k_localizedcontext_xi18ndc(void* self, const char* domain, const char* context, const char* message);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
///
const char* k_localizedcontext_xi18ndp(void* self, const char* domain, const char* singular, const char* plural);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndcp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
///
const char* k_localizedcontext_xi18ndcp(void* self, const char* domain, const char* context, const char* singular, const char* plural);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#translationDomainChanged)
///
/// @param self KLocalizedContext*
/// @param translationDomain const char*
///
void k_localizedcontext_translation_domain_changed(void* self, const char* translationDomain);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#translationDomainChanged)
///
/// @param self KLocalizedContext*
/// @param callback void func(KLocalizedContext* self, const char* translationDomain)
///
void k_localizedcontext_on_translation_domain_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_localizedcontext_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_localizedcontext_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18n)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param message const char*
/// @param param1 QVariant*
///
const char* k_localizedcontext_i18n2(void* self, const char* message, void* param1);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18n)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
///
const char* k_localizedcontext_i18n3(void* self, const char* message, void* param1, void* param2);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18n)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
///
const char* k_localizedcontext_i18n4(void* self, const char* message, void* param1, void* param2, void* param3);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18n)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
///
const char* k_localizedcontext_i18n5(void* self, const char* message, void* param1, void* param2, void* param3, void* param4);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18n)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
///
const char* k_localizedcontext_i18n6(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18n)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
///
const char* k_localizedcontext_i18n7(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18n)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
///
const char* k_localizedcontext_i18n8(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18n)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
///
const char* k_localizedcontext_i18n9(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18n)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
///
const char* k_localizedcontext_i18n10(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18n)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
/// @param param10 QVariant*
///
const char* k_localizedcontext_i18n11(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
///
const char* k_localizedcontext_i18nc3(void* self, const char* context, const char* message, void* param1);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
///
const char* k_localizedcontext_i18nc4(void* self, const char* context, const char* message, void* param1, void* param2);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
///
const char* k_localizedcontext_i18nc5(void* self, const char* context, const char* message, void* param1, void* param2, void* param3);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
///
const char* k_localizedcontext_i18nc6(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
///
const char* k_localizedcontext_i18nc7(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
///
const char* k_localizedcontext_i18nc8(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
///
const char* k_localizedcontext_i18nc9(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
///
const char* k_localizedcontext_i18nc10(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
///
const char* k_localizedcontext_i18nc11(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
/// @param param10 QVariant*
///
const char* k_localizedcontext_i18nc12(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18np)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
///
const char* k_localizedcontext_i18np3(void* self, const char* singular, const char* plural, void* param1);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18np)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
///
const char* k_localizedcontext_i18np4(void* self, const char* singular, const char* plural, void* param1, void* param2);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18np)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
///
const char* k_localizedcontext_i18np5(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18np)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
///
const char* k_localizedcontext_i18np6(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18np)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
///
const char* k_localizedcontext_i18np7(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18np)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
///
const char* k_localizedcontext_i18np8(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18np)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
///
const char* k_localizedcontext_i18np9(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18np)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
///
const char* k_localizedcontext_i18np10(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18np)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
///
const char* k_localizedcontext_i18np11(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18np)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
/// @param param10 QVariant*
///
const char* k_localizedcontext_i18np12(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ncp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
///
const char* k_localizedcontext_i18ncp4(void* self, const char* context, const char* singular, const char* plural, void* param1);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ncp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
///
const char* k_localizedcontext_i18ncp5(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ncp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
///
const char* k_localizedcontext_i18ncp6(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ncp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
///
const char* k_localizedcontext_i18ncp7(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ncp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
///
const char* k_localizedcontext_i18ncp8(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ncp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
///
const char* k_localizedcontext_i18ncp9(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ncp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
///
const char* k_localizedcontext_i18ncp10(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ncp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
///
const char* k_localizedcontext_i18ncp11(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ncp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
///
const char* k_localizedcontext_i18ncp12(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ncp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
/// @param param10 QVariant*
///
const char* k_localizedcontext_i18ncp13(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nd)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
///
const char* k_localizedcontext_i18nd3(void* self, const char* domain, const char* message, void* param1);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nd)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
///
const char* k_localizedcontext_i18nd4(void* self, const char* domain, const char* message, void* param1, void* param2);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nd)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
///
const char* k_localizedcontext_i18nd5(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nd)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
///
const char* k_localizedcontext_i18nd6(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nd)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
///
const char* k_localizedcontext_i18nd7(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nd)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
///
const char* k_localizedcontext_i18nd8(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nd)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
///
const char* k_localizedcontext_i18nd9(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nd)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
///
const char* k_localizedcontext_i18nd10(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nd)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
///
const char* k_localizedcontext_i18nd11(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nd)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
/// @param param10 QVariant*
///
const char* k_localizedcontext_i18nd12(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
///
const char* k_localizedcontext_i18ndc4(void* self, const char* domain, const char* context, const char* message, void* param1);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
///
const char* k_localizedcontext_i18ndc5(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
///
const char* k_localizedcontext_i18ndc6(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
///
const char* k_localizedcontext_i18ndc7(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
///
const char* k_localizedcontext_i18ndc8(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
///
const char* k_localizedcontext_i18ndc9(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
///
const char* k_localizedcontext_i18ndc10(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
///
const char* k_localizedcontext_i18ndc11(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
///
const char* k_localizedcontext_i18ndc12(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
/// @param param10 QVariant*
///
const char* k_localizedcontext_i18ndc13(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
///
const char* k_localizedcontext_i18ndp4(void* self, const char* domain, const char* singular, const char* plural, void* param1);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
///
const char* k_localizedcontext_i18ndp5(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
///
const char* k_localizedcontext_i18ndp6(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
///
const char* k_localizedcontext_i18ndp7(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
///
const char* k_localizedcontext_i18ndp8(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
///
const char* k_localizedcontext_i18ndp9(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
///
const char* k_localizedcontext_i18ndp10(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
///
const char* k_localizedcontext_i18ndp11(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
///
const char* k_localizedcontext_i18ndp12(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
/// @param param10 QVariant*
///
const char* k_localizedcontext_i18ndp13(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndcp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
///
const char* k_localizedcontext_i18ndcp5(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndcp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
///
const char* k_localizedcontext_i18ndcp6(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndcp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
///
const char* k_localizedcontext_i18ndcp7(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndcp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
///
const char* k_localizedcontext_i18ndcp8(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndcp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
///
const char* k_localizedcontext_i18ndcp9(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndcp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
///
const char* k_localizedcontext_i18ndcp10(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndcp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
///
const char* k_localizedcontext_i18ndcp11(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndcp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
///
const char* k_localizedcontext_i18ndcp12(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndcp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
///
const char* k_localizedcontext_i18ndcp13(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndcp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
/// @param param10 QVariant*
///
const char* k_localizedcontext_i18ndcp14(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18n)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param message const char*
/// @param param1 QVariant*
///
const char* k_localizedcontext_xi18n2(void* self, const char* message, void* param1);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18n)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
///
const char* k_localizedcontext_xi18n3(void* self, const char* message, void* param1, void* param2);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18n)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
///
const char* k_localizedcontext_xi18n4(void* self, const char* message, void* param1, void* param2, void* param3);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18n)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
///
const char* k_localizedcontext_xi18n5(void* self, const char* message, void* param1, void* param2, void* param3, void* param4);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18n)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
///
const char* k_localizedcontext_xi18n6(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18n)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
///
const char* k_localizedcontext_xi18n7(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18n)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
///
const char* k_localizedcontext_xi18n8(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18n)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
///
const char* k_localizedcontext_xi18n9(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18n)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
///
const char* k_localizedcontext_xi18n10(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18n)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
/// @param param10 QVariant*
///
const char* k_localizedcontext_xi18n11(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
///
const char* k_localizedcontext_xi18nc3(void* self, const char* context, const char* message, void* param1);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
///
const char* k_localizedcontext_xi18nc4(void* self, const char* context, const char* message, void* param1, void* param2);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
///
const char* k_localizedcontext_xi18nc5(void* self, const char* context, const char* message, void* param1, void* param2, void* param3);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
///
const char* k_localizedcontext_xi18nc6(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
///
const char* k_localizedcontext_xi18nc7(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
///
const char* k_localizedcontext_xi18nc8(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
///
const char* k_localizedcontext_xi18nc9(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
///
const char* k_localizedcontext_xi18nc10(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
///
const char* k_localizedcontext_xi18nc11(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
/// @param param10 QVariant*
///
const char* k_localizedcontext_xi18nc12(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18np)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
///
const char* k_localizedcontext_xi18np3(void* self, const char* singular, const char* plural, void* param1);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18np)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
///
const char* k_localizedcontext_xi18np4(void* self, const char* singular, const char* plural, void* param1, void* param2);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18np)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
///
const char* k_localizedcontext_xi18np5(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18np)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
///
const char* k_localizedcontext_xi18np6(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18np)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
///
const char* k_localizedcontext_xi18np7(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18np)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
///
const char* k_localizedcontext_xi18np8(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18np)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
///
const char* k_localizedcontext_xi18np9(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18np)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
///
const char* k_localizedcontext_xi18np10(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18np)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
///
const char* k_localizedcontext_xi18np11(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18np)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
/// @param param10 QVariant*
///
const char* k_localizedcontext_xi18np12(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ncp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
///
const char* k_localizedcontext_xi18ncp4(void* self, const char* context, const char* singular, const char* plural, void* param1);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ncp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
///
const char* k_localizedcontext_xi18ncp5(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ncp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
///
const char* k_localizedcontext_xi18ncp6(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ncp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
///
const char* k_localizedcontext_xi18ncp7(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ncp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
///
const char* k_localizedcontext_xi18ncp8(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ncp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
///
const char* k_localizedcontext_xi18ncp9(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ncp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
///
const char* k_localizedcontext_xi18ncp10(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ncp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
///
const char* k_localizedcontext_xi18ncp11(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ncp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
///
const char* k_localizedcontext_xi18ncp12(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ncp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
/// @param param10 QVariant*
///
const char* k_localizedcontext_xi18ncp13(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nd)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
///
const char* k_localizedcontext_xi18nd3(void* self, const char* domain, const char* message, void* param1);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nd)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
///
const char* k_localizedcontext_xi18nd4(void* self, const char* domain, const char* message, void* param1, void* param2);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nd)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
///
const char* k_localizedcontext_xi18nd5(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nd)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
///
const char* k_localizedcontext_xi18nd6(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nd)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
///
const char* k_localizedcontext_xi18nd7(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nd)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
///
const char* k_localizedcontext_xi18nd8(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nd)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
///
const char* k_localizedcontext_xi18nd9(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nd)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
///
const char* k_localizedcontext_xi18nd10(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nd)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
///
const char* k_localizedcontext_xi18nd11(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nd)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
/// @param param10 QVariant*
///
const char* k_localizedcontext_xi18nd12(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
///
const char* k_localizedcontext_xi18ndc4(void* self, const char* domain, const char* context, const char* message, void* param1);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
///
const char* k_localizedcontext_xi18ndc5(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
///
const char* k_localizedcontext_xi18ndc6(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
///
const char* k_localizedcontext_xi18ndc7(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
///
const char* k_localizedcontext_xi18ndc8(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
///
const char* k_localizedcontext_xi18ndc9(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
///
const char* k_localizedcontext_xi18ndc10(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
///
const char* k_localizedcontext_xi18ndc11(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
///
const char* k_localizedcontext_xi18ndc12(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
/// @param param10 QVariant*
///
const char* k_localizedcontext_xi18ndc13(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
///
const char* k_localizedcontext_xi18ndp4(void* self, const char* domain, const char* singular, const char* plural, void* param1);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
///
const char* k_localizedcontext_xi18ndp5(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
///
const char* k_localizedcontext_xi18ndp6(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
///
const char* k_localizedcontext_xi18ndp7(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
///
const char* k_localizedcontext_xi18ndp8(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
///
const char* k_localizedcontext_xi18ndp9(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
///
const char* k_localizedcontext_xi18ndp10(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
///
const char* k_localizedcontext_xi18ndp11(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
///
const char* k_localizedcontext_xi18ndp12(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
/// @param param10 QVariant*
///
const char* k_localizedcontext_xi18ndp13(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndcp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
///
const char* k_localizedcontext_xi18ndcp5(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndcp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
///
const char* k_localizedcontext_xi18ndcp6(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndcp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
///
const char* k_localizedcontext_xi18ndcp7(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndcp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
///
const char* k_localizedcontext_xi18ndcp8(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndcp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
///
const char* k_localizedcontext_xi18ndcp9(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndcp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
///
const char* k_localizedcontext_xi18ndcp10(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndcp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
///
const char* k_localizedcontext_xi18ndcp11(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndcp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
///
const char* k_localizedcontext_xi18ndcp12(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndcp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
///
const char* k_localizedcontext_xi18ndcp13(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndcp)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
/// @param param9 QVariant*
/// @param param10 QVariant*
///
const char* k_localizedcontext_xi18ndcp14(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedContext*
///
const char* k_localizedcontext_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KLocalizedContext*
/// @param name char*
///
void k_localizedcontext_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KLocalizedContext*
///
bool k_localizedcontext_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KLocalizedContext*
///
bool k_localizedcontext_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KLocalizedContext*
///
bool k_localizedcontext_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KLocalizedContext*
///
bool k_localizedcontext_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KLocalizedContext*
/// @param b bool
///
bool k_localizedcontext_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KLocalizedContext*
///
QThread* k_localizedcontext_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KLocalizedContext*
/// @param thread QThread*
///
bool k_localizedcontext_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KLocalizedContext*
/// @param interval int
///
int32_t k_localizedcontext_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KLocalizedContext*
/// @param id int
///
void k_localizedcontext_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KLocalizedContext*
/// @param id enum Qt__TimerId
///
void k_localizedcontext_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KLocalizedContext*
///
/// @return libqt_list of QObject*
///
libqt_list k_localizedcontext_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KLocalizedContext*
/// @param parent QObject*
///
void k_localizedcontext_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KLocalizedContext*
/// @param filterObj QObject*
///
void k_localizedcontext_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KLocalizedContext*
/// @param obj QObject*
///
void k_localizedcontext_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_localizedcontext_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KLocalizedContext*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_localizedcontext_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_localizedcontext_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_localizedcontext_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KLocalizedContext*
///
void k_localizedcontext_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KLocalizedContext*
///
void k_localizedcontext_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KLocalizedContext*
/// @param name const char*
/// @param value QVariant*
///
bool k_localizedcontext_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KLocalizedContext*
/// @param name const char*
///
QVariant* k_localizedcontext_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KLocalizedContext*
///
const char** k_localizedcontext_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KLocalizedContext*
///
QBindingStorage* k_localizedcontext_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KLocalizedContext*
///
const QBindingStorage* k_localizedcontext_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KLocalizedContext*
///
void k_localizedcontext_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KLocalizedContext*
/// @param callback void func(KLocalizedContext* self)
///
void k_localizedcontext_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KLocalizedContext*
///
QObject* k_localizedcontext_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KLocalizedContext*
/// @param classname const char*
///
bool k_localizedcontext_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KLocalizedContext*
///
void k_localizedcontext_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KLocalizedContext*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_localizedcontext_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KLocalizedContext*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_localizedcontext_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_localizedcontext_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KLocalizedContext*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_localizedcontext_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KLocalizedContext*
/// @param param1 QObject*
///
void k_localizedcontext_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KLocalizedContext*
/// @param callback void func(KLocalizedContext* self, QObject* param1)
///
void k_localizedcontext_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedContext*
/// @param event QEvent*
///
bool k_localizedcontext_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedContext*
/// @param event QEvent*
///
bool k_localizedcontext_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedContext*
/// @param callback bool func(KLocalizedContext* self, QEvent* event)
///
void k_localizedcontext_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedContext*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_localizedcontext_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedContext*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_localizedcontext_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedContext*
/// @param callback bool func(KLocalizedContext* self, QObject* watched, QEvent* event)
///
void k_localizedcontext_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedContext*
/// @param event QTimerEvent*
///
void k_localizedcontext_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedContext*
/// @param event QTimerEvent*
///
void k_localizedcontext_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedContext*
/// @param callback void func(KLocalizedContext* self, QTimerEvent* event)
///
void k_localizedcontext_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedContext*
/// @param event QChildEvent*
///
void k_localizedcontext_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedContext*
/// @param event QChildEvent*
///
void k_localizedcontext_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedContext*
/// @param callback void func(KLocalizedContext* self, QChildEvent* event)
///
void k_localizedcontext_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedContext*
/// @param event QEvent*
///
void k_localizedcontext_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedContext*
/// @param event QEvent*
///
void k_localizedcontext_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedContext*
/// @param callback void func(KLocalizedContext* self, QEvent* event)
///
void k_localizedcontext_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedContext*
/// @param signal QMetaMethod*
///
void k_localizedcontext_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedContext*
/// @param signal QMetaMethod*
///
void k_localizedcontext_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedContext*
/// @param callback void func(KLocalizedContext* self, QMetaMethod* signal)
///
void k_localizedcontext_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedContext*
/// @param signal QMetaMethod*
///
void k_localizedcontext_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedContext*
/// @param signal QMetaMethod*
///
void k_localizedcontext_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedContext*
/// @param callback void func(KLocalizedContext* self, QMetaMethod* signal)
///
void k_localizedcontext_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedContext*
///
QObject* k_localizedcontext_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedContext*
///
QObject* k_localizedcontext_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedContext*
/// @param callback QObject* func()
///
void k_localizedcontext_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedContext*
///
int32_t k_localizedcontext_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedContext*
///
int32_t k_localizedcontext_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedContext*
/// @param callback int32_t func()
///
void k_localizedcontext_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedContext*
/// @param signal const char*
///
int32_t k_localizedcontext_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedContext*
/// @param signal const char*
///
int32_t k_localizedcontext_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedContext*
/// @param callback int32_t func(KLocalizedContext* self, const char* signal)
///
void k_localizedcontext_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedContext*
/// @param signal QMetaMethod*
///
bool k_localizedcontext_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedContext*
/// @param signal QMetaMethod*
///
bool k_localizedcontext_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedContext*
/// @param callback bool func(KLocalizedContext* self, QMetaMethod* signal)
///
void k_localizedcontext_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KLocalizedContext*
/// @param callback void func(KLocalizedContext* self, const char* objectName)
///
void k_localizedcontext_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/klocalizedcontext.html#dtor.KLocalizedContext)
///
/// Delete this object from C++ memory.
///
/// @param self KLocalizedContext*
///
void k_localizedcontext_delete(void* self);

#endif
