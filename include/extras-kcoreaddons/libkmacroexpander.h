#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKMACROEXPANDER_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKMACROEXPANDER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kmacroexpanderbase.html

/// k_macroexpanderbase_new constructs a new KMacroExpanderBase object.
///
KMacroExpanderBase* k_macroexpanderbase_new();

/// k_macroexpanderbase_new2 constructs a new KMacroExpanderBase object.
///
/// @param c QChar*
KMacroExpanderBase* k_macroexpanderbase_new2(void* c);

/// [Qt documentation](https://api.kde.org/kmacroexpanderbase.html#expandMacros)
///
/// @param self KMacroExpanderBase*
/// @param str const char*
void k_macroexpanderbase_expand_macros(void* self, const char* str);

/// [Qt documentation](https://api.kde.org/kmacroexpanderbase.html#expandMacrosShellQuote)
///
/// @param self KMacroExpanderBase*
/// @param str const char*
/// @param pos int*
bool k_macroexpanderbase_expand_macros_shell_quote(void* self, const char* str, int* pos);

/// [Qt documentation](https://api.kde.org/kmacroexpanderbase.html#expandMacrosShellQuote)
///
/// @param self KMacroExpanderBase*
/// @param str const char*
bool k_macroexpanderbase_expand_macros_shell_quote2(void* self, const char* str);

/// [Qt documentation](https://api.kde.org/kmacroexpanderbase.html#setEscapeChar)
///
/// @param self KMacroExpanderBase*
/// @param c QChar*
void k_macroexpanderbase_set_escape_char(void* self, void* c);

/// [Qt documentation](https://api.kde.org/kmacroexpanderbase.html#escapeChar)
///
/// @param self KMacroExpanderBase*
QChar* k_macroexpanderbase_escape_char(void* self);

/// [Qt documentation](https://api.kde.org/kmacroexpanderbase.html#expandPlainMacro)
///
/// @param self KMacroExpanderBase*
/// @param str const char*
/// @param pos int
/// @param retVal const char**
int32_t k_macroexpanderbase_expand_plain_macro(void* self, const char* str, int pos, const char* retVal[static 1]);

/// [Qt documentation](https://api.kde.org/kmacroexpanderbase.html#expandPlainMacro)
///
/// Allows for overriding the related default method
///
/// @param self KMacroExpanderBase*
/// @param callback int32_t func(KMacroExpanderBase* self, const char* str, int pos, const char** retVal)
void k_macroexpanderbase_on_expand_plain_macro(void* self, int32_t (*callback)(void*, const char*, int, const char**));

/// [Qt documentation](https://api.kde.org/kmacroexpanderbase.html#expandPlainMacro)
///
/// Base class method implementation
///
/// @param self KMacroExpanderBase*
/// @param str const char*
/// @param pos int
/// @param retVal const char**
int32_t k_macroexpanderbase_qbase_expand_plain_macro(void* self, const char* str, int pos, const char* retVal[static 1]);

/// [Qt documentation](https://api.kde.org/kmacroexpanderbase.html#expandEscapedMacro)
///
/// @param self KMacroExpanderBase*
/// @param str const char*
/// @param pos int
/// @param retVal const char**
int32_t k_macroexpanderbase_expand_escaped_macro(void* self, const char* str, int pos, const char* retVal[static 1]);

/// [Qt documentation](https://api.kde.org/kmacroexpanderbase.html#expandEscapedMacro)
///
/// Allows for overriding the related default method
///
/// @param self KMacroExpanderBase*
/// @param callback int32_t func(KMacroExpanderBase* self, const char* str, int pos, const char** retVal)
void k_macroexpanderbase_on_expand_escaped_macro(void* self, int32_t (*callback)(void*, const char*, int, const char**));

/// [Qt documentation](https://api.kde.org/kmacroexpanderbase.html#expandEscapedMacro)
///
/// Base class method implementation
///
/// @param self KMacroExpanderBase*
/// @param str const char*
/// @param pos int
/// @param retVal const char**
int32_t k_macroexpanderbase_qbase_expand_escaped_macro(void* self, const char* str, int pos, const char* retVal[static 1]);

/// [Qt documentation](https://api.kde.org/kmacroexpanderbase.html#dtor.KMacroExpanderBase)
///
/// Delete this object from C++ memory.
///
/// @param self KMacroExpanderBase*
void k_macroexpanderbase_delete(void* self);

/// https://api.kde.org/kwordmacroexpander.html

