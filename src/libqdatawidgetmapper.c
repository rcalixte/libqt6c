#include "libqabstractitemdelegate.hpp"
#include "libqabstractitemmodel.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqcoreevent.hpp"
#include "libqdatawidgetmapper.hpp"
#include "libqdatawidgetmapper.h"

/// https://doc.qt.io/qt-6/qdatawidgetmapper.html

/// q_datawidgetmapper_new constructs a new QDataWidgetMapper object.
///
///
QDataWidgetMapper* q_datawidgetmapper_new() {
    return QDataWidgetMapper_new();
}

/// q_datawidgetmapper_new2 constructs a new QDataWidgetMapper object.
///
/// ``` QObject* parent ```
QDataWidgetMapper* q_datawidgetmapper_new2(void* parent) {
    return QDataWidgetMapper_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QDataWidgetMapper* self ```
QMetaObject* q_datawidgetmapper_meta_object(void* self) {
    return QDataWidgetMapper_MetaObject((QDataWidgetMapper*)self);
}

/// ``` QDataWidgetMapper* self, const char* param1 ```
void* q_datawidgetmapper_metacast(void* self, const char* param1) {
    return QDataWidgetMapper_Metacast((QDataWidgetMapper*)self, param1);
}

/// ``` QDataWidgetMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_datawidgetmapper_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QDataWidgetMapper_Metacall((QDataWidgetMapper*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QDataWidgetMapper* self, int32_t (*slot)(QDataWidgetMapper*, enum QMetaObject__Call, int, void*) ```
void q_datawidgetmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QDataWidgetMapper_OnMetacall((QDataWidgetMapper*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDataWidgetMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_datawidgetmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QDataWidgetMapper_QBaseMetacall((QDataWidgetMapper*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_datawidgetmapper_tr(const char* s) {
    libqt_string _str = QDataWidgetMapper_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setModel)
///
/// ``` QDataWidgetMapper* self, QAbstractItemModel* model ```
void q_datawidgetmapper_set_model(void* self, void* model) {
    QDataWidgetMapper_SetModel((QDataWidgetMapper*)self, (QAbstractItemModel*)model);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#model)
///
/// ``` QDataWidgetMapper* self ```
QAbstractItemModel* q_datawidgetmapper_model(void* self) {
    return QDataWidgetMapper_Model((QDataWidgetMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setItemDelegate)
///
/// ``` QDataWidgetMapper* self, QAbstractItemDelegate* delegate ```
void q_datawidgetmapper_set_item_delegate(void* self, void* delegate) {
    QDataWidgetMapper_SetItemDelegate((QDataWidgetMapper*)self, (QAbstractItemDelegate*)delegate);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#itemDelegate)
///
/// ``` QDataWidgetMapper* self ```
QAbstractItemDelegate* q_datawidgetmapper_item_delegate(void* self) {
    return QDataWidgetMapper_ItemDelegate((QDataWidgetMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setRootIndex)
///
/// ``` QDataWidgetMapper* self, QModelIndex* index ```
void q_datawidgetmapper_set_root_index(void* self, void* index) {
    QDataWidgetMapper_SetRootIndex((QDataWidgetMapper*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#rootIndex)
///
/// ``` QDataWidgetMapper* self ```
QModelIndex* q_datawidgetmapper_root_index(void* self) {
    return QDataWidgetMapper_RootIndex((QDataWidgetMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setOrientation)
///
/// ``` QDataWidgetMapper* self, enum Qt__Orientation aOrientation ```
void q_datawidgetmapper_set_orientation(void* self, int64_t aOrientation) {
    QDataWidgetMapper_SetOrientation((QDataWidgetMapper*)self, aOrientation);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#orientation)
///
/// ``` QDataWidgetMapper* self ```
int64_t q_datawidgetmapper_orientation(void* self) {
    return QDataWidgetMapper_Orientation((QDataWidgetMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setSubmitPolicy)
///
/// ``` QDataWidgetMapper* self, enum QDataWidgetMapper__SubmitPolicy policy ```
void q_datawidgetmapper_set_submit_policy(void* self, int64_t policy) {
    QDataWidgetMapper_SetSubmitPolicy((QDataWidgetMapper*)self, policy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#submitPolicy)
///
/// ``` QDataWidgetMapper* self ```
int64_t q_datawidgetmapper_submit_policy(void* self) {
    return QDataWidgetMapper_SubmitPolicy((QDataWidgetMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#addMapping)
///
/// ``` QDataWidgetMapper* self, QWidget* widget, int section ```
void q_datawidgetmapper_add_mapping(void* self, void* widget, int section) {
    QDataWidgetMapper_AddMapping((QDataWidgetMapper*)self, (QWidget*)widget, section);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#addMapping)
///
/// ``` QDataWidgetMapper* self, QWidget* widget, int section, const char* propertyName ```
void q_datawidgetmapper_add_mapping2(void* self, void* widget, int section, const char* propertyName) {
    QDataWidgetMapper_AddMapping2((QDataWidgetMapper*)self, (QWidget*)widget, section, qstring(propertyName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#removeMapping)
///
/// ``` QDataWidgetMapper* self, QWidget* widget ```
void q_datawidgetmapper_remove_mapping(void* self, void* widget) {
    QDataWidgetMapper_RemoveMapping((QDataWidgetMapper*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#mappedSection)
///
/// ``` QDataWidgetMapper* self, QWidget* widget ```
int32_t q_datawidgetmapper_mapped_section(void* self, void* widget) {
    return QDataWidgetMapper_MappedSection((QDataWidgetMapper*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#mappedPropertyName)
///
/// ``` QDataWidgetMapper* self, QWidget* widget ```
char* q_datawidgetmapper_mapped_property_name(void* self, void* widget) {
    libqt_string _str = QDataWidgetMapper_MappedPropertyName((QDataWidgetMapper*)self, (QWidget*)widget);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#mappedWidgetAt)
///
/// ``` QDataWidgetMapper* self, int section ```
QWidget* q_datawidgetmapper_mapped_widget_at(void* self, int section) {
    return QDataWidgetMapper_MappedWidgetAt((QDataWidgetMapper*)self, section);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#clearMapping)
///
/// ``` QDataWidgetMapper* self ```
void q_datawidgetmapper_clear_mapping(void* self) {
    QDataWidgetMapper_ClearMapping((QDataWidgetMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#currentIndex)
///
/// ``` QDataWidgetMapper* self ```
int32_t q_datawidgetmapper_current_index(void* self) {
    return QDataWidgetMapper_CurrentIndex((QDataWidgetMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#revert)
///
/// ``` QDataWidgetMapper* self ```
void q_datawidgetmapper_revert(void* self) {
    QDataWidgetMapper_Revert((QDataWidgetMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#submit)
///
/// ``` QDataWidgetMapper* self ```
bool q_datawidgetmapper_submit(void* self) {
    return QDataWidgetMapper_Submit((QDataWidgetMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#toFirst)
///
/// ``` QDataWidgetMapper* self ```
void q_datawidgetmapper_to_first(void* self) {
    QDataWidgetMapper_ToFirst((QDataWidgetMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#toLast)
///
/// ``` QDataWidgetMapper* self ```
void q_datawidgetmapper_to_last(void* self) {
    QDataWidgetMapper_ToLast((QDataWidgetMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#toNext)
///
/// ``` QDataWidgetMapper* self ```
void q_datawidgetmapper_to_next(void* self) {
    QDataWidgetMapper_ToNext((QDataWidgetMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#toPrevious)
///
/// ``` QDataWidgetMapper* self ```
void q_datawidgetmapper_to_previous(void* self) {
    QDataWidgetMapper_ToPrevious((QDataWidgetMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setCurrentIndex)
///
/// ``` QDataWidgetMapper* self, int index ```
void q_datawidgetmapper_set_current_index(void* self, int index) {
    QDataWidgetMapper_SetCurrentIndex((QDataWidgetMapper*)self, index);
}

/// Allows for overriding the related default method
///
/// ``` QDataWidgetMapper* self, void (*slot)(QDataWidgetMapper*, int) ```
void q_datawidgetmapper_on_set_current_index(void* self, void (*slot)(void*, int)) {
    QDataWidgetMapper_OnSetCurrentIndex((QDataWidgetMapper*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDataWidgetMapper* self, int index ```
void q_datawidgetmapper_qbase_set_current_index(void* self, int index) {
    QDataWidgetMapper_QBaseSetCurrentIndex((QDataWidgetMapper*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setCurrentModelIndex)
///
/// ``` QDataWidgetMapper* self, QModelIndex* index ```
void q_datawidgetmapper_set_current_model_index(void* self, void* index) {
    QDataWidgetMapper_SetCurrentModelIndex((QDataWidgetMapper*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#currentIndexChanged)
///
/// ``` QDataWidgetMapper* self, int index ```
void q_datawidgetmapper_current_index_changed(void* self, int index) {
    QDataWidgetMapper_CurrentIndexChanged((QDataWidgetMapper*)self, index);
}

/// ``` QDataWidgetMapper* self, void (*slot)(QDataWidgetMapper*, int) ```
void q_datawidgetmapper_on_current_index_changed(void* self, void (*slot)(void*, int)) {
    QDataWidgetMapper_Connect_CurrentIndexChanged((QDataWidgetMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_datawidgetmapper_tr2(const char* s, const char* c) {
    libqt_string _str = QDataWidgetMapper_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_datawidgetmapper_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QDataWidgetMapper_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QDataWidgetMapper* self ```
const char* q_datawidgetmapper_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QDataWidgetMapper* self, const char* name ```
void q_datawidgetmapper_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QDataWidgetMapper* self ```
bool q_datawidgetmapper_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QDataWidgetMapper* self ```
bool q_datawidgetmapper_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QDataWidgetMapper* self ```
bool q_datawidgetmapper_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QDataWidgetMapper* self ```
bool q_datawidgetmapper_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QDataWidgetMapper* self, bool b ```
bool q_datawidgetmapper_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QDataWidgetMapper* self ```
QThread* q_datawidgetmapper_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QDataWidgetMapper* self, QThread* thread ```
void q_datawidgetmapper_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDataWidgetMapper* self, int interval ```
int32_t q_datawidgetmapper_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QDataWidgetMapper* self, int id ```
void q_datawidgetmapper_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QDataWidgetMapper* self ```
libqt_list /* of QObject* */ q_datawidgetmapper_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QDataWidgetMapper* self, QObject* parent ```
void q_datawidgetmapper_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QDataWidgetMapper* self, QObject* filterObj ```
void q_datawidgetmapper_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QDataWidgetMapper* self, QObject* obj ```
void q_datawidgetmapper_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_datawidgetmapper_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDataWidgetMapper* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_datawidgetmapper_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_datawidgetmapper_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_datawidgetmapper_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QDataWidgetMapper* self ```
void q_datawidgetmapper_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QDataWidgetMapper* self ```
void q_datawidgetmapper_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QDataWidgetMapper* self, const char* name, QVariant* value ```
bool q_datawidgetmapper_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QDataWidgetMapper* self, const char* name ```
QVariant* q_datawidgetmapper_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QDataWidgetMapper* self ```
const char** q_datawidgetmapper_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDataWidgetMapper* self ```
QBindingStorage* q_datawidgetmapper_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDataWidgetMapper* self ```
QBindingStorage* q_datawidgetmapper_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDataWidgetMapper* self ```
void q_datawidgetmapper_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QDataWidgetMapper* self, void (*slot)(QObject*) ```
void q_datawidgetmapper_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QDataWidgetMapper* self ```
QObject* q_datawidgetmapper_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QDataWidgetMapper* self, const char* classname ```
bool q_datawidgetmapper_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QDataWidgetMapper* self ```
void q_datawidgetmapper_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDataWidgetMapper* self, int interval, enum Qt__TimerType timerType ```
int32_t q_datawidgetmapper_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_datawidgetmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDataWidgetMapper* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_datawidgetmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDataWidgetMapper* self, QObject* param1 ```
void q_datawidgetmapper_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QDataWidgetMapper* self, void (*slot)(QObject*, QObject*) ```
void q_datawidgetmapper_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDataWidgetMapper* self, QEvent* event ```
bool q_datawidgetmapper_event(void* self, void* event) {
    return QDataWidgetMapper_Event((QDataWidgetMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, QEvent* event ```
bool q_datawidgetmapper_qbase_event(void* self, void* event) {
    return QDataWidgetMapper_QBaseEvent((QDataWidgetMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, bool (*slot)(QDataWidgetMapper*, QEvent*) ```
void q_datawidgetmapper_on_event(void* self, bool (*slot)(void*, void*)) {
    QDataWidgetMapper_OnEvent((QDataWidgetMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDataWidgetMapper* self, QObject* watched, QEvent* event ```
bool q_datawidgetmapper_event_filter(void* self, void* watched, void* event) {
    return QDataWidgetMapper_EventFilter((QDataWidgetMapper*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, QObject* watched, QEvent* event ```
bool q_datawidgetmapper_qbase_event_filter(void* self, void* watched, void* event) {
    return QDataWidgetMapper_QBaseEventFilter((QDataWidgetMapper*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, bool (*slot)(QDataWidgetMapper*, QObject*, QEvent*) ```
void q_datawidgetmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QDataWidgetMapper_OnEventFilter((QDataWidgetMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDataWidgetMapper* self, QTimerEvent* event ```
void q_datawidgetmapper_timer_event(void* self, void* event) {
    QDataWidgetMapper_TimerEvent((QDataWidgetMapper*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, QTimerEvent* event ```
void q_datawidgetmapper_qbase_timer_event(void* self, void* event) {
    QDataWidgetMapper_QBaseTimerEvent((QDataWidgetMapper*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, void (*slot)(QDataWidgetMapper*, QTimerEvent*) ```
void q_datawidgetmapper_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QDataWidgetMapper_OnTimerEvent((QDataWidgetMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDataWidgetMapper* self, QChildEvent* event ```
void q_datawidgetmapper_child_event(void* self, void* event) {
    QDataWidgetMapper_ChildEvent((QDataWidgetMapper*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, QChildEvent* event ```
void q_datawidgetmapper_qbase_child_event(void* self, void* event) {
    QDataWidgetMapper_QBaseChildEvent((QDataWidgetMapper*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, void (*slot)(QDataWidgetMapper*, QChildEvent*) ```
void q_datawidgetmapper_on_child_event(void* self, void (*slot)(void*, void*)) {
    QDataWidgetMapper_OnChildEvent((QDataWidgetMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDataWidgetMapper* self, QEvent* event ```
void q_datawidgetmapper_custom_event(void* self, void* event) {
    QDataWidgetMapper_CustomEvent((QDataWidgetMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, QEvent* event ```
void q_datawidgetmapper_qbase_custom_event(void* self, void* event) {
    QDataWidgetMapper_QBaseCustomEvent((QDataWidgetMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, void (*slot)(QDataWidgetMapper*, QEvent*) ```
void q_datawidgetmapper_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QDataWidgetMapper_OnCustomEvent((QDataWidgetMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDataWidgetMapper* self, QMetaMethod* signal ```
void q_datawidgetmapper_connect_notify(void* self, void* signal) {
    QDataWidgetMapper_ConnectNotify((QDataWidgetMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, QMetaMethod* signal ```
void q_datawidgetmapper_qbase_connect_notify(void* self, void* signal) {
    QDataWidgetMapper_QBaseConnectNotify((QDataWidgetMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, void (*slot)(QDataWidgetMapper*, QMetaMethod*) ```
void q_datawidgetmapper_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QDataWidgetMapper_OnConnectNotify((QDataWidgetMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDataWidgetMapper* self, QMetaMethod* signal ```
void q_datawidgetmapper_disconnect_notify(void* self, void* signal) {
    QDataWidgetMapper_DisconnectNotify((QDataWidgetMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, QMetaMethod* signal ```
void q_datawidgetmapper_qbase_disconnect_notify(void* self, void* signal) {
    QDataWidgetMapper_QBaseDisconnectNotify((QDataWidgetMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, void (*slot)(QDataWidgetMapper*, QMetaMethod*) ```
void q_datawidgetmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QDataWidgetMapper_OnDisconnectNotify((QDataWidgetMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDataWidgetMapper* self ```
QObject* q_datawidgetmapper_sender(void* self) {
    return QDataWidgetMapper_Sender((QDataWidgetMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDataWidgetMapper* self ```
QObject* q_datawidgetmapper_qbase_sender(void* self) {
    return QDataWidgetMapper_QBaseSender((QDataWidgetMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, QObject* (*slot)() ```
void q_datawidgetmapper_on_sender(void* self, QObject* (*slot)()) {
    QDataWidgetMapper_OnSender((QDataWidgetMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDataWidgetMapper* self ```
int32_t q_datawidgetmapper_sender_signal_index(void* self) {
    return QDataWidgetMapper_SenderSignalIndex((QDataWidgetMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDataWidgetMapper* self ```
int32_t q_datawidgetmapper_qbase_sender_signal_index(void* self) {
    return QDataWidgetMapper_QBaseSenderSignalIndex((QDataWidgetMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, int32_t (*slot)() ```
void q_datawidgetmapper_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QDataWidgetMapper_OnSenderSignalIndex((QDataWidgetMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDataWidgetMapper* self, const char* signal ```
int32_t q_datawidgetmapper_receivers(void* self, const char* signal) {
    return QDataWidgetMapper_Receivers((QDataWidgetMapper*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, const char* signal ```
int32_t q_datawidgetmapper_qbase_receivers(void* self, const char* signal) {
    return QDataWidgetMapper_QBaseReceivers((QDataWidgetMapper*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, int32_t (*slot)(QDataWidgetMapper*, const char*) ```
void q_datawidgetmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QDataWidgetMapper_OnReceivers((QDataWidgetMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDataWidgetMapper* self, QMetaMethod* signal ```
bool q_datawidgetmapper_is_signal_connected(void* self, void* signal) {
    return QDataWidgetMapper_IsSignalConnected((QDataWidgetMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, QMetaMethod* signal ```
bool q_datawidgetmapper_qbase_is_signal_connected(void* self, void* signal) {
    return QDataWidgetMapper_QBaseIsSignalConnected((QDataWidgetMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, bool (*slot)(QDataWidgetMapper*, QMetaMethod*) ```
void q_datawidgetmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QDataWidgetMapper_OnIsSignalConnected((QDataWidgetMapper*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QDataWidgetMapper* self ```
void q_datawidgetmapper_delete(void* self) {
    QDataWidgetMapper_Delete((QDataWidgetMapper*)(self));
}