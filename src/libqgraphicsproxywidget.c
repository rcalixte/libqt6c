#include "libqaction.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqcursor.hpp"
#include "libqfont.hpp"
#include "libqgraphicseffect.hpp"
#include "libqgraphicsitem.hpp"
#include "libqgraphicslayout.hpp"
#include "libqgraphicslayoutitem.hpp"
#include "libqgraphicsscene.hpp"
#include "libqgraphicstransform.hpp"
#include "libqgraphicswidget.hpp"
#include "libqkeysequence.hpp"
#include "libqmargins.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpainter.hpp"
#include "libqpainterpath.hpp"
#include "libqpalette.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqsize.hpp"
#include "libqsizepolicy.hpp"
#include <string.h>
#include "libqstyle.hpp"
#include "libqstyleoption.hpp"
#include "libqthread.hpp"
#include "libqtransform.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqcoreevent.hpp"
#include "libqgraphicsproxywidget.hpp"
#include "libqgraphicsproxywidget.h"

/// https://doc.qt.io/qt-6/qgraphicsproxywidget.html

/// q_graphicsproxywidget_new constructs a new QGraphicsProxyWidget object.
///
///
QGraphicsProxyWidget* q_graphicsproxywidget_new() {
    return QGraphicsProxyWidget_new();
}

/// q_graphicsproxywidget_new2 constructs a new QGraphicsProxyWidget object.
///
/// ``` QGraphicsItem* parent ```
QGraphicsProxyWidget* q_graphicsproxywidget_new2(void* parent) {
    return QGraphicsProxyWidget_new2((QGraphicsItem*)parent);
}