/// k_wordmacroexpander_new constructs a new KWordMacroExpander object.
///
KWordMacroExpander* k_wordmacroexpander_new();

/// k_wordmacroexpander_new2 constructs a new KWordMacroExpander object.
///
/// @param c QChar*
KWordMacroExpander* k_wordmacroexpander_new2(void* c);

/// [Qt documentation](https://api.kde.org/kwordmacroexpander.html#expandPlainMacro)
///
/// @param self KWordMacroExpander*
/// @param str const char*
/// @param pos int
/// @param retVal const char**
int32_t k_wordmacroexpander_expand_plain_macro(void* self, const char* str, int pos, const char* retVal[static 1]);

/// [Qt documentation](https://api.kde.org/kwordmacroexpander.html#expandPlainMacro)
///
/// Allows for overriding the related default method
///
/// @param self KWordMacroExpander*
/// @param callback int32_t func(KWordMacroExpander* self, const char* str, int pos, const char** retVal)
void k_wordmacroexpander_on_expand_plain_macro(void* self, int32_t (*callback)(void*, const char*, int, const char**));

/// [Qt documentation](https://api.kde.org/kwordmacroexpander.html#expandPlainMacro)
///
/// Base class method implementation
///
/// @param self KWordMacroExpander*
/// @param str const char*
/// @param pos int
/// @param retVal const char**
int32_t k_wordmacroexpander_qbase_expand_plain_macro(void* self, const char* str, int pos, const char* retVal[static 1]);

/// [Qt documentation](https://api.kde.org/kwordmacroexpander.html#expandEscapedMacro)
///
/// @param self KWordMacroExpander*
/// @param str const char*
/// @param pos int
/// @param retVal const char**
int32_t k_wordmacroexpander_expand_escaped_macro(void* self, const char* str, int pos, const char* retVal[static 1]);

/// [Qt documentation](https://api.kde.org/kwordmacroexpander.html#expandEscapedMacro)
///
/// Allows for overriding the related default method
///
/// @param self KWordMacroExpander*
/// @param callback int32_t func(KWordMacroExpander* self, const char* str, int pos, const char** retVal)
void k_wordmacroexpander_on_expand_escaped_macro(void* self, int32_t (*callback)(void*, const char*, int, const char**));

/// [Qt documentation](https://api.kde.org/kwordmacroexpander.html#expandEscapedMacro)
///
/// Base class method implementation
///
/// @param self KWordMacroExpander*
/// @param str const char*
/// @param pos int
/// @param retVal const char**
int32_t k_wordmacroexpander_qbase_expand_escaped_macro(void* self, const char* str, int pos, const char* retVal[static 1]);

/// [Qt documentation](https://api.kde.org/kwordmacroexpander.html#expandMacro)
///
/// @param self KWordMacroExpander*
/// @param str const char*
/// @param retVal const char**
bool k_wordmacroexpander_expand_macro(void* self, const char* str, const char* retVal[static 1]);

/// [Qt documentation](https://api.kde.org/kwordmacroexpander.html#expandMacro)
///
/// Allows for overriding the related default method
///
/// @param self KWordMacroExpander*
/// @param callback bool func(KWordMacroExpander* self, const char* str, const char** retVal)
void k_wordmacroexpander_on_expand_macro(void* self, bool (*callback)(void*, const char*, const char**));

/// [Qt documentation](https://api.kde.org/kwordmacroexpander.html#expandMacro)
///
/// Base class method implementation
///
/// @param self KWordMacroExpander*
/// @param str const char*
/// @param retVal const char**
bool k_wordmacroexpander_qbase_expand_macro(void* self, const char* str, const char* retVal[static 1]);

/// Inherited from KMacroExpanderBase
///
/// [Qt documentation](https://api.kde.org/kmacroexpanderbase.html#expandMacros)
///
/// @param self KWordMacroExpander*
/// @param str const char*
void k_wordmacroexpander_expand_macros(void* self, const char* str);

/// Inherited from KMacroExpanderBase
///
/// [Qt documentation](https://api.kde.org/kmacroexpanderbase.html#expandMacrosShellQuote)
///
/// @param self KWordMacroExpander*
/// @param str const char*
/// @param pos int*
bool k_wordmacroexpander_expand_macros_shell_quote(void* self, const char* str, int* pos);

/// Inherited from KMacroExpanderBase
///
/// [Qt documentation](https://api.kde.org/kmacroexpanderbase.html#expandMacrosShellQuote)
///
/// @param self KWordMacroExpander*
/// @param str const char*
bool k_wordmacroexpander_expand_macros_shell_quote2(void* self, const char* str);

