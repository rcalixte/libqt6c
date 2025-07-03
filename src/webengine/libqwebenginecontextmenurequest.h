#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINECONTEXTMENUREQUEST_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINECONTEXTMENUREQUEST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpoint.h"
#include <string.h>
#include "../libqurl.h"

/// https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWebEngineContextMenuRequest* self ```
const QMetaObject* q_webenginecontextmenurequest_meta_object(void* self);

/// ``` QWebEngineContextMenuRequest* self, const char* param1 ```
void* q_webenginecontextmenurequest_metacast(void* self, const char* param1);

/// ``` QWebEngineContextMenuRequest* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webenginecontextmenurequest_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_webenginecontextmenurequest_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#position)
///
/// ``` QWebEngineContextMenuRequest* self ```
QPoint* q_webenginecontextmenurequest_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#selectedText)
///
/// ``` QWebEngineContextMenuRequest* self ```
const char* q_webenginecontextmenurequest_selected_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#linkText)
///
/// ``` QWebEngineContextMenuRequest* self ```
const char* q_webenginecontextmenurequest_link_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#linkUrl)
///
/// ``` QWebEngineContextMenuRequest* self ```
QUrl* q_webenginecontextmenurequest_link_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#mediaUrl)
///
/// ``` QWebEngineContextMenuRequest* self ```
QUrl* q_webenginecontextmenurequest_media_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#mediaType)
///
/// ``` QWebEngineContextMenuRequest* self ```
int64_t q_webenginecontextmenurequest_media_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#isContentEditable)
///
/// ``` QWebEngineContextMenuRequest* self ```
bool q_webenginecontextmenurequest_is_content_editable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#misspelledWord)
///
/// ``` QWebEngineContextMenuRequest* self ```
const char* q_webenginecontextmenurequest_misspelled_word(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#spellCheckerSuggestions)
///
/// ``` QWebEngineContextMenuRequest* self ```
const char** q_webenginecontextmenurequest_spell_checker_suggestions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#isAccepted)
///
/// ``` QWebEngineContextMenuRequest* self ```
bool q_webenginecontextmenurequest_is_accepted(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#setAccepted)
///
/// ``` QWebEngineContextMenuRequest* self, bool accepted ```
void q_webenginecontextmenurequest_set_accepted(void* self, bool accepted);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#mediaFlags)
///
/// ``` QWebEngineContextMenuRequest* self ```
int64_t q_webenginecontextmenurequest_media_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#editFlags)
///
/// ``` QWebEngineContextMenuRequest* self ```
int64_t q_webenginecontextmenurequest_edit_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_webenginecontextmenurequest_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_webenginecontextmenurequest_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QWebEngineContextMenuRequest* self, QEvent* event ```
bool q_webenginecontextmenurequest_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QWebEngineContextMenuRequest* self, QObject* watched, QEvent* event ```
bool q_webenginecontextmenurequest_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWebEngineContextMenuRequest* self ```
const char* q_webenginecontextmenurequest_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWebEngineContextMenuRequest* self, char* name ```
void q_webenginecontextmenurequest_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWebEngineContextMenuRequest* self ```
bool q_webenginecontextmenurequest_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWebEngineContextMenuRequest* self ```
bool q_webenginecontextmenurequest_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWebEngineContextMenuRequest* self ```
bool q_webenginecontextmenurequest_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWebEngineContextMenuRequest* self ```
bool q_webenginecontextmenurequest_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWebEngineContextMenuRequest* self, bool b ```
bool q_webenginecontextmenurequest_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWebEngineContextMenuRequest* self ```
QThread* q_webenginecontextmenurequest_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineContextMenuRequest* self, QThread* thread ```
void q_webenginecontextmenurequest_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineContextMenuRequest* self, int interval ```
int32_t q_webenginecontextmenurequest_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineContextMenuRequest* self, int id ```
void q_webenginecontextmenurequest_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWebEngineContextMenuRequest* self ```
libqt_list /* of QObject* */ q_webenginecontextmenurequest_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWebEngineContextMenuRequest* self, QObject* parent ```
void q_webenginecontextmenurequest_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWebEngineContextMenuRequest* self, QObject* filterObj ```
void q_webenginecontextmenurequest_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWebEngineContextMenuRequest* self, QObject* obj ```
void q_webenginecontextmenurequest_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_webenginecontextmenurequest_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineContextMenuRequest* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_webenginecontextmenurequest_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_webenginecontextmenurequest_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_webenginecontextmenurequest_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWebEngineContextMenuRequest* self ```
void q_webenginecontextmenurequest_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWebEngineContextMenuRequest* self ```
void q_webenginecontextmenurequest_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWebEngineContextMenuRequest* self, const char* name, QVariant* value ```
bool q_webenginecontextmenurequest_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWebEngineContextMenuRequest* self, const char* name ```
QVariant* q_webenginecontextmenurequest_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWebEngineContextMenuRequest* self ```
const char** q_webenginecontextmenurequest_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineContextMenuRequest* self ```
QBindingStorage* q_webenginecontextmenurequest_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineContextMenuRequest* self ```
const QBindingStorage* q_webenginecontextmenurequest_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineContextMenuRequest* self ```
void q_webenginecontextmenurequest_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineContextMenuRequest* self, void (*slot)(QObject*) ```
void q_webenginecontextmenurequest_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWebEngineContextMenuRequest* self ```
QObject* q_webenginecontextmenurequest_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWebEngineContextMenuRequest* self, const char* classname ```
bool q_webenginecontextmenurequest_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWebEngineContextMenuRequest* self ```
void q_webenginecontextmenurequest_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineContextMenuRequest* self, int interval, enum Qt__TimerType timerType ```
int32_t q_webenginecontextmenurequest_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginecontextmenurequest_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineContextMenuRequest* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginecontextmenurequest_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineContextMenuRequest* self, QObject* param1 ```
void q_webenginecontextmenurequest_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineContextMenuRequest* self, void (*slot)(QObject*, QObject*) ```
void q_webenginecontextmenurequest_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QWebEngineContextMenuRequest* self, void (*slot)(QObject*, const char*) ```
void q_webenginecontextmenurequest_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#dtor.QWebEngineContextMenuRequest)
///
/// Delete this object from C++ memory.
///
/// ``` QWebEngineContextMenuRequest* self ```
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
