#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORQT6C_LIBEDITOR_H
#define SRC_EXTRAS_KTEXTEDITORQT6C_LIBEDITOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/ktexteditor-editor.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KTextEditor__Editor*
const QMetaObject* k_texteditor__editor_meta_object(void* self);

/// @param self KTextEditor__Editor*
/// @param param1 const char*
void* k_texteditor__editor_metacast(void* self, const char* param1);

/// @param self KTextEditor__Editor*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_texteditor__editor_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_texteditor__editor_tr(const char* s);

/// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#instance)
///
KTextEditor__Editor* k_texteditor__editor_instance();

/// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#setApplication)
///
/// @param self KTextEditor__Editor*
/// @param application KTextEditor__Application*
void k_texteditor__editor_set_application(void* self, void* application);

/// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#application)
///
/// @param self KTextEditor__Editor*
KTextEditor__Application* k_texteditor__editor_application(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#createDocument)
///
/// @param self KTextEditor__Editor*
/// @param parent QObject*
KTextEditor__Document* k_texteditor__editor_create_document(void* self, void* parent);

/// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#documents)
///
/// @param self KTextEditor__Editor*
libqt_list /* of KTextEditor__Document* */ k_texteditor__editor_documents(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#documentCreated)
///
/// @param self KTextEditor__Editor*
/// @param editor KTextEditor__Editor*
/// @param document KTextEditor__Document*
void k_texteditor__editor_document_created(void* self, void* editor, void* document);

/// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#documentCreated)
///
/// @param self KTextEditor__Editor*
/// @param callback void func(KTextEditor__Editor* self, KTextEditor__Editor* editor, KTextEditor__Document* document)
void k_texteditor__editor_on_document_created(void* self, void (*callback)(void*, void*, void*));

/// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#aboutData)
///
/// @param self KTextEditor__Editor*
const KAboutData* k_texteditor__editor_about_data(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#defaultEncoding)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEditor__Editor*
const char* k_texteditor__editor_default_encoding(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#configDialog)
///
/// @param self KTextEditor__Editor*
/// @param parent QWidget*
void k_texteditor__editor_config_dialog(void* self, void* parent);

/// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#configPages)
///
/// @param self KTextEditor__Editor*
int32_t k_texteditor__editor_config_pages(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#configPage)
///
/// @param self KTextEditor__Editor*
/// @param number int
/// @param parent QWidget*
KTextEditor__ConfigPage* k_texteditor__editor_config_page(void* self, int number, void* parent);

/// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#configChanged)
///
/// @param self KTextEditor__Editor*
/// @param editor KTextEditor__Editor*
void k_texteditor__editor_config_changed(void* self, void* editor);

/// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#configChanged)
///
/// @param self KTextEditor__Editor*
/// @param callback void func(KTextEditor__Editor* self, KTextEditor__Editor* editor)
void k_texteditor__editor_on_config_changed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#font)
///
/// @param self KTextEditor__Editor*
QFont* k_texteditor__editor_font(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#theme)
///
/// @param self KTextEditor__Editor*
KSyntaxHighlighting__Theme* k_texteditor__editor_theme(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#repository)
///
/// @param self KTextEditor__Editor*
const KSyntaxHighlighting__Repository* k_texteditor__editor_repository(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#repositoryReloaded)
///
/// @param self KTextEditor__Editor*
/// @param editor KTextEditor__Editor*
void k_texteditor__editor_repository_reloaded(void* self, void* editor);

/// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#repositoryReloaded)
///
/// @param self KTextEditor__Editor*
/// @param callback void func(KTextEditor__Editor* self, KTextEditor__Editor* editor)
void k_texteditor__editor_on_repository_reloaded(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#queryCommand)
///
/// @param self KTextEditor__Editor*
/// @param cmd const char*
KTextEditor__Command* k_texteditor__editor_query_command(void* self, const char* cmd);

/// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#commands)
///
/// @param self KTextEditor__Editor*
libqt_list /* of KTextEditor__Command* */ k_texteditor__editor_commands(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#commandList)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEditor__Editor*
const char** k_texteditor__editor_command_list(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#unregisterVariable)
///
/// @param self KTextEditor__Editor*
/// @param variableName const char*
bool k_texteditor__editor_unregister_variable(void* self, const char* variableName);

/// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#expandVariable)
///
/// @param self KTextEditor__Editor*
/// @param variable const char*
/// @param view KTextEditor__View*
/// @param output const char*
bool k_texteditor__editor_expand_variable(void* self, const char* variable, void* view, const char* output);

/// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#expandText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEditor__Editor*
/// @param text const char*
/// @param view KTextEditor__View*
const char* k_texteditor__editor_expand_text(void* self, const char* text, void* view);

/// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#addVariableExpansion)
///
/// @param self KTextEditor__Editor*
/// @param widgets libqt_list /* of QWidget* */
void k_texteditor__editor_add_variable_expansion(void* self, libqt_list widgets);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_texteditor__editor_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_texteditor__editor_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#addVariableExpansion)
///
/// @param self KTextEditor__Editor*
/// @param widgets libqt_list /* of QWidget* */
/// @param variables const char**
void k_texteditor__editor_add_variable_expansion2(void* self, libqt_list widgets, const char* variables[]);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KTextEditor__Editor*
/// @param event QEvent*
bool k_texteditor__editor_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KTextEditor__Editor*
/// @param watched QObject*
/// @param event QEvent*
bool k_texteditor__editor_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEditor__Editor*
const char* k_texteditor__editor_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KTextEditor__Editor*
/// @param name char*
void k_texteditor__editor_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KTextEditor__Editor*
bool k_texteditor__editor_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KTextEditor__Editor*
bool k_texteditor__editor_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KTextEditor__Editor*
bool k_texteditor__editor_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KTextEditor__Editor*
bool k_texteditor__editor_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KTextEditor__Editor*
/// @param b bool
bool k_texteditor__editor_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KTextEditor__Editor*
QThread* k_texteditor__editor_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTextEditor__Editor*
/// @param thread QThread*
bool k_texteditor__editor_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__Editor*
/// @param interval int
int32_t k_texteditor__editor_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTextEditor__Editor*
/// @param id int
void k_texteditor__editor_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTextEditor__Editor*
/// @param id enum Qt__TimerId
void k_texteditor__editor_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KTextEditor__Editor*
libqt_list /* of QObject* */ k_texteditor__editor_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KTextEditor__Editor*
/// @param parent QObject*
void k_texteditor__editor_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KTextEditor__Editor*
/// @param filterObj QObject*
void k_texteditor__editor_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KTextEditor__Editor*
/// @param obj QObject*
void k_texteditor__editor_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_texteditor__editor_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTextEditor__Editor*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_texteditor__editor_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_texteditor__editor_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_texteditor__editor_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KTextEditor__Editor*
void k_texteditor__editor_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KTextEditor__Editor*
void k_texteditor__editor_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KTextEditor__Editor*
/// @param name const char*
/// @param value QVariant*
bool k_texteditor__editor_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KTextEditor__Editor*
/// @param name const char*
QVariant* k_texteditor__editor_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEditor__Editor*
const char** k_texteditor__editor_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTextEditor__Editor*
QBindingStorage* k_texteditor__editor_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTextEditor__Editor*
const QBindingStorage* k_texteditor__editor_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__Editor*
void k_texteditor__editor_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__Editor*
/// @param callback void func(KTextEditor__Editor* self)
void k_texteditor__editor_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KTextEditor__Editor*
QObject* k_texteditor__editor_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KTextEditor__Editor*
/// @param classname const char*
bool k_texteditor__editor_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KTextEditor__Editor*
void k_texteditor__editor_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTextEditor__Editor*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_texteditor__editor_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__Editor*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_texteditor__editor_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_texteditor__editor_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTextEditor__Editor*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_texteditor__editor_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__Editor*
/// @param param1 QObject*
void k_texteditor__editor_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__Editor*
/// @param callback void func(KTextEditor__Editor* self, QObject* param1)
void k_texteditor__editor_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KTextEditor__Editor*
/// @param callback void func(KTextEditor__Editor* self, const char* objectName)
void k_texteditor__editor_on_object_name_changed(void* self, void (*callback)(void*, const char*));
#endif