/// Inherited from KMacroExpanderBase
///
/// [Qt documentation](https://api.kde.org/kmacroexpanderbase.html#setEscapeChar)
///
/// @param self KWordMacroExpander*
/// @param c QChar*
void k_wordmacroexpander_set_escape_char(void* self, void* c);

/// Inherited from KMacroExpanderBase
///
/// [Qt documentation](https://api.kde.org/kmacroexpanderbase.html#escapeChar)
///
/// @param self KWordMacroExpander*
QChar* k_wordmacroexpander_escape_char(void* self);

/// [Qt documentation](https://api.kde.org/kwordmacroexpander.html#dtor.KWordMacroExpander)
///
/// Delete this object from C++ memory.
///
/// @param self KWordMacroExpander*
void k_wordmacroexpander_delete(void* self);

/// https://api.kde.org/kcharmacroexpander.html

/// k_charmacroexpander_new constructs a new KCharMacroExpander object.
///
KCharMacroExpander* k_charmacroexpander_new();

/// k_charmacroexpander_new2 constructs a new KCharMacroExpander object.
///
/// @param c QChar*
KCharMacroExpander* k_charmacroexpander_new2(void* c);

/// [Qt documentation](https://api.kde.org/kcharmacroexpander.html#expandPlainMacro)
///
/// @param self KCharMacroExpander*
/// @param str const char*
/// @param pos int
/// @param retVal const char**
int32_t k_charmacroexpander_expand_plain_macro(void* self, const char* str, int pos, const char* retVal[static 1]);

/// [Qt documentation](https://api.kde.org/kcharmacroexpander.html#expandPlainMacro)
///
/// Allows for overriding the related default method
///
/// @param self KCharMacroExpander*
/// @param callback int32_t func(KCharMacroExpander* self, const char* str, int pos, const char** retVal)
void k_charmacroexpander_on_expand_plain_macro(void* self, int32_t (*callback)(void*, const char*, int, const char**));

/// [Qt documentation](https://api.kde.org/kcharmacroexpander.html#expandPlainMacro)
///
/// Base class method implementation
///
/// @param self KCharMacroExpander*
/// @param str const char*
/// @param pos int
/// @param retVal const char**
int32_t k_charmacroexpander_qbase_expand_plain_macro(void* self, const char* str, int pos, const char* retVal[static 1]);

/// [Qt documentation](https://api.kde.org/kcharmacroexpander.html#expandEscapedMacro)
///
/// @param self KCharMacroExpander*
/// @param str const char*
/// @param pos int
/// @param retVal const char**
int32_t k_charmacroexpander_expand_escaped_macro(void* self, const char* str, int pos, const char* retVal[static 1]);

/// [Qt documentation](https://api.kde.org/kcharmacroexpander.html#expandEscapedMacro)
///
/// Allows for overriding the related default method
///
/// @param self KCharMacroExpander*
/// @param callback int32_t func(KCharMacroExpander* self, const char* str, int pos, const char** retVal)
void k_charmacroexpander_on_expand_escaped_macro(void* self, int32_t (*callback)(void*, const char*, int, const char**));

/// [Qt documentation](https://api.kde.org/kcharmacroexpander.html#expandEscapedMacro)
///
/// Base class method implementation
///
/// @param self KCharMacroExpander*
/// @param str const char*
/// @param pos int
/// @param retVal const char**
int32_t k_charmacroexpander_qbase_expand_escaped_macro(void* self, const char* str, int pos, const char* retVal[static 1]);

/// [Qt documentation](https://api.kde.org/kcharmacroexpander.html#expandMacro)
///
/// @param self KCharMacroExpander*
/// @param chr QChar*
/// @param retVal const char**
bool k_charmacroexpander_expand_macro(void* self, void* chr, const char* retVal[static 1]);

/// [Qt documentation](https://api.kde.org/kcharmacroexpander.html#expandMacro)
///
/// Allows for overriding the related default method
///
/// @param self KCharMacroExpander*
/// @param callback bool func(KCharMacroExpander* self, QChar* chr, const char** retVal)
void k_charmacroexpander_on_expand_macro(void* self, bool (*callback)(void*, void*, const char**));

/// [Qt documentation](https://api.kde.org/kcharmacroexpander.html#expandMacro)
///
/// Base class method implementation
///
/// @param self KCharMacroExpander*
/// @param chr QChar*
/// @param retVal const char**
bool k_charmacroexpander_qbase_expand_macro(void* self, void* chr, const char* retVal[static 1]);

