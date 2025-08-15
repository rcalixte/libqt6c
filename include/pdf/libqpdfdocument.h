#pragma once
#ifndef SRC_PDFQT6C_LIBQPDFDOCUMENT_H
#define SRC_PDFQT6C_LIBQPDFDOCUMENT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qpdfdocument.html

/// q_pdfdocument_new constructs a new QPdfDocument object.
///
QPdfDocument* q_pdfdocument_new();

/// q_pdfdocument_new2 constructs a new QPdfDocument object.
///
/// @param parent QObject*
QPdfDocument* q_pdfdocument_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QPdfDocument*
const QMetaObject* q_pdfdocument_meta_object(void* self);

/// @param self QPdfDocument*
/// @param param1 const char*
void* q_pdfdocument_metacast(void* self, const char* param1);

/// @param self QPdfDocument*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_pdfdocument_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPdfDocument*
/// @param callback int32_t fn(QPdfDocument*, enum QMetaObject__Call, int, void*)
void q_pdfdocument_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QPdfDocument*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_pdfdocument_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_pdfdocument_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#load)
///
/// @param self QPdfDocument*
/// @param fileName const char*
///
/// @return enum QPdfDocument__Error
int64_t q_pdfdocument_load(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#status)
///
/// @param self QPdfDocument*
///
/// @return enum QPdfDocument__Status
int64_t q_pdfdocument_status(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#load)
///
/// @param self QPdfDocument*
/// @param device QIODevice*
void q_pdfdocument_load2(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#setPassword)
///
/// @param self QPdfDocument*
/// @param password const char*
void q_pdfdocument_set_password(void* self, const char* password);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#password)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPdfDocument*
const char* q_pdfdocument_password(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#metaData)
///
/// @param self QPdfDocument*
/// @param field enum QPdfDocument__MetaDataField
QVariant* q_pdfdocument_meta_data(void* self, int64_t field);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#error)
///
/// @param self QPdfDocument*
///
/// @return enum QPdfDocument__Error
int64_t q_pdfdocument_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#close)
///
/// @param self QPdfDocument*
void q_pdfdocument_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#pageCount)
///
/// @param self QPdfDocument*
int32_t q_pdfdocument_page_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#pagePointSize)
///
/// @param self QPdfDocument*
/// @param page int
QSizeF* q_pdfdocument_page_point_size(void* self, int page);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#pageLabel)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPdfDocument*
/// @param page int
const char* q_pdfdocument_page_label(void* self, int page);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#pageIndexForLabel)
///
/// @param self QPdfDocument*
/// @param label const char*
int32_t q_pdfdocument_page_index_for_label(void* self, const char* label);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#pageModel)
///
/// @param self QPdfDocument*
QAbstractListModel* q_pdfdocument_page_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#render)
///
/// @param self QPdfDocument*
/// @param page int
/// @param imageSize QSize*
QImage* q_pdfdocument_render(void* self, int page, void* imageSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#getSelection)
///
/// @param self QPdfDocument*
/// @param page int
/// @param start QPointF*
/// @param end QPointF*
QPdfSelection* q_pdfdocument_get_selection(void* self, int page, void* start, void* end);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#getSelectionAtIndex)
///
/// @param self QPdfDocument*
/// @param page int
/// @param startIndex int
/// @param maxLength int
QPdfSelection* q_pdfdocument_get_selection_at_index(void* self, int page, int startIndex, int maxLength);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#getAllText)
///
/// @param self QPdfDocument*
/// @param page int
QPdfSelection* q_pdfdocument_get_all_text(void* self, int page);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#passwordChanged)
///
/// @param self QPdfDocument*
void q_pdfdocument_password_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#passwordChanged)
///
/// @param self QPdfDocument*
/// @param callback void fn(QPdfDocument*)
void q_pdfdocument_on_password_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#passwordRequired)
///
/// @param self QPdfDocument*
void q_pdfdocument_password_required(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#passwordRequired)
///
/// @param self QPdfDocument*
/// @param callback void fn(QPdfDocument*)
void q_pdfdocument_on_password_required(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#statusChanged)
///
/// @param self QPdfDocument*
/// @param status enum QPdfDocument__Status
void q_pdfdocument_status_changed(void* self, int64_t status);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#statusChanged)
///
/// @param self QPdfDocument*
/// @param callback void fn(QPdfDocument*, enum QPdfDocument__Status)
void q_pdfdocument_on_status_changed(void* self, void (*callback)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#pageCountChanged)
///
/// @param self QPdfDocument*
/// @param pageCount int
void q_pdfdocument_page_count_changed(void* self, int pageCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#pageCountChanged)
///
/// @param self QPdfDocument*
/// @param callback void fn(QPdfDocument*, int)
void q_pdfdocument_on_page_count_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#pageModelChanged)
///
/// @param self QPdfDocument*
void q_pdfdocument_page_model_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#pageModelChanged)
///
/// @param self QPdfDocument*
/// @param callback void fn(QPdfDocument*)
void q_pdfdocument_on_page_model_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_pdfdocument_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_pdfdocument_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#render)
///
/// @param self QPdfDocument*
/// @param page int
/// @param imageSize QSize*
/// @param options QPdfDocumentRenderOptions*
QImage* q_pdfdocument_render3(void* self, int page, void* imageSize, void* options);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPdfDocument*
const char* q_pdfdocument_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPdfDocument*
/// @param name char*
void q_pdfdocument_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QPdfDocument*
bool q_pdfdocument_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QPdfDocument*
bool q_pdfdocument_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QPdfDocument*
bool q_pdfdocument_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QPdfDocument*
bool q_pdfdocument_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPdfDocument*
/// @param b bool
bool q_pdfdocument_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QPdfDocument*
QThread* q_pdfdocument_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPdfDocument*
/// @param thread QThread*
bool q_pdfdocument_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPdfDocument*
/// @param interval int
int32_t q_pdfdocument_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPdfDocument*
/// @param id int
void q_pdfdocument_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPdfDocument*
/// @param id enum Qt__TimerId
void q_pdfdocument_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QPdfDocument*
libqt_list /* of QObject* */ q_pdfdocument_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QPdfDocument*
/// @param parent QObject*
void q_pdfdocument_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPdfDocument*
/// @param filterObj QObject*
void q_pdfdocument_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPdfDocument*
/// @param obj QObject*
void q_pdfdocument_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_pdfdocument_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPdfDocument*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_pdfdocument_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_pdfdocument_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_pdfdocument_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QPdfDocument*
void q_pdfdocument_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QPdfDocument*
void q_pdfdocument_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPdfDocument*
/// @param name const char*
/// @param value QVariant*
bool q_pdfdocument_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QPdfDocument*
/// @param name const char*
QVariant* q_pdfdocument_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPdfDocument*
const char** q_pdfdocument_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPdfDocument*
QBindingStorage* q_pdfdocument_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPdfDocument*
const QBindingStorage* q_pdfdocument_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPdfDocument*
void q_pdfdocument_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPdfDocument*
/// @param callback void fn(QPdfDocument*)
void q_pdfdocument_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QPdfDocument*
QObject* q_pdfdocument_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QPdfDocument*
/// @param classname const char*
bool q_pdfdocument_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPdfDocument*
void q_pdfdocument_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPdfDocument*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_pdfdocument_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPdfDocument*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_pdfdocument_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_pdfdocument_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPdfDocument*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_pdfdocument_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPdfDocument*
/// @param param1 QObject*
void q_pdfdocument_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPdfDocument*
/// @param callback void fn(QPdfDocument*, QObject*)
void q_pdfdocument_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfDocument*
/// @param event QEvent*
bool q_pdfdocument_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfDocument*
/// @param event QEvent*
bool q_pdfdocument_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfDocument*
/// @param callback bool fn(QPdfDocument*, QEvent*)
void q_pdfdocument_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfDocument*
/// @param watched QObject*
/// @param event QEvent*
bool q_pdfdocument_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfDocument*
/// @param watched QObject*
/// @param event QEvent*
bool q_pdfdocument_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfDocument*
/// @param callback bool fn(QPdfDocument*, QObject*, QEvent*)
void q_pdfdocument_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfDocument*
/// @param event QTimerEvent*
void q_pdfdocument_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfDocument*
/// @param event QTimerEvent*
void q_pdfdocument_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfDocument*
/// @param callback void fn(QPdfDocument*, QTimerEvent*)
void q_pdfdocument_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfDocument*
/// @param event QChildEvent*
void q_pdfdocument_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfDocument*
/// @param event QChildEvent*
void q_pdfdocument_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfDocument*
/// @param callback void fn(QPdfDocument*, QChildEvent*)
void q_pdfdocument_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfDocument*
/// @param event QEvent*
void q_pdfdocument_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfDocument*
/// @param event QEvent*
void q_pdfdocument_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfDocument*
/// @param callback void fn(QPdfDocument*, QEvent*)
void q_pdfdocument_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfDocument*
/// @param signal QMetaMethod*
void q_pdfdocument_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfDocument*
/// @param signal QMetaMethod*
void q_pdfdocument_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfDocument*
/// @param callback void fn(QPdfDocument*, QMetaMethod*)
void q_pdfdocument_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfDocument*
/// @param signal QMetaMethod*
void q_pdfdocument_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfDocument*
/// @param signal QMetaMethod*
void q_pdfdocument_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfDocument*
/// @param callback void fn(QPdfDocument*, QMetaMethod*)
void q_pdfdocument_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfDocument*
QObject* q_pdfdocument_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfDocument*
QObject* q_pdfdocument_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfDocument*
/// @param callback QObject* fn()
void q_pdfdocument_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfDocument*
int32_t q_pdfdocument_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfDocument*
int32_t q_pdfdocument_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfDocument*
/// @param callback int32_t fn()
void q_pdfdocument_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfDocument*
/// @param signal const char*
int32_t q_pdfdocument_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfDocument*
/// @param signal const char*
int32_t q_pdfdocument_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfDocument*
/// @param callback int32_t fn(QPdfDocument*, const char*)
void q_pdfdocument_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfDocument*
/// @param signal QMetaMethod*
bool q_pdfdocument_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfDocument*
/// @param signal QMetaMethod*
bool q_pdfdocument_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfDocument*
/// @param callback bool fn(QPdfDocument*, QMetaMethod*)
void q_pdfdocument_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPdfDocument*
/// @param callback void fn(QPdfDocument*, const char*)
void q_pdfdocument_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#dtor.QPdfDocument)
///
/// Delete this object from C++ memory.
///
/// @param self QPdfDocument*
void q_pdfdocument_delete(void* self);

/// https://doc.qt.io/qt-6/qpdfdocument.html#types

typedef enum {
    QPDFDOCUMENT_STATUS_NULL = 0,
    QPDFDOCUMENT_STATUS_LOADING = 1,
    QPDFDOCUMENT_STATUS_READY = 2,
    QPDFDOCUMENT_STATUS_UNLOADING = 3,
    QPDFDOCUMENT_STATUS_ERROR = 4
} QPdfDocument__Status;

typedef enum {
    QPDFDOCUMENT_ERROR_NONE = 0,
    QPDFDOCUMENT_ERROR_UNKNOWN = 1,
    QPDFDOCUMENT_ERROR_DATANOTYETAVAILABLE = 2,
    QPDFDOCUMENT_ERROR_FILENOTFOUND = 3,
    QPDFDOCUMENT_ERROR_INVALIDFILEFORMAT = 4,
    QPDFDOCUMENT_ERROR_INCORRECTPASSWORD = 5,
    QPDFDOCUMENT_ERROR_UNSUPPORTEDSECURITYSCHEME = 6
} QPdfDocument__Error;

typedef enum {
    QPDFDOCUMENT_METADATAFIELD_TITLE = 0,
    QPDFDOCUMENT_METADATAFIELD_SUBJECT = 1,
    QPDFDOCUMENT_METADATAFIELD_AUTHOR = 2,
    QPDFDOCUMENT_METADATAFIELD_KEYWORDS = 3,
    QPDFDOCUMENT_METADATAFIELD_PRODUCER = 4,
    QPDFDOCUMENT_METADATAFIELD_CREATOR = 5,
    QPDFDOCUMENT_METADATAFIELD_CREATIONDATE = 6,
    QPDFDOCUMENT_METADATAFIELD_MODIFICATIONDATE = 7
} QPdfDocument__MetaDataField;

typedef enum {
    QPDFDOCUMENT_PAGEMODELROLE_LABEL = 256,
    QPDFDOCUMENT_PAGEMODELROLE_POINTSIZE = 257,
    QPDFDOCUMENT_PAGEMODELROLE_NROLES = 258
} QPdfDocument__PageModelRole;

#endif
