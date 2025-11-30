#pragma once
#ifndef SRC_WEBENGINE_QT6C_LIBQWEBENGINECONTEXTMENUREQUEST_H
#define SRC_WEBENGINE_QT6C_LIBQWEBENGINECONTEXTMENUREQUEST_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QWebEngineContextMenuRequest*
const QMetaObject* q_webenginecontextmenurequest_meta_object(void* self);

/// @param self QWebEngineContextMenuRequest*
/// @param param1 const char*
void* q_webenginecontextmenurequest_metacast(void* self, const char* param1);

/// @param self QWebEngineContextMenuRequest*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_webenginecontextmenurequest_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_webenginecontextmenurequest_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#position)
///
/// @param self QWebEngineContextMenuRequest*
QPoint* q_webenginecontextmenurequest_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#selectedText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineContextMenuRequest*
const char* q_webenginecontextmenurequest_selected_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#linkText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineContextMenuRequest*
const char* q_webenginecontextmenurequest_link_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#linkUrl)
///
/// @param self QWebEngineContextMenuRequest*
QUrl* q_webenginecontextmenurequest_link_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#mediaUrl)
///
/// @param self QWebEngineContextMenuRequest*
QUrl* q_webenginecontextmenurequest_media_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#mediaType)
///
/// @param self QWebEngineContextMenuRequest*
///
/// @return enum QWebEngineContextMenuRequest__MediaType
int32_t q_webenginecontextmenurequest_media_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#isContentEditable)
///
/// @param self QWebEngineContextMenuRequest*
bool q_webenginecontextmenurequest_is_content_editable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#misspelledWord)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineContextMenuRequest*
const char* q_webenginecontextmenurequest_misspelled_word(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#spellCheckerSuggestions)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineContextMenuRequest*
const char** q_webenginecontextmenurequest_spell_checker_suggestions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#isAccepted)
///
/// @param self QWebEngineContextMenuRequest*
bool q_webenginecontextmenurequest_is_accepted(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#setAccepted)
///
/// @param self QWebEngineContextMenuRequest*
/// @param accepted bool
void q_webenginecontextmenurequest_set_accepted(void* self, bool accepted);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#mediaFlags)
///
/// @param self QWebEngineContextMenuRequest*
///
/// @return flag of enum QWebEngineContextMenuRequest__MediaFlag
int32_t q_webenginecontextmenurequest_media_flags(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#editFlags)
///
/// @param self QWebEngineContextMenuRequest*
///
/// @return flag of enum QWebEngineContextMenuRequest__EditFlag
int32_t q_webenginecontextmenurequest_edit_flags(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_webenginecontextmenurequest_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_webenginecontextmenurequest_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QWebEngineContextMenuRequest*
/// @param event QEvent*
bool q_webenginecontextmenurequest_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QWebEngineContextMenuRequest*
/// @param watched QObject*
/// @param event QEvent*
bool q_webenginecontextmenurequest_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineContextMenuRequest*
const char* q_webenginecontextmenurequest_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWebEngineContextMenuRequest*
/// @param name char*
void q_webenginecontextmenurequest_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QWebEngineContextMenuRequest*
bool q_webenginecontextmenurequest_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QWebEngineContextMenuRequest*
bool q_webenginecontextmenurequest_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QWebEngineContextMenuRequest*
bool q_webenginecontextmenurequest_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QWebEngineContextMenuRequest*
bool q_webenginecontextmenurequest_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QWebEngineContextMenuRequest*
/// @param b bool
bool q_webenginecontextmenurequest_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QWebEngineContextMenuRequest*
QThread* q_webenginecontextmenurequest_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebEngineContextMenuRequest*
/// @param thread QThread*
bool q_webenginecontextmenurequest_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineContextMenuRequest*
/// @param interval int
int32_t q_webenginecontextmenurequest_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineContextMenuRequest*
/// @param id int
void q_webenginecontextmenurequest_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineContextMenuRequest*
/// @param id enum Qt__TimerId
void q_webenginecontextmenurequest_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QWebEngineContextMenuRequest*
libqt_list /* of QObject* */ q_webenginecontextmenurequest_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QWebEngineContextMenuRequest*
/// @param parent QObject*
void q_webenginecontextmenurequest_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QWebEngineContextMenuRequest*
/// @param filterObj QObject*
void q_webenginecontextmenurequest_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QWebEngineContextMenuRequest*
/// @param obj QObject*
void q_webenginecontextmenurequest_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_webenginecontextmenurequest_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebEngineContextMenuRequest*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_webenginecontextmenurequest_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_webenginecontextmenurequest_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_webenginecontextmenurequest_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QWebEngineContextMenuRequest*
void q_webenginecontextmenurequest_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QWebEngineContextMenuRequest*
void q_webenginecontextmenurequest_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWebEngineContextMenuRequest*
/// @param name const char*
/// @param value QVariant*
bool q_webenginecontextmenurequest_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QWebEngineContextMenuRequest*
/// @param name const char*
QVariant* q_webenginecontextmenurequest_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineContextMenuRequest*
const char** q_webenginecontextmenurequest_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebEngineContextMenuRequest*
QBindingStorage* q_webenginecontextmenurequest_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebEngineContextMenuRequest*
const QBindingStorage* q_webenginecontextmenurequest_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineContextMenuRequest*
void q_webenginecontextmenurequest_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineContextMenuRequest*
/// @param callback void func(QWebEngineContextMenuRequest* self)
void q_webenginecontextmenurequest_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QWebEngineContextMenuRequest*
QObject* q_webenginecontextmenurequest_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QWebEngineContextMenuRequest*
/// @param classname const char*
bool q_webenginecontextmenurequest_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWebEngineContextMenuRequest*
void q_webenginecontextmenurequest_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebEngineContextMenuRequest*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_webenginecontextmenurequest_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineContextMenuRequest*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_webenginecontextmenurequest_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_webenginecontextmenurequest_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebEngineContextMenuRequest*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_webenginecontextmenurequest_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineContextMenuRequest*
/// @param param1 QObject*
void q_webenginecontextmenurequest_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineContextMenuRequest*
/// @param callback void func(QWebEngineContextMenuRequest* self, QObject* param1)
void q_webenginecontextmenurequest_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineContextMenuRequest*
/// @param callback void func(QWebEngineContextMenuRequest* self, const char* objectName)
void q_webenginecontextmenurequest_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#dtor.QWebEngineContextMenuRequest)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineContextMenuRequest*
void q_webenginecontextmenurequest_delete(void* self);

/// https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#types

typedef enum {
    QTWEBENGINECORE_REFERRERPOLICY_ALWAYS = 0,
    QTWEBENGINECORE_REFERRERPOLICY_DEFAULT = 1,
    QTWEBENGINECORE_REFERRERPOLICY_NOREFERRERWHENDOWNGRADE = 2,
    QTWEBENGINECORE_REFERRERPOLICY_NEVER = 3,
    QTWEBENGINECORE_REFERRERPOLICY_ORIGIN = 4,
    QTWEBENGINECORE_REFERRERPOLICY_ORIGINWHENCROSSORIGIN = 5,
    QTWEBENGINECORE_REFERRERPOLICY_NOREFERRERWHENDOWNGRADEORIGINWHENCROSSORIGIN = 6,
    QTWEBENGINECORE_REFERRERPOLICY_SAMEORIGIN = 7,
    QTWEBENGINECORE_REFERRERPOLICY_STRICTORIGIN = 8,
    QTWEBENGINECORE_REFERRERPOLICY_LAST = 8
} QtWebEngineCore__ReferrerPolicy;

typedef enum {
    QWEBENGINECONTEXTMENUREQUEST_MEDIATYPE_MEDIATYPENONE = 0,
    QWEBENGINECONTEXTMENUREQUEST_MEDIATYPE_MEDIATYPEIMAGE = 1,
    QWEBENGINECONTEXTMENUREQUEST_MEDIATYPE_MEDIATYPEVIDEO = 2,
    QWEBENGINECONTEXTMENUREQUEST_MEDIATYPE_MEDIATYPEAUDIO = 3,
    QWEBENGINECONTEXTMENUREQUEST_MEDIATYPE_MEDIATYPECANVAS = 4,
    QWEBENGINECONTEXTMENUREQUEST_MEDIATYPE_MEDIATYPEFILE = 5,
    QWEBENGINECONTEXTMENUREQUEST_MEDIATYPE_MEDIATYPEPLUGIN = 6
} QWebEngineContextMenuRequest__MediaType;

typedef enum {
    QWEBENGINECONTEXTMENUREQUEST_MEDIAFLAG_MEDIAINERROR = 1,
    QWEBENGINECONTEXTMENUREQUEST_MEDIAFLAG_MEDIAPAUSED = 2,
    QWEBENGINECONTEXTMENUREQUEST_MEDIAFLAG_MEDIAMUTED = 4,
    QWEBENGINECONTEXTMENUREQUEST_MEDIAFLAG_MEDIALOOP = 8,
    QWEBENGINECONTEXTMENUREQUEST_MEDIAFLAG_MEDIACANSAVE = 16,
    QWEBENGINECONTEXTMENUREQUEST_MEDIAFLAG_MEDIAHASAUDIO = 32,
    QWEBENGINECONTEXTMENUREQUEST_MEDIAFLAG_MEDIACANTOGGLECONTROLS = 64,
    QWEBENGINECONTEXTMENUREQUEST_MEDIAFLAG_MEDIACONTROLS = 128,
    QWEBENGINECONTEXTMENUREQUEST_MEDIAFLAG_MEDIACANPRINT = 256,
    QWEBENGINECONTEXTMENUREQUEST_MEDIAFLAG_MEDIACANROTATE = 512
} QWebEngineContextMenuRequest__MediaFlag;

typedef enum {
    QWEBENGINECONTEXTMENUREQUEST_EDITFLAG_CANUNDO = 1,
    QWEBENGINECONTEXTMENUREQUEST_EDITFLAG_CANREDO = 2,
    QWEBENGINECONTEXTMENUREQUEST_EDITFLAG_CANCUT = 4,
    QWEBENGINECONTEXTMENUREQUEST_EDITFLAG_CANCOPY = 8,
    QWEBENGINECONTEXTMENUREQUEST_EDITFLAG_CANPASTE = 16,
    QWEBENGINECONTEXTMENUREQUEST_EDITFLAG_CANDELETE = 32,
    QWEBENGINECONTEXTMENUREQUEST_EDITFLAG_CANSELECTALL = 64,
    QWEBENGINECONTEXTMENUREQUEST_EDITFLAG_CANTRANSLATE = 128,
    QWEBENGINECONTEXTMENUREQUEST_EDITFLAG_CANEDITRICHLY = 256
} QWebEngineContextMenuRequest__EditFlag;

#endif