/// Inherited from KMacroExpanderBase
///
/// [Qt documentation](https://api.kde.org/kmacroexpanderbase.html#expandMacros)
///
/// @param self KCharMacroExpander*
/// @param str const char*
void k_charmacroexpander_expand_macros(void* self, const char* str);

/// Inherited from KMacroExpanderBase
///
/// [Qt documentation](https://api.kde.org/kmacroexpanderbase.html#expandMacrosShellQuote)
///
/// @param self KCharMacroExpander*
/// @param str const char*
/// @param pos int*
bool k_charmacroexpander_expand_macros_shell_quote(void* self, const char* str, int* pos);

/// Inherited from KMacroExpanderBase
///
/// [Qt documentation](https://api.kde.org/kmacroexpanderbase.html#expandMacrosShellQuote)
///
/// @param self KCharMacroExpander*
/// @param str const char*
bool k_charmacroexpander_expand_macros_shell_quote2(void* self, const char* str);

/// Inherited from KMacroExpanderBase
///
/// [Qt documentation](https://api.kde.org/kmacroexpanderbase.html#setEscapeChar)
///
/// @param self KCharMacroExpander*
/// @param c QChar*
void k_charmacroexpander_set_escape_char(void* self, void* c);

/// Inherited from KMacroExpanderBase
///
/// [Qt documentation](https://api.kde.org/kmacroexpanderbase.html#escapeChar)
///
/// @param self KCharMacroExpander*
QChar* k_charmacroexpander_escape_char(void* self);

/// [Qt documentation](https://api.kde.org/kcharmacroexpander.html#dtor.KCharMacroExpander)
///
/// Delete this object from C++ memory.
///
/// @param self KCharMacroExpander*
void k_charmacroexpander_delete(void* self);

/// https://api.kde.org/kmacroexpander.html

/// [Qt documentation](https://api.kde.org/kmacroexpander.html#expandMacros)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
/// @param param2 libqt_map /* of QChar* to const char* */
/// @param param3 QChar*
const char* k_macroexpander_expand_macros(const char* param1, libqt_map /* of QChar* to const char* */ param2, void* param3);

/// [Qt documentation](https://api.kde.org/kmacroexpander.html#expandMacrosShellQuote)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
/// @param param2 libqt_map /* of QChar* to const char* */
/// @param param3 QChar*
const char* k_macroexpander_expand_macros_shell_quote(const char* param1, libqt_map /* of QChar* to const char* */ param2, void* param3);

/// [Qt documentation](https://api.kde.org/kmacroexpander.html#expandMacros)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
/// @param param2 libqt_map /* of const char* to const char* */
/// @param param3 QChar*
const char* k_macroexpander_expand_macros2(const char* param1, libqt_map /* of const char* to const char* */ param2, void* param3);

/// [Qt documentation](https://api.kde.org/kmacroexpander.html#expandMacrosShellQuote)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
/// @param param2 libqt_map /* of const char* to const char* */
/// @param param3 QChar*
const char* k_macroexpander_expand_macros_shell_quote2(const char* param1, libqt_map /* of const char* to const char* */ param2, void* param3);

/// [Qt documentation](https://api.kde.org/kmacroexpander.html#expandMacros)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
/// @param param2 libqt_map /* of QChar* to const char* */
/// @param param3 QChar*
const char* k_macroexpander_expand_macros3(const char* param1, libqt_map /* of QChar* to const char* */ param2, void* param3);

/// [Qt documentation](https://api.kde.org/kmacroexpander.html#expandMacros)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
/// @param param2 libqt_map /* of const char* to const char* */
/// @param param3 QChar*
const char* k_macroexpander_expand_macros4(const char* param1, libqt_map /* of const char* to const char* */ param2, void* param3);

/// [Qt documentation](https://api.kde.org/kmacroexpander.html#expandMacrosShellQuote)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
/// @param param2 libqt_map /* of QChar* to const char* */
/// @param param3 QChar*
const char* k_macroexpander_expand_macros_shell_quote3(const char* param1, libqt_map /* of QChar* to const char* */ param2, void* param3);

/// [Qt documentation](https://api.kde.org/kmacroexpander.html#expandMacrosShellQuote)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
/// @param param2 libqt_map /* of const char* to const char* */
/// @param param3 QChar*
const char* k_macroexpander_expand_macros_shell_quote4(const char* param1, libqt_map /* of const char* to const char* */ param2, void* param3);
#endif
