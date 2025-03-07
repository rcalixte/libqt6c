#include "libqabstractitemmodel.hpp"
#include "libqabstractitemview.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpainter.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqstyleoption.hpp"
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqcoreevent.hpp"
#include "libqabstractitemdelegate.hpp"
#include "libqabstractitemdelegate.h"

/// https://doc.qt.io/qt-6/qabstractitemdelegate.html

/// q_abstractitemdelegate_new constructs a new QAbstractItemDelegate object.
///
///
QAbstractItemDelegate* q_abstractitemdelegate_new() {
    return QAbstractItemDelegate_new();
}

/// q_abstractitemdelegate_new2 constructs a new QAbstractItemDelegate object.
///
/// ``` QObject* parent ```
QAbstractItemDelegate* q_abstractitemdelegate_new2(void* parent) {
    return QAbstractItemDelegate_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAbstractItemDelegate* self ```
QMetaObject* q_abstractitemdelegate_meta_object(void* self) {
    return QAbstractItemDelegate_MetaObject((QAbstractItemDelegate*)self);
}

/// ``` QAbstractItemDelegate* self, const char* param1 ```
void* q_abstractitemdelegate_metacast(void* self, const char* param1) {
    return QAbstractItemDelegate_Metacast((QAbstractItemDelegate*)self, param1);
}

/// ``` QAbstractItemDelegate* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractitemdelegate_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractItemDelegate_Metacall((QAbstractItemDelegate*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemDelegate* self, int32_t (*slot)(QAbstractItemDelegate*, enum QMetaObject__Call, int, void*) ```
void q_abstractitemdelegate_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAbstractItemDelegate_OnMetacall((QAbstractItemDelegate*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemDelegate* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractitemdelegate_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractItemDelegate_QBaseMetacall((QAbstractItemDelegate*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_abstractitemdelegate_tr(const char* s) {
    libqt_string _str = QAbstractItemDelegate_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paint)
///
/// ``` QAbstractItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index ```
void q_abstractitemdelegate_paint(void* self, void* painter, void* option, void* index) {
    QAbstractItemDelegate_Paint((QAbstractItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QPainter*, QStyleOptionViewItem*, QModelIndex*) ```
void q_abstractitemdelegate_on_paint(void* self, void (*slot)(void*, void*, void*, void*)) {
    QAbstractItemDelegate_OnPaint((QAbstractItemDelegate*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index ```
void q_abstractitemdelegate_qbase_paint(void* self, void* painter, void* option, void* index) {
    QAbstractItemDelegate_QBasePaint((QAbstractItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHint)
///
/// ``` QAbstractItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index ```
QSize* q_abstractitemdelegate_size_hint(void* self, void* option, void* index) {
    return QAbstractItemDelegate_SizeHint((QAbstractItemDelegate*)self, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemDelegate* self, QSize* (*slot)(QAbstractItemDelegate*, QStyleOptionViewItem*, QModelIndex*) ```
void q_abstractitemdelegate_on_size_hint(void* self, QSize* (*slot)(void*, void*, void*)) {
    QAbstractItemDelegate_OnSizeHint((QAbstractItemDelegate*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index ```
QSize* q_abstractitemdelegate_qbase_size_hint(void* self, void* option, void* index) {
    return QAbstractItemDelegate_QBaseSizeHint((QAbstractItemDelegate*)self, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#createEditor)
///
/// ``` QAbstractItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index ```
QWidget* q_abstractitemdelegate_create_editor(void* self, void* parent, void* option, void* index) {
    return QAbstractItemDelegate_CreateEditor((QAbstractItemDelegate*)self, (QWidget*)parent, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemDelegate* self, QWidget* (*slot)(QAbstractItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*) ```
void q_abstractitemdelegate_on_create_editor(void* self, QWidget* (*slot)(void*, void*, void*, void*)) {
    QAbstractItemDelegate_OnCreateEditor((QAbstractItemDelegate*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index ```
QWidget* q_abstractitemdelegate_qbase_create_editor(void* self, void* parent, void* option, void* index) {
    return QAbstractItemDelegate_QBaseCreateEditor((QAbstractItemDelegate*)self, (QWidget*)parent, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// ``` QAbstractItemDelegate* self, QWidget* editor, QModelIndex* index ```
void q_abstractitemdelegate_destroy_editor(void* self, void* editor, void* index) {
    QAbstractItemDelegate_DestroyEditor((QAbstractItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QWidget*, QModelIndex*) ```
void q_abstractitemdelegate_on_destroy_editor(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractItemDelegate_OnDestroyEditor((QAbstractItemDelegate*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemDelegate* self, QWidget* editor, QModelIndex* index ```
void q_abstractitemdelegate_qbase_destroy_editor(void* self, void* editor, void* index) {
    QAbstractItemDelegate_QBaseDestroyEditor((QAbstractItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setEditorData)
///
/// ``` QAbstractItemDelegate* self, QWidget* editor, QModelIndex* index ```
void q_abstractitemdelegate_set_editor_data(void* self, void* editor, void* index) {
    QAbstractItemDelegate_SetEditorData((QAbstractItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QWidget*, QModelIndex*) ```
void q_abstractitemdelegate_on_set_editor_data(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractItemDelegate_OnSetEditorData((QAbstractItemDelegate*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemDelegate* self, QWidget* editor, QModelIndex* index ```
void q_abstractitemdelegate_qbase_set_editor_data(void* self, void* editor, void* index) {
    QAbstractItemDelegate_QBaseSetEditorData((QAbstractItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setModelData)
///
/// ``` QAbstractItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index ```
void q_abstractitemdelegate_set_model_data(void* self, void* editor, void* model, void* index) {
    QAbstractItemDelegate_SetModelData((QAbstractItemDelegate*)self, (QWidget*)editor, (QAbstractItemModel*)model, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QWidget*, QAbstractItemModel*, QModelIndex*) ```
void q_abstractitemdelegate_on_set_model_data(void* self, void (*slot)(void*, void*, void*, void*)) {
    QAbstractItemDelegate_OnSetModelData((QAbstractItemDelegate*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index ```
void q_abstractitemdelegate_qbase_set_model_data(void* self, void* editor, void* model, void* index) {
    QAbstractItemDelegate_QBaseSetModelData((QAbstractItemDelegate*)self, (QWidget*)editor, (QAbstractItemModel*)model, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#updateEditorGeometry)
///
/// ``` QAbstractItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index ```
void q_abstractitemdelegate_update_editor_geometry(void* self, void* editor, void* option, void* index) {
    QAbstractItemDelegate_UpdateEditorGeometry((QAbstractItemDelegate*)self, (QWidget*)editor, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*) ```
void q_abstractitemdelegate_on_update_editor_geometry(void* self, void (*slot)(void*, void*, void*, void*)) {
    QAbstractItemDelegate_OnUpdateEditorGeometry((QAbstractItemDelegate*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index ```
void q_abstractitemdelegate_qbase_update_editor_geometry(void* self, void* editor, void* option, void* index) {
    QAbstractItemDelegate_QBaseUpdateEditorGeometry((QAbstractItemDelegate*)self, (QWidget*)editor, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#editorEvent)
///
/// ``` QAbstractItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index ```
bool q_abstractitemdelegate_editor_event(void* self, void* event, void* model, void* option, void* index) {
    return QAbstractItemDelegate_EditorEvent((QAbstractItemDelegate*)self, (QEvent*)event, (QAbstractItemModel*)model, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemDelegate* self, bool (*slot)(QAbstractItemDelegate*, QEvent*, QAbstractItemModel*, QStyleOptionViewItem*, QModelIndex*) ```
void q_abstractitemdelegate_on_editor_event(void* self, bool (*slot)(void*, void*, void*, void*, void*)) {
    QAbstractItemDelegate_OnEditorEvent((QAbstractItemDelegate*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index ```
bool q_abstractitemdelegate_qbase_editor_event(void* self, void* event, void* model, void* option, void* index) {
    return QAbstractItemDelegate_QBaseEditorEvent((QAbstractItemDelegate*)self, (QEvent*)event, (QAbstractItemModel*)model, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
///
/// ``` QAbstractItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index ```
bool q_abstractitemdelegate_help_event(void* self, void* event, void* view, void* option, void* index) {
    return QAbstractItemDelegate_HelpEvent((QAbstractItemDelegate*)self, (QHelpEvent*)event, (QAbstractItemView*)view, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemDelegate* self, bool (*slot)(QAbstractItemDelegate*, QHelpEvent*, QAbstractItemView*, QStyleOptionViewItem*, QModelIndex*) ```
void q_abstractitemdelegate_on_help_event(void* self, bool (*slot)(void*, void*, void*, void*, void*)) {
    QAbstractItemDelegate_OnHelpEvent((QAbstractItemDelegate*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index ```
bool q_abstractitemdelegate_qbase_help_event(void* self, void* event, void* view, void* option, void* index) {
    return QAbstractItemDelegate_QBaseHelpEvent((QAbstractItemDelegate*)self, (QHelpEvent*)event, (QAbstractItemView*)view, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// ``` QAbstractItemDelegate* self ```
libqt_list /* of int */ q_abstractitemdelegate_painting_roles(void* self) {
    libqt_list _arr = QAbstractItemDelegate_PaintingRoles((QAbstractItemDelegate*)self);
    return _arr;
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemDelegate* self, libqt_list /* of int */ (*slot)() ```
void q_abstractitemdelegate_on_painting_roles(void* self, libqt_list /* of int */ (*slot)()) {
    QAbstractItemDelegate_OnPaintingRoles((QAbstractItemDelegate*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemDelegate* self ```
libqt_list /* of int */ q_abstractitemdelegate_qbase_painting_roles(void* self) {
    libqt_list _arr = QAbstractItemDelegate_QBasePaintingRoles((QAbstractItemDelegate*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
///
/// ``` QAbstractItemDelegate* self, QWidget* editor ```
void q_abstractitemdelegate_commit_data(void* self, void* editor) {
    QAbstractItemDelegate_CommitData((QAbstractItemDelegate*)self, (QWidget*)editor);
}

/// ``` QAbstractItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QWidget*) ```
void q_abstractitemdelegate_on_commit_data(void* self, void (*slot)(void*, void*)) {
    QAbstractItemDelegate_Connect_CommitData((QAbstractItemDelegate*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// ``` QAbstractItemDelegate* self, QWidget* editor ```
void q_abstractitemdelegate_close_editor(void* self, void* editor) {
    QAbstractItemDelegate_CloseEditor((QAbstractItemDelegate*)self, (QWidget*)editor);
}

/// ``` QAbstractItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QWidget*) ```
void q_abstractitemdelegate_on_close_editor(void* self, void (*slot)(void*, void*)) {
    QAbstractItemDelegate_Connect_CloseEditor((QAbstractItemDelegate*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
///
/// ``` QAbstractItemDelegate* self, QModelIndex* param1 ```
void q_abstractitemdelegate_size_hint_changed(void* self, void* param1) {
    QAbstractItemDelegate_SizeHintChanged((QAbstractItemDelegate*)self, (QModelIndex*)param1);
}

/// ``` QAbstractItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QModelIndex*) ```
void q_abstractitemdelegate_on_size_hint_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractItemDelegate_Connect_SizeHintChanged((QAbstractItemDelegate*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_abstractitemdelegate_tr2(const char* s, const char* c) {
    libqt_string _str = QAbstractItemDelegate_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_abstractitemdelegate_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAbstractItemDelegate_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// ``` QAbstractItemDelegate* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_abstractitemdelegate_close_editor2(void* self, void* editor, int64_t hint) {
    QAbstractItemDelegate_CloseEditor2((QAbstractItemDelegate*)self, (QWidget*)editor, hint);
}

/// ``` QAbstractItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QWidget*, enum QAbstractItemDelegate__EndEditHint) ```
void q_abstractitemdelegate_on_close_editor2(void* self, void (*slot)(void*, void*, int64_t)) {
    QAbstractItemDelegate_Connect_CloseEditor2((QAbstractItemDelegate*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAbstractItemDelegate* self ```
const char* q_abstractitemdelegate_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAbstractItemDelegate* self, const char* name ```
void q_abstractitemdelegate_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAbstractItemDelegate* self ```
bool q_abstractitemdelegate_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAbstractItemDelegate* self ```
bool q_abstractitemdelegate_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAbstractItemDelegate* self ```
bool q_abstractitemdelegate_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAbstractItemDelegate* self ```
bool q_abstractitemdelegate_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAbstractItemDelegate* self, bool b ```
bool q_abstractitemdelegate_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAbstractItemDelegate* self ```
QThread* q_abstractitemdelegate_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractItemDelegate* self, QThread* thread ```
void q_abstractitemdelegate_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractItemDelegate* self, int interval ```
int32_t q_abstractitemdelegate_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractItemDelegate* self, int id ```
void q_abstractitemdelegate_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAbstractItemDelegate* self ```
libqt_list /* of QObject* */ q_abstractitemdelegate_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAbstractItemDelegate* self, QObject* parent ```
void q_abstractitemdelegate_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAbstractItemDelegate* self, QObject* filterObj ```
void q_abstractitemdelegate_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAbstractItemDelegate* self, QObject* obj ```
void q_abstractitemdelegate_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_abstractitemdelegate_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractItemDelegate* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_abstractitemdelegate_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_abstractitemdelegate_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_abstractitemdelegate_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAbstractItemDelegate* self ```
void q_abstractitemdelegate_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAbstractItemDelegate* self ```
void q_abstractitemdelegate_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAbstractItemDelegate* self, const char* name, QVariant* value ```
bool q_abstractitemdelegate_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAbstractItemDelegate* self, const char* name ```
QVariant* q_abstractitemdelegate_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAbstractItemDelegate* self ```
const char** q_abstractitemdelegate_dynamic_property_names(void* self) {
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
/// ``` QAbstractItemDelegate* self ```
QBindingStorage* q_abstractitemdelegate_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractItemDelegate* self ```
QBindingStorage* q_abstractitemdelegate_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractItemDelegate* self ```
void q_abstractitemdelegate_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QAbstractItemDelegate* self, void (*slot)(QObject*) ```
void q_abstractitemdelegate_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAbstractItemDelegate* self ```
QObject* q_abstractitemdelegate_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAbstractItemDelegate* self, const char* classname ```
bool q_abstractitemdelegate_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAbstractItemDelegate* self ```
void q_abstractitemdelegate_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractItemDelegate* self, int interval, enum Qt__TimerType timerType ```
int32_t q_abstractitemdelegate_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractitemdelegate_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractItemDelegate* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractitemdelegate_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractItemDelegate* self, QObject* param1 ```
void q_abstractitemdelegate_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QAbstractItemDelegate* self, void (*slot)(QObject*, QObject*) ```
void q_abstractitemdelegate_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QEvent* event ```
bool q_abstractitemdelegate_event(void* self, void* event) {
    return QAbstractItemDelegate_Event((QAbstractItemDelegate*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QEvent* event ```
bool q_abstractitemdelegate_qbase_event(void* self, void* event) {
    return QAbstractItemDelegate_QBaseEvent((QAbstractItemDelegate*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, bool (*slot)(QAbstractItemDelegate*, QEvent*) ```
void q_abstractitemdelegate_on_event(void* self, bool (*slot)(void*, void*)) {
    QAbstractItemDelegate_OnEvent((QAbstractItemDelegate*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QObject* watched, QEvent* event ```
bool q_abstractitemdelegate_event_filter(void* self, void* watched, void* event) {
    return QAbstractItemDelegate_EventFilter((QAbstractItemDelegate*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QObject* watched, QEvent* event ```
bool q_abstractitemdelegate_qbase_event_filter(void* self, void* watched, void* event) {
    return QAbstractItemDelegate_QBaseEventFilter((QAbstractItemDelegate*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, bool (*slot)(QAbstractItemDelegate*, QObject*, QEvent*) ```
void q_abstractitemdelegate_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAbstractItemDelegate_OnEventFilter((QAbstractItemDelegate*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QTimerEvent* event ```
void q_abstractitemdelegate_timer_event(void* self, void* event) {
    QAbstractItemDelegate_TimerEvent((QAbstractItemDelegate*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QTimerEvent* event ```
void q_abstractitemdelegate_qbase_timer_event(void* self, void* event) {
    QAbstractItemDelegate_QBaseTimerEvent((QAbstractItemDelegate*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QTimerEvent*) ```
void q_abstractitemdelegate_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemDelegate_OnTimerEvent((QAbstractItemDelegate*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QChildEvent* event ```
void q_abstractitemdelegate_child_event(void* self, void* event) {
    QAbstractItemDelegate_ChildEvent((QAbstractItemDelegate*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QChildEvent* event ```
void q_abstractitemdelegate_qbase_child_event(void* self, void* event) {
    QAbstractItemDelegate_QBaseChildEvent((QAbstractItemDelegate*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QChildEvent*) ```
void q_abstractitemdelegate_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemDelegate_OnChildEvent((QAbstractItemDelegate*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QEvent* event ```
void q_abstractitemdelegate_custom_event(void* self, void* event) {
    QAbstractItemDelegate_CustomEvent((QAbstractItemDelegate*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QEvent* event ```
void q_abstractitemdelegate_qbase_custom_event(void* self, void* event) {
    QAbstractItemDelegate_QBaseCustomEvent((QAbstractItemDelegate*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QEvent*) ```
void q_abstractitemdelegate_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemDelegate_OnCustomEvent((QAbstractItemDelegate*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QMetaMethod* signal ```
void q_abstractitemdelegate_connect_notify(void* self, void* signal) {
    QAbstractItemDelegate_ConnectNotify((QAbstractItemDelegate*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QMetaMethod* signal ```
void q_abstractitemdelegate_qbase_connect_notify(void* self, void* signal) {
    QAbstractItemDelegate_QBaseConnectNotify((QAbstractItemDelegate*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QMetaMethod*) ```
void q_abstractitemdelegate_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractItemDelegate_OnConnectNotify((QAbstractItemDelegate*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QMetaMethod* signal ```
void q_abstractitemdelegate_disconnect_notify(void* self, void* signal) {
    QAbstractItemDelegate_DisconnectNotify((QAbstractItemDelegate*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QMetaMethod* signal ```
void q_abstractitemdelegate_qbase_disconnect_notify(void* self, void* signal) {
    QAbstractItemDelegate_QBaseDisconnectNotify((QAbstractItemDelegate*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QMetaMethod*) ```
void q_abstractitemdelegate_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractItemDelegate_OnDisconnectNotify((QAbstractItemDelegate*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemDelegate* self ```
QObject* q_abstractitemdelegate_sender(void* self) {
    return QAbstractItemDelegate_Sender((QAbstractItemDelegate*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self ```
QObject* q_abstractitemdelegate_qbase_sender(void* self) {
    return QAbstractItemDelegate_QBaseSender((QAbstractItemDelegate*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QObject* (*slot)() ```
void q_abstractitemdelegate_on_sender(void* self, QObject* (*slot)()) {
    QAbstractItemDelegate_OnSender((QAbstractItemDelegate*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemDelegate* self ```
int32_t q_abstractitemdelegate_sender_signal_index(void* self) {
    return QAbstractItemDelegate_SenderSignalIndex((QAbstractItemDelegate*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self ```
int32_t q_abstractitemdelegate_qbase_sender_signal_index(void* self) {
    return QAbstractItemDelegate_QBaseSenderSignalIndex((QAbstractItemDelegate*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, int32_t (*slot)() ```
void q_abstractitemdelegate_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAbstractItemDelegate_OnSenderSignalIndex((QAbstractItemDelegate*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemDelegate* self, const char* signal ```
int32_t q_abstractitemdelegate_receivers(void* self, const char* signal) {
    return QAbstractItemDelegate_Receivers((QAbstractItemDelegate*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, const char* signal ```
int32_t q_abstractitemdelegate_qbase_receivers(void* self, const char* signal) {
    return QAbstractItemDelegate_QBaseReceivers((QAbstractItemDelegate*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, int32_t (*slot)(QAbstractItemDelegate*, const char*) ```
void q_abstractitemdelegate_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAbstractItemDelegate_OnReceivers((QAbstractItemDelegate*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QMetaMethod* signal ```
bool q_abstractitemdelegate_is_signal_connected(void* self, void* signal) {
    return QAbstractItemDelegate_IsSignalConnected((QAbstractItemDelegate*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QMetaMethod* signal ```
bool q_abstractitemdelegate_qbase_is_signal_connected(void* self, void* signal) {
    return QAbstractItemDelegate_QBaseIsSignalConnected((QAbstractItemDelegate*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, bool (*slot)(QAbstractItemDelegate*, QMetaMethod*) ```
void q_abstractitemdelegate_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAbstractItemDelegate_OnIsSignalConnected((QAbstractItemDelegate*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAbstractItemDelegate* self ```
void q_abstractitemdelegate_delete(void* self) {
    QAbstractItemDelegate_Delete((QAbstractItemDelegate*)(self));
}