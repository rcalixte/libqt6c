#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINECONTEXTMENUREQUEST_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINECONTEXTMENUREQUEST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpoint.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqurl.h"
#include "../libqvariant.h"

QMetaObject* q_webenginecontextmenurequest_meta_object(void* self);
void* q_webenginecontextmenurequest_metacast(void* self, const char* param1);
int32_t q_webenginecontextmenurequest_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_webenginecontextmenurequest_tr(const char* s);
QPoint* q_webenginecontextmenurequest_position(void* self);
const char* q_webenginecontextmenurequest_selected_text(void* self);
const char* q_webenginecontextmenurequest_link_text(void* self);
QUrl* q_webenginecontextmenurequest_link_url(void* self);
QUrl* q_webenginecontextmenurequest_media_url(void* self);
int64_t q_webenginecontextmenurequest_media_type(void* self);
bool q_webenginecontextmenurequest_is_content_editable(void* self);
const char* q_webenginecontextmenurequest_misspelled_word(void* self);
const char** q_webenginecontextmenurequest_spell_checker_suggestions(void* self);
bool q_webenginecontextmenurequest_is_accepted(void* self);
void q_webenginecontextmenurequest_set_accepted(void* self, bool accepted);
int64_t q_webenginecontextmenurequest_media_flags(void* self);
int64_t q_webenginecontextmenurequest_edit_flags(void* self);
const char* q_webenginecontextmenurequest_tr2(const char* s, const char* c);
const char* q_webenginecontextmenurequest_tr3(const char* s, const char* c, int n);
bool q_webenginecontextmenurequest_event(void* self, void* event);
bool q_webenginecontextmenurequest_event_filter(void* self, void* watched, void* event);
const char* q_webenginecontextmenurequest_object_name(void* self);
void q_webenginecontextmenurequest_set_object_name(void* self, const char* name);
bool q_webenginecontextmenurequest_is_widget_type(void* self);
bool q_webenginecontextmenurequest_is_window_type(void* self);
bool q_webenginecontextmenurequest_is_quick_item_type(void* self);
bool q_webenginecontextmenurequest_signals_blocked(void* self);
bool q_webenginecontextmenurequest_block_signals(void* self, bool b);
QThread* q_webenginecontextmenurequest_thread(void* self);
void q_webenginecontextmenurequest_move_to_thread(void* self, void* thread);
int32_t q_webenginecontextmenurequest_start_timer(void* self, int interval);
void q_webenginecontextmenurequest_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_webenginecontextmenurequest_children(void* self);
void q_webenginecontextmenurequest_set_parent(void* self, void* parent);
void q_webenginecontextmenurequest_install_event_filter(void* self, void* filterObj);
void q_webenginecontextmenurequest_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_webenginecontextmenurequest_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_webenginecontextmenurequest_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_webenginecontextmenurequest_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_webenginecontextmenurequest_disconnect_with_q_meta_object_connection(void* param1);
void q_webenginecontextmenurequest_dump_object_tree(void* self);
void q_webenginecontextmenurequest_dump_object_info(void* self);
bool q_webenginecontextmenurequest_set_property(void* self, const char* name, void* value);
QVariant* q_webenginecontextmenurequest_property(void* self, const char* name);
const char** q_webenginecontextmenurequest_dynamic_property_names(void* self);
QBindingStorage* q_webenginecontextmenurequest_binding_storage(void* self);
QBindingStorage* q_webenginecontextmenurequest_binding_storage2(void* self);
void q_webenginecontextmenurequest_destroyed(void* self);
void q_webenginecontextmenurequest_on_destroyed(void* self, void (*slot)(void*));
QObject* q_webenginecontextmenurequest_parent(void* self);
bool q_webenginecontextmenurequest_inherits(void* self, const char* classname);
void q_webenginecontextmenurequest_delete_later(void* self);
int32_t q_webenginecontextmenurequest_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_webenginecontextmenurequest_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_webenginecontextmenurequest_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_webenginecontextmenurequest_destroyed1(void* self, void* param1);
void q_webenginecontextmenurequest_on_destroyed1(void* self, void (*slot)(void*, void*));
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
