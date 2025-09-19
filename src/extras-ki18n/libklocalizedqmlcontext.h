#pragma once
#ifndef SRC_EXTRAS_KI18NQT6C_LIBKLOCALIZEDQMLCONTEXT_H
#define SRC_EXTRAS_KI18NQT6C_LIBKLOCALIZEDQMLCONTEXT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/klocalizedqmlcontext.html

/// k_localizedqmlcontext_new constructs a new KLocalizedQmlContext object.
///
KLocalizedQmlContext* k_localizedqmlcontext_new();

/// k_localizedqmlcontext_new2 constructs a new KLocalizedQmlContext object.
///
/// @param parent QObject*
KLocalizedQmlContext* k_localizedqmlcontext_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KLocalizedQmlContext*
const QMetaObject* k_localizedqmlcontext_meta_object(void* self);

/// @param self KLocalizedQmlContext*
/// @param param1 const char*
void* k_localizedqmlcontext_metacast(void* self, const char* param1);

/// @param self KLocalizedQmlContext*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_localizedqmlcontext_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KLocalizedQmlContext*
/// @param callback int32_t func(KLocalizedQmlContext* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_localizedqmlcontext_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KLocalizedQmlContext*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_localizedqmlcontext_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_localizedqmlcontext_tr(const char* s);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#translationDomain)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
const char* k_localizedqmlcontext_translation_domain(void* self);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#setTranslationDomain)
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
void k_localizedqmlcontext_set_translation_domain(void* self, const char* domain);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18n)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param message const char*
const char* k_localizedqmlcontext_i18n(void* self, const char* message);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param context const char*
/// @param message const char*
const char* k_localizedqmlcontext_i18nc(void* self, const char* context, const char* message);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18np)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param singular const char*
/// @param plural const char*
const char* k_localizedqmlcontext_i18np(void* self, const char* singular, const char* plural);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
const char* k_localizedqmlcontext_i18ncp(void* self, const char* context, const char* singular, const char* plural);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param message const char*
const char* k_localizedqmlcontext_i18nd(void* self, const char* domain, const char* message);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
const char* k_localizedqmlcontext_i18ndc(void* self, const char* domain, const char* context, const char* message);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
const char* k_localizedqmlcontext_i18ndp(void* self, const char* domain, const char* singular, const char* plural);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
const char* k_localizedqmlcontext_i18ndcp(void* self, const char* domain, const char* context, const char* singular, const char* plural);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param message const char*
const char* k_localizedqmlcontext_xi18n(void* self, const char* message);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param context const char*
/// @param message const char*
const char* k_localizedqmlcontext_xi18nc(void* self, const char* context, const char* message);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param singular const char*
/// @param plural const char*
const char* k_localizedqmlcontext_xi18np(void* self, const char* singular, const char* plural);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
const char* k_localizedqmlcontext_xi18ncp(void* self, const char* context, const char* singular, const char* plural);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param message const char*
const char* k_localizedqmlcontext_xi18nd(void* self, const char* domain, const char* message);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
const char* k_localizedqmlcontext_xi18ndc(void* self, const char* domain, const char* context, const char* message);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
const char* k_localizedqmlcontext_xi18ndp(void* self, const char* domain, const char* singular, const char* plural);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
const char* k_localizedqmlcontext_xi18ndcp(void* self, const char* domain, const char* context, const char* singular, const char* plural);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#translationDomainChanged)
///
/// @param self KLocalizedQmlContext*
/// @param translationDomain const char*
void k_localizedqmlcontext_translation_domain_changed(void* self, const char* translationDomain);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#translationDomainChanged)
///
/// @param self KLocalizedQmlContext*
/// @param callback void func(KLocalizedQmlContext* self, const char* translationDomain)
void k_localizedqmlcontext_on_translation_domain_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_localizedqmlcontext_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_localizedqmlcontext_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18n)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param message const char*
/// @param param1 QVariant*
const char* k_localizedqmlcontext_i18n2(void* self, const char* message, void* param1);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18n)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
const char* k_localizedqmlcontext_i18n3(void* self, const char* message, void* param1, void* param2);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18n)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
const char* k_localizedqmlcontext_i18n4(void* self, const char* message, void* param1, void* param2, void* param3);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18n)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
const char* k_localizedqmlcontext_i18n5(void* self, const char* message, void* param1, void* param2, void* param3, void* param4);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18n)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
const char* k_localizedqmlcontext_i18n6(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18n)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
const char* k_localizedqmlcontext_i18n7(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18n)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
const char* k_localizedqmlcontext_i18n8(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18n)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
const char* k_localizedqmlcontext_i18n9(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18n)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_i18n10(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18n)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_i18n11(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
const char* k_localizedqmlcontext_i18nc3(void* self, const char* context, const char* message, void* param1);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
const char* k_localizedqmlcontext_i18nc4(void* self, const char* context, const char* message, void* param1, void* param2);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
const char* k_localizedqmlcontext_i18nc5(void* self, const char* context, const char* message, void* param1, void* param2, void* param3);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
const char* k_localizedqmlcontext_i18nc6(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
const char* k_localizedqmlcontext_i18nc7(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
const char* k_localizedqmlcontext_i18nc8(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
const char* k_localizedqmlcontext_i18nc9(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_i18nc10(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_i18nc11(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_i18nc12(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18np)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
const char* k_localizedqmlcontext_i18np3(void* self, const char* singular, const char* plural, void* param1);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18np)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
const char* k_localizedqmlcontext_i18np4(void* self, const char* singular, const char* plural, void* param1, void* param2);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18np)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
const char* k_localizedqmlcontext_i18np5(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18np)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
const char* k_localizedqmlcontext_i18np6(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18np)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
const char* k_localizedqmlcontext_i18np7(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18np)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
const char* k_localizedqmlcontext_i18np8(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18np)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
const char* k_localizedqmlcontext_i18np9(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18np)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_i18np10(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18np)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_i18np11(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18np)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_i18np12(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
const char* k_localizedqmlcontext_i18ncp4(void* self, const char* context, const char* singular, const char* plural, void* param1);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
const char* k_localizedqmlcontext_i18ncp5(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
const char* k_localizedqmlcontext_i18ncp6(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
const char* k_localizedqmlcontext_i18ncp7(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
const char* k_localizedqmlcontext_i18ncp8(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
const char* k_localizedqmlcontext_i18ncp9(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_i18ncp10(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_i18ncp11(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_i18ncp12(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_i18ncp13(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
const char* k_localizedqmlcontext_i18nd3(void* self, const char* domain, const char* message, void* param1);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
const char* k_localizedqmlcontext_i18nd4(void* self, const char* domain, const char* message, void* param1, void* param2);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
const char* k_localizedqmlcontext_i18nd5(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
const char* k_localizedqmlcontext_i18nd6(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
const char* k_localizedqmlcontext_i18nd7(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
const char* k_localizedqmlcontext_i18nd8(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
const char* k_localizedqmlcontext_i18nd9(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_i18nd10(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_i18nd11(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_i18nd12(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
const char* k_localizedqmlcontext_i18ndc4(void* self, const char* domain, const char* context, const char* message, void* param1);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
const char* k_localizedqmlcontext_i18ndc5(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
const char* k_localizedqmlcontext_i18ndc6(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
const char* k_localizedqmlcontext_i18ndc7(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
const char* k_localizedqmlcontext_i18ndc8(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
const char* k_localizedqmlcontext_i18ndc9(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_i18ndc10(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_i18ndc11(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_i18ndc12(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_i18ndc13(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
const char* k_localizedqmlcontext_i18ndp4(void* self, const char* domain, const char* singular, const char* plural, void* param1);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
const char* k_localizedqmlcontext_i18ndp5(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
const char* k_localizedqmlcontext_i18ndp6(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
const char* k_localizedqmlcontext_i18ndp7(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
const char* k_localizedqmlcontext_i18ndp8(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
const char* k_localizedqmlcontext_i18ndp9(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_i18ndp10(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_i18ndp11(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_i18ndp12(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_i18ndp13(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
const char* k_localizedqmlcontext_i18ndcp5(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
const char* k_localizedqmlcontext_i18ndcp6(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
const char* k_localizedqmlcontext_i18ndcp7(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
const char* k_localizedqmlcontext_i18ndcp8(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
const char* k_localizedqmlcontext_i18ndcp9(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_i18ndcp10(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_i18ndcp11(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_i18ndcp12(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_i18ndcp13(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_i18ndcp14(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param message const char*
/// @param param1 QVariant*
const char* k_localizedqmlcontext_xi18n2(void* self, const char* message, void* param1);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
const char* k_localizedqmlcontext_xi18n3(void* self, const char* message, void* param1, void* param2);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
const char* k_localizedqmlcontext_xi18n4(void* self, const char* message, void* param1, void* param2, void* param3);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
const char* k_localizedqmlcontext_xi18n5(void* self, const char* message, void* param1, void* param2, void* param3, void* param4);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
const char* k_localizedqmlcontext_xi18n6(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
const char* k_localizedqmlcontext_xi18n7(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
const char* k_localizedqmlcontext_xi18n8(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
/// @param param8 QVariant*
const char* k_localizedqmlcontext_xi18n9(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_xi18n10(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_xi18n11(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
const char* k_localizedqmlcontext_xi18nc3(void* self, const char* context, const char* message, void* param1);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
const char* k_localizedqmlcontext_xi18nc4(void* self, const char* context, const char* message, void* param1, void* param2);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
const char* k_localizedqmlcontext_xi18nc5(void* self, const char* context, const char* message, void* param1, void* param2, void* param3);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
const char* k_localizedqmlcontext_xi18nc6(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
const char* k_localizedqmlcontext_xi18nc7(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
const char* k_localizedqmlcontext_xi18nc8(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
const char* k_localizedqmlcontext_xi18nc9(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_xi18nc10(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_xi18nc11(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_xi18nc12(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
const char* k_localizedqmlcontext_xi18np3(void* self, const char* singular, const char* plural, void* param1);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
const char* k_localizedqmlcontext_xi18np4(void* self, const char* singular, const char* plural, void* param1, void* param2);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
const char* k_localizedqmlcontext_xi18np5(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
const char* k_localizedqmlcontext_xi18np6(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
const char* k_localizedqmlcontext_xi18np7(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
const char* k_localizedqmlcontext_xi18np8(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
const char* k_localizedqmlcontext_xi18np9(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_xi18np10(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_xi18np11(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_xi18np12(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
const char* k_localizedqmlcontext_xi18ncp4(void* self, const char* context, const char* singular, const char* plural, void* param1);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
const char* k_localizedqmlcontext_xi18ncp5(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
const char* k_localizedqmlcontext_xi18ncp6(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
const char* k_localizedqmlcontext_xi18ncp7(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
const char* k_localizedqmlcontext_xi18ncp8(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
const char* k_localizedqmlcontext_xi18ncp9(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_xi18ncp10(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_xi18ncp11(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_xi18ncp12(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_xi18ncp13(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
const char* k_localizedqmlcontext_xi18nd3(void* self, const char* domain, const char* message, void* param1);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
const char* k_localizedqmlcontext_xi18nd4(void* self, const char* domain, const char* message, void* param1, void* param2);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
const char* k_localizedqmlcontext_xi18nd5(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
const char* k_localizedqmlcontext_xi18nd6(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
const char* k_localizedqmlcontext_xi18nd7(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
const char* k_localizedqmlcontext_xi18nd8(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
/// @param param7 QVariant*
const char* k_localizedqmlcontext_xi18nd9(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_xi18nd10(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_xi18nd11(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_xi18nd12(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
const char* k_localizedqmlcontext_xi18ndc4(void* self, const char* domain, const char* context, const char* message, void* param1);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
const char* k_localizedqmlcontext_xi18ndc5(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
const char* k_localizedqmlcontext_xi18ndc6(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
const char* k_localizedqmlcontext_xi18ndc7(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
const char* k_localizedqmlcontext_xi18ndc8(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param context const char*
/// @param message const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
const char* k_localizedqmlcontext_xi18ndc9(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_xi18ndc10(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_xi18ndc11(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_xi18ndc12(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_xi18ndc13(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
const char* k_localizedqmlcontext_xi18ndp4(void* self, const char* domain, const char* singular, const char* plural, void* param1);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
const char* k_localizedqmlcontext_xi18ndp5(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
const char* k_localizedqmlcontext_xi18ndp6(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
const char* k_localizedqmlcontext_xi18ndp7(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
const char* k_localizedqmlcontext_xi18ndp8(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
/// @param param6 QVariant*
const char* k_localizedqmlcontext_xi18ndp9(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_xi18ndp10(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_xi18ndp11(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_xi18ndp12(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_xi18ndp13(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
const char* k_localizedqmlcontext_xi18ndcp5(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
const char* k_localizedqmlcontext_xi18ndcp6(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
const char* k_localizedqmlcontext_xi18ndcp7(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
const char* k_localizedqmlcontext_xi18ndcp8(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
/// @param domain const char*
/// @param context const char*
/// @param singular const char*
/// @param plural const char*
/// @param param1 QVariant*
/// @param param2 QVariant*
/// @param param3 QVariant*
/// @param param4 QVariant*
/// @param param5 QVariant*
const char* k_localizedqmlcontext_xi18ndcp9(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_xi18ndcp10(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_xi18ndcp11(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_xi18ndcp12(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_xi18ndcp13(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9);

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
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
const char* k_localizedqmlcontext_xi18ndcp14(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KLocalizedQmlContext*
/// @param watched QObject*
/// @param event QEvent*
bool k_localizedqmlcontext_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self KLocalizedQmlContext*
/// @param callback bool func(KLocalizedQmlContext* self, QObject* watched, QEvent* event)
void k_localizedqmlcontext_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Base class method implementation
///
/// @param self KLocalizedQmlContext*
/// @param watched QObject*
/// @param event QEvent*
bool k_localizedqmlcontext_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
const char* k_localizedqmlcontext_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KLocalizedQmlContext*
/// @param name char*
void k_localizedqmlcontext_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KLocalizedQmlContext*
bool k_localizedqmlcontext_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KLocalizedQmlContext*
bool k_localizedqmlcontext_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KLocalizedQmlContext*
bool k_localizedqmlcontext_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KLocalizedQmlContext*
bool k_localizedqmlcontext_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KLocalizedQmlContext*
/// @param b bool
bool k_localizedqmlcontext_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KLocalizedQmlContext*
QThread* k_localizedqmlcontext_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KLocalizedQmlContext*
/// @param thread QThread*
bool k_localizedqmlcontext_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KLocalizedQmlContext*
/// @param interval int
int32_t k_localizedqmlcontext_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KLocalizedQmlContext*
/// @param id int
void k_localizedqmlcontext_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KLocalizedQmlContext*
/// @param id enum Qt__TimerId
void k_localizedqmlcontext_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KLocalizedQmlContext*
libqt_list /* of QObject* */ k_localizedqmlcontext_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KLocalizedQmlContext*
/// @param parent QObject*
void k_localizedqmlcontext_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KLocalizedQmlContext*
/// @param filterObj QObject*
void k_localizedqmlcontext_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KLocalizedQmlContext*
/// @param obj QObject*
void k_localizedqmlcontext_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_localizedqmlcontext_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KLocalizedQmlContext*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_localizedqmlcontext_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_localizedqmlcontext_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_localizedqmlcontext_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KLocalizedQmlContext*
void k_localizedqmlcontext_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KLocalizedQmlContext*
void k_localizedqmlcontext_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KLocalizedQmlContext*
/// @param name const char*
/// @param value QVariant*
bool k_localizedqmlcontext_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KLocalizedQmlContext*
/// @param name const char*
QVariant* k_localizedqmlcontext_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedQmlContext*
const char** k_localizedqmlcontext_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KLocalizedQmlContext*
QBindingStorage* k_localizedqmlcontext_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KLocalizedQmlContext*
const QBindingStorage* k_localizedqmlcontext_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KLocalizedQmlContext*
void k_localizedqmlcontext_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KLocalizedQmlContext*
/// @param callback void func(KLocalizedQmlContext* self)
void k_localizedqmlcontext_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KLocalizedQmlContext*
QObject* k_localizedqmlcontext_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KLocalizedQmlContext*
/// @param classname const char*
bool k_localizedqmlcontext_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KLocalizedQmlContext*
void k_localizedqmlcontext_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KLocalizedQmlContext*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_localizedqmlcontext_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KLocalizedQmlContext*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_localizedqmlcontext_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_localizedqmlcontext_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KLocalizedQmlContext*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_localizedqmlcontext_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KLocalizedQmlContext*
/// @param param1 QObject*
void k_localizedqmlcontext_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KLocalizedQmlContext*
/// @param callback void func(KLocalizedQmlContext* self, QObject* param1)
void k_localizedqmlcontext_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedQmlContext*
/// @param event QEvent*
bool k_localizedqmlcontext_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedQmlContext*
/// @param event QEvent*
bool k_localizedqmlcontext_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedQmlContext*
/// @param callback bool func(KLocalizedQmlContext* self, QEvent* event)
void k_localizedqmlcontext_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedQmlContext*
/// @param event QTimerEvent*
void k_localizedqmlcontext_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedQmlContext*
/// @param event QTimerEvent*
void k_localizedqmlcontext_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedQmlContext*
/// @param callback void func(KLocalizedQmlContext* self, QTimerEvent* event)
void k_localizedqmlcontext_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedQmlContext*
/// @param event QChildEvent*
void k_localizedqmlcontext_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedQmlContext*
/// @param event QChildEvent*
void k_localizedqmlcontext_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedQmlContext*
/// @param callback void func(KLocalizedQmlContext* self, QChildEvent* event)
void k_localizedqmlcontext_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedQmlContext*
/// @param event QEvent*
void k_localizedqmlcontext_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedQmlContext*
/// @param event QEvent*
void k_localizedqmlcontext_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedQmlContext*
/// @param callback void func(KLocalizedQmlContext* self, QEvent* event)
void k_localizedqmlcontext_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedQmlContext*
/// @param signal QMetaMethod*
void k_localizedqmlcontext_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedQmlContext*
/// @param signal QMetaMethod*
void k_localizedqmlcontext_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedQmlContext*
/// @param callback void func(KLocalizedQmlContext* self, QMetaMethod* signal)
void k_localizedqmlcontext_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedQmlContext*
/// @param signal QMetaMethod*
void k_localizedqmlcontext_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedQmlContext*
/// @param signal QMetaMethod*
void k_localizedqmlcontext_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedQmlContext*
/// @param callback void func(KLocalizedQmlContext* self, QMetaMethod* signal)
void k_localizedqmlcontext_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedQmlContext*
QObject* k_localizedqmlcontext_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedQmlContext*
QObject* k_localizedqmlcontext_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedQmlContext*
/// @param callback QObject* func()
void k_localizedqmlcontext_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedQmlContext*
int32_t k_localizedqmlcontext_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedQmlContext*
int32_t k_localizedqmlcontext_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedQmlContext*
/// @param callback int32_t func()
void k_localizedqmlcontext_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedQmlContext*
/// @param signal const char*
int32_t k_localizedqmlcontext_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedQmlContext*
/// @param signal const char*
int32_t k_localizedqmlcontext_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedQmlContext*
/// @param callback int32_t func(KLocalizedQmlContext* self, const char* signal)
void k_localizedqmlcontext_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedQmlContext*
/// @param signal QMetaMethod*
bool k_localizedqmlcontext_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedQmlContext*
/// @param signal QMetaMethod*
bool k_localizedqmlcontext_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedQmlContext*
/// @param callback bool func(KLocalizedQmlContext* self, QMetaMethod* signal)
void k_localizedqmlcontext_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KLocalizedQmlContext*
/// @param callback void func(KLocalizedQmlContext* self, const char* objectName)
void k_localizedqmlcontext_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#dtor.KLocalizedQmlContext)
///
/// Delete this object from C++ memory.
///
/// @param self KLocalizedQmlContext*
void k_localizedqmlcontext_delete(void* self);

#endif
