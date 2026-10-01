#pragma once
#ifndef EXTRAS_KTEXTEDITOR_LIBEDITOR_H
#define EXTRAS_KTEXTEDITOR_LIBEDITOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ktexteditor-editor.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KTextEditor__Editor*
///
const QMetaObject* k_texteditor__editor_meta_object(const void* self);

/// @param self KTextEditor__Editor*
/// @param param1 const char*
///
void* k_texteditor__editor_metacast(void* self, const char* param1);

/// @param self KTextEditor__Editor*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_texteditor__editor_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_texteditor__editor_tr(const char* s);

/// [Upstream resources](https://api.kde.org/ktexteditor-editor.html#instance)
///
KTextEditor__Editor* k_texteditor__editor_instance();

/// [Upstream resources](https://api.kde.org/ktexteditor-editor.html#setApplication)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self KTextEditor__Editor*
/// @param application KTextEditor__Application*
///
void k_texteditor__editor_set_application(void* self, void* application);

/// [Upstream resources](https://api.kde.org/ktexteditor-editor.html#application)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const KTextEditor__Editor*
///
KTextEditor__Application* k_texteditor__editor_application(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-editor.html#createDocument)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self KTextEditor__Editor*
/// @param parent QObject*
///
KTextEditor__Document* k_texteditor__editor_create_document(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/ktexteditor-editor.html#documents)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self KTextEditor__Editor*
///
/// @return libqt_list of KTextEditor__Document*
///
libqt_list k_texteditor__editor_documents(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-editor.html#documentCreated)
///
/// @param self KTextEditor__Editor*
/// @param editor KTextEditor__Editor*
/// @param document KTextEditor__Document*
///
void k_texteditor__editor_document_created(void* self, void* editor, void* document);

/// [Upstream resources](https://api.kde.org/ktexteditor-editor.html#documentCreated)
///
/// @param self KTextEditor__Editor*
/// @param callback void func(KTextEditor__Editor* self, KTextEditor__Editor* editor, KTextEditor__Document* document)
///
void k_texteditor__editor_on_document_created(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-editor.html#aboutData)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const KTextEditor__Editor*
///
const KAboutData* k_texteditor__editor_about_data(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-editor.html#defaultEncoding)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KTextEditor__Editor*
///
const char* k_texteditor__editor_default_encoding(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-editor.html#configDialog)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self KTextEditor__Editor*
/// @param parent QWidget*
///
void k_texteditor__editor_config_dialog(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/ktexteditor-editor.html#configPages)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const KTextEditor__Editor*
///
int32_t k_texteditor__editor_config_pages(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-editor.html#configPage)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self KTextEditor__Editor*
/// @param number int
/// @param parent QWidget*
///
KTextEditor__ConfigPage* k_texteditor__editor_config_page(void* self, int number, void* parent);

/// [Upstream resources](https://api.kde.org/ktexteditor-editor.html#configChanged)
///
/// @param self KTextEditor__Editor*
/// @param editor KTextEditor__Editor*
///
void k_texteditor__editor_config_changed(void* self, void* editor);

/// [Upstream resources](https://api.kde.org/ktexteditor-editor.html#configChanged)
///
/// @param self KTextEditor__Editor*
/// @param callback void func(KTextEditor__Editor* self, KTextEditor__Editor* editor)
///
void k_texteditor__editor_on_config_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-editor.html#font)
///
/// @param self const KTextEditor__Editor*
///
QFont* k_texteditor__editor_font(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-editor.html#theme)
///
/// @param self const KTextEditor__Editor*
///
KSyntaxHighlighting__Theme* k_texteditor__editor_theme(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-editor.html#repository)
///
/// @param self const KTextEditor__Editor*
///
const KSyntaxHighlighting__Repository* k_texteditor__editor_repository(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-editor.html#repositoryReloaded)
///
/// @param self KTextEditor__Editor*
/// @param editor KTextEditor__Editor*
///
void k_texteditor__editor_repository_reloaded(void* self, void* editor);

/// [Upstream resources](https://api.kde.org/ktexteditor-editor.html#repositoryReloaded)
///
/// @param self KTextEditor__Editor*
/// @param callback void func(KTextEditor__Editor* self, KTextEditor__Editor* editor)
///
void k_texteditor__editor_on_repository_reloaded(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-editor.html#queryCommand)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const KTextEditor__Editor*
/// @param cmd const char*
///
KTextEditor__Command* k_texteditor__editor_query_command(const void* self, const char* cmd);

/// [Upstream resources](https://api.kde.org/ktexteditor-editor.html#commands)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const KTextEditor__Editor*
///
/// @return libqt_list of KTextEditor__Command*
///
libqt_list k_texteditor__editor_commands(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-editor.html#commandList)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KTextEditor__Editor*
///
const char** k_texteditor__editor_command_list(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-editor.html#unregisterVariable)
///
/// @param self KTextEditor__Editor*
/// @param variableName const char*
///
bool k_texteditor__editor_unregister_variable(void* self, const char* variableName);

/// [Upstream resources](https://api.kde.org/ktexteditor-editor.html#expandVariable)
///
/// @param self const KTextEditor__Editor*
/// @param variable const char*
/// @param view KTextEditor__View*
/// @param output const char*
///
bool k_texteditor__editor_expand_variable(const void* self, const char* variable, void* view, const char* output);

/// [Upstream resources](https://api.kde.org/ktexteditor-editor.html#expandText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KTextEditor__Editor*
/// @param text const char*
/// @param view KTextEditor__View*
///
const char* k_texteditor__editor_expand_text(const void* self, const char* text, void* view);

/// [Upstream resources](https://api.kde.org/ktexteditor-editor.html#addVariableExpansion)
///
/// @param self const KTextEditor__Editor*
/// @param widgets libqt_list of QWidget*
///
void k_texteditor__editor_add_variable_expansion(const void* self, libqt_list widgets);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_texteditor__editor_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_texteditor__editor_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/ktexteditor-editor.html#addVariableExpansion)
///
/// @param self const KTextEditor__Editor*
/// @param widgets libqt_list of QWidget*
/// @param variables const char**
///
void k_texteditor__editor_add_variable_expansion2(const void* self, libqt_list widgets, const char* variables[static 1]);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KTextEditor__Editor*
/// @param event QEvent*
///
bool k_texteditor__editor_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KTextEditor__Editor*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_texteditor__editor_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KTextEditor__Editor*
///
const char* k_texteditor__editor_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KTextEditor__Editor*
/// @param name const char*
///
void k_texteditor__editor_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KTextEditor__Editor*
///
bool k_texteditor__editor_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KTextEditor__Editor*
///
bool k_texteditor__editor_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KTextEditor__Editor*
///
bool k_texteditor__editor_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KTextEditor__Editor*
///
bool k_texteditor__editor_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KTextEditor__Editor*
/// @param b bool
///
bool k_texteditor__editor_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KTextEditor__Editor*
///
QThread* k_texteditor__editor_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTextEditor__Editor*
/// @param thread QThread*
///
bool k_texteditor__editor_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__Editor*
/// @param interval int
///
int32_t k_texteditor__editor_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__Editor*
/// @param time int64_t of nanoseconds
///
int32_t k_texteditor__editor_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTextEditor__Editor*
/// @param id int
///
void k_texteditor__editor_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTextEditor__Editor*
/// @param id enum Qt__TimerId
///
void k_texteditor__editor_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KTextEditor__Editor*
///
/// @return libqt_list of QObject*
///
libqt_list k_texteditor__editor_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KTextEditor__Editor*
/// @param parent QObject*
///
void k_texteditor__editor_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KTextEditor__Editor*
/// @param filterObj QObject*
///
void k_texteditor__editor_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KTextEditor__Editor*
/// @param obj QObject*
///
void k_texteditor__editor_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_texteditor__editor_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_texteditor__editor_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KTextEditor__Editor*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_texteditor__editor_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texteditor__editor_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_texteditor__editor_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KTextEditor__Editor*
///
bool k_texteditor__editor_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KTextEditor__Editor*
/// @param receiver QObject*
///
bool k_texteditor__editor_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_texteditor__editor_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KTextEditor__Editor*
///
void k_texteditor__editor_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KTextEditor__Editor*
///
void k_texteditor__editor_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KTextEditor__Editor*
/// @param name const char*
/// @param value QVariant*
///
bool k_texteditor__editor_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KTextEditor__Editor*
/// @param name const char*
///
QVariant* k_texteditor__editor_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KTextEditor__Editor*
///
const char** k_texteditor__editor_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTextEditor__Editor*
///
QBindingStorage* k_texteditor__editor_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KTextEditor__Editor*
///
const QBindingStorage* k_texteditor__editor_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__Editor*
///
void k_texteditor__editor_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__Editor*
/// @param callback void func(KTextEditor__Editor* self)
///
void k_texteditor__editor_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KTextEditor__Editor*
///
QObject* k_texteditor__editor_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KTextEditor__Editor*
/// @param classname const char*
///
bool k_texteditor__editor_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KTextEditor__Editor*
///
void k_texteditor__editor_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__Editor*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_texteditor__editor_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__Editor*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_texteditor__editor_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_texteditor__editor_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_texteditor__editor_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KTextEditor__Editor*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_texteditor__editor_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KTextEditor__Editor*
/// @param signal const char*
///
bool k_texteditor__editor_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KTextEditor__Editor*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_texteditor__editor_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KTextEditor__Editor*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texteditor__editor_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KTextEditor__Editor*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texteditor__editor_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__Editor*
/// @param param1 QObject*
///
void k_texteditor__editor_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__Editor*
/// @param callback void func(KTextEditor__Editor* self, QObject* param1)
///
void k_texteditor__editor_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KTextEditor__Editor*
/// @param callback void func(KTextEditor__Editor* self, const char* objectName)
///
void k_texteditor__editor_on_object_name_changed(void* self, void (*callback)(void*, const char*));
#endif
