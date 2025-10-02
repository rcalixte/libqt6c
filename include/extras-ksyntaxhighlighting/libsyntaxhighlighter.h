#pragma once
#ifndef SRC_EXTRAS_KSYNTAXHIGHLIGHTINGQT6C_LIBSYNTAXHIGHLIGHTER_H
#define SRC_EXTRAS_KSYNTAXHIGHLIGHTINGQT6C_LIBSYNTAXHIGHLIGHTER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html

/// k_syntaxhighlighting__syntaxhighlighter_new constructs a new KSyntaxHighlighting::SyntaxHighlighter object.
///
KSyntaxHighlighting__SyntaxHighlighter* k_syntaxhighlighting__syntaxhighlighter_new();

/// k_syntaxhighlighting__syntaxhighlighter_new2 constructs a new KSyntaxHighlighting::SyntaxHighlighter object.
///
/// @param document QTextDocument*
KSyntaxHighlighting__SyntaxHighlighter* k_syntaxhighlighting__syntaxhighlighter_new2(void* document);

/// k_syntaxhighlighting__syntaxhighlighter_new3 constructs a new KSyntaxHighlighting::SyntaxHighlighter object.
///
/// @param parent QObject*
KSyntaxHighlighting__SyntaxHighlighter* k_syntaxhighlighting__syntaxhighlighter_new3(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
const QMetaObject* k_syntaxhighlighting__syntaxhighlighter_meta_object(void* self);

/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param param1 const char*
void* k_syntaxhighlighting__syntaxhighlighter_metacast(void* self, const char* param1);

/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_syntaxhighlighting__syntaxhighlighter_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param callback int32_t func(KSyntaxHighlighting__SyntaxHighlighter* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_syntaxhighlighting__syntaxhighlighter_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_syntaxhighlighting__syntaxhighlighter_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_syntaxhighlighting__syntaxhighlighter_tr(const char* s);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#setDefinition)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param def KSyntaxHighlighting__Definition*
void k_syntaxhighlighting__syntaxhighlighter_set_definition(void* self, void* def);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#setDefinition)
///
/// Allows for overriding the related default method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param callback void func(KSyntaxHighlighting__SyntaxHighlighter* self, KSyntaxHighlighting__Definition* def)
void k_syntaxhighlighting__syntaxhighlighter_on_set_definition(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#setDefinition)
///
/// Base class method implementation
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param def KSyntaxHighlighting__Definition*
void k_syntaxhighlighting__syntaxhighlighter_qbase_set_definition(void* self, void* def);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#setTheme)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param theme KSyntaxHighlighting__Theme*
void k_syntaxhighlighting__syntaxhighlighter_set_theme(void* self, void* theme);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#setTheme)
///
/// Allows for overriding the related default method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param callback void func(KSyntaxHighlighting__SyntaxHighlighter* self, KSyntaxHighlighting__Theme* theme)
void k_syntaxhighlighting__syntaxhighlighter_on_set_theme(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#setTheme)
///
/// Base class method implementation
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param theme KSyntaxHighlighting__Theme*
void k_syntaxhighlighting__syntaxhighlighter_qbase_set_theme(void* self, void* theme);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#startsFoldingRegion)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param startBlock QTextBlock*
bool k_syntaxhighlighting__syntaxhighlighter_starts_folding_region(void* self, void* startBlock);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#findFoldingRegionEnd)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param startBlock QTextBlock*
QTextBlock* k_syntaxhighlighting__syntaxhighlighter_find_folding_region_end(void* self, void* startBlock);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#highlightBlock)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param text const char*
void k_syntaxhighlighting__syntaxhighlighter_highlight_block(void* self, const char* text);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#highlightBlock)
///
/// Allows for overriding the related default method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param callback void func(KSyntaxHighlighting__SyntaxHighlighter* self, const char* text)
void k_syntaxhighlighting__syntaxhighlighter_on_highlight_block(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#highlightBlock)
///
/// Base class method implementation
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param text const char*
void k_syntaxhighlighting__syntaxhighlighter_qbase_highlight_block(void* self, const char* text);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#applyFormat)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param offset int
/// @param length int
/// @param format KSyntaxHighlighting__Format*
void k_syntaxhighlighting__syntaxhighlighter_apply_format(void* self, int offset, int length, void* format);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#applyFormat)
///
/// Allows for overriding the related default method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param callback void func(KSyntaxHighlighting__SyntaxHighlighter* self, int offset, int length, KSyntaxHighlighting__Format* format)
void k_syntaxhighlighting__syntaxhighlighter_on_apply_format(void* self, void (*callback)(void*, int, int, void*));

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#applyFormat)
///
/// Base class method implementation
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param offset int
/// @param length int
/// @param format KSyntaxHighlighting__Format*
void k_syntaxhighlighting__syntaxhighlighter_qbase_apply_format(void* self, int offset, int length, void* format);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#applyFolding)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param offset int
/// @param length int
/// @param region KSyntaxHighlighting__FoldingRegion*
void k_syntaxhighlighting__syntaxhighlighter_apply_folding(void* self, int offset, int length, void* region);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#applyFolding)
///
/// Allows for overriding the related default method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param callback void func(KSyntaxHighlighting__SyntaxHighlighter* self, int offset, int length, KSyntaxHighlighting__FoldingRegion* region)
void k_syntaxhighlighting__syntaxhighlighter_on_apply_folding(void* self, void (*callback)(void*, int, int, void*));

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#applyFolding)
///
/// Base class method implementation
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param offset int
/// @param length int
/// @param region KSyntaxHighlighting__FoldingRegion*
void k_syntaxhighlighting__syntaxhighlighter_qbase_apply_folding(void* self, int offset, int length, void* region);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_syntaxhighlighting__syntaxhighlighter_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_syntaxhighlighting__syntaxhighlighter_tr3(const char* s, const char* c, int n);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setDocument)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param doc QTextDocument*
void k_syntaxhighlighting__syntaxhighlighter_set_document(void* self, void* doc);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#document)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
QTextDocument* k_syntaxhighlighting__syntaxhighlighter_document(void* self);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlight)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
void k_syntaxhighlighting__syntaxhighlighter_rehighlight(void* self);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlightBlock)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param block QTextBlock*
void k_syntaxhighlighting__syntaxhighlighter_rehighlight_block(void* self, void* block);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
const char* k_syntaxhighlighting__syntaxhighlighter_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param name char*
void k_syntaxhighlighting__syntaxhighlighter_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
bool k_syntaxhighlighting__syntaxhighlighter_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
bool k_syntaxhighlighting__syntaxhighlighter_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
bool k_syntaxhighlighting__syntaxhighlighter_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
bool k_syntaxhighlighting__syntaxhighlighter_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param b bool
bool k_syntaxhighlighting__syntaxhighlighter_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
QThread* k_syntaxhighlighting__syntaxhighlighter_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param thread QThread*
bool k_syntaxhighlighting__syntaxhighlighter_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param interval int
int32_t k_syntaxhighlighting__syntaxhighlighter_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param id int
void k_syntaxhighlighting__syntaxhighlighter_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param id enum Qt__TimerId
void k_syntaxhighlighting__syntaxhighlighter_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
libqt_list /* of QObject* */ k_syntaxhighlighting__syntaxhighlighter_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param parent QObject*
void k_syntaxhighlighting__syntaxhighlighter_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param filterObj QObject*
void k_syntaxhighlighting__syntaxhighlighter_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param obj QObject*
void k_syntaxhighlighting__syntaxhighlighter_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_syntaxhighlighting__syntaxhighlighter_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_syntaxhighlighting__syntaxhighlighter_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_syntaxhighlighting__syntaxhighlighter_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_syntaxhighlighting__syntaxhighlighter_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
void k_syntaxhighlighting__syntaxhighlighter_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
void k_syntaxhighlighting__syntaxhighlighter_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param name const char*
/// @param value QVariant*
bool k_syntaxhighlighting__syntaxhighlighter_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param name const char*
QVariant* k_syntaxhighlighting__syntaxhighlighter_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
const char** k_syntaxhighlighting__syntaxhighlighter_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
QBindingStorage* k_syntaxhighlighting__syntaxhighlighter_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
const QBindingStorage* k_syntaxhighlighting__syntaxhighlighter_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
void k_syntaxhighlighting__syntaxhighlighter_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param callback void func(KSyntaxHighlighting__SyntaxHighlighter* self)
void k_syntaxhighlighting__syntaxhighlighter_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
QObject* k_syntaxhighlighting__syntaxhighlighter_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param classname const char*
bool k_syntaxhighlighting__syntaxhighlighter_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
void k_syntaxhighlighting__syntaxhighlighter_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_syntaxhighlighting__syntaxhighlighter_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_syntaxhighlighting__syntaxhighlighter_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_syntaxhighlighting__syntaxhighlighter_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_syntaxhighlighting__syntaxhighlighter_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param param1 QObject*
void k_syntaxhighlighting__syntaxhighlighter_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param callback void func(KSyntaxHighlighting__SyntaxHighlighter* self, QObject* param1)
void k_syntaxhighlighting__syntaxhighlighter_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KSyntaxHighlighting::AbstractHighlighter
///
/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#definition)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
KSyntaxHighlighting__Definition* k_syntaxhighlighting__syntaxhighlighter_definition(void* self);

/// Inherited from KSyntaxHighlighting::AbstractHighlighter
///
/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#theme)
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
KSyntaxHighlighting__Theme* k_syntaxhighlighting__syntaxhighlighter_theme(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param event QEvent*
bool k_syntaxhighlighting__syntaxhighlighter_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param event QEvent*
bool k_syntaxhighlighting__syntaxhighlighter_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param callback bool func(KSyntaxHighlighting__SyntaxHighlighter* self, QEvent* event)
void k_syntaxhighlighting__syntaxhighlighter_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param watched QObject*
/// @param event QEvent*
bool k_syntaxhighlighting__syntaxhighlighter_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param watched QObject*
/// @param event QEvent*
bool k_syntaxhighlighting__syntaxhighlighter_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param callback bool func(KSyntaxHighlighting__SyntaxHighlighter* self, QObject* watched, QEvent* event)
void k_syntaxhighlighting__syntaxhighlighter_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param event QTimerEvent*
void k_syntaxhighlighting__syntaxhighlighter_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param event QTimerEvent*
void k_syntaxhighlighting__syntaxhighlighter_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param callback void func(KSyntaxHighlighting__SyntaxHighlighter* self, QTimerEvent* event)
void k_syntaxhighlighting__syntaxhighlighter_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param event QChildEvent*
void k_syntaxhighlighting__syntaxhighlighter_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param event QChildEvent*
void k_syntaxhighlighting__syntaxhighlighter_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param callback void func(KSyntaxHighlighting__SyntaxHighlighter* self, QChildEvent* event)
void k_syntaxhighlighting__syntaxhighlighter_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param event QEvent*
void k_syntaxhighlighting__syntaxhighlighter_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param event QEvent*
void k_syntaxhighlighting__syntaxhighlighter_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param callback void func(KSyntaxHighlighting__SyntaxHighlighter* self, QEvent* event)
void k_syntaxhighlighting__syntaxhighlighter_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param signal QMetaMethod*
void k_syntaxhighlighting__syntaxhighlighter_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param signal QMetaMethod*
void k_syntaxhighlighting__syntaxhighlighter_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param callback void func(KSyntaxHighlighting__SyntaxHighlighter* self, QMetaMethod* signal)
void k_syntaxhighlighting__syntaxhighlighter_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param signal QMetaMethod*
void k_syntaxhighlighting__syntaxhighlighter_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param signal QMetaMethod*
void k_syntaxhighlighting__syntaxhighlighter_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param callback void func(KSyntaxHighlighting__SyntaxHighlighter* self, QMetaMethod* signal)
void k_syntaxhighlighting__syntaxhighlighter_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param start int
/// @param count int
/// @param format QTextCharFormat*
void k_syntaxhighlighting__syntaxhighlighter_set_format(void* self, int start, int count, void* format);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param start int
/// @param count int
/// @param format QTextCharFormat*
void k_syntaxhighlighting__syntaxhighlighter_qbase_set_format(void* self, int start, int count, void* format);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param callback void func(KSyntaxHighlighting__SyntaxHighlighter* self, int start, int count, QTextCharFormat* format)
void k_syntaxhighlighting__syntaxhighlighter_on_set_format(void* self, void (*callback)(void*, int, int, void*));

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param pos int
QTextCharFormat* k_syntaxhighlighting__syntaxhighlighter_format(void* self, int pos);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param pos int
QTextCharFormat* k_syntaxhighlighting__syntaxhighlighter_qbase_format(void* self, int pos);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param callback QTextCharFormat* func(KSyntaxHighlighting__SyntaxHighlighter* self, int pos)
void k_syntaxhighlighting__syntaxhighlighter_on_format(void* self, QTextCharFormat* (*callback)(void*, int));

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
int32_t k_syntaxhighlighting__syntaxhighlighter_previous_block_state(void* self);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
int32_t k_syntaxhighlighting__syntaxhighlighter_qbase_previous_block_state(void* self);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param callback int32_t func()
void k_syntaxhighlighting__syntaxhighlighter_on_previous_block_state(void* self, int32_t (*callback)());

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
int32_t k_syntaxhighlighting__syntaxhighlighter_current_block_state(void* self);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
int32_t k_syntaxhighlighting__syntaxhighlighter_qbase_current_block_state(void* self);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param callback int32_t func()
void k_syntaxhighlighting__syntaxhighlighter_on_current_block_state(void* self, int32_t (*callback)());

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param newState int
void k_syntaxhighlighting__syntaxhighlighter_set_current_block_state(void* self, int newState);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param newState int
void k_syntaxhighlighting__syntaxhighlighter_qbase_set_current_block_state(void* self, int newState);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param callback void func(KSyntaxHighlighting__SyntaxHighlighter* self, int newState)
void k_syntaxhighlighting__syntaxhighlighter_on_set_current_block_state(void* self, void (*callback)(void*, int));

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param data QTextBlockUserData*
void k_syntaxhighlighting__syntaxhighlighter_set_current_block_user_data(void* self, void* data);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param data QTextBlockUserData*
void k_syntaxhighlighting__syntaxhighlighter_qbase_set_current_block_user_data(void* self, void* data);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param callback void func(KSyntaxHighlighting__SyntaxHighlighter* self, QTextBlockUserData* data)
void k_syntaxhighlighting__syntaxhighlighter_on_set_current_block_user_data(void* self, void (*callback)(void*, void*));

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
QTextBlockUserData* k_syntaxhighlighting__syntaxhighlighter_current_block_user_data(void* self);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
QTextBlockUserData* k_syntaxhighlighting__syntaxhighlighter_qbase_current_block_user_data(void* self);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param callback QTextBlockUserData* func()
void k_syntaxhighlighting__syntaxhighlighter_on_current_block_user_data(void* self, QTextBlockUserData* (*callback)());

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
QTextBlock* k_syntaxhighlighting__syntaxhighlighter_current_block(void* self);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
QTextBlock* k_syntaxhighlighting__syntaxhighlighter_qbase_current_block(void* self);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param callback QTextBlock* func()
void k_syntaxhighlighting__syntaxhighlighter_on_current_block(void* self, QTextBlock* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
QObject* k_syntaxhighlighting__syntaxhighlighter_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
QObject* k_syntaxhighlighting__syntaxhighlighter_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param callback QObject* func()
void k_syntaxhighlighting__syntaxhighlighter_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
int32_t k_syntaxhighlighting__syntaxhighlighter_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
int32_t k_syntaxhighlighting__syntaxhighlighter_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param callback int32_t func()
void k_syntaxhighlighting__syntaxhighlighter_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param signal const char*
int32_t k_syntaxhighlighting__syntaxhighlighter_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param signal const char*
int32_t k_syntaxhighlighting__syntaxhighlighter_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param callback int32_t func(KSyntaxHighlighting__SyntaxHighlighter* self, const char* signal)
void k_syntaxhighlighting__syntaxhighlighter_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param signal QMetaMethod*
bool k_syntaxhighlighting__syntaxhighlighter_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param signal QMetaMethod*
bool k_syntaxhighlighting__syntaxhighlighter_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param callback bool func(KSyntaxHighlighting__SyntaxHighlighter* self, QMetaMethod* signal)
void k_syntaxhighlighting__syntaxhighlighter_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
/// @param callback void func(KSyntaxHighlighting__SyntaxHighlighter* self, const char* objectName)
void k_syntaxhighlighting__syntaxhighlighter_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KSyntaxHighlighting__SyntaxHighlighter*
void k_syntaxhighlighting__syntaxhighlighter_delete(void* self);

#endif