/// q_graphicsproxywidget_new3 constructs a new QGraphicsProxyWidget object.
///
/// ``` QGraphicsItem* parent, int wFlags ```
QGraphicsProxyWidget* q_graphicsproxywidget_new3(void* parent, int64_t wFlags) {
    return QGraphicsProxyWidget_new3((QGraphicsItem*)parent, wFlags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsProxyWidget* self ```
QMetaObject* q_graphicsproxywidget_meta_object(void* self) {
    return QGraphicsProxyWidget_MetaObject((QGraphicsProxyWidget*)self);
}

/// ``` QGraphicsProxyWidget* self, const char* param1 ```
void* q_graphicsproxywidget_metacast(void* self, const char* param1) {
    return QGraphicsProxyWidget_Metacast((QGraphicsProxyWidget*)self, param1);
}

/// ``` QGraphicsProxyWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsproxywidget_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsProxyWidget_Metacall((QGraphicsProxyWidget*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, int32_t (*slot)(QGraphicsProxyWidget*, enum QMetaObject__Call, int, void*) ```
void q_graphicsproxywidget_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QGraphicsProxyWidget_OnMetacall((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsproxywidget_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsProxyWidget_QBaseMetacall((QGraphicsProxyWidget*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicsproxywidget_tr(const char* s) {
    libqt_string _str = QGraphicsProxyWidget_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#setWidget)
///
/// ``` QGraphicsProxyWidget* self, QWidget* widget ```
void q_graphicsproxywidget_set_widget(void* self, void* widget) {
    QGraphicsProxyWidget_SetWidget((QGraphicsProxyWidget*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#widget)
///
/// ``` QGraphicsProxyWidget* self ```
QWidget* q_graphicsproxywidget_widget(void* self) {
    return QGraphicsProxyWidget_Widget((QGraphicsProxyWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#subWidgetRect)
///
/// ``` QGraphicsProxyWidget* self, QWidget* widget ```
QRectF* q_graphicsproxywidget_sub_widget_rect(void* self, void* widget) {
    return QGraphicsProxyWidget_SubWidgetRect((QGraphicsProxyWidget*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#setGeometry)
///
/// ``` QGraphicsProxyWidget* self, QRectF* rect ```
void q_graphicsproxywidget_set_geometry(void* self, void* rect) {
    QGraphicsProxyWidget_SetGeometry((QGraphicsProxyWidget*)self, (QRectF*)rect);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QRectF*) ```
void q_graphicsproxywidget_on_set_geometry(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnSetGeometry((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QRectF* rect ```
void q_graphicsproxywidget_qbase_set_geometry(void* self, void* rect) {
    QGraphicsProxyWidget_QBaseSetGeometry((QGraphicsProxyWidget*)self, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#paint)
///
/// ``` QGraphicsProxyWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicsproxywidget_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsProxyWidget_Paint((QGraphicsProxyWidget*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_graphicsproxywidget_on_paint(void* self, void (*slot)(void*, void*, void*, void*)) {
    QGraphicsProxyWidget_OnPaint((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicsproxywidget_qbase_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsProxyWidget_QBasePaint((QGraphicsProxyWidget*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#type)
///
/// ``` QGraphicsProxyWidget* self ```
int32_t q_graphicsproxywidget_type(void* self) {
    return QGraphicsProxyWidget_Type((QGraphicsProxyWidget*)self);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, int32_t (*slot)() ```
void q_graphicsproxywidget_on_type(void* self, int32_t (*slot)()) {
    QGraphicsProxyWidget_OnType((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self ```
int32_t q_graphicsproxywidget_qbase_type(void* self) {
    return QGraphicsProxyWidget_QBaseType((QGraphicsProxyWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#createProxyForChildWidget)
///
/// ``` QGraphicsProxyWidget* self, QWidget* child ```
QGraphicsProxyWidget* q_graphicsproxywidget_create_proxy_for_child_widget(void* self, void* child) {
    return QGraphicsProxyWidget_CreateProxyForChildWidget((QGraphicsProxyWidget*)self, (QWidget*)child);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#itemChange)
///
/// ``` QGraphicsProxyWidget* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicsproxywidget_item_change(void* self, int64_t change, void* value) {
    return QGraphicsProxyWidget_ItemChange((QGraphicsProxyWidget*)self, change, (QVariant*)value);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, QVariant* (*slot)(QGraphicsProxyWidget*, enum QGraphicsItem__GraphicsItemChange, QVariant*) ```
void q_graphicsproxywidget_on_item_change(void* self, QVariant* (*slot)(void*, int64_t, void*)) {
    QGraphicsProxyWidget_OnItemChange((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicsproxywidget_qbase_item_change(void* self, int64_t change, void* value) {
    return QGraphicsProxyWidget_QBaseItemChange((QGraphicsProxyWidget*)self, change, (QVariant*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#event)
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
bool q_graphicsproxywidget_event(void* self, void* event) {
    return QGraphicsProxyWidget_Event((QGraphicsProxyWidget*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, bool (*slot)(QGraphicsProxyWidget*, QEvent*) ```
void q_graphicsproxywidget_on_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
bool q_graphicsproxywidget_qbase_event(void* self, void* event) {
    return QGraphicsProxyWidget_QBaseEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#eventFilter)
///
/// ``` QGraphicsProxyWidget* self, QObject* object, QEvent* event ```
bool q_graphicsproxywidget_event_filter(void* self, void* object, void* event) {
    return QGraphicsProxyWidget_EventFilter((QGraphicsProxyWidget*)self, (QObject*)object, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, bool (*slot)(QGraphicsProxyWidget*, QObject*, QEvent*) ```
void q_graphicsproxywidget_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGraphicsProxyWidget_OnEventFilter((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QObject* object, QEvent* event ```
bool q_graphicsproxywidget_qbase_event_filter(void* self, void* object, void* event) {
    return QGraphicsProxyWidget_QBaseEventFilter((QGraphicsProxyWidget*)self, (QObject*)object, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#showEvent)
///
/// ``` QGraphicsProxyWidget* self, QShowEvent* event ```
void q_graphicsproxywidget_show_event(void* self, void* event) {
    QGraphicsProxyWidget_ShowEvent((QGraphicsProxyWidget*)self, (QShowEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QShowEvent*) ```
void q_graphicsproxywidget_on_show_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnShowEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QShowEvent* event ```
void q_graphicsproxywidget_qbase_show_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseShowEvent((QGraphicsProxyWidget*)self, (QShowEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hideEvent)
///
/// ``` QGraphicsProxyWidget* self, QHideEvent* event ```
void q_graphicsproxywidget_hide_event(void* self, void* event) {
    QGraphicsProxyWidget_HideEvent((QGraphicsProxyWidget*)self, (QHideEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QHideEvent*) ```
void q_graphicsproxywidget_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnHideEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QHideEvent* event ```
void q_graphicsproxywidget_qbase_hide_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseHideEvent((QGraphicsProxyWidget*)self, (QHideEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#contextMenuEvent)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicsproxywidget_context_menu_event(void* self, void* event) {
    QGraphicsProxyWidget_ContextMenuEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneContextMenuEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsSceneContextMenuEvent*) ```
void q_graphicsproxywidget_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnContextMenuEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicsproxywidget_qbase_context_menu_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseContextMenuEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneContextMenuEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dragEnterEvent)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsproxywidget_drag_enter_event(void* self, void* event) {
    QGraphicsProxyWidget_DragEnterEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsproxywidget_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnDragEnterEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsproxywidget_qbase_drag_enter_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseDragEnterEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dragLeaveEvent)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsproxywidget_drag_leave_event(void* self, void* event) {
    QGraphicsProxyWidget_DragLeaveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsproxywidget_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnDragLeaveEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsproxywidget_qbase_drag_leave_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseDragLeaveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dragMoveEvent)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsproxywidget_drag_move_event(void* self, void* event) {
    QGraphicsProxyWidget_DragMoveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsproxywidget_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnDragMoveEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsproxywidget_qbase_drag_move_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseDragMoveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dropEvent)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsproxywidget_drop_event(void* self, void* event) {
    QGraphicsProxyWidget_DropEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsproxywidget_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnDropEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsproxywidget_qbase_drop_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseDropEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hoverEnterEvent)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsproxywidget_hover_enter_event(void* self, void* event) {
    QGraphicsProxyWidget_HoverEnterEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneHoverEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsSceneHoverEvent*) ```
void q_graphicsproxywidget_on_hover_enter_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnHoverEnterEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsproxywidget_qbase_hover_enter_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseHoverEnterEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneHoverEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hoverLeaveEvent)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsproxywidget_hover_leave_event(void* self, void* event) {
    QGraphicsProxyWidget_HoverLeaveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneHoverEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsSceneHoverEvent*) ```
void q_graphicsproxywidget_on_hover_leave_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnHoverLeaveEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsproxywidget_qbase_hover_leave_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseHoverLeaveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneHoverEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hoverMoveEvent)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsproxywidget_hover_move_event(void* self, void* event) {
    QGraphicsProxyWidget_HoverMoveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneHoverEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsSceneHoverEvent*) ```
void q_graphicsproxywidget_on_hover_move_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnHoverMoveEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsproxywidget_qbase_hover_move_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseHoverMoveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneHoverEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#grabMouseEvent)
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
void q_graphicsproxywidget_grab_mouse_event(void* self, void* event) {
    QGraphicsProxyWidget_GrabMouseEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QEvent*) ```
void q_graphicsproxywidget_on_grab_mouse_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnGrabMouseEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
void q_graphicsproxywidget_qbase_grab_mouse_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseGrabMouseEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#ungrabMouseEvent)
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
void q_graphicsproxywidget_ungrab_mouse_event(void* self, void* event) {
    QGraphicsProxyWidget_UngrabMouseEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QEvent*) ```
void q_graphicsproxywidget_on_ungrab_mouse_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnUngrabMouseEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
void q_graphicsproxywidget_qbase_ungrab_mouse_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseUngrabMouseEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mouseMoveEvent)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsproxywidget_mouse_move_event(void* self, void* event) {
    QGraphicsProxyWidget_MouseMoveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsSceneMouseEvent*) ```
void q_graphicsproxywidget_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnMouseMoveEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsproxywidget_qbase_mouse_move_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseMouseMoveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mousePressEvent)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsproxywidget_mouse_press_event(void* self, void* event) {
    QGraphicsProxyWidget_MousePressEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsSceneMouseEvent*) ```
void q_graphicsproxywidget_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnMousePressEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsproxywidget_qbase_mouse_press_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseMousePressEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mouseReleaseEvent)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsproxywidget_mouse_release_event(void* self, void* event) {
    QGraphicsProxyWidget_MouseReleaseEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsSceneMouseEvent*) ```
void q_graphicsproxywidget_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnMouseReleaseEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsproxywidget_qbase_mouse_release_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseMouseReleaseEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mouseDoubleClickEvent)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsproxywidget_mouse_double_click_event(void* self, void* event) {
    QGraphicsProxyWidget_MouseDoubleClickEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsSceneMouseEvent*) ```
void q_graphicsproxywidget_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnMouseDoubleClickEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsproxywidget_qbase_mouse_double_click_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseMouseDoubleClickEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#wheelEvent)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneWheelEvent* event ```
void q_graphicsproxywidget_wheel_event(void* self, void* event) {
    QGraphicsProxyWidget_WheelEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneWheelEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsSceneWheelEvent*) ```
void q_graphicsproxywidget_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnWheelEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneWheelEvent* event ```
void q_graphicsproxywidget_qbase_wheel_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseWheelEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneWheelEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#keyPressEvent)
///
/// ``` QGraphicsProxyWidget* self, QKeyEvent* event ```
void q_graphicsproxywidget_key_press_event(void* self, void* event) {
    QGraphicsProxyWidget_KeyPressEvent((QGraphicsProxyWidget*)self, (QKeyEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QKeyEvent*) ```
void q_graphicsproxywidget_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnKeyPressEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QKeyEvent* event ```
void q_graphicsproxywidget_qbase_key_press_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseKeyPressEvent((QGraphicsProxyWidget*)self, (QKeyEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#keyReleaseEvent)
///
/// ``` QGraphicsProxyWidget* self, QKeyEvent* event ```
void q_graphicsproxywidget_key_release_event(void* self, void* event) {
    QGraphicsProxyWidget_KeyReleaseEvent((QGraphicsProxyWidget*)self, (QKeyEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QKeyEvent*) ```
void q_graphicsproxywidget_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnKeyReleaseEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QKeyEvent* event ```
void q_graphicsproxywidget_qbase_key_release_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseKeyReleaseEvent((QGraphicsProxyWidget*)self, (QKeyEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#focusInEvent)
///
/// ``` QGraphicsProxyWidget* self, QFocusEvent* event ```
void q_graphicsproxywidget_focus_in_event(void* self, void* event) {
    QGraphicsProxyWidget_FocusInEvent((QGraphicsProxyWidget*)self, (QFocusEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QFocusEvent*) ```
void q_graphicsproxywidget_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnFocusInEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QFocusEvent* event ```
void q_graphicsproxywidget_qbase_focus_in_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseFocusInEvent((QGraphicsProxyWidget*)self, (QFocusEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#focusOutEvent)
///
/// ``` QGraphicsProxyWidget* self, QFocusEvent* event ```
void q_graphicsproxywidget_focus_out_event(void* self, void* event) {
    QGraphicsProxyWidget_FocusOutEvent((QGraphicsProxyWidget*)self, (QFocusEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QFocusEvent*) ```
void q_graphicsproxywidget_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnFocusOutEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QFocusEvent* event ```
void q_graphicsproxywidget_qbase_focus_out_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseFocusOutEvent((QGraphicsProxyWidget*)self, (QFocusEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#focusNextPrevChild)
///
/// ``` QGraphicsProxyWidget* self, bool next ```
bool q_graphicsproxywidget_focus_next_prev_child(void* self, bool next) {
    return QGraphicsProxyWidget_FocusNextPrevChild((QGraphicsProxyWidget*)self, next);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, bool (*slot)(QGraphicsProxyWidget*, bool) ```
void q_graphicsproxywidget_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QGraphicsProxyWidget_OnFocusNextPrevChild((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, bool next ```
bool q_graphicsproxywidget_qbase_focus_next_prev_child(void* self, bool next) {
    return QGraphicsProxyWidget_QBaseFocusNextPrevChild((QGraphicsProxyWidget*)self, next);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#inputMethodQuery)
///
/// ``` QGraphicsProxyWidget* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicsproxywidget_input_method_query(void* self, int64_t query) {
    return QGraphicsProxyWidget_InputMethodQuery((QGraphicsProxyWidget*)self, query);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, QVariant* (*slot)(QGraphicsProxyWidget*, enum Qt__InputMethodQuery) ```
void q_graphicsproxywidget_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QGraphicsProxyWidget_OnInputMethodQuery((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicsproxywidget_qbase_input_method_query(void* self, int64_t query) {
    return QGraphicsProxyWidget_QBaseInputMethodQuery((QGraphicsProxyWidget*)self, query);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#inputMethodEvent)
///
/// ``` QGraphicsProxyWidget* self, QInputMethodEvent* event ```
void q_graphicsproxywidget_input_method_event(void* self, void* event) {
    QGraphicsProxyWidget_InputMethodEvent((QGraphicsProxyWidget*)self, (QInputMethodEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QInputMethodEvent*) ```
void q_graphicsproxywidget_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnInputMethodEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QInputMethodEvent* event ```
void q_graphicsproxywidget_qbase_input_method_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseInputMethodEvent((QGraphicsProxyWidget*)self, (QInputMethodEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#sizeHint)
///
/// ``` QGraphicsProxyWidget* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicsproxywidget_size_hint(void* self, int64_t which, void* constraint) {
    return QGraphicsProxyWidget_SizeHint((QGraphicsProxyWidget*)self, which, (QSizeF*)constraint);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, QSizeF* (*slot)(QGraphicsProxyWidget*, enum Qt__SizeHint, QSizeF*) ```
void q_graphicsproxywidget_on_size_hint(void* self, QSizeF* (*slot)(void*, int64_t, void*)) {
    QGraphicsProxyWidget_OnSizeHint((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicsproxywidget_qbase_size_hint(void* self, int64_t which, void* constraint) {
    return QGraphicsProxyWidget_QBaseSizeHint((QGraphicsProxyWidget*)self, which, (QSizeF*)constraint);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#resizeEvent)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneResizeEvent* event ```
void q_graphicsproxywidget_resize_event(void* self, void* event) {
    QGraphicsProxyWidget_ResizeEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneResizeEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsSceneResizeEvent*) ```
void q_graphicsproxywidget_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnResizeEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneResizeEvent* event ```
void q_graphicsproxywidget_qbase_resize_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseResizeEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneResizeEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#newProxyWidget)
///
/// ``` QGraphicsProxyWidget* self, QWidget* param1 ```
QGraphicsProxyWidget* q_graphicsproxywidget_new_proxy_widget(void* self, void* param1) {
    return QGraphicsProxyWidget_NewProxyWidget((QGraphicsProxyWidget*)self, (QWidget*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, QGraphicsProxyWidget* (*slot)(QGraphicsProxyWidget*, QWidget*) ```
void q_graphicsproxywidget_on_new_proxy_widget(void* self, QGraphicsProxyWidget* (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnNewProxyWidget((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QWidget* param1 ```
QGraphicsProxyWidget* q_graphicsproxywidget_qbase_new_proxy_widget(void* self, void* param1) {
    return QGraphicsProxyWidget_QBaseNewProxyWidget((QGraphicsProxyWidget*)self, (QWidget*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicsproxywidget_tr2(const char* s, const char* c) {
    libqt_string _str = QGraphicsProxyWidget_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicsproxywidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QGraphicsProxyWidget_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layout)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsLayout* q_graphicsproxywidget_layout(void* self) {
    return QGraphicsWidget_Layout((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayout)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsLayout* layout ```
void q_graphicsproxywidget_set_layout(void* self, void* layout) {
    QGraphicsWidget_SetLayout((QGraphicsWidget*)self, (QGraphicsLayout*)layout);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#adjustSize)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_adjust_size(void* self) {
    QGraphicsWidget_AdjustSize((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutDirection)
///
/// ``` QGraphicsProxyWidget* self ```
int64_t q_graphicsproxywidget_layout_direction(void* self) {
    return QGraphicsWidget_LayoutDirection((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayoutDirection)
///
/// ``` QGraphicsProxyWidget* self, enum Qt__LayoutDirection direction ```
void q_graphicsproxywidget_set_layout_direction(void* self, int64_t direction) {
    QGraphicsWidget_SetLayoutDirection((QGraphicsWidget*)self, direction);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetLayoutDirection)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_unset_layout_direction(void* self) {
    QGraphicsWidget_UnsetLayoutDirection((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#style)
///
/// ``` QGraphicsProxyWidget* self ```
QStyle* q_graphicsproxywidget_style(void* self) {
    return QGraphicsWidget_Style((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setStyle)
///
/// ``` QGraphicsProxyWidget* self, QStyle* style ```
void q_graphicsproxywidget_set_style(void* self, void* style) {
    QGraphicsWidget_SetStyle((QGraphicsWidget*)self, (QStyle*)style);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#font)
///
/// ``` QGraphicsProxyWidget* self ```
QFont* q_graphicsproxywidget_font(void* self) {
    return QGraphicsWidget_Font((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setFont)
///
/// ``` QGraphicsProxyWidget* self, QFont* font ```
void q_graphicsproxywidget_set_font(void* self, void* font) {
    QGraphicsWidget_SetFont((QGraphicsWidget*)self, (QFont*)font);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#palette)
///
/// ``` QGraphicsProxyWidget* self ```
QPalette* q_graphicsproxywidget_palette(void* self) {
    return QGraphicsWidget_Palette((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setPalette)
///
/// ``` QGraphicsProxyWidget* self, QPalette* palette ```
void q_graphicsproxywidget_set_palette(void* self, void* palette) {
    QGraphicsWidget_SetPalette((QGraphicsWidget*)self, (QPalette*)palette);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#autoFillBackground)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_auto_fill_background(void* self) {
    return QGraphicsWidget_AutoFillBackground((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAutoFillBackground)
///
/// ``` QGraphicsProxyWidget* self, bool enabled ```
void q_graphicsproxywidget_set_auto_fill_background(void* self, bool enabled) {
    QGraphicsWidget_SetAutoFillBackground((QGraphicsWidget*)self, enabled);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
///
/// ``` QGraphicsProxyWidget* self, QSizeF* size ```
void q_graphicsproxywidget_resize(void* self, void* size) {
    QGraphicsWidget_Resize((QGraphicsWidget*)self, (QSizeF*)size);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
///
/// ``` QGraphicsProxyWidget* self, double w, double h ```
void q_graphicsproxywidget_resize2(void* self, double w, double h) {
    QGraphicsWidget_Resize2((QGraphicsWidget*)self, w, h);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#size)
///
/// ``` QGraphicsProxyWidget* self ```
QSizeF* q_graphicsproxywidget_size(void* self) {
    return QGraphicsWidget_Size((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// ``` QGraphicsProxyWidget* self, double x, double y, double w, double h ```
void q_graphicsproxywidget_set_geometry2(void* self, double x, double y, double w, double h) {
    QGraphicsWidget_SetGeometry2((QGraphicsWidget*)self, x, y, w, h);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#rect)
///
/// ``` QGraphicsProxyWidget* self ```
QRectF* q_graphicsproxywidget_rect(void* self) {
    return QGraphicsWidget_Rect((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
///
/// ``` QGraphicsProxyWidget* self, double left, double top, double right, double bottom ```
void q_graphicsproxywidget_set_contents_margins(void* self, double left, double top, double right, double bottom) {
    QGraphicsWidget_SetContentsMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
///
/// ``` QGraphicsProxyWidget* self, QMarginsF* margins ```
void q_graphicsproxywidget_set_contents_margins_with_margins(void* self, void* margins) {
    QGraphicsWidget_SetContentsMarginsWithMargins((QGraphicsWidget*)self, (QMarginsF*)margins);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
///
/// ``` QGraphicsProxyWidget* self, double left, double top, double right, double bottom ```
void q_graphicsproxywidget_set_window_frame_margins(void* self, double left, double top, double right, double bottom) {
    QGraphicsWidget_SetWindowFrameMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
///
/// ``` QGraphicsProxyWidget* self, QMarginsF* margins ```
void q_graphicsproxywidget_set_window_frame_margins_with_margins(void* self, void* margins) {
    QGraphicsWidget_SetWindowFrameMarginsWithMargins((QGraphicsWidget*)self, (QMarginsF*)margins);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getWindowFrameMargins)
///
/// ``` QGraphicsProxyWidget* self, double* left, double* top, double* right, double* bottom ```
void q_graphicsproxywidget_get_window_frame_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsWidget_GetWindowFrameMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetWindowFrameMargins)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_unset_window_frame_margins(void* self) {
    QGraphicsWidget_UnsetWindowFrameMargins((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameGeometry)
///
/// ``` QGraphicsProxyWidget* self ```
QRectF* q_graphicsproxywidget_window_frame_geometry(void* self) {
    return QGraphicsWidget_WindowFrameGeometry((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameRect)
///
/// ``` QGraphicsProxyWidget* self ```
QRectF* q_graphicsproxywidget_window_frame_rect(void* self) {
    return QGraphicsWidget_WindowFrameRect((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFlags)
///
/// ``` QGraphicsProxyWidget* self ```
int64_t q_graphicsproxywidget_window_flags(void* self) {
    return QGraphicsWidget_WindowFlags((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowType)
///
/// ``` QGraphicsProxyWidget* self ```
int64_t q_graphicsproxywidget_window_type(void* self) {
    return QGraphicsWidget_WindowType((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFlags)
///
/// ``` QGraphicsProxyWidget* self, int wFlags ```
void q_graphicsproxywidget_set_window_flags(void* self, int64_t wFlags) {
    QGraphicsWidget_SetWindowFlags((QGraphicsWidget*)self, wFlags);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#isActiveWindow)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_active_window(void* self) {
    return QGraphicsWidget_IsActiveWindow((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowTitle)
///
/// ``` QGraphicsProxyWidget* self, const char* title ```
void q_graphicsproxywidget_set_window_title(void* self, const char* title) {
    QGraphicsWidget_SetWindowTitle((QGraphicsWidget*)self, qstring(title));
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowTitle)
///
/// ``` QGraphicsProxyWidget* self ```
const char* q_graphicsproxywidget_window_title(void* self) {
    libqt_string _str = QGraphicsWidget_WindowTitle((QGraphicsWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusPolicy)
///
/// ``` QGraphicsProxyWidget* self ```
int64_t q_graphicsproxywidget_focus_policy(void* self) {
    return QGraphicsWidget_FocusPolicy((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setFocusPolicy)
///
/// ``` QGraphicsProxyWidget* self, enum Qt__FocusPolicy policy ```
void q_graphicsproxywidget_set_focus_policy(void* self, int64_t policy) {
    QGraphicsWidget_SetFocusPolicy((QGraphicsWidget*)self, policy);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setTabOrder)
///
/// ``` QGraphicsWidget* first, QGraphicsWidget* second ```
void q_graphicsproxywidget_set_tab_order(void* first, void* second) {
    QGraphicsWidget_SetTabOrder((QGraphicsWidget*)first, (QGraphicsWidget*)second);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusWidget)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsWidget* q_graphicsproxywidget_focus_widget(void* self) {
    return QGraphicsWidget_FocusWidget((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
///
/// ``` QGraphicsProxyWidget* self, QKeySequence* sequence ```
int32_t q_graphicsproxywidget_grab_shortcut(void* self, void* sequence) {
    return QGraphicsWidget_GrabShortcut((QGraphicsWidget*)self, (QKeySequence*)sequence);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#releaseShortcut)
///
/// ``` QGraphicsProxyWidget* self, int id ```
void q_graphicsproxywidget_release_shortcut(void* self, int id) {
    QGraphicsWidget_ReleaseShortcut((QGraphicsWidget*)self, id);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
///
/// ``` QGraphicsProxyWidget* self, int id ```
void q_graphicsproxywidget_set_shortcut_enabled(void* self, int id) {
    QGraphicsWidget_SetShortcutEnabled((QGraphicsWidget*)self, id);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
///
/// ``` QGraphicsProxyWidget* self, int id ```
void q_graphicsproxywidget_set_shortcut_auto_repeat(void* self, int id) {
    QGraphicsWidget_SetShortcutAutoRepeat((QGraphicsWidget*)self, id);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#addAction)
///
/// ``` QGraphicsProxyWidget* self, QAction* action ```
void q_graphicsproxywidget_add_action(void* self, void* action) {
    QGraphicsWidget_AddAction((QGraphicsWidget*)self, (QAction*)action);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#addActions)
///
/// ``` QGraphicsProxyWidget* self, QAction* actions[] ```
void q_graphicsproxywidget_add_actions(void* self, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QGraphicsWidget_AddActions((QGraphicsWidget*)self, actions_list);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#insertActions)
///
/// ``` QGraphicsProxyWidget* self, QAction* before, QAction* actions[] ```
void q_graphicsproxywidget_insert_actions(void* self, void* before, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QGraphicsWidget_InsertActions((QGraphicsWidget*)self, (QAction*)before, actions_list);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#insertAction)
///
/// ``` QGraphicsProxyWidget* self, QAction* before, QAction* action ```
void q_graphicsproxywidget_insert_action(void* self, void* before, void* action) {
    QGraphicsWidget_InsertAction((QGraphicsWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#removeAction)
///
/// ``` QGraphicsProxyWidget* self, QAction* action ```
void q_graphicsproxywidget_remove_action(void* self, void* action) {
    QGraphicsWidget_RemoveAction((QGraphicsWidget*)self, (QAction*)action);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#actions)
///
/// ``` QGraphicsProxyWidget* self ```
libqt_list /* of QAction* */ q_graphicsproxywidget_actions(void* self) {
    libqt_list _arr = QGraphicsWidget_Actions((QGraphicsWidget*)self);
    return _arr;
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
///
/// ``` QGraphicsProxyWidget* self, enum Qt__WidgetAttribute attribute ```
void q_graphicsproxywidget_set_attribute(void* self, int64_t attribute) {
    QGraphicsWidget_SetAttribute((QGraphicsWidget*)self, attribute);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#testAttribute)
///
/// ``` QGraphicsProxyWidget* self, enum Qt__WidgetAttribute attribute ```
bool q_graphicsproxywidget_test_attribute(void* self, int64_t attribute) {
    return QGraphicsWidget_TestAttribute((QGraphicsWidget*)self, attribute);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_geometry_changed(void* self) {
    QGraphicsWidget_GeometryChanged((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsWidget*) ```
void q_graphicsproxywidget_on_geometry_changed(void* self, void (*slot)(void*)) {
    QGraphicsWidget_Connect_GeometryChanged((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_layout_changed(void* self) {
    QGraphicsWidget_LayoutChanged((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsWidget*) ```
void q_graphicsproxywidget_on_layout_changed(void* self, void (*slot)(void*)) {
    QGraphicsWidget_Connect_LayoutChanged((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#close)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_close(void* self) {
    return QGraphicsWidget_Close((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
///
/// ``` QGraphicsProxyWidget* self, QKeySequence* sequence, enum Qt__ShortcutContext context ```
int32_t q_graphicsproxywidget_grab_shortcut2(void* self, void* sequence, int64_t context) {
    return QGraphicsWidget_GrabShortcut2((QGraphicsWidget*)self, (QKeySequence*)sequence, context);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
///
/// ``` QGraphicsProxyWidget* self, int id, bool enabled ```
void q_graphicsproxywidget_set_shortcut_enabled2(void* self, int id, bool enabled) {
    QGraphicsWidget_SetShortcutEnabled2((QGraphicsWidget*)self, id, enabled);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
///
/// ``` QGraphicsProxyWidget* self, int id, bool enabled ```
void q_graphicsproxywidget_set_shortcut_auto_repeat2(void* self, int id, bool enabled) {
    QGraphicsWidget_SetShortcutAutoRepeat2((QGraphicsWidget*)self, id, enabled);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
///
/// ``` QGraphicsProxyWidget* self, enum Qt__WidgetAttribute attribute, bool on ```
void q_graphicsproxywidget_set_attribute2(void* self, int64_t attribute, bool on) {
    QGraphicsWidget_SetAttribute2((QGraphicsWidget*)self, attribute, on);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// ``` QGraphicsProxyWidget* self, enum Qt__GestureType typeVal ```
void q_graphicsproxywidget_grab_gesture(void* self, int64_t typeVal) {
    QGraphicsObject_GrabGesture((QGraphicsObject*)self, typeVal);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
///
/// ``` QGraphicsProxyWidget* self, enum Qt__GestureType typeVal ```
void q_graphicsproxywidget_ungrab_gesture(void* self, int64_t typeVal) {
    QGraphicsObject_UngrabGesture((QGraphicsObject*)self, typeVal);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_parent_changed(void* self) {
    QGraphicsObject_ParentChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsproxywidget_on_parent_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ParentChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_opacity_changed(void* self) {
    QGraphicsObject_OpacityChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsproxywidget_on_opacity_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_OpacityChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_visible_changed(void* self) {
    QGraphicsObject_VisibleChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsproxywidget_on_visible_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_VisibleChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_enabled_changed(void* self) {
    QGraphicsObject_EnabledChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsproxywidget_on_enabled_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_EnabledChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_x_changed(void* self) {
    QGraphicsObject_XChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsproxywidget_on_x_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_XChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_y_changed(void* self) {
    QGraphicsObject_YChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsproxywidget_on_y_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_YChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_z_changed(void* self) {
    QGraphicsObject_ZChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsproxywidget_on_z_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ZChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_rotation_changed(void* self) {
    QGraphicsObject_RotationChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsproxywidget_on_rotation_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_RotationChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_scale_changed(void* self) {
    QGraphicsObject_ScaleChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsproxywidget_on_scale_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ScaleChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_children_changed(void* self) {
    QGraphicsObject_ChildrenChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsproxywidget_on_children_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ChildrenChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_width_changed(void* self) {
    QGraphicsObject_WidthChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsproxywidget_on_width_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_WidthChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_height_changed(void* self) {
    QGraphicsObject_HeightChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsproxywidget_on_height_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_HeightChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// ``` QGraphicsProxyWidget* self, enum Qt__GestureType typeVal, int flags ```
void q_graphicsproxywidget_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QGraphicsObject_GrabGesture2((QGraphicsObject*)self, typeVal, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsProxyWidget* self ```
const char* q_graphicsproxywidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsProxyWidget* self, const char* name ```
void q_graphicsproxywidget_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsProxyWidget* self, bool b ```
bool q_graphicsproxywidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsProxyWidget* self ```
QThread* q_graphicsproxywidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsProxyWidget* self, QThread* thread ```
void q_graphicsproxywidget_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsProxyWidget* self, int interval ```
int32_t q_graphicsproxywidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsProxyWidget* self, int id ```
void q_graphicsproxywidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsProxyWidget* self ```
libqt_list /* of QObject* */ q_graphicsproxywidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGraphicsProxyWidget* self, QObject* parent ```
void q_graphicsproxywidget_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsProxyWidget* self, QObject* filterObj ```
void q_graphicsproxywidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsProxyWidget* self, QObject* obj ```
void q_graphicsproxywidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicsproxywidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsProxyWidget* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicsproxywidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicsproxywidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicsproxywidget_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsProxyWidget* self, const char* name, QVariant* value ```
bool q_graphicsproxywidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsProxyWidget* self, const char* name ```
QVariant* q_graphicsproxywidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsProxyWidget* self ```
const char** q_graphicsproxywidget_dynamic_property_names(void* self) {
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
/// ``` QGraphicsProxyWidget* self ```
QBindingStorage* q_graphicsproxywidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsProxyWidget* self ```
QBindingStorage* q_graphicsproxywidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QObject*) ```
void q_graphicsproxywidget_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsProxyWidget* self ```
QObject* q_graphicsproxywidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsProxyWidget* self, const char* classname ```
bool q_graphicsproxywidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsProxyWidget* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicsproxywidget_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsproxywidget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsProxyWidget* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsproxywidget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsProxyWidget* self, QObject* param1 ```
void q_graphicsproxywidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QObject*, QObject*) ```
void q_graphicsproxywidget_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsScene* q_graphicsproxywidget_scene(void* self) {
    return QGraphicsItem_Scene((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsItem* q_graphicsproxywidget_parent_item(void* self) {
    return QGraphicsItem_ParentItem((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsItem* q_graphicsproxywidget_top_level_item(void* self) {
    return QGraphicsItem_TopLevelItem((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsObject* q_graphicsproxywidget_parent_object(void* self) {
    return QGraphicsItem_ParentObject((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsWidget* q_graphicsproxywidget_parent_widget(void* self) {
    return QGraphicsItem_ParentWidget((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsWidget* q_graphicsproxywidget_top_level_widget(void* self) {
    return QGraphicsItem_TopLevelWidget((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsWidget* q_graphicsproxywidget_window(void* self) {
    return QGraphicsItem_Window((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsItem* q_graphicsproxywidget_panel(void* self) {
    return QGraphicsItem_Panel((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* parent ```
void q_graphicsproxywidget_set_parent_item(void* self, void* parent) {
    QGraphicsItem_SetParentItem((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// ``` QGraphicsProxyWidget* self ```
libqt_list /* of QGraphicsItem* */ q_graphicsproxywidget_child_items(void* self) {
    libqt_list _arr = QGraphicsItem_ChildItems((QGraphicsItem*)self);
    return _arr;
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_widget(void* self) {
    return QGraphicsItem_IsWidget((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_window(void* self) {
    return QGraphicsItem_IsWindow((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_panel(void* self) {
    return QGraphicsItem_IsPanel((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsObject* q_graphicsproxywidget_to_graphics_object(void* self) {
    return QGraphicsItem_ToGraphicsObject((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsObject* q_graphicsproxywidget_to_graphics_object2(void* self) {
    return QGraphicsItem_ToGraphicsObject2((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsItemGroup* q_graphicsproxywidget_group(void* self) {
    return QGraphicsItem_Group((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItemGroup* group ```
void q_graphicsproxywidget_set_group(void* self, void* group) {
    QGraphicsItem_SetGroup((QGraphicsItem*)self, (QGraphicsItemGroup*)group);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// ``` QGraphicsProxyWidget* self ```
int64_t q_graphicsproxywidget_flags(void* self) {
    return QGraphicsItem_Flags((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsProxyWidget* self, enum QGraphicsItem__GraphicsItemFlag flag ```
void q_graphicsproxywidget_set_flag(void* self, int64_t flag) {
    QGraphicsItem_SetFlag((QGraphicsItem*)self, flag);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// ``` QGraphicsProxyWidget* self, int flags ```
void q_graphicsproxywidget_set_flags(void* self, int64_t flags) {
    QGraphicsItem_SetFlags((QGraphicsItem*)self, flags);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// ``` QGraphicsProxyWidget* self ```
int64_t q_graphicsproxywidget_cache_mode(void* self) {
    return QGraphicsItem_CacheMode((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsProxyWidget* self, enum QGraphicsItem__CacheMode mode ```
void q_graphicsproxywidget_set_cache_mode(void* self, int64_t mode) {
    QGraphicsItem_SetCacheMode((QGraphicsItem*)self, mode);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// ``` QGraphicsProxyWidget* self ```
int64_t q_graphicsproxywidget_panel_modality(void* self) {
    return QGraphicsItem_PanelModality((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// ``` QGraphicsProxyWidget* self, enum QGraphicsItem__PanelModality panelModality ```
void q_graphicsproxywidget_set_panel_modality(void* self, int64_t panelModality) {
    QGraphicsItem_SetPanelModality((QGraphicsItem*)self, panelModality);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_blocked_by_modal_panel(void* self) {
    return QGraphicsItem_IsBlockedByModalPanel((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// ``` QGraphicsProxyWidget* self ```
const char* q_graphicsproxywidget_tool_tip(void* self) {
    libqt_string _str = QGraphicsItem_ToolTip((QGraphicsItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// ``` QGraphicsProxyWidget* self, const char* toolTip ```
void q_graphicsproxywidget_set_tool_tip(void* self, const char* toolTip) {
    QGraphicsItem_SetToolTip((QGraphicsItem*)self, qstring(toolTip));
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// ``` QGraphicsProxyWidget* self ```
QCursor* q_graphicsproxywidget_cursor(void* self) {
    return QGraphicsItem_Cursor((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// ``` QGraphicsProxyWidget* self, QCursor* cursor ```
void q_graphicsproxywidget_set_cursor(void* self, void* cursor) {
    QGraphicsItem_SetCursor((QGraphicsItem*)self, (QCursor*)cursor);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_has_cursor(void* self) {
    return QGraphicsItem_HasCursor((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_unset_cursor(void* self) {
    QGraphicsItem_UnsetCursor((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_visible(void* self) {
    return QGraphicsItem_IsVisible((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* parent ```
bool q_graphicsproxywidget_is_visible_to(void* self, void* parent) {
    return QGraphicsItem_IsVisibleTo((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// ``` QGraphicsProxyWidget* self, bool visible ```
void q_graphicsproxywidget_set_visible(void* self, bool visible) {
    QGraphicsItem_SetVisible((QGraphicsItem*)self, visible);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_hide(void* self) {
    QGraphicsItem_Hide((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_show(void* self) {
    QGraphicsItem_Show((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_enabled(void* self) {
    return QGraphicsItem_IsEnabled((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// ``` QGraphicsProxyWidget* self, bool enabled ```
void q_graphicsproxywidget_set_enabled(void* self, bool enabled) {
    QGraphicsItem_SetEnabled((QGraphicsItem*)self, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_selected(void* self) {
    return QGraphicsItem_IsSelected((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// ``` QGraphicsProxyWidget* self, bool selected ```
void q_graphicsproxywidget_set_selected(void* self, bool selected) {
    QGraphicsItem_SetSelected((QGraphicsItem*)self, selected);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_accept_drops(void* self) {
    return QGraphicsItem_AcceptDrops((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// ``` QGraphicsProxyWidget* self, bool on ```
void q_graphicsproxywidget_set_accept_drops(void* self, bool on) {
    QGraphicsItem_SetAcceptDrops((QGraphicsItem*)self, on);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// ``` QGraphicsProxyWidget* self ```
double q_graphicsproxywidget_opacity(void* self) {
    return QGraphicsItem_Opacity((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// ``` QGraphicsProxyWidget* self ```
double q_graphicsproxywidget_effective_opacity(void* self) {
    return QGraphicsItem_EffectiveOpacity((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// ``` QGraphicsProxyWidget* self, double opacity ```
void q_graphicsproxywidget_set_opacity(void* self, double opacity) {
    QGraphicsItem_SetOpacity((QGraphicsItem*)self, opacity);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsEffect* q_graphicsproxywidget_graphics_effect(void* self) {
    return QGraphicsItem_GraphicsEffect((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsEffect* effect ```
void q_graphicsproxywidget_set_graphics_effect(void* self, void* effect) {
    QGraphicsItem_SetGraphicsEffect((QGraphicsItem*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// ``` QGraphicsProxyWidget* self ```
int64_t q_graphicsproxywidget_accepted_mouse_buttons(void* self) {
    return QGraphicsItem_AcceptedMouseButtons((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// ``` QGraphicsProxyWidget* self, int buttons ```
void q_graphicsproxywidget_set_accepted_mouse_buttons(void* self, int64_t buttons) {
    QGraphicsItem_SetAcceptedMouseButtons((QGraphicsItem*)self, buttons);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_accept_hover_events(void* self) {
    return QGraphicsItem_AcceptHoverEvents((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// ``` QGraphicsProxyWidget* self, bool enabled ```
void q_graphicsproxywidget_set_accept_hover_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptHoverEvents((QGraphicsItem*)self, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_accept_touch_events(void* self) {
    return QGraphicsItem_AcceptTouchEvents((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// ``` QGraphicsProxyWidget* self, bool enabled ```
void q_graphicsproxywidget_set_accept_touch_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptTouchEvents((QGraphicsItem*)self, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_filters_child_events(void* self) {
    return QGraphicsItem_FiltersChildEvents((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// ``` QGraphicsProxyWidget* self, bool enabled ```
void q_graphicsproxywidget_set_filters_child_events(void* self, bool enabled) {
    QGraphicsItem_SetFiltersChildEvents((QGraphicsItem*)self, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_handles_child_events(void* self) {
    return QGraphicsItem_HandlesChildEvents((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// ``` QGraphicsProxyWidget* self, bool enabled ```
void q_graphicsproxywidget_set_handles_child_events(void* self, bool enabled) {
    QGraphicsItem_SetHandlesChildEvents((QGraphicsItem*)self, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_active(void* self) {
    return QGraphicsItem_IsActive((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// ``` QGraphicsProxyWidget* self, bool active ```
void q_graphicsproxywidget_set_active(void* self, bool active) {
    QGraphicsItem_SetActive((QGraphicsItem*)self, active);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_has_focus(void* self) {
    return QGraphicsItem_HasFocus((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_set_focus(void* self) {
    QGraphicsItem_SetFocus((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_clear_focus(void* self) {
    QGraphicsItem_ClearFocus((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsItem* q_graphicsproxywidget_focus_proxy(void* self) {
    return QGraphicsItem_FocusProxy((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* item ```
void q_graphicsproxywidget_set_focus_proxy(void* self, void* item) {
    QGraphicsItem_SetFocusProxy((QGraphicsItem*)self, (QGraphicsItem*)item);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsItem* q_graphicsproxywidget_focus_item(void* self) {
    return QGraphicsItem_FocusItem((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsItem* q_graphicsproxywidget_focus_scope_item(void* self) {
    return QGraphicsItem_FocusScopeItem((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_grab_mouse(void* self) {
    QGraphicsItem_GrabMouse((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_ungrab_mouse(void* self) {
    QGraphicsItem_UngrabMouse((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_grab_keyboard(void* self) {
    QGraphicsItem_GrabKeyboard((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_ungrab_keyboard(void* self) {
    QGraphicsItem_UngrabKeyboard((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// ``` QGraphicsProxyWidget* self ```
QPointF* q_graphicsproxywidget_pos(void* self) {
    return QGraphicsItem_Pos((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// ``` QGraphicsProxyWidget* self ```
double q_graphicsproxywidget_x(void* self) {
    return QGraphicsItem_X((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// ``` QGraphicsProxyWidget* self, double x ```
void q_graphicsproxywidget_set_x(void* self, double x) {
    QGraphicsItem_SetX((QGraphicsItem*)self, x);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// ``` QGraphicsProxyWidget* self ```
double q_graphicsproxywidget_y(void* self) {
    return QGraphicsItem_Y((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// ``` QGraphicsProxyWidget* self, double y ```
void q_graphicsproxywidget_set_y(void* self, double y) {
    QGraphicsItem_SetY((QGraphicsItem*)self, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// ``` QGraphicsProxyWidget* self ```
QPointF* q_graphicsproxywidget_scene_pos(void* self) {
    return QGraphicsItem_ScenePos((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsProxyWidget* self, QPointF* pos ```
void q_graphicsproxywidget_set_pos(void* self, void* pos) {
    QGraphicsItem_SetPos((QGraphicsItem*)self, (QPointF*)pos);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsProxyWidget* self, double x, double y ```
void q_graphicsproxywidget_set_pos2(void* self, double x, double y) {
    QGraphicsItem_SetPos2((QGraphicsItem*)self, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// ``` QGraphicsProxyWidget* self, double dx, double dy ```
void q_graphicsproxywidget_move_by(void* self, double dx, double dy) {
    QGraphicsItem_MoveBy((QGraphicsItem*)self, dx, dy);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_ensure_visible(void* self) {
    QGraphicsItem_EnsureVisible((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsProxyWidget* self, double x, double y, double w, double h ```
void q_graphicsproxywidget_ensure_visible2(void* self, double x, double y, double w, double h) {
    QGraphicsItem_EnsureVisible2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// ``` QGraphicsProxyWidget* self ```
QTransform* q_graphicsproxywidget_transform(void* self) {
    return QGraphicsItem_Transform((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// ``` QGraphicsProxyWidget* self ```
QTransform* q_graphicsproxywidget_scene_transform(void* self) {
    return QGraphicsItem_SceneTransform((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// ``` QGraphicsProxyWidget* self, QTransform* viewportTransform ```
QTransform* q_graphicsproxywidget_device_transform(void* self, void* viewportTransform) {
    return QGraphicsItem_DeviceTransform((QGraphicsItem*)self, (QTransform*)viewportTransform);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* other ```
QTransform* q_graphicsproxywidget_item_transform(void* self, void* other) {
    return QGraphicsItem_ItemTransform((QGraphicsItem*)self, (QGraphicsItem*)other);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsProxyWidget* self, QTransform* matrix ```
void q_graphicsproxywidget_set_transform(void* self, void* matrix) {
    QGraphicsItem_SetTransform((QGraphicsItem*)self, (QTransform*)matrix);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_reset_transform(void* self) {
    QGraphicsItem_ResetTransform((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// ``` QGraphicsProxyWidget* self, double angle ```
void q_graphicsproxywidget_set_rotation(void* self, double angle) {
    QGraphicsItem_SetRotation((QGraphicsItem*)self, angle);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// ``` QGraphicsProxyWidget* self ```
double q_graphicsproxywidget_rotation(void* self) {
    return QGraphicsItem_Rotation((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// ``` QGraphicsProxyWidget* self, double scale ```
void q_graphicsproxywidget_set_scale(void* self, double scale) {
    QGraphicsItem_SetScale((QGraphicsItem*)self, scale);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// ``` QGraphicsProxyWidget* self ```
double q_graphicsproxywidget_scale(void* self) {
    return QGraphicsItem_Scale((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// ``` QGraphicsProxyWidget* self ```
libqt_list /* of QGraphicsTransform* */ q_graphicsproxywidget_transformations(void* self) {
    libqt_list _arr = QGraphicsItem_Transformations((QGraphicsItem*)self);
    return _arr;
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsTransform* transformations[] ```
void q_graphicsproxywidget_set_transformations(void* self, void* transformations[]) {
    QGraphicsTransform** transformations_arr = (QGraphicsTransform**)transformations;
    size_t transformations_len = 0;
    while (transformations_arr[transformations_len] != NULL) {
        transformations_len++;
    }
    libqt_list transformations_list = {
        .len = transformations_len,
        .data = {(QGraphicsTransform*)transformations},
    };
    QGraphicsItem_SetTransformations((QGraphicsItem*)self, transformations_list);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
///
/// ``` QGraphicsProxyWidget* self ```
QPointF* q_graphicsproxywidget_transform_origin_point(void* self) {
    return QGraphicsItem_TransformOriginPoint((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsProxyWidget* self, QPointF* origin ```
void q_graphicsproxywidget_set_transform_origin_point(void* self, void* origin) {
    QGraphicsItem_SetTransformOriginPoint((QGraphicsItem*)self, (QPointF*)origin);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsProxyWidget* self, double ax, double ay ```
void q_graphicsproxywidget_set_transform_origin_point2(void* self, double ax, double ay) {
    QGraphicsItem_SetTransformOriginPoint2((QGraphicsItem*)self, ax, ay);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// ``` QGraphicsProxyWidget* self ```
double q_graphicsproxywidget_z_value(void* self) {
    return QGraphicsItem_ZValue((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// ``` QGraphicsProxyWidget* self, double z ```
void q_graphicsproxywidget_set_z_value(void* self, double z) {
    QGraphicsItem_SetZValue((QGraphicsItem*)self, z);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* sibling ```
void q_graphicsproxywidget_stack_before(void* self, void* sibling) {
    QGraphicsItem_StackBefore((QGraphicsItem*)self, (QGraphicsItem*)sibling);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// ``` QGraphicsProxyWidget* self ```
QRectF* q_graphicsproxywidget_children_bounding_rect(void* self) {
    return QGraphicsItem_ChildrenBoundingRect((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// ``` QGraphicsProxyWidget* self ```
QRectF* q_graphicsproxywidget_scene_bounding_rect(void* self) {
    return QGraphicsItem_SceneBoundingRect((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_clipped(void* self) {
    return QGraphicsItem_IsClipped((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// ``` QGraphicsProxyWidget* self ```
QPainterPath* q_graphicsproxywidget_clip_path(void* self) {
    return QGraphicsItem_ClipPath((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsProxyWidget* self ```
libqt_list /* of QGraphicsItem* */ q_graphicsproxywidget_colliding_items(void* self) {
    libqt_list _arr = QGraphicsItem_CollidingItems((QGraphicsItem*)self);
    return _arr;
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_obscured(void* self) {
    return QGraphicsItem_IsObscured((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsProxyWidget* self, double x, double y, double w, double h ```
bool q_graphicsproxywidget_is_obscured2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_IsObscured2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// ``` QGraphicsProxyWidget* self, QTransform* itemToDeviceTransform ```
QRegion* q_graphicsproxywidget_bounding_region(void* self, void* itemToDeviceTransform) {
    return QGraphicsItem_BoundingRegion((QGraphicsItem*)self, (QTransform*)itemToDeviceTransform);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// ``` QGraphicsProxyWidget* self ```
double q_graphicsproxywidget_bounding_region_granularity(void* self) {
    return QGraphicsItem_BoundingRegionGranularity((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// ``` QGraphicsProxyWidget* self, double granularity ```
void q_graphicsproxywidget_set_bounding_region_granularity(void* self, double granularity) {
    QGraphicsItem_SetBoundingRegionGranularity((QGraphicsItem*)self, granularity);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_update(void* self) {
    QGraphicsItem_Update((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsProxyWidget* self, double x, double y, double width, double height ```
void q_graphicsproxywidget_update2(void* self, double x, double y, double width, double height) {
    QGraphicsItem_Update2((QGraphicsItem*)self, x, y, width, height);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsProxyWidget* self, double dx, double dy ```
void q_graphicsproxywidget_scroll(void* self, double dx, double dy) {
    QGraphicsItem_Scroll((QGraphicsItem*)self, dx, dy);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicsproxywidget_map_to_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsProxyWidget* self, QPointF* point ```
QPointF* q_graphicsproxywidget_map_to_parent(void* self, void* point) {
    return QGraphicsItem_MapToParent((QGraphicsItem*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsProxyWidget* self, QPointF* point ```
QPointF* q_graphicsproxywidget_map_to_scene(void* self, void* point) {
    return QGraphicsItem_MapToScene((QGraphicsItem*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicsproxywidget_map_rect_to_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsProxyWidget* self, QRectF* rect ```
QRectF* q_graphicsproxywidget_map_rect_to_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectToParent((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsProxyWidget* self, QRectF* rect ```
QRectF* q_graphicsproxywidget_map_rect_to_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectToScene((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicsproxywidget_map_to_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapToItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsProxyWidget* self, QPainterPath* path ```
QPainterPath* q_graphicsproxywidget_map_to_parent_with_path(void* self, void* path) {
    return QGraphicsItem_MapToParentWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsProxyWidget* self, QPainterPath* path ```
QPainterPath* q_graphicsproxywidget_map_to_scene_with_path(void* self, void* path) {
    return QGraphicsItem_MapToSceneWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicsproxywidget_map_from_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsProxyWidget* self, QPointF* point ```
QPointF* q_graphicsproxywidget_map_from_parent(void* self, void* point) {
    return QGraphicsItem_MapFromParent((QGraphicsItem*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsProxyWidget* self, QPointF* point ```
QPointF* q_graphicsproxywidget_map_from_scene(void* self, void* point) {
    return QGraphicsItem_MapFromScene((QGraphicsItem*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicsproxywidget_map_rect_from_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsProxyWidget* self, QRectF* rect ```
QRectF* q_graphicsproxywidget_map_rect_from_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectFromParent((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsProxyWidget* self, QRectF* rect ```
QRectF* q_graphicsproxywidget_map_rect_from_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectFromScene((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicsproxywidget_map_from_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapFromItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsProxyWidget* self, QPainterPath* path ```
QPainterPath* q_graphicsproxywidget_map_from_parent_with_path(void* self, void* path) {
    return QGraphicsItem_MapFromParentWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsProxyWidget* self, QPainterPath* path ```
QPainterPath* q_graphicsproxywidget_map_from_scene_with_path(void* self, void* path) {
    return QGraphicsItem_MapFromSceneWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicsproxywidget_map_to_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapToItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsProxyWidget* self, double x, double y ```
QPointF* q_graphicsproxywidget_map_to_parent2(void* self, double x, double y) {
    return QGraphicsItem_MapToParent2((QGraphicsItem*)self, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsProxyWidget* self, double x, double y ```
QPointF* q_graphicsproxywidget_map_to_scene2(void* self, double x, double y) {
    return QGraphicsItem_MapToScene2((QGraphicsItem*)self, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicsproxywidget_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsProxyWidget* self, double x, double y, double w, double h ```
QRectF* q_graphicsproxywidget_map_rect_to_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToParent2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsProxyWidget* self, double x, double y, double w, double h ```
QRectF* q_graphicsproxywidget_map_rect_to_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToScene2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicsproxywidget_map_from_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapFromItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsProxyWidget* self, double x, double y ```
QPointF* q_graphicsproxywidget_map_from_parent2(void* self, double x, double y) {
    return QGraphicsItem_MapFromParent2((QGraphicsItem*)self, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsProxyWidget* self, double x, double y ```
QPointF* q_graphicsproxywidget_map_from_scene2(void* self, double x, double y) {
    return QGraphicsItem_MapFromScene2((QGraphicsItem*)self, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicsproxywidget_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsProxyWidget* self, double x, double y, double w, double h ```
QRectF* q_graphicsproxywidget_map_rect_from_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromParent2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsProxyWidget* self, double x, double y, double w, double h ```
QRectF* q_graphicsproxywidget_map_rect_from_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromScene2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* child ```
bool q_graphicsproxywidget_is_ancestor_of(void* self, void* child) {
    return QGraphicsItem_IsAncestorOf((QGraphicsItem*)self, (QGraphicsItem*)child);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* other ```
QGraphicsItem* q_graphicsproxywidget_common_ancestor_item(void* self, void* other) {
    return QGraphicsItem_CommonAncestorItem((QGraphicsItem*)self, (QGraphicsItem*)other);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_under_mouse(void* self) {
    return QGraphicsItem_IsUnderMouse((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// ``` QGraphicsProxyWidget* self, int key ```
QVariant* q_graphicsproxywidget_data(void* self, int key) {
    return QGraphicsItem_Data((QGraphicsItem*)self, key);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// ``` QGraphicsProxyWidget* self, int key, QVariant* value ```
void q_graphicsproxywidget_set_data(void* self, int key, void* value) {
    QGraphicsItem_SetData((QGraphicsItem*)self, key, (QVariant*)value);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// ``` QGraphicsProxyWidget* self ```
int64_t q_graphicsproxywidget_input_method_hints(void* self) {
    return QGraphicsItem_InputMethodHints((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// ``` QGraphicsProxyWidget* self, int hints ```
void q_graphicsproxywidget_set_input_method_hints(void* self, int64_t hints) {
    QGraphicsItem_SetInputMethodHints((QGraphicsItem*)self, hints);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* filterItem ```
void q_graphicsproxywidget_install_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_InstallSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* filterItem ```
void q_graphicsproxywidget_remove_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_RemoveSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsProxyWidget* self, enum QGraphicsItem__GraphicsItemFlag flag, bool enabled ```
void q_graphicsproxywidget_set_flag2(void* self, int64_t flag, bool enabled) {
    QGraphicsItem_SetFlag2((QGraphicsItem*)self, flag, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsProxyWidget* self, enum QGraphicsItem__CacheMode mode, QSize* cacheSize ```
void q_graphicsproxywidget_set_cache_mode2(void* self, int64_t mode, void* cacheSize) {
    QGraphicsItem_SetCacheMode2((QGraphicsItem*)self, mode, (QSize*)cacheSize);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsProxyWidget* self, enum Qt__FocusReason focusReason ```
void q_graphicsproxywidget_set_focus1(void* self, int64_t focusReason) {
    QGraphicsItem_SetFocus1((QGraphicsItem*)self, focusReason);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsProxyWidget* self, QRectF* rect ```
void q_graphicsproxywidget_ensure_visible1(void* self, void* rect) {
    QGraphicsItem_EnsureVisible1((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsProxyWidget* self, QRectF* rect, int xmargin ```
void q_graphicsproxywidget_ensure_visible22(void* self, void* rect, int xmargin) {
    QGraphicsItem_EnsureVisible22((QGraphicsItem*)self, (QRectF*)rect, xmargin);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsProxyWidget* self, QRectF* rect, int xmargin, int ymargin ```
void q_graphicsproxywidget_ensure_visible3(void* self, void* rect, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible3((QGraphicsItem*)self, (QRectF*)rect, xmargin, ymargin);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsProxyWidget* self, double x, double y, double w, double h, int xmargin ```
void q_graphicsproxywidget_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin) {
    QGraphicsItem_EnsureVisible5((QGraphicsItem*)self, x, y, w, h, xmargin);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsProxyWidget* self, double x, double y, double w, double h, int xmargin, int ymargin ```
void q_graphicsproxywidget_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible6((QGraphicsItem*)self, x, y, w, h, xmargin, ymargin);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* other, bool* ok ```
QTransform* q_graphicsproxywidget_item_transform2(void* self, void* other, bool* ok) {
    return QGraphicsItem_ItemTransform2((QGraphicsItem*)self, (QGraphicsItem*)other, (bool*)ok);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsProxyWidget* self, QTransform* matrix, bool combine ```
void q_graphicsproxywidget_set_transform2(void* self, void* matrix, bool combine) {
    QGraphicsItem_SetTransform2((QGraphicsItem*)self, (QTransform*)matrix, combine);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsProxyWidget* self, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicsproxywidget_colliding_items1(void* self, int64_t mode) {
    libqt_list _arr = QGraphicsItem_CollidingItems1((QGraphicsItem*)self, mode);
    return _arr;
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsProxyWidget* self, QRectF* rect ```
bool q_graphicsproxywidget_is_obscured1(void* self, void* rect) {
    return QGraphicsItem_IsObscured1((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsProxyWidget* self, QRectF* rect ```
void q_graphicsproxywidget_update1(void* self, void* rect) {
    QGraphicsItem_Update1((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsProxyWidget* self, double dx, double dy, QRectF* rect ```
void q_graphicsproxywidget_scroll3(void* self, double dx, double dy, void* rect) {
    QGraphicsItem_Scroll3((QGraphicsItem*)self, dx, dy, (QRectF*)rect);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsProxyWidget* self, QSizePolicy* policy ```
void q_graphicsproxywidget_set_size_policy(void* self, void* policy) {
    QGraphicsLayoutItem_SetSizePolicy((QGraphicsLayoutItem*)self, (QSizePolicy*)policy);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsProxyWidget* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy ```
void q_graphicsproxywidget_set_size_policy2(void* self, int64_t hPolicy, int64_t vPolicy) {
    QGraphicsLayoutItem_SetSizePolicy2((QGraphicsLayoutItem*)self, hPolicy, vPolicy);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
///
/// ``` QGraphicsProxyWidget* self ```
QSizePolicy* q_graphicsproxywidget_size_policy(void* self) {
    return QGraphicsLayoutItem_SizePolicy((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QGraphicsProxyWidget* self, QSizeF* size ```
void q_graphicsproxywidget_set_minimum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMinimumSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QGraphicsProxyWidget* self, double w, double h ```
void q_graphicsproxywidget_set_minimum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMinimumSize2((QGraphicsLayoutItem*)self, w, h);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
///
/// ``` QGraphicsProxyWidget* self ```
QSizeF* q_graphicsproxywidget_minimum_size(void* self) {
    return QGraphicsLayoutItem_MinimumSize((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
///
/// ``` QGraphicsProxyWidget* self, double width ```
void q_graphicsproxywidget_set_minimum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMinimumWidth((QGraphicsLayoutItem*)self, width);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
///
/// ``` QGraphicsProxyWidget* self ```
double q_graphicsproxywidget_minimum_width(void* self) {
    return QGraphicsLayoutItem_MinimumWidth((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
///
/// ``` QGraphicsProxyWidget* self, double height ```
void q_graphicsproxywidget_set_minimum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMinimumHeight((QGraphicsLayoutItem*)self, height);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
///
/// ``` QGraphicsProxyWidget* self ```
double q_graphicsproxywidget_minimum_height(void* self) {
    return QGraphicsLayoutItem_MinimumHeight((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QGraphicsProxyWidget* self, QSizeF* size ```
void q_graphicsproxywidget_set_preferred_size(void* self, void* size) {
    QGraphicsLayoutItem_SetPreferredSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QGraphicsProxyWidget* self, double w, double h ```
void q_graphicsproxywidget_set_preferred_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetPreferredSize2((QGraphicsLayoutItem*)self, w, h);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
///
/// ``` QGraphicsProxyWidget* self ```
QSizeF* q_graphicsproxywidget_preferred_size(void* self) {
    return QGraphicsLayoutItem_PreferredSize((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
///
/// ``` QGraphicsProxyWidget* self, double width ```
void q_graphicsproxywidget_set_preferred_width(void* self, double width) {
    QGraphicsLayoutItem_SetPreferredWidth((QGraphicsLayoutItem*)self, width);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
///
/// ``` QGraphicsProxyWidget* self ```
double q_graphicsproxywidget_preferred_width(void* self) {
    return QGraphicsLayoutItem_PreferredWidth((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
///
/// ``` QGraphicsProxyWidget* self, double height ```
void q_graphicsproxywidget_set_preferred_height(void* self, double height) {
    QGraphicsLayoutItem_SetPreferredHeight((QGraphicsLayoutItem*)self, height);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
///
/// ``` QGraphicsProxyWidget* self ```
double q_graphicsproxywidget_preferred_height(void* self) {
    return QGraphicsLayoutItem_PreferredHeight((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QGraphicsProxyWidget* self, QSizeF* size ```
void q_graphicsproxywidget_set_maximum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMaximumSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QGraphicsProxyWidget* self, double w, double h ```
void q_graphicsproxywidget_set_maximum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMaximumSize2((QGraphicsLayoutItem*)self, w, h);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
///
/// ``` QGraphicsProxyWidget* self ```
QSizeF* q_graphicsproxywidget_maximum_size(void* self) {
    return QGraphicsLayoutItem_MaximumSize((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
///
/// ``` QGraphicsProxyWidget* self, double width ```
void q_graphicsproxywidget_set_maximum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMaximumWidth((QGraphicsLayoutItem*)self, width);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
///
/// ``` QGraphicsProxyWidget* self ```
double q_graphicsproxywidget_maximum_width(void* self) {
    return QGraphicsLayoutItem_MaximumWidth((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
///
/// ``` QGraphicsProxyWidget* self, double height ```
void q_graphicsproxywidget_set_maximum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMaximumHeight((QGraphicsLayoutItem*)self, height);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
///
/// ``` QGraphicsProxyWidget* self ```
double q_graphicsproxywidget_maximum_height(void* self) {
    return QGraphicsLayoutItem_MaximumHeight((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
///
/// ``` QGraphicsProxyWidget* self ```
QRectF* q_graphicsproxywidget_geometry(void* self) {
    return QGraphicsLayoutItem_Geometry((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
///
/// ``` QGraphicsProxyWidget* self ```
QRectF* q_graphicsproxywidget_contents_rect(void* self) {
    return QGraphicsLayoutItem_ContentsRect((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QGraphicsProxyWidget* self, enum Qt__SizeHint which ```
QSizeF* q_graphicsproxywidget_effective_size_hint(void* self, int64_t which) {
    return QGraphicsLayoutItem_EffectiveSizeHint((QGraphicsLayoutItem*)self, which);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsLayoutItem* q_graphicsproxywidget_parent_layout_item(void* self) {
    return QGraphicsLayoutItem_ParentLayoutItem((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsLayoutItem* parent ```
void q_graphicsproxywidget_set_parent_layout_item(void* self, void* parent) {
    QGraphicsLayoutItem_SetParentLayoutItem((QGraphicsLayoutItem*)self, (QGraphicsLayoutItem*)parent);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_layout(void* self) {
    return QGraphicsLayoutItem_IsLayout((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsItem* q_graphicsproxywidget_graphics_item(void* self) {
    return QGraphicsLayoutItem_GraphicsItem((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_owned_by_layout(void* self) {
    return QGraphicsLayoutItem_OwnedByLayout((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsProxyWidget* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy, enum QSizePolicy__ControlType controlType ```
void q_graphicsproxywidget_set_size_policy3(void* self, int64_t hPolicy, int64_t vPolicy, int64_t controlType) {
    QGraphicsLayoutItem_SetSizePolicy3((QGraphicsLayoutItem*)self, hPolicy, vPolicy, controlType);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QGraphicsProxyWidget* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicsproxywidget_effective_size_hint2(void* self, int64_t which, void* constraint) {
    return QGraphicsLayoutItem_EffectiveSizeHint2((QGraphicsLayoutItem*)self, which, (QSizeF*)constraint);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, double* left, double* top, double* right, double* bottom ```
void q_graphicsproxywidget_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsProxyWidget_GetContentsMargins((QGraphicsProxyWidget*)self, left, top, right, bottom);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, double* left, double* top, double* right, double* bottom ```
void q_graphicsproxywidget_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsProxyWidget_QBaseGetContentsMargins((QGraphicsProxyWidget*)self, left, top, right, bottom);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, double*, double*, double*, double*) ```
void q_graphicsproxywidget_on_get_contents_margins(void* self, void (*slot)(void*, double*, double*, double*, double*)) {
    QGraphicsProxyWidget_OnGetContentsMargins((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicsproxywidget_paint_window_frame(void* self, void* painter, void* option, void* widget) {
    QGraphicsProxyWidget_PaintWindowFrame((QGraphicsProxyWidget*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicsproxywidget_qbase_paint_window_frame(void* self, void* painter, void* option, void* widget) {
    QGraphicsProxyWidget_QBasePaintWindowFrame((QGraphicsProxyWidget*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_graphicsproxywidget_on_paint_window_frame(void* self, void (*slot)(void*, void*, void*, void*)) {
    QGraphicsProxyWidget_OnPaintWindowFrame((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
QRectF* q_graphicsproxywidget_bounding_rect(void* self) {
    return QGraphicsProxyWidget_BoundingRect((QGraphicsProxyWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
QRectF* q_graphicsproxywidget_qbase_bounding_rect(void* self) {
    return QGraphicsProxyWidget_QBaseBoundingRect((QGraphicsProxyWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QRectF* (*slot)() ```
void q_graphicsproxywidget_on_bounding_rect(void* self, QRectF* (*slot)()) {
    QGraphicsProxyWidget_OnBoundingRect((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
QPainterPath* q_graphicsproxywidget_shape(void* self) {
    return QGraphicsProxyWidget_Shape((QGraphicsProxyWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
QPainterPath* q_graphicsproxywidget_qbase_shape(void* self) {
    return QGraphicsProxyWidget_QBaseShape((QGraphicsProxyWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QPainterPath* (*slot)() ```
void q_graphicsproxywidget_on_shape(void* self, QPainterPath* (*slot)()) {
    QGraphicsProxyWidget_OnShape((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QStyleOption* option ```
void q_graphicsproxywidget_init_style_option(void* self, void* option) {
    QGraphicsProxyWidget_InitStyleOption((QGraphicsProxyWidget*)self, (QStyleOption*)option);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QStyleOption* option ```
void q_graphicsproxywidget_qbase_init_style_option(void* self, void* option) {
    QGraphicsProxyWidget_QBaseInitStyleOption((QGraphicsProxyWidget*)self, (QStyleOption*)option);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QStyleOption*) ```
void q_graphicsproxywidget_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnInitStyleOption((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_update_geometry(void* self) {
    QGraphicsProxyWidget_UpdateGeometry((QGraphicsProxyWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_qbase_update_geometry(void* self) {
    QGraphicsProxyWidget_QBaseUpdateGeometry((QGraphicsProxyWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)() ```
void q_graphicsproxywidget_on_update_geometry(void* self, void (*slot)()) {
    QGraphicsProxyWidget_OnUpdateGeometry((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, const char* propertyName, QVariant* value ```
QVariant* q_graphicsproxywidget_property_change(void* self, const char* propertyName, void* value) {
    return QGraphicsProxyWidget_PropertyChange((QGraphicsProxyWidget*)self, qstring(propertyName), (QVariant*)value);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, const char* propertyName, QVariant* value ```
QVariant* q_graphicsproxywidget_qbase_property_change(void* self, const char* propertyName, void* value) {
    return QGraphicsProxyWidget_QBasePropertyChange((QGraphicsProxyWidget*)self, qstring(propertyName), (QVariant*)value);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QVariant* (*slot)(QGraphicsProxyWidget*, const char*, QVariant*) ```
void q_graphicsproxywidget_on_property_change(void* self, QVariant* (*slot)(void*, const char*, void*)) {
    QGraphicsProxyWidget_OnPropertyChange((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
bool q_graphicsproxywidget_scene_event(void* self, void* event) {
    return QGraphicsProxyWidget_SceneEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
bool q_graphicsproxywidget_qbase_scene_event(void* self, void* event) {
    return QGraphicsProxyWidget_QBaseSceneEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, bool (*slot)(QGraphicsProxyWidget*, QEvent*) ```
void q_graphicsproxywidget_on_scene_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnSceneEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QEvent* e ```
bool q_graphicsproxywidget_window_frame_event(void* self, void* e) {
    return QGraphicsProxyWidget_WindowFrameEvent((QGraphicsProxyWidget*)self, (QEvent*)e);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QEvent* e ```
bool q_graphicsproxywidget_qbase_window_frame_event(void* self, void* e) {
    return QGraphicsProxyWidget_QBaseWindowFrameEvent((QGraphicsProxyWidget*)self, (QEvent*)e);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, bool (*slot)(QGraphicsProxyWidget*, QEvent*) ```
void q_graphicsproxywidget_on_window_frame_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnWindowFrameEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QPointF* pos ```
int64_t q_graphicsproxywidget_window_frame_section_at(void* self, void* pos) {
    return QGraphicsProxyWidget_WindowFrameSectionAt((QGraphicsProxyWidget*)self, (QPointF*)pos);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QPointF* pos ```
int64_t q_graphicsproxywidget_qbase_window_frame_section_at(void* self, void* pos) {
    return QGraphicsProxyWidget_QBaseWindowFrameSectionAt((QGraphicsProxyWidget*)self, (QPointF*)pos);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, int64_t (*slot)(QGraphicsProxyWidget*, QPointF*) ```
void q_graphicsproxywidget_on_window_frame_section_at(void* self, int64_t (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnWindowFrameSectionAt((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
void q_graphicsproxywidget_change_event(void* self, void* event) {
    QGraphicsProxyWidget_ChangeEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
void q_graphicsproxywidget_qbase_change_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseChangeEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QEvent*) ```
void q_graphicsproxywidget_on_change_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnChangeEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QCloseEvent* event ```
void q_graphicsproxywidget_close_event(void* self, void* event) {
    QGraphicsProxyWidget_CloseEvent((QGraphicsProxyWidget*)self, (QCloseEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QCloseEvent* event ```
void q_graphicsproxywidget_qbase_close_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseCloseEvent((QGraphicsProxyWidget*)self, (QCloseEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QCloseEvent*) ```
void q_graphicsproxywidget_on_close_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnCloseEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneMoveEvent* event ```
void q_graphicsproxywidget_move_event(void* self, void* event) {
    QGraphicsProxyWidget_MoveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneMoveEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneMoveEvent* event ```
void q_graphicsproxywidget_qbase_move_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseMoveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneMoveEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsSceneMoveEvent*) ```
void q_graphicsproxywidget_on_move_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnMoveEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_polish_event(void* self) {
    QGraphicsProxyWidget_PolishEvent((QGraphicsProxyWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_qbase_polish_event(void* self) {
    QGraphicsProxyWidget_QBasePolishEvent((QGraphicsProxyWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)() ```
void q_graphicsproxywidget_on_polish_event(void* self, void (*slot)()) {
    QGraphicsProxyWidget_OnPolishEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
void q_graphicsproxywidget_grab_keyboard_event(void* self, void* event) {
    QGraphicsProxyWidget_GrabKeyboardEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
void q_graphicsproxywidget_qbase_grab_keyboard_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseGrabKeyboardEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QEvent*) ```
void q_graphicsproxywidget_on_grab_keyboard_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnGrabKeyboardEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
void q_graphicsproxywidget_ungrab_keyboard_event(void* self, void* event) {
    QGraphicsProxyWidget_UngrabKeyboardEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
void q_graphicsproxywidget_qbase_ungrab_keyboard_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseUngrabKeyboardEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QEvent*) ```
void q_graphicsproxywidget_on_ungrab_keyboard_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnUngrabKeyboardEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QTimerEvent* event ```
void q_graphicsproxywidget_timer_event(void* self, void* event) {
    QGraphicsProxyWidget_TimerEvent((QGraphicsProxyWidget*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QTimerEvent* event ```
void q_graphicsproxywidget_qbase_timer_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseTimerEvent((QGraphicsProxyWidget*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QTimerEvent*) ```
void q_graphicsproxywidget_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnTimerEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QChildEvent* event ```
void q_graphicsproxywidget_child_event(void* self, void* event) {
    QGraphicsProxyWidget_ChildEvent((QGraphicsProxyWidget*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QChildEvent* event ```
void q_graphicsproxywidget_qbase_child_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseChildEvent((QGraphicsProxyWidget*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QChildEvent*) ```
void q_graphicsproxywidget_on_child_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnChildEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
void q_graphicsproxywidget_custom_event(void* self, void* event) {
    QGraphicsProxyWidget_CustomEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
void q_graphicsproxywidget_qbase_custom_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseCustomEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QEvent*) ```
void q_graphicsproxywidget_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnCustomEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QMetaMethod* signal ```
void q_graphicsproxywidget_connect_notify(void* self, void* signal) {
    QGraphicsProxyWidget_ConnectNotify((QGraphicsProxyWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QMetaMethod* signal ```
void q_graphicsproxywidget_qbase_connect_notify(void* self, void* signal) {
    QGraphicsProxyWidget_QBaseConnectNotify((QGraphicsProxyWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QMetaMethod*) ```
void q_graphicsproxywidget_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnConnectNotify((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QMetaMethod* signal ```
void q_graphicsproxywidget_disconnect_notify(void* self, void* signal) {
    QGraphicsProxyWidget_DisconnectNotify((QGraphicsProxyWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QMetaMethod* signal ```
void q_graphicsproxywidget_qbase_disconnect_notify(void* self, void* signal) {
    QGraphicsProxyWidget_QBaseDisconnectNotify((QGraphicsProxyWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QMetaMethod*) ```
void q_graphicsproxywidget_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnDisconnectNotify((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, int phase ```
void q_graphicsproxywidget_advance(void* self, int phase) {
    QGraphicsProxyWidget_Advance((QGraphicsProxyWidget*)self, phase);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, int phase ```
void q_graphicsproxywidget_qbase_advance(void* self, int phase) {
    QGraphicsProxyWidget_QBaseAdvance((QGraphicsProxyWidget*)self, phase);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, int) ```
void q_graphicsproxywidget_on_advance(void* self, void (*slot)(void*, int)) {
    QGraphicsProxyWidget_OnAdvance((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QPointF* point ```
bool q_graphicsproxywidget_contains(void* self, void* point) {
    return QGraphicsProxyWidget_Contains((QGraphicsProxyWidget*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QPointF* point ```
bool q_graphicsproxywidget_qbase_contains(void* self, void* point) {
    return QGraphicsProxyWidget_QBaseContains((QGraphicsProxyWidget*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, bool (*slot)(QGraphicsProxyWidget*, QPointF*) ```
void q_graphicsproxywidget_on_contains(void* self, bool (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnContains((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicsproxywidget_collides_with_item(void* self, void* other, int64_t mode) {
    return QGraphicsProxyWidget_CollidesWithItem((QGraphicsProxyWidget*)self, (QGraphicsItem*)other, mode);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicsproxywidget_qbase_collides_with_item(void* self, void* other, int64_t mode) {
    return QGraphicsProxyWidget_QBaseCollidesWithItem((QGraphicsProxyWidget*)self, (QGraphicsItem*)other, mode);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, bool (*slot)(QGraphicsProxyWidget*, QGraphicsItem*, enum Qt__ItemSelectionMode) ```
void q_graphicsproxywidget_on_collides_with_item(void* self, bool (*slot)(void*, void*, int64_t)) {
    QGraphicsProxyWidget_OnCollidesWithItem((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicsproxywidget_collides_with_path(void* self, void* path, int64_t mode) {
    return QGraphicsProxyWidget_CollidesWithPath((QGraphicsProxyWidget*)self, (QPainterPath*)path, mode);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicsproxywidget_qbase_collides_with_path(void* self, void* path, int64_t mode) {
    return QGraphicsProxyWidget_QBaseCollidesWithPath((QGraphicsProxyWidget*)self, (QPainterPath*)path, mode);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, bool (*slot)(QGraphicsProxyWidget*, QPainterPath*, enum Qt__ItemSelectionMode) ```
void q_graphicsproxywidget_on_collides_with_path(void* self, bool (*slot)(void*, void*, int64_t)) {
    QGraphicsProxyWidget_OnCollidesWithPath((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* item ```
bool q_graphicsproxywidget_is_obscured_by(void* self, void* item) {
    return QGraphicsProxyWidget_IsObscuredBy((QGraphicsProxyWidget*)self, (QGraphicsItem*)item);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* item ```
bool q_graphicsproxywidget_qbase_is_obscured_by(void* self, void* item) {
    return QGraphicsProxyWidget_QBaseIsObscuredBy((QGraphicsProxyWidget*)self, (QGraphicsItem*)item);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, bool (*slot)(QGraphicsProxyWidget*, QGraphicsItem*) ```
void q_graphicsproxywidget_on_is_obscured_by(void* self, bool (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnIsObscuredBy((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
QPainterPath* q_graphicsproxywidget_opaque_area(void* self) {
    return QGraphicsProxyWidget_OpaqueArea((QGraphicsProxyWidget*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
QPainterPath* q_graphicsproxywidget_qbase_opaque_area(void* self) {
    return QGraphicsProxyWidget_QBaseOpaqueArea((QGraphicsProxyWidget*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QPainterPath* (*slot)() ```
void q_graphicsproxywidget_on_opaque_area(void* self, QPainterPath* (*slot)()) {
    QGraphicsProxyWidget_OnOpaqueArea((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicsproxywidget_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsProxyWidget_SceneEventFilter((QGraphicsProxyWidget*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicsproxywidget_qbase_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsProxyWidget_QBaseSceneEventFilter((QGraphicsProxyWidget*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, bool (*slot)(QGraphicsProxyWidget*, QGraphicsItem*, QEvent*) ```
void q_graphicsproxywidget_on_scene_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGraphicsProxyWidget_OnSceneEventFilter((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, enum QGraphicsItem__Extension extension ```
bool q_graphicsproxywidget_supports_extension(void* self, int64_t extension) {
    return QGraphicsProxyWidget_SupportsExtension((QGraphicsProxyWidget*)self, extension);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, enum QGraphicsItem__Extension extension ```
bool q_graphicsproxywidget_qbase_supports_extension(void* self, int64_t extension) {
    return QGraphicsProxyWidget_QBaseSupportsExtension((QGraphicsProxyWidget*)self, extension);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, bool (*slot)(QGraphicsProxyWidget*, enum QGraphicsItem__Extension) ```
void q_graphicsproxywidget_on_supports_extension(void* self, bool (*slot)(void*, int64_t)) {
    QGraphicsProxyWidget_OnSupportsExtension((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicsproxywidget_set_extension(void* self, int64_t extension, void* variant) {
    QGraphicsProxyWidget_SetExtension((QGraphicsProxyWidget*)self, extension, (QVariant*)variant);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicsproxywidget_qbase_set_extension(void* self, int64_t extension, void* variant) {
    QGraphicsProxyWidget_QBaseSetExtension((QGraphicsProxyWidget*)self, extension, (QVariant*)variant);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, enum QGraphicsItem__Extension, QVariant*) ```
void q_graphicsproxywidget_on_set_extension(void* self, void (*slot)(void*, int64_t, void*)) {
    QGraphicsProxyWidget_OnSetExtension((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QVariant* variant ```
QVariant* q_graphicsproxywidget_extension(void* self, void* variant) {
    return QGraphicsProxyWidget_Extension((QGraphicsProxyWidget*)self, (QVariant*)variant);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QVariant* variant ```
QVariant* q_graphicsproxywidget_qbase_extension(void* self, void* variant) {
    return QGraphicsProxyWidget_QBaseExtension((QGraphicsProxyWidget*)self, (QVariant*)variant);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QVariant* (*slot)(QGraphicsProxyWidget*, QVariant*) ```
void q_graphicsproxywidget_on_extension(void* self, QVariant* (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnExtension((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_empty(void* self) {
    return QGraphicsProxyWidget_IsEmpty((QGraphicsProxyWidget*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_qbase_is_empty(void* self) {
    return QGraphicsProxyWidget_QBaseIsEmpty((QGraphicsProxyWidget*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, bool (*slot)() ```
void q_graphicsproxywidget_on_is_empty(void* self, bool (*slot)()) {
    QGraphicsProxyWidget_OnIsEmpty((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_update_micro_focus(void* self) {
    QGraphicsProxyWidget_UpdateMicroFocus((QGraphicsProxyWidget*)self);
}

/// Inherited from QGraphicsObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_qbase_update_micro_focus(void* self) {
    QGraphicsProxyWidget_QBaseUpdateMicroFocus((QGraphicsProxyWidget*)self);
}

/// Inherited from QGraphicsObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)() ```
void q_graphicsproxywidget_on_update_micro_focus(void* self, void (*slot)()) {
    QGraphicsProxyWidget_OnUpdateMicroFocus((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
QObject* q_graphicsproxywidget_sender(void* self) {
    return QGraphicsProxyWidget_Sender((QGraphicsProxyWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
QObject* q_graphicsproxywidget_qbase_sender(void* self) {
    return QGraphicsProxyWidget_QBaseSender((QGraphicsProxyWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QObject* (*slot)() ```
void q_graphicsproxywidget_on_sender(void* self, QObject* (*slot)()) {
    QGraphicsProxyWidget_OnSender((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
int32_t q_graphicsproxywidget_sender_signal_index(void* self) {
    return QGraphicsProxyWidget_SenderSignalIndex((QGraphicsProxyWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
int32_t q_graphicsproxywidget_qbase_sender_signal_index(void* self) {
    return QGraphicsProxyWidget_QBaseSenderSignalIndex((QGraphicsProxyWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, int32_t (*slot)() ```
void q_graphicsproxywidget_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QGraphicsProxyWidget_OnSenderSignalIndex((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, const char* signal ```
int32_t q_graphicsproxywidget_receivers(void* self, const char* signal) {
    return QGraphicsProxyWidget_Receivers((QGraphicsProxyWidget*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, const char* signal ```
int32_t q_graphicsproxywidget_qbase_receivers(void* self, const char* signal) {
    return QGraphicsProxyWidget_QBaseReceivers((QGraphicsProxyWidget*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, int32_t (*slot)(QGraphicsProxyWidget*, const char*) ```
void q_graphicsproxywidget_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QGraphicsProxyWidget_OnReceivers((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QMetaMethod* signal ```
bool q_graphicsproxywidget_is_signal_connected(void* self, void* signal) {
    return QGraphicsProxyWidget_IsSignalConnected((QGraphicsProxyWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QMetaMethod* signal ```
bool q_graphicsproxywidget_qbase_is_signal_connected(void* self, void* signal) {
    return QGraphicsProxyWidget_QBaseIsSignalConnected((QGraphicsProxyWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, bool (*slot)(QGraphicsProxyWidget*, QMetaMethod*) ```
void q_graphicsproxywidget_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnIsSignalConnected((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_add_to_index(void* self) {
    QGraphicsProxyWidget_AddToIndex((QGraphicsProxyWidget*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_qbase_add_to_index(void* self) {
    QGraphicsProxyWidget_QBaseAddToIndex((QGraphicsProxyWidget*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)() ```
void q_graphicsproxywidget_on_add_to_index(void* self, void (*slot)()) {
    QGraphicsProxyWidget_OnAddToIndex((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_remove_from_index(void* self) {
    QGraphicsProxyWidget_RemoveFromIndex((QGraphicsProxyWidget*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_qbase_remove_from_index(void* self) {
    QGraphicsProxyWidget_QBaseRemoveFromIndex((QGraphicsProxyWidget*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)() ```
void q_graphicsproxywidget_on_remove_from_index(void* self, void (*slot)()) {
    QGraphicsProxyWidget_OnRemoveFromIndex((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_prepare_geometry_change(void* self) {
    QGraphicsProxyWidget_PrepareGeometryChange((QGraphicsProxyWidget*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_qbase_prepare_geometry_change(void* self) {
    QGraphicsProxyWidget_QBasePrepareGeometryChange((QGraphicsProxyWidget*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)() ```
void q_graphicsproxywidget_on_prepare_geometry_change(void* self, void (*slot)()) {
    QGraphicsProxyWidget_OnPrepareGeometryChange((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* item ```
void q_graphicsproxywidget_set_graphics_item(void* self, void* item) {
    QGraphicsProxyWidget_SetGraphicsItem((QGraphicsProxyWidget*)self, (QGraphicsItem*)item);
}

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* item ```
void q_graphicsproxywidget_qbase_set_graphics_item(void* self, void* item) {
    QGraphicsProxyWidget_QBaseSetGraphicsItem((QGraphicsProxyWidget*)self, (QGraphicsItem*)item);
}

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsItem*) ```
void q_graphicsproxywidget_on_set_graphics_item(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnSetGraphicsItem((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, bool ownedByLayout ```
void q_graphicsproxywidget_set_owned_by_layout(void* self, bool ownedByLayout) {
    QGraphicsProxyWidget_SetOwnedByLayout((QGraphicsProxyWidget*)self, ownedByLayout);
}

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, bool ownedByLayout ```
void q_graphicsproxywidget_qbase_set_owned_by_layout(void* self, bool ownedByLayout) {
    QGraphicsProxyWidget_QBaseSetOwnedByLayout((QGraphicsProxyWidget*)self, ownedByLayout);
}

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, bool) ```
void q_graphicsproxywidget_on_set_owned_by_layout(void* self, void (*slot)(void*, bool)) {
    QGraphicsProxyWidget_OnSetOwnedByLayout((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_delete(void* self) {
    QGraphicsProxyWidget_Delete((QGraphicsProxyWidget*)(self));
}